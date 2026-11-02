#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AB09A0"))) PPC_WEAK_FUNC(sub_82AB09A0);
PPC_FUNC_IMPL(__imp__sub_82AB09A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28832
	ctx.r4.s64 = ctx.r11.s64 + -28832;
	// bl 0x82316b80
	ctx.lr = 0x82AB09BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16213(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16213, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB09D4"))) PPC_WEAK_FUNC(sub_82AB09D4);
PPC_FUNC_IMPL(__imp__sub_82AB09D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB09D8"))) PPC_WEAK_FUNC(sub_82AB09D8);
PPC_FUNC_IMPL(__imp__sub_82AB09D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28828
	ctx.r4.s64 = ctx.r11.s64 + -28828;
	// bl 0x82316b80
	ctx.lr = 0x82AB09F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16212(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16212, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0A0C"))) PPC_WEAK_FUNC(sub_82AB0A0C);
PPC_FUNC_IMPL(__imp__sub_82AB0A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0A10"))) PPC_WEAK_FUNC(sub_82AB0A10);
PPC_FUNC_IMPL(__imp__sub_82AB0A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28824
	ctx.r4.s64 = ctx.r11.s64 + -28824;
	// bl 0x82316b80
	ctx.lr = 0x82AB0A2C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16211(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16211, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0A44"))) PPC_WEAK_FUNC(sub_82AB0A44);
PPC_FUNC_IMPL(__imp__sub_82AB0A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0A48"))) PPC_WEAK_FUNC(sub_82AB0A48);
PPC_FUNC_IMPL(__imp__sub_82AB0A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28820
	ctx.r4.s64 = ctx.r11.s64 + -28820;
	// bl 0x82316b80
	ctx.lr = 0x82AB0A64;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16210(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16210, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0A7C"))) PPC_WEAK_FUNC(sub_82AB0A7C);
PPC_FUNC_IMPL(__imp__sub_82AB0A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0A80"))) PPC_WEAK_FUNC(sub_82AB0A80);
PPC_FUNC_IMPL(__imp__sub_82AB0A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28816
	ctx.r4.s64 = ctx.r11.s64 + -28816;
	// bl 0x82316b80
	ctx.lr = 0x82AB0A9C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16209(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16209, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0AB4"))) PPC_WEAK_FUNC(sub_82AB0AB4);
PPC_FUNC_IMPL(__imp__sub_82AB0AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0AB8"))) PPC_WEAK_FUNC(sub_82AB0AB8);
PPC_FUNC_IMPL(__imp__sub_82AB0AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28812
	ctx.r4.s64 = ctx.r11.s64 + -28812;
	// bl 0x82316b80
	ctx.lr = 0x82AB0AD4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16208(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16208, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0AEC"))) PPC_WEAK_FUNC(sub_82AB0AEC);
PPC_FUNC_IMPL(__imp__sub_82AB0AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0AF0"))) PPC_WEAK_FUNC(sub_82AB0AF0);
PPC_FUNC_IMPL(__imp__sub_82AB0AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28808
	ctx.r4.s64 = ctx.r11.s64 + -28808;
	// bl 0x82316b80
	ctx.lr = 0x82AB0B0C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16207(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16207, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0B24"))) PPC_WEAK_FUNC(sub_82AB0B24);
PPC_FUNC_IMPL(__imp__sub_82AB0B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0B28"))) PPC_WEAK_FUNC(sub_82AB0B28);
PPC_FUNC_IMPL(__imp__sub_82AB0B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28804
	ctx.r4.s64 = ctx.r11.s64 + -28804;
	// bl 0x82316b80
	ctx.lr = 0x82AB0B44;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16206(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16206, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0B5C"))) PPC_WEAK_FUNC(sub_82AB0B5C);
PPC_FUNC_IMPL(__imp__sub_82AB0B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0B60"))) PPC_WEAK_FUNC(sub_82AB0B60);
PPC_FUNC_IMPL(__imp__sub_82AB0B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28800
	ctx.r4.s64 = ctx.r11.s64 + -28800;
	// bl 0x82316b80
	ctx.lr = 0x82AB0B7C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16205(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16205, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0B94"))) PPC_WEAK_FUNC(sub_82AB0B94);
PPC_FUNC_IMPL(__imp__sub_82AB0B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0B98"))) PPC_WEAK_FUNC(sub_82AB0B98);
PPC_FUNC_IMPL(__imp__sub_82AB0B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28796
	ctx.r4.s64 = ctx.r11.s64 + -28796;
	// bl 0x82316b80
	ctx.lr = 0x82AB0BB4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16204(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16204, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0BCC"))) PPC_WEAK_FUNC(sub_82AB0BCC);
PPC_FUNC_IMPL(__imp__sub_82AB0BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0BD0"))) PPC_WEAK_FUNC(sub_82AB0BD0);
PPC_FUNC_IMPL(__imp__sub_82AB0BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28792
	ctx.r4.s64 = ctx.r11.s64 + -28792;
	// bl 0x82316b80
	ctx.lr = 0x82AB0BEC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16203(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16203, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0C04"))) PPC_WEAK_FUNC(sub_82AB0C04);
PPC_FUNC_IMPL(__imp__sub_82AB0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0C08"))) PPC_WEAK_FUNC(sub_82AB0C08);
PPC_FUNC_IMPL(__imp__sub_82AB0C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28788
	ctx.r4.s64 = ctx.r11.s64 + -28788;
	// bl 0x82316b80
	ctx.lr = 0x82AB0C24;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16202(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16202, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0C3C"))) PPC_WEAK_FUNC(sub_82AB0C3C);
PPC_FUNC_IMPL(__imp__sub_82AB0C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0C40"))) PPC_WEAK_FUNC(sub_82AB0C40);
PPC_FUNC_IMPL(__imp__sub_82AB0C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28784
	ctx.r4.s64 = ctx.r11.s64 + -28784;
	// bl 0x82316b80
	ctx.lr = 0x82AB0C5C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16201(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16201, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0C74"))) PPC_WEAK_FUNC(sub_82AB0C74);
PPC_FUNC_IMPL(__imp__sub_82AB0C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0C78"))) PPC_WEAK_FUNC(sub_82AB0C78);
PPC_FUNC_IMPL(__imp__sub_82AB0C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28780
	ctx.r4.s64 = ctx.r11.s64 + -28780;
	// bl 0x82316b80
	ctx.lr = 0x82AB0C94;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16200(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16200, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0CAC"))) PPC_WEAK_FUNC(sub_82AB0CAC);
PPC_FUNC_IMPL(__imp__sub_82AB0CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0CB0"))) PPC_WEAK_FUNC(sub_82AB0CB0);
PPC_FUNC_IMPL(__imp__sub_82AB0CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28776
	ctx.r4.s64 = ctx.r11.s64 + -28776;
	// bl 0x82316b80
	ctx.lr = 0x82AB0CCC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16199(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16199, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0CE4"))) PPC_WEAK_FUNC(sub_82AB0CE4);
PPC_FUNC_IMPL(__imp__sub_82AB0CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0CE8"))) PPC_WEAK_FUNC(sub_82AB0CE8);
PPC_FUNC_IMPL(__imp__sub_82AB0CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28772
	ctx.r4.s64 = ctx.r11.s64 + -28772;
	// bl 0x82316b80
	ctx.lr = 0x82AB0D04;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16198(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16198, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0D1C"))) PPC_WEAK_FUNC(sub_82AB0D1C);
PPC_FUNC_IMPL(__imp__sub_82AB0D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0D20"))) PPC_WEAK_FUNC(sub_82AB0D20);
PPC_FUNC_IMPL(__imp__sub_82AB0D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28768
	ctx.r4.s64 = ctx.r11.s64 + -28768;
	// bl 0x82316b80
	ctx.lr = 0x82AB0D3C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16197(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16197, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0D54"))) PPC_WEAK_FUNC(sub_82AB0D54);
PPC_FUNC_IMPL(__imp__sub_82AB0D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0D58"))) PPC_WEAK_FUNC(sub_82AB0D58);
PPC_FUNC_IMPL(__imp__sub_82AB0D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28764
	ctx.r4.s64 = ctx.r11.s64 + -28764;
	// bl 0x82316b80
	ctx.lr = 0x82AB0D74;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16196(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16196, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0D8C"))) PPC_WEAK_FUNC(sub_82AB0D8C);
PPC_FUNC_IMPL(__imp__sub_82AB0D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0D90"))) PPC_WEAK_FUNC(sub_82AB0D90);
PPC_FUNC_IMPL(__imp__sub_82AB0D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28760
	ctx.r4.s64 = ctx.r11.s64 + -28760;
	// bl 0x82316b80
	ctx.lr = 0x82AB0DAC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16195(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16195, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0DC4"))) PPC_WEAK_FUNC(sub_82AB0DC4);
PPC_FUNC_IMPL(__imp__sub_82AB0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0DC8"))) PPC_WEAK_FUNC(sub_82AB0DC8);
PPC_FUNC_IMPL(__imp__sub_82AB0DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28756
	ctx.r4.s64 = ctx.r11.s64 + -28756;
	// bl 0x82316b80
	ctx.lr = 0x82AB0DE4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16194(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16194, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0DFC"))) PPC_WEAK_FUNC(sub_82AB0DFC);
PPC_FUNC_IMPL(__imp__sub_82AB0DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0E00"))) PPC_WEAK_FUNC(sub_82AB0E00);
PPC_FUNC_IMPL(__imp__sub_82AB0E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28752
	ctx.r4.s64 = ctx.r11.s64 + -28752;
	// bl 0x82316b80
	ctx.lr = 0x82AB0E1C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16193(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16193, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0E34"))) PPC_WEAK_FUNC(sub_82AB0E34);
PPC_FUNC_IMPL(__imp__sub_82AB0E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0E38"))) PPC_WEAK_FUNC(sub_82AB0E38);
PPC_FUNC_IMPL(__imp__sub_82AB0E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28748
	ctx.r4.s64 = ctx.r11.s64 + -28748;
	// bl 0x82316b80
	ctx.lr = 0x82AB0E54;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16192(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16192, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0E6C"))) PPC_WEAK_FUNC(sub_82AB0E6C);
PPC_FUNC_IMPL(__imp__sub_82AB0E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0E70"))) PPC_WEAK_FUNC(sub_82AB0E70);
PPC_FUNC_IMPL(__imp__sub_82AB0E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28744
	ctx.r4.s64 = ctx.r11.s64 + -28744;
	// bl 0x82316b80
	ctx.lr = 0x82AB0E8C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16191(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16191, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0EA4"))) PPC_WEAK_FUNC(sub_82AB0EA4);
PPC_FUNC_IMPL(__imp__sub_82AB0EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0EA8"))) PPC_WEAK_FUNC(sub_82AB0EA8);
PPC_FUNC_IMPL(__imp__sub_82AB0EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28740
	ctx.r4.s64 = ctx.r11.s64 + -28740;
	// bl 0x82316b80
	ctx.lr = 0x82AB0EC4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16190(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16190, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0EDC"))) PPC_WEAK_FUNC(sub_82AB0EDC);
PPC_FUNC_IMPL(__imp__sub_82AB0EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0EE0"))) PPC_WEAK_FUNC(sub_82AB0EE0);
PPC_FUNC_IMPL(__imp__sub_82AB0EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82316b80
	ctx.lr = 0x82AB0EFC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16189(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16189, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0F14"))) PPC_WEAK_FUNC(sub_82AB0F14);
PPC_FUNC_IMPL(__imp__sub_82AB0F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0F18"))) PPC_WEAK_FUNC(sub_82AB0F18);
PPC_FUNC_IMPL(__imp__sub_82AB0F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28732
	ctx.r4.s64 = ctx.r11.s64 + -28732;
	// bl 0x82316b80
	ctx.lr = 0x82AB0F34;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16188(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16188, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0F4C"))) PPC_WEAK_FUNC(sub_82AB0F4C);
PPC_FUNC_IMPL(__imp__sub_82AB0F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0F50"))) PPC_WEAK_FUNC(sub_82AB0F50);
PPC_FUNC_IMPL(__imp__sub_82AB0F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28728
	ctx.r4.s64 = ctx.r11.s64 + -28728;
	// bl 0x82316b80
	ctx.lr = 0x82AB0F6C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16187(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16187, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0F84"))) PPC_WEAK_FUNC(sub_82AB0F84);
PPC_FUNC_IMPL(__imp__sub_82AB0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0F88"))) PPC_WEAK_FUNC(sub_82AB0F88);
PPC_FUNC_IMPL(__imp__sub_82AB0F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28724
	ctx.r4.s64 = ctx.r11.s64 + -28724;
	// bl 0x82316b80
	ctx.lr = 0x82AB0FA4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16186(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16186, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0FBC"))) PPC_WEAK_FUNC(sub_82AB0FBC);
PPC_FUNC_IMPL(__imp__sub_82AB0FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0FC0"))) PPC_WEAK_FUNC(sub_82AB0FC0);
PPC_FUNC_IMPL(__imp__sub_82AB0FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28720
	ctx.r4.s64 = ctx.r11.s64 + -28720;
	// bl 0x82316b80
	ctx.lr = 0x82AB0FDC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16185(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16185, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB0FF4"))) PPC_WEAK_FUNC(sub_82AB0FF4);
PPC_FUNC_IMPL(__imp__sub_82AB0FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB0FF8"))) PPC_WEAK_FUNC(sub_82AB0FF8);
PPC_FUNC_IMPL(__imp__sub_82AB0FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28716
	ctx.r4.s64 = ctx.r11.s64 + -28716;
	// bl 0x82316b80
	ctx.lr = 0x82AB1014;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16184(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16184, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB102C"))) PPC_WEAK_FUNC(sub_82AB102C);
PPC_FUNC_IMPL(__imp__sub_82AB102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1030"))) PPC_WEAK_FUNC(sub_82AB1030);
PPC_FUNC_IMPL(__imp__sub_82AB1030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28712
	ctx.r4.s64 = ctx.r11.s64 + -28712;
	// bl 0x82316b80
	ctx.lr = 0x82AB104C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16183(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16183, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1064"))) PPC_WEAK_FUNC(sub_82AB1064);
PPC_FUNC_IMPL(__imp__sub_82AB1064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1068"))) PPC_WEAK_FUNC(sub_82AB1068);
PPC_FUNC_IMPL(__imp__sub_82AB1068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28708
	ctx.r4.s64 = ctx.r11.s64 + -28708;
	// bl 0x82316b80
	ctx.lr = 0x82AB1084;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16182(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16182, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB109C"))) PPC_WEAK_FUNC(sub_82AB109C);
PPC_FUNC_IMPL(__imp__sub_82AB109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB10A0"))) PPC_WEAK_FUNC(sub_82AB10A0);
PPC_FUNC_IMPL(__imp__sub_82AB10A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28704
	ctx.r4.s64 = ctx.r11.s64 + -28704;
	// bl 0x82316b80
	ctx.lr = 0x82AB10BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16181(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16181, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB10D4"))) PPC_WEAK_FUNC(sub_82AB10D4);
PPC_FUNC_IMPL(__imp__sub_82AB10D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB10D8"))) PPC_WEAK_FUNC(sub_82AB10D8);
PPC_FUNC_IMPL(__imp__sub_82AB10D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28700
	ctx.r4.s64 = ctx.r11.s64 + -28700;
	// bl 0x82316b80
	ctx.lr = 0x82AB10F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16180(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16180, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB110C"))) PPC_WEAK_FUNC(sub_82AB110C);
PPC_FUNC_IMPL(__imp__sub_82AB110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1110"))) PPC_WEAK_FUNC(sub_82AB1110);
PPC_FUNC_IMPL(__imp__sub_82AB1110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28696
	ctx.r4.s64 = ctx.r11.s64 + -28696;
	// bl 0x82316b80
	ctx.lr = 0x82AB112C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16179(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16179, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1144"))) PPC_WEAK_FUNC(sub_82AB1144);
PPC_FUNC_IMPL(__imp__sub_82AB1144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1148"))) PPC_WEAK_FUNC(sub_82AB1148);
PPC_FUNC_IMPL(__imp__sub_82AB1148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28692
	ctx.r4.s64 = ctx.r11.s64 + -28692;
	// bl 0x82316b80
	ctx.lr = 0x82AB1164;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16178(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16178, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB117C"))) PPC_WEAK_FUNC(sub_82AB117C);
PPC_FUNC_IMPL(__imp__sub_82AB117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1180"))) PPC_WEAK_FUNC(sub_82AB1180);
PPC_FUNC_IMPL(__imp__sub_82AB1180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28688
	ctx.r4.s64 = ctx.r11.s64 + -28688;
	// bl 0x82316b80
	ctx.lr = 0x82AB119C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16177(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16177, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB11B4"))) PPC_WEAK_FUNC(sub_82AB11B4);
PPC_FUNC_IMPL(__imp__sub_82AB11B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB11B8"))) PPC_WEAK_FUNC(sub_82AB11B8);
PPC_FUNC_IMPL(__imp__sub_82AB11B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28684
	ctx.r4.s64 = ctx.r11.s64 + -28684;
	// bl 0x82316b80
	ctx.lr = 0x82AB11D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16176(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16176, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB11EC"))) PPC_WEAK_FUNC(sub_82AB11EC);
PPC_FUNC_IMPL(__imp__sub_82AB11EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB11F0"))) PPC_WEAK_FUNC(sub_82AB11F0);
PPC_FUNC_IMPL(__imp__sub_82AB11F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28680
	ctx.r4.s64 = ctx.r11.s64 + -28680;
	// bl 0x82316b80
	ctx.lr = 0x82AB120C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16175(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16175, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1224"))) PPC_WEAK_FUNC(sub_82AB1224);
PPC_FUNC_IMPL(__imp__sub_82AB1224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1228"))) PPC_WEAK_FUNC(sub_82AB1228);
PPC_FUNC_IMPL(__imp__sub_82AB1228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28676
	ctx.r4.s64 = ctx.r11.s64 + -28676;
	// bl 0x82316b80
	ctx.lr = 0x82AB1244;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16174(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16174, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB125C"))) PPC_WEAK_FUNC(sub_82AB125C);
PPC_FUNC_IMPL(__imp__sub_82AB125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1260"))) PPC_WEAK_FUNC(sub_82AB1260);
PPC_FUNC_IMPL(__imp__sub_82AB1260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28672
	ctx.r4.s64 = ctx.r11.s64 + -28672;
	// bl 0x82316b80
	ctx.lr = 0x82AB127C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16173(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16173, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1294"))) PPC_WEAK_FUNC(sub_82AB1294);
PPC_FUNC_IMPL(__imp__sub_82AB1294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1298"))) PPC_WEAK_FUNC(sub_82AB1298);
PPC_FUNC_IMPL(__imp__sub_82AB1298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28668
	ctx.r4.s64 = ctx.r11.s64 + -28668;
	// bl 0x82316b80
	ctx.lr = 0x82AB12B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16172(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16172, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB12CC"))) PPC_WEAK_FUNC(sub_82AB12CC);
PPC_FUNC_IMPL(__imp__sub_82AB12CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB12D0"))) PPC_WEAK_FUNC(sub_82AB12D0);
PPC_FUNC_IMPL(__imp__sub_82AB12D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28664
	ctx.r4.s64 = ctx.r11.s64 + -28664;
	// bl 0x82316b80
	ctx.lr = 0x82AB12EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16171(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16171, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1304"))) PPC_WEAK_FUNC(sub_82AB1304);
PPC_FUNC_IMPL(__imp__sub_82AB1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1308"))) PPC_WEAK_FUNC(sub_82AB1308);
PPC_FUNC_IMPL(__imp__sub_82AB1308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28660
	ctx.r4.s64 = ctx.r11.s64 + -28660;
	// bl 0x82316b80
	ctx.lr = 0x82AB1324;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16170(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16170, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB133C"))) PPC_WEAK_FUNC(sub_82AB133C);
PPC_FUNC_IMPL(__imp__sub_82AB133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1340"))) PPC_WEAK_FUNC(sub_82AB1340);
PPC_FUNC_IMPL(__imp__sub_82AB1340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28656
	ctx.r4.s64 = ctx.r11.s64 + -28656;
	// bl 0x82316b80
	ctx.lr = 0x82AB135C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16169(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16169, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1374"))) PPC_WEAK_FUNC(sub_82AB1374);
PPC_FUNC_IMPL(__imp__sub_82AB1374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1378"))) PPC_WEAK_FUNC(sub_82AB1378);
PPC_FUNC_IMPL(__imp__sub_82AB1378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28652
	ctx.r4.s64 = ctx.r11.s64 + -28652;
	// bl 0x82316b80
	ctx.lr = 0x82AB1394;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16168(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16168, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB13AC"))) PPC_WEAK_FUNC(sub_82AB13AC);
PPC_FUNC_IMPL(__imp__sub_82AB13AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB13B0"))) PPC_WEAK_FUNC(sub_82AB13B0);
PPC_FUNC_IMPL(__imp__sub_82AB13B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28648
	ctx.r4.s64 = ctx.r11.s64 + -28648;
	// bl 0x82316b80
	ctx.lr = 0x82AB13CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16167(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16167, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB13E4"))) PPC_WEAK_FUNC(sub_82AB13E4);
PPC_FUNC_IMPL(__imp__sub_82AB13E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB13E8"))) PPC_WEAK_FUNC(sub_82AB13E8);
PPC_FUNC_IMPL(__imp__sub_82AB13E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28644
	ctx.r4.s64 = ctx.r11.s64 + -28644;
	// bl 0x82316b80
	ctx.lr = 0x82AB1404;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16166(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16166, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB141C"))) PPC_WEAK_FUNC(sub_82AB141C);
PPC_FUNC_IMPL(__imp__sub_82AB141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1420"))) PPC_WEAK_FUNC(sub_82AB1420);
PPC_FUNC_IMPL(__imp__sub_82AB1420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28640
	ctx.r4.s64 = ctx.r11.s64 + -28640;
	// bl 0x82316b80
	ctx.lr = 0x82AB143C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16165(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16165, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1454"))) PPC_WEAK_FUNC(sub_82AB1454);
PPC_FUNC_IMPL(__imp__sub_82AB1454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1458"))) PPC_WEAK_FUNC(sub_82AB1458);
PPC_FUNC_IMPL(__imp__sub_82AB1458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28636
	ctx.r4.s64 = ctx.r11.s64 + -28636;
	// bl 0x82316b80
	ctx.lr = 0x82AB1474;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16164(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16164, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB148C"))) PPC_WEAK_FUNC(sub_82AB148C);
PPC_FUNC_IMPL(__imp__sub_82AB148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1490"))) PPC_WEAK_FUNC(sub_82AB1490);
PPC_FUNC_IMPL(__imp__sub_82AB1490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28632
	ctx.r4.s64 = ctx.r11.s64 + -28632;
	// bl 0x82316b80
	ctx.lr = 0x82AB14AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16163(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16163, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB14C4"))) PPC_WEAK_FUNC(sub_82AB14C4);
PPC_FUNC_IMPL(__imp__sub_82AB14C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB14C8"))) PPC_WEAK_FUNC(sub_82AB14C8);
PPC_FUNC_IMPL(__imp__sub_82AB14C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28628
	ctx.r4.s64 = ctx.r11.s64 + -28628;
	// bl 0x82316b80
	ctx.lr = 0x82AB14E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16162(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16162, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB14FC"))) PPC_WEAK_FUNC(sub_82AB14FC);
PPC_FUNC_IMPL(__imp__sub_82AB14FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1500"))) PPC_WEAK_FUNC(sub_82AB1500);
PPC_FUNC_IMPL(__imp__sub_82AB1500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28624
	ctx.r4.s64 = ctx.r11.s64 + -28624;
	// bl 0x82316b80
	ctx.lr = 0x82AB151C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16161(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16161, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1534"))) PPC_WEAK_FUNC(sub_82AB1534);
PPC_FUNC_IMPL(__imp__sub_82AB1534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1538"))) PPC_WEAK_FUNC(sub_82AB1538);
PPC_FUNC_IMPL(__imp__sub_82AB1538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28620
	ctx.r4.s64 = ctx.r11.s64 + -28620;
	// bl 0x82316b80
	ctx.lr = 0x82AB1554;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16160(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16160, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB156C"))) PPC_WEAK_FUNC(sub_82AB156C);
PPC_FUNC_IMPL(__imp__sub_82AB156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1570"))) PPC_WEAK_FUNC(sub_82AB1570);
PPC_FUNC_IMPL(__imp__sub_82AB1570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28616
	ctx.r4.s64 = ctx.r11.s64 + -28616;
	// bl 0x82316b80
	ctx.lr = 0x82AB158C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16159(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16159, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB15A4"))) PPC_WEAK_FUNC(sub_82AB15A4);
PPC_FUNC_IMPL(__imp__sub_82AB15A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB15A8"))) PPC_WEAK_FUNC(sub_82AB15A8);
PPC_FUNC_IMPL(__imp__sub_82AB15A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28612
	ctx.r4.s64 = ctx.r11.s64 + -28612;
	// bl 0x82316b80
	ctx.lr = 0x82AB15C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16158(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16158, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB15DC"))) PPC_WEAK_FUNC(sub_82AB15DC);
PPC_FUNC_IMPL(__imp__sub_82AB15DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB15E0"))) PPC_WEAK_FUNC(sub_82AB15E0);
PPC_FUNC_IMPL(__imp__sub_82AB15E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28608
	ctx.r4.s64 = ctx.r11.s64 + -28608;
	// bl 0x82316b80
	ctx.lr = 0x82AB15FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16157(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16157, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1614"))) PPC_WEAK_FUNC(sub_82AB1614);
PPC_FUNC_IMPL(__imp__sub_82AB1614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1618"))) PPC_WEAK_FUNC(sub_82AB1618);
PPC_FUNC_IMPL(__imp__sub_82AB1618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28604
	ctx.r4.s64 = ctx.r11.s64 + -28604;
	// bl 0x82316b80
	ctx.lr = 0x82AB1634;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16156(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16156, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB164C"))) PPC_WEAK_FUNC(sub_82AB164C);
PPC_FUNC_IMPL(__imp__sub_82AB164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1650"))) PPC_WEAK_FUNC(sub_82AB1650);
PPC_FUNC_IMPL(__imp__sub_82AB1650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28600
	ctx.r4.s64 = ctx.r11.s64 + -28600;
	// bl 0x82316b80
	ctx.lr = 0x82AB166C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16155(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16155, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1684"))) PPC_WEAK_FUNC(sub_82AB1684);
PPC_FUNC_IMPL(__imp__sub_82AB1684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1688"))) PPC_WEAK_FUNC(sub_82AB1688);
PPC_FUNC_IMPL(__imp__sub_82AB1688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x82316b80
	ctx.lr = 0x82AB16A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16154(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16154, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB16BC"))) PPC_WEAK_FUNC(sub_82AB16BC);
PPC_FUNC_IMPL(__imp__sub_82AB16BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB16C0"))) PPC_WEAK_FUNC(sub_82AB16C0);
PPC_FUNC_IMPL(__imp__sub_82AB16C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28592
	ctx.r4.s64 = ctx.r11.s64 + -28592;
	// bl 0x82316b80
	ctx.lr = 0x82AB16DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16153(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16153, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB16F4"))) PPC_WEAK_FUNC(sub_82AB16F4);
PPC_FUNC_IMPL(__imp__sub_82AB16F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB16F8"))) PPC_WEAK_FUNC(sub_82AB16F8);
PPC_FUNC_IMPL(__imp__sub_82AB16F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28588
	ctx.r4.s64 = ctx.r11.s64 + -28588;
	// bl 0x82316b80
	ctx.lr = 0x82AB1714;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16152(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16152, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB172C"))) PPC_WEAK_FUNC(sub_82AB172C);
PPC_FUNC_IMPL(__imp__sub_82AB172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1730"))) PPC_WEAK_FUNC(sub_82AB1730);
PPC_FUNC_IMPL(__imp__sub_82AB1730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28584
	ctx.r4.s64 = ctx.r11.s64 + -28584;
	// bl 0x82316b80
	ctx.lr = 0x82AB174C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16151(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16151, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1764"))) PPC_WEAK_FUNC(sub_82AB1764);
PPC_FUNC_IMPL(__imp__sub_82AB1764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1768"))) PPC_WEAK_FUNC(sub_82AB1768);
PPC_FUNC_IMPL(__imp__sub_82AB1768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28580
	ctx.r4.s64 = ctx.r11.s64 + -28580;
	// bl 0x82316b80
	ctx.lr = 0x82AB1784;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16150(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16150, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB179C"))) PPC_WEAK_FUNC(sub_82AB179C);
PPC_FUNC_IMPL(__imp__sub_82AB179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB17A0"))) PPC_WEAK_FUNC(sub_82AB17A0);
PPC_FUNC_IMPL(__imp__sub_82AB17A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28576
	ctx.r4.s64 = ctx.r11.s64 + -28576;
	// bl 0x82316b80
	ctx.lr = 0x82AB17BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16149(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16149, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB17D4"))) PPC_WEAK_FUNC(sub_82AB17D4);
PPC_FUNC_IMPL(__imp__sub_82AB17D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB17D8"))) PPC_WEAK_FUNC(sub_82AB17D8);
PPC_FUNC_IMPL(__imp__sub_82AB17D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82316b80
	ctx.lr = 0x82AB17F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16148(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16148, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB180C"))) PPC_WEAK_FUNC(sub_82AB180C);
PPC_FUNC_IMPL(__imp__sub_82AB180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1810"))) PPC_WEAK_FUNC(sub_82AB1810);
PPC_FUNC_IMPL(__imp__sub_82AB1810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28568
	ctx.r4.s64 = ctx.r11.s64 + -28568;
	// bl 0x82316b80
	ctx.lr = 0x82AB182C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16147(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16147, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1844"))) PPC_WEAK_FUNC(sub_82AB1844);
PPC_FUNC_IMPL(__imp__sub_82AB1844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1848"))) PPC_WEAK_FUNC(sub_82AB1848);
PPC_FUNC_IMPL(__imp__sub_82AB1848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28564
	ctx.r4.s64 = ctx.r11.s64 + -28564;
	// bl 0x82316b80
	ctx.lr = 0x82AB1864;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16146(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16146, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB187C"))) PPC_WEAK_FUNC(sub_82AB187C);
PPC_FUNC_IMPL(__imp__sub_82AB187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1880"))) PPC_WEAK_FUNC(sub_82AB1880);
PPC_FUNC_IMPL(__imp__sub_82AB1880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28560
	ctx.r4.s64 = ctx.r11.s64 + -28560;
	// bl 0x82316b80
	ctx.lr = 0x82AB189C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16145(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16145, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB18B4"))) PPC_WEAK_FUNC(sub_82AB18B4);
PPC_FUNC_IMPL(__imp__sub_82AB18B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB18B8"))) PPC_WEAK_FUNC(sub_82AB18B8);
PPC_FUNC_IMPL(__imp__sub_82AB18B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28556
	ctx.r4.s64 = ctx.r11.s64 + -28556;
	// bl 0x82316b80
	ctx.lr = 0x82AB18D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16144(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16144, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB18EC"))) PPC_WEAK_FUNC(sub_82AB18EC);
PPC_FUNC_IMPL(__imp__sub_82AB18EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB18F0"))) PPC_WEAK_FUNC(sub_82AB18F0);
PPC_FUNC_IMPL(__imp__sub_82AB18F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28552
	ctx.r4.s64 = ctx.r11.s64 + -28552;
	// bl 0x82316b80
	ctx.lr = 0x82AB190C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16143(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16143, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1924"))) PPC_WEAK_FUNC(sub_82AB1924);
PPC_FUNC_IMPL(__imp__sub_82AB1924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1928"))) PPC_WEAK_FUNC(sub_82AB1928);
PPC_FUNC_IMPL(__imp__sub_82AB1928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28548
	ctx.r4.s64 = ctx.r11.s64 + -28548;
	// bl 0x82316b80
	ctx.lr = 0x82AB1944;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16142(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16142, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB195C"))) PPC_WEAK_FUNC(sub_82AB195C);
PPC_FUNC_IMPL(__imp__sub_82AB195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1960"))) PPC_WEAK_FUNC(sub_82AB1960);
PPC_FUNC_IMPL(__imp__sub_82AB1960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28544
	ctx.r4.s64 = ctx.r11.s64 + -28544;
	// bl 0x82316b80
	ctx.lr = 0x82AB197C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16141(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16141, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1994"))) PPC_WEAK_FUNC(sub_82AB1994);
PPC_FUNC_IMPL(__imp__sub_82AB1994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1998"))) PPC_WEAK_FUNC(sub_82AB1998);
PPC_FUNC_IMPL(__imp__sub_82AB1998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28540
	ctx.r4.s64 = ctx.r11.s64 + -28540;
	// bl 0x82316b80
	ctx.lr = 0x82AB19B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16140(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16140, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB19CC"))) PPC_WEAK_FUNC(sub_82AB19CC);
PPC_FUNC_IMPL(__imp__sub_82AB19CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB19D0"))) PPC_WEAK_FUNC(sub_82AB19D0);
PPC_FUNC_IMPL(__imp__sub_82AB19D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28536
	ctx.r4.s64 = ctx.r11.s64 + -28536;
	// bl 0x82316b80
	ctx.lr = 0x82AB19EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16139(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16139, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1A04"))) PPC_WEAK_FUNC(sub_82AB1A04);
PPC_FUNC_IMPL(__imp__sub_82AB1A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1A08"))) PPC_WEAK_FUNC(sub_82AB1A08);
PPC_FUNC_IMPL(__imp__sub_82AB1A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28532
	ctx.r4.s64 = ctx.r11.s64 + -28532;
	// bl 0x82316b80
	ctx.lr = 0x82AB1A24;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16138(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16138, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1A3C"))) PPC_WEAK_FUNC(sub_82AB1A3C);
PPC_FUNC_IMPL(__imp__sub_82AB1A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1A40"))) PPC_WEAK_FUNC(sub_82AB1A40);
PPC_FUNC_IMPL(__imp__sub_82AB1A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28528
	ctx.r4.s64 = ctx.r11.s64 + -28528;
	// bl 0x82316b80
	ctx.lr = 0x82AB1A5C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16137(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16137, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1A74"))) PPC_WEAK_FUNC(sub_82AB1A74);
PPC_FUNC_IMPL(__imp__sub_82AB1A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1A78"))) PPC_WEAK_FUNC(sub_82AB1A78);
PPC_FUNC_IMPL(__imp__sub_82AB1A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28524
	ctx.r4.s64 = ctx.r11.s64 + -28524;
	// bl 0x82316b80
	ctx.lr = 0x82AB1A94;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16056(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16056, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1AAC"))) PPC_WEAK_FUNC(sub_82AB1AAC);
PPC_FUNC_IMPL(__imp__sub_82AB1AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1AB0"))) PPC_WEAK_FUNC(sub_82AB1AB0);
PPC_FUNC_IMPL(__imp__sub_82AB1AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28520
	ctx.r4.s64 = ctx.r11.s64 + -28520;
	// bl 0x82316b80
	ctx.lr = 0x82AB1ACC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16055(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16055, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1AE4"))) PPC_WEAK_FUNC(sub_82AB1AE4);
PPC_FUNC_IMPL(__imp__sub_82AB1AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1AE8"))) PPC_WEAK_FUNC(sub_82AB1AE8);
PPC_FUNC_IMPL(__imp__sub_82AB1AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28516
	ctx.r4.s64 = ctx.r11.s64 + -28516;
	// bl 0x82316b80
	ctx.lr = 0x82AB1B04;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16054(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16054, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1B1C"))) PPC_WEAK_FUNC(sub_82AB1B1C);
PPC_FUNC_IMPL(__imp__sub_82AB1B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1B20"))) PPC_WEAK_FUNC(sub_82AB1B20);
PPC_FUNC_IMPL(__imp__sub_82AB1B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28512
	ctx.r4.s64 = ctx.r11.s64 + -28512;
	// bl 0x82316b80
	ctx.lr = 0x82AB1B3C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16053(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16053, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1B54"))) PPC_WEAK_FUNC(sub_82AB1B54);
PPC_FUNC_IMPL(__imp__sub_82AB1B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1B58"))) PPC_WEAK_FUNC(sub_82AB1B58);
PPC_FUNC_IMPL(__imp__sub_82AB1B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// bl 0x82316b80
	ctx.lr = 0x82AB1B74;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16052(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16052, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1B8C"))) PPC_WEAK_FUNC(sub_82AB1B8C);
PPC_FUNC_IMPL(__imp__sub_82AB1B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1B90"))) PPC_WEAK_FUNC(sub_82AB1B90);
PPC_FUNC_IMPL(__imp__sub_82AB1B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// bl 0x82316b80
	ctx.lr = 0x82AB1BAC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16051(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16051, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1BC4"))) PPC_WEAK_FUNC(sub_82AB1BC4);
PPC_FUNC_IMPL(__imp__sub_82AB1BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1BC8"))) PPC_WEAK_FUNC(sub_82AB1BC8);
PPC_FUNC_IMPL(__imp__sub_82AB1BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28500
	ctx.r4.s64 = ctx.r11.s64 + -28500;
	// bl 0x82316b80
	ctx.lr = 0x82AB1BE4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16050(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16050, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1BFC"))) PPC_WEAK_FUNC(sub_82AB1BFC);
PPC_FUNC_IMPL(__imp__sub_82AB1BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1C00"))) PPC_WEAK_FUNC(sub_82AB1C00);
PPC_FUNC_IMPL(__imp__sub_82AB1C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28496
	ctx.r4.s64 = ctx.r11.s64 + -28496;
	// bl 0x82316b80
	ctx.lr = 0x82AB1C1C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16049(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16049, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1C34"))) PPC_WEAK_FUNC(sub_82AB1C34);
PPC_FUNC_IMPL(__imp__sub_82AB1C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1C38"))) PPC_WEAK_FUNC(sub_82AB1C38);
PPC_FUNC_IMPL(__imp__sub_82AB1C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28492
	ctx.r4.s64 = ctx.r11.s64 + -28492;
	// bl 0x82316b80
	ctx.lr = 0x82AB1C54;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16048(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16048, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1C6C"))) PPC_WEAK_FUNC(sub_82AB1C6C);
PPC_FUNC_IMPL(__imp__sub_82AB1C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1C70"))) PPC_WEAK_FUNC(sub_82AB1C70);
PPC_FUNC_IMPL(__imp__sub_82AB1C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28488
	ctx.r4.s64 = ctx.r11.s64 + -28488;
	// bl 0x82316b80
	ctx.lr = 0x82AB1C8C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16047(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16047, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1CA4"))) PPC_WEAK_FUNC(sub_82AB1CA4);
PPC_FUNC_IMPL(__imp__sub_82AB1CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1CA8"))) PPC_WEAK_FUNC(sub_82AB1CA8);
PPC_FUNC_IMPL(__imp__sub_82AB1CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28484
	ctx.r4.s64 = ctx.r11.s64 + -28484;
	// bl 0x82316b80
	ctx.lr = 0x82AB1CC4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16046(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16046, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1CDC"))) PPC_WEAK_FUNC(sub_82AB1CDC);
PPC_FUNC_IMPL(__imp__sub_82AB1CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1CE0"))) PPC_WEAK_FUNC(sub_82AB1CE0);
PPC_FUNC_IMPL(__imp__sub_82AB1CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28480
	ctx.r4.s64 = ctx.r11.s64 + -28480;
	// bl 0x82316b80
	ctx.lr = 0x82AB1CFC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-16045(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16045, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1D14"))) PPC_WEAK_FUNC(sub_82AB1D14);
PPC_FUNC_IMPL(__imp__sub_82AB1D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB1D18"))) PPC_WEAK_FUNC(sub_82AB1D18);
PPC_FUNC_IMPL(__imp__sub_82AB1D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r11,r11,31704
	ctx.r11.s64 = ctx.r11.s64 + 31704;
	// addi r10,r10,31096
	ctx.r10.s64 = ctx.r10.s64 + 31096;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r9,r9,31224
	ctx.r9.s64 = ctx.r9.s64 + 31224;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r6,r6,31584
	ctx.r6.s64 = ctx.r6.s64 + 31584;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// lis r8,-32214
	ctx.r8.s64 = -2111176704;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// addi r7,r7,31464
	ctx.r7.s64 = ctx.r7.s64 + 31464;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,31344
	ctx.r8.s64 = ctx.r8.s64 + 31344;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,21408
	ctx.r11.s64 = ctx.r11.s64 + 21408;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1DE8"))) PPC_WEAK_FUNC(sub_82AB1DE8);
PPC_FUNC_IMPL(__imp__sub_82AB1DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-28640
	ctx.r10.s64 = ctx.r10.s64 + -28640;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r11,r11,21492
	ctx.r11.s64 = ctx.r11.s64 + 21492;
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1E28"))) PPC_WEAK_FUNC(sub_82AB1E28);
PPC_FUNC_IMPL(__imp__sub_82AB1E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r11,r11,5712
	ctx.r11.s64 = ctx.r11.s64 + 5712;
	// addi r10,r10,5424
	ctx.r10.s64 = ctx.r10.s64 + 5424;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r11,r11,21516
	ctx.r11.s64 = ctx.r11.s64 + 21516;
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1E88"))) PPC_WEAK_FUNC(sub_82AB1E88);
PPC_FUNC_IMPL(__imp__sub_82AB1E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r11,r11,4128
	ctx.r11.s64 = ctx.r11.s64 + 4128;
	// addi r10,r10,3624
	ctx.r10.s64 = ctx.r10.s64 + 3624;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// addi r9,r9,4016
	ctx.r9.s64 = ctx.r9.s64 + 4016;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r11,r11,21552
	ctx.r11.s64 = ctx.r11.s64 + 21552;
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1F00"))) PPC_WEAK_FUNC(sub_82AB1F00);
PPC_FUNC_IMPL(__imp__sub_82AB1F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r11,r11,-26336
	ctx.r11.s64 = ctx.r11.s64 + -26336;
	// addi r10,r10,-26592
	ctx.r10.s64 = ctx.r10.s64 + -26592;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// addi r9,r9,-26464
	ctx.r9.s64 = ctx.r9.s64 + -26464;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r11,r11,21600
	ctx.r11.s64 = ctx.r11.s64 + 21600;
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB1F78"))) PPC_WEAK_FUNC(sub_82AB1F78);
PPC_FUNC_IMPL(__imp__sub_82AB1F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r11,r11,25456
	ctx.r11.s64 = ctx.r11.s64 + 25456;
	// addi r10,r10,-25736
	ctx.r10.s64 = ctx.r10.s64 + -25736;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r5,-32218
	ctx.r5.s64 = -2111438848;
	// addi r9,r9,1192
	ctx.r9.s64 = ctx.r9.s64 + 1192;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r5,r5,25168
	ctx.r5.s64 = ctx.r5.s64 + 25168;
	// lis r6,-32218
	ctx.r6.s64 = -2111438848;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// addi r6,r6,24928
	ctx.r6.s64 = ctx.r6.s64 + 24928;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r7,r7,1672
	ctx.r7.s64 = ctx.r7.s64 + 1672;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r8,r8,1448
	ctx.r8.s64 = ctx.r8.s64 + 1448;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,21648
	ctx.r11.s64 = ctx.r11.s64 + 21648;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2060"))) PPC_WEAK_FUNC(sub_82AB2060);
PPC_FUNC_IMPL(__imp__sub_82AB2060) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,-27248
	ctx.r11.s64 = ctx.r11.s64 + -27248;
	// addi r10,r10,-28600
	ctx.r10.s64 = ctx.r10.s64 + -28600;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r31,-32217
	ctx.r31.s64 = -2111373312;
	// addi r9,r9,-28488
	ctx.r9.s64 = ctx.r9.s64 + -28488;
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r31,r31,-27392
	ctx.r31.s64 = ctx.r31.s64 + -27392;
	// lis r3,-32217
	ctx.r3.s64 = -2111373312;
	// lis r4,-32217
	ctx.r4.s64 = -2111373312;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// addi r3,r3,-27632
	ctx.r3.s64 = ctx.r3.s64 + -27632;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// addi r4,r4,-27832
	ctx.r4.s64 = ctx.r4.s64 + -27832;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// lis r5,-32217
	ctx.r5.s64 = -2111373312;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r6,-32217
	ctx.r6.s64 = -2111373312;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r5,r5,-27944
	ctx.r5.s64 = ctx.r5.s64 + -27944;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r6,r6,-28136
	ctx.r6.s64 = ctx.r6.s64 + -28136;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r7,r7,-28248
	ctx.r7.s64 = ctx.r7.s64 + -28248;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// addi r8,r8,-28376
	ctx.r8.s64 = ctx.r8.s64 + -28376;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// addi r11,r11,21744
	ctx.r11.s64 = ctx.r11.s64 + 21744;
	// stw r31,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r31.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r3,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r3.u32);
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB21A8"))) PPC_WEAK_FUNC(sub_82AB21A8);
PPC_FUNC_IMPL(__imp__sub_82AB21A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,26776
	ctx.r11.s64 = ctx.r11.s64 + 26776;
	// addi r10,r10,9984
	ctx.r10.s64 = ctx.r10.s64 + 9984;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r7,-32218
	ctx.r7.s64 = -2111438848;
	// addi r9,r9,10344
	ctx.r9.s64 = ctx.r9.s64 + 10344;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r7,r7,26552
	ctx.r7.s64 = ctx.r7.s64 + 26552;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// addi r8,r8,26376
	ctx.r8.s64 = ctx.r8.s64 + 26376;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,21912
	ctx.r11.s64 = ctx.r11.s64 + 21912;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2258"))) PPC_WEAK_FUNC(sub_82AB2258);
PPC_FUNC_IMPL(__imp__sub_82AB2258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,-25736
	ctx.r11.s64 = ctx.r11.s64 + -25736;
	// addi r10,r10,-26680
	ctx.r10.s64 = ctx.r10.s64 + -26680;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// addi r9,r9,-26496
	ctx.r9.s64 = ctx.r9.s64 + -26496;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r7,r7,-25904
	ctx.r7.s64 = ctx.r7.s64 + -25904;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// addi r8,r8,-26168
	ctx.r8.s64 = ctx.r8.s64 + -26168;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,21984
	ctx.r11.s64 = ctx.r11.s64 + 21984;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2308"))) PPC_WEAK_FUNC(sub_82AB2308);
PPC_FUNC_IMPL(__imp__sub_82AB2308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 + 552;
	// addi r10,r10,-256
	ctx.r10.s64 = ctx.r10.s64 + -256;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r6,-32217
	ctx.r6.s64 = -2111373312;
	// addi r9,r9,15456
	ctx.r9.s64 = ctx.r9.s64 + 15456;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r6,r6,432
	ctx.r6.s64 = ctx.r6.s64 + 432;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// addi r7,r7,192
	ctx.r7.s64 = ctx.r7.s64 + 192;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,-96
	ctx.r8.s64 = ctx.r8.s64 + -96;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,22056
	ctx.r11.s64 = ctx.r11.s64 + 22056;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB23D8"))) PPC_WEAK_FUNC(sub_82AB23D8);
PPC_FUNC_IMPL(__imp__sub_82AB23D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// addi r10,r10,28008
	ctx.r10.s64 = ctx.r10.s64 + 28008;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// addi r9,r9,3432
	ctx.r9.s64 = ctx.r9.s64 + 3432;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r4,r4,13728
	ctx.r4.s64 = ctx.r4.s64 + 13728;
	// lis r5,-32217
	ctx.r5.s64 = -2111373312;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// addi r5,r5,2176
	ctx.r5.s64 = ctx.r5.s64 + 2176;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r6,r6,13472
	ctx.r6.s64 = ctx.r6.s64 + 13472;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r7,r7,1984
	ctx.r7.s64 = ctx.r7.s64 + 1984;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r8,r8,3728
	ctx.r8.s64 = ctx.r8.s64 + 3728;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,22144
	ctx.r11.s64 = ctx.r11.s64 + 22144;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB24E0"))) PPC_WEAK_FUNC(sub_82AB24E0);
PPC_FUNC_IMPL(__imp__sub_82AB24E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,-16312
	ctx.r11.s64 = ctx.r11.s64 + -16312;
	// addi r10,r10,-20336
	ctx.r10.s64 = ctx.r10.s64 + -20336;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r11,r11,21876
	ctx.r11.s64 = ctx.r11.s64 + 21876;
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2540"))) PPC_WEAK_FUNC(sub_82AB2540);
PPC_FUNC_IMPL(__imp__sub_82AB2540) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-10744
	ctx.r10.s64 = ctx.r10.s64 + -10744;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r11,r11,22252
	ctx.r11.s64 = ctx.r11.s64 + 22252;
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2580"))) PPC_WEAK_FUNC(sub_82AB2580);
PPC_FUNC_IMPL(__imp__sub_82AB2580) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-10744
	ctx.r10.s64 = ctx.r10.s64 + -10744;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r11,r11,22276
	ctx.r11.s64 = ctx.r11.s64 + 22276;
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB25C0"))) PPC_WEAK_FUNC(sub_82AB25C0);
PPC_FUNC_IMPL(__imp__sub_82AB25C0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,11568
	ctx.r11.s64 = ctx.r11.s64 + 11568;
	// addi r10,r10,-29800
	ctx.r10.s64 = ctx.r10.s64 + -29800;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r31,-32217
	ctx.r31.s64 = -2111373312;
	// addi r9,r9,5952
	ctx.r9.s64 = ctx.r9.s64 + 5952;
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r31,r31,8840
	ctx.r31.s64 = ctx.r31.s64 + 8840;
	// lis r3,-32217
	ctx.r3.s64 = -2111373312;
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// addi r3,r3,15672
	ctx.r3.s64 = ctx.r3.s64 + 15672;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// addi r4,r4,14064
	ctx.r4.s64 = ctx.r4.s64 + 14064;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// lis r5,-32217
	ctx.r5.s64 = -2111373312;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r6,-32217
	ctx.r6.s64 = -2111373312;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r5,r5,15416
	ctx.r5.s64 = ctx.r5.s64 + 15416;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r6,r6,6712
	ctx.r6.s64 = ctx.r6.s64 + 6712;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r7,r7,6528
	ctx.r7.s64 = ctx.r7.s64 + 6528;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// addi r8,r8,6232
	ctx.r8.s64 = ctx.r8.s64 + 6232;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// addi r11,r11,22304
	ctx.r11.s64 = ctx.r11.s64 + 22304;
	// stw r31,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r31.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r3,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r3.u32);
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2708"))) PPC_WEAK_FUNC(sub_82AB2708);
PPC_FUNC_IMPL(__imp__sub_82AB2708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r11,r11,11568
	ctx.r11.s64 = ctx.r11.s64 + 11568;
	// addi r10,r10,21320
	ctx.r10.s64 = ctx.r10.s64 + 21320;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r5,-32217
	ctx.r5.s64 = -2111373312;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r5,r5,8840
	ctx.r5.s64 = ctx.r5.s64 + 8840;
	// lis r6,-32217
	ctx.r6.s64 = -2111373312;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// addi r6,r6,15672
	ctx.r6.s64 = ctx.r6.s64 + 15672;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r7,r7,14064
	ctx.r7.s64 = ctx.r7.s64 + 14064;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r8,r8,15416
	ctx.r8.s64 = ctx.r8.s64 + 15416;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,22440
	ctx.r11.s64 = ctx.r11.s64 + 22440;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB27F0"))) PPC_WEAK_FUNC(sub_82AB27F0);
PPC_FUNC_IMPL(__imp__sub_82AB27F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,8840
	ctx.r11.s64 = ctx.r11.s64 + 8840;
	// addi r10,r10,8408
	ctx.r10.s64 = ctx.r10.s64 + 8408;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r5,-32217
	ctx.r5.s64 = -2111373312;
	// addi r9,r9,8616
	ctx.r9.s64 = ctx.r9.s64 + 8616;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r5,r5,15672
	ctx.r5.s64 = ctx.r5.s64 + 15672;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// addi r6,r6,14064
	ctx.r6.s64 = ctx.r6.s64 + 14064;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r7,r7,15416
	ctx.r7.s64 = ctx.r7.s64 + 15416;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r8,r8,6712
	ctx.r8.s64 = ctx.r8.s64 + 6712;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,22536
	ctx.r11.s64 = ctx.r11.s64 + 22536;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB28D8"))) PPC_WEAK_FUNC(sub_82AB28D8);
PPC_FUNC_IMPL(__imp__sub_82AB28D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,13728
	ctx.r11.s64 = ctx.r11.s64 + 13728;
	// addi r10,r10,2872
	ctx.r10.s64 = ctx.r10.s64 + 2872;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r4,-32217
	ctx.r4.s64 = -2111373312;
	// addi r9,r9,3208
	ctx.r9.s64 = ctx.r9.s64 + 3208;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r4,r4,2176
	ctx.r4.s64 = ctx.r4.s64 + 2176;
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// lis r6,-32217
	ctx.r6.s64 = -2111373312;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// addi r5,r5,13472
	ctx.r5.s64 = ctx.r5.s64 + 13472;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r6,r6,1984
	ctx.r6.s64 = ctx.r6.s64 + 1984;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r7,r7,3728
	ctx.r7.s64 = ctx.r7.s64 + 3728;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r8,r8,3432
	ctx.r8.s64 = ctx.r8.s64 + 3432;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,22632
	ctx.r11.s64 = ctx.r11.s64 + 22632;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB29E0"))) PPC_WEAK_FUNC(sub_82AB29E0);
PPC_FUNC_IMPL(__imp__sub_82AB29E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x82AB29E8;
	__savegprlr_23(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,11568
	ctx.r11.s64 = ctx.r11.s64 + 11568;
	// addi r10,r10,8968
	ctx.r10.s64 = ctx.r10.s64 + 8968;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r23,-32217
	ctx.r23.s64 = -2111373312;
	// addi r9,r9,9232
	ctx.r9.s64 = ctx.r9.s64 + 9232;
	// stw r11,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r10.u32);
	// lis r24,-32217
	ctx.r24.s64 = -2111373312;
	// lis r25,-32228
	ctx.r25.s64 = -2112094208;
	// lis r26,-32217
	ctx.r26.s64 = -2111373312;
	// lis r27,-32217
	ctx.r27.s64 = -2111373312;
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// lis r28,-32217
	ctx.r28.s64 = -2111373312;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r29,-32217
	ctx.r29.s64 = -2111373312;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// lis r30,-32217
	ctx.r30.s64 = -2111373312;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// lis r31,-32217
	ctx.r31.s64 = -2111373312;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// lis r3,-32217
	ctx.r3.s64 = -2111373312;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// lis r4,-32217
	ctx.r4.s64 = -2111373312;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// lis r5,-32217
	ctx.r5.s64 = -2111373312;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lis r6,-32217
	ctx.r6.s64 = -2111373312;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// addi r23,r23,8840
	ctx.r23.s64 = ctx.r23.s64 + 8840;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// addi r24,r24,15672
	ctx.r24.s64 = ctx.r24.s64 + 15672;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// addi r25,r25,14064
	ctx.r25.s64 = ctx.r25.s64 + 14064;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r26,r26,15416
	ctx.r26.s64 = ctx.r26.s64 + 15416;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// addi r27,r27,6712
	ctx.r27.s64 = ctx.r27.s64 + 6712;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r28,r28,11400
	ctx.r28.s64 = ctx.r28.s64 + 11400;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r29,r29,11232
	ctx.r29.s64 = ctx.r29.s64 + 11232;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r30,r30,10960
	ctx.r30.s64 = ctx.r30.s64 + 10960;
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r31,r31,10608
	ctx.r31.s64 = ctx.r31.s64 + 10608;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// addi r3,r3,10440
	ctx.r3.s64 = ctx.r3.s64 + 10440;
	// addi r11,r11,22744
	ctx.r11.s64 = ctx.r11.s64 + 22744;
	// stw r23,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r23.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r24,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r24.u32);
	// addi r4,r4,10288
	ctx.r4.s64 = ctx.r4.s64 + 10288;
	// stw r25,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r25.u32);
	// addi r5,r5,10032
	ctx.r5.s64 = ctx.r5.s64 + 10032;
	// stw r26,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r26.u32);
	// addi r6,r6,9776
	ctx.r6.s64 = ctx.r6.s64 + 9776;
	// stw r27,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r27.u32);
	// addi r7,r7,9568
	ctx.r7.s64 = ctx.r7.s64 + 9568;
	// stw r28,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r28.u32);
	// addi r8,r8,9376
	ctx.r8.s64 = ctx.r8.s64 + 9376;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r29,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r29.u32);
	// stw r30,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r30.u32);
	// stw r31,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r31.u32);
	// stw r3,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r3.u32);
	// stw r4,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// stw r6,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// stw r7,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r7.u32);
	// stw r8,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r8.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-200(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// ld r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r10,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r10.u64);
	// ld r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// ld r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r10,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r10.u64);
	// ld r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// ld r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r10,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r10.u64);
	// ld r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// ld r10,-112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r10,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r10.u64);
	// ld r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r9.u32);
	// stw r10,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB2C08"))) PPC_WEAK_FUNC(sub_82AB2C08);
PPC_FUNC_IMPL(__imp__sub_82AB2C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,11568
	ctx.r11.s64 = ctx.r11.s64 + 11568;
	// addi r10,r10,7328
	ctx.r10.s64 = ctx.r10.s64 + 7328;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r5,-32217
	ctx.r5.s64 = -2111373312;
	// addi r9,r9,7560
	ctx.r9.s64 = ctx.r9.s64 + 7560;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r5,r5,15672
	ctx.r5.s64 = ctx.r5.s64 + 15672;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// addi r6,r6,14064
	ctx.r6.s64 = ctx.r6.s64 + 14064;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r7,r7,7960
	ctx.r7.s64 = ctx.r7.s64 + 7960;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r8,r8,7792
	ctx.r8.s64 = ctx.r8.s64 + 7792;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,22976
	ctx.r11.s64 = ctx.r11.s64 + 22976;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2CF0"))) PPC_WEAK_FUNC(sub_82AB2CF0);
PPC_FUNC_IMPL(__imp__sub_82AB2CF0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,16192
	ctx.r11.s64 = ctx.r11.s64 + 16192;
	// addi r10,r10,-8480
	ctx.r10.s64 = ctx.r10.s64 + -8480;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r30,-32217
	ctx.r30.s64 = -2111373312;
	// addi r9,r9,-7880
	ctx.r9.s64 = ctx.r9.s64 + -7880;
	// stw r11,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// addi r30,r30,11904
	ctx.r30.s64 = ctx.r30.s64 + 11904;
	// lis r31,-32217
	ctx.r31.s64 = -2111373312;
	// lis r3,-32217
	ctx.r3.s64 = -2111373312;
	// stw r9,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r9.u32);
	// addi r31,r31,11568
	ctx.r31.s64 = ctx.r31.s64 + 11568;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r3,r3,8840
	ctx.r3.s64 = ctx.r3.s64 + 8840;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r4,-32217
	ctx.r4.s64 = -2111373312;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r4,r4,15672
	ctx.r4.s64 = ctx.r4.s64 + 15672;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r5,r5,14064
	ctx.r5.s64 = ctx.r5.s64 + 14064;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r6,-32217
	ctx.r6.s64 = -2111373312;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r6,r6,15416
	ctx.r6.s64 = ctx.r6.s64 + 15416;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r7,r7,6712
	ctx.r7.s64 = ctx.r7.s64 + 6712;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// addi r8,r8,-7280
	ctx.r8.s64 = ctx.r8.s64 + -7280;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// addi r11,r11,23072
	ctx.r11.s64 = ctx.r11.s64 + 23072;
	// stw r30,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r30.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r31,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r31.u32);
	// stw r3,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r3.u32);
	// stw r4,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r4.u32);
	// stw r5,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r5.u32);
	// stw r6,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r6.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// stw r7,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r7.u32);
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r10.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2E58"))) PPC_WEAK_FUNC(sub_82AB2E58);
PPC_FUNC_IMPL(__imp__sub_82AB2E58) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,16192
	ctx.r11.s64 = ctx.r11.s64 + 16192;
	// addi r10,r10,-8480
	ctx.r10.s64 = ctx.r10.s64 + -8480;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r30,-32217
	ctx.r30.s64 = -2111373312;
	// addi r9,r9,-3144
	ctx.r9.s64 = ctx.r9.s64 + -3144;
	// stw r11,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// addi r30,r30,15928
	ctx.r30.s64 = ctx.r30.s64 + 15928;
	// lis r31,-32217
	ctx.r31.s64 = -2111373312;
	// lis r3,-32217
	ctx.r3.s64 = -2111373312;
	// stw r9,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r9.u32);
	// addi r31,r31,11568
	ctx.r31.s64 = ctx.r31.s64 + 11568;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r3,r3,8840
	ctx.r3.s64 = ctx.r3.s64 + 8840;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r4,-32217
	ctx.r4.s64 = -2111373312;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r4,r4,15672
	ctx.r4.s64 = ctx.r4.s64 + 15672;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r5,r5,14064
	ctx.r5.s64 = ctx.r5.s64 + 14064;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r6,-32217
	ctx.r6.s64 = -2111373312;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r6,r6,15416
	ctx.r6.s64 = ctx.r6.s64 + 15416;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r7,r7,6712
	ctx.r7.s64 = ctx.r7.s64 + 6712;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// addi r8,r8,-2544
	ctx.r8.s64 = ctx.r8.s64 + -2544;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// addi r11,r11,23216
	ctx.r11.s64 = ctx.r11.s64 + 23216;
	// stw r30,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r30.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r31,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r31.u32);
	// stw r3,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r3.u32);
	// stw r4,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r4.u32);
	// stw r5,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r5.u32);
	// stw r6,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r6.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// stw r7,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r7.u32);
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r10.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB2FC0"))) PPC_WEAK_FUNC(sub_82AB2FC0);
PPC_FUNC_IMPL(__imp__sub_82AB2FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,18592
	ctx.r11.s64 = ctx.r11.s64 + 18592;
	// addi r10,r10,17968
	ctx.r10.s64 = ctx.r10.s64 + 17968;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// addi r9,r9,18096
	ctx.r9.s64 = ctx.r9.s64 + 18096;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r7,r7,18424
	ctx.r7.s64 = ctx.r7.s64 + 18424;
	// lis r8,-32204
	ctx.r8.s64 = -2110521344;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// addi r8,r8,-32256
	ctx.r8.s64 = ctx.r8.s64 + -32256;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,23360
	ctx.r11.s64 = ctx.r11.s64 + 23360;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3070"))) PPC_WEAK_FUNC(sub_82AB3070);
PPC_FUNC_IMPL(__imp__sub_82AB3070) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,18848
	ctx.r10.s64 = ctx.r10.s64 + 18848;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r11,r11,23432
	ctx.r11.s64 = ctx.r11.s64 + 23432;
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB30B0"))) PPC_WEAK_FUNC(sub_82AB30B0);
PPC_FUNC_IMPL(__imp__sub_82AB30B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6112
	ctx.r3.s64 = ctx.r11.s64 + 6112;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB30BC"))) PPC_WEAK_FUNC(sub_82AB30BC);
PPC_FUNC_IMPL(__imp__sub_82AB30BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB30C0"))) PPC_WEAK_FUNC(sub_82AB30C0);
PPC_FUNC_IMPL(__imp__sub_82AB30C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6128
	ctx.r3.s64 = ctx.r11.s64 + 6128;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB30CC"))) PPC_WEAK_FUNC(sub_82AB30CC);
PPC_FUNC_IMPL(__imp__sub_82AB30CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB30D0"))) PPC_WEAK_FUNC(sub_82AB30D0);
PPC_FUNC_IMPL(__imp__sub_82AB30D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6144
	ctx.r3.s64 = ctx.r11.s64 + 6144;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB30DC"))) PPC_WEAK_FUNC(sub_82AB30DC);
PPC_FUNC_IMPL(__imp__sub_82AB30DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB30E0"))) PPC_WEAK_FUNC(sub_82AB30E0);
PPC_FUNC_IMPL(__imp__sub_82AB30E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB30EC"))) PPC_WEAK_FUNC(sub_82AB30EC);
PPC_FUNC_IMPL(__imp__sub_82AB30EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB30F0"))) PPC_WEAK_FUNC(sub_82AB30F0);
PPC_FUNC_IMPL(__imp__sub_82AB30F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6176
	ctx.r3.s64 = ctx.r11.s64 + 6176;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB30FC"))) PPC_WEAK_FUNC(sub_82AB30FC);
PPC_FUNC_IMPL(__imp__sub_82AB30FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3100"))) PPC_WEAK_FUNC(sub_82AB3100);
PPC_FUNC_IMPL(__imp__sub_82AB3100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6280
	ctx.r3.s64 = ctx.r11.s64 + 6280;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB310C"))) PPC_WEAK_FUNC(sub_82AB310C);
PPC_FUNC_IMPL(__imp__sub_82AB310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3110"))) PPC_WEAK_FUNC(sub_82AB3110);
PPC_FUNC_IMPL(__imp__sub_82AB3110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6296
	ctx.r3.s64 = ctx.r11.s64 + 6296;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB311C"))) PPC_WEAK_FUNC(sub_82AB311C);
PPC_FUNC_IMPL(__imp__sub_82AB311C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3120"))) PPC_WEAK_FUNC(sub_82AB3120);
PPC_FUNC_IMPL(__imp__sub_82AB3120) {
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
	// addi r11,r11,-14848
	ctx.r11.s64 = ctx.r11.s64 + -14848;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3158"))) PPC_WEAK_FUNC(sub_82AB3158);
PPC_FUNC_IMPL(__imp__sub_82AB3158) {
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
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3188"))) PPC_WEAK_FUNC(sub_82AB3188);
PPC_FUNC_IMPL(__imp__sub_82AB3188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6408
	ctx.r3.s64 = ctx.r11.s64 + 6408;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB3194"))) PPC_WEAK_FUNC(sub_82AB3194);
PPC_FUNC_IMPL(__imp__sub_82AB3194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3198"))) PPC_WEAK_FUNC(sub_82AB3198);
PPC_FUNC_IMPL(__imp__sub_82AB3198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6432
	ctx.r3.s64 = ctx.r11.s64 + 6432;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB31A4"))) PPC_WEAK_FUNC(sub_82AB31A4);
PPC_FUNC_IMPL(__imp__sub_82AB31A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB31A8"))) PPC_WEAK_FUNC(sub_82AB31A8);
PPC_FUNC_IMPL(__imp__sub_82AB31A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// lis r9,-32084
	ctx.r9.s64 = -2102657024;
	// addi r10,r10,-8700
	ctx.r10.s64 = ctx.r10.s64 + -8700;
	// addi r3,r9,6456
	ctx.r3.s64 = ctx.r9.s64 + 6456;
	// lwz r11,-23784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23784);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB31C8"))) PPC_WEAK_FUNC(sub_82AB31C8);
PPC_FUNC_IMPL(__imp__sub_82AB31C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x827a7b08
	ctx.lr = 0x82AB31D8;
	sub_827A7B08(ctx, base);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,-8592
	ctx.r11.s64 = ctx.r11.s64 + -8592;
	// addi r10,r10,11372
	ctx.r10.s64 = ctx.r10.s64 + 11372;
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// bl 0x82ac63b4
	ctx.lr = 0x82AB31F8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6480
	ctx.r3.s64 = ctx.r11.s64 + 6480;
	// bl 0x828d1968
	ctx.lr = 0x82AB3204;
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

__attribute__((alias("__imp__sub_82AB3214"))) PPC_WEAK_FUNC(sub_82AB3214);
PPC_FUNC_IMPL(__imp__sub_82AB3214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3218"))) PPC_WEAK_FUNC(sub_82AB3218);
PPC_FUNC_IMPL(__imp__sub_82AB3218) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82AB3220;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r29,r11,-14864
	ctx.r29.s64 = ctx.r11.s64 + -14864;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lfd f30,25824(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 25824);
	// lfs f31,10812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10812);
	ctx.f31.f64 = double(temp.f32);
loc_82AB324C:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmul f0,f0,f30
	ctx.f0.f64 = ctx.f0.f64 * ctx.f30.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x828d0838
	ctx.lr = 0x82AB3270;
	sub_828D0838(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ab324c
	if (cr6.lt) goto loc_82AB324C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB329C"))) PPC_WEAK_FUNC(sub_82AB329C);
PPC_FUNC_IMPL(__imp__sub_82AB329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB32A0"))) PPC_WEAK_FUNC(sub_82AB32A0);
PPC_FUNC_IMPL(__imp__sub_82AB32A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6496
	ctx.r3.s64 = ctx.r11.s64 + 6496;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB32AC"))) PPC_WEAK_FUNC(sub_82AB32AC);
PPC_FUNC_IMPL(__imp__sub_82AB32AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB32B0"))) PPC_WEAK_FUNC(sub_82AB32B0);
PPC_FUNC_IMPL(__imp__sub_82AB32B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32364
	ctx.r4.s64 = ctx.r11.s64 + -32364;
	// bl 0x82316b80
	ctx.lr = 0x82AB32CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14832(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14832, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB32E4"))) PPC_WEAK_FUNC(sub_82AB32E4);
PPC_FUNC_IMPL(__imp__sub_82AB32E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB32E8"))) PPC_WEAK_FUNC(sub_82AB32E8);
PPC_FUNC_IMPL(__imp__sub_82AB32E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32360
	ctx.r4.s64 = ctx.r11.s64 + -32360;
	// bl 0x82316b80
	ctx.lr = 0x82AB3304;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14831(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14831, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB331C"))) PPC_WEAK_FUNC(sub_82AB331C);
PPC_FUNC_IMPL(__imp__sub_82AB331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3320"))) PPC_WEAK_FUNC(sub_82AB3320);
PPC_FUNC_IMPL(__imp__sub_82AB3320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32356
	ctx.r4.s64 = ctx.r11.s64 + -32356;
	// bl 0x82316b80
	ctx.lr = 0x82AB333C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14830(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14830, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3354"))) PPC_WEAK_FUNC(sub_82AB3354);
PPC_FUNC_IMPL(__imp__sub_82AB3354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3358"))) PPC_WEAK_FUNC(sub_82AB3358);
PPC_FUNC_IMPL(__imp__sub_82AB3358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32352
	ctx.r4.s64 = ctx.r11.s64 + -32352;
	// bl 0x82316b80
	ctx.lr = 0x82AB3374;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14829(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14829, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB338C"))) PPC_WEAK_FUNC(sub_82AB338C);
PPC_FUNC_IMPL(__imp__sub_82AB338C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3390"))) PPC_WEAK_FUNC(sub_82AB3390);
PPC_FUNC_IMPL(__imp__sub_82AB3390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32348
	ctx.r4.s64 = ctx.r11.s64 + -32348;
	// bl 0x82316b80
	ctx.lr = 0x82AB33AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14828(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14828, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB33C4"))) PPC_WEAK_FUNC(sub_82AB33C4);
PPC_FUNC_IMPL(__imp__sub_82AB33C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB33C8"))) PPC_WEAK_FUNC(sub_82AB33C8);
PPC_FUNC_IMPL(__imp__sub_82AB33C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32344
	ctx.r4.s64 = ctx.r11.s64 + -32344;
	// bl 0x82316b80
	ctx.lr = 0x82AB33E4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14827(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14827, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB33FC"))) PPC_WEAK_FUNC(sub_82AB33FC);
PPC_FUNC_IMPL(__imp__sub_82AB33FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3400"))) PPC_WEAK_FUNC(sub_82AB3400);
PPC_FUNC_IMPL(__imp__sub_82AB3400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32340
	ctx.r4.s64 = ctx.r11.s64 + -32340;
	// bl 0x82316b80
	ctx.lr = 0x82AB341C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14826(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14826, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3434"))) PPC_WEAK_FUNC(sub_82AB3434);
PPC_FUNC_IMPL(__imp__sub_82AB3434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3438"))) PPC_WEAK_FUNC(sub_82AB3438);
PPC_FUNC_IMPL(__imp__sub_82AB3438) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,65
	ctx.r3.s64 = 65;
	// addi r4,r11,31892
	ctx.r4.s64 = ctx.r11.s64 + 31892;
	// bl 0x82316b80
	ctx.lr = 0x82AB3454;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14568(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14568, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB346C"))) PPC_WEAK_FUNC(sub_82AB346C);
PPC_FUNC_IMPL(__imp__sub_82AB346C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3470"))) PPC_WEAK_FUNC(sub_82AB3470);
PPC_FUNC_IMPL(__imp__sub_82AB3470) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31896
	ctx.r4.s64 = ctx.r11.s64 + 31896;
	// bl 0x82316b80
	ctx.lr = 0x82AB348C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14567(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14567, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB34A4"))) PPC_WEAK_FUNC(sub_82AB34A4);
PPC_FUNC_IMPL(__imp__sub_82AB34A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB34A8"))) PPC_WEAK_FUNC(sub_82AB34A8);
PPC_FUNC_IMPL(__imp__sub_82AB34A8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,31900
	ctx.r4.s64 = ctx.r11.s64 + 31900;
	// bl 0x82316b80
	ctx.lr = 0x82AB34C4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14566(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14566, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB34DC"))) PPC_WEAK_FUNC(sub_82AB34DC);
PPC_FUNC_IMPL(__imp__sub_82AB34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB34E0"))) PPC_WEAK_FUNC(sub_82AB34E0);
PPC_FUNC_IMPL(__imp__sub_82AB34E0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,31904
	ctx.r4.s64 = ctx.r11.s64 + 31904;
	// bl 0x82316b80
	ctx.lr = 0x82AB34FC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14565(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14565, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3514"))) PPC_WEAK_FUNC(sub_82AB3514);
PPC_FUNC_IMPL(__imp__sub_82AB3514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3518"))) PPC_WEAK_FUNC(sub_82AB3518);
PPC_FUNC_IMPL(__imp__sub_82AB3518) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,72
	ctx.r3.s64 = 72;
	// addi r4,r11,31908
	ctx.r4.s64 = ctx.r11.s64 + 31908;
	// bl 0x82316b80
	ctx.lr = 0x82AB3534;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14564(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14564, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB354C"))) PPC_WEAK_FUNC(sub_82AB354C);
PPC_FUNC_IMPL(__imp__sub_82AB354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3550"))) PPC_WEAK_FUNC(sub_82AB3550);
PPC_FUNC_IMPL(__imp__sub_82AB3550) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,73
	ctx.r3.s64 = 73;
	// addi r4,r11,31912
	ctx.r4.s64 = ctx.r11.s64 + 31912;
	// bl 0x82316b80
	ctx.lr = 0x82AB356C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14563(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14563, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3584"))) PPC_WEAK_FUNC(sub_82AB3584);
PPC_FUNC_IMPL(__imp__sub_82AB3584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3588"))) PPC_WEAK_FUNC(sub_82AB3588);
PPC_FUNC_IMPL(__imp__sub_82AB3588) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,81
	ctx.r3.s64 = 81;
	// addi r4,r11,31916
	ctx.r4.s64 = ctx.r11.s64 + 31916;
	// bl 0x82316b80
	ctx.lr = 0x82AB35A4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14562(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14562, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

