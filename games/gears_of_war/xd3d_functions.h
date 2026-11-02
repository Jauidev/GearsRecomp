#pragma once

// This game's D3D and XDK library functions, by name (tools/find_d3d.py; the hooks and the
// runtime use only these names). Generated: check the report before trusting a line.
#include "ppc_recomp_shared.h"

#define XD3D_PASTE2(a, b) a##b
#define XD3D_PASTE(a, b) XD3D_PASTE2(a, b)
#define XD3D_IMP(name) XD3D_PASTE(__imp__, XD3D_##name)

#define XD3D_AcquireCommandScratch sub_8222ECC0  // by calls, 0.792: check it
#define XD3D_BeginIndexedVertices sub_8222D4F8  // by hand: (primitive, base vertex, vertices, indices, index format, stride, &indices, &vertices on the stack +84): two 82220EB0 allocations, VGT_INDX_OFFSET = base vertex, stores both at +13080/+13084 like BeginVertices; UE3 calls it twice (8254F298, 8254F378)
#define XD3D_BeginTiling sub_822364F8  // by calls, 0.74: check it
#define XD3D_BeginVertices sub_8222CFF8  // by calls, 0.856: check it
#define XD3D_BindVertexShader sub_82234D70  // by hand: IDirect3DVertexShader9::Bind (shader, flags, declaration, strides, pixel shader): reads the declaration's +0x1C and the shader's +896 vfetch table, marks +872 bit 0x40; UE3 (825A4810) binds each shader once, then draws with the declaration at 0 (82591AF0 stores 0 at 11536)
#define XD3D_ClearRectangle sub_8222C5C0  // by calls, 0.727: check it
#define XD3D_CreatePixelShader sub_82222710  // by hand: GTA 829D1758: the same allocation and copy, header 0x00100007 (CreateVertexShader is 82222AC8)
#define XD3D_CreateVertexShader sub_82222AC8  // alike, 0.829: check it
#define XD3D_DeviceCpuPrefix sub_8223AD10  // by calls, 0.828: check it
#define XD3D_DirtyAllState sub_82228458  // by calls, 0.844: check it
#define XD3D_DrawIndexedVertices sub_8222DE50  // by calls, 0.881: check it
#define XD3D_DrawVertices sub_8222DA48  // by calls, 0.876: check it
#define XD3D_EndTiling sub_822369F0  // by calls, 0.738: check it
#define XD3D_GpuHangHandler sub_8222FD78  // by calls, 0.828: check it
#define XD3D_GpuWaitCheck sub_8222F460  // by hand: one turn of D3D's GPU waits (state on the caller's stack: device, reason, last read pointer, last progress tick, start tick, start timebase); calls GpuHangHandler after 5000 ticks without progress; called by the ring-space (82221A68), 82220BF0, 82221210 and 8223B058 wait loops
#define XD3D_GuestFree sub_82612898  // by hand: XMemFree: CreatePixelShader frees with it (flags 0x24800000), as GTA's with 8218C018
#define XD3D_InitDisplay sub_8223A348  // by calls, 0.824: check it
#define XD3D_InitDisplayMode sub_8223A0E0  // by calls, 0.906: check it
#define XD3D_InitEngines sub_82237E10  // by calls, 0.762: check it
#define XD3D_InitVertexShader sub_822229D0  // called by CreateVertexShader
#define XD3D_KickOff sub_822212D8  // by calls, 0.827: check it
#define XD3D_LockResource sub_8222E4C8  // by calls, 0.898: check it
#define XD3D_LockTextureRect sub_8221FA08
#define XD3D_LockTextureRectArray sub_8221F978
#define XD3D_PresentWorker sub_8223B7D0  // by calls, 0.891: check it
#define XD3D_QueryPerformanceFrequency sub_827A8130
#define XD3D_ReleaseResource sub_8222E8E0
#define XD3D_Resolve sub_82235528  // by calls, 0.77: check it
#define XD3D_SetDepthStencilSurface sub_8222B398  // by calls, 0.874: check it
#define XD3D_SetDeviceBits10916 sub_82230A20  // by calls, 1.0: check it
#define XD3D_SetIndices sub_8222AFD8  // by calls, 1.0: check it
#define XD3D_SetPixelShader sub_82222808  // by calls, 0.938: check it
#define XD3D_SetPredication sub_82236370  // by calls, 0.851: check it
#define XD3D_SetRenderTarget sub_8222B068  // by calls, 0.888: check it
#define XD3D_SetScissorRect sub_8222AB30  // by calls, 0.75: check it
#define XD3D_SetStreamSource sub_8222AE20  // by calls, 0.972: check it
#define XD3D_SetTexture sub_82220858  // by calls, 0.794: check it
#define XD3D_SetVertexShader sub_82222B98  // by calls, 0.965: check it
#define XD3D_Swap sub_8223E860  // by calls, 0.605: check it
#define XD3D_UnlockResource sub_8222E758  // alike, 0.919: check it
// XD3D_CommandListBindFences: not found
// XD3D_CreateDevice: not found
// XD3D_DeleteCommandList: inlined in sub_8222E2C8
// XD3D_DeviceClearFlagBit2: not found
// XD3D_EndVertices: not found
// XD3D_InitDeviceCpuState: not found
// XD3D_InitRing: inlined in sub_8223A840
// XD3D_LzxCreateDecoder: not found
// XD3D_LzxDecodeFrame: not found
// XD3D_LzxDecodeInternal: not found
// XD3D_LzxDestroyDecoder: not found
// XD3D_LzxParseBlock: not found
// XD3D_LzxResetDecoder: not found
// XD3D_PhysicalAlloc: not found
// XD3D_QueryFrameSlot: not found
// XD3D_RunCommandList: not found
// XD3D_SetPresentBehaviorBit: not found
// XD3D_SetShaderGprAllocation: inlined in sub_8223A0E0, sub_8223DC78
// XD3D_SetVertexDeclaration: inlined in sub_8222F650
// XD3D_SetVertexDeclarationDirect: not found
// XD3D_TilingRestoreConstants: inlined in sub_82228580, sub_822364F8, sub_822369F0
// XD3D_TilingRestoreState: inlined in sub_822369F0

