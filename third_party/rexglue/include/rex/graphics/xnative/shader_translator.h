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

}  // namespace rex::graphics::xnative
