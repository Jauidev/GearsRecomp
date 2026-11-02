#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82ABD908"))) PPC_WEAK_FUNC(sub_82ABD908);
PPC_FUNC_IMPL(__imp__sub_82ABD908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,13960
	ctx.r3.s64 = ctx.r11.s64 + 13960;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABD914"))) PPC_WEAK_FUNC(sub_82ABD914);
PPC_FUNC_IMPL(__imp__sub_82ABD914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD918"))) PPC_WEAK_FUNC(sub_82ABD918);
PPC_FUNC_IMPL(__imp__sub_82ABD918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16764
	ctx.r4.s64 = ctx.r11.s64 + 16764;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-10176
	ctx.r3.s64 = ctx.r11.s64 + -10176;
	// bl 0x821704f8
	ctx.lr = 0x82ABD938;
	sub_821704F8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,13976
	ctx.r3.s64 = ctx.r11.s64 + 13976;
	// bl 0x828d1968
	ctx.lr = 0x82ABD944;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABD954"))) PPC_WEAK_FUNC(sub_82ABD954);
PPC_FUNC_IMPL(__imp__sub_82ABD954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD958"))) PPC_WEAK_FUNC(sub_82ABD958);
PPC_FUNC_IMPL(__imp__sub_82ABD958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-10144
	ctx.r11.s64 = ctx.r11.s64 + -10144;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABD990"))) PPC_WEAK_FUNC(sub_82ABD990);
PPC_FUNC_IMPL(__imp__sub_82ABD990) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-10160
	ctx.r11.s64 = ctx.r11.s64 + -10160;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABD9C0"))) PPC_WEAK_FUNC(sub_82ABD9C0);
PPC_FUNC_IMPL(__imp__sub_82ABD9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,-4476
	ctx.r5.s64 = ctx.r9.s64 + -4476;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-4424
	ctx.r4.s64 = ctx.r9.s64 + -4424;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,339
	ctx.r8.s64 = 339;
	// addi r31,r9,-10128
	ctx.r31.s64 = ctx.r9.s64 + -10128;
	// addi r9,r11,-16440
	ctx.r9.s64 = ctx.r11.s64 + -16440;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABDA10;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,14072
	ctx.r3.s64 = ctx.r8.s64 + 14072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16272
	ctx.r11.s64 = ctx.r9.s64 + -16272;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABDA40;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDA54"))) PPC_WEAK_FUNC(sub_82ABDA54);
PPC_FUNC_IMPL(__imp__sub_82ABDA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDA58"))) PPC_WEAK_FUNC(sub_82ABDA58);
PPC_FUNC_IMPL(__imp__sub_82ABDA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,-4368
	ctx.r5.s64 = ctx.r9.s64 + -4368;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-4296
	ctx.r4.s64 = ctx.r9.s64 + -4296;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-10040
	ctx.r31.s64 = ctx.r9.s64 + -10040;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABDAA8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,14152
	ctx.r3.s64 = ctx.r8.s64 + 14152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,2416
	ctx.r11.s64 = ctx.r9.s64 + 2416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-15432
	ctx.r11.s64 = ctx.r10.s64 + -15432;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABDAD8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDAEC"))) PPC_WEAK_FUNC(sub_82ABDAEC);
PPC_FUNC_IMPL(__imp__sub_82ABDAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDAF0"))) PPC_WEAK_FUNC(sub_82ABDAF0);
PPC_FUNC_IMPL(__imp__sub_82ABDAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,-4228
	ctx.r5.s64 = ctx.r9.s64 + -4228;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-4176
	ctx.r4.s64 = ctx.r9.s64 + -4176;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-9952
	ctx.r31.s64 = ctx.r9.s64 + -9952;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABDB40;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,14232
	ctx.r3.s64 = ctx.r8.s64 + 14232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-15280
	ctx.r11.s64 = ctx.r9.s64 + -15280;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABDB70;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDB84"))) PPC_WEAK_FUNC(sub_82ABDB84);
PPC_FUNC_IMPL(__imp__sub_82ABDB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDB88"))) PPC_WEAK_FUNC(sub_82ABDB88);
PPC_FUNC_IMPL(__imp__sub_82ABDB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,4176
	ctx.r3.s64 = ctx.r11.s64 + 4176;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82ABDBAC;
	sub_8257A5A8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,14312
	ctx.r3.s64 = ctx.r11.s64 + 14312;
	// bl 0x828d1968
	ctx.lr = 0x82ABDBB8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDBC8"))) PPC_WEAK_FUNC(sub_82ABDBC8);
PPC_FUNC_IMPL(__imp__sub_82ABDBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,14352
	ctx.r3.s64 = ctx.r11.s64 + 14352;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDBD4"))) PPC_WEAK_FUNC(sub_82ABDBD4);
PPC_FUNC_IMPL(__imp__sub_82ABDBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDBD8"))) PPC_WEAK_FUNC(sub_82ABDBD8);
PPC_FUNC_IMPL(__imp__sub_82ABDBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,14368
	ctx.r3.s64 = ctx.r11.s64 + 14368;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDBE4"))) PPC_WEAK_FUNC(sub_82ABDBE4);
PPC_FUNC_IMPL(__imp__sub_82ABDBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDBE8"))) PPC_WEAK_FUNC(sub_82ABDBE8);
PPC_FUNC_IMPL(__imp__sub_82ABDBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r11,r11,5480
	ctx.r11.s64 = ctx.r11.s64 + 5480;
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bl 0x82456b60
	ctx.lr = 0x82ABDC10;
	sub_82456B60(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,14816
	ctx.r3.s64 = ctx.r11.s64 + 14816;
	// bl 0x828d1968
	ctx.lr = 0x82ABDC1C;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDC2C"))) PPC_WEAK_FUNC(sub_82ABDC2C);
PPC_FUNC_IMPL(__imp__sub_82ABDC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDC30"))) PPC_WEAK_FUNC(sub_82ABDC30);
PPC_FUNC_IMPL(__imp__sub_82ABDC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r9,-32084
	ctx.r9.s64 = -2102657024;
	// addi r11,r11,5720
	ctx.r11.s64 = ctx.r11.s64 + 5720;
	// addi r3,r9,14832
	ctx.r3.s64 = ctx.r9.s64 + 14832;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDC50"))) PPC_WEAK_FUNC(sub_82ABDC50);
PPC_FUNC_IMPL(__imp__sub_82ABDC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lis r9,-32084
	ctx.r9.s64 = -2102657024;
	// addi r11,r11,-21728
	ctx.r11.s64 = ctx.r11.s64 + -21728;
	// addi r3,r9,14912
	ctx.r3.s64 = ctx.r9.s64 + 14912;
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// clrlwi r10,r10,9
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFF;
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDC74"))) PPC_WEAK_FUNC(sub_82ABDC74);
PPC_FUNC_IMPL(__imp__sub_82ABDC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDC78"))) PPC_WEAK_FUNC(sub_82ABDC78);
PPC_FUNC_IMPL(__imp__sub_82ABDC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r11,r11,-7824
	ctx.r11.s64 = ctx.r11.s64 + -7824;
	// addi r10,r10,-9840
	ctx.r10.s64 = ctx.r10.s64 + -9840;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82ABDC90:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82abdc90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABDC90;
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,14920
	ctx.r3.s64 = ctx.r11.s64 + 14920;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDCB0"))) PPC_WEAK_FUNC(sub_82ABDCB0);
PPC_FUNC_IMPL(__imp__sub_82ABDCB0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-9776
	ctx.r31.s64 = ctx.r11.s64 + -9776;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x825a6428
	ctx.lr = 0x82ABDCD0;
	sub_825A6428(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82abdcf8
	if (cr6.eq) goto loc_82ABDCF8;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828d2890
	ctx.lr = 0x82ABDCF8;
	sub_828D2890(ctx, base);
loc_82ABDCF8:
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,14928
	ctx.r3.s64 = ctx.r11.s64 + 14928;
	// bl 0x828d1968
	ctx.lr = 0x82ABDD04;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDD18"))) PPC_WEAK_FUNC(sub_82ABDD18);
PPC_FUNC_IMPL(__imp__sub_82ABDD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r11,r11,5748
	ctx.r11.s64 = ctx.r11.s64 + 5748;
	// lfs f0,24328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDD50"))) PPC_WEAK_FUNC(sub_82ABDD50);
PPC_FUNC_IMPL(__imp__sub_82ABDD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16764
	ctx.r4.s64 = ctx.r11.s64 + 16764;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-9740
	ctx.r3.s64 = ctx.r11.s64 + -9740;
	// bl 0x821704f8
	ctx.lr = 0x82ABDD70;
	sub_821704F8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,15016
	ctx.r3.s64 = ctx.r11.s64 + 15016;
	// bl 0x828d1968
	ctx.lr = 0x82ABDD7C;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDD8C"))) PPC_WEAK_FUNC(sub_82ABDD8C);
PPC_FUNC_IMPL(__imp__sub_82ABDD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDD90"))) PPC_WEAK_FUNC(sub_82ABDD90);
PPC_FUNC_IMPL(__imp__sub_82ABDD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-9712
	ctx.r11.s64 = ctx.r11.s64 + -9712;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDDC8"))) PPC_WEAK_FUNC(sub_82ABDDC8);
PPC_FUNC_IMPL(__imp__sub_82ABDDC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-9728
	ctx.r11.s64 = ctx.r11.s64 + -9728;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDDF8"))) PPC_WEAK_FUNC(sub_82ABDDF8);
PPC_FUNC_IMPL(__imp__sub_82ABDDF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-241
	ctx.r11.s64 = -241;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// li r11,-242
	ctx.r11.s64 = -242;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// li r11,-243
	ctx.r11.s64 = -243;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-244
	ctx.r11.s64 = -244;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-9680
	ctx.r11.s64 = ctx.r11.s64 + -9680;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDE30"))) PPC_WEAK_FUNC(sub_82ABDE30);
PPC_FUNC_IMPL(__imp__sub_82ABDE30) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,3854
	ctx.r11.s64 = 252575744;
	// ori r11,r11,3340
	ctx.r11.u64 = ctx.r11.u64 | 3340;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-9664
	ctx.r11.s64 = ctx.r11.s64 + -9664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDE64"))) PPC_WEAK_FUNC(sub_82ABDE64);
PPC_FUNC_IMPL(__imp__sub_82ABDE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDE68"))) PPC_WEAK_FUNC(sub_82ABDE68);
PPC_FUNC_IMPL(__imp__sub_82ABDE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-9632
	ctx.r11.s64 = ctx.r11.s64 + -9632;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDEA0"))) PPC_WEAK_FUNC(sub_82ABDEA0);
PPC_FUNC_IMPL(__imp__sub_82ABDEA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-9648
	ctx.r11.s64 = ctx.r11.s64 + -9648;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABDED0"))) PPC_WEAK_FUNC(sub_82ABDED0);
PPC_FUNC_IMPL(__imp__sub_82ABDED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,15112
	ctx.r3.s64 = ctx.r11.s64 + 15112;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDEDC"))) PPC_WEAK_FUNC(sub_82ABDEDC);
PPC_FUNC_IMPL(__imp__sub_82ABDEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDEE0"))) PPC_WEAK_FUNC(sub_82ABDEE0);
PPC_FUNC_IMPL(__imp__sub_82ABDEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,15184
	ctx.r3.s64 = ctx.r11.s64 + 15184;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDEEC"))) PPC_WEAK_FUNC(sub_82ABDEEC);
PPC_FUNC_IMPL(__imp__sub_82ABDEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDEF0"))) PPC_WEAK_FUNC(sub_82ABDEF0);
PPC_FUNC_IMPL(__imp__sub_82ABDEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,15288
	ctx.r3.s64 = ctx.r11.s64 + 15288;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDEFC"))) PPC_WEAK_FUNC(sub_82ABDEFC);
PPC_FUNC_IMPL(__imp__sub_82ABDEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDF00"))) PPC_WEAK_FUNC(sub_82ABDF00);
PPC_FUNC_IMPL(__imp__sub_82ABDF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,15392
	ctx.r3.s64 = ctx.r11.s64 + 15392;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDF0C"))) PPC_WEAK_FUNC(sub_82ABDF0C);
PPC_FUNC_IMPL(__imp__sub_82ABDF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDF10"))) PPC_WEAK_FUNC(sub_82ABDF10);
PPC_FUNC_IMPL(__imp__sub_82ABDF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,15496
	ctx.r3.s64 = ctx.r11.s64 + 15496;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDF1C"))) PPC_WEAK_FUNC(sub_82ABDF1C);
PPC_FUNC_IMPL(__imp__sub_82ABDF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDF20"))) PPC_WEAK_FUNC(sub_82ABDF20);
PPC_FUNC_IMPL(__imp__sub_82ABDF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,15600
	ctx.r3.s64 = ctx.r11.s64 + 15600;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDF2C"))) PPC_WEAK_FUNC(sub_82ABDF2C);
PPC_FUNC_IMPL(__imp__sub_82ABDF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDF30"))) PPC_WEAK_FUNC(sub_82ABDF30);
PPC_FUNC_IMPL(__imp__sub_82ABDF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-21472
	ctx.r11.s64 = ctx.r11.s64 + -21472;
	// lis r10,-32084
	ctx.r10.s64 = -2102657024;
	// addi r3,r10,15704
	ctx.r3.s64 = ctx.r10.s64 + 15704;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDF50"))) PPC_WEAK_FUNC(sub_82ABDF50);
PPC_FUNC_IMPL(__imp__sub_82ABDF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-9556
	ctx.r11.s64 = ctx.r11.s64 + -9556;
	// lis r9,-32084
	ctx.r9.s64 = -2102657024;
	// addi r3,r9,15776
	ctx.r3.s64 = ctx.r9.s64 + 15776;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDF80"))) PPC_WEAK_FUNC(sub_82ABDF80);
PPC_FUNC_IMPL(__imp__sub_82ABDF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,15928
	ctx.r3.s64 = ctx.r11.s64 + 15928;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDF8C"))) PPC_WEAK_FUNC(sub_82ABDF8C);
PPC_FUNC_IMPL(__imp__sub_82ABDF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDF90"))) PPC_WEAK_FUNC(sub_82ABDF90);
PPC_FUNC_IMPL(__imp__sub_82ABDF90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// addi r5,r10,1168
	ctx.r5.s64 = ctx.r10.s64 + 1168;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r4,r10,1208
	ctx.r4.s64 = ctx.r10.s64 + 1208;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r9,r9,9096
	ctx.r9.s64 = ctx.r9.s64 + 9096;
	// addi r3,r10,-9520
	ctx.r3.s64 = ctx.r10.s64 + -9520;
	// li r10,339
	ctx.r10.s64 = 339;
	// addi r8,r11,5768
	ctx.r8.s64 = ctx.r11.s64 + 5768;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82591720
	sub_82591720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABDFC8"))) PPC_WEAK_FUNC(sub_82ABDFC8);
PPC_FUNC_IMPL(__imp__sub_82ABDFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r5,r10,1168
	ctx.r5.s64 = ctx.r10.s64 + 1168;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r4,r10,1248
	ctx.r4.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r9,r9,5864
	ctx.r9.s64 = ctx.r9.s64 + 5864;
	// addi r3,r10,-9492
	ctx.r3.s64 = ctx.r10.s64 + -9492;
	// li r10,339
	ctx.r10.s64 = 339;
	// addi r8,r11,5768
	ctx.r8.s64 = ctx.r11.s64 + 5768;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82591720
	sub_82591720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABE000"))) PPC_WEAK_FUNC(sub_82ABE000);
PPC_FUNC_IMPL(__imp__sub_82ABE000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-9440
	ctx.r11.s64 = ctx.r11.s64 + -9440;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE038"))) PPC_WEAK_FUNC(sub_82ABE038);
PPC_FUNC_IMPL(__imp__sub_82ABE038) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-9456
	ctx.r11.s64 = ctx.r11.s64 + -9456;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE068"))) PPC_WEAK_FUNC(sub_82ABE068);
PPC_FUNC_IMPL(__imp__sub_82ABE068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-9408
	ctx.r11.s64 = ctx.r11.s64 + -9408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE0A0"))) PPC_WEAK_FUNC(sub_82ABE0A0);
PPC_FUNC_IMPL(__imp__sub_82ABE0A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-9424
	ctx.r11.s64 = ctx.r11.s64 + -9424;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE0D0"))) PPC_WEAK_FUNC(sub_82ABE0D0);
PPC_FUNC_IMPL(__imp__sub_82ABE0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,16112
	ctx.r3.s64 = ctx.r11.s64 + 16112;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABE0DC"))) PPC_WEAK_FUNC(sub_82ABE0DC);
PPC_FUNC_IMPL(__imp__sub_82ABE0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE0E0"))) PPC_WEAK_FUNC(sub_82ABE0E0);
PPC_FUNC_IMPL(__imp__sub_82ABE0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,16184
	ctx.r3.s64 = ctx.r11.s64 + 16184;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABE0EC"))) PPC_WEAK_FUNC(sub_82ABE0EC);
PPC_FUNC_IMPL(__imp__sub_82ABE0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE0F0"))) PPC_WEAK_FUNC(sub_82ABE0F0);
PPC_FUNC_IMPL(__imp__sub_82ABE0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-9376
	ctx.r11.s64 = ctx.r11.s64 + -9376;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE128"))) PPC_WEAK_FUNC(sub_82ABE128);
PPC_FUNC_IMPL(__imp__sub_82ABE128) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-9392
	ctx.r11.s64 = ctx.r11.s64 + -9392;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE158"))) PPC_WEAK_FUNC(sub_82ABE158);
PPC_FUNC_IMPL(__imp__sub_82ABE158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-9344
	ctx.r11.s64 = ctx.r11.s64 + -9344;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE190"))) PPC_WEAK_FUNC(sub_82ABE190);
PPC_FUNC_IMPL(__imp__sub_82ABE190) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-9360
	ctx.r11.s64 = ctx.r11.s64 + -9360;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE1C0"))) PPC_WEAK_FUNC(sub_82ABE1C0);
PPC_FUNC_IMPL(__imp__sub_82ABE1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-9312
	ctx.r11.s64 = ctx.r11.s64 + -9312;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE1F8"))) PPC_WEAK_FUNC(sub_82ABE1F8);
PPC_FUNC_IMPL(__imp__sub_82ABE1F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-9328
	ctx.r11.s64 = ctx.r11.s64 + -9328;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE228"))) PPC_WEAK_FUNC(sub_82ABE228);
PPC_FUNC_IMPL(__imp__sub_82ABE228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,16280
	ctx.r3.s64 = ctx.r11.s64 + 16280;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABE234"))) PPC_WEAK_FUNC(sub_82ABE234);
PPC_FUNC_IMPL(__imp__sub_82ABE234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE238"))) PPC_WEAK_FUNC(sub_82ABE238);
PPC_FUNC_IMPL(__imp__sub_82ABE238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-8800
	ctx.r11.s64 = ctx.r11.s64 + -8800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE270"))) PPC_WEAK_FUNC(sub_82ABE270);
PPC_FUNC_IMPL(__imp__sub_82ABE270) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-8816
	ctx.r11.s64 = ctx.r11.s64 + -8816;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE2A0"))) PPC_WEAK_FUNC(sub_82ABE2A0);
PPC_FUNC_IMPL(__imp__sub_82ABE2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-8784
	ctx.r11.s64 = ctx.r11.s64 + -8784;
	// lis r9,-32084
	ctx.r9.s64 = -2102657024;
	// addi r3,r9,16384
	ctx.r3.s64 = ctx.r9.s64 + 16384;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABE30C"))) PPC_WEAK_FUNC(sub_82ABE30C);
PPC_FUNC_IMPL(__imp__sub_82ABE30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE310"))) PPC_WEAK_FUNC(sub_82ABE310);
PPC_FUNC_IMPL(__imp__sub_82ABE310) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r3,r11,-8700
	ctx.r3.s64 = ctx.r11.s64 + -8700;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
loc_82ABE33C:
	// stw r10,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r10.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r10.u32);
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bge cr6,0x82abe33c
	if (!cr6.lt) goto loc_82ABE33C;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,8364
	ctx.r11.s64 = ctx.r11.s64 + 8364;
	// stw r10,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82ABE388;
	sub_8257A5A8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,16504
	ctx.r3.s64 = ctx.r11.s64 + 16504;
	// bl 0x828d1968
	ctx.lr = 0x82ABE394;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE3A4"))) PPC_WEAK_FUNC(sub_82ABE3A4);
PPC_FUNC_IMPL(__imp__sub_82ABE3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE3A8"))) PPC_WEAK_FUNC(sub_82ABE3A8);
PPC_FUNC_IMPL(__imp__sub_82ABE3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,9896
	ctx.r3.s64 = ctx.r11.s64 + 9896;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82ABE3CC;
	sub_8257A5A8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,16528
	ctx.r3.s64 = ctx.r11.s64 + 16528;
	// bl 0x828d1968
	ctx.lr = 0x82ABE3D8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE3E8"))) PPC_WEAK_FUNC(sub_82ABE3E8);
PPC_FUNC_IMPL(__imp__sub_82ABE3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,28936
	ctx.r10.s64 = ctx.r10.s64 + 28936;
	// addi r4,r9,8428
	ctx.r4.s64 = ctx.r9.s64 + 8428;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,17456
	ctx.r31.s64 = ctx.r9.s64 + 17456;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABE438;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,16568
	ctx.r3.s64 = ctx.r8.s64 + 16568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABE468;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE47C"))) PPC_WEAK_FUNC(sub_82ABE47C);
PPC_FUNC_IMPL(__imp__sub_82ABE47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE480"))) PPC_WEAK_FUNC(sub_82ABE480);
PPC_FUNC_IMPL(__imp__sub_82ABE480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,28936
	ctx.r10.s64 = ctx.r10.s64 + 28936;
	// addi r4,r9,8512
	ctx.r4.s64 = ctx.r9.s64 + 8512;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,17368
	ctx.r31.s64 = ctx.r9.s64 + 17368;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABE4D0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,16648
	ctx.r3.s64 = ctx.r8.s64 + 16648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABE500;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE514"))) PPC_WEAK_FUNC(sub_82ABE514);
PPC_FUNC_IMPL(__imp__sub_82ABE514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE518"))) PPC_WEAK_FUNC(sub_82ABE518);
PPC_FUNC_IMPL(__imp__sub_82ABE518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,29672
	ctx.r10.s64 = ctx.r10.s64 + 29672;
	// addi r4,r9,8560
	ctx.r4.s64 = ctx.r9.s64 + 8560;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,17280
	ctx.r31.s64 = ctx.r9.s64 + 17280;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABE568;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,16728
	ctx.r3.s64 = ctx.r8.s64 + 16728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABE598;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE5AC"))) PPC_WEAK_FUNC(sub_82ABE5AC);
PPC_FUNC_IMPL(__imp__sub_82ABE5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE5B0"))) PPC_WEAK_FUNC(sub_82ABE5B0);
PPC_FUNC_IMPL(__imp__sub_82ABE5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,29672
	ctx.r10.s64 = ctx.r10.s64 + 29672;
	// addi r4,r9,8604
	ctx.r4.s64 = ctx.r9.s64 + 8604;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,17192
	ctx.r31.s64 = ctx.r9.s64 + 17192;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABE600;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,16808
	ctx.r3.s64 = ctx.r8.s64 + 16808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABE630;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE644"))) PPC_WEAK_FUNC(sub_82ABE644);
PPC_FUNC_IMPL(__imp__sub_82ABE644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE648"))) PPC_WEAK_FUNC(sub_82ABE648);
PPC_FUNC_IMPL(__imp__sub_82ABE648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,30032
	ctx.r10.s64 = ctx.r10.s64 + 30032;
	// addi r4,r9,8652
	ctx.r4.s64 = ctx.r9.s64 + 8652;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,17104
	ctx.r31.s64 = ctx.r9.s64 + 17104;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABE698;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,16888
	ctx.r3.s64 = ctx.r8.s64 + 16888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABE6C8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE6DC"))) PPC_WEAK_FUNC(sub_82ABE6DC);
PPC_FUNC_IMPL(__imp__sub_82ABE6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE6E0"))) PPC_WEAK_FUNC(sub_82ABE6E0);
PPC_FUNC_IMPL(__imp__sub_82ABE6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,30032
	ctx.r10.s64 = ctx.r10.s64 + 30032;
	// addi r4,r9,8696
	ctx.r4.s64 = ctx.r9.s64 + 8696;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,17016
	ctx.r31.s64 = ctx.r9.s64 + 17016;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABE730;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,16968
	ctx.r3.s64 = ctx.r8.s64 + 16968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABE760;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE774"))) PPC_WEAK_FUNC(sub_82ABE774);
PPC_FUNC_IMPL(__imp__sub_82ABE774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE778"))) PPC_WEAK_FUNC(sub_82ABE778);
PPC_FUNC_IMPL(__imp__sub_82ABE778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,30536
	ctx.r10.s64 = ctx.r10.s64 + 30536;
	// addi r4,r9,8744
	ctx.r4.s64 = ctx.r9.s64 + 8744;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16928
	ctx.r31.s64 = ctx.r9.s64 + 16928;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABE7C8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17048
	ctx.r3.s64 = ctx.r8.s64 + 17048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABE7F8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE80C"))) PPC_WEAK_FUNC(sub_82ABE80C);
PPC_FUNC_IMPL(__imp__sub_82ABE80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE810"))) PPC_WEAK_FUNC(sub_82ABE810);
PPC_FUNC_IMPL(__imp__sub_82ABE810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,30536
	ctx.r10.s64 = ctx.r10.s64 + 30536;
	// addi r4,r9,8788
	ctx.r4.s64 = ctx.r9.s64 + 8788;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16840
	ctx.r31.s64 = ctx.r9.s64 + 16840;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABE860;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17128
	ctx.r3.s64 = ctx.r8.s64 + 17128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABE890;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE8A4"))) PPC_WEAK_FUNC(sub_82ABE8A4);
PPC_FUNC_IMPL(__imp__sub_82ABE8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE8A8"))) PPC_WEAK_FUNC(sub_82ABE8A8);
PPC_FUNC_IMPL(__imp__sub_82ABE8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,31216
	ctx.r10.s64 = ctx.r10.s64 + 31216;
	// addi r4,r9,8836
	ctx.r4.s64 = ctx.r9.s64 + 8836;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16752
	ctx.r31.s64 = ctx.r9.s64 + 16752;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABE8F8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17208
	ctx.r3.s64 = ctx.r8.s64 + 17208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABE928;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE93C"))) PPC_WEAK_FUNC(sub_82ABE93C);
PPC_FUNC_IMPL(__imp__sub_82ABE93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE940"))) PPC_WEAK_FUNC(sub_82ABE940);
PPC_FUNC_IMPL(__imp__sub_82ABE940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,31216
	ctx.r10.s64 = ctx.r10.s64 + 31216;
	// addi r4,r9,8880
	ctx.r4.s64 = ctx.r9.s64 + 8880;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16664
	ctx.r31.s64 = ctx.r9.s64 + 16664;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABE990;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17288
	ctx.r3.s64 = ctx.r8.s64 + 17288;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABE9C0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE9D4"))) PPC_WEAK_FUNC(sub_82ABE9D4);
PPC_FUNC_IMPL(__imp__sub_82ABE9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE9D8"))) PPC_WEAK_FUNC(sub_82ABE9D8);
PPC_FUNC_IMPL(__imp__sub_82ABE9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,31720
	ctx.r10.s64 = ctx.r10.s64 + 31720;
	// addi r4,r9,8928
	ctx.r4.s64 = ctx.r9.s64 + 8928;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16576
	ctx.r31.s64 = ctx.r9.s64 + 16576;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABEA28;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17368
	ctx.r3.s64 = ctx.r8.s64 + 17368;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABEA58;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEA6C"))) PPC_WEAK_FUNC(sub_82ABEA6C);
PPC_FUNC_IMPL(__imp__sub_82ABEA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEA70"))) PPC_WEAK_FUNC(sub_82ABEA70);
PPC_FUNC_IMPL(__imp__sub_82ABEA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,31720
	ctx.r10.s64 = ctx.r10.s64 + 31720;
	// addi r4,r9,8972
	ctx.r4.s64 = ctx.r9.s64 + 8972;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16488
	ctx.r31.s64 = ctx.r9.s64 + 16488;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABEAC0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17448
	ctx.r3.s64 = ctx.r8.s64 + 17448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABEAF0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEB04"))) PPC_WEAK_FUNC(sub_82ABEB04);
PPC_FUNC_IMPL(__imp__sub_82ABEB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEB08"))) PPC_WEAK_FUNC(sub_82ABEB08);
PPC_FUNC_IMPL(__imp__sub_82ABEB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,32224
	ctx.r10.s64 = ctx.r10.s64 + 32224;
	// addi r4,r9,9020
	ctx.r4.s64 = ctx.r9.s64 + 9020;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16400
	ctx.r31.s64 = ctx.r9.s64 + 16400;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABEB58;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17528
	ctx.r3.s64 = ctx.r8.s64 + 17528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABEB88;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEB9C"))) PPC_WEAK_FUNC(sub_82ABEB9C);
PPC_FUNC_IMPL(__imp__sub_82ABEB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEBA0"))) PPC_WEAK_FUNC(sub_82ABEBA0);
PPC_FUNC_IMPL(__imp__sub_82ABEBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,32224
	ctx.r10.s64 = ctx.r10.s64 + 32224;
	// addi r4,r9,9064
	ctx.r4.s64 = ctx.r9.s64 + 9064;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16312
	ctx.r31.s64 = ctx.r9.s64 + 16312;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABEBF0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17608
	ctx.r3.s64 = ctx.r8.s64 + 17608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABEC20;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEC34"))) PPC_WEAK_FUNC(sub_82ABEC34);
PPC_FUNC_IMPL(__imp__sub_82ABEC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEC38"))) PPC_WEAK_FUNC(sub_82ABEC38);
PPC_FUNC_IMPL(__imp__sub_82ABEC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-32656
	ctx.r10.s64 = ctx.r10.s64 + -32656;
	// addi r4,r9,9112
	ctx.r4.s64 = ctx.r9.s64 + 9112;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16224
	ctx.r31.s64 = ctx.r9.s64 + 16224;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABEC88;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17688
	ctx.r3.s64 = ctx.r8.s64 + 17688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABECB8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABECCC"))) PPC_WEAK_FUNC(sub_82ABECCC);
PPC_FUNC_IMPL(__imp__sub_82ABECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABECD0"))) PPC_WEAK_FUNC(sub_82ABECD0);
PPC_FUNC_IMPL(__imp__sub_82ABECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-32656
	ctx.r10.s64 = ctx.r10.s64 + -32656;
	// addi r4,r9,9156
	ctx.r4.s64 = ctx.r9.s64 + 9156;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16136
	ctx.r31.s64 = ctx.r9.s64 + 16136;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABED20;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17768
	ctx.r3.s64 = ctx.r8.s64 + 17768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABED50;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABED64"))) PPC_WEAK_FUNC(sub_82ABED64);
PPC_FUNC_IMPL(__imp__sub_82ABED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABED68"))) PPC_WEAK_FUNC(sub_82ABED68);
PPC_FUNC_IMPL(__imp__sub_82ABED68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-32152
	ctx.r10.s64 = ctx.r10.s64 + -32152;
	// addi r4,r9,9204
	ctx.r4.s64 = ctx.r9.s64 + 9204;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,16048
	ctx.r31.s64 = ctx.r9.s64 + 16048;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABEDB8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17848
	ctx.r3.s64 = ctx.r8.s64 + 17848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABEDE8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEDFC"))) PPC_WEAK_FUNC(sub_82ABEDFC);
PPC_FUNC_IMPL(__imp__sub_82ABEDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEE00"))) PPC_WEAK_FUNC(sub_82ABEE00);
PPC_FUNC_IMPL(__imp__sub_82ABEE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-32152
	ctx.r10.s64 = ctx.r10.s64 + -32152;
	// addi r4,r9,9248
	ctx.r4.s64 = ctx.r9.s64 + 9248;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15960
	ctx.r31.s64 = ctx.r9.s64 + 15960;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABEE50;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,17928
	ctx.r3.s64 = ctx.r8.s64 + 17928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABEE80;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEE94"))) PPC_WEAK_FUNC(sub_82ABEE94);
PPC_FUNC_IMPL(__imp__sub_82ABEE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEE98"))) PPC_WEAK_FUNC(sub_82ABEE98);
PPC_FUNC_IMPL(__imp__sub_82ABEE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-31432
	ctx.r10.s64 = ctx.r10.s64 + -31432;
	// addi r4,r9,9296
	ctx.r4.s64 = ctx.r9.s64 + 9296;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15872
	ctx.r31.s64 = ctx.r9.s64 + 15872;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABEEE8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18008
	ctx.r3.s64 = ctx.r8.s64 + 18008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABEF18;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEF2C"))) PPC_WEAK_FUNC(sub_82ABEF2C);
PPC_FUNC_IMPL(__imp__sub_82ABEF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEF30"))) PPC_WEAK_FUNC(sub_82ABEF30);
PPC_FUNC_IMPL(__imp__sub_82ABEF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-31432
	ctx.r10.s64 = ctx.r10.s64 + -31432;
	// addi r4,r9,9344
	ctx.r4.s64 = ctx.r9.s64 + 9344;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15784
	ctx.r31.s64 = ctx.r9.s64 + 15784;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABEF80;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18088
	ctx.r3.s64 = ctx.r8.s64 + 18088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABEFB0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEFC4"))) PPC_WEAK_FUNC(sub_82ABEFC4);
PPC_FUNC_IMPL(__imp__sub_82ABEFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEFC8"))) PPC_WEAK_FUNC(sub_82ABEFC8);
PPC_FUNC_IMPL(__imp__sub_82ABEFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-30712
	ctx.r10.s64 = ctx.r10.s64 + -30712;
	// addi r4,r9,9392
	ctx.r4.s64 = ctx.r9.s64 + 9392;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15696
	ctx.r31.s64 = ctx.r9.s64 + 15696;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF018;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18168
	ctx.r3.s64 = ctx.r8.s64 + 18168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF048;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF05C"))) PPC_WEAK_FUNC(sub_82ABF05C);
PPC_FUNC_IMPL(__imp__sub_82ABF05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF060"))) PPC_WEAK_FUNC(sub_82ABF060);
PPC_FUNC_IMPL(__imp__sub_82ABF060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-30712
	ctx.r10.s64 = ctx.r10.s64 + -30712;
	// addi r4,r9,9440
	ctx.r4.s64 = ctx.r9.s64 + 9440;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15608
	ctx.r31.s64 = ctx.r9.s64 + 15608;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF0B0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18248
	ctx.r3.s64 = ctx.r8.s64 + 18248;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF0E0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF0F4"))) PPC_WEAK_FUNC(sub_82ABF0F4);
PPC_FUNC_IMPL(__imp__sub_82ABF0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF0F8"))) PPC_WEAK_FUNC(sub_82ABF0F8);
PPC_FUNC_IMPL(__imp__sub_82ABF0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-29992
	ctx.r10.s64 = ctx.r10.s64 + -29992;
	// addi r4,r9,9488
	ctx.r4.s64 = ctx.r9.s64 + 9488;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15520
	ctx.r31.s64 = ctx.r9.s64 + 15520;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF148;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18328
	ctx.r3.s64 = ctx.r8.s64 + 18328;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF178;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF18C"))) PPC_WEAK_FUNC(sub_82ABF18C);
PPC_FUNC_IMPL(__imp__sub_82ABF18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF190"))) PPC_WEAK_FUNC(sub_82ABF190);
PPC_FUNC_IMPL(__imp__sub_82ABF190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-29992
	ctx.r10.s64 = ctx.r10.s64 + -29992;
	// addi r4,r9,9536
	ctx.r4.s64 = ctx.r9.s64 + 9536;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15432
	ctx.r31.s64 = ctx.r9.s64 + 15432;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF1E0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18408
	ctx.r3.s64 = ctx.r8.s64 + 18408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF210;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF224"))) PPC_WEAK_FUNC(sub_82ABF224);
PPC_FUNC_IMPL(__imp__sub_82ABF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF228"))) PPC_WEAK_FUNC(sub_82ABF228);
PPC_FUNC_IMPL(__imp__sub_82ABF228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-29056
	ctx.r10.s64 = ctx.r10.s64 + -29056;
	// addi r4,r9,9584
	ctx.r4.s64 = ctx.r9.s64 + 9584;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15344
	ctx.r31.s64 = ctx.r9.s64 + 15344;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF278;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18488
	ctx.r3.s64 = ctx.r8.s64 + 18488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF2A8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF2BC"))) PPC_WEAK_FUNC(sub_82ABF2BC);
PPC_FUNC_IMPL(__imp__sub_82ABF2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF2C0"))) PPC_WEAK_FUNC(sub_82ABF2C0);
PPC_FUNC_IMPL(__imp__sub_82ABF2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-29056
	ctx.r10.s64 = ctx.r10.s64 + -29056;
	// addi r4,r9,9632
	ctx.r4.s64 = ctx.r9.s64 + 9632;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15256
	ctx.r31.s64 = ctx.r9.s64 + 15256;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF310;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18568
	ctx.r3.s64 = ctx.r8.s64 + 18568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF340;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF354"))) PPC_WEAK_FUNC(sub_82ABF354);
PPC_FUNC_IMPL(__imp__sub_82ABF354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF358"))) PPC_WEAK_FUNC(sub_82ABF358);
PPC_FUNC_IMPL(__imp__sub_82ABF358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-28480
	ctx.r10.s64 = ctx.r10.s64 + -28480;
	// addi r4,r9,9680
	ctx.r4.s64 = ctx.r9.s64 + 9680;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15168
	ctx.r31.s64 = ctx.r9.s64 + 15168;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF3A8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18648
	ctx.r3.s64 = ctx.r8.s64 + 18648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF3D8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF3EC"))) PPC_WEAK_FUNC(sub_82ABF3EC);
PPC_FUNC_IMPL(__imp__sub_82ABF3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF3F0"))) PPC_WEAK_FUNC(sub_82ABF3F0);
PPC_FUNC_IMPL(__imp__sub_82ABF3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-28480
	ctx.r10.s64 = ctx.r10.s64 + -28480;
	// addi r4,r9,9728
	ctx.r4.s64 = ctx.r9.s64 + 9728;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,15080
	ctx.r31.s64 = ctx.r9.s64 + 15080;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF440;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18728
	ctx.r3.s64 = ctx.r8.s64 + 18728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF470;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF484"))) PPC_WEAK_FUNC(sub_82ABF484);
PPC_FUNC_IMPL(__imp__sub_82ABF484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF488"))) PPC_WEAK_FUNC(sub_82ABF488);
PPC_FUNC_IMPL(__imp__sub_82ABF488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-27544
	ctx.r10.s64 = ctx.r10.s64 + -27544;
	// addi r4,r9,9776
	ctx.r4.s64 = ctx.r9.s64 + 9776;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,14992
	ctx.r31.s64 = ctx.r9.s64 + 14992;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF4D8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18808
	ctx.r3.s64 = ctx.r8.s64 + 18808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF508;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF51C"))) PPC_WEAK_FUNC(sub_82ABF51C);
PPC_FUNC_IMPL(__imp__sub_82ABF51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF520"))) PPC_WEAK_FUNC(sub_82ABF520);
PPC_FUNC_IMPL(__imp__sub_82ABF520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-27544
	ctx.r10.s64 = ctx.r10.s64 + -27544;
	// addi r4,r9,9824
	ctx.r4.s64 = ctx.r9.s64 + 9824;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,14904
	ctx.r31.s64 = ctx.r9.s64 + 14904;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF570;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18888
	ctx.r3.s64 = ctx.r8.s64 + 18888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF5A0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF5B4"))) PPC_WEAK_FUNC(sub_82ABF5B4);
PPC_FUNC_IMPL(__imp__sub_82ABF5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF5B8"))) PPC_WEAK_FUNC(sub_82ABF5B8);
PPC_FUNC_IMPL(__imp__sub_82ABF5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8392
	ctx.r5.s64 = ctx.r9.s64 + 8392;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-27040
	ctx.r10.s64 = ctx.r10.s64 + -27040;
	// addi r4,r9,9872
	ctx.r4.s64 = ctx.r9.s64 + 9872;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,14816
	ctx.r31.s64 = ctx.r9.s64 + 14816;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF608;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,18968
	ctx.r3.s64 = ctx.r8.s64 + 18968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31040
	ctx.r11.s64 = ctx.r9.s64 + 31040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF638;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF64C"))) PPC_WEAK_FUNC(sub_82ABF64C);
PPC_FUNC_IMPL(__imp__sub_82ABF64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF650"))) PPC_WEAK_FUNC(sub_82ABF650);
PPC_FUNC_IMPL(__imp__sub_82ABF650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,8472
	ctx.r5.s64 = ctx.r9.s64 + 8472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-27040
	ctx.r10.s64 = ctx.r10.s64 + -27040;
	// addi r4,r9,9920
	ctx.r4.s64 = ctx.r9.s64 + 9920;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,14728
	ctx.r31.s64 = ctx.r9.s64 + 14728;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF6A0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,19048
	ctx.r3.s64 = ctx.r8.s64 + 19048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32416
	ctx.r11.s64 = ctx.r9.s64 + 32416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF6D0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF6E4"))) PPC_WEAK_FUNC(sub_82ABF6E4);
PPC_FUNC_IMPL(__imp__sub_82ABF6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF6E8"))) PPC_WEAK_FUNC(sub_82ABF6E8);
PPC_FUNC_IMPL(__imp__sub_82ABF6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,10152
	ctx.r5.s64 = ctx.r9.s64 + 10152;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,10200
	ctx.r4.s64 = ctx.r9.s64 + 10200;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,-8328
	ctx.r31.s64 = ctx.r9.s64 + -8328;
	// addi r9,r11,8888
	ctx.r9.s64 = ctx.r11.s64 + 8888;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF738;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,19384
	ctx.r3.s64 = ctx.r8.s64 + 19384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25504
	ctx.r11.s64 = ctx.r9.s64 + -25504;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-25312
	ctx.r11.s64 = ctx.r10.s64 + -25312;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF768;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF77C"))) PPC_WEAK_FUNC(sub_82ABF77C);
PPC_FUNC_IMPL(__imp__sub_82ABF77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF780"))) PPC_WEAK_FUNC(sub_82ABF780);
PPC_FUNC_IMPL(__imp__sub_82ABF780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,10312
	ctx.r5.s64 = ctx.r9.s64 + 10312;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,10360
	ctx.r4.s64 = ctx.r9.s64 + 10360;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,363
	ctx.r8.s64 = 363;
	// addi r31,r9,-8240
	ctx.r31.s64 = ctx.r9.s64 + -8240;
	// addi r9,r11,-24936
	ctx.r9.s64 = ctx.r11.s64 + -24936;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF7D0;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,19464
	ctx.r3.s64 = ctx.r8.s64 + 19464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-24728
	ctx.r11.s64 = ctx.r9.s64 + -24728;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-25312
	ctx.r11.s64 = ctx.r10.s64 + -25312;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF800;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF814"))) PPC_WEAK_FUNC(sub_82ABF814);
PPC_FUNC_IMPL(__imp__sub_82ABF814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF818"))) PPC_WEAK_FUNC(sub_82ABF818);
PPC_FUNC_IMPL(__imp__sub_82ABF818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,10560
	ctx.r3.s64 = ctx.r11.s64 + 10560;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82ABF83C;
	sub_8257A5A8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,19544
	ctx.r3.s64 = ctx.r11.s64 + 19544;
	// bl 0x828d1968
	ctx.lr = 0x82ABF848;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF858"))) PPC_WEAK_FUNC(sub_82ABF858);
PPC_FUNC_IMPL(__imp__sub_82ABF858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,10408
	ctx.r5.s64 = ctx.r9.s64 + 10408;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,10468
	ctx.r4.s64 = ctx.r9.s64 + 10468;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-8152
	ctx.r31.s64 = ctx.r9.s64 + -8152;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF8A8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,19584
	ctx.r3.s64 = ctx.r8.s64 + 19584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26320
	ctx.r11.s64 = ctx.r9.s64 + -26320;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF8D8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF8EC"))) PPC_WEAK_FUNC(sub_82ABF8EC);
PPC_FUNC_IMPL(__imp__sub_82ABF8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF8F0"))) PPC_WEAK_FUNC(sub_82ABF8F0);
PPC_FUNC_IMPL(__imp__sub_82ABF8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r5,r9,10564
	ctx.r5.s64 = ctx.r9.s64 + 10564;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-23512
	ctx.r10.s64 = ctx.r10.s64 + -23512;
	// addi r4,r9,10620
	ctx.r4.s64 = ctx.r9.s64 + 10620;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,346
	ctx.r8.s64 = 346;
	// addi r31,r9,-8064
	ctx.r31.s64 = ctx.r9.s64 + -8064;
	// addi r9,r11,-26224
	ctx.r9.s64 = ctx.r11.s64 + -26224;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF940;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,19664
	ctx.r3.s64 = ctx.r8.s64 + 19664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26040
	ctx.r11.s64 = ctx.r9.s64 + -26040;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABF970;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF984"))) PPC_WEAK_FUNC(sub_82ABF984);
PPC_FUNC_IMPL(__imp__sub_82ABF984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF988"))) PPC_WEAK_FUNC(sub_82ABF988);
PPC_FUNC_IMPL(__imp__sub_82ABF988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,10680
	ctx.r5.s64 = ctx.r9.s64 + 10680;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,10744
	ctx.r4.s64 = ctx.r9.s64 + 10744;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-7976
	ctx.r31.s64 = ctx.r9.s64 + -7976;
	// addi r9,r11,-25944
	ctx.r9.s64 = ctx.r11.s64 + -25944;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABF9D8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,19744
	ctx.r3.s64 = ctx.r8.s64 + 19744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25784
	ctx.r11.s64 = ctx.r9.s64 + -25784;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABFA08;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFA1C"))) PPC_WEAK_FUNC(sub_82ABFA1C);
PPC_FUNC_IMPL(__imp__sub_82ABFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFA20"))) PPC_WEAK_FUNC(sub_82ABFA20);
PPC_FUNC_IMPL(__imp__sub_82ABFA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,19824
	ctx.r3.s64 = ctx.r11.s64 + 19824;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABFA2C"))) PPC_WEAK_FUNC(sub_82ABFA2C);
PPC_FUNC_IMPL(__imp__sub_82ABFA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFA30"))) PPC_WEAK_FUNC(sub_82ABFA30);
PPC_FUNC_IMPL(__imp__sub_82ABFA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,19840
	ctx.r3.s64 = ctx.r11.s64 + 19840;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABFA3C"))) PPC_WEAK_FUNC(sub_82ABFA3C);
PPC_FUNC_IMPL(__imp__sub_82ABFA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFA40"))) PPC_WEAK_FUNC(sub_82ABFA40);
PPC_FUNC_IMPL(__imp__sub_82ABFA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,19856
	ctx.r3.s64 = ctx.r11.s64 + 19856;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABFA4C"))) PPC_WEAK_FUNC(sub_82ABFA4C);
PPC_FUNC_IMPL(__imp__sub_82ABFA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFA50"))) PPC_WEAK_FUNC(sub_82ABFA50);
PPC_FUNC_IMPL(__imp__sub_82ABFA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,19872
	ctx.r3.s64 = ctx.r11.s64 + 19872;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABFA5C"))) PPC_WEAK_FUNC(sub_82ABFA5C);
PPC_FUNC_IMPL(__imp__sub_82ABFA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFA60"))) PPC_WEAK_FUNC(sub_82ABFA60);
PPC_FUNC_IMPL(__imp__sub_82ABFA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,19888
	ctx.r3.s64 = ctx.r11.s64 + 19888;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABFA6C"))) PPC_WEAK_FUNC(sub_82ABFA6C);
PPC_FUNC_IMPL(__imp__sub_82ABFA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFA70"))) PPC_WEAK_FUNC(sub_82ABFA70);
PPC_FUNC_IMPL(__imp__sub_82ABFA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,11084
	ctx.r5.s64 = ctx.r9.s64 + 11084;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,1348
	ctx.r4.s64 = ctx.r9.s64 + 1348;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-7848
	ctx.r31.s64 = ctx.r9.s64 + -7848;
	// addi r9,r11,-1592
	ctx.r9.s64 = ctx.r11.s64 + -1592;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABFAC0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,20264
	ctx.r3.s64 = ctx.r8.s64 + 20264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1416
	ctx.r11.s64 = ctx.r9.s64 + -1416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABFAF0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFB04"))) PPC_WEAK_FUNC(sub_82ABFB04);
PPC_FUNC_IMPL(__imp__sub_82ABFB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFB08"))) PPC_WEAK_FUNC(sub_82ABFB08);
PPC_FUNC_IMPL(__imp__sub_82ABFB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,20344
	ctx.r3.s64 = ctx.r11.s64 + 20344;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABFB14"))) PPC_WEAK_FUNC(sub_82ABFB14);
PPC_FUNC_IMPL(__imp__sub_82ABFB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFB18"))) PPC_WEAK_FUNC(sub_82ABFB18);
PPC_FUNC_IMPL(__imp__sub_82ABFB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,11136
	ctx.r5.s64 = ctx.r9.s64 + 11136;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,11192
	ctx.r4.s64 = ctx.r9.s64 + 11192;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-7752
	ctx.r31.s64 = ctx.r9.s64 + -7752;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABFB68;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,20360
	ctx.r3.s64 = ctx.r8.s64 + 20360;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5344
	ctx.r11.s64 = ctx.r9.s64 + 5344;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABFB98;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFBAC"))) PPC_WEAK_FUNC(sub_82ABFBAC);
PPC_FUNC_IMPL(__imp__sub_82ABFBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFBB0"))) PPC_WEAK_FUNC(sub_82ABFBB0);
PPC_FUNC_IMPL(__imp__sub_82ABFBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-7648
	ctx.r11.s64 = ctx.r11.s64 + -7648;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFBE8"))) PPC_WEAK_FUNC(sub_82ABFBE8);
PPC_FUNC_IMPL(__imp__sub_82ABFBE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-7664
	ctx.r11.s64 = ctx.r11.s64 + -7664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFC18"))) PPC_WEAK_FUNC(sub_82ABFC18);
PPC_FUNC_IMPL(__imp__sub_82ABFC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r5,r9,11408
	ctx.r5.s64 = ctx.r9.s64 + 11408;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-29896
	ctx.r10.s64 = ctx.r10.s64 + -29896;
	// addi r4,r9,11476
	ctx.r4.s64 = ctx.r9.s64 + 11476;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,17544
	ctx.r31.s64 = ctx.r9.s64 + 17544;
	// addi r9,r11,5624
	ctx.r9.s64 = ctx.r11.s64 + 5624;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABFC68;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,20728
	ctx.r3.s64 = ctx.r8.s64 + 20728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5696
	ctx.r11.s64 = ctx.r9.s64 + 5696;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABFC98;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFCAC"))) PPC_WEAK_FUNC(sub_82ABFCAC);
PPC_FUNC_IMPL(__imp__sub_82ABFCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFCB0"))) PPC_WEAK_FUNC(sub_82ABFCB0);
PPC_FUNC_IMPL(__imp__sub_82ABFCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r5,r9,11408
	ctx.r5.s64 = ctx.r9.s64 + 11408;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-29544
	ctx.r10.s64 = ctx.r10.s64 + -29544;
	// addi r4,r9,11520
	ctx.r4.s64 = ctx.r9.s64 + 11520;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,17632
	ctx.r31.s64 = ctx.r9.s64 + 17632;
	// addi r9,r11,5792
	ctx.r9.s64 = ctx.r11.s64 + 5792;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABFD00;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,20808
	ctx.r3.s64 = ctx.r8.s64 + 20808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5864
	ctx.r11.s64 = ctx.r9.s64 + 5864;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABFD30;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFD44"))) PPC_WEAK_FUNC(sub_82ABFD44);
PPC_FUNC_IMPL(__imp__sub_82ABFD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFD48"))) PPC_WEAK_FUNC(sub_82ABFD48);
PPC_FUNC_IMPL(__imp__sub_82ABFD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r5,r9,11408
	ctx.r5.s64 = ctx.r9.s64 + 11408;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-29192
	ctx.r10.s64 = ctx.r10.s64 + -29192;
	// addi r4,r9,11568
	ctx.r4.s64 = ctx.r9.s64 + 11568;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,17720
	ctx.r31.s64 = ctx.r9.s64 + 17720;
	// addi r9,r11,5960
	ctx.r9.s64 = ctx.r11.s64 + 5960;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABFD98;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,20888
	ctx.r3.s64 = ctx.r8.s64 + 20888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6032
	ctx.r11.s64 = ctx.r9.s64 + 6032;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABFDC8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFDDC"))) PPC_WEAK_FUNC(sub_82ABFDDC);
PPC_FUNC_IMPL(__imp__sub_82ABFDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFDE0"))) PPC_WEAK_FUNC(sub_82ABFDE0);
PPC_FUNC_IMPL(__imp__sub_82ABFDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,21112
	ctx.r3.s64 = ctx.r11.s64 + 21112;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABFDEC"))) PPC_WEAK_FUNC(sub_82ABFDEC);
PPC_FUNC_IMPL(__imp__sub_82ABFDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFDF0"))) PPC_WEAK_FUNC(sub_82ABFDF0);
PPC_FUNC_IMPL(__imp__sub_82ABFDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x825c4488
	ctx.lr = 0x82ABFE00;
	sub_825C4488(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r3,-7632(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFE18"))) PPC_WEAK_FUNC(sub_82ABFE18);
PPC_FUNC_IMPL(__imp__sub_82ABFE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,11964
	ctx.r5.s64 = ctx.r9.s64 + 11964;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,12008
	ctx.r4.s64 = ctx.r9.s64 + 12008;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,-7628
	ctx.r31.s64 = ctx.r9.s64 + -7628;
	// addi r9,r11,-9008
	ctx.r9.s64 = ctx.r11.s64 + -9008;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABFE68;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21184
	ctx.r3.s64 = ctx.r8.s64 + 21184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-7104
	ctx.r11.s64 = ctx.r9.s64 + -7104;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-8424
	ctx.r11.s64 = ctx.r10.s64 + -8424;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABFE98;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFEAC"))) PPC_WEAK_FUNC(sub_82ABFEAC);
PPC_FUNC_IMPL(__imp__sub_82ABFEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFEB0"))) PPC_WEAK_FUNC(sub_82ABFEB0);
PPC_FUNC_IMPL(__imp__sub_82ABFEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,12076
	ctx.r5.s64 = ctx.r9.s64 + 12076;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,12116
	ctx.r4.s64 = ctx.r9.s64 + 12116;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,-7540
	ctx.r31.s64 = ctx.r9.s64 + -7540;
	// addi r9,r11,-8840
	ctx.r9.s64 = ctx.r11.s64 + -8840;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABFF00;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21264
	ctx.r3.s64 = ctx.r8.s64 + 21264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-8632
	ctx.r11.s64 = ctx.r9.s64 + -8632;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-8424
	ctx.r11.s64 = ctx.r10.s64 + -8424;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABFF30;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFF44"))) PPC_WEAK_FUNC(sub_82ABFF44);
PPC_FUNC_IMPL(__imp__sub_82ABFF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFF48"))) PPC_WEAK_FUNC(sub_82ABFF48);
PPC_FUNC_IMPL(__imp__sub_82ABFF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,12232
	ctx.r5.s64 = ctx.r9.s64 + 12232;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,12276
	ctx.r4.s64 = ctx.r9.s64 + 12276;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,-7452
	ctx.r31.s64 = ctx.r9.s64 + -7452;
	// addi r9,r11,-9008
	ctx.r9.s64 = ctx.r11.s64 + -9008;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABFF98;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21344
	ctx.r3.s64 = ctx.r8.s64 + 21344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-7104
	ctx.r11.s64 = ctx.r9.s64 + -7104;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-6936
	ctx.r11.s64 = ctx.r10.s64 + -6936;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABFFC8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFFDC"))) PPC_WEAK_FUNC(sub_82ABFFDC);
PPC_FUNC_IMPL(__imp__sub_82ABFFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABFFE0"))) PPC_WEAK_FUNC(sub_82ABFFE0);
PPC_FUNC_IMPL(__imp__sub_82ABFFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,12324
	ctx.r5.s64 = ctx.r9.s64 + 12324;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,12368
	ctx.r4.s64 = ctx.r9.s64 + 12368;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,-7364
	ctx.r31.s64 = ctx.r9.s64 + -7364;
	// addi r9,r11,20656
	ctx.r9.s64 = ctx.r11.s64 + 20656;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0030;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21424
	ctx.r3.s64 = ctx.r8.s64 + 21424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31440
	ctx.r11.s64 = ctx.r9.s64 + 31440;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-6936
	ctx.r11.s64 = ctx.r10.s64 + -6936;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0060;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0074"))) PPC_WEAK_FUNC(sub_82AC0074);
PPC_FUNC_IMPL(__imp__sub_82AC0074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0078"))) PPC_WEAK_FUNC(sub_82AC0078);
PPC_FUNC_IMPL(__imp__sub_82AC0078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,-17760
	ctx.r6.s64 = ctx.r9.s64 + -17760;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,12516
	ctx.r5.s64 = ctx.r9.s64 + 12516;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,12548
	ctx.r4.s64 = ctx.r9.s64 + 12548;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,367
	ctx.r8.s64 = 367;
	// addi r31,r9,-7276
	ctx.r31.s64 = ctx.r9.s64 + -7276;
	// addi r9,r11,-3984
	ctx.r9.s64 = ctx.r11.s64 + -3984;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC00C8;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21504
	ctx.r3.s64 = ctx.r8.s64 + 21504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-3808
	ctx.r11.s64 = ctx.r9.s64 + -3808;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-3584
	ctx.r11.s64 = ctx.r10.s64 + -3584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC00F8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC010C"))) PPC_WEAK_FUNC(sub_82AC010C);
PPC_FUNC_IMPL(__imp__sub_82AC010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0110"))) PPC_WEAK_FUNC(sub_82AC0110);
PPC_FUNC_IMPL(__imp__sub_82AC0110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,-17732
	ctx.r6.s64 = ctx.r9.s64 + -17732;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,12516
	ctx.r5.s64 = ctx.r9.s64 + 12516;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,12680
	ctx.r4.s64 = ctx.r9.s64 + 12680;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,367
	ctx.r8.s64 = 367;
	// addi r31,r9,-7188
	ctx.r31.s64 = ctx.r9.s64 + -7188;
	// addi r9,r11,-3056
	ctx.r9.s64 = ctx.r11.s64 + -3056;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0160;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21584
	ctx.r3.s64 = ctx.r8.s64 + 21584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-2840
	ctx.r11.s64 = ctx.r9.s64 + -2840;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-3584
	ctx.r11.s64 = ctx.r10.s64 + -3584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0190;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC01A4"))) PPC_WEAK_FUNC(sub_82AC01A4);
PPC_FUNC_IMPL(__imp__sub_82AC01A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC01A8"))) PPC_WEAK_FUNC(sub_82AC01A8);
PPC_FUNC_IMPL(__imp__sub_82AC01A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r5,r9,12956
	ctx.r5.s64 = ctx.r9.s64 + 12956;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9152
	ctx.r10.s64 = ctx.r10.s64 + 9152;
	// addi r4,r9,13000
	ctx.r4.s64 = ctx.r9.s64 + 13000;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,18248
	ctx.r31.s64 = ctx.r9.s64 + 18248;
	// addi r9,r11,8888
	ctx.r9.s64 = ctx.r11.s64 + 8888;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC01F8;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21664
	ctx.r3.s64 = ctx.r8.s64 + 21664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31224
	ctx.r11.s64 = ctx.r9.s64 + 31224;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9064
	ctx.r11.s64 = ctx.r10.s64 + 9064;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0228;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC023C"))) PPC_WEAK_FUNC(sub_82AC023C);
PPC_FUNC_IMPL(__imp__sub_82AC023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0240"))) PPC_WEAK_FUNC(sub_82AC0240);
PPC_FUNC_IMPL(__imp__sub_82AC0240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r5,r9,12956
	ctx.r5.s64 = ctx.r9.s64 + 12956;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,10360
	ctx.r10.s64 = ctx.r10.s64 + 10360;
	// addi r4,r9,13088
	ctx.r4.s64 = ctx.r9.s64 + 13088;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,318
	ctx.r8.s64 = 318;
	// addi r31,r9,18160
	ctx.r31.s64 = ctx.r9.s64 + 18160;
	// addi r9,r11,23208
	ctx.r9.s64 = ctx.r11.s64 + 23208;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0290;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21744
	ctx.r3.s64 = ctx.r8.s64 + 21744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,9440
	ctx.r11.s64 = ctx.r9.s64 + 9440;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC02C0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC02D4"))) PPC_WEAK_FUNC(sub_82AC02D4);
PPC_FUNC_IMPL(__imp__sub_82AC02D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC02D8"))) PPC_WEAK_FUNC(sub_82AC02D8);
PPC_FUNC_IMPL(__imp__sub_82AC02D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r5,r9,12956
	ctx.r5.s64 = ctx.r9.s64 + 12956;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,11024
	ctx.r10.s64 = ctx.r10.s64 + 11024;
	// addi r4,r9,13184
	ctx.r4.s64 = ctx.r9.s64 + 13184;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,18072
	ctx.r31.s64 = ctx.r9.s64 + 18072;
	// addi r9,r11,23208
	ctx.r9.s64 = ctx.r11.s64 + 23208;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0328;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21824
	ctx.r3.s64 = ctx.r8.s64 + 21824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,9744
	ctx.r11.s64 = ctx.r9.s64 + 9744;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0358;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC036C"))) PPC_WEAK_FUNC(sub_82AC036C);
PPC_FUNC_IMPL(__imp__sub_82AC036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0370"))) PPC_WEAK_FUNC(sub_82AC0370);
PPC_FUNC_IMPL(__imp__sub_82AC0370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r5,r9,13276
	ctx.r5.s64 = ctx.r9.s64 + 13276;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9152
	ctx.r10.s64 = ctx.r10.s64 + 9152;
	// addi r4,r9,13320
	ctx.r4.s64 = ctx.r9.s64 + 13320;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,17984
	ctx.r31.s64 = ctx.r9.s64 + 17984;
	// addi r9,r11,10144
	ctx.r9.s64 = ctx.r11.s64 + 10144;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC03C0;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21904
	ctx.r3.s64 = ctx.r8.s64 + 21904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,9944
	ctx.r11.s64 = ctx.r9.s64 + 9944;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9064
	ctx.r11.s64 = ctx.r10.s64 + 9064;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC03F0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0404"))) PPC_WEAK_FUNC(sub_82AC0404);
PPC_FUNC_IMPL(__imp__sub_82AC0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0408"))) PPC_WEAK_FUNC(sub_82AC0408);
PPC_FUNC_IMPL(__imp__sub_82AC0408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r5,r9,13276
	ctx.r5.s64 = ctx.r9.s64 + 13276;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,10360
	ctx.r10.s64 = ctx.r10.s64 + 10360;
	// addi r4,r9,13400
	ctx.r4.s64 = ctx.r9.s64 + 13400;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,17896
	ctx.r31.s64 = ctx.r9.s64 + 17896;
	// addi r9,r11,10144
	ctx.r9.s64 = ctx.r11.s64 + 10144;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0458;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,21984
	ctx.r3.s64 = ctx.r8.s64 + 21984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,9944
	ctx.r11.s64 = ctx.r9.s64 + 9944;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0488;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC049C"))) PPC_WEAK_FUNC(sub_82AC049C);
PPC_FUNC_IMPL(__imp__sub_82AC049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC04A0"))) PPC_WEAK_FUNC(sub_82AC04A0);
PPC_FUNC_IMPL(__imp__sub_82AC04A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r5,r9,13276
	ctx.r5.s64 = ctx.r9.s64 + 13276;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,11024
	ctx.r10.s64 = ctx.r10.s64 + 11024;
	// addi r4,r9,13488
	ctx.r4.s64 = ctx.r9.s64 + 13488;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,17808
	ctx.r31.s64 = ctx.r9.s64 + 17808;
	// addi r9,r11,10560
	ctx.r9.s64 = ctx.r11.s64 + 10560;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC04F0;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,22064
	ctx.r3.s64 = ctx.r8.s64 + 22064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,10784
	ctx.r11.s64 = ctx.r9.s64 + 10784;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0520;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0534"))) PPC_WEAK_FUNC(sub_82AC0534);
PPC_FUNC_IMPL(__imp__sub_82AC0534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0538"))) PPC_WEAK_FUNC(sub_82AC0538);
PPC_FUNC_IMPL(__imp__sub_82AC0538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,13864
	ctx.r5.s64 = ctx.r9.s64 + 13864;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,13920
	ctx.r4.s64 = ctx.r9.s64 + 13920;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,18776
	ctx.r31.s64 = ctx.r9.s64 + 18776;
	// addi r9,r11,20376
	ctx.r9.s64 = ctx.r11.s64 + 20376;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0588;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,22144
	ctx.r3.s64 = ctx.r8.s64 + 22144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,20864
	ctx.r11.s64 = ctx.r9.s64 + 20864;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,20576
	ctx.r11.s64 = ctx.r10.s64 + 20576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC05B8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC05CC"))) PPC_WEAK_FUNC(sub_82AC05CC);
PPC_FUNC_IMPL(__imp__sub_82AC05CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC05D0"))) PPC_WEAK_FUNC(sub_82AC05D0);
PPC_FUNC_IMPL(__imp__sub_82AC05D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,14024
	ctx.r5.s64 = ctx.r9.s64 + 14024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,14072
	ctx.r4.s64 = ctx.r9.s64 + 14072;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,344
	ctx.r8.s64 = 344;
	// addi r31,r9,18688
	ctx.r31.s64 = ctx.r9.s64 + 18688;
	// addi r9,r11,20656
	ctx.r9.s64 = ctx.r11.s64 + 20656;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0620;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,22224
	ctx.r3.s64 = ctx.r8.s64 + 22224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31440
	ctx.r11.s64 = ctx.r9.s64 + 31440;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,20576
	ctx.r11.s64 = ctx.r10.s64 + 20576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0650;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0664"))) PPC_WEAK_FUNC(sub_82AC0664);
PPC_FUNC_IMPL(__imp__sub_82AC0664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0668"))) PPC_WEAK_FUNC(sub_82AC0668);
PPC_FUNC_IMPL(__imp__sub_82AC0668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,13864
	ctx.r5.s64 = ctx.r9.s64 + 13864;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,14176
	ctx.r4.s64 = ctx.r9.s64 + 14176;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,18600
	ctx.r31.s64 = ctx.r9.s64 + 18600;
	// addi r9,r11,20376
	ctx.r9.s64 = ctx.r11.s64 + 20376;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC06B8;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,22304
	ctx.r3.s64 = ctx.r8.s64 + 22304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,20864
	ctx.r11.s64 = ctx.r9.s64 + 20864;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,20856
	ctx.r11.s64 = ctx.r10.s64 + 20856;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC06E8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC06FC"))) PPC_WEAK_FUNC(sub_82AC06FC);
PPC_FUNC_IMPL(__imp__sub_82AC06FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0700"))) PPC_WEAK_FUNC(sub_82AC0700);
PPC_FUNC_IMPL(__imp__sub_82AC0700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,14024
	ctx.r5.s64 = ctx.r9.s64 + 14024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,14272
	ctx.r4.s64 = ctx.r9.s64 + 14272;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,344
	ctx.r8.s64 = 344;
	// addi r31,r9,18512
	ctx.r31.s64 = ctx.r9.s64 + 18512;
	// addi r9,r11,20656
	ctx.r9.s64 = ctx.r11.s64 + 20656;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0750;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,22384
	ctx.r3.s64 = ctx.r8.s64 + 22384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31440
	ctx.r11.s64 = ctx.r9.s64 + 31440;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,20856
	ctx.r11.s64 = ctx.r10.s64 + 20856;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0780;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0794"))) PPC_WEAK_FUNC(sub_82AC0794);
PPC_FUNC_IMPL(__imp__sub_82AC0794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0798"))) PPC_WEAK_FUNC(sub_82AC0798);
PPC_FUNC_IMPL(__imp__sub_82AC0798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,13864
	ctx.r5.s64 = ctx.r9.s64 + 13864;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,14368
	ctx.r4.s64 = ctx.r9.s64 + 14368;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,18424
	ctx.r31.s64 = ctx.r9.s64 + 18424;
	// addi r9,r11,20376
	ctx.r9.s64 = ctx.r11.s64 + 20376;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC07E8;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,22464
	ctx.r3.s64 = ctx.r8.s64 + 22464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,20864
	ctx.r11.s64 = ctx.r9.s64 + 20864;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,21128
	ctx.r11.s64 = ctx.r10.s64 + 21128;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0818;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC082C"))) PPC_WEAK_FUNC(sub_82AC082C);
PPC_FUNC_IMPL(__imp__sub_82AC082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0830"))) PPC_WEAK_FUNC(sub_82AC0830);
PPC_FUNC_IMPL(__imp__sub_82AC0830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,14024
	ctx.r5.s64 = ctx.r9.s64 + 14024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,14464
	ctx.r4.s64 = ctx.r9.s64 + 14464;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,344
	ctx.r8.s64 = 344;
	// addi r31,r9,18336
	ctx.r31.s64 = ctx.r9.s64 + 18336;
	// addi r9,r11,20656
	ctx.r9.s64 = ctx.r11.s64 + 20656;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0880;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,22544
	ctx.r3.s64 = ctx.r8.s64 + 22544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31440
	ctx.r11.s64 = ctx.r9.s64 + 31440;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,21128
	ctx.r11.s64 = ctx.r10.s64 + 21128;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC08B0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC08C4"))) PPC_WEAK_FUNC(sub_82AC08C4);
PPC_FUNC_IMPL(__imp__sub_82AC08C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC08C8"))) PPC_WEAK_FUNC(sub_82AC08C8);
PPC_FUNC_IMPL(__imp__sub_82AC08C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,14976
	ctx.r5.s64 = ctx.r9.s64 + 14976;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,15040
	ctx.r4.s64 = ctx.r9.s64 + 15040;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,18952
	ctx.r31.s64 = ctx.r9.s64 + 18952;
	// addi r9,r11,8888
	ctx.r9.s64 = ctx.r11.s64 + 8888;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0918;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,22768
	ctx.r3.s64 = ctx.r8.s64 + 22768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31224
	ctx.r11.s64 = ctx.r9.s64 + 31224;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,31416
	ctx.r11.s64 = ctx.r10.s64 + 31416;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0948;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC095C"))) PPC_WEAK_FUNC(sub_82AC095C);
PPC_FUNC_IMPL(__imp__sub_82AC095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0960"))) PPC_WEAK_FUNC(sub_82AC0960);
PPC_FUNC_IMPL(__imp__sub_82AC0960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,15156
	ctx.r5.s64 = ctx.r9.s64 + 15156;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,15216
	ctx.r4.s64 = ctx.r9.s64 + 15216;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,18864
	ctx.r31.s64 = ctx.r9.s64 + 18864;
	// addi r9,r11,20656
	ctx.r9.s64 = ctx.r11.s64 + 20656;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC09B0;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,22848
	ctx.r3.s64 = ctx.r8.s64 + 22848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31440
	ctx.r11.s64 = ctx.r9.s64 + 31440;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,31416
	ctx.r11.s64 = ctx.r10.s64 + 31416;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC09E0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC09F4"))) PPC_WEAK_FUNC(sub_82AC09F4);
PPC_FUNC_IMPL(__imp__sub_82AC09F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC09F8"))) PPC_WEAK_FUNC(sub_82AC09F8);
PPC_FUNC_IMPL(__imp__sub_82AC09F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,15332
	ctx.r5.s64 = ctx.r9.s64 + 15332;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,15400
	ctx.r4.s64 = ctx.r9.s64 + 15400;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-7100
	ctx.r31.s64 = ctx.r9.s64 + -7100;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0A48;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,22928
	ctx.r3.s64 = ctx.r8.s64 + 22928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-15280
	ctx.r11.s64 = ctx.r9.s64 + -15280;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0A78;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0A8C"))) PPC_WEAK_FUNC(sub_82AC0A8C);
PPC_FUNC_IMPL(__imp__sub_82AC0A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0A90"))) PPC_WEAK_FUNC(sub_82AC0A90);
PPC_FUNC_IMPL(__imp__sub_82AC0A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,15472
	ctx.r5.s64 = ctx.r9.s64 + 15472;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,15536
	ctx.r4.s64 = ctx.r9.s64 + 15536;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,373
	ctx.r8.s64 = 373;
	// addi r31,r9,-7012
	ctx.r31.s64 = ctx.r9.s64 + -7012;
	// addi r9,r11,29864
	ctx.r9.s64 = ctx.r11.s64 + 29864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0AE0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,23008
	ctx.r3.s64 = ctx.r8.s64 + 23008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,26800
	ctx.r11.s64 = ctx.r9.s64 + 26800;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0B10;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0B24"))) PPC_WEAK_FUNC(sub_82AC0B24);
PPC_FUNC_IMPL(__imp__sub_82AC0B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0B28"))) PPC_WEAK_FUNC(sub_82AC0B28);
PPC_FUNC_IMPL(__imp__sub_82AC0B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,23088
	ctx.r3.s64 = ctx.r11.s64 + 23088;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0B34"))) PPC_WEAK_FUNC(sub_82AC0B34);
PPC_FUNC_IMPL(__imp__sub_82AC0B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0B38"))) PPC_WEAK_FUNC(sub_82AC0B38);
PPC_FUNC_IMPL(__imp__sub_82AC0B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,15724
	ctx.r5.s64 = ctx.r9.s64 + 15724;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,15768
	ctx.r4.s64 = ctx.r9.s64 + 15768;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-6916
	ctx.r31.s64 = ctx.r9.s64 + -6916;
	// addi r9,r11,-31368
	ctx.r9.s64 = ctx.r11.s64 + -31368;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0B88;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,23248
	ctx.r3.s64 = ctx.r8.s64 + 23248;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-31192
	ctx.r11.s64 = ctx.r9.s64 + -31192;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0BB8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0BCC"))) PPC_WEAK_FUNC(sub_82AC0BCC);
PPC_FUNC_IMPL(__imp__sub_82AC0BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0BD0"))) PPC_WEAK_FUNC(sub_82AC0BD0);
PPC_FUNC_IMPL(__imp__sub_82AC0BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,15816
	ctx.r5.s64 = ctx.r9.s64 + 15816;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,15860
	ctx.r4.s64 = ctx.r9.s64 + 15860;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,355
	ctx.r8.s64 = 355;
	// addi r31,r9,-6828
	ctx.r31.s64 = ctx.r9.s64 + -6828;
	// addi r9,r11,-29488
	ctx.r9.s64 = ctx.r11.s64 + -29488;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0C20;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,23328
	ctx.r3.s64 = ctx.r8.s64 + 23328;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29296
	ctx.r11.s64 = ctx.r9.s64 + -29296;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0C50;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0C64"))) PPC_WEAK_FUNC(sub_82AC0C64);
PPC_FUNC_IMPL(__imp__sub_82AC0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0C68"))) PPC_WEAK_FUNC(sub_82AC0C68);
PPC_FUNC_IMPL(__imp__sub_82AC0C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,18280
	ctx.r3.s64 = ctx.r11.s64 + 18280;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82AC0C8C;
	sub_8257A5A8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,23408
	ctx.r3.s64 = ctx.r11.s64 + 23408;
	// bl 0x828d1968
	ctx.lr = 0x82AC0C98;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0CA8"))) PPC_WEAK_FUNC(sub_82AC0CA8);
PPC_FUNC_IMPL(__imp__sub_82AC0CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,23448
	ctx.r3.s64 = ctx.r11.s64 + 23448;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0CB4"))) PPC_WEAK_FUNC(sub_82AC0CB4);
PPC_FUNC_IMPL(__imp__sub_82AC0CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0CB8"))) PPC_WEAK_FUNC(sub_82AC0CB8);
PPC_FUNC_IMPL(__imp__sub_82AC0CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,16128
	ctx.r5.s64 = ctx.r9.s64 + 16128;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,16184
	ctx.r4.s64 = ctx.r9.s64 + 16184;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,328
	ctx.r8.s64 = 328;
	// addi r31,r9,-6732
	ctx.r31.s64 = ctx.r9.s64 + -6732;
	// addi r9,r11,-25336
	ctx.r9.s64 = ctx.r11.s64 + -25336;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0D08;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,23536
	ctx.r3.s64 = ctx.r8.s64 + 23536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25160
	ctx.r11.s64 = ctx.r9.s64 + -25160;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0D38;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0D4C"))) PPC_WEAK_FUNC(sub_82AC0D4C);
PPC_FUNC_IMPL(__imp__sub_82AC0D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0D50"))) PPC_WEAK_FUNC(sub_82AC0D50);
PPC_FUNC_IMPL(__imp__sub_82AC0D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,16240
	ctx.r5.s64 = ctx.r9.s64 + 16240;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,16296
	ctx.r4.s64 = ctx.r9.s64 + 16296;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-6644
	ctx.r31.s64 = ctx.r9.s64 + -6644;
	// addi r9,r11,-144
	ctx.r9.s64 = ctx.r11.s64 + -144;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC0DA0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,23616
	ctx.r3.s64 = ctx.r8.s64 + 23616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-24832
	ctx.r11.s64 = ctx.r9.s64 + -24832;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC0DD0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0DE4"))) PPC_WEAK_FUNC(sub_82AC0DE4);
PPC_FUNC_IMPL(__imp__sub_82AC0DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0DE8"))) PPC_WEAK_FUNC(sub_82AC0DE8);
PPC_FUNC_IMPL(__imp__sub_82AC0DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,23696
	ctx.r3.s64 = ctx.r11.s64 + 23696;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0DF4"))) PPC_WEAK_FUNC(sub_82AC0DF4);
PPC_FUNC_IMPL(__imp__sub_82AC0DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0DF8"))) PPC_WEAK_FUNC(sub_82AC0DF8);
PPC_FUNC_IMPL(__imp__sub_82AC0DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r5,r10,16904
	ctx.r5.s64 = ctx.r10.s64 + 16904;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,16948
	ctx.r4.s64 = ctx.r10.s64 + 16948;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r9,r9,-4672
	ctx.r9.s64 = ctx.r9.s64 + -4672;
	// addi r3,r10,-6548
	ctx.r3.s64 = ctx.r10.s64 + -6548;
	// li r10,362
	ctx.r10.s64 = 362;
	// addi r8,r11,-2840
	ctx.r8.s64 = ctx.r11.s64 + -2840;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82591720
	sub_82591720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0E30"))) PPC_WEAK_FUNC(sub_82AC0E30);
PPC_FUNC_IMPL(__imp__sub_82AC0E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,23712
	ctx.r3.s64 = ctx.r11.s64 + 23712;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0E3C"))) PPC_WEAK_FUNC(sub_82AC0E3C);
PPC_FUNC_IMPL(__imp__sub_82AC0E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0E40"))) PPC_WEAK_FUNC(sub_82AC0E40);
PPC_FUNC_IMPL(__imp__sub_82AC0E40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r5,r10,17012
	ctx.r5.s64 = ctx.r10.s64 + 17012;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,17056
	ctx.r4.s64 = ctx.r10.s64 + 17056;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r9,r9,-2736
	ctx.r9.s64 = ctx.r9.s64 + -2736;
	// addi r3,r10,-6516
	ctx.r3.s64 = ctx.r10.s64 + -6516;
	// li r10,339
	ctx.r10.s64 = 339;
	// addi r8,r11,-40
	ctx.r8.s64 = ctx.r11.s64 + -40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82591720
	sub_82591720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0E78"))) PPC_WEAK_FUNC(sub_82AC0E78);
PPC_FUNC_IMPL(__imp__sub_82AC0E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,23736
	ctx.r3.s64 = ctx.r11.s64 + 23736;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0E84"))) PPC_WEAK_FUNC(sub_82AC0E84);
PPC_FUNC_IMPL(__imp__sub_82AC0E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0E88"))) PPC_WEAK_FUNC(sub_82AC0E88);
PPC_FUNC_IMPL(__imp__sub_82AC0E88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r5,r10,17240
	ctx.r5.s64 = ctx.r10.s64 + 17240;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,17296
	ctx.r4.s64 = ctx.r10.s64 + 17296;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r9,r9,-2736
	ctx.r9.s64 = ctx.r9.s64 + -2736;
	// addi r3,r10,-6484
	ctx.r3.s64 = ctx.r10.s64 + -6484;
	// li r10,339
	ctx.r10.s64 = 339;
	// addi r8,r11,-40
	ctx.r8.s64 = ctx.r11.s64 + -40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82591720
	sub_82591720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0EC0"))) PPC_WEAK_FUNC(sub_82AC0EC0);
PPC_FUNC_IMPL(__imp__sub_82AC0EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,23760
	ctx.r3.s64 = ctx.r11.s64 + 23760;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0ECC"))) PPC_WEAK_FUNC(sub_82AC0ECC);
PPC_FUNC_IMPL(__imp__sub_82AC0ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0ED0"))) PPC_WEAK_FUNC(sub_82AC0ED0);
PPC_FUNC_IMPL(__imp__sub_82AC0ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r5,r10,17352
	ctx.r5.s64 = ctx.r10.s64 + 17352;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,17416
	ctx.r4.s64 = ctx.r10.s64 + 17416;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r9,r9,-2736
	ctx.r9.s64 = ctx.r9.s64 + -2736;
	// addi r3,r10,-6452
	ctx.r3.s64 = ctx.r10.s64 + -6452;
	// li r10,339
	ctx.r10.s64 = 339;
	// addi r8,r11,1824
	ctx.r8.s64 = ctx.r11.s64 + 1824;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82591720
	sub_82591720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0F08"))) PPC_WEAK_FUNC(sub_82AC0F08);
PPC_FUNC_IMPL(__imp__sub_82AC0F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r11,r11,-6224
	ctx.r11.s64 = ctx.r11.s64 + -6224;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0F40"))) PPC_WEAK_FUNC(sub_82AC0F40);
PPC_FUNC_IMPL(__imp__sub_82AC0F40) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-6240
	ctx.r11.s64 = ctx.r11.s64 + -6240;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0F70"))) PPC_WEAK_FUNC(sub_82AC0F70);
PPC_FUNC_IMPL(__imp__sub_82AC0F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,19584
	ctx.r3.s64 = ctx.r11.s64 + 19584;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82AC0F94;
	sub_8257A5A8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,23784
	ctx.r3.s64 = ctx.r11.s64 + 23784;
	// bl 0x828d1968
	ctx.lr = 0x82AC0FA0;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0FB0"))) PPC_WEAK_FUNC(sub_82AC0FB0);
PPC_FUNC_IMPL(__imp__sub_82AC0FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,17500
	ctx.r5.s64 = ctx.r9.s64 + 17500;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,17536
	ctx.r4.s64 = ctx.r9.s64 + 17536;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-6328
	ctx.r31.s64 = ctx.r9.s64 + -6328;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC1000;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,23824
	ctx.r3.s64 = ctx.r8.s64 + 23824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,2416
	ctx.r11.s64 = ctx.r9.s64 + 2416;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC1030;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC1044"))) PPC_WEAK_FUNC(sub_82AC1044);
PPC_FUNC_IMPL(__imp__sub_82AC1044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1048"))) PPC_WEAK_FUNC(sub_82AC1048);
PPC_FUNC_IMPL(__imp__sub_82AC1048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,17576
	ctx.r5.s64 = ctx.r9.s64 + 17576;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,17616
	ctx.r4.s64 = ctx.r9.s64 + 17616;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-6424
	ctx.r31.s64 = ctx.r9.s64 + -6424;
	// addi r9,r11,2568
	ctx.r9.s64 = ctx.r11.s64 + 2568;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC1098;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,23904
	ctx.r3.s64 = ctx.r8.s64 + 23904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6280
	ctx.r11.s64 = ctx.r9.s64 + 6280;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC10C8;
	sub_828D1968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC10DC"))) PPC_WEAK_FUNC(sub_82AC10DC);
PPC_FUNC_IMPL(__imp__sub_82AC10DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC10E0"))) PPC_WEAK_FUNC(sub_82AC10E0);
PPC_FUNC_IMPL(__imp__sub_82AC10E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC10EC"))) PPC_WEAK_FUNC(sub_82AC10EC);
PPC_FUNC_IMPL(__imp__sub_82AC10EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC10F0"))) PPC_WEAK_FUNC(sub_82AC10F0);
PPC_FUNC_IMPL(__imp__sub_82AC10F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r5,r10,17856
	ctx.r5.s64 = ctx.r10.s64 + 17856;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,17900
	ctx.r4.s64 = ctx.r10.s64 + 17900;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r9,r9,5768
	ctx.r9.s64 = ctx.r9.s64 + 5768;
	// addi r3,r10,-6208
	ctx.r3.s64 = ctx.r10.s64 + -6208;
	// li r10,370
	ctx.r10.s64 = 370;
	// addi r8,r11,4840
	ctx.r8.s64 = ctx.r11.s64 + 4840;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82591720
	sub_82591720(ctx, base);
	return;
}

