#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AAEDA0"))) PPC_WEAK_FUNC(sub_82AAEDA0);
PPC_FUNC_IMPL(__imp__sub_82AAEDA0) {
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
	// addi r4,r11,-29344
	ctx.r4.s64 = ctx.r11.s64 + -29344;
	// bl 0x82316b80
	ctx.lr = 0x82AAEDBC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16629(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16629, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEDD4"))) PPC_WEAK_FUNC(sub_82AAEDD4);
PPC_FUNC_IMPL(__imp__sub_82AAEDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEDD8"))) PPC_WEAK_FUNC(sub_82AAEDD8);
PPC_FUNC_IMPL(__imp__sub_82AAEDD8) {
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
	// addi r4,r11,-29340
	ctx.r4.s64 = ctx.r11.s64 + -29340;
	// bl 0x82316b80
	ctx.lr = 0x82AAEDF4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16628(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16628, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEE0C"))) PPC_WEAK_FUNC(sub_82AAEE0C);
PPC_FUNC_IMPL(__imp__sub_82AAEE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEE10"))) PPC_WEAK_FUNC(sub_82AAEE10);
PPC_FUNC_IMPL(__imp__sub_82AAEE10) {
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
	// addi r4,r11,-29336
	ctx.r4.s64 = ctx.r11.s64 + -29336;
	// bl 0x82316b80
	ctx.lr = 0x82AAEE2C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16627(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16627, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEE44"))) PPC_WEAK_FUNC(sub_82AAEE44);
PPC_FUNC_IMPL(__imp__sub_82AAEE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEE48"))) PPC_WEAK_FUNC(sub_82AAEE48);
PPC_FUNC_IMPL(__imp__sub_82AAEE48) {
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
	// addi r4,r11,-29332
	ctx.r4.s64 = ctx.r11.s64 + -29332;
	// bl 0x82316b80
	ctx.lr = 0x82AAEE64;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16626(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16626, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEE7C"))) PPC_WEAK_FUNC(sub_82AAEE7C);
PPC_FUNC_IMPL(__imp__sub_82AAEE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEE80"))) PPC_WEAK_FUNC(sub_82AAEE80);
PPC_FUNC_IMPL(__imp__sub_82AAEE80) {
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
	// addi r4,r11,-29328
	ctx.r4.s64 = ctx.r11.s64 + -29328;
	// bl 0x82316b80
	ctx.lr = 0x82AAEE9C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16625(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16625, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEEB4"))) PPC_WEAK_FUNC(sub_82AAEEB4);
PPC_FUNC_IMPL(__imp__sub_82AAEEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEEB8"))) PPC_WEAK_FUNC(sub_82AAEEB8);
PPC_FUNC_IMPL(__imp__sub_82AAEEB8) {
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
	// addi r4,r11,-29324
	ctx.r4.s64 = ctx.r11.s64 + -29324;
	// bl 0x82316b80
	ctx.lr = 0x82AAEED4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16624(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16624, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEEEC"))) PPC_WEAK_FUNC(sub_82AAEEEC);
PPC_FUNC_IMPL(__imp__sub_82AAEEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEEF0"))) PPC_WEAK_FUNC(sub_82AAEEF0);
PPC_FUNC_IMPL(__imp__sub_82AAEEF0) {
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
	// addi r4,r11,-29320
	ctx.r4.s64 = ctx.r11.s64 + -29320;
	// bl 0x82316b80
	ctx.lr = 0x82AAEF0C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16623(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16623, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEF24"))) PPC_WEAK_FUNC(sub_82AAEF24);
PPC_FUNC_IMPL(__imp__sub_82AAEF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEF28"))) PPC_WEAK_FUNC(sub_82AAEF28);
PPC_FUNC_IMPL(__imp__sub_82AAEF28) {
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
	// addi r4,r11,-29316
	ctx.r4.s64 = ctx.r11.s64 + -29316;
	// bl 0x82316b80
	ctx.lr = 0x82AAEF44;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16622(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16622, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEF5C"))) PPC_WEAK_FUNC(sub_82AAEF5C);
PPC_FUNC_IMPL(__imp__sub_82AAEF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEF60"))) PPC_WEAK_FUNC(sub_82AAEF60);
PPC_FUNC_IMPL(__imp__sub_82AAEF60) {
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
	// addi r4,r11,-29312
	ctx.r4.s64 = ctx.r11.s64 + -29312;
	// bl 0x82316b80
	ctx.lr = 0x82AAEF7C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16621(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16621, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEF94"))) PPC_WEAK_FUNC(sub_82AAEF94);
PPC_FUNC_IMPL(__imp__sub_82AAEF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEF98"))) PPC_WEAK_FUNC(sub_82AAEF98);
PPC_FUNC_IMPL(__imp__sub_82AAEF98) {
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
	// addi r4,r11,-29308
	ctx.r4.s64 = ctx.r11.s64 + -29308;
	// bl 0x82316b80
	ctx.lr = 0x82AAEFB4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16620(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16620, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAEFCC"))) PPC_WEAK_FUNC(sub_82AAEFCC);
PPC_FUNC_IMPL(__imp__sub_82AAEFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAEFD0"))) PPC_WEAK_FUNC(sub_82AAEFD0);
PPC_FUNC_IMPL(__imp__sub_82AAEFD0) {
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
	// addi r4,r11,-29304
	ctx.r4.s64 = ctx.r11.s64 + -29304;
	// bl 0x82316b80
	ctx.lr = 0x82AAEFEC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16619(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16619, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF004"))) PPC_WEAK_FUNC(sub_82AAF004);
PPC_FUNC_IMPL(__imp__sub_82AAF004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF008"))) PPC_WEAK_FUNC(sub_82AAF008);
PPC_FUNC_IMPL(__imp__sub_82AAF008) {
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
	// addi r4,r11,-29300
	ctx.r4.s64 = ctx.r11.s64 + -29300;
	// bl 0x82316b80
	ctx.lr = 0x82AAF024;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16618(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16618, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF03C"))) PPC_WEAK_FUNC(sub_82AAF03C);
PPC_FUNC_IMPL(__imp__sub_82AAF03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF040"))) PPC_WEAK_FUNC(sub_82AAF040);
PPC_FUNC_IMPL(__imp__sub_82AAF040) {
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
	// addi r4,r11,-29296
	ctx.r4.s64 = ctx.r11.s64 + -29296;
	// bl 0x82316b80
	ctx.lr = 0x82AAF05C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16617(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16617, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF074"))) PPC_WEAK_FUNC(sub_82AAF074);
PPC_FUNC_IMPL(__imp__sub_82AAF074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF078"))) PPC_WEAK_FUNC(sub_82AAF078);
PPC_FUNC_IMPL(__imp__sub_82AAF078) {
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
	// addi r4,r11,-29292
	ctx.r4.s64 = ctx.r11.s64 + -29292;
	// bl 0x82316b80
	ctx.lr = 0x82AAF094;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16616(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16616, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF0AC"))) PPC_WEAK_FUNC(sub_82AAF0AC);
PPC_FUNC_IMPL(__imp__sub_82AAF0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF0B0"))) PPC_WEAK_FUNC(sub_82AAF0B0);
PPC_FUNC_IMPL(__imp__sub_82AAF0B0) {
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
	// addi r4,r11,-29288
	ctx.r4.s64 = ctx.r11.s64 + -29288;
	// bl 0x82316b80
	ctx.lr = 0x82AAF0CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16615(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16615, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF0E4"))) PPC_WEAK_FUNC(sub_82AAF0E4);
PPC_FUNC_IMPL(__imp__sub_82AAF0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF0E8"))) PPC_WEAK_FUNC(sub_82AAF0E8);
PPC_FUNC_IMPL(__imp__sub_82AAF0E8) {
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
	// addi r4,r11,-29284
	ctx.r4.s64 = ctx.r11.s64 + -29284;
	// bl 0x82316b80
	ctx.lr = 0x82AAF104;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16614(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16614, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF11C"))) PPC_WEAK_FUNC(sub_82AAF11C);
PPC_FUNC_IMPL(__imp__sub_82AAF11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF120"))) PPC_WEAK_FUNC(sub_82AAF120);
PPC_FUNC_IMPL(__imp__sub_82AAF120) {
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
	// addi r4,r11,-29280
	ctx.r4.s64 = ctx.r11.s64 + -29280;
	// bl 0x82316b80
	ctx.lr = 0x82AAF13C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16613(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16613, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF154"))) PPC_WEAK_FUNC(sub_82AAF154);
PPC_FUNC_IMPL(__imp__sub_82AAF154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF158"))) PPC_WEAK_FUNC(sub_82AAF158);
PPC_FUNC_IMPL(__imp__sub_82AAF158) {
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
	// addi r4,r11,-29276
	ctx.r4.s64 = ctx.r11.s64 + -29276;
	// bl 0x82316b80
	ctx.lr = 0x82AAF174;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16612(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16612, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF18C"))) PPC_WEAK_FUNC(sub_82AAF18C);
PPC_FUNC_IMPL(__imp__sub_82AAF18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF190"))) PPC_WEAK_FUNC(sub_82AAF190);
PPC_FUNC_IMPL(__imp__sub_82AAF190) {
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
	// addi r4,r11,-29272
	ctx.r4.s64 = ctx.r11.s64 + -29272;
	// bl 0x82316b80
	ctx.lr = 0x82AAF1AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16611(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16611, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF1C4"))) PPC_WEAK_FUNC(sub_82AAF1C4);
PPC_FUNC_IMPL(__imp__sub_82AAF1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF1C8"))) PPC_WEAK_FUNC(sub_82AAF1C8);
PPC_FUNC_IMPL(__imp__sub_82AAF1C8) {
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
	// addi r4,r11,-29268
	ctx.r4.s64 = ctx.r11.s64 + -29268;
	// bl 0x82316b80
	ctx.lr = 0x82AAF1E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16610(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16610, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF1FC"))) PPC_WEAK_FUNC(sub_82AAF1FC);
PPC_FUNC_IMPL(__imp__sub_82AAF1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF200"))) PPC_WEAK_FUNC(sub_82AAF200);
PPC_FUNC_IMPL(__imp__sub_82AAF200) {
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
	// addi r4,r11,-29264
	ctx.r4.s64 = ctx.r11.s64 + -29264;
	// bl 0x82316b80
	ctx.lr = 0x82AAF21C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16609(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16609, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF234"))) PPC_WEAK_FUNC(sub_82AAF234);
PPC_FUNC_IMPL(__imp__sub_82AAF234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF238"))) PPC_WEAK_FUNC(sub_82AAF238);
PPC_FUNC_IMPL(__imp__sub_82AAF238) {
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
	// addi r4,r11,-29260
	ctx.r4.s64 = ctx.r11.s64 + -29260;
	// bl 0x82316b80
	ctx.lr = 0x82AAF254;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16608(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16608, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF26C"))) PPC_WEAK_FUNC(sub_82AAF26C);
PPC_FUNC_IMPL(__imp__sub_82AAF26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF270"))) PPC_WEAK_FUNC(sub_82AAF270);
PPC_FUNC_IMPL(__imp__sub_82AAF270) {
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
	// addi r4,r11,-29256
	ctx.r4.s64 = ctx.r11.s64 + -29256;
	// bl 0x82316b80
	ctx.lr = 0x82AAF28C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16607(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16607, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF2A4"))) PPC_WEAK_FUNC(sub_82AAF2A4);
PPC_FUNC_IMPL(__imp__sub_82AAF2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF2A8"))) PPC_WEAK_FUNC(sub_82AAF2A8);
PPC_FUNC_IMPL(__imp__sub_82AAF2A8) {
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
	// addi r4,r11,-29252
	ctx.r4.s64 = ctx.r11.s64 + -29252;
	// bl 0x82316b80
	ctx.lr = 0x82AAF2C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16606(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16606, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF2DC"))) PPC_WEAK_FUNC(sub_82AAF2DC);
PPC_FUNC_IMPL(__imp__sub_82AAF2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF2E0"))) PPC_WEAK_FUNC(sub_82AAF2E0);
PPC_FUNC_IMPL(__imp__sub_82AAF2E0) {
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
	// addi r4,r11,-29248
	ctx.r4.s64 = ctx.r11.s64 + -29248;
	// bl 0x82316b80
	ctx.lr = 0x82AAF2FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16605(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16605, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF314"))) PPC_WEAK_FUNC(sub_82AAF314);
PPC_FUNC_IMPL(__imp__sub_82AAF314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF318"))) PPC_WEAK_FUNC(sub_82AAF318);
PPC_FUNC_IMPL(__imp__sub_82AAF318) {
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
	// addi r4,r11,-29244
	ctx.r4.s64 = ctx.r11.s64 + -29244;
	// bl 0x82316b80
	ctx.lr = 0x82AAF334;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16604(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16604, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF34C"))) PPC_WEAK_FUNC(sub_82AAF34C);
PPC_FUNC_IMPL(__imp__sub_82AAF34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF350"))) PPC_WEAK_FUNC(sub_82AAF350);
PPC_FUNC_IMPL(__imp__sub_82AAF350) {
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
	// addi r4,r11,-29240
	ctx.r4.s64 = ctx.r11.s64 + -29240;
	// bl 0x82316b80
	ctx.lr = 0x82AAF36C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16603(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16603, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF384"))) PPC_WEAK_FUNC(sub_82AAF384);
PPC_FUNC_IMPL(__imp__sub_82AAF384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF388"))) PPC_WEAK_FUNC(sub_82AAF388);
PPC_FUNC_IMPL(__imp__sub_82AAF388) {
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
	// addi r4,r11,-29236
	ctx.r4.s64 = ctx.r11.s64 + -29236;
	// bl 0x82316b80
	ctx.lr = 0x82AAF3A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16602(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16602, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF3BC"))) PPC_WEAK_FUNC(sub_82AAF3BC);
PPC_FUNC_IMPL(__imp__sub_82AAF3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF3C0"))) PPC_WEAK_FUNC(sub_82AAF3C0);
PPC_FUNC_IMPL(__imp__sub_82AAF3C0) {
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
	// addi r4,r11,-29232
	ctx.r4.s64 = ctx.r11.s64 + -29232;
	// bl 0x82316b80
	ctx.lr = 0x82AAF3DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16601(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16601, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF3F4"))) PPC_WEAK_FUNC(sub_82AAF3F4);
PPC_FUNC_IMPL(__imp__sub_82AAF3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF3F8"))) PPC_WEAK_FUNC(sub_82AAF3F8);
PPC_FUNC_IMPL(__imp__sub_82AAF3F8) {
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
	// addi r4,r11,-29228
	ctx.r4.s64 = ctx.r11.s64 + -29228;
	// bl 0x82316b80
	ctx.lr = 0x82AAF414;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16600(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16600, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF42C"))) PPC_WEAK_FUNC(sub_82AAF42C);
PPC_FUNC_IMPL(__imp__sub_82AAF42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF430"))) PPC_WEAK_FUNC(sub_82AAF430);
PPC_FUNC_IMPL(__imp__sub_82AAF430) {
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
	// addi r4,r11,-29224
	ctx.r4.s64 = ctx.r11.s64 + -29224;
	// bl 0x82316b80
	ctx.lr = 0x82AAF44C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16599(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16599, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF464"))) PPC_WEAK_FUNC(sub_82AAF464);
PPC_FUNC_IMPL(__imp__sub_82AAF464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF468"))) PPC_WEAK_FUNC(sub_82AAF468);
PPC_FUNC_IMPL(__imp__sub_82AAF468) {
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
	// addi r4,r11,-29220
	ctx.r4.s64 = ctx.r11.s64 + -29220;
	// bl 0x82316b80
	ctx.lr = 0x82AAF484;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16598(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16598, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF49C"))) PPC_WEAK_FUNC(sub_82AAF49C);
PPC_FUNC_IMPL(__imp__sub_82AAF49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF4A0"))) PPC_WEAK_FUNC(sub_82AAF4A0);
PPC_FUNC_IMPL(__imp__sub_82AAF4A0) {
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
	// addi r4,r11,-29216
	ctx.r4.s64 = ctx.r11.s64 + -29216;
	// bl 0x82316b80
	ctx.lr = 0x82AAF4BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16597(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16597, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF4D4"))) PPC_WEAK_FUNC(sub_82AAF4D4);
PPC_FUNC_IMPL(__imp__sub_82AAF4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF4D8"))) PPC_WEAK_FUNC(sub_82AAF4D8);
PPC_FUNC_IMPL(__imp__sub_82AAF4D8) {
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
	// addi r4,r11,-29212
	ctx.r4.s64 = ctx.r11.s64 + -29212;
	// bl 0x82316b80
	ctx.lr = 0x82AAF4F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16596(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16596, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF50C"))) PPC_WEAK_FUNC(sub_82AAF50C);
PPC_FUNC_IMPL(__imp__sub_82AAF50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF510"))) PPC_WEAK_FUNC(sub_82AAF510);
PPC_FUNC_IMPL(__imp__sub_82AAF510) {
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
	// addi r4,r11,-29208
	ctx.r4.s64 = ctx.r11.s64 + -29208;
	// bl 0x82316b80
	ctx.lr = 0x82AAF52C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16595(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16595, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF544"))) PPC_WEAK_FUNC(sub_82AAF544);
PPC_FUNC_IMPL(__imp__sub_82AAF544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF548"))) PPC_WEAK_FUNC(sub_82AAF548);
PPC_FUNC_IMPL(__imp__sub_82AAF548) {
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
	// addi r4,r11,-29204
	ctx.r4.s64 = ctx.r11.s64 + -29204;
	// bl 0x82316b80
	ctx.lr = 0x82AAF564;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16594(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16594, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF57C"))) PPC_WEAK_FUNC(sub_82AAF57C);
PPC_FUNC_IMPL(__imp__sub_82AAF57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF580"))) PPC_WEAK_FUNC(sub_82AAF580);
PPC_FUNC_IMPL(__imp__sub_82AAF580) {
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
	// addi r4,r11,-29200
	ctx.r4.s64 = ctx.r11.s64 + -29200;
	// bl 0x82316b80
	ctx.lr = 0x82AAF59C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16593(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16593, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF5B4"))) PPC_WEAK_FUNC(sub_82AAF5B4);
PPC_FUNC_IMPL(__imp__sub_82AAF5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF5B8"))) PPC_WEAK_FUNC(sub_82AAF5B8);
PPC_FUNC_IMPL(__imp__sub_82AAF5B8) {
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
	// addi r4,r11,-29196
	ctx.r4.s64 = ctx.r11.s64 + -29196;
	// bl 0x82316b80
	ctx.lr = 0x82AAF5D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16592(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16592, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF5EC"))) PPC_WEAK_FUNC(sub_82AAF5EC);
PPC_FUNC_IMPL(__imp__sub_82AAF5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF5F0"))) PPC_WEAK_FUNC(sub_82AAF5F0);
PPC_FUNC_IMPL(__imp__sub_82AAF5F0) {
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
	// addi r4,r11,-29192
	ctx.r4.s64 = ctx.r11.s64 + -29192;
	// bl 0x82316b80
	ctx.lr = 0x82AAF60C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16591(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16591, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF624"))) PPC_WEAK_FUNC(sub_82AAF624);
PPC_FUNC_IMPL(__imp__sub_82AAF624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF628"))) PPC_WEAK_FUNC(sub_82AAF628);
PPC_FUNC_IMPL(__imp__sub_82AAF628) {
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
	// addi r4,r11,-29188
	ctx.r4.s64 = ctx.r11.s64 + -29188;
	// bl 0x82316b80
	ctx.lr = 0x82AAF644;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16590(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16590, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF65C"))) PPC_WEAK_FUNC(sub_82AAF65C);
PPC_FUNC_IMPL(__imp__sub_82AAF65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF660"))) PPC_WEAK_FUNC(sub_82AAF660);
PPC_FUNC_IMPL(__imp__sub_82AAF660) {
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
	// addi r4,r11,-29184
	ctx.r4.s64 = ctx.r11.s64 + -29184;
	// bl 0x82316b80
	ctx.lr = 0x82AAF67C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16589(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16589, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF694"))) PPC_WEAK_FUNC(sub_82AAF694);
PPC_FUNC_IMPL(__imp__sub_82AAF694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF698"))) PPC_WEAK_FUNC(sub_82AAF698);
PPC_FUNC_IMPL(__imp__sub_82AAF698) {
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
	// addi r4,r11,-29180
	ctx.r4.s64 = ctx.r11.s64 + -29180;
	// bl 0x82316b80
	ctx.lr = 0x82AAF6B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16588(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16588, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF6CC"))) PPC_WEAK_FUNC(sub_82AAF6CC);
PPC_FUNC_IMPL(__imp__sub_82AAF6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF6D0"))) PPC_WEAK_FUNC(sub_82AAF6D0);
PPC_FUNC_IMPL(__imp__sub_82AAF6D0) {
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
	// addi r4,r11,-29176
	ctx.r4.s64 = ctx.r11.s64 + -29176;
	// bl 0x82316b80
	ctx.lr = 0x82AAF6EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16587(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16587, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF704"))) PPC_WEAK_FUNC(sub_82AAF704);
PPC_FUNC_IMPL(__imp__sub_82AAF704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF708"))) PPC_WEAK_FUNC(sub_82AAF708);
PPC_FUNC_IMPL(__imp__sub_82AAF708) {
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
	// addi r4,r11,-29172
	ctx.r4.s64 = ctx.r11.s64 + -29172;
	// bl 0x82316b80
	ctx.lr = 0x82AAF724;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16586(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16586, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF73C"))) PPC_WEAK_FUNC(sub_82AAF73C);
PPC_FUNC_IMPL(__imp__sub_82AAF73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF740"))) PPC_WEAK_FUNC(sub_82AAF740);
PPC_FUNC_IMPL(__imp__sub_82AAF740) {
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
	// addi r4,r11,-29168
	ctx.r4.s64 = ctx.r11.s64 + -29168;
	// bl 0x82316b80
	ctx.lr = 0x82AAF75C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16585(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16585, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF774"))) PPC_WEAK_FUNC(sub_82AAF774);
PPC_FUNC_IMPL(__imp__sub_82AAF774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF778"))) PPC_WEAK_FUNC(sub_82AAF778);
PPC_FUNC_IMPL(__imp__sub_82AAF778) {
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
	// addi r4,r11,-29164
	ctx.r4.s64 = ctx.r11.s64 + -29164;
	// bl 0x82316b80
	ctx.lr = 0x82AAF794;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16584(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16584, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF7AC"))) PPC_WEAK_FUNC(sub_82AAF7AC);
PPC_FUNC_IMPL(__imp__sub_82AAF7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF7B0"))) PPC_WEAK_FUNC(sub_82AAF7B0);
PPC_FUNC_IMPL(__imp__sub_82AAF7B0) {
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
	// addi r4,r11,-29160
	ctx.r4.s64 = ctx.r11.s64 + -29160;
	// bl 0x82316b80
	ctx.lr = 0x82AAF7CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16583(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16583, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF7E4"))) PPC_WEAK_FUNC(sub_82AAF7E4);
PPC_FUNC_IMPL(__imp__sub_82AAF7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF7E8"))) PPC_WEAK_FUNC(sub_82AAF7E8);
PPC_FUNC_IMPL(__imp__sub_82AAF7E8) {
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
	// addi r4,r11,-29156
	ctx.r4.s64 = ctx.r11.s64 + -29156;
	// bl 0x82316b80
	ctx.lr = 0x82AAF804;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16582(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16582, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF81C"))) PPC_WEAK_FUNC(sub_82AAF81C);
PPC_FUNC_IMPL(__imp__sub_82AAF81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF820"))) PPC_WEAK_FUNC(sub_82AAF820);
PPC_FUNC_IMPL(__imp__sub_82AAF820) {
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
	// addi r4,r11,-29152
	ctx.r4.s64 = ctx.r11.s64 + -29152;
	// bl 0x82316b80
	ctx.lr = 0x82AAF83C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16581(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16581, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF854"))) PPC_WEAK_FUNC(sub_82AAF854);
PPC_FUNC_IMPL(__imp__sub_82AAF854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF858"))) PPC_WEAK_FUNC(sub_82AAF858);
PPC_FUNC_IMPL(__imp__sub_82AAF858) {
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
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// bl 0x82316b80
	ctx.lr = 0x82AAF874;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16580(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16580, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF88C"))) PPC_WEAK_FUNC(sub_82AAF88C);
PPC_FUNC_IMPL(__imp__sub_82AAF88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF890"))) PPC_WEAK_FUNC(sub_82AAF890);
PPC_FUNC_IMPL(__imp__sub_82AAF890) {
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
	// addi r4,r11,-29144
	ctx.r4.s64 = ctx.r11.s64 + -29144;
	// bl 0x82316b80
	ctx.lr = 0x82AAF8AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16579(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16579, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF8C4"))) PPC_WEAK_FUNC(sub_82AAF8C4);
PPC_FUNC_IMPL(__imp__sub_82AAF8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF8C8"))) PPC_WEAK_FUNC(sub_82AAF8C8);
PPC_FUNC_IMPL(__imp__sub_82AAF8C8) {
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
	// addi r4,r11,-29140
	ctx.r4.s64 = ctx.r11.s64 + -29140;
	// bl 0x82316b80
	ctx.lr = 0x82AAF8E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16578(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16578, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF8FC"))) PPC_WEAK_FUNC(sub_82AAF8FC);
PPC_FUNC_IMPL(__imp__sub_82AAF8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF900"))) PPC_WEAK_FUNC(sub_82AAF900);
PPC_FUNC_IMPL(__imp__sub_82AAF900) {
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
	// addi r4,r11,-29136
	ctx.r4.s64 = ctx.r11.s64 + -29136;
	// bl 0x82316b80
	ctx.lr = 0x82AAF91C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16577(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16577, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF934"))) PPC_WEAK_FUNC(sub_82AAF934);
PPC_FUNC_IMPL(__imp__sub_82AAF934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF938"))) PPC_WEAK_FUNC(sub_82AAF938);
PPC_FUNC_IMPL(__imp__sub_82AAF938) {
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
	// addi r4,r11,-29132
	ctx.r4.s64 = ctx.r11.s64 + -29132;
	// bl 0x82316b80
	ctx.lr = 0x82AAF954;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16576(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16576, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF96C"))) PPC_WEAK_FUNC(sub_82AAF96C);
PPC_FUNC_IMPL(__imp__sub_82AAF96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF970"))) PPC_WEAK_FUNC(sub_82AAF970);
PPC_FUNC_IMPL(__imp__sub_82AAF970) {
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
	// addi r4,r11,-29128
	ctx.r4.s64 = ctx.r11.s64 + -29128;
	// bl 0x82316b80
	ctx.lr = 0x82AAF98C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16575(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16575, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF9A4"))) PPC_WEAK_FUNC(sub_82AAF9A4);
PPC_FUNC_IMPL(__imp__sub_82AAF9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF9A8"))) PPC_WEAK_FUNC(sub_82AAF9A8);
PPC_FUNC_IMPL(__imp__sub_82AAF9A8) {
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
	// addi r4,r11,-29124
	ctx.r4.s64 = ctx.r11.s64 + -29124;
	// bl 0x82316b80
	ctx.lr = 0x82AAF9C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16574(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16574, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAF9DC"))) PPC_WEAK_FUNC(sub_82AAF9DC);
PPC_FUNC_IMPL(__imp__sub_82AAF9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAF9E0"))) PPC_WEAK_FUNC(sub_82AAF9E0);
PPC_FUNC_IMPL(__imp__sub_82AAF9E0) {
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
	// addi r4,r11,-29120
	ctx.r4.s64 = ctx.r11.s64 + -29120;
	// bl 0x82316b80
	ctx.lr = 0x82AAF9FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16573(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16573, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFA14"))) PPC_WEAK_FUNC(sub_82AAFA14);
PPC_FUNC_IMPL(__imp__sub_82AAFA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFA18"))) PPC_WEAK_FUNC(sub_82AAFA18);
PPC_FUNC_IMPL(__imp__sub_82AAFA18) {
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
	// addi r4,r11,-29116
	ctx.r4.s64 = ctx.r11.s64 + -29116;
	// bl 0x82316b80
	ctx.lr = 0x82AAFA34;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16572(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16572, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFA4C"))) PPC_WEAK_FUNC(sub_82AAFA4C);
PPC_FUNC_IMPL(__imp__sub_82AAFA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFA50"))) PPC_WEAK_FUNC(sub_82AAFA50);
PPC_FUNC_IMPL(__imp__sub_82AAFA50) {
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
	// addi r4,r11,-29112
	ctx.r4.s64 = ctx.r11.s64 + -29112;
	// bl 0x82316b80
	ctx.lr = 0x82AAFA6C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16571(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16571, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFA84"))) PPC_WEAK_FUNC(sub_82AAFA84);
PPC_FUNC_IMPL(__imp__sub_82AAFA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFA88"))) PPC_WEAK_FUNC(sub_82AAFA88);
PPC_FUNC_IMPL(__imp__sub_82AAFA88) {
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
	// addi r4,r11,-29108
	ctx.r4.s64 = ctx.r11.s64 + -29108;
	// bl 0x82316b80
	ctx.lr = 0x82AAFAA4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16570(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16570, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFABC"))) PPC_WEAK_FUNC(sub_82AAFABC);
PPC_FUNC_IMPL(__imp__sub_82AAFABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFAC0"))) PPC_WEAK_FUNC(sub_82AAFAC0);
PPC_FUNC_IMPL(__imp__sub_82AAFAC0) {
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
	// addi r4,r11,-29104
	ctx.r4.s64 = ctx.r11.s64 + -29104;
	// bl 0x82316b80
	ctx.lr = 0x82AAFADC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16569(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16569, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFAF4"))) PPC_WEAK_FUNC(sub_82AAFAF4);
PPC_FUNC_IMPL(__imp__sub_82AAFAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFAF8"))) PPC_WEAK_FUNC(sub_82AAFAF8);
PPC_FUNC_IMPL(__imp__sub_82AAFAF8) {
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
	// addi r4,r11,-29100
	ctx.r4.s64 = ctx.r11.s64 + -29100;
	// bl 0x82316b80
	ctx.lr = 0x82AAFB14;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16568(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16568, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFB2C"))) PPC_WEAK_FUNC(sub_82AAFB2C);
PPC_FUNC_IMPL(__imp__sub_82AAFB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFB30"))) PPC_WEAK_FUNC(sub_82AAFB30);
PPC_FUNC_IMPL(__imp__sub_82AAFB30) {
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
	// addi r4,r11,-29096
	ctx.r4.s64 = ctx.r11.s64 + -29096;
	// bl 0x82316b80
	ctx.lr = 0x82AAFB4C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16567(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16567, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFB64"))) PPC_WEAK_FUNC(sub_82AAFB64);
PPC_FUNC_IMPL(__imp__sub_82AAFB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFB68"))) PPC_WEAK_FUNC(sub_82AAFB68);
PPC_FUNC_IMPL(__imp__sub_82AAFB68) {
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
	// addi r4,r11,-29092
	ctx.r4.s64 = ctx.r11.s64 + -29092;
	// bl 0x82316b80
	ctx.lr = 0x82AAFB84;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16566(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16566, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFB9C"))) PPC_WEAK_FUNC(sub_82AAFB9C);
PPC_FUNC_IMPL(__imp__sub_82AAFB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFBA0"))) PPC_WEAK_FUNC(sub_82AAFBA0);
PPC_FUNC_IMPL(__imp__sub_82AAFBA0) {
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
	// addi r4,r11,-29088
	ctx.r4.s64 = ctx.r11.s64 + -29088;
	// bl 0x82316b80
	ctx.lr = 0x82AAFBBC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16565(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16565, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFBD4"))) PPC_WEAK_FUNC(sub_82AAFBD4);
PPC_FUNC_IMPL(__imp__sub_82AAFBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFBD8"))) PPC_WEAK_FUNC(sub_82AAFBD8);
PPC_FUNC_IMPL(__imp__sub_82AAFBD8) {
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
	// addi r4,r11,-29084
	ctx.r4.s64 = ctx.r11.s64 + -29084;
	// bl 0x82316b80
	ctx.lr = 0x82AAFBF4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16276(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16276, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFC0C"))) PPC_WEAK_FUNC(sub_82AAFC0C);
PPC_FUNC_IMPL(__imp__sub_82AAFC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFC10"))) PPC_WEAK_FUNC(sub_82AAFC10);
PPC_FUNC_IMPL(__imp__sub_82AAFC10) {
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
	// addi r4,r11,-29080
	ctx.r4.s64 = ctx.r11.s64 + -29080;
	// bl 0x82316b80
	ctx.lr = 0x82AAFC2C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16275(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16275, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFC44"))) PPC_WEAK_FUNC(sub_82AAFC44);
PPC_FUNC_IMPL(__imp__sub_82AAFC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFC48"))) PPC_WEAK_FUNC(sub_82AAFC48);
PPC_FUNC_IMPL(__imp__sub_82AAFC48) {
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
	// addi r4,r11,-29076
	ctx.r4.s64 = ctx.r11.s64 + -29076;
	// bl 0x82316b80
	ctx.lr = 0x82AAFC64;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16274(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16274, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFC7C"))) PPC_WEAK_FUNC(sub_82AAFC7C);
PPC_FUNC_IMPL(__imp__sub_82AAFC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFC80"))) PPC_WEAK_FUNC(sub_82AAFC80);
PPC_FUNC_IMPL(__imp__sub_82AAFC80) {
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
	// addi r4,r11,-29072
	ctx.r4.s64 = ctx.r11.s64 + -29072;
	// bl 0x82316b80
	ctx.lr = 0x82AAFC9C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16273(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16273, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFCB4"))) PPC_WEAK_FUNC(sub_82AAFCB4);
PPC_FUNC_IMPL(__imp__sub_82AAFCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFCB8"))) PPC_WEAK_FUNC(sub_82AAFCB8);
PPC_FUNC_IMPL(__imp__sub_82AAFCB8) {
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
	// addi r4,r11,-29068
	ctx.r4.s64 = ctx.r11.s64 + -29068;
	// bl 0x82316b80
	ctx.lr = 0x82AAFCD4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16272(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16272, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFCEC"))) PPC_WEAK_FUNC(sub_82AAFCEC);
PPC_FUNC_IMPL(__imp__sub_82AAFCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFCF0"))) PPC_WEAK_FUNC(sub_82AAFCF0);
PPC_FUNC_IMPL(__imp__sub_82AAFCF0) {
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
	// addi r4,r11,-29064
	ctx.r4.s64 = ctx.r11.s64 + -29064;
	// bl 0x82316b80
	ctx.lr = 0x82AAFD0C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16271(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16271, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFD24"))) PPC_WEAK_FUNC(sub_82AAFD24);
PPC_FUNC_IMPL(__imp__sub_82AAFD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFD28"))) PPC_WEAK_FUNC(sub_82AAFD28);
PPC_FUNC_IMPL(__imp__sub_82AAFD28) {
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
	// addi r4,r11,-29060
	ctx.r4.s64 = ctx.r11.s64 + -29060;
	// bl 0x82316b80
	ctx.lr = 0x82AAFD44;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16270(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16270, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFD5C"))) PPC_WEAK_FUNC(sub_82AAFD5C);
PPC_FUNC_IMPL(__imp__sub_82AAFD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFD60"))) PPC_WEAK_FUNC(sub_82AAFD60);
PPC_FUNC_IMPL(__imp__sub_82AAFD60) {
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
	// addi r4,r11,-29056
	ctx.r4.s64 = ctx.r11.s64 + -29056;
	// bl 0x82316b80
	ctx.lr = 0x82AAFD7C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16269(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16269, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFD94"))) PPC_WEAK_FUNC(sub_82AAFD94);
PPC_FUNC_IMPL(__imp__sub_82AAFD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFD98"))) PPC_WEAK_FUNC(sub_82AAFD98);
PPC_FUNC_IMPL(__imp__sub_82AAFD98) {
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
	// addi r4,r11,-29052
	ctx.r4.s64 = ctx.r11.s64 + -29052;
	// bl 0x82316b80
	ctx.lr = 0x82AAFDB4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16268(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16268, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFDCC"))) PPC_WEAK_FUNC(sub_82AAFDCC);
PPC_FUNC_IMPL(__imp__sub_82AAFDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFDD0"))) PPC_WEAK_FUNC(sub_82AAFDD0);
PPC_FUNC_IMPL(__imp__sub_82AAFDD0) {
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
	// addi r4,r11,-29048
	ctx.r4.s64 = ctx.r11.s64 + -29048;
	// bl 0x82316b80
	ctx.lr = 0x82AAFDEC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16267(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16267, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFE04"))) PPC_WEAK_FUNC(sub_82AAFE04);
PPC_FUNC_IMPL(__imp__sub_82AAFE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFE08"))) PPC_WEAK_FUNC(sub_82AAFE08);
PPC_FUNC_IMPL(__imp__sub_82AAFE08) {
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
	// addi r4,r11,-29044
	ctx.r4.s64 = ctx.r11.s64 + -29044;
	// bl 0x82316b80
	ctx.lr = 0x82AAFE24;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16266(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16266, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFE3C"))) PPC_WEAK_FUNC(sub_82AAFE3C);
PPC_FUNC_IMPL(__imp__sub_82AAFE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFE40"))) PPC_WEAK_FUNC(sub_82AAFE40);
PPC_FUNC_IMPL(__imp__sub_82AAFE40) {
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
	// addi r4,r11,-29040
	ctx.r4.s64 = ctx.r11.s64 + -29040;
	// bl 0x82316b80
	ctx.lr = 0x82AAFE5C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16265(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16265, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFE74"))) PPC_WEAK_FUNC(sub_82AAFE74);
PPC_FUNC_IMPL(__imp__sub_82AAFE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFE78"))) PPC_WEAK_FUNC(sub_82AAFE78);
PPC_FUNC_IMPL(__imp__sub_82AAFE78) {
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
	// addi r4,r11,-29036
	ctx.r4.s64 = ctx.r11.s64 + -29036;
	// bl 0x82316b80
	ctx.lr = 0x82AAFE94;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16264(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16264, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFEAC"))) PPC_WEAK_FUNC(sub_82AAFEAC);
PPC_FUNC_IMPL(__imp__sub_82AAFEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFEB0"))) PPC_WEAK_FUNC(sub_82AAFEB0);
PPC_FUNC_IMPL(__imp__sub_82AAFEB0) {
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
	// addi r4,r11,-29032
	ctx.r4.s64 = ctx.r11.s64 + -29032;
	// bl 0x82316b80
	ctx.lr = 0x82AAFECC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16263(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16263, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFEE4"))) PPC_WEAK_FUNC(sub_82AAFEE4);
PPC_FUNC_IMPL(__imp__sub_82AAFEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFEE8"))) PPC_WEAK_FUNC(sub_82AAFEE8);
PPC_FUNC_IMPL(__imp__sub_82AAFEE8) {
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
	// addi r4,r11,-29028
	ctx.r4.s64 = ctx.r11.s64 + -29028;
	// bl 0x82316b80
	ctx.lr = 0x82AAFF04;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16262(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16262, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFF1C"))) PPC_WEAK_FUNC(sub_82AAFF1C);
PPC_FUNC_IMPL(__imp__sub_82AAFF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFF20"))) PPC_WEAK_FUNC(sub_82AAFF20);
PPC_FUNC_IMPL(__imp__sub_82AAFF20) {
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
	// addi r4,r11,-29024
	ctx.r4.s64 = ctx.r11.s64 + -29024;
	// bl 0x82316b80
	ctx.lr = 0x82AAFF3C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16261(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16261, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFF54"))) PPC_WEAK_FUNC(sub_82AAFF54);
PPC_FUNC_IMPL(__imp__sub_82AAFF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFF58"))) PPC_WEAK_FUNC(sub_82AAFF58);
PPC_FUNC_IMPL(__imp__sub_82AAFF58) {
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
	// addi r4,r11,-29020
	ctx.r4.s64 = ctx.r11.s64 + -29020;
	// bl 0x82316b80
	ctx.lr = 0x82AAFF74;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16260(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16260, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFF8C"))) PPC_WEAK_FUNC(sub_82AAFF8C);
PPC_FUNC_IMPL(__imp__sub_82AAFF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFF90"))) PPC_WEAK_FUNC(sub_82AAFF90);
PPC_FUNC_IMPL(__imp__sub_82AAFF90) {
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
	// addi r4,r11,-29016
	ctx.r4.s64 = ctx.r11.s64 + -29016;
	// bl 0x82316b80
	ctx.lr = 0x82AAFFAC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16259(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16259, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFFC4"))) PPC_WEAK_FUNC(sub_82AAFFC4);
PPC_FUNC_IMPL(__imp__sub_82AAFFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAFFC8"))) PPC_WEAK_FUNC(sub_82AAFFC8);
PPC_FUNC_IMPL(__imp__sub_82AAFFC8) {
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
	// addi r4,r11,-29012
	ctx.r4.s64 = ctx.r11.s64 + -29012;
	// bl 0x82316b80
	ctx.lr = 0x82AAFFE4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16258(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16258, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAFFFC"))) PPC_WEAK_FUNC(sub_82AAFFFC);
PPC_FUNC_IMPL(__imp__sub_82AAFFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0000"))) PPC_WEAK_FUNC(sub_82AB0000);
PPC_FUNC_IMPL(__imp__sub_82AB0000) {
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
	// addi r4,r11,-29008
	ctx.r4.s64 = ctx.r11.s64 + -29008;
	// bl 0x82316b80
	ctx.lr = 0x82AB001C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16257(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16257, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0034"))) PPC_WEAK_FUNC(sub_82AB0034);
PPC_FUNC_IMPL(__imp__sub_82AB0034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0038"))) PPC_WEAK_FUNC(sub_82AB0038);
PPC_FUNC_IMPL(__imp__sub_82AB0038) {
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
	// addi r4,r11,-29004
	ctx.r4.s64 = ctx.r11.s64 + -29004;
	// bl 0x82316b80
	ctx.lr = 0x82AB0054;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16256(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB006C"))) PPC_WEAK_FUNC(sub_82AB006C);
PPC_FUNC_IMPL(__imp__sub_82AB006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0070"))) PPC_WEAK_FUNC(sub_82AB0070);
PPC_FUNC_IMPL(__imp__sub_82AB0070) {
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
	// addi r4,r11,-29000
	ctx.r4.s64 = ctx.r11.s64 + -29000;
	// bl 0x82316b80
	ctx.lr = 0x82AB008C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16255(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16255, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB00A4"))) PPC_WEAK_FUNC(sub_82AB00A4);
PPC_FUNC_IMPL(__imp__sub_82AB00A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB00A8"))) PPC_WEAK_FUNC(sub_82AB00A8);
PPC_FUNC_IMPL(__imp__sub_82AB00A8) {
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
	// addi r4,r11,-28996
	ctx.r4.s64 = ctx.r11.s64 + -28996;
	// bl 0x82316b80
	ctx.lr = 0x82AB00C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16254(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB00DC"))) PPC_WEAK_FUNC(sub_82AB00DC);
PPC_FUNC_IMPL(__imp__sub_82AB00DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB00E0"))) PPC_WEAK_FUNC(sub_82AB00E0);
PPC_FUNC_IMPL(__imp__sub_82AB00E0) {
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
	// addi r4,r11,-28992
	ctx.r4.s64 = ctx.r11.s64 + -28992;
	// bl 0x82316b80
	ctx.lr = 0x82AB00FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16253(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0114"))) PPC_WEAK_FUNC(sub_82AB0114);
PPC_FUNC_IMPL(__imp__sub_82AB0114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0118"))) PPC_WEAK_FUNC(sub_82AB0118);
PPC_FUNC_IMPL(__imp__sub_82AB0118) {
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
	// addi r4,r11,-28988
	ctx.r4.s64 = ctx.r11.s64 + -28988;
	// bl 0x82316b80
	ctx.lr = 0x82AB0134;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16252(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16252, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB014C"))) PPC_WEAK_FUNC(sub_82AB014C);
PPC_FUNC_IMPL(__imp__sub_82AB014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0150"))) PPC_WEAK_FUNC(sub_82AB0150);
PPC_FUNC_IMPL(__imp__sub_82AB0150) {
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
	// addi r4,r11,-28984
	ctx.r4.s64 = ctx.r11.s64 + -28984;
	// bl 0x82316b80
	ctx.lr = 0x82AB016C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16251(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16251, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0184"))) PPC_WEAK_FUNC(sub_82AB0184);
PPC_FUNC_IMPL(__imp__sub_82AB0184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0188"))) PPC_WEAK_FUNC(sub_82AB0188);
PPC_FUNC_IMPL(__imp__sub_82AB0188) {
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
	// addi r4,r11,-28980
	ctx.r4.s64 = ctx.r11.s64 + -28980;
	// bl 0x82316b80
	ctx.lr = 0x82AB01A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16250(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16250, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB01BC"))) PPC_WEAK_FUNC(sub_82AB01BC);
PPC_FUNC_IMPL(__imp__sub_82AB01BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB01C0"))) PPC_WEAK_FUNC(sub_82AB01C0);
PPC_FUNC_IMPL(__imp__sub_82AB01C0) {
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
	// addi r4,r11,-28976
	ctx.r4.s64 = ctx.r11.s64 + -28976;
	// bl 0x82316b80
	ctx.lr = 0x82AB01DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16249(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16249, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB01F4"))) PPC_WEAK_FUNC(sub_82AB01F4);
PPC_FUNC_IMPL(__imp__sub_82AB01F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB01F8"))) PPC_WEAK_FUNC(sub_82AB01F8);
PPC_FUNC_IMPL(__imp__sub_82AB01F8) {
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
	// addi r4,r11,-28972
	ctx.r4.s64 = ctx.r11.s64 + -28972;
	// bl 0x82316b80
	ctx.lr = 0x82AB0214;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16248(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16248, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB022C"))) PPC_WEAK_FUNC(sub_82AB022C);
PPC_FUNC_IMPL(__imp__sub_82AB022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0230"))) PPC_WEAK_FUNC(sub_82AB0230);
PPC_FUNC_IMPL(__imp__sub_82AB0230) {
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
	// addi r4,r11,-28968
	ctx.r4.s64 = ctx.r11.s64 + -28968;
	// bl 0x82316b80
	ctx.lr = 0x82AB024C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16247(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16247, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0264"))) PPC_WEAK_FUNC(sub_82AB0264);
PPC_FUNC_IMPL(__imp__sub_82AB0264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0268"))) PPC_WEAK_FUNC(sub_82AB0268);
PPC_FUNC_IMPL(__imp__sub_82AB0268) {
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
	// addi r4,r11,-28964
	ctx.r4.s64 = ctx.r11.s64 + -28964;
	// bl 0x82316b80
	ctx.lr = 0x82AB0284;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16246(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16246, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB029C"))) PPC_WEAK_FUNC(sub_82AB029C);
PPC_FUNC_IMPL(__imp__sub_82AB029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB02A0"))) PPC_WEAK_FUNC(sub_82AB02A0);
PPC_FUNC_IMPL(__imp__sub_82AB02A0) {
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
	// addi r4,r11,-28960
	ctx.r4.s64 = ctx.r11.s64 + -28960;
	// bl 0x82316b80
	ctx.lr = 0x82AB02BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16245(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16245, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB02D4"))) PPC_WEAK_FUNC(sub_82AB02D4);
PPC_FUNC_IMPL(__imp__sub_82AB02D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB02D8"))) PPC_WEAK_FUNC(sub_82AB02D8);
PPC_FUNC_IMPL(__imp__sub_82AB02D8) {
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
	// addi r4,r11,-28956
	ctx.r4.s64 = ctx.r11.s64 + -28956;
	// bl 0x82316b80
	ctx.lr = 0x82AB02F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16244(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16244, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB030C"))) PPC_WEAK_FUNC(sub_82AB030C);
PPC_FUNC_IMPL(__imp__sub_82AB030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0310"))) PPC_WEAK_FUNC(sub_82AB0310);
PPC_FUNC_IMPL(__imp__sub_82AB0310) {
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
	// addi r4,r11,-28952
	ctx.r4.s64 = ctx.r11.s64 + -28952;
	// bl 0x82316b80
	ctx.lr = 0x82AB032C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16243(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16243, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0344"))) PPC_WEAK_FUNC(sub_82AB0344);
PPC_FUNC_IMPL(__imp__sub_82AB0344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0348"))) PPC_WEAK_FUNC(sub_82AB0348);
PPC_FUNC_IMPL(__imp__sub_82AB0348) {
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
	// addi r4,r11,-28948
	ctx.r4.s64 = ctx.r11.s64 + -28948;
	// bl 0x82316b80
	ctx.lr = 0x82AB0364;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16242(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16242, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB037C"))) PPC_WEAK_FUNC(sub_82AB037C);
PPC_FUNC_IMPL(__imp__sub_82AB037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0380"))) PPC_WEAK_FUNC(sub_82AB0380);
PPC_FUNC_IMPL(__imp__sub_82AB0380) {
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
	// addi r4,r11,-28944
	ctx.r4.s64 = ctx.r11.s64 + -28944;
	// bl 0x82316b80
	ctx.lr = 0x82AB039C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16241(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16241, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB03B4"))) PPC_WEAK_FUNC(sub_82AB03B4);
PPC_FUNC_IMPL(__imp__sub_82AB03B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB03B8"))) PPC_WEAK_FUNC(sub_82AB03B8);
PPC_FUNC_IMPL(__imp__sub_82AB03B8) {
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
	// addi r4,r11,-28940
	ctx.r4.s64 = ctx.r11.s64 + -28940;
	// bl 0x82316b80
	ctx.lr = 0x82AB03D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16240(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16240, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB03EC"))) PPC_WEAK_FUNC(sub_82AB03EC);
PPC_FUNC_IMPL(__imp__sub_82AB03EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB03F0"))) PPC_WEAK_FUNC(sub_82AB03F0);
PPC_FUNC_IMPL(__imp__sub_82AB03F0) {
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
	// addi r4,r11,-28936
	ctx.r4.s64 = ctx.r11.s64 + -28936;
	// bl 0x82316b80
	ctx.lr = 0x82AB040C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16239(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16239, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0424"))) PPC_WEAK_FUNC(sub_82AB0424);
PPC_FUNC_IMPL(__imp__sub_82AB0424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0428"))) PPC_WEAK_FUNC(sub_82AB0428);
PPC_FUNC_IMPL(__imp__sub_82AB0428) {
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
	// addi r4,r11,-28932
	ctx.r4.s64 = ctx.r11.s64 + -28932;
	// bl 0x82316b80
	ctx.lr = 0x82AB0444;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16238(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16238, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB045C"))) PPC_WEAK_FUNC(sub_82AB045C);
PPC_FUNC_IMPL(__imp__sub_82AB045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0460"))) PPC_WEAK_FUNC(sub_82AB0460);
PPC_FUNC_IMPL(__imp__sub_82AB0460) {
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
	// addi r4,r11,-28928
	ctx.r4.s64 = ctx.r11.s64 + -28928;
	// bl 0x82316b80
	ctx.lr = 0x82AB047C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16237(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16237, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0494"))) PPC_WEAK_FUNC(sub_82AB0494);
PPC_FUNC_IMPL(__imp__sub_82AB0494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0498"))) PPC_WEAK_FUNC(sub_82AB0498);
PPC_FUNC_IMPL(__imp__sub_82AB0498) {
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
	// addi r4,r11,-28924
	ctx.r4.s64 = ctx.r11.s64 + -28924;
	// bl 0x82316b80
	ctx.lr = 0x82AB04B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16236(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16236, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB04CC"))) PPC_WEAK_FUNC(sub_82AB04CC);
PPC_FUNC_IMPL(__imp__sub_82AB04CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB04D0"))) PPC_WEAK_FUNC(sub_82AB04D0);
PPC_FUNC_IMPL(__imp__sub_82AB04D0) {
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
	// addi r4,r11,-28920
	ctx.r4.s64 = ctx.r11.s64 + -28920;
	// bl 0x82316b80
	ctx.lr = 0x82AB04EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16235(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16235, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0504"))) PPC_WEAK_FUNC(sub_82AB0504);
PPC_FUNC_IMPL(__imp__sub_82AB0504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0508"))) PPC_WEAK_FUNC(sub_82AB0508);
PPC_FUNC_IMPL(__imp__sub_82AB0508) {
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
	// addi r4,r11,-28916
	ctx.r4.s64 = ctx.r11.s64 + -28916;
	// bl 0x82316b80
	ctx.lr = 0x82AB0524;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16234(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16234, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB053C"))) PPC_WEAK_FUNC(sub_82AB053C);
PPC_FUNC_IMPL(__imp__sub_82AB053C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0540"))) PPC_WEAK_FUNC(sub_82AB0540);
PPC_FUNC_IMPL(__imp__sub_82AB0540) {
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
	// addi r4,r11,-28912
	ctx.r4.s64 = ctx.r11.s64 + -28912;
	// bl 0x82316b80
	ctx.lr = 0x82AB055C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16233(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16233, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0574"))) PPC_WEAK_FUNC(sub_82AB0574);
PPC_FUNC_IMPL(__imp__sub_82AB0574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0578"))) PPC_WEAK_FUNC(sub_82AB0578);
PPC_FUNC_IMPL(__imp__sub_82AB0578) {
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
	// addi r4,r11,-28908
	ctx.r4.s64 = ctx.r11.s64 + -28908;
	// bl 0x82316b80
	ctx.lr = 0x82AB0594;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16232(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16232, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB05AC"))) PPC_WEAK_FUNC(sub_82AB05AC);
PPC_FUNC_IMPL(__imp__sub_82AB05AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB05B0"))) PPC_WEAK_FUNC(sub_82AB05B0);
PPC_FUNC_IMPL(__imp__sub_82AB05B0) {
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
	// addi r4,r11,-28904
	ctx.r4.s64 = ctx.r11.s64 + -28904;
	// bl 0x82316b80
	ctx.lr = 0x82AB05CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16231(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16231, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB05E4"))) PPC_WEAK_FUNC(sub_82AB05E4);
PPC_FUNC_IMPL(__imp__sub_82AB05E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB05E8"))) PPC_WEAK_FUNC(sub_82AB05E8);
PPC_FUNC_IMPL(__imp__sub_82AB05E8) {
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
	// addi r4,r11,-28900
	ctx.r4.s64 = ctx.r11.s64 + -28900;
	// bl 0x82316b80
	ctx.lr = 0x82AB0604;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16230(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16230, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB061C"))) PPC_WEAK_FUNC(sub_82AB061C);
PPC_FUNC_IMPL(__imp__sub_82AB061C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0620"))) PPC_WEAK_FUNC(sub_82AB0620);
PPC_FUNC_IMPL(__imp__sub_82AB0620) {
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
	// addi r4,r11,-28896
	ctx.r4.s64 = ctx.r11.s64 + -28896;
	// bl 0x82316b80
	ctx.lr = 0x82AB063C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16229(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16229, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0654"))) PPC_WEAK_FUNC(sub_82AB0654);
PPC_FUNC_IMPL(__imp__sub_82AB0654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0658"))) PPC_WEAK_FUNC(sub_82AB0658);
PPC_FUNC_IMPL(__imp__sub_82AB0658) {
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
	// addi r4,r11,-28892
	ctx.r4.s64 = ctx.r11.s64 + -28892;
	// bl 0x82316b80
	ctx.lr = 0x82AB0674;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16228(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16228, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB068C"))) PPC_WEAK_FUNC(sub_82AB068C);
PPC_FUNC_IMPL(__imp__sub_82AB068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0690"))) PPC_WEAK_FUNC(sub_82AB0690);
PPC_FUNC_IMPL(__imp__sub_82AB0690) {
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
	// addi r4,r11,-28888
	ctx.r4.s64 = ctx.r11.s64 + -28888;
	// bl 0x82316b80
	ctx.lr = 0x82AB06AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16227(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16227, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB06C4"))) PPC_WEAK_FUNC(sub_82AB06C4);
PPC_FUNC_IMPL(__imp__sub_82AB06C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB06C8"))) PPC_WEAK_FUNC(sub_82AB06C8);
PPC_FUNC_IMPL(__imp__sub_82AB06C8) {
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
	// addi r4,r11,-28884
	ctx.r4.s64 = ctx.r11.s64 + -28884;
	// bl 0x82316b80
	ctx.lr = 0x82AB06E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16226(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16226, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB06FC"))) PPC_WEAK_FUNC(sub_82AB06FC);
PPC_FUNC_IMPL(__imp__sub_82AB06FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0700"))) PPC_WEAK_FUNC(sub_82AB0700);
PPC_FUNC_IMPL(__imp__sub_82AB0700) {
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
	// addi r4,r11,-28880
	ctx.r4.s64 = ctx.r11.s64 + -28880;
	// bl 0x82316b80
	ctx.lr = 0x82AB071C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16225(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16225, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0734"))) PPC_WEAK_FUNC(sub_82AB0734);
PPC_FUNC_IMPL(__imp__sub_82AB0734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0738"))) PPC_WEAK_FUNC(sub_82AB0738);
PPC_FUNC_IMPL(__imp__sub_82AB0738) {
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
	// addi r4,r11,-28876
	ctx.r4.s64 = ctx.r11.s64 + -28876;
	// bl 0x82316b80
	ctx.lr = 0x82AB0754;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16224(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16224, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB076C"))) PPC_WEAK_FUNC(sub_82AB076C);
PPC_FUNC_IMPL(__imp__sub_82AB076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0770"))) PPC_WEAK_FUNC(sub_82AB0770);
PPC_FUNC_IMPL(__imp__sub_82AB0770) {
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
	// addi r4,r11,-28872
	ctx.r4.s64 = ctx.r11.s64 + -28872;
	// bl 0x82316b80
	ctx.lr = 0x82AB078C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16223(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16223, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB07A4"))) PPC_WEAK_FUNC(sub_82AB07A4);
PPC_FUNC_IMPL(__imp__sub_82AB07A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB07A8"))) PPC_WEAK_FUNC(sub_82AB07A8);
PPC_FUNC_IMPL(__imp__sub_82AB07A8) {
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
	// addi r4,r11,-28868
	ctx.r4.s64 = ctx.r11.s64 + -28868;
	// bl 0x82316b80
	ctx.lr = 0x82AB07C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16222(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16222, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB07DC"))) PPC_WEAK_FUNC(sub_82AB07DC);
PPC_FUNC_IMPL(__imp__sub_82AB07DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB07E0"))) PPC_WEAK_FUNC(sub_82AB07E0);
PPC_FUNC_IMPL(__imp__sub_82AB07E0) {
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
	// addi r4,r11,-28864
	ctx.r4.s64 = ctx.r11.s64 + -28864;
	// bl 0x82316b80
	ctx.lr = 0x82AB07FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16221(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16221, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0814"))) PPC_WEAK_FUNC(sub_82AB0814);
PPC_FUNC_IMPL(__imp__sub_82AB0814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0818"))) PPC_WEAK_FUNC(sub_82AB0818);
PPC_FUNC_IMPL(__imp__sub_82AB0818) {
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
	// addi r4,r11,-28860
	ctx.r4.s64 = ctx.r11.s64 + -28860;
	// bl 0x82316b80
	ctx.lr = 0x82AB0834;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16220(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16220, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB084C"))) PPC_WEAK_FUNC(sub_82AB084C);
PPC_FUNC_IMPL(__imp__sub_82AB084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0850"))) PPC_WEAK_FUNC(sub_82AB0850);
PPC_FUNC_IMPL(__imp__sub_82AB0850) {
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
	// addi r4,r11,-28856
	ctx.r4.s64 = ctx.r11.s64 + -28856;
	// bl 0x82316b80
	ctx.lr = 0x82AB086C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16219(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16219, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0884"))) PPC_WEAK_FUNC(sub_82AB0884);
PPC_FUNC_IMPL(__imp__sub_82AB0884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0888"))) PPC_WEAK_FUNC(sub_82AB0888);
PPC_FUNC_IMPL(__imp__sub_82AB0888) {
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
	// addi r4,r11,-28852
	ctx.r4.s64 = ctx.r11.s64 + -28852;
	// bl 0x82316b80
	ctx.lr = 0x82AB08A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16218(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16218, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB08BC"))) PPC_WEAK_FUNC(sub_82AB08BC);
PPC_FUNC_IMPL(__imp__sub_82AB08BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB08C0"))) PPC_WEAK_FUNC(sub_82AB08C0);
PPC_FUNC_IMPL(__imp__sub_82AB08C0) {
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
	// addi r4,r11,-28848
	ctx.r4.s64 = ctx.r11.s64 + -28848;
	// bl 0x82316b80
	ctx.lr = 0x82AB08DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16217(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16217, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB08F4"))) PPC_WEAK_FUNC(sub_82AB08F4);
PPC_FUNC_IMPL(__imp__sub_82AB08F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB08F8"))) PPC_WEAK_FUNC(sub_82AB08F8);
PPC_FUNC_IMPL(__imp__sub_82AB08F8) {
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
	// addi r4,r11,-28844
	ctx.r4.s64 = ctx.r11.s64 + -28844;
	// bl 0x82316b80
	ctx.lr = 0x82AB0914;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16216(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16216, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB092C"))) PPC_WEAK_FUNC(sub_82AB092C);
PPC_FUNC_IMPL(__imp__sub_82AB092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0930"))) PPC_WEAK_FUNC(sub_82AB0930);
PPC_FUNC_IMPL(__imp__sub_82AB0930) {
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
	// addi r4,r11,-28840
	ctx.r4.s64 = ctx.r11.s64 + -28840;
	// bl 0x82316b80
	ctx.lr = 0x82AB094C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16215(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16215, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0964"))) PPC_WEAK_FUNC(sub_82AB0964);
PPC_FUNC_IMPL(__imp__sub_82AB0964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0968"))) PPC_WEAK_FUNC(sub_82AB0968);
PPC_FUNC_IMPL(__imp__sub_82AB0968) {
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
	// addi r4,r11,-28836
	ctx.r4.s64 = ctx.r11.s64 + -28836;
	// bl 0x82316b80
	ctx.lr = 0x82AB0984;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16214(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16214, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB099C"))) PPC_WEAK_FUNC(sub_82AB099C);
PPC_FUNC_IMPL(__imp__sub_82AB099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

