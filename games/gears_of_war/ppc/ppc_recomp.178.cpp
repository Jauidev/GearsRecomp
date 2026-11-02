#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AAD1A0"))) PPC_WEAK_FUNC(sub_82AAD1A0);
PPC_FUNC_IMPL(__imp__sub_82AAD1A0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29856
	ctx.r4.s64 = ctx.r11.s64 + -29856;
	// bl 0x82316b80
	ctx.lr = 0x82AAD1BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17053(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17053, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD1D4"))) PPC_WEAK_FUNC(sub_82AAD1D4);
PPC_FUNC_IMPL(__imp__sub_82AAD1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD1D8"))) PPC_WEAK_FUNC(sub_82AAD1D8);
PPC_FUNC_IMPL(__imp__sub_82AAD1D8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29852
	ctx.r4.s64 = ctx.r11.s64 + -29852;
	// bl 0x82316b80
	ctx.lr = 0x82AAD1F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17052(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17052, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD20C"))) PPC_WEAK_FUNC(sub_82AAD20C);
PPC_FUNC_IMPL(__imp__sub_82AAD20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD210"))) PPC_WEAK_FUNC(sub_82AAD210);
PPC_FUNC_IMPL(__imp__sub_82AAD210) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29848
	ctx.r4.s64 = ctx.r11.s64 + -29848;
	// bl 0x82316b80
	ctx.lr = 0x82AAD22C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17051(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17051, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD244"))) PPC_WEAK_FUNC(sub_82AAD244);
PPC_FUNC_IMPL(__imp__sub_82AAD244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD248"))) PPC_WEAK_FUNC(sub_82AAD248);
PPC_FUNC_IMPL(__imp__sub_82AAD248) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29844
	ctx.r4.s64 = ctx.r11.s64 + -29844;
	// bl 0x82316b80
	ctx.lr = 0x82AAD264;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17050(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17050, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD27C"))) PPC_WEAK_FUNC(sub_82AAD27C);
PPC_FUNC_IMPL(__imp__sub_82AAD27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD280"))) PPC_WEAK_FUNC(sub_82AAD280);
PPC_FUNC_IMPL(__imp__sub_82AAD280) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29840
	ctx.r4.s64 = ctx.r11.s64 + -29840;
	// bl 0x82316b80
	ctx.lr = 0x82AAD29C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17049(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17049, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD2B4"))) PPC_WEAK_FUNC(sub_82AAD2B4);
PPC_FUNC_IMPL(__imp__sub_82AAD2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD2B8"))) PPC_WEAK_FUNC(sub_82AAD2B8);
PPC_FUNC_IMPL(__imp__sub_82AAD2B8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29836
	ctx.r4.s64 = ctx.r11.s64 + -29836;
	// bl 0x82316b80
	ctx.lr = 0x82AAD2D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17048(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17048, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD2EC"))) PPC_WEAK_FUNC(sub_82AAD2EC);
PPC_FUNC_IMPL(__imp__sub_82AAD2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD2F0"))) PPC_WEAK_FUNC(sub_82AAD2F0);
PPC_FUNC_IMPL(__imp__sub_82AAD2F0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29832
	ctx.r4.s64 = ctx.r11.s64 + -29832;
	// bl 0x82316b80
	ctx.lr = 0x82AAD30C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17047(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17047, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD324"))) PPC_WEAK_FUNC(sub_82AAD324);
PPC_FUNC_IMPL(__imp__sub_82AAD324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD328"))) PPC_WEAK_FUNC(sub_82AAD328);
PPC_FUNC_IMPL(__imp__sub_82AAD328) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29828
	ctx.r4.s64 = ctx.r11.s64 + -29828;
	// bl 0x82316b80
	ctx.lr = 0x82AAD344;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17046(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17046, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD35C"))) PPC_WEAK_FUNC(sub_82AAD35C);
PPC_FUNC_IMPL(__imp__sub_82AAD35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD360"))) PPC_WEAK_FUNC(sub_82AAD360);
PPC_FUNC_IMPL(__imp__sub_82AAD360) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29824
	ctx.r4.s64 = ctx.r11.s64 + -29824;
	// bl 0x82316b80
	ctx.lr = 0x82AAD37C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17045(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17045, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD394"))) PPC_WEAK_FUNC(sub_82AAD394);
PPC_FUNC_IMPL(__imp__sub_82AAD394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD398"))) PPC_WEAK_FUNC(sub_82AAD398);
PPC_FUNC_IMPL(__imp__sub_82AAD398) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29820
	ctx.r4.s64 = ctx.r11.s64 + -29820;
	// bl 0x82316b80
	ctx.lr = 0x82AAD3B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17044(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17044, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD3CC"))) PPC_WEAK_FUNC(sub_82AAD3CC);
PPC_FUNC_IMPL(__imp__sub_82AAD3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD3D0"))) PPC_WEAK_FUNC(sub_82AAD3D0);
PPC_FUNC_IMPL(__imp__sub_82AAD3D0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29816
	ctx.r4.s64 = ctx.r11.s64 + -29816;
	// bl 0x82316b80
	ctx.lr = 0x82AAD3EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17043(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17043, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD404"))) PPC_WEAK_FUNC(sub_82AAD404);
PPC_FUNC_IMPL(__imp__sub_82AAD404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD408"))) PPC_WEAK_FUNC(sub_82AAD408);
PPC_FUNC_IMPL(__imp__sub_82AAD408) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29812
	ctx.r4.s64 = ctx.r11.s64 + -29812;
	// bl 0x82316b80
	ctx.lr = 0x82AAD424;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17042(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17042, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD43C"))) PPC_WEAK_FUNC(sub_82AAD43C);
PPC_FUNC_IMPL(__imp__sub_82AAD43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD440"))) PPC_WEAK_FUNC(sub_82AAD440);
PPC_FUNC_IMPL(__imp__sub_82AAD440) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29808
	ctx.r4.s64 = ctx.r11.s64 + -29808;
	// bl 0x82316b80
	ctx.lr = 0x82AAD45C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17041(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17041, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD474"))) PPC_WEAK_FUNC(sub_82AAD474);
PPC_FUNC_IMPL(__imp__sub_82AAD474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD478"))) PPC_WEAK_FUNC(sub_82AAD478);
PPC_FUNC_IMPL(__imp__sub_82AAD478) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29804
	ctx.r4.s64 = ctx.r11.s64 + -29804;
	// bl 0x82316b80
	ctx.lr = 0x82AAD494;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17040(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17040, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD4AC"))) PPC_WEAK_FUNC(sub_82AAD4AC);
PPC_FUNC_IMPL(__imp__sub_82AAD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD4B0"))) PPC_WEAK_FUNC(sub_82AAD4B0);
PPC_FUNC_IMPL(__imp__sub_82AAD4B0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29800
	ctx.r4.s64 = ctx.r11.s64 + -29800;
	// bl 0x82316b80
	ctx.lr = 0x82AAD4CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17039(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17039, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD4E4"))) PPC_WEAK_FUNC(sub_82AAD4E4);
PPC_FUNC_IMPL(__imp__sub_82AAD4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD4E8"))) PPC_WEAK_FUNC(sub_82AAD4E8);
PPC_FUNC_IMPL(__imp__sub_82AAD4E8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29796
	ctx.r4.s64 = ctx.r11.s64 + -29796;
	// bl 0x82316b80
	ctx.lr = 0x82AAD504;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17038(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17038, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD51C"))) PPC_WEAK_FUNC(sub_82AAD51C);
PPC_FUNC_IMPL(__imp__sub_82AAD51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD520"))) PPC_WEAK_FUNC(sub_82AAD520);
PPC_FUNC_IMPL(__imp__sub_82AAD520) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29792
	ctx.r4.s64 = ctx.r11.s64 + -29792;
	// bl 0x82316b80
	ctx.lr = 0x82AAD53C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17037(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17037, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD554"))) PPC_WEAK_FUNC(sub_82AAD554);
PPC_FUNC_IMPL(__imp__sub_82AAD554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD558"))) PPC_WEAK_FUNC(sub_82AAD558);
PPC_FUNC_IMPL(__imp__sub_82AAD558) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29788
	ctx.r4.s64 = ctx.r11.s64 + -29788;
	// bl 0x82316b80
	ctx.lr = 0x82AAD574;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17020(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17020, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD58C"))) PPC_WEAK_FUNC(sub_82AAD58C);
PPC_FUNC_IMPL(__imp__sub_82AAD58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD590"))) PPC_WEAK_FUNC(sub_82AAD590);
PPC_FUNC_IMPL(__imp__sub_82AAD590) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29784
	ctx.r4.s64 = ctx.r11.s64 + -29784;
	// bl 0x82316b80
	ctx.lr = 0x82AAD5AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17019(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17019, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD5C4"))) PPC_WEAK_FUNC(sub_82AAD5C4);
PPC_FUNC_IMPL(__imp__sub_82AAD5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD5C8"))) PPC_WEAK_FUNC(sub_82AAD5C8);
PPC_FUNC_IMPL(__imp__sub_82AAD5C8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29780
	ctx.r4.s64 = ctx.r11.s64 + -29780;
	// bl 0x82316b80
	ctx.lr = 0x82AAD5E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17018(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17018, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD5FC"))) PPC_WEAK_FUNC(sub_82AAD5FC);
PPC_FUNC_IMPL(__imp__sub_82AAD5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD600"))) PPC_WEAK_FUNC(sub_82AAD600);
PPC_FUNC_IMPL(__imp__sub_82AAD600) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29776
	ctx.r4.s64 = ctx.r11.s64 + -29776;
	// bl 0x82316b80
	ctx.lr = 0x82AAD61C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17017(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17017, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD634"))) PPC_WEAK_FUNC(sub_82AAD634);
PPC_FUNC_IMPL(__imp__sub_82AAD634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD638"))) PPC_WEAK_FUNC(sub_82AAD638);
PPC_FUNC_IMPL(__imp__sub_82AAD638) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29772
	ctx.r4.s64 = ctx.r11.s64 + -29772;
	// bl 0x82316b80
	ctx.lr = 0x82AAD654;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17016(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17016, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD66C"))) PPC_WEAK_FUNC(sub_82AAD66C);
PPC_FUNC_IMPL(__imp__sub_82AAD66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD670"))) PPC_WEAK_FUNC(sub_82AAD670);
PPC_FUNC_IMPL(__imp__sub_82AAD670) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29768
	ctx.r4.s64 = ctx.r11.s64 + -29768;
	// bl 0x82316b80
	ctx.lr = 0x82AAD68C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17015(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17015, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD6A4"))) PPC_WEAK_FUNC(sub_82AAD6A4);
PPC_FUNC_IMPL(__imp__sub_82AAD6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD6A8"))) PPC_WEAK_FUNC(sub_82AAD6A8);
PPC_FUNC_IMPL(__imp__sub_82AAD6A8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29764
	ctx.r4.s64 = ctx.r11.s64 + -29764;
	// bl 0x82316b80
	ctx.lr = 0x82AAD6C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17014(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17014, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD6DC"))) PPC_WEAK_FUNC(sub_82AAD6DC);
PPC_FUNC_IMPL(__imp__sub_82AAD6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD6E0"))) PPC_WEAK_FUNC(sub_82AAD6E0);
PPC_FUNC_IMPL(__imp__sub_82AAD6E0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29760
	ctx.r4.s64 = ctx.r11.s64 + -29760;
	// bl 0x82316b80
	ctx.lr = 0x82AAD6FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17013(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17013, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD714"))) PPC_WEAK_FUNC(sub_82AAD714);
PPC_FUNC_IMPL(__imp__sub_82AAD714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD718"))) PPC_WEAK_FUNC(sub_82AAD718);
PPC_FUNC_IMPL(__imp__sub_82AAD718) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29756
	ctx.r4.s64 = ctx.r11.s64 + -29756;
	// bl 0x82316b80
	ctx.lr = 0x82AAD734;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17012(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17012, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD74C"))) PPC_WEAK_FUNC(sub_82AAD74C);
PPC_FUNC_IMPL(__imp__sub_82AAD74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD750"))) PPC_WEAK_FUNC(sub_82AAD750);
PPC_FUNC_IMPL(__imp__sub_82AAD750) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29752
	ctx.r4.s64 = ctx.r11.s64 + -29752;
	// bl 0x82316b80
	ctx.lr = 0x82AAD76C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17011(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17011, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD784"))) PPC_WEAK_FUNC(sub_82AAD784);
PPC_FUNC_IMPL(__imp__sub_82AAD784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD788"))) PPC_WEAK_FUNC(sub_82AAD788);
PPC_FUNC_IMPL(__imp__sub_82AAD788) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29748
	ctx.r4.s64 = ctx.r11.s64 + -29748;
	// bl 0x82316b80
	ctx.lr = 0x82AAD7A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17010(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17010, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD7BC"))) PPC_WEAK_FUNC(sub_82AAD7BC);
PPC_FUNC_IMPL(__imp__sub_82AAD7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD7C0"))) PPC_WEAK_FUNC(sub_82AAD7C0);
PPC_FUNC_IMPL(__imp__sub_82AAD7C0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29744
	ctx.r4.s64 = ctx.r11.s64 + -29744;
	// bl 0x82316b80
	ctx.lr = 0x82AAD7DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17009(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17009, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD7F4"))) PPC_WEAK_FUNC(sub_82AAD7F4);
PPC_FUNC_IMPL(__imp__sub_82AAD7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD7F8"))) PPC_WEAK_FUNC(sub_82AAD7F8);
PPC_FUNC_IMPL(__imp__sub_82AAD7F8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29740
	ctx.r4.s64 = ctx.r11.s64 + -29740;
	// bl 0x82316b80
	ctx.lr = 0x82AAD814;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17008(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17008, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD82C"))) PPC_WEAK_FUNC(sub_82AAD82C);
PPC_FUNC_IMPL(__imp__sub_82AAD82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD830"))) PPC_WEAK_FUNC(sub_82AAD830);
PPC_FUNC_IMPL(__imp__sub_82AAD830) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29736
	ctx.r4.s64 = ctx.r11.s64 + -29736;
	// bl 0x82316b80
	ctx.lr = 0x82AAD84C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17007(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17007, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD864"))) PPC_WEAK_FUNC(sub_82AAD864);
PPC_FUNC_IMPL(__imp__sub_82AAD864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD868"))) PPC_WEAK_FUNC(sub_82AAD868);
PPC_FUNC_IMPL(__imp__sub_82AAD868) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29732
	ctx.r4.s64 = ctx.r11.s64 + -29732;
	// bl 0x82316b80
	ctx.lr = 0x82AAD884;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17006(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17006, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD89C"))) PPC_WEAK_FUNC(sub_82AAD89C);
PPC_FUNC_IMPL(__imp__sub_82AAD89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD8A0"))) PPC_WEAK_FUNC(sub_82AAD8A0);
PPC_FUNC_IMPL(__imp__sub_82AAD8A0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29728
	ctx.r4.s64 = ctx.r11.s64 + -29728;
	// bl 0x82316b80
	ctx.lr = 0x82AAD8BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17005(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17005, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD8D4"))) PPC_WEAK_FUNC(sub_82AAD8D4);
PPC_FUNC_IMPL(__imp__sub_82AAD8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD8D8"))) PPC_WEAK_FUNC(sub_82AAD8D8);
PPC_FUNC_IMPL(__imp__sub_82AAD8D8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29724
	ctx.r4.s64 = ctx.r11.s64 + -29724;
	// bl 0x82316b80
	ctx.lr = 0x82AAD8F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17004(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17004, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD90C"))) PPC_WEAK_FUNC(sub_82AAD90C);
PPC_FUNC_IMPL(__imp__sub_82AAD90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD910"))) PPC_WEAK_FUNC(sub_82AAD910);
PPC_FUNC_IMPL(__imp__sub_82AAD910) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29720
	ctx.r4.s64 = ctx.r11.s64 + -29720;
	// bl 0x82316b80
	ctx.lr = 0x82AAD92C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17003(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17003, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD944"))) PPC_WEAK_FUNC(sub_82AAD944);
PPC_FUNC_IMPL(__imp__sub_82AAD944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD948"))) PPC_WEAK_FUNC(sub_82AAD948);
PPC_FUNC_IMPL(__imp__sub_82AAD948) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29716
	ctx.r4.s64 = ctx.r11.s64 + -29716;
	// bl 0x82316b80
	ctx.lr = 0x82AAD964;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17002(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17002, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD97C"))) PPC_WEAK_FUNC(sub_82AAD97C);
PPC_FUNC_IMPL(__imp__sub_82AAD97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD980"))) PPC_WEAK_FUNC(sub_82AAD980);
PPC_FUNC_IMPL(__imp__sub_82AAD980) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29712
	ctx.r4.s64 = ctx.r11.s64 + -29712;
	// bl 0x82316b80
	ctx.lr = 0x82AAD99C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17001(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17001, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD9B4"))) PPC_WEAK_FUNC(sub_82AAD9B4);
PPC_FUNC_IMPL(__imp__sub_82AAD9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD9B8"))) PPC_WEAK_FUNC(sub_82AAD9B8);
PPC_FUNC_IMPL(__imp__sub_82AAD9B8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29708
	ctx.r4.s64 = ctx.r11.s64 + -29708;
	// bl 0x82316b80
	ctx.lr = 0x82AAD9D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17000(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17000, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAD9EC"))) PPC_WEAK_FUNC(sub_82AAD9EC);
PPC_FUNC_IMPL(__imp__sub_82AAD9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAD9F0"))) PPC_WEAK_FUNC(sub_82AAD9F0);
PPC_FUNC_IMPL(__imp__sub_82AAD9F0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29704
	ctx.r4.s64 = ctx.r11.s64 + -29704;
	// bl 0x82316b80
	ctx.lr = 0x82AADA0C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16999(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16999, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADA24"))) PPC_WEAK_FUNC(sub_82AADA24);
PPC_FUNC_IMPL(__imp__sub_82AADA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADA28"))) PPC_WEAK_FUNC(sub_82AADA28);
PPC_FUNC_IMPL(__imp__sub_82AADA28) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29700
	ctx.r4.s64 = ctx.r11.s64 + -29700;
	// bl 0x82316b80
	ctx.lr = 0x82AADA44;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16998(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16998, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADA5C"))) PPC_WEAK_FUNC(sub_82AADA5C);
PPC_FUNC_IMPL(__imp__sub_82AADA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADA60"))) PPC_WEAK_FUNC(sub_82AADA60);
PPC_FUNC_IMPL(__imp__sub_82AADA60) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29696
	ctx.r4.s64 = ctx.r11.s64 + -29696;
	// bl 0x82316b80
	ctx.lr = 0x82AADA7C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16997(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16997, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADA94"))) PPC_WEAK_FUNC(sub_82AADA94);
PPC_FUNC_IMPL(__imp__sub_82AADA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADA98"))) PPC_WEAK_FUNC(sub_82AADA98);
PPC_FUNC_IMPL(__imp__sub_82AADA98) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29692
	ctx.r4.s64 = ctx.r11.s64 + -29692;
	// bl 0x82316b80
	ctx.lr = 0x82AADAB4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16996(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16996, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADACC"))) PPC_WEAK_FUNC(sub_82AADACC);
PPC_FUNC_IMPL(__imp__sub_82AADACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADAD0"))) PPC_WEAK_FUNC(sub_82AADAD0);
PPC_FUNC_IMPL(__imp__sub_82AADAD0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29688
	ctx.r4.s64 = ctx.r11.s64 + -29688;
	// bl 0x82316b80
	ctx.lr = 0x82AADAEC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16995(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16995, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADB04"))) PPC_WEAK_FUNC(sub_82AADB04);
PPC_FUNC_IMPL(__imp__sub_82AADB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADB08"))) PPC_WEAK_FUNC(sub_82AADB08);
PPC_FUNC_IMPL(__imp__sub_82AADB08) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29684
	ctx.r4.s64 = ctx.r11.s64 + -29684;
	// bl 0x82316b80
	ctx.lr = 0x82AADB24;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16994(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16994, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADB3C"))) PPC_WEAK_FUNC(sub_82AADB3C);
PPC_FUNC_IMPL(__imp__sub_82AADB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADB40"))) PPC_WEAK_FUNC(sub_82AADB40);
PPC_FUNC_IMPL(__imp__sub_82AADB40) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29680
	ctx.r4.s64 = ctx.r11.s64 + -29680;
	// bl 0x82316b80
	ctx.lr = 0x82AADB5C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16993(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16993, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADB74"))) PPC_WEAK_FUNC(sub_82AADB74);
PPC_FUNC_IMPL(__imp__sub_82AADB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADB78"))) PPC_WEAK_FUNC(sub_82AADB78);
PPC_FUNC_IMPL(__imp__sub_82AADB78) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29676
	ctx.r4.s64 = ctx.r11.s64 + -29676;
	// bl 0x82316b80
	ctx.lr = 0x82AADB94;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16992(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16992, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADBAC"))) PPC_WEAK_FUNC(sub_82AADBAC);
PPC_FUNC_IMPL(__imp__sub_82AADBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADBB0"))) PPC_WEAK_FUNC(sub_82AADBB0);
PPC_FUNC_IMPL(__imp__sub_82AADBB0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29672
	ctx.r4.s64 = ctx.r11.s64 + -29672;
	// bl 0x82316b80
	ctx.lr = 0x82AADBCC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16991(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16991, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADBE4"))) PPC_WEAK_FUNC(sub_82AADBE4);
PPC_FUNC_IMPL(__imp__sub_82AADBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADBE8"))) PPC_WEAK_FUNC(sub_82AADBE8);
PPC_FUNC_IMPL(__imp__sub_82AADBE8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29668
	ctx.r4.s64 = ctx.r11.s64 + -29668;
	// bl 0x82316b80
	ctx.lr = 0x82AADC04;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16990(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16990, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADC1C"))) PPC_WEAK_FUNC(sub_82AADC1C);
PPC_FUNC_IMPL(__imp__sub_82AADC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADC20"))) PPC_WEAK_FUNC(sub_82AADC20);
PPC_FUNC_IMPL(__imp__sub_82AADC20) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29664
	ctx.r4.s64 = ctx.r11.s64 + -29664;
	// bl 0x82316b80
	ctx.lr = 0x82AADC3C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16989(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16989, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADC54"))) PPC_WEAK_FUNC(sub_82AADC54);
PPC_FUNC_IMPL(__imp__sub_82AADC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADC58"))) PPC_WEAK_FUNC(sub_82AADC58);
PPC_FUNC_IMPL(__imp__sub_82AADC58) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29660
	ctx.r4.s64 = ctx.r11.s64 + -29660;
	// bl 0x82316b80
	ctx.lr = 0x82AADC74;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16948(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16948, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADC8C"))) PPC_WEAK_FUNC(sub_82AADC8C);
PPC_FUNC_IMPL(__imp__sub_82AADC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADC90"))) PPC_WEAK_FUNC(sub_82AADC90);
PPC_FUNC_IMPL(__imp__sub_82AADC90) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29656
	ctx.r4.s64 = ctx.r11.s64 + -29656;
	// bl 0x82316b80
	ctx.lr = 0x82AADCAC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16947(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16947, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADCC4"))) PPC_WEAK_FUNC(sub_82AADCC4);
PPC_FUNC_IMPL(__imp__sub_82AADCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADCC8"))) PPC_WEAK_FUNC(sub_82AADCC8);
PPC_FUNC_IMPL(__imp__sub_82AADCC8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29652
	ctx.r4.s64 = ctx.r11.s64 + -29652;
	// bl 0x82316b80
	ctx.lr = 0x82AADCE4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16946(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16946, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADCFC"))) PPC_WEAK_FUNC(sub_82AADCFC);
PPC_FUNC_IMPL(__imp__sub_82AADCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADD00"))) PPC_WEAK_FUNC(sub_82AADD00);
PPC_FUNC_IMPL(__imp__sub_82AADD00) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29648
	ctx.r4.s64 = ctx.r11.s64 + -29648;
	// bl 0x82316b80
	ctx.lr = 0x82AADD1C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16945(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16945, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADD34"))) PPC_WEAK_FUNC(sub_82AADD34);
PPC_FUNC_IMPL(__imp__sub_82AADD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADD38"))) PPC_WEAK_FUNC(sub_82AADD38);
PPC_FUNC_IMPL(__imp__sub_82AADD38) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29644
	ctx.r4.s64 = ctx.r11.s64 + -29644;
	// bl 0x82316b80
	ctx.lr = 0x82AADD54;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16944(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16944, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADD6C"))) PPC_WEAK_FUNC(sub_82AADD6C);
PPC_FUNC_IMPL(__imp__sub_82AADD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADD70"))) PPC_WEAK_FUNC(sub_82AADD70);
PPC_FUNC_IMPL(__imp__sub_82AADD70) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29640
	ctx.r4.s64 = ctx.r11.s64 + -29640;
	// bl 0x82316b80
	ctx.lr = 0x82AADD8C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16943(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16943, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADDA4"))) PPC_WEAK_FUNC(sub_82AADDA4);
PPC_FUNC_IMPL(__imp__sub_82AADDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADDA8"))) PPC_WEAK_FUNC(sub_82AADDA8);
PPC_FUNC_IMPL(__imp__sub_82AADDA8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29636
	ctx.r4.s64 = ctx.r11.s64 + -29636;
	// bl 0x82316b80
	ctx.lr = 0x82AADDC4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16942(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16942, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADDDC"))) PPC_WEAK_FUNC(sub_82AADDDC);
PPC_FUNC_IMPL(__imp__sub_82AADDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADDE0"))) PPC_WEAK_FUNC(sub_82AADDE0);
PPC_FUNC_IMPL(__imp__sub_82AADDE0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29632
	ctx.r4.s64 = ctx.r11.s64 + -29632;
	// bl 0x82316b80
	ctx.lr = 0x82AADDFC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16941(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16941, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADE14"))) PPC_WEAK_FUNC(sub_82AADE14);
PPC_FUNC_IMPL(__imp__sub_82AADE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADE18"))) PPC_WEAK_FUNC(sub_82AADE18);
PPC_FUNC_IMPL(__imp__sub_82AADE18) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29628
	ctx.r4.s64 = ctx.r11.s64 + -29628;
	// bl 0x82316b80
	ctx.lr = 0x82AADE34;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16940(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16940, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADE4C"))) PPC_WEAK_FUNC(sub_82AADE4C);
PPC_FUNC_IMPL(__imp__sub_82AADE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADE50"))) PPC_WEAK_FUNC(sub_82AADE50);
PPC_FUNC_IMPL(__imp__sub_82AADE50) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29624
	ctx.r4.s64 = ctx.r11.s64 + -29624;
	// bl 0x82316b80
	ctx.lr = 0x82AADE6C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16939(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16939, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADE84"))) PPC_WEAK_FUNC(sub_82AADE84);
PPC_FUNC_IMPL(__imp__sub_82AADE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADE88"))) PPC_WEAK_FUNC(sub_82AADE88);
PPC_FUNC_IMPL(__imp__sub_82AADE88) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29620
	ctx.r4.s64 = ctx.r11.s64 + -29620;
	// bl 0x82316b80
	ctx.lr = 0x82AADEA4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16938(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16938, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADEBC"))) PPC_WEAK_FUNC(sub_82AADEBC);
PPC_FUNC_IMPL(__imp__sub_82AADEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADEC0"))) PPC_WEAK_FUNC(sub_82AADEC0);
PPC_FUNC_IMPL(__imp__sub_82AADEC0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29616
	ctx.r4.s64 = ctx.r11.s64 + -29616;
	// bl 0x82316b80
	ctx.lr = 0x82AADEDC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16937(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16937, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADEF4"))) PPC_WEAK_FUNC(sub_82AADEF4);
PPC_FUNC_IMPL(__imp__sub_82AADEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADEF8"))) PPC_WEAK_FUNC(sub_82AADEF8);
PPC_FUNC_IMPL(__imp__sub_82AADEF8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29612
	ctx.r4.s64 = ctx.r11.s64 + -29612;
	// bl 0x82316b80
	ctx.lr = 0x82AADF14;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16936(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16936, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADF2C"))) PPC_WEAK_FUNC(sub_82AADF2C);
PPC_FUNC_IMPL(__imp__sub_82AADF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADF30"))) PPC_WEAK_FUNC(sub_82AADF30);
PPC_FUNC_IMPL(__imp__sub_82AADF30) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29608
	ctx.r4.s64 = ctx.r11.s64 + -29608;
	// bl 0x82316b80
	ctx.lr = 0x82AADF4C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16935(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16935, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADF64"))) PPC_WEAK_FUNC(sub_82AADF64);
PPC_FUNC_IMPL(__imp__sub_82AADF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADF68"))) PPC_WEAK_FUNC(sub_82AADF68);
PPC_FUNC_IMPL(__imp__sub_82AADF68) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29604
	ctx.r4.s64 = ctx.r11.s64 + -29604;
	// bl 0x82316b80
	ctx.lr = 0x82AADF84;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16934(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16934, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADF9C"))) PPC_WEAK_FUNC(sub_82AADF9C);
PPC_FUNC_IMPL(__imp__sub_82AADF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADFA0"))) PPC_WEAK_FUNC(sub_82AADFA0);
PPC_FUNC_IMPL(__imp__sub_82AADFA0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29600
	ctx.r4.s64 = ctx.r11.s64 + -29600;
	// bl 0x82316b80
	ctx.lr = 0x82AADFBC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16933(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16933, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AADFD4"))) PPC_WEAK_FUNC(sub_82AADFD4);
PPC_FUNC_IMPL(__imp__sub_82AADFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AADFD8"))) PPC_WEAK_FUNC(sub_82AADFD8);
PPC_FUNC_IMPL(__imp__sub_82AADFD8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29596
	ctx.r4.s64 = ctx.r11.s64 + -29596;
	// bl 0x82316b80
	ctx.lr = 0x82AADFF4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16932(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16932, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE00C"))) PPC_WEAK_FUNC(sub_82AAE00C);
PPC_FUNC_IMPL(__imp__sub_82AAE00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE010"))) PPC_WEAK_FUNC(sub_82AAE010);
PPC_FUNC_IMPL(__imp__sub_82AAE010) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29592
	ctx.r4.s64 = ctx.r11.s64 + -29592;
	// bl 0x82316b80
	ctx.lr = 0x82AAE02C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16931(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16931, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE044"))) PPC_WEAK_FUNC(sub_82AAE044);
PPC_FUNC_IMPL(__imp__sub_82AAE044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE048"))) PPC_WEAK_FUNC(sub_82AAE048);
PPC_FUNC_IMPL(__imp__sub_82AAE048) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29588
	ctx.r4.s64 = ctx.r11.s64 + -29588;
	// bl 0x82316b80
	ctx.lr = 0x82AAE064;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16930(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16930, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE07C"))) PPC_WEAK_FUNC(sub_82AAE07C);
PPC_FUNC_IMPL(__imp__sub_82AAE07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE080"))) PPC_WEAK_FUNC(sub_82AAE080);
PPC_FUNC_IMPL(__imp__sub_82AAE080) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29584
	ctx.r4.s64 = ctx.r11.s64 + -29584;
	// bl 0x82316b80
	ctx.lr = 0x82AAE09C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16929(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16929, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE0B4"))) PPC_WEAK_FUNC(sub_82AAE0B4);
PPC_FUNC_IMPL(__imp__sub_82AAE0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE0B8"))) PPC_WEAK_FUNC(sub_82AAE0B8);
PPC_FUNC_IMPL(__imp__sub_82AAE0B8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29580
	ctx.r4.s64 = ctx.r11.s64 + -29580;
	// bl 0x82316b80
	ctx.lr = 0x82AAE0D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16928(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16928, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE0EC"))) PPC_WEAK_FUNC(sub_82AAE0EC);
PPC_FUNC_IMPL(__imp__sub_82AAE0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE0F0"))) PPC_WEAK_FUNC(sub_82AAE0F0);
PPC_FUNC_IMPL(__imp__sub_82AAE0F0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29576
	ctx.r4.s64 = ctx.r11.s64 + -29576;
	// bl 0x82316b80
	ctx.lr = 0x82AAE10C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16927(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16927, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE124"))) PPC_WEAK_FUNC(sub_82AAE124);
PPC_FUNC_IMPL(__imp__sub_82AAE124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE128"))) PPC_WEAK_FUNC(sub_82AAE128);
PPC_FUNC_IMPL(__imp__sub_82AAE128) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29572
	ctx.r4.s64 = ctx.r11.s64 + -29572;
	// bl 0x82316b80
	ctx.lr = 0x82AAE144;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16926(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16926, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE15C"))) PPC_WEAK_FUNC(sub_82AAE15C);
PPC_FUNC_IMPL(__imp__sub_82AAE15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE160"))) PPC_WEAK_FUNC(sub_82AAE160);
PPC_FUNC_IMPL(__imp__sub_82AAE160) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29568
	ctx.r4.s64 = ctx.r11.s64 + -29568;
	// bl 0x82316b80
	ctx.lr = 0x82AAE17C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16925(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16925, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE194"))) PPC_WEAK_FUNC(sub_82AAE194);
PPC_FUNC_IMPL(__imp__sub_82AAE194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE198"))) PPC_WEAK_FUNC(sub_82AAE198);
PPC_FUNC_IMPL(__imp__sub_82AAE198) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29564
	ctx.r4.s64 = ctx.r11.s64 + -29564;
	// bl 0x82316b80
	ctx.lr = 0x82AAE1B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16924(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16924, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE1CC"))) PPC_WEAK_FUNC(sub_82AAE1CC);
PPC_FUNC_IMPL(__imp__sub_82AAE1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE1D0"))) PPC_WEAK_FUNC(sub_82AAE1D0);
PPC_FUNC_IMPL(__imp__sub_82AAE1D0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29560
	ctx.r4.s64 = ctx.r11.s64 + -29560;
	// bl 0x82316b80
	ctx.lr = 0x82AAE1EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16923(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16923, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE204"))) PPC_WEAK_FUNC(sub_82AAE204);
PPC_FUNC_IMPL(__imp__sub_82AAE204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE208"))) PPC_WEAK_FUNC(sub_82AAE208);
PPC_FUNC_IMPL(__imp__sub_82AAE208) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29556
	ctx.r4.s64 = ctx.r11.s64 + -29556;
	// bl 0x82316b80
	ctx.lr = 0x82AAE224;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16922(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16922, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE23C"))) PPC_WEAK_FUNC(sub_82AAE23C);
PPC_FUNC_IMPL(__imp__sub_82AAE23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE240"))) PPC_WEAK_FUNC(sub_82AAE240);
PPC_FUNC_IMPL(__imp__sub_82AAE240) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29552
	ctx.r4.s64 = ctx.r11.s64 + -29552;
	// bl 0x82316b80
	ctx.lr = 0x82AAE25C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16921(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16921, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE274"))) PPC_WEAK_FUNC(sub_82AAE274);
PPC_FUNC_IMPL(__imp__sub_82AAE274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE278"))) PPC_WEAK_FUNC(sub_82AAE278);
PPC_FUNC_IMPL(__imp__sub_82AAE278) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29548
	ctx.r4.s64 = ctx.r11.s64 + -29548;
	// bl 0x82316b80
	ctx.lr = 0x82AAE294;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16920(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16920, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE2AC"))) PPC_WEAK_FUNC(sub_82AAE2AC);
PPC_FUNC_IMPL(__imp__sub_82AAE2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE2B0"))) PPC_WEAK_FUNC(sub_82AAE2B0);
PPC_FUNC_IMPL(__imp__sub_82AAE2B0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29544
	ctx.r4.s64 = ctx.r11.s64 + -29544;
	// bl 0x82316b80
	ctx.lr = 0x82AAE2CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16919(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16919, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE2E4"))) PPC_WEAK_FUNC(sub_82AAE2E4);
PPC_FUNC_IMPL(__imp__sub_82AAE2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE2E8"))) PPC_WEAK_FUNC(sub_82AAE2E8);
PPC_FUNC_IMPL(__imp__sub_82AAE2E8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29540
	ctx.r4.s64 = ctx.r11.s64 + -29540;
	// bl 0x82316b80
	ctx.lr = 0x82AAE304;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16918(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16918, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE31C"))) PPC_WEAK_FUNC(sub_82AAE31C);
PPC_FUNC_IMPL(__imp__sub_82AAE31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE320"))) PPC_WEAK_FUNC(sub_82AAE320);
PPC_FUNC_IMPL(__imp__sub_82AAE320) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29536
	ctx.r4.s64 = ctx.r11.s64 + -29536;
	// bl 0x82316b80
	ctx.lr = 0x82AAE33C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16917(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16917, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE354"))) PPC_WEAK_FUNC(sub_82AAE354);
PPC_FUNC_IMPL(__imp__sub_82AAE354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE358"))) PPC_WEAK_FUNC(sub_82AAE358);
PPC_FUNC_IMPL(__imp__sub_82AAE358) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29532
	ctx.r4.s64 = ctx.r11.s64 + -29532;
	// bl 0x82316b80
	ctx.lr = 0x82AAE374;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16916(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16916, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE38C"))) PPC_WEAK_FUNC(sub_82AAE38C);
PPC_FUNC_IMPL(__imp__sub_82AAE38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE390"))) PPC_WEAK_FUNC(sub_82AAE390);
PPC_FUNC_IMPL(__imp__sub_82AAE390) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29528
	ctx.r4.s64 = ctx.r11.s64 + -29528;
	// bl 0x82316b80
	ctx.lr = 0x82AAE3AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16915(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16915, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE3C4"))) PPC_WEAK_FUNC(sub_82AAE3C4);
PPC_FUNC_IMPL(__imp__sub_82AAE3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE3C8"))) PPC_WEAK_FUNC(sub_82AAE3C8);
PPC_FUNC_IMPL(__imp__sub_82AAE3C8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29524
	ctx.r4.s64 = ctx.r11.s64 + -29524;
	// bl 0x82316b80
	ctx.lr = 0x82AAE3E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16914(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16914, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE3FC"))) PPC_WEAK_FUNC(sub_82AAE3FC);
PPC_FUNC_IMPL(__imp__sub_82AAE3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE400"))) PPC_WEAK_FUNC(sub_82AAE400);
PPC_FUNC_IMPL(__imp__sub_82AAE400) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29520
	ctx.r4.s64 = ctx.r11.s64 + -29520;
	// bl 0x82316b80
	ctx.lr = 0x82AAE41C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16913(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16913, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE434"))) PPC_WEAK_FUNC(sub_82AAE434);
PPC_FUNC_IMPL(__imp__sub_82AAE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE438"))) PPC_WEAK_FUNC(sub_82AAE438);
PPC_FUNC_IMPL(__imp__sub_82AAE438) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29516
	ctx.r4.s64 = ctx.r11.s64 + -29516;
	// bl 0x82316b80
	ctx.lr = 0x82AAE454;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16912(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16912, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE46C"))) PPC_WEAK_FUNC(sub_82AAE46C);
PPC_FUNC_IMPL(__imp__sub_82AAE46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE470"))) PPC_WEAK_FUNC(sub_82AAE470);
PPC_FUNC_IMPL(__imp__sub_82AAE470) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29512
	ctx.r4.s64 = ctx.r11.s64 + -29512;
	// bl 0x82316b80
	ctx.lr = 0x82AAE48C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16911(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16911, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE4A4"))) PPC_WEAK_FUNC(sub_82AAE4A4);
PPC_FUNC_IMPL(__imp__sub_82AAE4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE4A8"))) PPC_WEAK_FUNC(sub_82AAE4A8);
PPC_FUNC_IMPL(__imp__sub_82AAE4A8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29508
	ctx.r4.s64 = ctx.r11.s64 + -29508;
	// bl 0x82316b80
	ctx.lr = 0x82AAE4C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16910(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16910, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE4DC"))) PPC_WEAK_FUNC(sub_82AAE4DC);
PPC_FUNC_IMPL(__imp__sub_82AAE4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE4E0"))) PPC_WEAK_FUNC(sub_82AAE4E0);
PPC_FUNC_IMPL(__imp__sub_82AAE4E0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29504
	ctx.r4.s64 = ctx.r11.s64 + -29504;
	// bl 0x82316b80
	ctx.lr = 0x82AAE4FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16909(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16909, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE514"))) PPC_WEAK_FUNC(sub_82AAE514);
PPC_FUNC_IMPL(__imp__sub_82AAE514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE518"))) PPC_WEAK_FUNC(sub_82AAE518);
PPC_FUNC_IMPL(__imp__sub_82AAE518) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29500
	ctx.r4.s64 = ctx.r11.s64 + -29500;
	// bl 0x82316b80
	ctx.lr = 0x82AAE534;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16908(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16908, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE54C"))) PPC_WEAK_FUNC(sub_82AAE54C);
PPC_FUNC_IMPL(__imp__sub_82AAE54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE550"))) PPC_WEAK_FUNC(sub_82AAE550);
PPC_FUNC_IMPL(__imp__sub_82AAE550) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29496
	ctx.r4.s64 = ctx.r11.s64 + -29496;
	// bl 0x82316b80
	ctx.lr = 0x82AAE56C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16907(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16907, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE584"))) PPC_WEAK_FUNC(sub_82AAE584);
PPC_FUNC_IMPL(__imp__sub_82AAE584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE588"))) PPC_WEAK_FUNC(sub_82AAE588);
PPC_FUNC_IMPL(__imp__sub_82AAE588) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29492
	ctx.r4.s64 = ctx.r11.s64 + -29492;
	// bl 0x82316b80
	ctx.lr = 0x82AAE5A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16906(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16906, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE5BC"))) PPC_WEAK_FUNC(sub_82AAE5BC);
PPC_FUNC_IMPL(__imp__sub_82AAE5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE5C0"))) PPC_WEAK_FUNC(sub_82AAE5C0);
PPC_FUNC_IMPL(__imp__sub_82AAE5C0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29488
	ctx.r4.s64 = ctx.r11.s64 + -29488;
	// bl 0x82316b80
	ctx.lr = 0x82AAE5DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16905(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16905, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE5F4"))) PPC_WEAK_FUNC(sub_82AAE5F4);
PPC_FUNC_IMPL(__imp__sub_82AAE5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE5F8"))) PPC_WEAK_FUNC(sub_82AAE5F8);
PPC_FUNC_IMPL(__imp__sub_82AAE5F8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29484
	ctx.r4.s64 = ctx.r11.s64 + -29484;
	// bl 0x82316b80
	ctx.lr = 0x82AAE614;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16904(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16904, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE62C"))) PPC_WEAK_FUNC(sub_82AAE62C);
PPC_FUNC_IMPL(__imp__sub_82AAE62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE630"))) PPC_WEAK_FUNC(sub_82AAE630);
PPC_FUNC_IMPL(__imp__sub_82AAE630) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29480
	ctx.r4.s64 = ctx.r11.s64 + -29480;
	// bl 0x82316b80
	ctx.lr = 0x82AAE64C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16903(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16903, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE664"))) PPC_WEAK_FUNC(sub_82AAE664);
PPC_FUNC_IMPL(__imp__sub_82AAE664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE668"))) PPC_WEAK_FUNC(sub_82AAE668);
PPC_FUNC_IMPL(__imp__sub_82AAE668) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29476
	ctx.r4.s64 = ctx.r11.s64 + -29476;
	// bl 0x82316b80
	ctx.lr = 0x82AAE684;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16902(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16902, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE69C"))) PPC_WEAK_FUNC(sub_82AAE69C);
PPC_FUNC_IMPL(__imp__sub_82AAE69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE6A0"))) PPC_WEAK_FUNC(sub_82AAE6A0);
PPC_FUNC_IMPL(__imp__sub_82AAE6A0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29472
	ctx.r4.s64 = ctx.r11.s64 + -29472;
	// bl 0x82316b80
	ctx.lr = 0x82AAE6BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16901(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16901, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE6D4"))) PPC_WEAK_FUNC(sub_82AAE6D4);
PPC_FUNC_IMPL(__imp__sub_82AAE6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE6D8"))) PPC_WEAK_FUNC(sub_82AAE6D8);
PPC_FUNC_IMPL(__imp__sub_82AAE6D8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29468
	ctx.r4.s64 = ctx.r11.s64 + -29468;
	// bl 0x82316b80
	ctx.lr = 0x82AAE6F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16660(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16660, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE70C"))) PPC_WEAK_FUNC(sub_82AAE70C);
PPC_FUNC_IMPL(__imp__sub_82AAE70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE710"))) PPC_WEAK_FUNC(sub_82AAE710);
PPC_FUNC_IMPL(__imp__sub_82AAE710) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29464
	ctx.r4.s64 = ctx.r11.s64 + -29464;
	// bl 0x82316b80
	ctx.lr = 0x82AAE72C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16659(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16659, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE744"))) PPC_WEAK_FUNC(sub_82AAE744);
PPC_FUNC_IMPL(__imp__sub_82AAE744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE748"))) PPC_WEAK_FUNC(sub_82AAE748);
PPC_FUNC_IMPL(__imp__sub_82AAE748) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29460
	ctx.r4.s64 = ctx.r11.s64 + -29460;
	// bl 0x82316b80
	ctx.lr = 0x82AAE764;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16658(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16658, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE77C"))) PPC_WEAK_FUNC(sub_82AAE77C);
PPC_FUNC_IMPL(__imp__sub_82AAE77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE780"))) PPC_WEAK_FUNC(sub_82AAE780);
PPC_FUNC_IMPL(__imp__sub_82AAE780) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29456
	ctx.r4.s64 = ctx.r11.s64 + -29456;
	// bl 0x82316b80
	ctx.lr = 0x82AAE79C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16657(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16657, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE7B4"))) PPC_WEAK_FUNC(sub_82AAE7B4);
PPC_FUNC_IMPL(__imp__sub_82AAE7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE7B8"))) PPC_WEAK_FUNC(sub_82AAE7B8);
PPC_FUNC_IMPL(__imp__sub_82AAE7B8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29452
	ctx.r4.s64 = ctx.r11.s64 + -29452;
	// bl 0x82316b80
	ctx.lr = 0x82AAE7D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16656(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16656, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE7EC"))) PPC_WEAK_FUNC(sub_82AAE7EC);
PPC_FUNC_IMPL(__imp__sub_82AAE7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE7F0"))) PPC_WEAK_FUNC(sub_82AAE7F0);
PPC_FUNC_IMPL(__imp__sub_82AAE7F0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29448
	ctx.r4.s64 = ctx.r11.s64 + -29448;
	// bl 0x82316b80
	ctx.lr = 0x82AAE80C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16655(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16655, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE824"))) PPC_WEAK_FUNC(sub_82AAE824);
PPC_FUNC_IMPL(__imp__sub_82AAE824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE828"))) PPC_WEAK_FUNC(sub_82AAE828);
PPC_FUNC_IMPL(__imp__sub_82AAE828) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29444
	ctx.r4.s64 = ctx.r11.s64 + -29444;
	// bl 0x82316b80
	ctx.lr = 0x82AAE844;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16654(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16654, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE85C"))) PPC_WEAK_FUNC(sub_82AAE85C);
PPC_FUNC_IMPL(__imp__sub_82AAE85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE860"))) PPC_WEAK_FUNC(sub_82AAE860);
PPC_FUNC_IMPL(__imp__sub_82AAE860) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29440
	ctx.r4.s64 = ctx.r11.s64 + -29440;
	// bl 0x82316b80
	ctx.lr = 0x82AAE87C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16653(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16653, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE894"))) PPC_WEAK_FUNC(sub_82AAE894);
PPC_FUNC_IMPL(__imp__sub_82AAE894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE898"))) PPC_WEAK_FUNC(sub_82AAE898);
PPC_FUNC_IMPL(__imp__sub_82AAE898) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29436
	ctx.r4.s64 = ctx.r11.s64 + -29436;
	// bl 0x82316b80
	ctx.lr = 0x82AAE8B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16652(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16652, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE8CC"))) PPC_WEAK_FUNC(sub_82AAE8CC);
PPC_FUNC_IMPL(__imp__sub_82AAE8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE8D0"))) PPC_WEAK_FUNC(sub_82AAE8D0);
PPC_FUNC_IMPL(__imp__sub_82AAE8D0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29432
	ctx.r4.s64 = ctx.r11.s64 + -29432;
	// bl 0x82316b80
	ctx.lr = 0x82AAE8EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16651(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16651, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE904"))) PPC_WEAK_FUNC(sub_82AAE904);
PPC_FUNC_IMPL(__imp__sub_82AAE904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE908"))) PPC_WEAK_FUNC(sub_82AAE908);
PPC_FUNC_IMPL(__imp__sub_82AAE908) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29428
	ctx.r4.s64 = ctx.r11.s64 + -29428;
	// bl 0x82316b80
	ctx.lr = 0x82AAE924;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16650(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16650, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE93C"))) PPC_WEAK_FUNC(sub_82AAE93C);
PPC_FUNC_IMPL(__imp__sub_82AAE93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE940"))) PPC_WEAK_FUNC(sub_82AAE940);
PPC_FUNC_IMPL(__imp__sub_82AAE940) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29424
	ctx.r4.s64 = ctx.r11.s64 + -29424;
	// bl 0x82316b80
	ctx.lr = 0x82AAE95C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16649(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16649, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE974"))) PPC_WEAK_FUNC(sub_82AAE974);
PPC_FUNC_IMPL(__imp__sub_82AAE974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE978"))) PPC_WEAK_FUNC(sub_82AAE978);
PPC_FUNC_IMPL(__imp__sub_82AAE978) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29420
	ctx.r4.s64 = ctx.r11.s64 + -29420;
	// bl 0x82316b80
	ctx.lr = 0x82AAE994;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16648(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16648, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE9AC"))) PPC_WEAK_FUNC(sub_82AAE9AC);
PPC_FUNC_IMPL(__imp__sub_82AAE9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE9B0"))) PPC_WEAK_FUNC(sub_82AAE9B0);
PPC_FUNC_IMPL(__imp__sub_82AAE9B0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29416
	ctx.r4.s64 = ctx.r11.s64 + -29416;
	// bl 0x82316b80
	ctx.lr = 0x82AAE9CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16647(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16647, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAE9E4"))) PPC_WEAK_FUNC(sub_82AAE9E4);
PPC_FUNC_IMPL(__imp__sub_82AAE9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAE9E8"))) PPC_WEAK_FUNC(sub_82AAE9E8);
PPC_FUNC_IMPL(__imp__sub_82AAE9E8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29412
	ctx.r4.s64 = ctx.r11.s64 + -29412;
	// bl 0x82316b80
	ctx.lr = 0x82AAEA04;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16646(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16646, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEA1C"))) PPC_WEAK_FUNC(sub_82AAEA1C);
PPC_FUNC_IMPL(__imp__sub_82AAEA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEA20"))) PPC_WEAK_FUNC(sub_82AAEA20);
PPC_FUNC_IMPL(__imp__sub_82AAEA20) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29408
	ctx.r4.s64 = ctx.r11.s64 + -29408;
	// bl 0x82316b80
	ctx.lr = 0x82AAEA3C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16645(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16645, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEA54"))) PPC_WEAK_FUNC(sub_82AAEA54);
PPC_FUNC_IMPL(__imp__sub_82AAEA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEA58"))) PPC_WEAK_FUNC(sub_82AAEA58);
PPC_FUNC_IMPL(__imp__sub_82AAEA58) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29404
	ctx.r4.s64 = ctx.r11.s64 + -29404;
	// bl 0x82316b80
	ctx.lr = 0x82AAEA74;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16644(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16644, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEA8C"))) PPC_WEAK_FUNC(sub_82AAEA8C);
PPC_FUNC_IMPL(__imp__sub_82AAEA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEA90"))) PPC_WEAK_FUNC(sub_82AAEA90);
PPC_FUNC_IMPL(__imp__sub_82AAEA90) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29400
	ctx.r4.s64 = ctx.r11.s64 + -29400;
	// bl 0x82316b80
	ctx.lr = 0x82AAEAAC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16643(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16643, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEAC4"))) PPC_WEAK_FUNC(sub_82AAEAC4);
PPC_FUNC_IMPL(__imp__sub_82AAEAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEAC8"))) PPC_WEAK_FUNC(sub_82AAEAC8);
PPC_FUNC_IMPL(__imp__sub_82AAEAC8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29396
	ctx.r4.s64 = ctx.r11.s64 + -29396;
	// bl 0x82316b80
	ctx.lr = 0x82AAEAE4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16642(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16642, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEAFC"))) PPC_WEAK_FUNC(sub_82AAEAFC);
PPC_FUNC_IMPL(__imp__sub_82AAEAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEB00"))) PPC_WEAK_FUNC(sub_82AAEB00);
PPC_FUNC_IMPL(__imp__sub_82AAEB00) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29392
	ctx.r4.s64 = ctx.r11.s64 + -29392;
	// bl 0x82316b80
	ctx.lr = 0x82AAEB1C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16641(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16641, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEB34"))) PPC_WEAK_FUNC(sub_82AAEB34);
PPC_FUNC_IMPL(__imp__sub_82AAEB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEB38"))) PPC_WEAK_FUNC(sub_82AAEB38);
PPC_FUNC_IMPL(__imp__sub_82AAEB38) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29388
	ctx.r4.s64 = ctx.r11.s64 + -29388;
	// bl 0x82316b80
	ctx.lr = 0x82AAEB54;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16640(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16640, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEB6C"))) PPC_WEAK_FUNC(sub_82AAEB6C);
PPC_FUNC_IMPL(__imp__sub_82AAEB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEB70"))) PPC_WEAK_FUNC(sub_82AAEB70);
PPC_FUNC_IMPL(__imp__sub_82AAEB70) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29384
	ctx.r4.s64 = ctx.r11.s64 + -29384;
	// bl 0x82316b80
	ctx.lr = 0x82AAEB8C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16639(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16639, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEBA4"))) PPC_WEAK_FUNC(sub_82AAEBA4);
PPC_FUNC_IMPL(__imp__sub_82AAEBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEBA8"))) PPC_WEAK_FUNC(sub_82AAEBA8);
PPC_FUNC_IMPL(__imp__sub_82AAEBA8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29380
	ctx.r4.s64 = ctx.r11.s64 + -29380;
	// bl 0x82316b80
	ctx.lr = 0x82AAEBC4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16638(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16638, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEBDC"))) PPC_WEAK_FUNC(sub_82AAEBDC);
PPC_FUNC_IMPL(__imp__sub_82AAEBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEBE0"))) PPC_WEAK_FUNC(sub_82AAEBE0);
PPC_FUNC_IMPL(__imp__sub_82AAEBE0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29376
	ctx.r4.s64 = ctx.r11.s64 + -29376;
	// bl 0x82316b80
	ctx.lr = 0x82AAEBFC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16637(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16637, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEC14"))) PPC_WEAK_FUNC(sub_82AAEC14);
PPC_FUNC_IMPL(__imp__sub_82AAEC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEC18"))) PPC_WEAK_FUNC(sub_82AAEC18);
PPC_FUNC_IMPL(__imp__sub_82AAEC18) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29372
	ctx.r4.s64 = ctx.r11.s64 + -29372;
	// bl 0x82316b80
	ctx.lr = 0x82AAEC34;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16636(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16636, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEC4C"))) PPC_WEAK_FUNC(sub_82AAEC4C);
PPC_FUNC_IMPL(__imp__sub_82AAEC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEC50"))) PPC_WEAK_FUNC(sub_82AAEC50);
PPC_FUNC_IMPL(__imp__sub_82AAEC50) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29368
	ctx.r4.s64 = ctx.r11.s64 + -29368;
	// bl 0x82316b80
	ctx.lr = 0x82AAEC6C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16635(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16635, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEC84"))) PPC_WEAK_FUNC(sub_82AAEC84);
PPC_FUNC_IMPL(__imp__sub_82AAEC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEC88"))) PPC_WEAK_FUNC(sub_82AAEC88);
PPC_FUNC_IMPL(__imp__sub_82AAEC88) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29364
	ctx.r4.s64 = ctx.r11.s64 + -29364;
	// bl 0x82316b80
	ctx.lr = 0x82AAECA4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16634(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16634, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAECBC"))) PPC_WEAK_FUNC(sub_82AAECBC);
PPC_FUNC_IMPL(__imp__sub_82AAECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAECC0"))) PPC_WEAK_FUNC(sub_82AAECC0);
PPC_FUNC_IMPL(__imp__sub_82AAECC0) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29360
	ctx.r4.s64 = ctx.r11.s64 + -29360;
	// bl 0x82316b80
	ctx.lr = 0x82AAECDC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16633(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16633, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAECF4"))) PPC_WEAK_FUNC(sub_82AAECF4);
PPC_FUNC_IMPL(__imp__sub_82AAECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAECF8"))) PPC_WEAK_FUNC(sub_82AAECF8);
PPC_FUNC_IMPL(__imp__sub_82AAECF8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29356
	ctx.r4.s64 = ctx.r11.s64 + -29356;
	// bl 0x82316b80
	ctx.lr = 0x82AAED14;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16632(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16632, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAED2C"))) PPC_WEAK_FUNC(sub_82AAED2C);
PPC_FUNC_IMPL(__imp__sub_82AAED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAED30"))) PPC_WEAK_FUNC(sub_82AAED30);
PPC_FUNC_IMPL(__imp__sub_82AAED30) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29352
	ctx.r4.s64 = ctx.r11.s64 + -29352;
	// bl 0x82316b80
	ctx.lr = 0x82AAED4C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16631(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16631, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAED64"))) PPC_WEAK_FUNC(sub_82AAED64);
PPC_FUNC_IMPL(__imp__sub_82AAED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAED68"))) PPC_WEAK_FUNC(sub_82AAED68);
PPC_FUNC_IMPL(__imp__sub_82AAED68) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29348
	ctx.r4.s64 = ctx.r11.s64 + -29348;
	// bl 0x82316b80
	ctx.lr = 0x82AAED84;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16630(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16630, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAED9C"))) PPC_WEAK_FUNC(sub_82AAED9C);
PPC_FUNC_IMPL(__imp__sub_82AAED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