#define XD3D_ADDR_NullClearColor 0x82135F08
#define XD3D_ADDR_VdGlobalDevice 0x82000868
// XD3D_ADDR_TilingRestoreArgument: not found

PPC_FUNC_IMPL(__imp__sub_8222ECC0);
PPC_FUNC_IMPL(__imp__sub_8222D4F8);
PPC_FUNC_IMPL(__imp__sub_822364F8);
PPC_FUNC_IMPL(__imp__sub_8222CFF8);
PPC_FUNC_IMPL(__imp__sub_82234D70);
PPC_FUNC_IMPL(__imp__sub_8222C5C0);
PPC_FUNC_IMPL(__imp__sub_82222710);
PPC_FUNC_IMPL(__imp__sub_82222AC8);
PPC_FUNC_IMPL(__imp__sub_8223AD10);
PPC_FUNC_IMPL(__imp__sub_82228458);
PPC_FUNC_IMPL(__imp__sub_8222DE50);
PPC_FUNC_IMPL(__imp__sub_8222DA48);
PPC_FUNC_IMPL(__imp__sub_822369F0);
PPC_FUNC_IMPL(__imp__sub_8222FD78);
PPC_FUNC_IMPL(__imp__sub_8222F460);
PPC_FUNC_IMPL(__imp__sub_82612898);
PPC_FUNC_IMPL(__imp__sub_8223A348);
PPC_FUNC_IMPL(__imp__sub_8223A0E0);
PPC_FUNC_IMPL(__imp__sub_82237E10);
PPC_FUNC_IMPL(__imp__sub_822229D0);
PPC_FUNC_IMPL(__imp__sub_822212D8);
PPC_FUNC_IMPL(__imp__sub_8222E4C8);
PPC_FUNC_IMPL(__imp__sub_8221FA08);
PPC_FUNC_IMPL(__imp__sub_8221F978);
PPC_FUNC_IMPL(__imp__sub_8223B7D0);
PPC_FUNC_IMPL(__imp__sub_827A8130);
PPC_FUNC_IMPL(__imp__sub_8222E8E0);
PPC_FUNC_IMPL(__imp__sub_82235528);
PPC_FUNC_IMPL(__imp__sub_8222B398);
PPC_FUNC_IMPL(__imp__sub_82230A20);
PPC_FUNC_IMPL(__imp__sub_8222AFD8);
PPC_FUNC_IMPL(__imp__sub_82222808);
PPC_FUNC_IMPL(__imp__sub_82236370);
PPC_FUNC_IMPL(__imp__sub_8222B068);
PPC_FUNC_IMPL(__imp__sub_8222AB30);
PPC_FUNC_IMPL(__imp__sub_8222AE20);
PPC_FUNC_IMPL(__imp__sub_82220858);
PPC_FUNC_IMPL(__imp__sub_82222B98);
PPC_FUNC_IMPL(__imp__sub_8223E860);
PPC_FUNC_IMPL(__imp__sub_8222E758);
