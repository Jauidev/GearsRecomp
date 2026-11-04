#include <rex/graphics/xnative/shader_translator.h>

#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <memory>
#include <mutex>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include <smolv.h>
#include <xxhash.h>

#include <rex/filesystem.h>
#include <rex/logging.h>
#include <rex/platform.h>

#if REX_PLATFORM_WINDOWS
#include <windows.h>
#include <objbase.h>
#else
#include <dlfcn.h>
#endif
#include <dxcapi.h>

#include "xenos_recomp_bridge.h"

#if XPORT_TITLE_ID == 0x4D5307D5
#include <atomic>
#include <condition_variable>
#include <deque>
#include <thread>
#if !REX_PLATFORM_WINDOWS
#include <pthread.h>
#include <sys/resource.h>
#endif
#endif

namespace rex::graphics::xnative {
namespace {

// tools/shaders/xenos_shader_common.h, the header tools/shaders.py hands XenosRecomp (embedded by
// cmake/rexglue.cmake).
const char kShaderCommon[] = {
#include "xenos_shader_common.inc"
    0};

// Bump when a translation would change (XenosRecomp patches, DXC arguments), so that the disk
// entries of an older one are translated again.
constexpr uint32_t kTranslatorVersion = 1;
constexpr uint32_t kDiskMagic = 0x31485358;  // "XSH1"

struct DiskHeader {
  uint32_t magic;
  uint32_t version;
  uint64_t key;
  uint64_t hash;
  uint32_t pixel;
  uint32_t spec_constants_mask;
  uint32_t used_texture_mask;
  uint32_t smolv_size;
};

std::mutex g_mutex;
std::unordered_map<uint64_t, std::unique_ptr<RuntimeShader>> g_shaders;
std::unordered_set<uint64_t> g_failed;

bool Enabled() {
  static const bool enabled = [] {
    const char* value = std::getenv("XNATIVE_RUNTIME_SHADERS");
    return !value || value[0] != '0';
  }();
  return enabled;
}

bool InStockCache(uint64_t hash) {
  const ShaderCacheEntry* begin = g_shaderCacheEntries;
  const ShaderCacheEntry* end = begin + g_shaderCacheEntryCount;
  const ShaderCacheEntry* entry = std::lower_bound(
      begin, end, hash,
      [](const ShaderCacheEntry& candidate, uint64_t value) { return candidate.hash < value; });
  return entry != end && entry->hash == hash;
}

// XNATIVE_SHADER_PATCH=<file>, to see what a shader computes: "=== <hash>" lines, each followed by HLSL
// that goes at the end of that shader, where output.oC0 / output.oTexCoordN can be overwritten.
// Those shaders are translated here even if the cache has them, and never kept on disk.
const std::string* ShaderPatch(uint64_t hash) {
  static const std::unordered_map<uint64_t, std::string> patches = [] {
    std::unordered_map<uint64_t, std::string> result;
    const char* path = std::getenv("XNATIVE_SHADER_PATCH");
    if (!path || !*path) {
      return result;
    }
    FILE* file = std::fopen(path, "r");
    if (!file) {
      return result;
    }
    char line[1024];
    std::string* current = nullptr;
    while (std::fgets(line, sizeof(line), file)) {
      if (!std::strncmp(line, "=== ", 4)) {
        current = &result[std::strtoull(line + 4, nullptr, 16)];
      } else if (current) {
        current->append(line);
      }
    }
    std::fclose(file);
    return result;
  }();
  const auto found = patches.find(hash);
  return found != patches.end() ? &found->second : nullptr;
}

uint64_t TranslatorKey() {
  static const uint64_t key =
      XXH3_64bits_withSeed(kShaderCommon, std::strlen(kShaderCommon), kTranslatorVersion);
  return key;
}

// $XNATIVE_SHADER_CACHE_DIR, else next to the save folder (the app's files folder on Android),
// else the user folder.
const std::filesystem::path& DiskFolder() {
  static const std::filesystem::path folder = [] {
    if (const char* value = std::getenv("XNATIVE_SHADER_CACHE_DIR"); value && *value) {
      return std::filesystem::path(value);
    }
    if (const char* save = std::getenv("XPORT_SAVE_DIR"); save && *save) {
      return std::filesystem::path(save).parent_path() / "xnative-shaders";
    }
    return rex::filesystem::GetUserFolder() / "xnative-shaders";
  }();
  return folder;
}

std::filesystem::path DiskPath(uint64_t hash) {
  char name[32];
  std::snprintf(name, sizeof(name), "%016llX.xsh", static_cast<unsigned long long>(hash));
  return DiskFolder() / name;
}

std::unique_ptr<RuntimeShader> MakeShader(uint64_t hash, bool pixel, uint32_t spec_constants_mask,
                                          uint32_t used_texture_mask, std::vector<uint8_t> smolv) {
  // As tools/shaders.py's cache: an alpha-tested pixel shader's module is also its late-Z one.
  const bool late = pixel && (spec_constants_mask & 0x702) == 0x702;
  const uint32_t size = uint32_t(smolv.size());
  auto shader = std::make_unique<RuntimeShader>(RuntimeShader{
      ShaderCacheEntry{hash, 0, 0, 0, size, 0, late ? size : 0, 0, 0, spec_constants_mask, {},
                       nullptr, used_texture_mask},
      std::move(smolv)});
  std::snprintf(shader->entry.filename, sizeof(shader->entry.filename), "runtime/%016llX_%s",
                static_cast<unsigned long long>(hash), pixel ? "ps" : "vs");
  return shader;
}

std::unique_ptr<RuntimeShader> LoadFromDisk(uint64_t hash, bool pixel) {
  FILE* file = std::fopen(DiskPath(hash).string().c_str(), "rb");
  if (!file) {
    return nullptr;
  }
  DiskHeader header{};
  std::vector<uint8_t> smolv;
  bool valid = std::fread(&header, sizeof(header), 1, file) == 1 && header.magic == kDiskMagic &&
               header.version == kTranslatorVersion && header.key == TranslatorKey() &&
               header.hash == hash && header.pixel == uint32_t(pixel) && header.smolv_size;
  if (valid) {
    smolv.resize(header.smolv_size);
    valid = std::fread(smolv.data(), 1, smolv.size(), file) == smolv.size();
  }
  std::fclose(file);
  if (!valid) {
    return nullptr;
  }
  return MakeShader(hash, pixel, header.spec_constants_mask, header.used_texture_mask,
                    std::move(smolv));
}

void SaveToDisk(const RuntimeShader& shader, bool pixel) {
  std::error_code error;
  std::filesystem::create_directories(DiskFolder(), error);
  const std::filesystem::path path = DiskPath(shader.entry.hash);
  std::filesystem::path temporary = path;
  temporary += ".tmp";
  FILE* file = std::fopen(temporary.string().c_str(), "wb");
  if (!file) {
    return;
  }
  const DiskHeader header{kDiskMagic,
                          kTranslatorVersion,
                          TranslatorKey(),
                          shader.entry.hash,
                          uint32_t(pixel),
                          shader.entry.specConstantsMask,
                          shader.entry.usedTextureMask,
                          uint32_t(shader.smolv.size())};
  const bool written = std::fwrite(&header, sizeof(header), 1, file) == 1 &&
                       std::fwrite(shader.smolv.data(), 1, shader.smolv.size(), file) ==
                           shader.smolv.size();
  std::fclose(file);
  if (written) {
    std::filesystem::rename(temporary, path, error);
  } else {
    std::filesystem::remove(temporary, error);
  }
}

// DXC, loaded once: dxcompiler.dll next to the exe, libdxcompiler.so in the APK.
IDxcCompiler3* Compiler() {
  static IDxcCompiler3* compiler = [] {
    DxcCreateInstanceProc create = nullptr;
#if REX_PLATFORM_WINDOWS
    if (HMODULE module = LoadLibraryW(L"dxcompiler.dll")) {
      create = reinterpret_cast<DxcCreateInstanceProc>(GetProcAddress(module, "DxcCreateInstance"));
    }
#else
    if (void* module = dlopen("libdxcompiler.so", RTLD_NOW | RTLD_LOCAL)) {
      create = reinterpret_cast<DxcCreateInstanceProc>(dlsym(module, "DxcCreateInstance"));
    }
#endif
    IDxcCompiler3* instance = nullptr;
    if (!create || FAILED(create(CLSID_DxcCompiler, IID_PPV_ARGS(&instance)))) {
      REXLOG_ERROR("xnative: runtime shader translator unavailable (DXC did not load); shaders "
                   "missing from the cache are not drawn");
      return static_cast<IDxcCompiler3*>(nullptr);
    }
    return instance;
  }();
  return compiler;
}

// HLSL to SPIR-V with tools/shaders.py's arguments (XenosRecomp's dxc_compiler.cpp), then
// SMOL-V without debug information, as the cache stores it.
bool CompileSpirv(IDxcCompiler3* compiler, const std::string& hlsl, bool pixel,
                  std::vector<uint8_t>& smolv, std::string& error) {
  const DxcBuffer source{hlsl.data(), hlsl.size(), 0};
  const wchar_t* arguments[8];
  uint32_t count = 0;
  arguments[count++] = L"-E shaderMain";
  arguments[count++] = pixel ? L"-T ps_6_0" : L"-T vs_6_0";
  arguments[count++] = L"-HV 2021";
  arguments[count++] = L"-all-resources-bound";
  arguments[count++] = L"-spirv";
  arguments[count++] = L"-fvk-use-dx-layout";
  if (!pixel) {
    arguments[count++] = L"-fvk-invert-y";
  }
  arguments[count++] = L"-Qstrip_debug";

  IDxcResult* result = nullptr;
  if (FAILED(compiler->Compile(&source, arguments, count, nullptr, IID_PPV_ARGS(&result))) ||
      !result) {
    error = "DXC call failed";
    return false;
  }
  HRESULT status = E_FAIL;
  result->GetStatus(&status);
  bool compiled = false;
  if (FAILED(status)) {
    IDxcBlobUtf8* errors = nullptr;
    if (SUCCEEDED(result->GetOutput(DXC_OUT_ERRORS, IID_PPV_ARGS(&errors), nullptr)) && errors) {
      error.assign(errors->GetStringPointer(), errors->GetStringLength());
      errors->Release();
    }
  } else {
    IDxcBlob* object = nullptr;
    if (SUCCEEDED(result->GetOutput(DXC_OUT_OBJECT, IID_PPV_ARGS(&object), nullptr)) && object) {
      compiled = smolv::Encode(object->GetBufferPointer(), object->GetBufferSize(), smolv,
                               smolv::kEncodeFlagStripDebugInfo);
      if (!compiled) {
        error = "SMOL-V encoding failed";
      }
      object->Release();
    }
  }
  result->Release();
  return compiled;
}

}  // namespace

void PrepareRuntimeShader(uint64_t hash, const uint8_t* container, uint32_t size, bool pixel) {
  const std::string* patch = ShaderPatch(hash);
  if (!Enabled() || !container || !size || (!patch && InStockCache(hash))) {
    return;
  }
  std::lock_guard lock(g_mutex);
  if (g_shaders.count(hash) || g_failed.count(hash)) {
    return;
  }
  if (auto shader = patch ? nullptr : LoadFromDisk(hash, pixel)) {
    g_shaders.emplace(hash, std::move(shader));
    return;
  }
  IDxcCompiler3* compiler = Compiler();
  if (!compiler) {
    g_failed.insert(hash);
    return;
  }

  const auto start = std::chrono::steady_clock::now();
  // A copy, so the title cannot change the container under the recompiler.
  const std::vector<uint8_t> copy(container, container + size);
  XenosRecompOutput output;
  std::vector<uint8_t> smolv;
  if (!RecompileXenosShader(copy.data(), kShaderCommon, output)) {
    REXLOG_ERROR("xnative: runtime shader translation failed for {} shader {:016X}: {}",
                 pixel ? "pixel" : "vertex", hash, output.error);
    g_failed.insert(hash);
    return;
  }
  if (output.pixel != pixel) {
    REXLOG_ERROR("xnative: runtime shader {:016X} is a {} shader registered as {}", hash,
                 output.pixel ? "pixel" : "vertex", pixel ? "pixel" : "vertex");
    g_failed.insert(hash);
    return;
  }
  if (patch) {
    const size_t end = output.hlsl.rfind(pixel ? "BRANCH if (g_SpecConstants() & SPEC_CONSTANT_ALPHA_TEST)"
                                               : "if (g_ClipPlaneEnabled)");
    if (end != std::string::npos) {
      output.hlsl.insert(end, *patch);
    }
  }
  if (!CompileSpirv(compiler, output.hlsl, pixel, smolv, output.error)) {
    REXLOG_ERROR("xnative: DXC rejected runtime {} shader {:016X}: {}", pixel ? "pixel" : "vertex",
                 hash, output.error.substr(0, 400));
    g_failed.insert(hash);
    return;
  }
  auto shader = MakeShader(hash, pixel, output.spec_constants_mask, output.used_texture_mask,
                           std::move(smolv));
  if (!patch) {
    SaveToDisk(*shader, pixel);
  }
  const auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(
                                std::chrono::steady_clock::now() - start)
                                .count();
  REXLOG_INFO("xnative: translated {} shader {:016X} in {} ms ({} SMOL-V bytes)",
              pixel ? "pixel" : "vertex", hash, milliseconds, shader->smolv.size());
  g_shaders.emplace(hash, std::move(shader));
}

const RuntimeShader* FindRuntimeShader(uint64_t hash) {
  std::lock_guard lock(g_mutex);
  const auto found = g_shaders.find(hash);
  return found != g_shaders.end() ? found->second.get() : nullptr;
}

#if XPORT_TITLE_ID == 0x4D5307D5
namespace {

struct ShaderJob {
  uint64_t hash;
  bool pixel;
  std::vector<uint8_t> container;
};

// The queue of the translation thread. Never destroyed: the thread may still be translating while
// the process exits.
struct AsyncShaderState {
  std::mutex mutex;
  std::condition_variable wake;
  std::deque<ShaderJob> jobs;
  // queued or being translated; a hash leaves it after its result is in g_shaders or g_failed.
  std::unordered_set<uint64_t> pending;
  std::atomic<uint64_t> finished{0};
  bool started = false;
};

AsyncShaderState& AsyncShaders() {
  static AsyncShaderState* const state = new AsyncShaderState;
  return *state;
}

// PrepareRuntimeShader's translation, without its lock (only the translation thread runs this one,
// and PrepareRuntimeShader is not called while asynchronous translation is on).
std::unique_ptr<RuntimeShader> TranslateQueuedShader(const ShaderJob& job) {
  IDxcCompiler3* compiler = Compiler();
  if (!compiler) {
    return nullptr;
  }
  const bool pixel = job.pixel;
  const std::string* patch = ShaderPatch(job.hash);
  const auto start = std::chrono::steady_clock::now();
  XenosRecompOutput output;
  std::vector<uint8_t> smolv;
  if (!RecompileXenosShader(job.container.data(), kShaderCommon, output)) {
    REXLOG_ERROR("xnative: runtime shader translation failed for {} shader {:016X}: {}",
                 pixel ? "pixel" : "vertex", job.hash, output.error);
    return nullptr;
  }
  if (output.pixel != pixel) {
    REXLOG_ERROR("xnative: runtime shader {:016X} is a {} shader registered as {}", job.hash,
                 output.pixel ? "pixel" : "vertex", pixel ? "pixel" : "vertex");
    return nullptr;
  }
  if (patch) {
    const size_t end = output.hlsl.rfind(pixel ? "BRANCH if (g_SpecConstants() & SPEC_CONSTANT_ALPHA_TEST)"
                                               : "if (g_ClipPlaneEnabled)");
    if (end != std::string::npos) {
      output.hlsl.insert(end, *patch);
    }
  }
  if (!CompileSpirv(compiler, output.hlsl, pixel, smolv, output.error)) {
    REXLOG_ERROR("xnative: DXC rejected runtime {} shader {:016X}: {}", pixel ? "pixel" : "vertex",
                 job.hash, output.error.substr(0, 400));
    return nullptr;
  }
  auto shader = MakeShader(job.hash, pixel, output.spec_constants_mask, output.used_texture_mask,
                           std::move(smolv));
  if (!patch) {
    SaveToDisk(*shader, pixel);
  }
  const auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(
                                std::chrono::steady_clock::now() - start)
                                .count();
  REXLOG_INFO("xnative: translated {} shader {:016X} in {} ms ({} SMOL-V bytes, in the background)",
              pixel ? "pixel" : "vertex", job.hash, milliseconds, shader->smolv.size());
  return shader;
}

void TranslationThread() {
#if defined(__ANDROID__) || defined(__linux__)
  pthread_setname_np(pthread_self(), "XpShaderXlate");
#endif
#ifdef __ANDROID__
  // As the runtime's other background threads (XpTexCache, XpRetirer: nice 4): a translation never
  // preempts the game's threads, it only fills idle time.
  setpriority(PRIO_PROCESS, 0, 4);
#endif
  AsyncShaderState& state = AsyncShaders();
  std::unique_lock lock(state.mutex);
  while (true) {
    state.wake.wait(lock, [&state] { return !state.jobs.empty(); });
    ShaderJob job = std::move(state.jobs.front());
    state.jobs.pop_front();
    lock.unlock();
    std::unique_ptr<RuntimeShader> shader = TranslateQueuedShader(job);
    {
      std::lock_guard shaders_lock(g_mutex);
      if (shader) {
        g_shaders.emplace(job.hash, std::move(shader));
      } else {
        g_failed.insert(job.hash);
      }
    }
    lock.lock();
    state.pending.erase(job.hash);
    state.finished.fetch_add(1, std::memory_order_release);
  }
}

}  // namespace

bool AsyncRuntimeShaders() {
  static const bool enabled = [] {
    if (const char* value = std::getenv("XNATIVE_ASYNC_SHADERS"); value && *value) {
      return value[0] == '1';
    }
#ifdef __ANDROID__
    return true;
#else
    return false;
#endif
  }();
  return enabled;
}

bool QueueRuntimeShader(uint64_t hash, const uint8_t* container, uint32_t size, bool pixel) {
  const std::string* patch = ShaderPatch(hash);
  if (!Enabled() || !container || !size || (!patch && InStockCache(hash))) {
    return false;
  }
  AsyncShaderState& state = AsyncShaders();
  {
    std::lock_guard lock(state.mutex);
    if (state.pending.count(hash)) {
      return true;
    }
  }
  // Not pending: either never queued, or its result is already in g_shaders/g_failed (the thread
  // stores it before it leaves pending).
  {
    std::lock_guard lock(g_mutex);
    if (g_shaders.count(hash) || g_failed.count(hash)) {
      return false;
    }
  }
  // A translation kept on disk is a small file: read here, as PrepareRuntimeShader does.
  if (!patch) {
    if (auto shader = LoadFromDisk(hash, pixel)) {
      std::lock_guard lock(g_mutex);
      g_shaders.emplace(hash, std::move(shader));
      return false;
    }
  }
  std::lock_guard lock(state.mutex);
  if (!state.pending.insert(hash).second) {
    return true;
  }
  // A copy, so the title cannot change the container under the recompiler.
  state.jobs.push_back({hash, pixel, std::vector<uint8_t>(container, container + size)});
  if (!state.started) {
    state.started = true;
    std::thread(TranslationThread).detach();
  }
  state.wake.notify_one();
  return true;
}

bool RuntimeShaderPending(uint64_t hash) {
  AsyncShaderState& state = AsyncShaders();
  std::lock_guard lock(state.mutex);
  return state.pending.count(hash) != 0;
}

uint64_t RuntimeShaderSerial() {
  return AsyncShaders().finished.load(std::memory_order_acquire);
}
#endif

}  // namespace rex::graphics::xnative
