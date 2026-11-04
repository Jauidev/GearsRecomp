#pragma once

// Xenos shaders the SPIR-V cache lacks, translated while the game runs (Xcompiler): the same
// XenosRecomp and DXC that make the cache offline (tools/shaders.py), with the same arguments, so
// a translated shader is the module the cache would have held. DXC is loaded on first use
// (dxcompiler.dll next to the exe, libdxcompiler.so in the APK); without it, or with
// XNATIVE_RUNTIME_SHADERS=0, a shader missing from the cache is still a cache miss.
// Translations are kept on disk ($XNATIVE_SHADER_CACHE_DIR, else <user folder>/xnative-shaders),
// so each shader is translated once.

#include <cstdint>
#include <vector>

#include <shader/shader_cache.h>

namespace rex::graphics::xnative {

struct RuntimeShader {
  // spirvOffset/lateSpirvOffset are offsets into smolv.
  ShaderCacheEntry entry;
  std::vector<uint8_t> smolv;
};

// Called by the D3D hook with the guest's shader container (header, constant table and microcode,
// big-endian) before D3D sees it. Translates the shader when neither the cache nor an earlier
// translation has it. hash is the canonical hash the renderer looks shaders up by.
void PrepareRuntimeShader(uint64_t hash, const uint8_t* container, uint32_t size, bool pixel);

// The translation of a shader the cache lacks, or nullptr.
const RuntimeShader* FindRuntimeShader(uint64_t hash);

#if XPORT_TITLE_ID == 0x4D5307D5
// Gears of War (from the Gears of War 3 port): shaders the cache lacks are translated on a thread of
// their own (XpShaderXlate) instead of in the D3D hook, where each took 49-93 ms of the game's render
// thread (phone, 2026-11-04: four at once in the prison cell froze the game ~0.3 s). Their draws are
// skipped until the translation is done, as draws whose pipeline is still compiling are. On by
// default on Android; XNATIVE_ASYNC_SHADERS=0/1 overrides.
bool AsyncRuntimeShaders();

// As PrepareRuntimeShader, but a shader that has to be translated is queued: true while it waits
// or is being translated (the caller registers it once RuntimeShaderPending says it is done).
bool QueueRuntimeShader(uint64_t hash, const uint8_t* container, uint32_t size, bool pixel);
bool RuntimeShaderPending(uint64_t hash);

// How many queued translations have finished (succeeded or failed), to tell cheaply whether any
// pending one may be done.
uint64_t RuntimeShaderSerial();
#endif

}  // namespace rex::graphics::xnative
