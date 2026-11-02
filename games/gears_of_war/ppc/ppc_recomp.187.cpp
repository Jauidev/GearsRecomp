#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AC1128"))) PPC_WEAK_FUNC(sub_82AC1128);
PPC_FUNC_IMPL(__imp__sub_82AC1128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r5,r10,18024
	ctx.r5.s64 = ctx.r10.s64 + 18024;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,18076
	ctx.r4.s64 = ctx.r10.s64 + 18076;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r9,r9,5544
	ctx.r9.s64 = ctx.r9.s64 + 5544;
	// addi r3,r10,-6180
	ctx.r3.s64 = ctx.r10.s64 + -6180;
	// li r10,370
	ctx.r10.s64 = 370;
	// addi r8,r11,5648
	ctx.r8.s64 = ctx.r11.s64 + 5648;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82591720
	sub_82591720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1160"))) PPC_WEAK_FUNC(sub_82AC1160);
PPC_FUNC_IMPL(__imp__sub_82AC1160) {
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
	// addi r5,r9,18172
	ctx.r5.s64 = ctx.r9.s64 + 18172;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,18224
	ctx.r4.s64 = ctx.r9.s64 + 18224;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,-6152
	ctx.r31.s64 = ctx.r9.s64 + -6152;
	// addi r9,r11,2568
	ctx.r9.s64 = ctx.r11.s64 + 2568;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC11B0;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r11,r11,18540
	ctx.r11.s64 = ctx.r11.s64 + 18540;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,24000
	ctx.r3.s64 = ctx.r8.s64 + 24000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6280
	ctx.r11.s64 = ctx.r9.s64 + 6280;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,6400
	ctx.r11.s64 = ctx.r10.s64 + 6400;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC11E0;
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

__attribute__((alias("__imp__sub_82AC11F4"))) PPC_WEAK_FUNC(sub_82AC11F4);
PPC_FUNC_IMPL(__imp__sub_82AC11F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC11F8"))) PPC_WEAK_FUNC(sub_82AC11F8);
PPC_FUNC_IMPL(__imp__sub_82AC11F8) {
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
	// addi r5,r9,18308
	ctx.r5.s64 = ctx.r9.s64 + 18308;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,18360
	ctx.r4.s64 = ctx.r9.s64 + 18360;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,339
	ctx.r8.s64 = 339;
	// addi r31,r9,-6064
	ctx.r31.s64 = ctx.r9.s64 + -6064;
	// addi r9,r11,6424
	ctx.r9.s64 = ctx.r11.s64 + 6424;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82AC1248;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r11,r11,18540
	ctx.r11.s64 = ctx.r11.s64 + 18540;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,24080
	ctx.r3.s64 = ctx.r8.s64 + 24080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6648
	ctx.r11.s64 = ctx.r9.s64 + 6648;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,6400
	ctx.r11.s64 = ctx.r10.s64 + 6400;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AC1278;
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

__attribute__((alias("__imp__sub_82AC128C"))) PPC_WEAK_FUNC(sub_82AC128C);
PPC_FUNC_IMPL(__imp__sub_82AC128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1290"))) PPC_WEAK_FUNC(sub_82AC1290);
PPC_FUNC_IMPL(__imp__sub_82AC1290) {
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
	// addi r3,r11,20888
	ctx.r3.s64 = ctx.r11.s64 + 20888;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82AC12B4;
	sub_8257A5A8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24160
	ctx.r3.s64 = ctx.r11.s64 + 24160;
	// bl 0x828d1968
	ctx.lr = 0x82AC12C0;
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

__attribute__((alias("__imp__sub_82AC12D0"))) PPC_WEAK_FUNC(sub_82AC12D0);
PPC_FUNC_IMPL(__imp__sub_82AC12D0) {
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
	// addi r3,r11,20912
	ctx.r3.s64 = ctx.r11.s64 + 20912;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82AC12F4;
	sub_8257A5A8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24200
	ctx.r3.s64 = ctx.r11.s64 + 24200;
	// bl 0x828d1968
	ctx.lr = 0x82AC1300;
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

__attribute__((alias("__imp__sub_82AC1310"))) PPC_WEAK_FUNC(sub_82AC1310);
PPC_FUNC_IMPL(__imp__sub_82AC1310) {
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
	// addi r3,r11,20936
	ctx.r3.s64 = ctx.r11.s64 + 20936;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82AC1334;
	sub_8257A5A8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24288
	ctx.r3.s64 = ctx.r11.s64 + 24288;
	// bl 0x828d1968
	ctx.lr = 0x82AC1340;
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

__attribute__((alias("__imp__sub_82AC1350"))) PPC_WEAK_FUNC(sub_82AC1350);
PPC_FUNC_IMPL(__imp__sub_82AC1350) {
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
	// addi r11,r11,20960
	ctx.r11.s64 = ctx.r11.s64 + 20960;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82ac63b4
	ctx.lr = 0x82AC136C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24376
	ctx.r3.s64 = ctx.r11.s64 + 24376;
	// bl 0x828d1968
	ctx.lr = 0x82AC1378;
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

__attribute__((alias("__imp__sub_82AC1388"))) PPC_WEAK_FUNC(sub_82AC1388);
PPC_FUNC_IMPL(__imp__sub_82AC1388) {
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
	// addi r11,r11,20992
	ctx.r11.s64 = ctx.r11.s64 + 20992;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82ac63b4
	ctx.lr = 0x82AC13A4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24400
	ctx.r3.s64 = ctx.r11.s64 + 24400;
	// bl 0x828d1968
	ctx.lr = 0x82AC13B0;
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

__attribute__((alias("__imp__sub_82AC13C0"))) PPC_WEAK_FUNC(sub_82AC13C0);
PPC_FUNC_IMPL(__imp__sub_82AC13C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r11,30124
	ctx.r3.s64 = ctx.r11.s64 + 30124;
	// b 0x827612a0
	sub_827612A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC13D0"))) PPC_WEAK_FUNC(sub_82AC13D0);
PPC_FUNC_IMPL(__imp__sub_82AC13D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r4,r11,30124
	ctx.r4.s64 = ctx.r11.s64 + 30124;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,30160
	ctx.r3.s64 = ctx.r11.s64 + 30160;
	// b 0x8275f530
	sub_8275F530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC13E4"))) PPC_WEAK_FUNC(sub_82AC13E4);
PPC_FUNC_IMPL(__imp__sub_82AC13E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC13E8"))) PPC_WEAK_FUNC(sub_82AC13E8);
PPC_FUNC_IMPL(__imp__sub_82AC13E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,-25168
	ctx.r3.s64 = ctx.r11.s64 + -25168;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828d2890
	sub_828D2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC13FC"))) PPC_WEAK_FUNC(sub_82AC13FC);
PPC_FUNC_IMPL(__imp__sub_82AC13FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1400"))) PPC_WEAK_FUNC(sub_82AC1400);
PPC_FUNC_IMPL(__imp__sub_82AC1400) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// addi r11,r11,13900
	ctx.r11.s64 = ctx.r11.s64 + 13900;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82ac63b4
	ctx.lr = 0x82AC141C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24424
	ctx.r3.s64 = ctx.r11.s64 + 24424;
	// bl 0x828d1968
	ctx.lr = 0x82AC1428;
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

__attribute__((alias("__imp__sub_82AC1438"))) PPC_WEAK_FUNC(sub_82AC1438);
PPC_FUNC_IMPL(__imp__sub_82AC1438) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// li r10,4095
	ctx.r10.s64 = 4095;
	// addi r11,r11,-23208
	ctx.r11.s64 = ctx.r11.s64 + -23208;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82AC1448:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bge 0x82ac1448
	if (!cr0.lt) goto loc_82AC1448;
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24448
	ctx.r3.s64 = ctx.r11.s64 + 24448;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1468"))) PPC_WEAK_FUNC(sub_82AC1468);
PPC_FUNC_IMPL(__imp__sub_82AC1468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24536
	ctx.r3.s64 = ctx.r11.s64 + 24536;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1474"))) PPC_WEAK_FUNC(sub_82AC1474);
PPC_FUNC_IMPL(__imp__sub_82AC1474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1478"))) PPC_WEAK_FUNC(sub_82AC1478);
PPC_FUNC_IMPL(__imp__sub_82AC1478) {
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
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// addi r3,r11,9588
	ctx.r3.s64 = ctx.r11.s64 + 9588;
	// bl 0x828e6d80
	ctx.lr = 0x82AC1490;
	sub_828E6D80(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24552
	ctx.r3.s64 = ctx.r11.s64 + 24552;
	// bl 0x828d1968
	ctx.lr = 0x82AC149C;
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

__attribute__((alias("__imp__sub_82AC14AC"))) PPC_WEAK_FUNC(sub_82AC14AC);
PPC_FUNC_IMPL(__imp__sub_82AC14AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC14B0"))) PPC_WEAK_FUNC(sub_82AC14B0);
PPC_FUNC_IMPL(__imp__sub_82AC14B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24568
	ctx.r3.s64 = ctx.r11.s64 + 24568;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC14BC"))) PPC_WEAK_FUNC(sub_82AC14BC);
PPC_FUNC_IMPL(__imp__sub_82AC14BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC14C0"))) PPC_WEAK_FUNC(sub_82AC14C0);
PPC_FUNC_IMPL(__imp__sub_82AC14C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r11,9616
	ctx.r11.s64 = ctx.r11.s64 + 9616;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82AC14D4:
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r9.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82ac14d4
	if (!cr0.lt) goto loc_82AC14D4;
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24576
	ctx.r3.s64 = ctx.r11.s64 + 24576;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC14F8"))) PPC_WEAK_FUNC(sub_82AC14F8);
PPC_FUNC_IMPL(__imp__sub_82AC14F8) {
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
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// addi r3,r11,9816
	ctx.r3.s64 = ctx.r11.s64 + 9816;
	// bl 0x828e6d80
	ctx.lr = 0x82AC1510;
	sub_828E6D80(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24584
	ctx.r3.s64 = ctx.r11.s64 + 24584;
	// bl 0x828d1968
	ctx.lr = 0x82AC151C;
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

__attribute__((alias("__imp__sub_82AC152C"))) PPC_WEAK_FUNC(sub_82AC152C);
PPC_FUNC_IMPL(__imp__sub_82AC152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1530"))) PPC_WEAK_FUNC(sub_82AC1530);
PPC_FUNC_IMPL(__imp__sub_82AC1530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24600
	ctx.r3.s64 = ctx.r11.s64 + 24600;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC153C"))) PPC_WEAK_FUNC(sub_82AC153C);
PPC_FUNC_IMPL(__imp__sub_82AC153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1540"))) PPC_WEAK_FUNC(sub_82AC1540);
PPC_FUNC_IMPL(__imp__sub_82AC1540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24624
	ctx.r3.s64 = ctx.r11.s64 + 24624;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC154C"))) PPC_WEAK_FUNC(sub_82AC154C);
PPC_FUNC_IMPL(__imp__sub_82AC154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1550"))) PPC_WEAK_FUNC(sub_82AC1550);
PPC_FUNC_IMPL(__imp__sub_82AC1550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24840
	ctx.r3.s64 = ctx.r11.s64 + 24840;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC155C"))) PPC_WEAK_FUNC(sub_82AC155C);
PPC_FUNC_IMPL(__imp__sub_82AC155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1560"))) PPC_WEAK_FUNC(sub_82AC1560);
PPC_FUNC_IMPL(__imp__sub_82AC1560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24936
	ctx.r3.s64 = ctx.r11.s64 + 24936;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC156C"))) PPC_WEAK_FUNC(sub_82AC156C);
PPC_FUNC_IMPL(__imp__sub_82AC156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1570"))) PPC_WEAK_FUNC(sub_82AC1570);
PPC_FUNC_IMPL(__imp__sub_82AC1570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24952
	ctx.r3.s64 = ctx.r11.s64 + 24952;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC157C"))) PPC_WEAK_FUNC(sub_82AC157C);
PPC_FUNC_IMPL(__imp__sub_82AC157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1580"))) PPC_WEAK_FUNC(sub_82AC1580);
PPC_FUNC_IMPL(__imp__sub_82AC1580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24960
	ctx.r3.s64 = ctx.r11.s64 + 24960;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC158C"))) PPC_WEAK_FUNC(sub_82AC158C);
PPC_FUNC_IMPL(__imp__sub_82AC158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1590"))) PPC_WEAK_FUNC(sub_82AC1590);
PPC_FUNC_IMPL(__imp__sub_82AC1590) {
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
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// bl 0x828d1968
	ctx.lr = 0x82AC15A8;
	sub_828D1968(ctx, base);
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r3,r11,4272
	ctx.r3.s64 = ctx.r11.s64 + 4272;
	// bl 0x826138e8
	ctx.lr = 0x82AC15B4;
	sub_826138E8(ctx, base);
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// stw r3,10512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC15CC"))) PPC_WEAK_FUNC(sub_82AC15CC);
PPC_FUNC_IMPL(__imp__sub_82AC15CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC15D0"))) PPC_WEAK_FUNC(sub_82AC15D0);
PPC_FUNC_IMPL(__imp__sub_82AC15D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24968
	ctx.r3.s64 = ctx.r11.s64 + 24968;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC15DC"))) PPC_WEAK_FUNC(sub_82AC15DC);
PPC_FUNC_IMPL(__imp__sub_82AC15DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC15E0"))) PPC_WEAK_FUNC(sub_82AC15E0);
PPC_FUNC_IMPL(__imp__sub_82AC15E0) {
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
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// addi r3,r11,11768
	ctx.r3.s64 = ctx.r11.s64 + 11768;
	// bl 0x82996300
	ctx.lr = 0x82AC15F8;
	sub_82996300(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,24992
	ctx.r3.s64 = ctx.r11.s64 + 24992;
	// bl 0x828d1968
	ctx.lr = 0x82AC1604;
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

__attribute__((alias("__imp__sub_82AC1614"))) PPC_WEAK_FUNC(sub_82AC1614);
PPC_FUNC_IMPL(__imp__sub_82AC1614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1618"))) PPC_WEAK_FUNC(sub_82AC1618);
PPC_FUNC_IMPL(__imp__sub_82AC1618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,25008
	ctx.r3.s64 = ctx.r11.s64 + 25008;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1624"))) PPC_WEAK_FUNC(sub_82AC1624);
PPC_FUNC_IMPL(__imp__sub_82AC1624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1628"))) PPC_WEAK_FUNC(sub_82AC1628);
PPC_FUNC_IMPL(__imp__sub_82AC1628) {
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
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// addi r3,r11,12944
	ctx.r3.s64 = ctx.r11.s64 + 12944;
	// bl 0x82ac63b4
	ctx.lr = 0x82AC1640;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// bl 0x828d1968
	ctx.lr = 0x82AC164C;
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

__attribute__((alias("__imp__sub_82AC165C"))) PPC_WEAK_FUNC(sub_82AC165C);
PPC_FUNC_IMPL(__imp__sub_82AC165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1660"))) PPC_WEAK_FUNC(sub_82AC1660);
PPC_FUNC_IMPL(__imp__sub_82AC1660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// addi r11,r11,-20820
	ctx.r11.s64 = ctx.r11.s64 + -20820;
	// stw r11,-11572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC1674"))) PPC_WEAK_FUNC(sub_82AC1674);
PPC_FUNC_IMPL(__imp__sub_82AC1674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1678"))) PPC_WEAK_FUNC(sub_82AC1678);
PPC_FUNC_IMPL(__imp__sub_82AC1678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r3,r11,-21232
	ctx.r3.s64 = ctx.r11.s64 + -21232;
	// b 0x821b4558
	sub_821B4558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1684"))) PPC_WEAK_FUNC(sub_82AC1684);
PPC_FUNC_IMPL(__imp__sub_82AC1684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1688"))) PPC_WEAK_FUNC(sub_82AC1688);
PPC_FUNC_IMPL(__imp__sub_82AC1688) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r31,r11,-11564
	ctx.r31.s64 = ctx.r11.s64 + -11564;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82170268
	ctx.lr = 0x82AC16A8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x821bb478
	ctx.lr = 0x82AC16BC;
	sub_821BB478(ctx, base);
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

__attribute__((alias("__imp__sub_82AC16D0"))) PPC_WEAK_FUNC(sub_82AC16D0);
PPC_FUNC_IMPL(__imp__sub_82AC16D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r3,r11,-19604
	ctx.r3.s64 = ctx.r11.s64 + -19604;
	// b 0x824c5b40
	sub_824C5B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC16DC"))) PPC_WEAK_FUNC(sub_82AC16DC);
PPC_FUNC_IMPL(__imp__sub_82AC16DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC16E0"))) PPC_WEAK_FUNC(sub_82AC16E0);
PPC_FUNC_IMPL(__imp__sub_82AC16E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// addi r11,r11,11372
	ctx.r11.s64 = ctx.r11.s64 + 11372;
	// stw r11,-11544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC16F4"))) PPC_WEAK_FUNC(sub_82AC16F4);
PPC_FUNC_IMPL(__imp__sub_82AC16F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC16F8"))) PPC_WEAK_FUNC(sub_82AC16F8);
PPC_FUNC_IMPL(__imp__sub_82AC16F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// addi r11,r11,14196
	ctx.r11.s64 = ctx.r11.s64 + 14196;
	// stw r11,-11512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC170C"))) PPC_WEAK_FUNC(sub_82AC170C);
PPC_FUNC_IMPL(__imp__sub_82AC170C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1710"))) PPC_WEAK_FUNC(sub_82AC1710);
PPC_FUNC_IMPL(__imp__sub_82AC1710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// addi r11,r11,14196
	ctx.r11.s64 = ctx.r11.s64 + 14196;
	// stw r11,-9448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC1724"))) PPC_WEAK_FUNC(sub_82AC1724);
PPC_FUNC_IMPL(__imp__sub_82AC1724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1728"))) PPC_WEAK_FUNC(sub_82AC1728);
PPC_FUNC_IMPL(__imp__sub_82AC1728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,-9436
	ctx.r3.s64 = ctx.r11.s64 + -9436;
	// b 0x82214968
	sub_82214968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1734"))) PPC_WEAK_FUNC(sub_82AC1734);
PPC_FUNC_IMPL(__imp__sub_82AC1734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1738"))) PPC_WEAK_FUNC(sub_82AC1738);
PPC_FUNC_IMPL(__imp__sub_82AC1738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,-9384
	ctx.r11.s64 = ctx.r11.s64 + -9384;
	// addi r10,r10,11372
	ctx.r10.s64 = ctx.r10.s64 + 11372;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x822187f0
	sub_822187F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1754"))) PPC_WEAK_FUNC(sub_82AC1754);
PPC_FUNC_IMPL(__imp__sub_82AC1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1758"))) PPC_WEAK_FUNC(sub_82AC1758);
PPC_FUNC_IMPL(__imp__sub_82AC1758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,-9328
	ctx.r3.s64 = ctx.r11.s64 + -9328;
	// b 0x822142c8
	sub_822142C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1764"))) PPC_WEAK_FUNC(sub_82AC1764);
PPC_FUNC_IMPL(__imp__sub_82AC1764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1768"))) PPC_WEAK_FUNC(sub_82AC1768);
PPC_FUNC_IMPL(__imp__sub_82AC1768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// addi r11,r11,-15676
	ctx.r11.s64 = ctx.r11.s64 + -15676;
	// stw r11,-8736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC177C"))) PPC_WEAK_FUNC(sub_82AC177C);
PPC_FUNC_IMPL(__imp__sub_82AC177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1780"))) PPC_WEAK_FUNC(sub_82AC1780);
PPC_FUNC_IMPL(__imp__sub_82AC1780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r3,r11,-19504
	ctx.r3.s64 = ctx.r11.s64 + -19504;
	// b 0x82288288
	sub_82288288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC178C"))) PPC_WEAK_FUNC(sub_82AC178C);
PPC_FUNC_IMPL(__imp__sub_82AC178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1790"))) PPC_WEAK_FUNC(sub_82AC1790);
PPC_FUNC_IMPL(__imp__sub_82AC1790) {
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
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r31,r11,-19464
	ctx.r31.s64 = ctx.r11.s64 + -19464;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82528098
	ctx.lr = 0x82AC17B0;
	sub_82528098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528098
	ctx.lr = 0x82AC17B8;
	sub_82528098(ctx, base);
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

__attribute__((alias("__imp__sub_82AC17CC"))) PPC_WEAK_FUNC(sub_82AC17CC);
PPC_FUNC_IMPL(__imp__sub_82AC17CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC17D0"))) PPC_WEAK_FUNC(sub_82AC17D0);
PPC_FUNC_IMPL(__imp__sub_82AC17D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,-8732
	ctx.r3.s64 = ctx.r11.s64 + -8732;
	// b 0x8221c850
	sub_8221C850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC17DC"))) PPC_WEAK_FUNC(sub_82AC17DC);
PPC_FUNC_IMPL(__imp__sub_82AC17DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC17E0"))) PPC_WEAK_FUNC(sub_82AC17E0);
PPC_FUNC_IMPL(__imp__sub_82AC17E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r3,r11,-14964
	ctx.r3.s64 = ctx.r11.s64 + -14964;
	// b 0x82288288
	sub_82288288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC17EC"))) PPC_WEAK_FUNC(sub_82AC17EC);
PPC_FUNC_IMPL(__imp__sub_82AC17EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC17F0"))) PPC_WEAK_FUNC(sub_82AC17F0);
PPC_FUNC_IMPL(__imp__sub_82AC17F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r3,r11,-14952
	ctx.r3.s64 = ctx.r11.s64 + -14952;
	// b 0x82288288
	sub_82288288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC17FC"))) PPC_WEAK_FUNC(sub_82AC17FC);
PPC_FUNC_IMPL(__imp__sub_82AC17FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1800"))) PPC_WEAK_FUNC(sub_82AC1800);
PPC_FUNC_IMPL(__imp__sub_82AC1800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r3,r11,-14940
	ctx.r3.s64 = ctx.r11.s64 + -14940;
	// b 0x82288288
	sub_82288288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC180C"))) PPC_WEAK_FUNC(sub_82AC180C);
PPC_FUNC_IMPL(__imp__sub_82AC180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1810"))) PPC_WEAK_FUNC(sub_82AC1810);
PPC_FUNC_IMPL(__imp__sub_82AC1810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r3,r11,-14928
	ctx.r3.s64 = ctx.r11.s64 + -14928;
	// b 0x82288288
	sub_82288288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC181C"))) PPC_WEAK_FUNC(sub_82AC181C);
PPC_FUNC_IMPL(__imp__sub_82AC181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1820"))) PPC_WEAK_FUNC(sub_82AC1820);
PPC_FUNC_IMPL(__imp__sub_82AC1820) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-14916
	ctx.r31.s64 = ctx.r11.s64 + -14916;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82AC1850;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ac1860
	if (cr6.eq) goto loc_82AC1860;
	// bl 0x82170268
	ctx.lr = 0x82AC1860;
	sub_82170268(ctx, base);
loc_82AC1860:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AC1884"))) PPC_WEAK_FUNC(sub_82AC1884);
PPC_FUNC_IMPL(__imp__sub_82AC1884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1888"))) PPC_WEAK_FUNC(sub_82AC1888);
PPC_FUNC_IMPL(__imp__sub_82AC1888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r3,r11,-14904
	ctx.r3.s64 = ctx.r11.s64 + -14904;
	// b 0x82288288
	sub_82288288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1894"))) PPC_WEAK_FUNC(sub_82AC1894);
PPC_FUNC_IMPL(__imp__sub_82AC1894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1898"))) PPC_WEAK_FUNC(sub_82AC1898);
PPC_FUNC_IMPL(__imp__sub_82AC1898) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-14892
	ctx.r31.s64 = ctx.r11.s64 + -14892;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822b7ce8
	ctx.lr = 0x82AC18C0;
	sub_822B7CE8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ac18d0
	if (cr6.eq) goto loc_82AC18D0;
	// bl 0x82170268
	ctx.lr = 0x82AC18D0;
	sub_82170268(ctx, base);
loc_82AC18D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AC18F4"))) PPC_WEAK_FUNC(sub_82AC18F4);
PPC_FUNC_IMPL(__imp__sub_82AC18F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC18F8"))) PPC_WEAK_FUNC(sub_82AC18F8);
PPC_FUNC_IMPL(__imp__sub_82AC18F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,6960
	ctx.r3.s64 = ctx.r11.s64 + 6960;
	// b 0x822b7bf8
	sub_822B7BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1904"))) PPC_WEAK_FUNC(sub_82AC1904);
PPC_FUNC_IMPL(__imp__sub_82AC1904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1908"))) PPC_WEAK_FUNC(sub_82AC1908);
PPC_FUNC_IMPL(__imp__sub_82AC1908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// addi r11,r11,14196
	ctx.r11.s64 = ctx.r11.s64 + 14196;
	// stw r11,-8708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC191C"))) PPC_WEAK_FUNC(sub_82AC191C);
PPC_FUNC_IMPL(__imp__sub_82AC191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1920"))) PPC_WEAK_FUNC(sub_82AC1920);
PPC_FUNC_IMPL(__imp__sub_82AC1920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// addi r11,r11,14196
	ctx.r11.s64 = ctx.r11.s64 + 14196;
	// stw r11,-8704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8704, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC1934"))) PPC_WEAK_FUNC(sub_82AC1934);
PPC_FUNC_IMPL(__imp__sub_82AC1934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1938"))) PPC_WEAK_FUNC(sub_82AC1938);
PPC_FUNC_IMPL(__imp__sub_82AC1938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// addi r11,r11,14216
	ctx.r11.s64 = ctx.r11.s64 + 14216;
	// stw r11,-8700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8700, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC194C"))) PPC_WEAK_FUNC(sub_82AC194C);
PPC_FUNC_IMPL(__imp__sub_82AC194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1950"))) PPC_WEAK_FUNC(sub_82AC1950);
PPC_FUNC_IMPL(__imp__sub_82AC1950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,-8592
	ctx.r3.s64 = ctx.r11.s64 + -8592;
	// b 0x822ba098
	sub_822BA098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC195C"))) PPC_WEAK_FUNC(sub_82AC195C);
PPC_FUNC_IMPL(__imp__sub_82AC195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1960"))) PPC_WEAK_FUNC(sub_82AC1960);
PPC_FUNC_IMPL(__imp__sub_82AC1960) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-14880
	ctx.r31.s64 = ctx.r11.s64 + -14880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822ba120
	ctx.lr = 0x82AC1988;
	sub_822BA120(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ac1998
	if (cr6.eq) goto loc_82AC1998;
	// bl 0x82170268
	ctx.lr = 0x82AC1998;
	sub_82170268(ctx, base);
loc_82AC1998:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AC19BC"))) PPC_WEAK_FUNC(sub_82AC19BC);
PPC_FUNC_IMPL(__imp__sub_82AC19BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC19C0"))) PPC_WEAK_FUNC(sub_82AC19C0);
PPC_FUNC_IMPL(__imp__sub_82AC19C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-14152
	ctx.r31.s64 = ctx.r11.s64 + -14152;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82AC19F0;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ac1a00
	if (cr6.eq) goto loc_82AC1A00;
	// bl 0x82170268
	ctx.lr = 0x82AC1A00;
	sub_82170268(ctx, base);
loc_82AC1A00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AC1A24"))) PPC_WEAK_FUNC(sub_82AC1A24);
PPC_FUNC_IMPL(__imp__sub_82AC1A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1A28"))) PPC_WEAK_FUNC(sub_82AC1A28);
PPC_FUNC_IMPL(__imp__sub_82AC1A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-14132
	ctx.r3.s64 = ctx.r11.s64 + -14132;
	// b 0x82369e98
	sub_82369E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1A34"))) PPC_WEAK_FUNC(sub_82AC1A34);
PPC_FUNC_IMPL(__imp__sub_82AC1A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1A38"))) PPC_WEAK_FUNC(sub_82AC1A38);
PPC_FUNC_IMPL(__imp__sub_82AC1A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-14116
	ctx.r3.s64 = ctx.r11.s64 + -14116;
	// b 0x82288288
	sub_82288288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1A44"))) PPC_WEAK_FUNC(sub_82AC1A44);
PPC_FUNC_IMPL(__imp__sub_82AC1A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1A48"))) PPC_WEAK_FUNC(sub_82AC1A48);
PPC_FUNC_IMPL(__imp__sub_82AC1A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-14104
	ctx.r3.s64 = ctx.r11.s64 + -14104;
	// b 0x82528098
	sub_82528098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1A54"))) PPC_WEAK_FUNC(sub_82AC1A54);
PPC_FUNC_IMPL(__imp__sub_82AC1A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1A58"))) PPC_WEAK_FUNC(sub_82AC1A58);
PPC_FUNC_IMPL(__imp__sub_82AC1A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-14088
	ctx.r11.s64 = ctx.r11.s64 + -14088;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82214a50
	sub_82214A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1A68"))) PPC_WEAK_FUNC(sub_82AC1A68);
PPC_FUNC_IMPL(__imp__sub_82AC1A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC1A6C"))) PPC_WEAK_FUNC(sub_82AC1A6C);
PPC_FUNC_IMPL(__imp__sub_82AC1A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1A70"))) PPC_WEAK_FUNC(sub_82AC1A70);
PPC_FUNC_IMPL(__imp__sub_82AC1A70) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r31,r11,-7724
	ctx.r31.s64 = ctx.r11.s64 + -7724;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82170268
	ctx.lr = 0x82AC1A90;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x823b7260
	ctx.lr = 0x82AC1AA4;
	sub_823B7260(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1AB8"))) PPC_WEAK_FUNC(sub_82AC1AB8);
PPC_FUNC_IMPL(__imp__sub_82AC1AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-13964
	ctx.r3.s64 = ctx.r11.s64 + -13964;
	// b 0x82288288
	sub_82288288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1AC4"))) PPC_WEAK_FUNC(sub_82AC1AC4);
PPC_FUNC_IMPL(__imp__sub_82AC1AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1AC8"))) PPC_WEAK_FUNC(sub_82AC1AC8);
PPC_FUNC_IMPL(__imp__sub_82AC1AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-13952
	ctx.r3.s64 = ctx.r11.s64 + -13952;
	// b 0x82288288
	sub_82288288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1AD4"))) PPC_WEAK_FUNC(sub_82AC1AD4);
PPC_FUNC_IMPL(__imp__sub_82AC1AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1AD8"))) PPC_WEAK_FUNC(sub_82AC1AD8);
PPC_FUNC_IMPL(__imp__sub_82AC1AD8) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-13940
	ctx.r31.s64 = ctx.r11.s64 + -13940;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82288288
	ctx.lr = 0x82AC1AF8;
	sub_82288288(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82288288
	ctx.lr = 0x82AC1B00;
	sub_82288288(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82288288
	ctx.lr = 0x82AC1B08;
	sub_82288288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288288
	ctx.lr = 0x82AC1B10;
	sub_82288288(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1B24"))) PPC_WEAK_FUNC(sub_82AC1B24);
PPC_FUNC_IMPL(__imp__sub_82AC1B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1B28"))) PPC_WEAK_FUNC(sub_82AC1B28);
PPC_FUNC_IMPL(__imp__sub_82AC1B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x82AC1B30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r27,12
	ctx.r27.s64 = 12;
	// addi r11,r11,-13888
	ctx.r11.s64 = ctx.r11.s64 + -13888;
	// lis r26,-32065
	ctx.r26.s64 = -2101411840;
	// addi r31,r11,156
	ctx.r31.s64 = ctx.r11.s64 + 156;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82AC1B4C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1ba8
	if (cr6.eq) goto loc_82AC1BA8;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ac1ba8
	if (cr6.eq) goto loc_82AC1BA8;
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ac1b88
	if (!cr6.eq) goto loc_82AC1B88;
	// bl 0x82216290
	ctx.lr = 0x82AC1B84;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
loc_82AC1B88:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AC1BA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82AC1BA8:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ad68
	ctx.lr = 0x82AC1BC0;
	sub_8232AD68(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ac1bf4
	if (cr6.eq) goto loc_82AC1BF4;
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ac1be0
	if (!cr6.eq) goto loc_82AC1BE0;
	// bl 0x82216290
	ctx.lr = 0x82AC1BDC;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
loc_82AC1BE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AC1BF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC1BF4:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82ac1b4c
	if (!cr6.lt) goto loc_82AC1B4C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1C14"))) PPC_WEAK_FUNC(sub_82AC1C14);
PPC_FUNC_IMPL(__imp__sub_82AC1C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1C18"))) PPC_WEAK_FUNC(sub_82AC1C18);
PPC_FUNC_IMPL(__imp__sub_82AC1C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-13672
	ctx.r3.s64 = ctx.r11.s64 + -13672;
	// b 0x82288288
	sub_82288288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1C24"))) PPC_WEAK_FUNC(sub_82AC1C24);
PPC_FUNC_IMPL(__imp__sub_82AC1C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1C28"))) PPC_WEAK_FUNC(sub_82AC1C28);
PPC_FUNC_IMPL(__imp__sub_82AC1C28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,-13644
	ctx.r31.s64 = ctx.r11.s64 + -13644;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1c6c
	if (cr6.eq) goto loc_82AC1C6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC1C6C;
	sub_82170408(ctx, base);
loc_82AC1C6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC1C74;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1C88"))) PPC_WEAK_FUNC(sub_82AC1C88);
PPC_FUNC_IMPL(__imp__sub_82AC1C88) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,-13632
	ctx.r31.s64 = ctx.r11.s64 + -13632;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1ccc
	if (cr6.eq) goto loc_82AC1CCC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC1CCC;
	sub_82170408(ctx, base);
loc_82AC1CCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC1CD4;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1CE8"))) PPC_WEAK_FUNC(sub_82AC1CE8);
PPC_FUNC_IMPL(__imp__sub_82AC1CE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,-13620
	ctx.r31.s64 = ctx.r11.s64 + -13620;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1d2c
	if (cr6.eq) goto loc_82AC1D2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC1D2C;
	sub_82170408(ctx, base);
loc_82AC1D2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC1D34;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1D48"))) PPC_WEAK_FUNC(sub_82AC1D48);
PPC_FUNC_IMPL(__imp__sub_82AC1D48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,-13608
	ctx.r31.s64 = ctx.r11.s64 + -13608;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1d8c
	if (cr6.eq) goto loc_82AC1D8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC1D8C;
	sub_82170408(ctx, base);
loc_82AC1D8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC1D94;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1DA8"))) PPC_WEAK_FUNC(sub_82AC1DA8);
PPC_FUNC_IMPL(__imp__sub_82AC1DA8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,-13596
	ctx.r31.s64 = ctx.r11.s64 + -13596;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1dec
	if (cr6.eq) goto loc_82AC1DEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC1DEC;
	sub_82170408(ctx, base);
loc_82AC1DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC1DF4;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1E08"))) PPC_WEAK_FUNC(sub_82AC1E08);
PPC_FUNC_IMPL(__imp__sub_82AC1E08) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,-13584
	ctx.r31.s64 = ctx.r11.s64 + -13584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1e4c
	if (cr6.eq) goto loc_82AC1E4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC1E4C;
	sub_82170408(ctx, base);
loc_82AC1E4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC1E54;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1E68"))) PPC_WEAK_FUNC(sub_82AC1E68);
PPC_FUNC_IMPL(__imp__sub_82AC1E68) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,-13572
	ctx.r31.s64 = ctx.r11.s64 + -13572;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1eac
	if (cr6.eq) goto loc_82AC1EAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC1EAC;
	sub_82170408(ctx, base);
loc_82AC1EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC1EB4;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1EC8"))) PPC_WEAK_FUNC(sub_82AC1EC8);
PPC_FUNC_IMPL(__imp__sub_82AC1EC8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,-13560
	ctx.r31.s64 = ctx.r11.s64 + -13560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1f0c
	if (cr6.eq) goto loc_82AC1F0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC1F0C;
	sub_82170408(ctx, base);
loc_82AC1F0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC1F14;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1F28"))) PPC_WEAK_FUNC(sub_82AC1F28);
PPC_FUNC_IMPL(__imp__sub_82AC1F28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,-13548
	ctx.r31.s64 = ctx.r11.s64 + -13548;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1f6c
	if (cr6.eq) goto loc_82AC1F6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC1F6C;
	sub_82170408(ctx, base);
loc_82AC1F6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC1F74;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1F88"))) PPC_WEAK_FUNC(sub_82AC1F88);
PPC_FUNC_IMPL(__imp__sub_82AC1F88) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,-13508
	ctx.r31.s64 = ctx.r11.s64 + -13508;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac1fcc
	if (cr6.eq) goto loc_82AC1FCC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC1FCC;
	sub_82170408(ctx, base);
loc_82AC1FCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC1FD4;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1FE8"))) PPC_WEAK_FUNC(sub_82AC1FE8);
PPC_FUNC_IMPL(__imp__sub_82AC1FE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-13496
	ctx.r31.s64 = ctx.r11.s64 + -13496;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82AC2018;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ac2028
	if (cr6.eq) goto loc_82AC2028;
	// bl 0x82170268
	ctx.lr = 0x82AC2028;
	sub_82170268(ctx, base);
loc_82AC2028:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AC204C"))) PPC_WEAK_FUNC(sub_82AC204C);
PPC_FUNC_IMPL(__imp__sub_82AC204C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2050"))) PPC_WEAK_FUNC(sub_82AC2050);
PPC_FUNC_IMPL(__imp__sub_82AC2050) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r31,r11,-6368
	ctx.r31.s64 = ctx.r11.s64 + -6368;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82170268
	ctx.lr = 0x82AC2070;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2080;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2094"))) PPC_WEAK_FUNC(sub_82AC2094);
PPC_FUNC_IMPL(__imp__sub_82AC2094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2098"))) PPC_WEAK_FUNC(sub_82AC2098);
PPC_FUNC_IMPL(__imp__sub_82AC2098) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r31,r11,-6336
	ctx.r31.s64 = ctx.r11.s64 + -6336;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82170268
	ctx.lr = 0x82AC20B8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8245d790
	ctx.lr = 0x82AC20CC;
	sub_8245D790(ctx, base);
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

__attribute__((alias("__imp__sub_82AC20E0"))) PPC_WEAK_FUNC(sub_82AC20E0);
PPC_FUNC_IMPL(__imp__sub_82AC20E0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r31,r10,-6308
	ctx.r31.s64 = ctx.r10.s64 + -6308;
	// addi r11,r11,25100
	ctx.r11.s64 = ctx.r11.s64 + 25100;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82ac2118
	if (!cr6.gt) goto loc_82AC2118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825885d8
	ctx.lr = 0x82AC2118;
	sub_825885D8(ctx, base);
loc_82AC2118:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588560
	ctx.lr = 0x82AC2120;
	sub_82588560(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2134"))) PPC_WEAK_FUNC(sub_82AC2134);
PPC_FUNC_IMPL(__imp__sub_82AC2134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2138"))) PPC_WEAK_FUNC(sub_82AC2138);
PPC_FUNC_IMPL(__imp__sub_82AC2138) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// addi r31,r11,10156
	ctx.r31.s64 = ctx.r11.s64 + 10156;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ac217c
	if (cr6.eq) goto loc_82AC217C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x82AC217C;
	sub_82170408(ctx, base);
loc_82AC217C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82AC2184;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2198"))) PPC_WEAK_FUNC(sub_82AC2198);
PPC_FUNC_IMPL(__imp__sub_82AC2198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// stw r11,-5576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC21AC"))) PPC_WEAK_FUNC(sub_82AC21AC);
PPC_FUNC_IMPL(__imp__sub_82AC21AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC21B0"))) PPC_WEAK_FUNC(sub_82AC21B0);
PPC_FUNC_IMPL(__imp__sub_82AC21B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// addi r11,r11,-7964
	ctx.r11.s64 = ctx.r11.s64 + -7964;
	// stw r11,-5572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC21C4"))) PPC_WEAK_FUNC(sub_82AC21C4);
PPC_FUNC_IMPL(__imp__sub_82AC21C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC21C8"))) PPC_WEAK_FUNC(sub_82AC21C8);
PPC_FUNC_IMPL(__imp__sub_82AC21C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-13232
	ctx.r31.s64 = ctx.r11.s64 + -13232;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82AC21F8;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ac2208
	if (cr6.eq) goto loc_82AC2208;
	// bl 0x82170268
	ctx.lr = 0x82AC2208;
	sub_82170268(ctx, base);
loc_82AC2208:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AC222C"))) PPC_WEAK_FUNC(sub_82AC222C);
PPC_FUNC_IMPL(__imp__sub_82AC222C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2230"))) PPC_WEAK_FUNC(sub_82AC2230);
PPC_FUNC_IMPL(__imp__sub_82AC2230) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-12864
	ctx.r31.s64 = ctx.r11.s64 + -12864;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2250;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2258;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2268;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC227C"))) PPC_WEAK_FUNC(sub_82AC227C);
PPC_FUNC_IMPL(__imp__sub_82AC227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2280"))) PPC_WEAK_FUNC(sub_82AC2280);
PPC_FUNC_IMPL(__imp__sub_82AC2280) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,10860
	ctx.r10.s64 = ctx.r11.s64 + 10860;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r11,r11,-4916
	ctx.r11.s64 = ctx.r11.s64 + -4916;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8222e8e0
	sub_8222E8E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC22A4"))) PPC_WEAK_FUNC(sub_82AC22A4);
PPC_FUNC_IMPL(__imp__sub_82AC22A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC22A8"))) PPC_WEAK_FUNC(sub_82AC22A8);
PPC_FUNC_IMPL(__imp__sub_82AC22A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-12776
	ctx.r11.s64 = ctx.r11.s64 + -12776;
	// addi r31,r11,92
	ctx.r31.s64 = ctx.r11.s64 + 92;
loc_82AC22CC:
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82492f98
	ctx.lr = 0x82AC22D8;
	sub_82492F98(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82ac22cc
	if (!cr6.lt) goto loc_82AC22CC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC22FC"))) PPC_WEAK_FUNC(sub_82AC22FC);
PPC_FUNC_IMPL(__imp__sub_82AC22FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2300"))) PPC_WEAK_FUNC(sub_82AC2300);
PPC_FUNC_IMPL(__imp__sub_82AC2300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// b 0x82494508
	sub_82494508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC230C"))) PPC_WEAK_FUNC(sub_82AC230C);
PPC_FUNC_IMPL(__imp__sub_82AC230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2310"))) PPC_WEAK_FUNC(sub_82AC2310);
PPC_FUNC_IMPL(__imp__sub_82AC2310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-5248
	ctx.r11.s64 = ctx.r11.s64 + -5248;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AC2354"))) PPC_WEAK_FUNC(sub_82AC2354);
PPC_FUNC_IMPL(__imp__sub_82AC2354) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC2358"))) PPC_WEAK_FUNC(sub_82AC2358);
PPC_FUNC_IMPL(__imp__sub_82AC2358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-5304
	ctx.r11.s64 = ctx.r11.s64 + -5304;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AC239C"))) PPC_WEAK_FUNC(sub_82AC239C);
PPC_FUNC_IMPL(__imp__sub_82AC239C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC23A0"))) PPC_WEAK_FUNC(sub_82AC23A0);
PPC_FUNC_IMPL(__imp__sub_82AC23A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-5276
	ctx.r11.s64 = ctx.r11.s64 + -5276;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AC23E4"))) PPC_WEAK_FUNC(sub_82AC23E4);
PPC_FUNC_IMPL(__imp__sub_82AC23E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC23E8"))) PPC_WEAK_FUNC(sub_82AC23E8);
PPC_FUNC_IMPL(__imp__sub_82AC23E8) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r31,r11,-4892
	ctx.r31.s64 = ctx.r11.s64 + -4892;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82170268
	ctx.lr = 0x82AC2408;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8249a520
	ctx.lr = 0x82AC241C;
	sub_8249A520(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2430"))) PPC_WEAK_FUNC(sub_82AC2430);
PPC_FUNC_IMPL(__imp__sub_82AC2430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,10140
	ctx.r3.s64 = ctx.r11.s64 + 10140;
	// b 0x82528098
	sub_82528098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC243C"))) PPC_WEAK_FUNC(sub_82AC243C);
PPC_FUNC_IMPL(__imp__sub_82AC243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2440"))) PPC_WEAK_FUNC(sub_82AC2440);
PPC_FUNC_IMPL(__imp__sub_82AC2440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-12624
	ctx.r3.s64 = ctx.r11.s64 + -12624;
	// b 0x824a1b00
	sub_824A1B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC244C"))) PPC_WEAK_FUNC(sub_82AC244C);
PPC_FUNC_IMPL(__imp__sub_82AC244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2450"))) PPC_WEAK_FUNC(sub_82AC2450);
PPC_FUNC_IMPL(__imp__sub_82AC2450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC2454"))) PPC_WEAK_FUNC(sub_82AC2454);
PPC_FUNC_IMPL(__imp__sub_82AC2454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2458"))) PPC_WEAK_FUNC(sub_82AC2458);
PPC_FUNC_IMPL(__imp__sub_82AC2458) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82AC2460;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r29,r11,-12256
	ctx.r29.s64 = ctx.r11.s64 + -12256;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82ac24a0
	if (!cr6.gt) goto loc_82AC24A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82AC2480:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e7ae0
	ctx.lr = 0x82AC2490;
	sub_828E7AE0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ac2480
	if (!cr6.eq) goto loc_82AC2480;
loc_82AC24A0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232ad68
	ctx.lr = 0x82AC24B8;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ac24c8
	if (cr6.eq) goto loc_82AC24C8;
	// bl 0x82170268
	ctx.lr = 0x82AC24C8;
	sub_82170268(ctx, base);
loc_82AC24C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC24E0"))) PPC_WEAK_FUNC(sub_82AC24E0);
PPC_FUNC_IMPL(__imp__sub_82AC24E0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-11428
	ctx.r31.s64 = ctx.r11.s64 + -11428;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82AC2510;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ac2520
	if (cr6.eq) goto loc_82AC2520;
	// bl 0x82170268
	ctx.lr = 0x82AC2520;
	sub_82170268(ctx, base);
loc_82AC2520:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AC2544"))) PPC_WEAK_FUNC(sub_82AC2544);
PPC_FUNC_IMPL(__imp__sub_82AC2544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2548"))) PPC_WEAK_FUNC(sub_82AC2548);
PPC_FUNC_IMPL(__imp__sub_82AC2548) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-11412
	ctx.r31.s64 = ctx.r11.s64 + -11412;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2568;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2570;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2580;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2594"))) PPC_WEAK_FUNC(sub_82AC2594);
PPC_FUNC_IMPL(__imp__sub_82AC2594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2598"))) PPC_WEAK_FUNC(sub_82AC2598);
PPC_FUNC_IMPL(__imp__sub_82AC2598) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-11324
	ctx.r31.s64 = ctx.r11.s64 + -11324;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC25B8;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC25C0;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC25D0;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC25E4"))) PPC_WEAK_FUNC(sub_82AC25E4);
PPC_FUNC_IMPL(__imp__sub_82AC25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC25E8"))) PPC_WEAK_FUNC(sub_82AC25E8);
PPC_FUNC_IMPL(__imp__sub_82AC25E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-11236
	ctx.r3.s64 = ctx.r11.s64 + -11236;
	// b 0x82494508
	sub_82494508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC25F4"))) PPC_WEAK_FUNC(sub_82AC25F4);
PPC_FUNC_IMPL(__imp__sub_82AC25F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC25F8"))) PPC_WEAK_FUNC(sub_82AC25F8);
PPC_FUNC_IMPL(__imp__sub_82AC25F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,6608
	ctx.r11.s64 = ctx.r11.s64 + 6608;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AC263C"))) PPC_WEAK_FUNC(sub_82AC263C);
PPC_FUNC_IMPL(__imp__sub_82AC263C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC2640"))) PPC_WEAK_FUNC(sub_82AC2640);
PPC_FUNC_IMPL(__imp__sub_82AC2640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-5188
	ctx.r11.s64 = ctx.r11.s64 + -5188;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AC2684"))) PPC_WEAK_FUNC(sub_82AC2684);
PPC_FUNC_IMPL(__imp__sub_82AC2684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC2688"))) PPC_WEAK_FUNC(sub_82AC2688);
PPC_FUNC_IMPL(__imp__sub_82AC2688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,6632
	ctx.r11.s64 = ctx.r11.s64 + 6632;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AC26CC"))) PPC_WEAK_FUNC(sub_82AC26CC);
PPC_FUNC_IMPL(__imp__sub_82AC26CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC26D0"))) PPC_WEAK_FUNC(sub_82AC26D0);
PPC_FUNC_IMPL(__imp__sub_82AC26D0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,12704
	ctx.r31.s64 = ctx.r11.s64 + 12704;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC26F0;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC26F8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2708;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC271C"))) PPC_WEAK_FUNC(sub_82AC271C);
PPC_FUNC_IMPL(__imp__sub_82AC271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2720"))) PPC_WEAK_FUNC(sub_82AC2720);
PPC_FUNC_IMPL(__imp__sub_82AC2720) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,12616
	ctx.r31.s64 = ctx.r11.s64 + 12616;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2740;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2748;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2758;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC276C"))) PPC_WEAK_FUNC(sub_82AC276C);
PPC_FUNC_IMPL(__imp__sub_82AC276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2770"))) PPC_WEAK_FUNC(sub_82AC2770);
PPC_FUNC_IMPL(__imp__sub_82AC2770) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,12528
	ctx.r31.s64 = ctx.r11.s64 + 12528;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2790;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2798;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC27A8;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC27BC"))) PPC_WEAK_FUNC(sub_82AC27BC);
PPC_FUNC_IMPL(__imp__sub_82AC27BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC27C0"))) PPC_WEAK_FUNC(sub_82AC27C0);
PPC_FUNC_IMPL(__imp__sub_82AC27C0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,12440
	ctx.r31.s64 = ctx.r11.s64 + 12440;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC27E0;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC27E8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC27F8;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC280C"))) PPC_WEAK_FUNC(sub_82AC280C);
PPC_FUNC_IMPL(__imp__sub_82AC280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2810"))) PPC_WEAK_FUNC(sub_82AC2810);
PPC_FUNC_IMPL(__imp__sub_82AC2810) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,12352
	ctx.r31.s64 = ctx.r11.s64 + 12352;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2830;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2838;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2848;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC285C"))) PPC_WEAK_FUNC(sub_82AC285C);
PPC_FUNC_IMPL(__imp__sub_82AC285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2860"))) PPC_WEAK_FUNC(sub_82AC2860);
PPC_FUNC_IMPL(__imp__sub_82AC2860) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,12264
	ctx.r31.s64 = ctx.r11.s64 + 12264;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2880;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2888;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2898;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC28AC"))) PPC_WEAK_FUNC(sub_82AC28AC);
PPC_FUNC_IMPL(__imp__sub_82AC28AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC28B0"))) PPC_WEAK_FUNC(sub_82AC28B0);
PPC_FUNC_IMPL(__imp__sub_82AC28B0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,12176
	ctx.r31.s64 = ctx.r11.s64 + 12176;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC28D0;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC28D8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC28E8;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC28FC"))) PPC_WEAK_FUNC(sub_82AC28FC);
PPC_FUNC_IMPL(__imp__sub_82AC28FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2900"))) PPC_WEAK_FUNC(sub_82AC2900);
PPC_FUNC_IMPL(__imp__sub_82AC2900) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,12088
	ctx.r31.s64 = ctx.r11.s64 + 12088;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2920;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2928;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2938;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC294C"))) PPC_WEAK_FUNC(sub_82AC294C);
PPC_FUNC_IMPL(__imp__sub_82AC294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2950"))) PPC_WEAK_FUNC(sub_82AC2950);
PPC_FUNC_IMPL(__imp__sub_82AC2950) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,12000
	ctx.r31.s64 = ctx.r11.s64 + 12000;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2970;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2978;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2988;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC299C"))) PPC_WEAK_FUNC(sub_82AC299C);
PPC_FUNC_IMPL(__imp__sub_82AC299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC29A0"))) PPC_WEAK_FUNC(sub_82AC29A0);
PPC_FUNC_IMPL(__imp__sub_82AC29A0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,11912
	ctx.r31.s64 = ctx.r11.s64 + 11912;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC29C0;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC29C8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC29D8;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC29EC"))) PPC_WEAK_FUNC(sub_82AC29EC);
PPC_FUNC_IMPL(__imp__sub_82AC29EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC29F0"))) PPC_WEAK_FUNC(sub_82AC29F0);
PPC_FUNC_IMPL(__imp__sub_82AC29F0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,11824
	ctx.r31.s64 = ctx.r11.s64 + 11824;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2A10;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2A18;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2A28;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2A3C"))) PPC_WEAK_FUNC(sub_82AC2A3C);
PPC_FUNC_IMPL(__imp__sub_82AC2A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2A40"))) PPC_WEAK_FUNC(sub_82AC2A40);
PPC_FUNC_IMPL(__imp__sub_82AC2A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-5132
	ctx.r11.s64 = ctx.r11.s64 + -5132;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AC2A84"))) PPC_WEAK_FUNC(sub_82AC2A84);
PPC_FUNC_IMPL(__imp__sub_82AC2A84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC2A88"))) PPC_WEAK_FUNC(sub_82AC2A88);
PPC_FUNC_IMPL(__imp__sub_82AC2A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-5160
	ctx.r11.s64 = ctx.r11.s64 + -5160;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AC2ACC"))) PPC_WEAK_FUNC(sub_82AC2ACC);
PPC_FUNC_IMPL(__imp__sub_82AC2ACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC2AD0"))) PPC_WEAK_FUNC(sub_82AC2AD0);
PPC_FUNC_IMPL(__imp__sub_82AC2AD0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-11228
	ctx.r31.s64 = ctx.r11.s64 + -11228;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2AF0;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2AF8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2B08;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2B1C"))) PPC_WEAK_FUNC(sub_82AC2B1C);
PPC_FUNC_IMPL(__imp__sub_82AC2B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2B20"))) PPC_WEAK_FUNC(sub_82AC2B20);
PPC_FUNC_IMPL(__imp__sub_82AC2B20) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-11140
	ctx.r31.s64 = ctx.r11.s64 + -11140;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2B40;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2B48;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2B58;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2B6C"))) PPC_WEAK_FUNC(sub_82AC2B6C);
PPC_FUNC_IMPL(__imp__sub_82AC2B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2B70"))) PPC_WEAK_FUNC(sub_82AC2B70);
PPC_FUNC_IMPL(__imp__sub_82AC2B70) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-11052
	ctx.r31.s64 = ctx.r11.s64 + -11052;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2B90;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2B98;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2BA8;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2BBC"))) PPC_WEAK_FUNC(sub_82AC2BBC);
PPC_FUNC_IMPL(__imp__sub_82AC2BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2BC0"))) PPC_WEAK_FUNC(sub_82AC2BC0);
PPC_FUNC_IMPL(__imp__sub_82AC2BC0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-10964
	ctx.r31.s64 = ctx.r11.s64 + -10964;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2BE0;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2BE8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2BF8;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2C0C"))) PPC_WEAK_FUNC(sub_82AC2C0C);
PPC_FUNC_IMPL(__imp__sub_82AC2C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2C10"))) PPC_WEAK_FUNC(sub_82AC2C10);
PPC_FUNC_IMPL(__imp__sub_82AC2C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-10876
	ctx.r3.s64 = ctx.r11.s64 + -10876;
	// b 0x82494508
	sub_82494508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC2C1C"))) PPC_WEAK_FUNC(sub_82AC2C1C);
PPC_FUNC_IMPL(__imp__sub_82AC2C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2C20"))) PPC_WEAK_FUNC(sub_82AC2C20);
PPC_FUNC_IMPL(__imp__sub_82AC2C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-10868
	ctx.r3.s64 = ctx.r11.s64 + -10868;
	// b 0x82494508
	sub_82494508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC2C2C"))) PPC_WEAK_FUNC(sub_82AC2C2C);
PPC_FUNC_IMPL(__imp__sub_82AC2C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2C30"))) PPC_WEAK_FUNC(sub_82AC2C30);
PPC_FUNC_IMPL(__imp__sub_82AC2C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-5076
	ctx.r11.s64 = ctx.r11.s64 + -5076;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AC2C74"))) PPC_WEAK_FUNC(sub_82AC2C74);
PPC_FUNC_IMPL(__imp__sub_82AC2C74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC2C78"))) PPC_WEAK_FUNC(sub_82AC2C78);
PPC_FUNC_IMPL(__imp__sub_82AC2C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-5104
	ctx.r11.s64 = ctx.r11.s64 + -5104;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AC2CBC"))) PPC_WEAK_FUNC(sub_82AC2CBC);
PPC_FUNC_IMPL(__imp__sub_82AC2CBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC2CC0"))) PPC_WEAK_FUNC(sub_82AC2CC0);
PPC_FUNC_IMPL(__imp__sub_82AC2CC0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-10860
	ctx.r31.s64 = ctx.r11.s64 + -10860;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2CE0;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2CE8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2CF8;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2D0C"))) PPC_WEAK_FUNC(sub_82AC2D0C);
PPC_FUNC_IMPL(__imp__sub_82AC2D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2D10"))) PPC_WEAK_FUNC(sub_82AC2D10);
PPC_FUNC_IMPL(__imp__sub_82AC2D10) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-10772
	ctx.r31.s64 = ctx.r11.s64 + -10772;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2D30;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2D38;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2D48;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2D5C"))) PPC_WEAK_FUNC(sub_82AC2D5C);
PPC_FUNC_IMPL(__imp__sub_82AC2D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2D60"))) PPC_WEAK_FUNC(sub_82AC2D60);
PPC_FUNC_IMPL(__imp__sub_82AC2D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-10684
	ctx.r3.s64 = ctx.r11.s64 + -10684;
	// b 0x82494508
	sub_82494508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC2D6C"))) PPC_WEAK_FUNC(sub_82AC2D6C);
PPC_FUNC_IMPL(__imp__sub_82AC2D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2D70"))) PPC_WEAK_FUNC(sub_82AC2D70);
PPC_FUNC_IMPL(__imp__sub_82AC2D70) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r31,r11,-344
	ctx.r31.s64 = ctx.r11.s64 + -344;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82170268
	ctx.lr = 0x82AC2D90;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82527250
	ctx.lr = 0x82AC2DA4;
	sub_82527250(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2DB8"))) PPC_WEAK_FUNC(sub_82AC2DB8);
PPC_FUNC_IMPL(__imp__sub_82AC2DB8) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r31,r11,-324
	ctx.r31.s64 = ctx.r11.s64 + -324;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82170268
	ctx.lr = 0x82AC2DD8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x825272b8
	ctx.lr = 0x82AC2DEC;
	sub_825272B8(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2E00"))) PPC_WEAK_FUNC(sub_82AC2E00);
PPC_FUNC_IMPL(__imp__sub_82AC2E00) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-10592
	ctx.r31.s64 = ctx.r11.s64 + -10592;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2E20;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2E28;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2E38;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2E4C"))) PPC_WEAK_FUNC(sub_82AC2E4C);
PPC_FUNC_IMPL(__imp__sub_82AC2E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2E50"))) PPC_WEAK_FUNC(sub_82AC2E50);
PPC_FUNC_IMPL(__imp__sub_82AC2E50) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-10504
	ctx.r31.s64 = ctx.r11.s64 + -10504;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2E70;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2E78;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2E88;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2E9C"))) PPC_WEAK_FUNC(sub_82AC2E9C);
PPC_FUNC_IMPL(__imp__sub_82AC2E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2EA0"))) PPC_WEAK_FUNC(sub_82AC2EA0);
PPC_FUNC_IMPL(__imp__sub_82AC2EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,10872
	ctx.r3.s64 = ctx.r11.s64 + 10872;
	// b 0x82494508
	sub_82494508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC2EAC"))) PPC_WEAK_FUNC(sub_82AC2EAC);
PPC_FUNC_IMPL(__imp__sub_82AC2EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2EB0"))) PPC_WEAK_FUNC(sub_82AC2EB0);
PPC_FUNC_IMPL(__imp__sub_82AC2EB0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,13672
	ctx.r31.s64 = ctx.r11.s64 + 13672;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2ED0;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2ED8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2EE8;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2EFC"))) PPC_WEAK_FUNC(sub_82AC2EFC);
PPC_FUNC_IMPL(__imp__sub_82AC2EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2F00"))) PPC_WEAK_FUNC(sub_82AC2F00);
PPC_FUNC_IMPL(__imp__sub_82AC2F00) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,13584
	ctx.r31.s64 = ctx.r11.s64 + 13584;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2F20;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2F28;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2F38;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2F4C"))) PPC_WEAK_FUNC(sub_82AC2F4C);
PPC_FUNC_IMPL(__imp__sub_82AC2F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2F50"))) PPC_WEAK_FUNC(sub_82AC2F50);
PPC_FUNC_IMPL(__imp__sub_82AC2F50) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,13496
	ctx.r31.s64 = ctx.r11.s64 + 13496;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2F70;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2F78;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2F88;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2F9C"))) PPC_WEAK_FUNC(sub_82AC2F9C);
PPC_FUNC_IMPL(__imp__sub_82AC2F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2FA0"))) PPC_WEAK_FUNC(sub_82AC2FA0);
PPC_FUNC_IMPL(__imp__sub_82AC2FA0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,13408
	ctx.r31.s64 = ctx.r11.s64 + 13408;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC2FC0;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC2FC8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC2FD8;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC2FEC"))) PPC_WEAK_FUNC(sub_82AC2FEC);
PPC_FUNC_IMPL(__imp__sub_82AC2FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2FF0"))) PPC_WEAK_FUNC(sub_82AC2FF0);
PPC_FUNC_IMPL(__imp__sub_82AC2FF0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,13320
	ctx.r31.s64 = ctx.r11.s64 + 13320;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC3010;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC3018;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC3028;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC303C"))) PPC_WEAK_FUNC(sub_82AC303C);
PPC_FUNC_IMPL(__imp__sub_82AC303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC3040"))) PPC_WEAK_FUNC(sub_82AC3040);
PPC_FUNC_IMPL(__imp__sub_82AC3040) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,13232
	ctx.r31.s64 = ctx.r11.s64 + 13232;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC3060;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC3068;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC3078;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC308C"))) PPC_WEAK_FUNC(sub_82AC308C);
PPC_FUNC_IMPL(__imp__sub_82AC308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC3090"))) PPC_WEAK_FUNC(sub_82AC3090);
PPC_FUNC_IMPL(__imp__sub_82AC3090) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,13144
	ctx.r31.s64 = ctx.r11.s64 + 13144;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC30B0;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC30B8;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC30C8;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC30DC"))) PPC_WEAK_FUNC(sub_82AC30DC);
PPC_FUNC_IMPL(__imp__sub_82AC30DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC30E0"))) PPC_WEAK_FUNC(sub_82AC30E0);
PPC_FUNC_IMPL(__imp__sub_82AC30E0) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,13056
	ctx.r31.s64 = ctx.r11.s64 + 13056;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC3100;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC3108;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC3118;
	sub_8244F3C0(ctx, base);
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

__attribute__((alias("__imp__sub_82AC312C"))) PPC_WEAK_FUNC(sub_82AC312C);
PPC_FUNC_IMPL(__imp__sub_82AC312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC3130"))) PPC_WEAK_FUNC(sub_82AC3130);
PPC_FUNC_IMPL(__imp__sub_82AC3130) {
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
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,12968
	ctx.r31.s64 = ctx.r11.s64 + 12968;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82494360
	ctx.lr = 0x82AC3150;
	sub_82494360(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82170268
	ctx.lr = 0x82AC3158;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8244f3c0
	ctx.lr = 0x82AC3168;
	sub_8244F3C0(ctx, base);
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

