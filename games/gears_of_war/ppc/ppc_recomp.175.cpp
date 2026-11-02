#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AA7DA0"))) PPC_WEAK_FUNC(sub_82AA7DA0);
PPC_FUNC_IMPL(__imp__sub_82AA7DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31392
	ctx.r4.s64 = ctx.r11.s64 + -31392;
	// bl 0x82316b80
	ctx.lr = 0x82AA7DBC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19277(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19277, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7DD4"))) PPC_WEAK_FUNC(sub_82AA7DD4);
PPC_FUNC_IMPL(__imp__sub_82AA7DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7DD8"))) PPC_WEAK_FUNC(sub_82AA7DD8);
PPC_FUNC_IMPL(__imp__sub_82AA7DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31388
	ctx.r4.s64 = ctx.r11.s64 + -31388;
	// bl 0x82316b80
	ctx.lr = 0x82AA7DF4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19276(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19276, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7E0C"))) PPC_WEAK_FUNC(sub_82AA7E0C);
PPC_FUNC_IMPL(__imp__sub_82AA7E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7E10"))) PPC_WEAK_FUNC(sub_82AA7E10);
PPC_FUNC_IMPL(__imp__sub_82AA7E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31384
	ctx.r4.s64 = ctx.r11.s64 + -31384;
	// bl 0x82316b80
	ctx.lr = 0x82AA7E2C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19275(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19275, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7E44"))) PPC_WEAK_FUNC(sub_82AA7E44);
PPC_FUNC_IMPL(__imp__sub_82AA7E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7E48"))) PPC_WEAK_FUNC(sub_82AA7E48);
PPC_FUNC_IMPL(__imp__sub_82AA7E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31380
	ctx.r4.s64 = ctx.r11.s64 + -31380;
	// bl 0x82316b80
	ctx.lr = 0x82AA7E64;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19274(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19274, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7E7C"))) PPC_WEAK_FUNC(sub_82AA7E7C);
PPC_FUNC_IMPL(__imp__sub_82AA7E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7E80"))) PPC_WEAK_FUNC(sub_82AA7E80);
PPC_FUNC_IMPL(__imp__sub_82AA7E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31376
	ctx.r4.s64 = ctx.r11.s64 + -31376;
	// bl 0x82316b80
	ctx.lr = 0x82AA7E9C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19273(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19273, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7EB4"))) PPC_WEAK_FUNC(sub_82AA7EB4);
PPC_FUNC_IMPL(__imp__sub_82AA7EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7EB8"))) PPC_WEAK_FUNC(sub_82AA7EB8);
PPC_FUNC_IMPL(__imp__sub_82AA7EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31372
	ctx.r4.s64 = ctx.r11.s64 + -31372;
	// bl 0x82316b80
	ctx.lr = 0x82AA7ED4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17496(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17496, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7EEC"))) PPC_WEAK_FUNC(sub_82AA7EEC);
PPC_FUNC_IMPL(__imp__sub_82AA7EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7EF0"))) PPC_WEAK_FUNC(sub_82AA7EF0);
PPC_FUNC_IMPL(__imp__sub_82AA7EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31368
	ctx.r4.s64 = ctx.r11.s64 + -31368;
	// bl 0x82316b80
	ctx.lr = 0x82AA7F0C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17495(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17495, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7F24"))) PPC_WEAK_FUNC(sub_82AA7F24);
PPC_FUNC_IMPL(__imp__sub_82AA7F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7F28"))) PPC_WEAK_FUNC(sub_82AA7F28);
PPC_FUNC_IMPL(__imp__sub_82AA7F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31364
	ctx.r4.s64 = ctx.r11.s64 + -31364;
	// bl 0x82316b80
	ctx.lr = 0x82AA7F44;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17494(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17494, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7F5C"))) PPC_WEAK_FUNC(sub_82AA7F5C);
PPC_FUNC_IMPL(__imp__sub_82AA7F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7F60"))) PPC_WEAK_FUNC(sub_82AA7F60);
PPC_FUNC_IMPL(__imp__sub_82AA7F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31360
	ctx.r4.s64 = ctx.r11.s64 + -31360;
	// bl 0x82316b80
	ctx.lr = 0x82AA7F7C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17493(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17493, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7F94"))) PPC_WEAK_FUNC(sub_82AA7F94);
PPC_FUNC_IMPL(__imp__sub_82AA7F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7F98"))) PPC_WEAK_FUNC(sub_82AA7F98);
PPC_FUNC_IMPL(__imp__sub_82AA7F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31356
	ctx.r4.s64 = ctx.r11.s64 + -31356;
	// bl 0x82316b80
	ctx.lr = 0x82AA7FB4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17492(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17492, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA7FCC"))) PPC_WEAK_FUNC(sub_82AA7FCC);
PPC_FUNC_IMPL(__imp__sub_82AA7FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA7FD0"))) PPC_WEAK_FUNC(sub_82AA7FD0);
PPC_FUNC_IMPL(__imp__sub_82AA7FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31352
	ctx.r4.s64 = ctx.r11.s64 + -31352;
	// bl 0x82316b80
	ctx.lr = 0x82AA7FEC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17491(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17491, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8004"))) PPC_WEAK_FUNC(sub_82AA8004);
PPC_FUNC_IMPL(__imp__sub_82AA8004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8008"))) PPC_WEAK_FUNC(sub_82AA8008);
PPC_FUNC_IMPL(__imp__sub_82AA8008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,321
	ctx.r3.s64 = 321;
	// addi r4,r11,-31348
	ctx.r4.s64 = ctx.r11.s64 + -31348;
	// bl 0x82316b80
	ctx.lr = 0x82AA8024;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17490(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17490, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA803C"))) PPC_WEAK_FUNC(sub_82AA803C);
PPC_FUNC_IMPL(__imp__sub_82AA803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8040"))) PPC_WEAK_FUNC(sub_82AA8040);
PPC_FUNC_IMPL(__imp__sub_82AA8040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,312
	ctx.r3.s64 = 312;
	// addi r4,r11,-31344
	ctx.r4.s64 = ctx.r11.s64 + -31344;
	// bl 0x82316b80
	ctx.lr = 0x82AA805C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17489(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17489, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8074"))) PPC_WEAK_FUNC(sub_82AA8074);
PPC_FUNC_IMPL(__imp__sub_82AA8074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8078"))) PPC_WEAK_FUNC(sub_82AA8078);
PPC_FUNC_IMPL(__imp__sub_82AA8078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,311
	ctx.r3.s64 = 311;
	// addi r4,r11,-31340
	ctx.r4.s64 = ctx.r11.s64 + -31340;
	// bl 0x82316b80
	ctx.lr = 0x82AA8094;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17488(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17488, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA80AC"))) PPC_WEAK_FUNC(sub_82AA80AC);
PPC_FUNC_IMPL(__imp__sub_82AA80AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA80B0"))) PPC_WEAK_FUNC(sub_82AA80B0);
PPC_FUNC_IMPL(__imp__sub_82AA80B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,309
	ctx.r3.s64 = 309;
	// addi r4,r11,-31336
	ctx.r4.s64 = ctx.r11.s64 + -31336;
	// bl 0x82316b80
	ctx.lr = 0x82AA80CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17487(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17487, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA80E4"))) PPC_WEAK_FUNC(sub_82AA80E4);
PPC_FUNC_IMPL(__imp__sub_82AA80E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA80E8"))) PPC_WEAK_FUNC(sub_82AA80E8);
PPC_FUNC_IMPL(__imp__sub_82AA80E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,307
	ctx.r3.s64 = 307;
	// addi r4,r11,-31332
	ctx.r4.s64 = ctx.r11.s64 + -31332;
	// bl 0x82316b80
	ctx.lr = 0x82AA8104;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17486(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17486, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA811C"))) PPC_WEAK_FUNC(sub_82AA811C);
PPC_FUNC_IMPL(__imp__sub_82AA811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8120"))) PPC_WEAK_FUNC(sub_82AA8120);
PPC_FUNC_IMPL(__imp__sub_82AA8120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,306
	ctx.r3.s64 = 306;
	// addi r4,r11,-31328
	ctx.r4.s64 = ctx.r11.s64 + -31328;
	// bl 0x82316b80
	ctx.lr = 0x82AA813C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17485(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17485, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8154"))) PPC_WEAK_FUNC(sub_82AA8154);
PPC_FUNC_IMPL(__imp__sub_82AA8154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8158"))) PPC_WEAK_FUNC(sub_82AA8158);
PPC_FUNC_IMPL(__imp__sub_82AA8158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,305
	ctx.r3.s64 = 305;
	// addi r4,r11,-31324
	ctx.r4.s64 = ctx.r11.s64 + -31324;
	// bl 0x82316b80
	ctx.lr = 0x82AA8174;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17484(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17484, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA818C"))) PPC_WEAK_FUNC(sub_82AA818C);
PPC_FUNC_IMPL(__imp__sub_82AA818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8190"))) PPC_WEAK_FUNC(sub_82AA8190);
PPC_FUNC_IMPL(__imp__sub_82AA8190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,313
	ctx.r3.s64 = 313;
	// addi r4,r11,-31320
	ctx.r4.s64 = ctx.r11.s64 + -31320;
	// bl 0x82316b80
	ctx.lr = 0x82AA81AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17483(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17483, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA81C4"))) PPC_WEAK_FUNC(sub_82AA81C4);
PPC_FUNC_IMPL(__imp__sub_82AA81C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA81C8"))) PPC_WEAK_FUNC(sub_82AA81C8);
PPC_FUNC_IMPL(__imp__sub_82AA81C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,304
	ctx.r3.s64 = 304;
	// addi r4,r11,-31316
	ctx.r4.s64 = ctx.r11.s64 + -31316;
	// bl 0x82316b80
	ctx.lr = 0x82AA81E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17482(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17482, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA81FC"))) PPC_WEAK_FUNC(sub_82AA81FC);
PPC_FUNC_IMPL(__imp__sub_82AA81FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8200"))) PPC_WEAK_FUNC(sub_82AA8200);
PPC_FUNC_IMPL(__imp__sub_82AA8200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,547
	ctx.r3.s64 = 547;
	// addi r4,r11,-31312
	ctx.r4.s64 = ctx.r11.s64 + -31312;
	// bl 0x82316b80
	ctx.lr = 0x82AA821C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17481(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17481, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8234"))) PPC_WEAK_FUNC(sub_82AA8234);
PPC_FUNC_IMPL(__imp__sub_82AA8234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8238"))) PPC_WEAK_FUNC(sub_82AA8238);
PPC_FUNC_IMPL(__imp__sub_82AA8238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31308
	ctx.r4.s64 = ctx.r11.s64 + -31308;
	// bl 0x82316b80
	ctx.lr = 0x82AA8254;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17480(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17480, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA826C"))) PPC_WEAK_FUNC(sub_82AA826C);
PPC_FUNC_IMPL(__imp__sub_82AA826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8270"))) PPC_WEAK_FUNC(sub_82AA8270);
PPC_FUNC_IMPL(__imp__sub_82AA8270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31304
	ctx.r4.s64 = ctx.r11.s64 + -31304;
	// bl 0x82316b80
	ctx.lr = 0x82AA828C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17479(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17479, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA82A4"))) PPC_WEAK_FUNC(sub_82AA82A4);
PPC_FUNC_IMPL(__imp__sub_82AA82A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA82A8"))) PPC_WEAK_FUNC(sub_82AA82A8);
PPC_FUNC_IMPL(__imp__sub_82AA82A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,532
	ctx.r3.s64 = 532;
	// addi r4,r11,-31300
	ctx.r4.s64 = ctx.r11.s64 + -31300;
	// bl 0x82316b80
	ctx.lr = 0x82AA82C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17478(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17478, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA82DC"))) PPC_WEAK_FUNC(sub_82AA82DC);
PPC_FUNC_IMPL(__imp__sub_82AA82DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA82E0"))) PPC_WEAK_FUNC(sub_82AA82E0);
PPC_FUNC_IMPL(__imp__sub_82AA82E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,512
	ctx.r3.s64 = 512;
	// addi r4,r11,-31296
	ctx.r4.s64 = ctx.r11.s64 + -31296;
	// bl 0x82316b80
	ctx.lr = 0x82AA82FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17477(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17477, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8314"))) PPC_WEAK_FUNC(sub_82AA8314);
PPC_FUNC_IMPL(__imp__sub_82AA8314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8318"))) PPC_WEAK_FUNC(sub_82AA8318);
PPC_FUNC_IMPL(__imp__sub_82AA8318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31292
	ctx.r4.s64 = ctx.r11.s64 + -31292;
	// bl 0x82316b80
	ctx.lr = 0x82AA8334;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17476(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17476, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA834C"))) PPC_WEAK_FUNC(sub_82AA834C);
PPC_FUNC_IMPL(__imp__sub_82AA834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8350"))) PPC_WEAK_FUNC(sub_82AA8350);
PPC_FUNC_IMPL(__imp__sub_82AA8350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31288
	ctx.r4.s64 = ctx.r11.s64 + -31288;
	// bl 0x82316b80
	ctx.lr = 0x82AA836C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17475(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17475, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8384"))) PPC_WEAK_FUNC(sub_82AA8384);
PPC_FUNC_IMPL(__imp__sub_82AA8384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8388"))) PPC_WEAK_FUNC(sub_82AA8388);
PPC_FUNC_IMPL(__imp__sub_82AA8388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31284
	ctx.r4.s64 = ctx.r11.s64 + -31284;
	// bl 0x82316b80
	ctx.lr = 0x82AA83A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17474(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17474, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA83BC"))) PPC_WEAK_FUNC(sub_82AA83BC);
PPC_FUNC_IMPL(__imp__sub_82AA83BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA83C0"))) PPC_WEAK_FUNC(sub_82AA83C0);
PPC_FUNC_IMPL(__imp__sub_82AA83C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31280
	ctx.r4.s64 = ctx.r11.s64 + -31280;
	// bl 0x82316b80
	ctx.lr = 0x82AA83DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17473(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17473, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA83F4"))) PPC_WEAK_FUNC(sub_82AA83F4);
PPC_FUNC_IMPL(__imp__sub_82AA83F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA83F8"))) PPC_WEAK_FUNC(sub_82AA83F8);
PPC_FUNC_IMPL(__imp__sub_82AA83F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31276
	ctx.r4.s64 = ctx.r11.s64 + -31276;
	// bl 0x82316b80
	ctx.lr = 0x82AA8414;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17472(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17472, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA842C"))) PPC_WEAK_FUNC(sub_82AA842C);
PPC_FUNC_IMPL(__imp__sub_82AA842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8430"))) PPC_WEAK_FUNC(sub_82AA8430);
PPC_FUNC_IMPL(__imp__sub_82AA8430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31272
	ctx.r4.s64 = ctx.r11.s64 + -31272;
	// bl 0x82316b80
	ctx.lr = 0x82AA844C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17471(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17471, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8464"))) PPC_WEAK_FUNC(sub_82AA8464);
PPC_FUNC_IMPL(__imp__sub_82AA8464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8468"))) PPC_WEAK_FUNC(sub_82AA8468);
PPC_FUNC_IMPL(__imp__sub_82AA8468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,280
	ctx.r3.s64 = 280;
	// addi r4,r11,-31268
	ctx.r4.s64 = ctx.r11.s64 + -31268;
	// bl 0x82316b80
	ctx.lr = 0x82AA8484;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17470(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17470, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA849C"))) PPC_WEAK_FUNC(sub_82AA849C);
PPC_FUNC_IMPL(__imp__sub_82AA849C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA84A0"))) PPC_WEAK_FUNC(sub_82AA84A0);
PPC_FUNC_IMPL(__imp__sub_82AA84A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,279
	ctx.r3.s64 = 279;
	// addi r4,r11,-31264
	ctx.r4.s64 = ctx.r11.s64 + -31264;
	// bl 0x82316b80
	ctx.lr = 0x82AA84BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17469(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17469, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA84D4"))) PPC_WEAK_FUNC(sub_82AA84D4);
PPC_FUNC_IMPL(__imp__sub_82AA84D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA84D8"))) PPC_WEAK_FUNC(sub_82AA84D8);
PPC_FUNC_IMPL(__imp__sub_82AA84D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,278
	ctx.r3.s64 = 278;
	// addi r4,r11,-31260
	ctx.r4.s64 = ctx.r11.s64 + -31260;
	// bl 0x82316b80
	ctx.lr = 0x82AA84F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17468(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17468, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA850C"))) PPC_WEAK_FUNC(sub_82AA850C);
PPC_FUNC_IMPL(__imp__sub_82AA850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8510"))) PPC_WEAK_FUNC(sub_82AA8510);
PPC_FUNC_IMPL(__imp__sub_82AA8510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31256
	ctx.r4.s64 = ctx.r11.s64 + -31256;
	// bl 0x82316b80
	ctx.lr = 0x82AA852C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17467(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17467, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8544"))) PPC_WEAK_FUNC(sub_82AA8544);
PPC_FUNC_IMPL(__imp__sub_82AA8544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8548"))) PPC_WEAK_FUNC(sub_82AA8548);
PPC_FUNC_IMPL(__imp__sub_82AA8548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31252
	ctx.r4.s64 = ctx.r11.s64 + -31252;
	// bl 0x82316b80
	ctx.lr = 0x82AA8564;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17466(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17466, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA857C"))) PPC_WEAK_FUNC(sub_82AA857C);
PPC_FUNC_IMPL(__imp__sub_82AA857C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8580"))) PPC_WEAK_FUNC(sub_82AA8580);
PPC_FUNC_IMPL(__imp__sub_82AA8580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31248
	ctx.r4.s64 = ctx.r11.s64 + -31248;
	// bl 0x82316b80
	ctx.lr = 0x82AA859C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17465(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17465, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA85B4"))) PPC_WEAK_FUNC(sub_82AA85B4);
PPC_FUNC_IMPL(__imp__sub_82AA85B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA85B8"))) PPC_WEAK_FUNC(sub_82AA85B8);
PPC_FUNC_IMPL(__imp__sub_82AA85B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31244
	ctx.r4.s64 = ctx.r11.s64 + -31244;
	// bl 0x82316b80
	ctx.lr = 0x82AA85D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17464(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17464, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA85EC"))) PPC_WEAK_FUNC(sub_82AA85EC);
PPC_FUNC_IMPL(__imp__sub_82AA85EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA85F0"))) PPC_WEAK_FUNC(sub_82AA85F0);
PPC_FUNC_IMPL(__imp__sub_82AA85F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,548
	ctx.r3.s64 = 548;
	// addi r4,r11,-31240
	ctx.r4.s64 = ctx.r11.s64 + -31240;
	// bl 0x82316b80
	ctx.lr = 0x82AA860C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17463(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17463, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8624"))) PPC_WEAK_FUNC(sub_82AA8624);
PPC_FUNC_IMPL(__imp__sub_82AA8624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8628"))) PPC_WEAK_FUNC(sub_82AA8628);
PPC_FUNC_IMPL(__imp__sub_82AA8628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31236
	ctx.r4.s64 = ctx.r11.s64 + -31236;
	// bl 0x82316b80
	ctx.lr = 0x82AA8644;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17462(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17462, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA865C"))) PPC_WEAK_FUNC(sub_82AA865C);
PPC_FUNC_IMPL(__imp__sub_82AA865C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8660"))) PPC_WEAK_FUNC(sub_82AA8660);
PPC_FUNC_IMPL(__imp__sub_82AA8660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,277
	ctx.r3.s64 = 277;
	// addi r4,r11,-31232
	ctx.r4.s64 = ctx.r11.s64 + -31232;
	// bl 0x82316b80
	ctx.lr = 0x82AA867C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17461(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17461, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8694"))) PPC_WEAK_FUNC(sub_82AA8694);
PPC_FUNC_IMPL(__imp__sub_82AA8694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8698"))) PPC_WEAK_FUNC(sub_82AA8698);
PPC_FUNC_IMPL(__imp__sub_82AA8698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31228
	ctx.r4.s64 = ctx.r11.s64 + -31228;
	// bl 0x82316b80
	ctx.lr = 0x82AA86B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17460(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17460, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA86CC"))) PPC_WEAK_FUNC(sub_82AA86CC);
PPC_FUNC_IMPL(__imp__sub_82AA86CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA86D0"))) PPC_WEAK_FUNC(sub_82AA86D0);
PPC_FUNC_IMPL(__imp__sub_82AA86D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31224
	ctx.r4.s64 = ctx.r11.s64 + -31224;
	// bl 0x82316b80
	ctx.lr = 0x82AA86EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17459(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17459, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8704"))) PPC_WEAK_FUNC(sub_82AA8704);
PPC_FUNC_IMPL(__imp__sub_82AA8704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8708"))) PPC_WEAK_FUNC(sub_82AA8708);
PPC_FUNC_IMPL(__imp__sub_82AA8708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31220
	ctx.r4.s64 = ctx.r11.s64 + -31220;
	// bl 0x82316b80
	ctx.lr = 0x82AA8724;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17458(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17458, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA873C"))) PPC_WEAK_FUNC(sub_82AA873C);
PPC_FUNC_IMPL(__imp__sub_82AA873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8740"))) PPC_WEAK_FUNC(sub_82AA8740);
PPC_FUNC_IMPL(__imp__sub_82AA8740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31216
	ctx.r4.s64 = ctx.r11.s64 + -31216;
	// bl 0x82316b80
	ctx.lr = 0x82AA875C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17457(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17457, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8774"))) PPC_WEAK_FUNC(sub_82AA8774);
PPC_FUNC_IMPL(__imp__sub_82AA8774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8778"))) PPC_WEAK_FUNC(sub_82AA8778);
PPC_FUNC_IMPL(__imp__sub_82AA8778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31212
	ctx.r4.s64 = ctx.r11.s64 + -31212;
	// bl 0x82316b80
	ctx.lr = 0x82AA8794;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17456(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17456, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA87AC"))) PPC_WEAK_FUNC(sub_82AA87AC);
PPC_FUNC_IMPL(__imp__sub_82AA87AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA87B0"))) PPC_WEAK_FUNC(sub_82AA87B0);
PPC_FUNC_IMPL(__imp__sub_82AA87B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31208
	ctx.r4.s64 = ctx.r11.s64 + -31208;
	// bl 0x82316b80
	ctx.lr = 0x82AA87CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17455(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17455, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA87E4"))) PPC_WEAK_FUNC(sub_82AA87E4);
PPC_FUNC_IMPL(__imp__sub_82AA87E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA87E8"))) PPC_WEAK_FUNC(sub_82AA87E8);
PPC_FUNC_IMPL(__imp__sub_82AA87E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,3970
	ctx.r3.s64 = 3970;
	// addi r4,r11,-31204
	ctx.r4.s64 = ctx.r11.s64 + -31204;
	// bl 0x82316b80
	ctx.lr = 0x82AA8804;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17454(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17454, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA881C"))) PPC_WEAK_FUNC(sub_82AA881C);
PPC_FUNC_IMPL(__imp__sub_82AA881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8820"))) PPC_WEAK_FUNC(sub_82AA8820);
PPC_FUNC_IMPL(__imp__sub_82AA8820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31200
	ctx.r4.s64 = ctx.r11.s64 + -31200;
	// bl 0x82316b80
	ctx.lr = 0x82AA883C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17453(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17453, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8854"))) PPC_WEAK_FUNC(sub_82AA8854);
PPC_FUNC_IMPL(__imp__sub_82AA8854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8858"))) PPC_WEAK_FUNC(sub_82AA8858);
PPC_FUNC_IMPL(__imp__sub_82AA8858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31196
	ctx.r4.s64 = ctx.r11.s64 + -31196;
	// bl 0x82316b80
	ctx.lr = 0x82AA8874;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17452(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17452, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA888C"))) PPC_WEAK_FUNC(sub_82AA888C);
PPC_FUNC_IMPL(__imp__sub_82AA888C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8890"))) PPC_WEAK_FUNC(sub_82AA8890);
PPC_FUNC_IMPL(__imp__sub_82AA8890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31192
	ctx.r4.s64 = ctx.r11.s64 + -31192;
	// bl 0x82316b80
	ctx.lr = 0x82AA88AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17451(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17451, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA88C4"))) PPC_WEAK_FUNC(sub_82AA88C4);
PPC_FUNC_IMPL(__imp__sub_82AA88C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA88C8"))) PPC_WEAK_FUNC(sub_82AA88C8);
PPC_FUNC_IMPL(__imp__sub_82AA88C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31188
	ctx.r4.s64 = ctx.r11.s64 + -31188;
	// bl 0x82316b80
	ctx.lr = 0x82AA88E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17450(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17450, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA88FC"))) PPC_WEAK_FUNC(sub_82AA88FC);
PPC_FUNC_IMPL(__imp__sub_82AA88FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8900"))) PPC_WEAK_FUNC(sub_82AA8900);
PPC_FUNC_IMPL(__imp__sub_82AA8900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31184
	ctx.r4.s64 = ctx.r11.s64 + -31184;
	// bl 0x82316b80
	ctx.lr = 0x82AA891C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17449(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17449, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8934"))) PPC_WEAK_FUNC(sub_82AA8934);
PPC_FUNC_IMPL(__imp__sub_82AA8934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8938"))) PPC_WEAK_FUNC(sub_82AA8938);
PPC_FUNC_IMPL(__imp__sub_82AA8938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31180
	ctx.r4.s64 = ctx.r11.s64 + -31180;
	// bl 0x82316b80
	ctx.lr = 0x82AA8954;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17448(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17448, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA896C"))) PPC_WEAK_FUNC(sub_82AA896C);
PPC_FUNC_IMPL(__imp__sub_82AA896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8970"))) PPC_WEAK_FUNC(sub_82AA8970);
PPC_FUNC_IMPL(__imp__sub_82AA8970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31176
	ctx.r4.s64 = ctx.r11.s64 + -31176;
	// bl 0x82316b80
	ctx.lr = 0x82AA898C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17447(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17447, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA89A4"))) PPC_WEAK_FUNC(sub_82AA89A4);
PPC_FUNC_IMPL(__imp__sub_82AA89A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA89A8"))) PPC_WEAK_FUNC(sub_82AA89A8);
PPC_FUNC_IMPL(__imp__sub_82AA89A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31172
	ctx.r4.s64 = ctx.r11.s64 + -31172;
	// bl 0x82316b80
	ctx.lr = 0x82AA89C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17446(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17446, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA89DC"))) PPC_WEAK_FUNC(sub_82AA89DC);
PPC_FUNC_IMPL(__imp__sub_82AA89DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA89E0"))) PPC_WEAK_FUNC(sub_82AA89E0);
PPC_FUNC_IMPL(__imp__sub_82AA89E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31168
	ctx.r4.s64 = ctx.r11.s64 + -31168;
	// bl 0x82316b80
	ctx.lr = 0x82AA89FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17445(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17445, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8A14"))) PPC_WEAK_FUNC(sub_82AA8A14);
PPC_FUNC_IMPL(__imp__sub_82AA8A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8A18"))) PPC_WEAK_FUNC(sub_82AA8A18);
PPC_FUNC_IMPL(__imp__sub_82AA8A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31164
	ctx.r4.s64 = ctx.r11.s64 + -31164;
	// bl 0x82316b80
	ctx.lr = 0x82AA8A34;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17444(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17444, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8A4C"))) PPC_WEAK_FUNC(sub_82AA8A4C);
PPC_FUNC_IMPL(__imp__sub_82AA8A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8A50"))) PPC_WEAK_FUNC(sub_82AA8A50);
PPC_FUNC_IMPL(__imp__sub_82AA8A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31160
	ctx.r4.s64 = ctx.r11.s64 + -31160;
	// bl 0x82316b80
	ctx.lr = 0x82AA8A6C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17443(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17443, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8A84"))) PPC_WEAK_FUNC(sub_82AA8A84);
PPC_FUNC_IMPL(__imp__sub_82AA8A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8A88"))) PPC_WEAK_FUNC(sub_82AA8A88);
PPC_FUNC_IMPL(__imp__sub_82AA8A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31156
	ctx.r4.s64 = ctx.r11.s64 + -31156;
	// bl 0x82316b80
	ctx.lr = 0x82AA8AA4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17442(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17442, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8ABC"))) PPC_WEAK_FUNC(sub_82AA8ABC);
PPC_FUNC_IMPL(__imp__sub_82AA8ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8AC0"))) PPC_WEAK_FUNC(sub_82AA8AC0);
PPC_FUNC_IMPL(__imp__sub_82AA8AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31152
	ctx.r4.s64 = ctx.r11.s64 + -31152;
	// bl 0x82316b80
	ctx.lr = 0x82AA8ADC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17441(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8AF4"))) PPC_WEAK_FUNC(sub_82AA8AF4);
PPC_FUNC_IMPL(__imp__sub_82AA8AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8AF8"))) PPC_WEAK_FUNC(sub_82AA8AF8);
PPC_FUNC_IMPL(__imp__sub_82AA8AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,272
	ctx.r3.s64 = 272;
	// addi r4,r11,-31148
	ctx.r4.s64 = ctx.r11.s64 + -31148;
	// bl 0x82316b80
	ctx.lr = 0x82AA8B14;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17440(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17440, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8B2C"))) PPC_WEAK_FUNC(sub_82AA8B2C);
PPC_FUNC_IMPL(__imp__sub_82AA8B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8B30"))) PPC_WEAK_FUNC(sub_82AA8B30);
PPC_FUNC_IMPL(__imp__sub_82AA8B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,298
	ctx.r3.s64 = 298;
	// addi r4,r11,-31144
	ctx.r4.s64 = ctx.r11.s64 + -31144;
	// bl 0x82316b80
	ctx.lr = 0x82AA8B4C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17439(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17439, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8B64"))) PPC_WEAK_FUNC(sub_82AA8B64);
PPC_FUNC_IMPL(__imp__sub_82AA8B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8B68"))) PPC_WEAK_FUNC(sub_82AA8B68);
PPC_FUNC_IMPL(__imp__sub_82AA8B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31140
	ctx.r4.s64 = ctx.r11.s64 + -31140;
	// bl 0x82316b80
	ctx.lr = 0x82AA8B84;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17438(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17438, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8B9C"))) PPC_WEAK_FUNC(sub_82AA8B9C);
PPC_FUNC_IMPL(__imp__sub_82AA8B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8BA0"))) PPC_WEAK_FUNC(sub_82AA8BA0);
PPC_FUNC_IMPL(__imp__sub_82AA8BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,3971
	ctx.r3.s64 = 3971;
	// addi r4,r11,-31136
	ctx.r4.s64 = ctx.r11.s64 + -31136;
	// bl 0x82316b80
	ctx.lr = 0x82AA8BBC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17437(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17437, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8BD4"))) PPC_WEAK_FUNC(sub_82AA8BD4);
PPC_FUNC_IMPL(__imp__sub_82AA8BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8BD8"))) PPC_WEAK_FUNC(sub_82AA8BD8);
PPC_FUNC_IMPL(__imp__sub_82AA8BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,3969
	ctx.r3.s64 = 3969;
	// addi r4,r11,-31132
	ctx.r4.s64 = ctx.r11.s64 + -31132;
	// bl 0x82316b80
	ctx.lr = 0x82AA8BF4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17436(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17436, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8C0C"))) PPC_WEAK_FUNC(sub_82AA8C0C);
PPC_FUNC_IMPL(__imp__sub_82AA8C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8C10"))) PPC_WEAK_FUNC(sub_82AA8C10);
PPC_FUNC_IMPL(__imp__sub_82AA8C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31128
	ctx.r4.s64 = ctx.r11.s64 + -31128;
	// bl 0x82316b80
	ctx.lr = 0x82AA8C2C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17435(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17435, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8C44"))) PPC_WEAK_FUNC(sub_82AA8C44);
PPC_FUNC_IMPL(__imp__sub_82AA8C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8C48"))) PPC_WEAK_FUNC(sub_82AA8C48);
PPC_FUNC_IMPL(__imp__sub_82AA8C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31124
	ctx.r4.s64 = ctx.r11.s64 + -31124;
	// bl 0x82316b80
	ctx.lr = 0x82AA8C64;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17434(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17434, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8C7C"))) PPC_WEAK_FUNC(sub_82AA8C7C);
PPC_FUNC_IMPL(__imp__sub_82AA8C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8C80"))) PPC_WEAK_FUNC(sub_82AA8C80);
PPC_FUNC_IMPL(__imp__sub_82AA8C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31120
	ctx.r4.s64 = ctx.r11.s64 + -31120;
	// bl 0x82316b80
	ctx.lr = 0x82AA8C9C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17433(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17433, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8CB4"))) PPC_WEAK_FUNC(sub_82AA8CB4);
PPC_FUNC_IMPL(__imp__sub_82AA8CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8CB8"))) PPC_WEAK_FUNC(sub_82AA8CB8);
PPC_FUNC_IMPL(__imp__sub_82AA8CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,299
	ctx.r3.s64 = 299;
	// addi r4,r11,-31116
	ctx.r4.s64 = ctx.r11.s64 + -31116;
	// bl 0x82316b80
	ctx.lr = 0x82AA8CD4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17432(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17432, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8CEC"))) PPC_WEAK_FUNC(sub_82AA8CEC);
PPC_FUNC_IMPL(__imp__sub_82AA8CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8CF0"))) PPC_WEAK_FUNC(sub_82AA8CF0);
PPC_FUNC_IMPL(__imp__sub_82AA8CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,267
	ctx.r3.s64 = 267;
	// addi r4,r11,-31112
	ctx.r4.s64 = ctx.r11.s64 + -31112;
	// bl 0x82316b80
	ctx.lr = 0x82AA8D0C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17431(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17431, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8D24"))) PPC_WEAK_FUNC(sub_82AA8D24);
PPC_FUNC_IMPL(__imp__sub_82AA8D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8D28"))) PPC_WEAK_FUNC(sub_82AA8D28);
PPC_FUNC_IMPL(__imp__sub_82AA8D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,266
	ctx.r3.s64 = 266;
	// addi r4,r11,-31108
	ctx.r4.s64 = ctx.r11.s64 + -31108;
	// bl 0x82316b80
	ctx.lr = 0x82AA8D44;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17430(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17430, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8D5C"))) PPC_WEAK_FUNC(sub_82AA8D5C);
PPC_FUNC_IMPL(__imp__sub_82AA8D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8D60"))) PPC_WEAK_FUNC(sub_82AA8D60);
PPC_FUNC_IMPL(__imp__sub_82AA8D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31104
	ctx.r4.s64 = ctx.r11.s64 + -31104;
	// bl 0x82316b80
	ctx.lr = 0x82AA8D7C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17429(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17429, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8D94"))) PPC_WEAK_FUNC(sub_82AA8D94);
PPC_FUNC_IMPL(__imp__sub_82AA8D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8D98"))) PPC_WEAK_FUNC(sub_82AA8D98);
PPC_FUNC_IMPL(__imp__sub_82AA8D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31100
	ctx.r4.s64 = ctx.r11.s64 + -31100;
	// bl 0x82316b80
	ctx.lr = 0x82AA8DB4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17428(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17428, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8DCC"))) PPC_WEAK_FUNC(sub_82AA8DCC);
PPC_FUNC_IMPL(__imp__sub_82AA8DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8DD0"))) PPC_WEAK_FUNC(sub_82AA8DD0);
PPC_FUNC_IMPL(__imp__sub_82AA8DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,283
	ctx.r3.s64 = 283;
	// addi r4,r11,-31096
	ctx.r4.s64 = ctx.r11.s64 + -31096;
	// bl 0x82316b80
	ctx.lr = 0x82AA8DEC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17427(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17427, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8E04"))) PPC_WEAK_FUNC(sub_82AA8E04);
PPC_FUNC_IMPL(__imp__sub_82AA8E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8E08"))) PPC_WEAK_FUNC(sub_82AA8E08);
PPC_FUNC_IMPL(__imp__sub_82AA8E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,262
	ctx.r3.s64 = 262;
	// addi r4,r11,-31092
	ctx.r4.s64 = ctx.r11.s64 + -31092;
	// bl 0x82316b80
	ctx.lr = 0x82AA8E24;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17426(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17426, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8E3C"))) PPC_WEAK_FUNC(sub_82AA8E3C);
PPC_FUNC_IMPL(__imp__sub_82AA8E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8E40"))) PPC_WEAK_FUNC(sub_82AA8E40);
PPC_FUNC_IMPL(__imp__sub_82AA8E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,261
	ctx.r3.s64 = 261;
	// addi r4,r11,-31088
	ctx.r4.s64 = ctx.r11.s64 + -31088;
	// bl 0x82316b80
	ctx.lr = 0x82AA8E5C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17425(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17425, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8E74"))) PPC_WEAK_FUNC(sub_82AA8E74);
PPC_FUNC_IMPL(__imp__sub_82AA8E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8E78"))) PPC_WEAK_FUNC(sub_82AA8E78);
PPC_FUNC_IMPL(__imp__sub_82AA8E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,256
	ctx.r3.s64 = 256;
	// addi r4,r11,-31084
	ctx.r4.s64 = ctx.r11.s64 + -31084;
	// bl 0x82316b80
	ctx.lr = 0x82AA8E94;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17424(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17424, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8EAC"))) PPC_WEAK_FUNC(sub_82AA8EAC);
PPC_FUNC_IMPL(__imp__sub_82AA8EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8EB0"))) PPC_WEAK_FUNC(sub_82AA8EB0);
PPC_FUNC_IMPL(__imp__sub_82AA8EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31080
	ctx.r4.s64 = ctx.r11.s64 + -31080;
	// bl 0x82316b80
	ctx.lr = 0x82AA8ECC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17423(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17423, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8EE4"))) PPC_WEAK_FUNC(sub_82AA8EE4);
PPC_FUNC_IMPL(__imp__sub_82AA8EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8EE8"))) PPC_WEAK_FUNC(sub_82AA8EE8);
PPC_FUNC_IMPL(__imp__sub_82AA8EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31076
	ctx.r4.s64 = ctx.r11.s64 + -31076;
	// bl 0x82316b80
	ctx.lr = 0x82AA8F04;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17422(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17422, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8F1C"))) PPC_WEAK_FUNC(sub_82AA8F1C);
PPC_FUNC_IMPL(__imp__sub_82AA8F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8F20"))) PPC_WEAK_FUNC(sub_82AA8F20);
PPC_FUNC_IMPL(__imp__sub_82AA8F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31072
	ctx.r4.s64 = ctx.r11.s64 + -31072;
	// bl 0x82316b80
	ctx.lr = 0x82AA8F3C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17421(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17421, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8F54"))) PPC_WEAK_FUNC(sub_82AA8F54);
PPC_FUNC_IMPL(__imp__sub_82AA8F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8F58"))) PPC_WEAK_FUNC(sub_82AA8F58);
PPC_FUNC_IMPL(__imp__sub_82AA8F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31068
	ctx.r4.s64 = ctx.r11.s64 + -31068;
	// bl 0x82316b80
	ctx.lr = 0x82AA8F74;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17420(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17420, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8F8C"))) PPC_WEAK_FUNC(sub_82AA8F8C);
PPC_FUNC_IMPL(__imp__sub_82AA8F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8F90"))) PPC_WEAK_FUNC(sub_82AA8F90);
PPC_FUNC_IMPL(__imp__sub_82AA8F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31064
	ctx.r4.s64 = ctx.r11.s64 + -31064;
	// bl 0x82316b80
	ctx.lr = 0x82AA8FAC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17419(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17419, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8FC4"))) PPC_WEAK_FUNC(sub_82AA8FC4);
PPC_FUNC_IMPL(__imp__sub_82AA8FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA8FC8"))) PPC_WEAK_FUNC(sub_82AA8FC8);
PPC_FUNC_IMPL(__imp__sub_82AA8FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31060
	ctx.r4.s64 = ctx.r11.s64 + -31060;
	// bl 0x82316b80
	ctx.lr = 0x82AA8FE4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17418(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17418, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA8FFC"))) PPC_WEAK_FUNC(sub_82AA8FFC);
PPC_FUNC_IMPL(__imp__sub_82AA8FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9000"))) PPC_WEAK_FUNC(sub_82AA9000);
PPC_FUNC_IMPL(__imp__sub_82AA9000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31056
	ctx.r4.s64 = ctx.r11.s64 + -31056;
	// bl 0x82316b80
	ctx.lr = 0x82AA901C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17417(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17417, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9034"))) PPC_WEAK_FUNC(sub_82AA9034);
PPC_FUNC_IMPL(__imp__sub_82AA9034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9038"))) PPC_WEAK_FUNC(sub_82AA9038);
PPC_FUNC_IMPL(__imp__sub_82AA9038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31052
	ctx.r4.s64 = ctx.r11.s64 + -31052;
	// bl 0x82316b80
	ctx.lr = 0x82AA9054;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17416(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17416, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA906C"))) PPC_WEAK_FUNC(sub_82AA906C);
PPC_FUNC_IMPL(__imp__sub_82AA906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9070"))) PPC_WEAK_FUNC(sub_82AA9070);
PPC_FUNC_IMPL(__imp__sub_82AA9070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31048
	ctx.r4.s64 = ctx.r11.s64 + -31048;
	// bl 0x82316b80
	ctx.lr = 0x82AA908C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17415(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17415, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA90A4"))) PPC_WEAK_FUNC(sub_82AA90A4);
PPC_FUNC_IMPL(__imp__sub_82AA90A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA90A8"))) PPC_WEAK_FUNC(sub_82AA90A8);
PPC_FUNC_IMPL(__imp__sub_82AA90A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,527
	ctx.r3.s64 = 527;
	// addi r4,r11,-31044
	ctx.r4.s64 = ctx.r11.s64 + -31044;
	// bl 0x82316b80
	ctx.lr = 0x82AA90C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17414(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17414, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA90DC"))) PPC_WEAK_FUNC(sub_82AA90DC);
PPC_FUNC_IMPL(__imp__sub_82AA90DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA90E0"))) PPC_WEAK_FUNC(sub_82AA90E0);
PPC_FUNC_IMPL(__imp__sub_82AA90E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,526
	ctx.r3.s64 = 526;
	// addi r4,r11,-31040
	ctx.r4.s64 = ctx.r11.s64 + -31040;
	// bl 0x82316b80
	ctx.lr = 0x82AA90FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17413(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17413, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9114"))) PPC_WEAK_FUNC(sub_82AA9114);
PPC_FUNC_IMPL(__imp__sub_82AA9114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9118"))) PPC_WEAK_FUNC(sub_82AA9118);
PPC_FUNC_IMPL(__imp__sub_82AA9118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,520
	ctx.r3.s64 = 520;
	// addi r4,r11,-31036
	ctx.r4.s64 = ctx.r11.s64 + -31036;
	// bl 0x82316b80
	ctx.lr = 0x82AA9134;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17412(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17412, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA914C"))) PPC_WEAK_FUNC(sub_82AA914C);
PPC_FUNC_IMPL(__imp__sub_82AA914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9150"))) PPC_WEAK_FUNC(sub_82AA9150);
PPC_FUNC_IMPL(__imp__sub_82AA9150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,521
	ctx.r3.s64 = 521;
	// addi r4,r11,-31032
	ctx.r4.s64 = ctx.r11.s64 + -31032;
	// bl 0x82316b80
	ctx.lr = 0x82AA916C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17411(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17411, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9184"))) PPC_WEAK_FUNC(sub_82AA9184);
PPC_FUNC_IMPL(__imp__sub_82AA9184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9188"))) PPC_WEAK_FUNC(sub_82AA9188);
PPC_FUNC_IMPL(__imp__sub_82AA9188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31028
	ctx.r4.s64 = ctx.r11.s64 + -31028;
	// bl 0x82316b80
	ctx.lr = 0x82AA91A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17410(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17410, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA91BC"))) PPC_WEAK_FUNC(sub_82AA91BC);
PPC_FUNC_IMPL(__imp__sub_82AA91BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA91C0"))) PPC_WEAK_FUNC(sub_82AA91C0);
PPC_FUNC_IMPL(__imp__sub_82AA91C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,525
	ctx.r3.s64 = 525;
	// addi r4,r11,-31024
	ctx.r4.s64 = ctx.r11.s64 + -31024;
	// bl 0x82316b80
	ctx.lr = 0x82AA91DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17409(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17409, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA91F4"))) PPC_WEAK_FUNC(sub_82AA91F4);
PPC_FUNC_IMPL(__imp__sub_82AA91F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA91F8"))) PPC_WEAK_FUNC(sub_82AA91F8);
PPC_FUNC_IMPL(__imp__sub_82AA91F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-31020
	ctx.r4.s64 = ctx.r11.s64 + -31020;
	// bl 0x82316b80
	ctx.lr = 0x82AA9214;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17408(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17408, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA922C"))) PPC_WEAK_FUNC(sub_82AA922C);
PPC_FUNC_IMPL(__imp__sub_82AA922C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9230"))) PPC_WEAK_FUNC(sub_82AA9230);
PPC_FUNC_IMPL(__imp__sub_82AA9230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,517
	ctx.r3.s64 = 517;
	// addi r4,r11,-31016
	ctx.r4.s64 = ctx.r11.s64 + -31016;
	// bl 0x82316b80
	ctx.lr = 0x82AA924C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17407(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17407, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9264"))) PPC_WEAK_FUNC(sub_82AA9264);
PPC_FUNC_IMPL(__imp__sub_82AA9264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9268"))) PPC_WEAK_FUNC(sub_82AA9268);
PPC_FUNC_IMPL(__imp__sub_82AA9268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,518
	ctx.r3.s64 = 518;
	// addi r4,r11,-31012
	ctx.r4.s64 = ctx.r11.s64 + -31012;
	// bl 0x82316b80
	ctx.lr = 0x82AA9284;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17406(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17406, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA929C"))) PPC_WEAK_FUNC(sub_82AA929C);
PPC_FUNC_IMPL(__imp__sub_82AA929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA92A0"))) PPC_WEAK_FUNC(sub_82AA92A0);
PPC_FUNC_IMPL(__imp__sub_82AA92A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,508
	ctx.r3.s64 = 508;
	// addi r4,r11,-31008
	ctx.r4.s64 = ctx.r11.s64 + -31008;
	// bl 0x82316b80
	ctx.lr = 0x82AA92BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17405(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17405, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA92D4"))) PPC_WEAK_FUNC(sub_82AA92D4);
PPC_FUNC_IMPL(__imp__sub_82AA92D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA92D8"))) PPC_WEAK_FUNC(sub_82AA92D8);
PPC_FUNC_IMPL(__imp__sub_82AA92D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,502
	ctx.r3.s64 = 502;
	// addi r4,r11,-31004
	ctx.r4.s64 = ctx.r11.s64 + -31004;
	// bl 0x82316b80
	ctx.lr = 0x82AA92F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17404(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17404, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA930C"))) PPC_WEAK_FUNC(sub_82AA930C);
PPC_FUNC_IMPL(__imp__sub_82AA930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9310"))) PPC_WEAK_FUNC(sub_82AA9310);
PPC_FUNC_IMPL(__imp__sub_82AA9310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,500
	ctx.r3.s64 = 500;
	// addi r4,r11,-31000
	ctx.r4.s64 = ctx.r11.s64 + -31000;
	// bl 0x82316b80
	ctx.lr = 0x82AA932C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17403(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17403, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9344"))) PPC_WEAK_FUNC(sub_82AA9344);
PPC_FUNC_IMPL(__imp__sub_82AA9344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9348"))) PPC_WEAK_FUNC(sub_82AA9348);
PPC_FUNC_IMPL(__imp__sub_82AA9348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,531
	ctx.r3.s64 = 531;
	// addi r4,r11,-30996
	ctx.r4.s64 = ctx.r11.s64 + -30996;
	// bl 0x82316b80
	ctx.lr = 0x82AA9364;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17402(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17402, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA937C"))) PPC_WEAK_FUNC(sub_82AA937C);
PPC_FUNC_IMPL(__imp__sub_82AA937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9380"))) PPC_WEAK_FUNC(sub_82AA9380);
PPC_FUNC_IMPL(__imp__sub_82AA9380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,537
	ctx.r3.s64 = 537;
	// addi r4,r11,-30992
	ctx.r4.s64 = ctx.r11.s64 + -30992;
	// bl 0x82316b80
	ctx.lr = 0x82AA939C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17401(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17401, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA93B4"))) PPC_WEAK_FUNC(sub_82AA93B4);
PPC_FUNC_IMPL(__imp__sub_82AA93B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA93B8"))) PPC_WEAK_FUNC(sub_82AA93B8);
PPC_FUNC_IMPL(__imp__sub_82AA93B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,533
	ctx.r3.s64 = 533;
	// addi r4,r11,-30988
	ctx.r4.s64 = ctx.r11.s64 + -30988;
	// bl 0x82316b80
	ctx.lr = 0x82AA93D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17400(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17400, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA93EC"))) PPC_WEAK_FUNC(sub_82AA93EC);
PPC_FUNC_IMPL(__imp__sub_82AA93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA93F0"))) PPC_WEAK_FUNC(sub_82AA93F0);
PPC_FUNC_IMPL(__imp__sub_82AA93F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,514
	ctx.r3.s64 = 514;
	// addi r4,r11,-30984
	ctx.r4.s64 = ctx.r11.s64 + -30984;
	// bl 0x82316b80
	ctx.lr = 0x82AA940C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17399(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17399, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9424"))) PPC_WEAK_FUNC(sub_82AA9424);
PPC_FUNC_IMPL(__imp__sub_82AA9424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9428"))) PPC_WEAK_FUNC(sub_82AA9428);
PPC_FUNC_IMPL(__imp__sub_82AA9428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30980
	ctx.r4.s64 = ctx.r11.s64 + -30980;
	// bl 0x82316b80
	ctx.lr = 0x82AA9444;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17398(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17398, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA945C"))) PPC_WEAK_FUNC(sub_82AA945C);
PPC_FUNC_IMPL(__imp__sub_82AA945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9460"))) PPC_WEAK_FUNC(sub_82AA9460);
PPC_FUNC_IMPL(__imp__sub_82AA9460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30976
	ctx.r4.s64 = ctx.r11.s64 + -30976;
	// bl 0x82316b80
	ctx.lr = 0x82AA947C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17397(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17397, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9494"))) PPC_WEAK_FUNC(sub_82AA9494);
PPC_FUNC_IMPL(__imp__sub_82AA9494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9498"))) PPC_WEAK_FUNC(sub_82AA9498);
PPC_FUNC_IMPL(__imp__sub_82AA9498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30972
	ctx.r4.s64 = ctx.r11.s64 + -30972;
	// bl 0x82316b80
	ctx.lr = 0x82AA94B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17396(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17396, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA94CC"))) PPC_WEAK_FUNC(sub_82AA94CC);
PPC_FUNC_IMPL(__imp__sub_82AA94CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA94D0"))) PPC_WEAK_FUNC(sub_82AA94D0);
PPC_FUNC_IMPL(__imp__sub_82AA94D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30968
	ctx.r4.s64 = ctx.r11.s64 + -30968;
	// bl 0x82316b80
	ctx.lr = 0x82AA94EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17395(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17395, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9504"))) PPC_WEAK_FUNC(sub_82AA9504);
PPC_FUNC_IMPL(__imp__sub_82AA9504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9508"))) PPC_WEAK_FUNC(sub_82AA9508);
PPC_FUNC_IMPL(__imp__sub_82AA9508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30964
	ctx.r4.s64 = ctx.r11.s64 + -30964;
	// bl 0x82316b80
	ctx.lr = 0x82AA9524;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17394(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17394, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA953C"))) PPC_WEAK_FUNC(sub_82AA953C);
PPC_FUNC_IMPL(__imp__sub_82AA953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9540"))) PPC_WEAK_FUNC(sub_82AA9540);
PPC_FUNC_IMPL(__imp__sub_82AA9540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30960
	ctx.r4.s64 = ctx.r11.s64 + -30960;
	// bl 0x82316b80
	ctx.lr = 0x82AA955C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17393(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17393, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9574"))) PPC_WEAK_FUNC(sub_82AA9574);
PPC_FUNC_IMPL(__imp__sub_82AA9574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9578"))) PPC_WEAK_FUNC(sub_82AA9578);
PPC_FUNC_IMPL(__imp__sub_82AA9578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30956
	ctx.r4.s64 = ctx.r11.s64 + -30956;
	// bl 0x82316b80
	ctx.lr = 0x82AA9594;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17392(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17392, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA95AC"))) PPC_WEAK_FUNC(sub_82AA95AC);
PPC_FUNC_IMPL(__imp__sub_82AA95AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA95B0"))) PPC_WEAK_FUNC(sub_82AA95B0);
PPC_FUNC_IMPL(__imp__sub_82AA95B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30952
	ctx.r4.s64 = ctx.r11.s64 + -30952;
	// bl 0x82316b80
	ctx.lr = 0x82AA95CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17391(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17391, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA95E4"))) PPC_WEAK_FUNC(sub_82AA95E4);
PPC_FUNC_IMPL(__imp__sub_82AA95E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA95E8"))) PPC_WEAK_FUNC(sub_82AA95E8);
PPC_FUNC_IMPL(__imp__sub_82AA95E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30948
	ctx.r4.s64 = ctx.r11.s64 + -30948;
	// bl 0x82316b80
	ctx.lr = 0x82AA9604;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17390(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17390, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA961C"))) PPC_WEAK_FUNC(sub_82AA961C);
PPC_FUNC_IMPL(__imp__sub_82AA961C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9620"))) PPC_WEAK_FUNC(sub_82AA9620);
PPC_FUNC_IMPL(__imp__sub_82AA9620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30944
	ctx.r4.s64 = ctx.r11.s64 + -30944;
	// bl 0x82316b80
	ctx.lr = 0x82AA963C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17389(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17389, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9654"))) PPC_WEAK_FUNC(sub_82AA9654);
PPC_FUNC_IMPL(__imp__sub_82AA9654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9658"))) PPC_WEAK_FUNC(sub_82AA9658);
PPC_FUNC_IMPL(__imp__sub_82AA9658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30940
	ctx.r4.s64 = ctx.r11.s64 + -30940;
	// bl 0x82316b80
	ctx.lr = 0x82AA9674;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17388(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17388, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA968C"))) PPC_WEAK_FUNC(sub_82AA968C);
PPC_FUNC_IMPL(__imp__sub_82AA968C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9690"))) PPC_WEAK_FUNC(sub_82AA9690);
PPC_FUNC_IMPL(__imp__sub_82AA9690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30936
	ctx.r4.s64 = ctx.r11.s64 + -30936;
	// bl 0x82316b80
	ctx.lr = 0x82AA96AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17387(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17387, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA96C4"))) PPC_WEAK_FUNC(sub_82AA96C4);
PPC_FUNC_IMPL(__imp__sub_82AA96C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA96C8"))) PPC_WEAK_FUNC(sub_82AA96C8);
PPC_FUNC_IMPL(__imp__sub_82AA96C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30932
	ctx.r4.s64 = ctx.r11.s64 + -30932;
	// bl 0x82316b80
	ctx.lr = 0x82AA96E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17386(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17386, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA96FC"))) PPC_WEAK_FUNC(sub_82AA96FC);
PPC_FUNC_IMPL(__imp__sub_82AA96FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9700"))) PPC_WEAK_FUNC(sub_82AA9700);
PPC_FUNC_IMPL(__imp__sub_82AA9700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30928
	ctx.r4.s64 = ctx.r11.s64 + -30928;
	// bl 0x82316b80
	ctx.lr = 0x82AA971C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17385(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17385, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9734"))) PPC_WEAK_FUNC(sub_82AA9734);
PPC_FUNC_IMPL(__imp__sub_82AA9734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9738"))) PPC_WEAK_FUNC(sub_82AA9738);
PPC_FUNC_IMPL(__imp__sub_82AA9738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30924
	ctx.r4.s64 = ctx.r11.s64 + -30924;
	// bl 0x82316b80
	ctx.lr = 0x82AA9754;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17384(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17384, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA976C"))) PPC_WEAK_FUNC(sub_82AA976C);
PPC_FUNC_IMPL(__imp__sub_82AA976C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9770"))) PPC_WEAK_FUNC(sub_82AA9770);
PPC_FUNC_IMPL(__imp__sub_82AA9770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30920
	ctx.r4.s64 = ctx.r11.s64 + -30920;
	// bl 0x82316b80
	ctx.lr = 0x82AA978C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17383(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17383, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA97A4"))) PPC_WEAK_FUNC(sub_82AA97A4);
PPC_FUNC_IMPL(__imp__sub_82AA97A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA97A8"))) PPC_WEAK_FUNC(sub_82AA97A8);
PPC_FUNC_IMPL(__imp__sub_82AA97A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30916
	ctx.r4.s64 = ctx.r11.s64 + -30916;
	// bl 0x82316b80
	ctx.lr = 0x82AA97C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17382(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17382, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA97DC"))) PPC_WEAK_FUNC(sub_82AA97DC);
PPC_FUNC_IMPL(__imp__sub_82AA97DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA97E0"))) PPC_WEAK_FUNC(sub_82AA97E0);
PPC_FUNC_IMPL(__imp__sub_82AA97E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30912
	ctx.r4.s64 = ctx.r11.s64 + -30912;
	// bl 0x82316b80
	ctx.lr = 0x82AA97FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17381(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17381, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9814"))) PPC_WEAK_FUNC(sub_82AA9814);
PPC_FUNC_IMPL(__imp__sub_82AA9814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9818"))) PPC_WEAK_FUNC(sub_82AA9818);
PPC_FUNC_IMPL(__imp__sub_82AA9818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30908
	ctx.r4.s64 = ctx.r11.s64 + -30908;
	// bl 0x82316b80
	ctx.lr = 0x82AA9834;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17380(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17380, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA984C"))) PPC_WEAK_FUNC(sub_82AA984C);
PPC_FUNC_IMPL(__imp__sub_82AA984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9850"))) PPC_WEAK_FUNC(sub_82AA9850);
PPC_FUNC_IMPL(__imp__sub_82AA9850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30904
	ctx.r4.s64 = ctx.r11.s64 + -30904;
	// bl 0x82316b80
	ctx.lr = 0x82AA986C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17379(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17379, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9884"))) PPC_WEAK_FUNC(sub_82AA9884);
PPC_FUNC_IMPL(__imp__sub_82AA9884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9888"))) PPC_WEAK_FUNC(sub_82AA9888);
PPC_FUNC_IMPL(__imp__sub_82AA9888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30900
	ctx.r4.s64 = ctx.r11.s64 + -30900;
	// bl 0x82316b80
	ctx.lr = 0x82AA98A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17378(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17378, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA98BC"))) PPC_WEAK_FUNC(sub_82AA98BC);
PPC_FUNC_IMPL(__imp__sub_82AA98BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA98C0"))) PPC_WEAK_FUNC(sub_82AA98C0);
PPC_FUNC_IMPL(__imp__sub_82AA98C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30896
	ctx.r4.s64 = ctx.r11.s64 + -30896;
	// bl 0x82316b80
	ctx.lr = 0x82AA98DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17377(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17377, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA98F4"))) PPC_WEAK_FUNC(sub_82AA98F4);
PPC_FUNC_IMPL(__imp__sub_82AA98F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA98F8"))) PPC_WEAK_FUNC(sub_82AA98F8);
PPC_FUNC_IMPL(__imp__sub_82AA98F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30892
	ctx.r4.s64 = ctx.r11.s64 + -30892;
	// bl 0x82316b80
	ctx.lr = 0x82AA9914;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17376(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17376, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA992C"))) PPC_WEAK_FUNC(sub_82AA992C);
PPC_FUNC_IMPL(__imp__sub_82AA992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9930"))) PPC_WEAK_FUNC(sub_82AA9930);
PPC_FUNC_IMPL(__imp__sub_82AA9930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30888
	ctx.r4.s64 = ctx.r11.s64 + -30888;
	// bl 0x82316b80
	ctx.lr = 0x82AA994C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17375(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17375, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9964"))) PPC_WEAK_FUNC(sub_82AA9964);
PPC_FUNC_IMPL(__imp__sub_82AA9964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9968"))) PPC_WEAK_FUNC(sub_82AA9968);
PPC_FUNC_IMPL(__imp__sub_82AA9968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30884
	ctx.r4.s64 = ctx.r11.s64 + -30884;
	// bl 0x82316b80
	ctx.lr = 0x82AA9984;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17374(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17374, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA999C"))) PPC_WEAK_FUNC(sub_82AA999C);
PPC_FUNC_IMPL(__imp__sub_82AA999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

