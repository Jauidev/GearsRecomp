#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AB6DBC"))) PPC_WEAK_FUNC(sub_82AB6DBC);
PPC_FUNC_IMPL(__imp__sub_82AB6DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6DC0"))) PPC_WEAK_FUNC(sub_82AB6DC0);
PPC_FUNC_IMPL(__imp__sub_82AB6DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32736
	ctx.r4.s64 = ctx.r11.s64 + -32736;
	// bl 0x82316b80
	ctx.lr = 0x82AB6DDC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14305(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14305, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6DF4"))) PPC_WEAK_FUNC(sub_82AB6DF4);
PPC_FUNC_IMPL(__imp__sub_82AB6DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6DF8"))) PPC_WEAK_FUNC(sub_82AB6DF8);
PPC_FUNC_IMPL(__imp__sub_82AB6DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32732
	ctx.r4.s64 = ctx.r11.s64 + -32732;
	// bl 0x82316b80
	ctx.lr = 0x82AB6E14;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14304(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14304, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6E2C"))) PPC_WEAK_FUNC(sub_82AB6E2C);
PPC_FUNC_IMPL(__imp__sub_82AB6E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6E30"))) PPC_WEAK_FUNC(sub_82AB6E30);
PPC_FUNC_IMPL(__imp__sub_82AB6E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32728
	ctx.r4.s64 = ctx.r11.s64 + -32728;
	// bl 0x82316b80
	ctx.lr = 0x82AB6E4C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14303(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14303, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6E64"))) PPC_WEAK_FUNC(sub_82AB6E64);
PPC_FUNC_IMPL(__imp__sub_82AB6E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6E68"))) PPC_WEAK_FUNC(sub_82AB6E68);
PPC_FUNC_IMPL(__imp__sub_82AB6E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32724
	ctx.r4.s64 = ctx.r11.s64 + -32724;
	// bl 0x82316b80
	ctx.lr = 0x82AB6E84;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14302(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14302, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6E9C"))) PPC_WEAK_FUNC(sub_82AB6E9C);
PPC_FUNC_IMPL(__imp__sub_82AB6E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6EA0"))) PPC_WEAK_FUNC(sub_82AB6EA0);
PPC_FUNC_IMPL(__imp__sub_82AB6EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32720
	ctx.r4.s64 = ctx.r11.s64 + -32720;
	// bl 0x82316b80
	ctx.lr = 0x82AB6EBC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14301(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14301, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6ED4"))) PPC_WEAK_FUNC(sub_82AB6ED4);
PPC_FUNC_IMPL(__imp__sub_82AB6ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6ED8"))) PPC_WEAK_FUNC(sub_82AB6ED8);
PPC_FUNC_IMPL(__imp__sub_82AB6ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32716
	ctx.r4.s64 = ctx.r11.s64 + -32716;
	// bl 0x82316b80
	ctx.lr = 0x82AB6EF4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14300(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14300, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6F0C"))) PPC_WEAK_FUNC(sub_82AB6F0C);
PPC_FUNC_IMPL(__imp__sub_82AB6F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6F10"))) PPC_WEAK_FUNC(sub_82AB6F10);
PPC_FUNC_IMPL(__imp__sub_82AB6F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32712
	ctx.r4.s64 = ctx.r11.s64 + -32712;
	// bl 0x82316b80
	ctx.lr = 0x82AB6F2C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14299(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14299, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6F44"))) PPC_WEAK_FUNC(sub_82AB6F44);
PPC_FUNC_IMPL(__imp__sub_82AB6F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6F48"))) PPC_WEAK_FUNC(sub_82AB6F48);
PPC_FUNC_IMPL(__imp__sub_82AB6F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32708
	ctx.r4.s64 = ctx.r11.s64 + -32708;
	// bl 0x82316b80
	ctx.lr = 0x82AB6F64;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14298(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14298, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6F7C"))) PPC_WEAK_FUNC(sub_82AB6F7C);
PPC_FUNC_IMPL(__imp__sub_82AB6F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6F80"))) PPC_WEAK_FUNC(sub_82AB6F80);
PPC_FUNC_IMPL(__imp__sub_82AB6F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32704
	ctx.r4.s64 = ctx.r11.s64 + -32704;
	// bl 0x82316b80
	ctx.lr = 0x82AB6F9C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14297(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14297, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6FB4"))) PPC_WEAK_FUNC(sub_82AB6FB4);
PPC_FUNC_IMPL(__imp__sub_82AB6FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6FB8"))) PPC_WEAK_FUNC(sub_82AB6FB8);
PPC_FUNC_IMPL(__imp__sub_82AB6FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32700
	ctx.r4.s64 = ctx.r11.s64 + -32700;
	// bl 0x82316b80
	ctx.lr = 0x82AB6FD4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14296(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14296, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6FEC"))) PPC_WEAK_FUNC(sub_82AB6FEC);
PPC_FUNC_IMPL(__imp__sub_82AB6FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6FF0"))) PPC_WEAK_FUNC(sub_82AB6FF0);
PPC_FUNC_IMPL(__imp__sub_82AB6FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32696
	ctx.r4.s64 = ctx.r11.s64 + -32696;
	// bl 0x82316b80
	ctx.lr = 0x82AB700C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14295(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14295, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7024"))) PPC_WEAK_FUNC(sub_82AB7024);
PPC_FUNC_IMPL(__imp__sub_82AB7024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7028"))) PPC_WEAK_FUNC(sub_82AB7028);
PPC_FUNC_IMPL(__imp__sub_82AB7028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32692
	ctx.r4.s64 = ctx.r11.s64 + -32692;
	// bl 0x82316b80
	ctx.lr = 0x82AB7044;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14294(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14294, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB705C"))) PPC_WEAK_FUNC(sub_82AB705C);
PPC_FUNC_IMPL(__imp__sub_82AB705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7060"))) PPC_WEAK_FUNC(sub_82AB7060);
PPC_FUNC_IMPL(__imp__sub_82AB7060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32688
	ctx.r4.s64 = ctx.r11.s64 + -32688;
	// bl 0x82316b80
	ctx.lr = 0x82AB707C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14293(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14293, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7094"))) PPC_WEAK_FUNC(sub_82AB7094);
PPC_FUNC_IMPL(__imp__sub_82AB7094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7098"))) PPC_WEAK_FUNC(sub_82AB7098);
PPC_FUNC_IMPL(__imp__sub_82AB7098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32684
	ctx.r4.s64 = ctx.r11.s64 + -32684;
	// bl 0x82316b80
	ctx.lr = 0x82AB70B4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14292(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14292, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB70CC"))) PPC_WEAK_FUNC(sub_82AB70CC);
PPC_FUNC_IMPL(__imp__sub_82AB70CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB70D0"))) PPC_WEAK_FUNC(sub_82AB70D0);
PPC_FUNC_IMPL(__imp__sub_82AB70D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32680
	ctx.r4.s64 = ctx.r11.s64 + -32680;
	// bl 0x82316b80
	ctx.lr = 0x82AB70EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14291(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14291, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7104"))) PPC_WEAK_FUNC(sub_82AB7104);
PPC_FUNC_IMPL(__imp__sub_82AB7104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7108"))) PPC_WEAK_FUNC(sub_82AB7108);
PPC_FUNC_IMPL(__imp__sub_82AB7108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32676
	ctx.r4.s64 = ctx.r11.s64 + -32676;
	// bl 0x82316b80
	ctx.lr = 0x82AB7124;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14290(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14290, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB713C"))) PPC_WEAK_FUNC(sub_82AB713C);
PPC_FUNC_IMPL(__imp__sub_82AB713C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7140"))) PPC_WEAK_FUNC(sub_82AB7140);
PPC_FUNC_IMPL(__imp__sub_82AB7140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,270
	ctx.r3.s64 = 270;
	// addi r4,r11,-32672
	ctx.r4.s64 = ctx.r11.s64 + -32672;
	// bl 0x82316b80
	ctx.lr = 0x82AB715C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14289(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14289, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7174"))) PPC_WEAK_FUNC(sub_82AB7174);
PPC_FUNC_IMPL(__imp__sub_82AB7174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7178"))) PPC_WEAK_FUNC(sub_82AB7178);
PPC_FUNC_IMPL(__imp__sub_82AB7178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,271
	ctx.r3.s64 = 271;
	// addi r4,r11,-32668
	ctx.r4.s64 = ctx.r11.s64 + -32668;
	// bl 0x82316b80
	ctx.lr = 0x82AB7194;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14288(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14288, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB71AC"))) PPC_WEAK_FUNC(sub_82AB71AC);
PPC_FUNC_IMPL(__imp__sub_82AB71AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB71B0"))) PPC_WEAK_FUNC(sub_82AB71B0);
PPC_FUNC_IMPL(__imp__sub_82AB71B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-32664
	ctx.r4.s64 = ctx.r11.s64 + -32664;
	// bl 0x82316b80
	ctx.lr = 0x82AB71CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14287(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14287, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB71E4"))) PPC_WEAK_FUNC(sub_82AB71E4);
PPC_FUNC_IMPL(__imp__sub_82AB71E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB71E8"))) PPC_WEAK_FUNC(sub_82AB71E8);
PPC_FUNC_IMPL(__imp__sub_82AB71E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,112
	ctx.r3.s64 = 112;
	// addi r4,r11,-32660
	ctx.r4.s64 = ctx.r11.s64 + -32660;
	// bl 0x82316b80
	ctx.lr = 0x82AB7204;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14286(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14286, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB721C"))) PPC_WEAK_FUNC(sub_82AB721C);
PPC_FUNC_IMPL(__imp__sub_82AB721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7220"))) PPC_WEAK_FUNC(sub_82AB7220);
PPC_FUNC_IMPL(__imp__sub_82AB7220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,168
	ctx.r3.s64 = 168;
	// addi r4,r11,-32656
	ctx.r4.s64 = ctx.r11.s64 + -32656;
	// bl 0x82316b80
	ctx.lr = 0x82AB723C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14285(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14285, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7254"))) PPC_WEAK_FUNC(sub_82AB7254);
PPC_FUNC_IMPL(__imp__sub_82AB7254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7258"))) PPC_WEAK_FUNC(sub_82AB7258);
PPC_FUNC_IMPL(__imp__sub_82AB7258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,115
	ctx.r3.s64 = 115;
	// addi r4,r11,-32652
	ctx.r4.s64 = ctx.r11.s64 + -32652;
	// bl 0x82316b80
	ctx.lr = 0x82AB7274;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14284(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14284, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB728C"))) PPC_WEAK_FUNC(sub_82AB728C);
PPC_FUNC_IMPL(__imp__sub_82AB728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7290"))) PPC_WEAK_FUNC(sub_82AB7290);
PPC_FUNC_IMPL(__imp__sub_82AB7290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,116
	ctx.r3.s64 = 116;
	// addi r4,r11,-32648
	ctx.r4.s64 = ctx.r11.s64 + -32648;
	// bl 0x82316b80
	ctx.lr = 0x82AB72AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14283(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB72C4"))) PPC_WEAK_FUNC(sub_82AB72C4);
PPC_FUNC_IMPL(__imp__sub_82AB72C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB72C8"))) PPC_WEAK_FUNC(sub_82AB72C8);
PPC_FUNC_IMPL(__imp__sub_82AB72C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,120
	ctx.r3.s64 = 120;
	// addi r4,r11,-32644
	ctx.r4.s64 = ctx.r11.s64 + -32644;
	// bl 0x82316b80
	ctx.lr = 0x82AB72E4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14282(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB72FC"))) PPC_WEAK_FUNC(sub_82AB72FC);
PPC_FUNC_IMPL(__imp__sub_82AB72FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7300"))) PPC_WEAK_FUNC(sub_82AB7300);
PPC_FUNC_IMPL(__imp__sub_82AB7300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,121
	ctx.r3.s64 = 121;
	// addi r4,r11,-32640
	ctx.r4.s64 = ctx.r11.s64 + -32640;
	// bl 0x82316b80
	ctx.lr = 0x82AB731C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14281(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7334"))) PPC_WEAK_FUNC(sub_82AB7334);
PPC_FUNC_IMPL(__imp__sub_82AB7334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7338"))) PPC_WEAK_FUNC(sub_82AB7338);
PPC_FUNC_IMPL(__imp__sub_82AB7338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,122
	ctx.r3.s64 = 122;
	// addi r4,r11,-32636
	ctx.r4.s64 = ctx.r11.s64 + -32636;
	// bl 0x82316b80
	ctx.lr = 0x82AB7354;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14280(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14280, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB736C"))) PPC_WEAK_FUNC(sub_82AB736C);
PPC_FUNC_IMPL(__imp__sub_82AB736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7370"))) PPC_WEAK_FUNC(sub_82AB7370);
PPC_FUNC_IMPL(__imp__sub_82AB7370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,123
	ctx.r3.s64 = 123;
	// addi r4,r11,-32632
	ctx.r4.s64 = ctx.r11.s64 + -32632;
	// bl 0x82316b80
	ctx.lr = 0x82AB738C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14279(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14279, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB73A4"))) PPC_WEAK_FUNC(sub_82AB73A4);
PPC_FUNC_IMPL(__imp__sub_82AB73A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB73A8"))) PPC_WEAK_FUNC(sub_82AB73A8);
PPC_FUNC_IMPL(__imp__sub_82AB73A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,124
	ctx.r3.s64 = 124;
	// addi r4,r11,-32628
	ctx.r4.s64 = ctx.r11.s64 + -32628;
	// bl 0x82316b80
	ctx.lr = 0x82AB73C4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14278(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14278, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB73DC"))) PPC_WEAK_FUNC(sub_82AB73DC);
PPC_FUNC_IMPL(__imp__sub_82AB73DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB73E0"))) PPC_WEAK_FUNC(sub_82AB73E0);
PPC_FUNC_IMPL(__imp__sub_82AB73E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,322
	ctx.r3.s64 = 322;
	// addi r4,r11,-32624
	ctx.r4.s64 = ctx.r11.s64 + -32624;
	// bl 0x82316b80
	ctx.lr = 0x82AB73FC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14277(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14277, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7414"))) PPC_WEAK_FUNC(sub_82AB7414);
PPC_FUNC_IMPL(__imp__sub_82AB7414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7418"))) PPC_WEAK_FUNC(sub_82AB7418);
PPC_FUNC_IMPL(__imp__sub_82AB7418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,323
	ctx.r3.s64 = 323;
	// addi r4,r11,-32620
	ctx.r4.s64 = ctx.r11.s64 + -32620;
	// bl 0x82316b80
	ctx.lr = 0x82AB7434;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14276(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14276, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB744C"))) PPC_WEAK_FUNC(sub_82AB744C);
PPC_FUNC_IMPL(__imp__sub_82AB744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7450"))) PPC_WEAK_FUNC(sub_82AB7450);
PPC_FUNC_IMPL(__imp__sub_82AB7450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,324
	ctx.r3.s64 = 324;
	// addi r4,r11,-32616
	ctx.r4.s64 = ctx.r11.s64 + -32616;
	// bl 0x82316b80
	ctx.lr = 0x82AB746C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14275(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14275, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7484"))) PPC_WEAK_FUNC(sub_82AB7484);
PPC_FUNC_IMPL(__imp__sub_82AB7484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7488"))) PPC_WEAK_FUNC(sub_82AB7488);
PPC_FUNC_IMPL(__imp__sub_82AB7488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,125
	ctx.r3.s64 = 125;
	// addi r4,r11,-32612
	ctx.r4.s64 = ctx.r11.s64 + -32612;
	// bl 0x82316b80
	ctx.lr = 0x82AB74A4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14274(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14274, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB74BC"))) PPC_WEAK_FUNC(sub_82AB74BC);
PPC_FUNC_IMPL(__imp__sub_82AB74BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB74C0"))) PPC_WEAK_FUNC(sub_82AB74C0);
PPC_FUNC_IMPL(__imp__sub_82AB74C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,126
	ctx.r3.s64 = 126;
	// addi r4,r11,-32608
	ctx.r4.s64 = ctx.r11.s64 + -32608;
	// bl 0x82316b80
	ctx.lr = 0x82AB74DC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14273(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14273, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB74F4"))) PPC_WEAK_FUNC(sub_82AB74F4);
PPC_FUNC_IMPL(__imp__sub_82AB74F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB74F8"))) PPC_WEAK_FUNC(sub_82AB74F8);
PPC_FUNC_IMPL(__imp__sub_82AB74F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,127
	ctx.r3.s64 = 127;
	// addi r4,r11,-32604
	ctx.r4.s64 = ctx.r11.s64 + -32604;
	// bl 0x82316b80
	ctx.lr = 0x82AB7514;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14272(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14272, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB752C"))) PPC_WEAK_FUNC(sub_82AB752C);
PPC_FUNC_IMPL(__imp__sub_82AB752C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7530"))) PPC_WEAK_FUNC(sub_82AB7530);
PPC_FUNC_IMPL(__imp__sub_82AB7530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,128
	ctx.r3.s64 = 128;
	// addi r4,r11,-32600
	ctx.r4.s64 = ctx.r11.s64 + -32600;
	// bl 0x82316b80
	ctx.lr = 0x82AB754C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14271(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14271, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7564"))) PPC_WEAK_FUNC(sub_82AB7564);
PPC_FUNC_IMPL(__imp__sub_82AB7564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7568"))) PPC_WEAK_FUNC(sub_82AB7568);
PPC_FUNC_IMPL(__imp__sub_82AB7568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,234
	ctx.r3.s64 = 234;
	// addi r4,r11,-32596
	ctx.r4.s64 = ctx.r11.s64 + -32596;
	// bl 0x82316b80
	ctx.lr = 0x82AB7584;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14270(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14270, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB759C"))) PPC_WEAK_FUNC(sub_82AB759C);
PPC_FUNC_IMPL(__imp__sub_82AB759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB75A0"))) PPC_WEAK_FUNC(sub_82AB75A0);
PPC_FUNC_IMPL(__imp__sub_82AB75A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,235
	ctx.r3.s64 = 235;
	// addi r4,r11,-32592
	ctx.r4.s64 = ctx.r11.s64 + -32592;
	// bl 0x82316b80
	ctx.lr = 0x82AB75BC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14269(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14269, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB75D4"))) PPC_WEAK_FUNC(sub_82AB75D4);
PPC_FUNC_IMPL(__imp__sub_82AB75D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB75D8"))) PPC_WEAK_FUNC(sub_82AB75D8);
PPC_FUNC_IMPL(__imp__sub_82AB75D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,238
	ctx.r3.s64 = 238;
	// addi r4,r11,-32588
	ctx.r4.s64 = ctx.r11.s64 + -32588;
	// bl 0x82316b80
	ctx.lr = 0x82AB75F4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14268(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14268, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB760C"))) PPC_WEAK_FUNC(sub_82AB760C);
PPC_FUNC_IMPL(__imp__sub_82AB760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7610"))) PPC_WEAK_FUNC(sub_82AB7610);
PPC_FUNC_IMPL(__imp__sub_82AB7610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,236
	ctx.r3.s64 = 236;
	// addi r4,r11,-32584
	ctx.r4.s64 = ctx.r11.s64 + -32584;
	// bl 0x82316b80
	ctx.lr = 0x82AB762C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14267(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14267, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7644"))) PPC_WEAK_FUNC(sub_82AB7644);
PPC_FUNC_IMPL(__imp__sub_82AB7644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7648"))) PPC_WEAK_FUNC(sub_82AB7648);
PPC_FUNC_IMPL(__imp__sub_82AB7648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,237
	ctx.r3.s64 = 237;
	// addi r4,r11,-32580
	ctx.r4.s64 = ctx.r11.s64 + -32580;
	// bl 0x82316b80
	ctx.lr = 0x82AB7664;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14266(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14266, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB767C"))) PPC_WEAK_FUNC(sub_82AB767C);
PPC_FUNC_IMPL(__imp__sub_82AB767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7680"))) PPC_WEAK_FUNC(sub_82AB7680);
PPC_FUNC_IMPL(__imp__sub_82AB7680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,201
	ctx.r3.s64 = 201;
	// addi r4,r11,-32576
	ctx.r4.s64 = ctx.r11.s64 + -32576;
	// bl 0x82316b80
	ctx.lr = 0x82AB769C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14265(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14265, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB76B4"))) PPC_WEAK_FUNC(sub_82AB76B4);
PPC_FUNC_IMPL(__imp__sub_82AB76B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB76B8"))) PPC_WEAK_FUNC(sub_82AB76B8);
PPC_FUNC_IMPL(__imp__sub_82AB76B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,254
	ctx.r3.s64 = 254;
	// addi r4,r11,-32572
	ctx.r4.s64 = ctx.r11.s64 + -32572;
	// bl 0x82316b80
	ctx.lr = 0x82AB76D4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14264(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14264, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB76EC"))) PPC_WEAK_FUNC(sub_82AB76EC);
PPC_FUNC_IMPL(__imp__sub_82AB76EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB76F0"))) PPC_WEAK_FUNC(sub_82AB76F0);
PPC_FUNC_IMPL(__imp__sub_82AB76F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r4,r11,-32568
	ctx.r4.s64 = ctx.r11.s64 + -32568;
	// bl 0x82316b80
	ctx.lr = 0x82AB770C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14263(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14263, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7724"))) PPC_WEAK_FUNC(sub_82AB7724);
PPC_FUNC_IMPL(__imp__sub_82AB7724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7728"))) PPC_WEAK_FUNC(sub_82AB7728);
PPC_FUNC_IMPL(__imp__sub_82AB7728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,114
	ctx.r3.s64 = 114;
	// addi r4,r11,-32564
	ctx.r4.s64 = ctx.r11.s64 + -32564;
	// bl 0x82316b80
	ctx.lr = 0x82AB7744;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14262(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14262, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB775C"))) PPC_WEAK_FUNC(sub_82AB775C);
PPC_FUNC_IMPL(__imp__sub_82AB775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7760"))) PPC_WEAK_FUNC(sub_82AB7760);
PPC_FUNC_IMPL(__imp__sub_82AB7760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,119
	ctx.r3.s64 = 119;
	// addi r4,r11,-32560
	ctx.r4.s64 = ctx.r11.s64 + -32560;
	// bl 0x82316b80
	ctx.lr = 0x82AB777C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14261(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14261, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7794"))) PPC_WEAK_FUNC(sub_82AB7794);
PPC_FUNC_IMPL(__imp__sub_82AB7794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7798"))) PPC_WEAK_FUNC(sub_82AB7798);
PPC_FUNC_IMPL(__imp__sub_82AB7798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32556
	ctx.r4.s64 = ctx.r11.s64 + -32556;
	// bl 0x82316b80
	ctx.lr = 0x82AB77B4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14260(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14260, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB77CC"))) PPC_WEAK_FUNC(sub_82AB77CC);
PPC_FUNC_IMPL(__imp__sub_82AB77CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB77D0"))) PPC_WEAK_FUNC(sub_82AB77D0);
PPC_FUNC_IMPL(__imp__sub_82AB77D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32552
	ctx.r4.s64 = ctx.r11.s64 + -32552;
	// bl 0x82316b80
	ctx.lr = 0x82AB77EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14259(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14259, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7804"))) PPC_WEAK_FUNC(sub_82AB7804);
PPC_FUNC_IMPL(__imp__sub_82AB7804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7808"))) PPC_WEAK_FUNC(sub_82AB7808);
PPC_FUNC_IMPL(__imp__sub_82AB7808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,231
	ctx.r3.s64 = 231;
	// addi r4,r11,-32548
	ctx.r4.s64 = ctx.r11.s64 + -32548;
	// bl 0x82316b80
	ctx.lr = 0x82AB7824;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14258(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14258, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB783C"))) PPC_WEAK_FUNC(sub_82AB783C);
PPC_FUNC_IMPL(__imp__sub_82AB783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7840"))) PPC_WEAK_FUNC(sub_82AB7840);
PPC_FUNC_IMPL(__imp__sub_82AB7840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,232
	ctx.r3.s64 = 232;
	// addi r4,r11,-32544
	ctx.r4.s64 = ctx.r11.s64 + -32544;
	// bl 0x82316b80
	ctx.lr = 0x82AB785C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14257(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14257, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7874"))) PPC_WEAK_FUNC(sub_82AB7874);
PPC_FUNC_IMPL(__imp__sub_82AB7874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7878"))) PPC_WEAK_FUNC(sub_82AB7878);
PPC_FUNC_IMPL(__imp__sub_82AB7878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32540
	ctx.r4.s64 = ctx.r11.s64 + -32540;
	// bl 0x82316b80
	ctx.lr = 0x82AB7894;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14256(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB78AC"))) PPC_WEAK_FUNC(sub_82AB78AC);
PPC_FUNC_IMPL(__imp__sub_82AB78AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB78B0"))) PPC_WEAK_FUNC(sub_82AB78B0);
PPC_FUNC_IMPL(__imp__sub_82AB78B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,96
	ctx.r3.s64 = 96;
	// addi r4,r11,-32536
	ctx.r4.s64 = ctx.r11.s64 + -32536;
	// bl 0x82316b80
	ctx.lr = 0x82AB78CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14255(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14255, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB78E4"))) PPC_WEAK_FUNC(sub_82AB78E4);
PPC_FUNC_IMPL(__imp__sub_82AB78E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB78E8"))) PPC_WEAK_FUNC(sub_82AB78E8);
PPC_FUNC_IMPL(__imp__sub_82AB78E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,97
	ctx.r3.s64 = 97;
	// addi r4,r11,-32532
	ctx.r4.s64 = ctx.r11.s64 + -32532;
	// bl 0x82316b80
	ctx.lr = 0x82AB7904;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14254(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB791C"))) PPC_WEAK_FUNC(sub_82AB791C);
PPC_FUNC_IMPL(__imp__sub_82AB791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7920"))) PPC_WEAK_FUNC(sub_82AB7920);
PPC_FUNC_IMPL(__imp__sub_82AB7920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,98
	ctx.r3.s64 = 98;
	// addi r4,r11,-32528
	ctx.r4.s64 = ctx.r11.s64 + -32528;
	// bl 0x82316b80
	ctx.lr = 0x82AB793C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14253(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7954"))) PPC_WEAK_FUNC(sub_82AB7954);
PPC_FUNC_IMPL(__imp__sub_82AB7954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7958"))) PPC_WEAK_FUNC(sub_82AB7958);
PPC_FUNC_IMPL(__imp__sub_82AB7958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,99
	ctx.r3.s64 = 99;
	// addi r4,r11,-32524
	ctx.r4.s64 = ctx.r11.s64 + -32524;
	// bl 0x82316b80
	ctx.lr = 0x82AB7974;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14252(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14252, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB798C"))) PPC_WEAK_FUNC(sub_82AB798C);
PPC_FUNC_IMPL(__imp__sub_82AB798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7990"))) PPC_WEAK_FUNC(sub_82AB7990);
PPC_FUNC_IMPL(__imp__sub_82AB7990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r4,r11,-32520
	ctx.r4.s64 = ctx.r11.s64 + -32520;
	// bl 0x82316b80
	ctx.lr = 0x82AB79AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14251(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14251, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB79C4"))) PPC_WEAK_FUNC(sub_82AB79C4);
PPC_FUNC_IMPL(__imp__sub_82AB79C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB79C8"))) PPC_WEAK_FUNC(sub_82AB79C8);
PPC_FUNC_IMPL(__imp__sub_82AB79C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,101
	ctx.r3.s64 = 101;
	// addi r4,r11,-32516
	ctx.r4.s64 = ctx.r11.s64 + -32516;
	// bl 0x82316b80
	ctx.lr = 0x82AB79E4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14250(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14250, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB79FC"))) PPC_WEAK_FUNC(sub_82AB79FC);
PPC_FUNC_IMPL(__imp__sub_82AB79FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7A00"))) PPC_WEAK_FUNC(sub_82AB7A00);
PPC_FUNC_IMPL(__imp__sub_82AB7A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,102
	ctx.r3.s64 = 102;
	// addi r4,r11,-32512
	ctx.r4.s64 = ctx.r11.s64 + -32512;
	// bl 0x82316b80
	ctx.lr = 0x82AB7A1C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14249(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14249, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7A34"))) PPC_WEAK_FUNC(sub_82AB7A34);
PPC_FUNC_IMPL(__imp__sub_82AB7A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7A38"))) PPC_WEAK_FUNC(sub_82AB7A38);
PPC_FUNC_IMPL(__imp__sub_82AB7A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,103
	ctx.r3.s64 = 103;
	// addi r4,r11,-32508
	ctx.r4.s64 = ctx.r11.s64 + -32508;
	// bl 0x82316b80
	ctx.lr = 0x82AB7A54;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14248(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14248, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7A6C"))) PPC_WEAK_FUNC(sub_82AB7A6C);
PPC_FUNC_IMPL(__imp__sub_82AB7A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7A70"))) PPC_WEAK_FUNC(sub_82AB7A70);
PPC_FUNC_IMPL(__imp__sub_82AB7A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,104
	ctx.r3.s64 = 104;
	// addi r4,r11,-32504
	ctx.r4.s64 = ctx.r11.s64 + -32504;
	// bl 0x82316b80
	ctx.lr = 0x82AB7A8C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14247(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14247, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7AA4"))) PPC_WEAK_FUNC(sub_82AB7AA4);
PPC_FUNC_IMPL(__imp__sub_82AB7AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7AA8"))) PPC_WEAK_FUNC(sub_82AB7AA8);
PPC_FUNC_IMPL(__imp__sub_82AB7AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,105
	ctx.r3.s64 = 105;
	// addi r4,r11,-32500
	ctx.r4.s64 = ctx.r11.s64 + -32500;
	// bl 0x82316b80
	ctx.lr = 0x82AB7AC4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14246(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14246, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7ADC"))) PPC_WEAK_FUNC(sub_82AB7ADC);
PPC_FUNC_IMPL(__imp__sub_82AB7ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7AE0"))) PPC_WEAK_FUNC(sub_82AB7AE0);
PPC_FUNC_IMPL(__imp__sub_82AB7AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,106
	ctx.r3.s64 = 106;
	// addi r4,r11,-32496
	ctx.r4.s64 = ctx.r11.s64 + -32496;
	// bl 0x82316b80
	ctx.lr = 0x82AB7AFC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14245(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14245, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7B14"))) PPC_WEAK_FUNC(sub_82AB7B14);
PPC_FUNC_IMPL(__imp__sub_82AB7B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7B18"))) PPC_WEAK_FUNC(sub_82AB7B18);
PPC_FUNC_IMPL(__imp__sub_82AB7B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,107
	ctx.r3.s64 = 107;
	// addi r4,r11,-32492
	ctx.r4.s64 = ctx.r11.s64 + -32492;
	// bl 0x82316b80
	ctx.lr = 0x82AB7B34;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14244(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14244, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7B4C"))) PPC_WEAK_FUNC(sub_82AB7B4C);
PPC_FUNC_IMPL(__imp__sub_82AB7B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7B50"))) PPC_WEAK_FUNC(sub_82AB7B50);
PPC_FUNC_IMPL(__imp__sub_82AB7B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,108
	ctx.r3.s64 = 108;
	// addi r4,r11,-32488
	ctx.r4.s64 = ctx.r11.s64 + -32488;
	// bl 0x82316b80
	ctx.lr = 0x82AB7B6C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14243(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14243, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7B84"))) PPC_WEAK_FUNC(sub_82AB7B84);
PPC_FUNC_IMPL(__imp__sub_82AB7B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7B88"))) PPC_WEAK_FUNC(sub_82AB7B88);
PPC_FUNC_IMPL(__imp__sub_82AB7B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,109
	ctx.r3.s64 = 109;
	// addi r4,r11,-32484
	ctx.r4.s64 = ctx.r11.s64 + -32484;
	// bl 0x82316b80
	ctx.lr = 0x82AB7BA4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14242(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14242, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7BBC"))) PPC_WEAK_FUNC(sub_82AB7BBC);
PPC_FUNC_IMPL(__imp__sub_82AB7BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7BC0"))) PPC_WEAK_FUNC(sub_82AB7BC0);
PPC_FUNC_IMPL(__imp__sub_82AB7BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,110
	ctx.r3.s64 = 110;
	// addi r4,r11,-32480
	ctx.r4.s64 = ctx.r11.s64 + -32480;
	// bl 0x82316b80
	ctx.lr = 0x82AB7BDC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14241(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14241, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7BF4"))) PPC_WEAK_FUNC(sub_82AB7BF4);
PPC_FUNC_IMPL(__imp__sub_82AB7BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7BF8"))) PPC_WEAK_FUNC(sub_82AB7BF8);
PPC_FUNC_IMPL(__imp__sub_82AB7BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,111
	ctx.r3.s64 = 111;
	// addi r4,r11,-32476
	ctx.r4.s64 = ctx.r11.s64 + -32476;
	// bl 0x82316b80
	ctx.lr = 0x82AB7C14;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14240(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14240, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7C2C"))) PPC_WEAK_FUNC(sub_82AB7C2C);
PPC_FUNC_IMPL(__imp__sub_82AB7C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7C30"))) PPC_WEAK_FUNC(sub_82AB7C30);
PPC_FUNC_IMPL(__imp__sub_82AB7C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r4,r11,-32472
	ctx.r4.s64 = ctx.r11.s64 + -32472;
	// bl 0x82316b80
	ctx.lr = 0x82AB7C4C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14239(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14239, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7C64"))) PPC_WEAK_FUNC(sub_82AB7C64);
PPC_FUNC_IMPL(__imp__sub_82AB7C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7C68"))) PPC_WEAK_FUNC(sub_82AB7C68);
PPC_FUNC_IMPL(__imp__sub_82AB7C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,258
	ctx.r3.s64 = 258;
	// addi r4,r11,-32468
	ctx.r4.s64 = ctx.r11.s64 + -32468;
	// bl 0x82316b80
	ctx.lr = 0x82AB7C84;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14238(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14238, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7C9C"))) PPC_WEAK_FUNC(sub_82AB7C9C);
PPC_FUNC_IMPL(__imp__sub_82AB7C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7CA0"))) PPC_WEAK_FUNC(sub_82AB7CA0);
PPC_FUNC_IMPL(__imp__sub_82AB7CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,113
	ctx.r3.s64 = 113;
	// addi r4,r11,-32464
	ctx.r4.s64 = ctx.r11.s64 + -32464;
	// bl 0x82316b80
	ctx.lr = 0x82AB7CBC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14237(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14237, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7CD4"))) PPC_WEAK_FUNC(sub_82AB7CD4);
PPC_FUNC_IMPL(__imp__sub_82AB7CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7CD8"))) PPC_WEAK_FUNC(sub_82AB7CD8);
PPC_FUNC_IMPL(__imp__sub_82AB7CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32460
	ctx.r4.s64 = ctx.r11.s64 + -32460;
	// bl 0x82316b80
	ctx.lr = 0x82AB7CF4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14236(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14236, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7D0C"))) PPC_WEAK_FUNC(sub_82AB7D0C);
PPC_FUNC_IMPL(__imp__sub_82AB7D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7D10"))) PPC_WEAK_FUNC(sub_82AB7D10);
PPC_FUNC_IMPL(__imp__sub_82AB7D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32456
	ctx.r4.s64 = ctx.r11.s64 + -32456;
	// bl 0x82316b80
	ctx.lr = 0x82AB7D2C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14235(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14235, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7D44"))) PPC_WEAK_FUNC(sub_82AB7D44);
PPC_FUNC_IMPL(__imp__sub_82AB7D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7D48"))) PPC_WEAK_FUNC(sub_82AB7D48);
PPC_FUNC_IMPL(__imp__sub_82AB7D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32452
	ctx.r4.s64 = ctx.r11.s64 + -32452;
	// bl 0x82316b80
	ctx.lr = 0x82AB7D64;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14234(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14234, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7D7C"))) PPC_WEAK_FUNC(sub_82AB7D7C);
PPC_FUNC_IMPL(__imp__sub_82AB7D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7D80"))) PPC_WEAK_FUNC(sub_82AB7D80);
PPC_FUNC_IMPL(__imp__sub_82AB7D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,117
	ctx.r3.s64 = 117;
	// addi r4,r11,-32448
	ctx.r4.s64 = ctx.r11.s64 + -32448;
	// bl 0x82316b80
	ctx.lr = 0x82AB7D9C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14233(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14233, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7DB4"))) PPC_WEAK_FUNC(sub_82AB7DB4);
PPC_FUNC_IMPL(__imp__sub_82AB7DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7DB8"))) PPC_WEAK_FUNC(sub_82AB7DB8);
PPC_FUNC_IMPL(__imp__sub_82AB7DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,118
	ctx.r3.s64 = 118;
	// addi r4,r11,-32444
	ctx.r4.s64 = ctx.r11.s64 + -32444;
	// bl 0x82316b80
	ctx.lr = 0x82AB7DD4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14232(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14232, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7DEC"))) PPC_WEAK_FUNC(sub_82AB7DEC);
PPC_FUNC_IMPL(__imp__sub_82AB7DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7DF0"))) PPC_WEAK_FUNC(sub_82AB7DF0);
PPC_FUNC_IMPL(__imp__sub_82AB7DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32440
	ctx.r4.s64 = ctx.r11.s64 + -32440;
	// bl 0x82316b80
	ctx.lr = 0x82AB7E0C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14231(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14231, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7E24"))) PPC_WEAK_FUNC(sub_82AB7E24);
PPC_FUNC_IMPL(__imp__sub_82AB7E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7E28"))) PPC_WEAK_FUNC(sub_82AB7E28);
PPC_FUNC_IMPL(__imp__sub_82AB7E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32436
	ctx.r4.s64 = ctx.r11.s64 + -32436;
	// bl 0x82316b80
	ctx.lr = 0x82AB7E44;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14230(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14230, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7E5C"))) PPC_WEAK_FUNC(sub_82AB7E5C);
PPC_FUNC_IMPL(__imp__sub_82AB7E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7E60"))) PPC_WEAK_FUNC(sub_82AB7E60);
PPC_FUNC_IMPL(__imp__sub_82AB7E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,536
	ctx.r3.s64 = 536;
	// addi r4,r11,-32432
	ctx.r4.s64 = ctx.r11.s64 + -32432;
	// bl 0x82316b80
	ctx.lr = 0x82AB7E7C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14229(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14229, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7E94"))) PPC_WEAK_FUNC(sub_82AB7E94);
PPC_FUNC_IMPL(__imp__sub_82AB7E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7E98"))) PPC_WEAK_FUNC(sub_82AB7E98);
PPC_FUNC_IMPL(__imp__sub_82AB7E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32428
	ctx.r4.s64 = ctx.r11.s64 + -32428;
	// bl 0x82316b80
	ctx.lr = 0x82AB7EB4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14228(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14228, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7ECC"))) PPC_WEAK_FUNC(sub_82AB7ECC);
PPC_FUNC_IMPL(__imp__sub_82AB7ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7ED0"))) PPC_WEAK_FUNC(sub_82AB7ED0);
PPC_FUNC_IMPL(__imp__sub_82AB7ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32424
	ctx.r4.s64 = ctx.r11.s64 + -32424;
	// bl 0x82316b80
	ctx.lr = 0x82AB7EEC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14227(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14227, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7F04"))) PPC_WEAK_FUNC(sub_82AB7F04);
PPC_FUNC_IMPL(__imp__sub_82AB7F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7F08"))) PPC_WEAK_FUNC(sub_82AB7F08);
PPC_FUNC_IMPL(__imp__sub_82AB7F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32420
	ctx.r4.s64 = ctx.r11.s64 + -32420;
	// bl 0x82316b80
	ctx.lr = 0x82AB7F24;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14226(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14226, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7F3C"))) PPC_WEAK_FUNC(sub_82AB7F3C);
PPC_FUNC_IMPL(__imp__sub_82AB7F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7F40"))) PPC_WEAK_FUNC(sub_82AB7F40);
PPC_FUNC_IMPL(__imp__sub_82AB7F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32416
	ctx.r4.s64 = ctx.r11.s64 + -32416;
	// bl 0x82316b80
	ctx.lr = 0x82AB7F5C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14225(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14225, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7F74"))) PPC_WEAK_FUNC(sub_82AB7F74);
PPC_FUNC_IMPL(__imp__sub_82AB7F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7F78"))) PPC_WEAK_FUNC(sub_82AB7F78);
PPC_FUNC_IMPL(__imp__sub_82AB7F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32412
	ctx.r4.s64 = ctx.r11.s64 + -32412;
	// bl 0x82316b80
	ctx.lr = 0x82AB7F94;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14224(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14224, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7FAC"))) PPC_WEAK_FUNC(sub_82AB7FAC);
PPC_FUNC_IMPL(__imp__sub_82AB7FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7FB0"))) PPC_WEAK_FUNC(sub_82AB7FB0);
PPC_FUNC_IMPL(__imp__sub_82AB7FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,281
	ctx.r3.s64 = 281;
	// addi r4,r11,-32408
	ctx.r4.s64 = ctx.r11.s64 + -32408;
	// bl 0x82316b80
	ctx.lr = 0x82AB7FCC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14223(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14223, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB7FE4"))) PPC_WEAK_FUNC(sub_82AB7FE4);
PPC_FUNC_IMPL(__imp__sub_82AB7FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB7FE8"))) PPC_WEAK_FUNC(sub_82AB7FE8);
PPC_FUNC_IMPL(__imp__sub_82AB7FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32404
	ctx.r4.s64 = ctx.r11.s64 + -32404;
	// bl 0x82316b80
	ctx.lr = 0x82AB8004;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14222(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14222, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB801C"))) PPC_WEAK_FUNC(sub_82AB801C);
PPC_FUNC_IMPL(__imp__sub_82AB801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8020"))) PPC_WEAK_FUNC(sub_82AB8020);
PPC_FUNC_IMPL(__imp__sub_82AB8020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,284
	ctx.r3.s64 = 284;
	// addi r4,r11,-32400
	ctx.r4.s64 = ctx.r11.s64 + -32400;
	// bl 0x82316b80
	ctx.lr = 0x82AB803C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14221(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14221, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8054"))) PPC_WEAK_FUNC(sub_82AB8054);
PPC_FUNC_IMPL(__imp__sub_82AB8054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8058"))) PPC_WEAK_FUNC(sub_82AB8058);
PPC_FUNC_IMPL(__imp__sub_82AB8058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32396
	ctx.r4.s64 = ctx.r11.s64 + -32396;
	// bl 0x82316b80
	ctx.lr = 0x82AB8074;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14220(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14220, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB808C"))) PPC_WEAK_FUNC(sub_82AB808C);
PPC_FUNC_IMPL(__imp__sub_82AB808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8090"))) PPC_WEAK_FUNC(sub_82AB8090);
PPC_FUNC_IMPL(__imp__sub_82AB8090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32392
	ctx.r4.s64 = ctx.r11.s64 + -32392;
	// bl 0x82316b80
	ctx.lr = 0x82AB80AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14219(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14219, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB80C4"))) PPC_WEAK_FUNC(sub_82AB80C4);
PPC_FUNC_IMPL(__imp__sub_82AB80C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB80C8"))) PPC_WEAK_FUNC(sub_82AB80C8);
PPC_FUNC_IMPL(__imp__sub_82AB80C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32388
	ctx.r4.s64 = ctx.r11.s64 + -32388;
	// bl 0x82316b80
	ctx.lr = 0x82AB80E4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14218(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14218, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB80FC"))) PPC_WEAK_FUNC(sub_82AB80FC);
PPC_FUNC_IMPL(__imp__sub_82AB80FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8100"))) PPC_WEAK_FUNC(sub_82AB8100);
PPC_FUNC_IMPL(__imp__sub_82AB8100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,197
	ctx.r3.s64 = 197;
	// addi r4,r11,-32384
	ctx.r4.s64 = ctx.r11.s64 + -32384;
	// bl 0x82316b80
	ctx.lr = 0x82AB811C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14217(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14217, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8134"))) PPC_WEAK_FUNC(sub_82AB8134);
PPC_FUNC_IMPL(__imp__sub_82AB8134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8138"))) PPC_WEAK_FUNC(sub_82AB8138);
PPC_FUNC_IMPL(__imp__sub_82AB8138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32380
	ctx.r4.s64 = ctx.r11.s64 + -32380;
	// bl 0x82316b80
	ctx.lr = 0x82AB8154;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14216(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14216, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB816C"))) PPC_WEAK_FUNC(sub_82AB816C);
PPC_FUNC_IMPL(__imp__sub_82AB816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8170"))) PPC_WEAK_FUNC(sub_82AB8170);
PPC_FUNC_IMPL(__imp__sub_82AB8170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32376
	ctx.r4.s64 = ctx.r11.s64 + -32376;
	// bl 0x82316b80
	ctx.lr = 0x82AB818C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14215(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14215, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB81A4"))) PPC_WEAK_FUNC(sub_82AB81A4);
PPC_FUNC_IMPL(__imp__sub_82AB81A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB81A8"))) PPC_WEAK_FUNC(sub_82AB81A8);
PPC_FUNC_IMPL(__imp__sub_82AB81A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,47
	ctx.r3.s64 = 47;
	// addi r4,r11,-32372
	ctx.r4.s64 = ctx.r11.s64 + -32372;
	// bl 0x82316b80
	ctx.lr = 0x82AB81C4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14214(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14214, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB81DC"))) PPC_WEAK_FUNC(sub_82AB81DC);
PPC_FUNC_IMPL(__imp__sub_82AB81DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB81E0"))) PPC_WEAK_FUNC(sub_82AB81E0);
PPC_FUNC_IMPL(__imp__sub_82AB81E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-14188
	ctx.r3.s64 = ctx.r11.s64 + -14188;
	// b 0x82170b98
	sub_82170B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB81EC"))) PPC_WEAK_FUNC(sub_82AB81EC);
PPC_FUNC_IMPL(__imp__sub_82AB81EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB81F0"))) PPC_WEAK_FUNC(sub_82AB81F0);
PPC_FUNC_IMPL(__imp__sub_82AB81F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-14176
	ctx.r3.s64 = ctx.r11.s64 + -14176;
	// b 0x82170b98
	sub_82170B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB81FC"))) PPC_WEAK_FUNC(sub_82AB81FC);
PPC_FUNC_IMPL(__imp__sub_82AB81FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8200"))) PPC_WEAK_FUNC(sub_82AB8200);
PPC_FUNC_IMPL(__imp__sub_82AB8200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB820C"))) PPC_WEAK_FUNC(sub_82AB820C);
PPC_FUNC_IMPL(__imp__sub_82AB820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8210"))) PPC_WEAK_FUNC(sub_82AB8210);
PPC_FUNC_IMPL(__imp__sub_82AB8210) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,466
	ctx.r3.s64 = 466;
	// addi r4,r11,31864
	ctx.r4.s64 = ctx.r11.s64 + 31864;
	// bl 0x82316b80
	ctx.lr = 0x82AB822C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14140(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14140, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8244"))) PPC_WEAK_FUNC(sub_82AB8244);
PPC_FUNC_IMPL(__imp__sub_82AB8244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8248"))) PPC_WEAK_FUNC(sub_82AB8248);
PPC_FUNC_IMPL(__imp__sub_82AB8248) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31868
	ctx.r4.s64 = ctx.r11.s64 + 31868;
	// bl 0x82316b80
	ctx.lr = 0x82AB8264;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14139(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14139, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB827C"))) PPC_WEAK_FUNC(sub_82AB827C);
PPC_FUNC_IMPL(__imp__sub_82AB827C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8280"))) PPC_WEAK_FUNC(sub_82AB8280);
PPC_FUNC_IMPL(__imp__sub_82AB8280) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,465
	ctx.r3.s64 = 465;
	// addi r4,r11,31872
	ctx.r4.s64 = ctx.r11.s64 + 31872;
	// bl 0x82316b80
	ctx.lr = 0x82AB829C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14138(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14138, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB82B4"))) PPC_WEAK_FUNC(sub_82AB82B4);
PPC_FUNC_IMPL(__imp__sub_82AB82B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB82B8"))) PPC_WEAK_FUNC(sub_82AB82B8);
PPC_FUNC_IMPL(__imp__sub_82AB82B8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,469
	ctx.r3.s64 = 469;
	// addi r4,r11,31876
	ctx.r4.s64 = ctx.r11.s64 + 31876;
	// bl 0x82316b80
	ctx.lr = 0x82AB82D4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14137(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14137, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB82EC"))) PPC_WEAK_FUNC(sub_82AB82EC);
PPC_FUNC_IMPL(__imp__sub_82AB82EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB82F0"))) PPC_WEAK_FUNC(sub_82AB82F0);
PPC_FUNC_IMPL(__imp__sub_82AB82F0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,464
	ctx.r3.s64 = 464;
	// addi r4,r11,31880
	ctx.r4.s64 = ctx.r11.s64 + 31880;
	// bl 0x82316b80
	ctx.lr = 0x82AB830C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14136(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14136, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8324"))) PPC_WEAK_FUNC(sub_82AB8324);
PPC_FUNC_IMPL(__imp__sub_82AB8324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8328"))) PPC_WEAK_FUNC(sub_82AB8328);
PPC_FUNC_IMPL(__imp__sub_82AB8328) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,470
	ctx.r3.s64 = 470;
	// addi r4,r11,31884
	ctx.r4.s64 = ctx.r11.s64 + 31884;
	// bl 0x82316b80
	ctx.lr = 0x82AB8344;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14135(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14135, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB835C"))) PPC_WEAK_FUNC(sub_82AB835C);
PPC_FUNC_IMPL(__imp__sub_82AB835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8360"))) PPC_WEAK_FUNC(sub_82AB8360);
PPC_FUNC_IMPL(__imp__sub_82AB8360) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31888
	ctx.r4.s64 = ctx.r11.s64 + 31888;
	// bl 0x82316b80
	ctx.lr = 0x82AB837C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14134(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14134, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8394"))) PPC_WEAK_FUNC(sub_82AB8394);
PPC_FUNC_IMPL(__imp__sub_82AB8394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8398"))) PPC_WEAK_FUNC(sub_82AB8398);
PPC_FUNC_IMPL(__imp__sub_82AB8398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6696
	ctx.r3.s64 = ctx.r11.s64 + 6696;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB83A4"))) PPC_WEAK_FUNC(sub_82AB83A4);
PPC_FUNC_IMPL(__imp__sub_82AB83A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB83A8"))) PPC_WEAK_FUNC(sub_82AB83A8);
PPC_FUNC_IMPL(__imp__sub_82AB83A8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,384
	ctx.r3.s64 = 384;
	// addi r4,r11,31728
	ctx.r4.s64 = ctx.r11.s64 + 31728;
	// bl 0x82316b80
	ctx.lr = 0x82AB83C4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14120(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14120, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB83DC"))) PPC_WEAK_FUNC(sub_82AB83DC);
PPC_FUNC_IMPL(__imp__sub_82AB83DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB83E0"))) PPC_WEAK_FUNC(sub_82AB83E0);
PPC_FUNC_IMPL(__imp__sub_82AB83E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6712
	ctx.r3.s64 = ctx.r11.s64 + 6712;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB83EC"))) PPC_WEAK_FUNC(sub_82AB83EC);
PPC_FUNC_IMPL(__imp__sub_82AB83EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB83F0"))) PPC_WEAK_FUNC(sub_82AB83F0);
PPC_FUNC_IMPL(__imp__sub_82AB83F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6728
	ctx.r3.s64 = ctx.r11.s64 + 6728;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB83FC"))) PPC_WEAK_FUNC(sub_82AB83FC);
PPC_FUNC_IMPL(__imp__sub_82AB83FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8400"))) PPC_WEAK_FUNC(sub_82AB8400);
PPC_FUNC_IMPL(__imp__sub_82AB8400) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// addi r10,r10,20008
	ctx.r10.s64 = ctx.r10.s64 + 20008;
	// addi r11,r11,-13632
	ctx.r11.s64 = ctx.r11.s64 + -13632;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8418"))) PPC_WEAK_FUNC(sub_82AB8418);
PPC_FUNC_IMPL(__imp__sub_82AB8418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// addi r11,r11,20704
	ctx.r11.s64 = ctx.r11.s64 + 20704;
	// stw r11,-13672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB842C"))) PPC_WEAK_FUNC(sub_82AB842C);
PPC_FUNC_IMPL(__imp__sub_82AB842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8430"))) PPC_WEAK_FUNC(sub_82AB8430);
PPC_FUNC_IMPL(__imp__sub_82AB8430) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-14088
	ctx.r31.s64 = ctx.r11.s64 + -14088;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8242d688
	ctx.lr = 0x82AB8454;
	sub_8242D688(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32084
	ctx.r10.s64 = -2102657024;
	// addi r3,r10,6744
	ctx.r3.s64 = ctx.r10.s64 + 6744;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82AB846C;
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

__attribute__((alias("__imp__sub_82AB8480"))) PPC_WEAK_FUNC(sub_82AB8480);
PPC_FUNC_IMPL(__imp__sub_82AB8480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-13980
	ctx.r3.s64 = ctx.r11.s64 + -13980;
	// b 0x82170b98
	sub_82170B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB848C"))) PPC_WEAK_FUNC(sub_82AB848C);
PPC_FUNC_IMPL(__imp__sub_82AB848C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8490"))) PPC_WEAK_FUNC(sub_82AB8490);
PPC_FUNC_IMPL(__imp__sub_82AB8490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6760
	ctx.r3.s64 = ctx.r11.s64 + 6760;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB849C"))) PPC_WEAK_FUNC(sub_82AB849C);
PPC_FUNC_IMPL(__imp__sub_82AB849C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB84A0"))) PPC_WEAK_FUNC(sub_82AB84A0);
PPC_FUNC_IMPL(__imp__sub_82AB84A0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,528
	ctx.r3.s64 = 528;
	// addi r4,r11,31704
	ctx.r4.s64 = ctx.r11.s64 + 31704;
	// bl 0x82316b80
	ctx.lr = 0x82AB84BC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13968(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13968, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB84D4"))) PPC_WEAK_FUNC(sub_82AB84D4);
PPC_FUNC_IMPL(__imp__sub_82AB84D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB84D8"))) PPC_WEAK_FUNC(sub_82AB84D8);
PPC_FUNC_IMPL(__imp__sub_82AB84D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,501
	ctx.r3.s64 = 501;
	// addi r4,r11,31708
	ctx.r4.s64 = ctx.r11.s64 + 31708;
	// bl 0x82316b80
	ctx.lr = 0x82AB84F4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13967(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13967, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB850C"))) PPC_WEAK_FUNC(sub_82AB850C);
PPC_FUNC_IMPL(__imp__sub_82AB850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8510"))) PPC_WEAK_FUNC(sub_82AB8510);
PPC_FUNC_IMPL(__imp__sub_82AB8510) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,503
	ctx.r3.s64 = 503;
	// addi r4,r11,31712
	ctx.r4.s64 = ctx.r11.s64 + 31712;
	// bl 0x82316b80
	ctx.lr = 0x82AB852C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13966(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13966, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8544"))) PPC_WEAK_FUNC(sub_82AB8544);
PPC_FUNC_IMPL(__imp__sub_82AB8544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8548"))) PPC_WEAK_FUNC(sub_82AB8548);
PPC_FUNC_IMPL(__imp__sub_82AB8548) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,509
	ctx.r3.s64 = 509;
	// addi r4,r11,31716
	ctx.r4.s64 = ctx.r11.s64 + 31716;
	// bl 0x82316b80
	ctx.lr = 0x82AB8564;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13965(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13965, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB857C"))) PPC_WEAK_FUNC(sub_82AB857C);
PPC_FUNC_IMPL(__imp__sub_82AB857C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8580"))) PPC_WEAK_FUNC(sub_82AB8580);
PPC_FUNC_IMPL(__imp__sub_82AB8580) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r11,r11,-13672
	ctx.r11.s64 = ctx.r11.s64 + -13672;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8598"))) PPC_WEAK_FUNC(sub_82AB8598);
PPC_FUNC_IMPL(__imp__sub_82AB8598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r11,r11,-7740
	ctx.r11.s64 = ctx.r11.s64 + -7740;
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

__attribute__((alias("__imp__sub_82AB85D0"))) PPC_WEAK_FUNC(sub_82AB85D0);
PPC_FUNC_IMPL(__imp__sub_82AB85D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6768
	ctx.r3.s64 = ctx.r11.s64 + 6768;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB85DC"))) PPC_WEAK_FUNC(sub_82AB85DC);
PPC_FUNC_IMPL(__imp__sub_82AB85DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB85E0"))) PPC_WEAK_FUNC(sub_82AB85E0);
PPC_FUNC_IMPL(__imp__sub_82AB85E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6840
	ctx.r3.s64 = ctx.r11.s64 + 6840;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB85EC"))) PPC_WEAK_FUNC(sub_82AB85EC);
PPC_FUNC_IMPL(__imp__sub_82AB85EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB85F0"))) PPC_WEAK_FUNC(sub_82AB85F0);
PPC_FUNC_IMPL(__imp__sub_82AB85F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6856
	ctx.r3.s64 = ctx.r11.s64 + 6856;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB85FC"))) PPC_WEAK_FUNC(sub_82AB85FC);
PPC_FUNC_IMPL(__imp__sub_82AB85FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8600"))) PPC_WEAK_FUNC(sub_82AB8600);
PPC_FUNC_IMPL(__imp__sub_82AB8600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6872
	ctx.r3.s64 = ctx.r11.s64 + 6872;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB860C"))) PPC_WEAK_FUNC(sub_82AB860C);
PPC_FUNC_IMPL(__imp__sub_82AB860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8610"))) PPC_WEAK_FUNC(sub_82AB8610);
PPC_FUNC_IMPL(__imp__sub_82AB8610) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,385
	ctx.r3.s64 = 385;
	// addi r4,r11,31700
	ctx.r4.s64 = ctx.r11.s64 + 31700;
	// bl 0x82316b80
	ctx.lr = 0x82AB862C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13892(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13892, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8644"))) PPC_WEAK_FUNC(sub_82AB8644);
PPC_FUNC_IMPL(__imp__sub_82AB8644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8648"))) PPC_WEAK_FUNC(sub_82AB8648);
PPC_FUNC_IMPL(__imp__sub_82AB8648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r11,r11,-7760
	ctx.r11.s64 = ctx.r11.s64 + -7760;
	// lfs f0,24328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r10,-7680
	ctx.r9.s64 = ctx.r10.s64 + -7680;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r6,-8(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB86B0"))) PPC_WEAK_FUNC(sub_82AB86B0);
PPC_FUNC_IMPL(__imp__sub_82AB86B0) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-20160
	ctx.r4.s64 = ctx.r11.s64 + -20160;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r31,r11,-13888
	ctx.r31.s64 = ctx.r11.s64 + -13888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821704f8
	ctx.lr = 0x82AB86D8;
	sub_821704F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,-20192
	ctx.r4.s64 = ctx.r11.s64 + -20192;
	// bl 0x821704f8
	ctx.lr = 0x82AB86E8;
	sub_821704F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,5532
	ctx.r4.s64 = ctx.r11.s64 + 5532;
	// bl 0x821704f8
	ctx.lr = 0x82AB86F8;
	sub_821704F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r11,-20232
	ctx.r4.s64 = ctx.r11.s64 + -20232;
	// bl 0x821704f8
	ctx.lr = 0x82AB8708;
	sub_821704F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r11,-2012
	ctx.r4.s64 = ctx.r11.s64 + -2012;
	// bl 0x821704f8
	ctx.lr = 0x82AB8718;
	sub_821704F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r4,r11,-20264
	ctx.r4.s64 = ctx.r11.s64 + -20264;
	// bl 0x821704f8
	ctx.lr = 0x82AB8728;
	sub_821704F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r4,r11,28864
	ctx.r4.s64 = ctx.r11.s64 + 28864;
	// bl 0x821704f8
	ctx.lr = 0x82AB8738;
	sub_821704F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// bl 0x821704f8
	ctx.lr = 0x82AB8748;
	sub_821704F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-20316
	ctx.r4.s64 = ctx.r11.s64 + -20316;
	// bl 0x821704f8
	ctx.lr = 0x82AB8758;
	sub_821704F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r4,r11,-20332
	ctx.r4.s64 = ctx.r11.s64 + -20332;
	// bl 0x821704f8
	ctx.lr = 0x82AB8768;
	sub_821704F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// addi r4,r11,11688
	ctx.r4.s64 = ctx.r11.s64 + 11688;
	// bl 0x821704f8
	ctx.lr = 0x82AB8778;
	sub_821704F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// addi r4,r11,-20368
	ctx.r4.s64 = ctx.r11.s64 + -20368;
	// bl 0x821704f8
	ctx.lr = 0x82AB8788;
	sub_821704F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,-20396
	ctx.r4.s64 = ctx.r11.s64 + -20396;
	// bl 0x821704f8
	ctx.lr = 0x82AB8798;
	sub_821704F8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,6952
	ctx.r3.s64 = ctx.r11.s64 + 6952;
	// bl 0x828d1968
	ctx.lr = 0x82AB87A4;
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

__attribute__((alias("__imp__sub_82AB87B8"))) PPC_WEAK_FUNC(sub_82AB87B8);
PPC_FUNC_IMPL(__imp__sub_82AB87B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821702e0
	ctx.lr = 0x82AB87D4;
	sub_821702E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ab8850
	if (cr6.eq) goto loc_82AB8850;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r10,r10,-20148
	ctx.r10.s64 = ctx.r10.s64 + -20148;
	// lfd f0,24736(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24736);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82AB8834;
	sub_8257A5A8(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r31,-13732(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13732, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AB8850:
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-13732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13732, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8870"))) PPC_WEAK_FUNC(sub_82AB8870);
PPC_FUNC_IMPL(__imp__sub_82AB8870) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821702e0
	ctx.lr = 0x82AB888C;
	sub_821702E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ab8908
	if (cr6.eq) goto loc_82AB8908;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r10,r10,-20116
	ctx.r10.s64 = ctx.r10.s64 + -20116;
	// lfd f0,24736(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24736);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82AB88EC;
	sub_8257A5A8(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r31,-13728(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13728, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AB8908:
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-13728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13728, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8928"))) PPC_WEAK_FUNC(sub_82AB8928);
PPC_FUNC_IMPL(__imp__sub_82AB8928) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30884
	ctx.r4.s64 = ctx.r11.s64 + 30884;
	// bl 0x82316b80
	ctx.lr = 0x82AB8944;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13724(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13724, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB895C"))) PPC_WEAK_FUNC(sub_82AB895C);
PPC_FUNC_IMPL(__imp__sub_82AB895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8960"))) PPC_WEAK_FUNC(sub_82AB8960);
PPC_FUNC_IMPL(__imp__sub_82AB8960) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30888
	ctx.r4.s64 = ctx.r11.s64 + 30888;
	// bl 0x82316b80
	ctx.lr = 0x82AB897C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13723(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13723, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8994"))) PPC_WEAK_FUNC(sub_82AB8994);
PPC_FUNC_IMPL(__imp__sub_82AB8994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8998"))) PPC_WEAK_FUNC(sub_82AB8998);
PPC_FUNC_IMPL(__imp__sub_82AB8998) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30892
	ctx.r4.s64 = ctx.r11.s64 + 30892;
	// bl 0x82316b80
	ctx.lr = 0x82AB89B4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13722(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13722, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB89CC"))) PPC_WEAK_FUNC(sub_82AB89CC);
PPC_FUNC_IMPL(__imp__sub_82AB89CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB89D0"))) PPC_WEAK_FUNC(sub_82AB89D0);
PPC_FUNC_IMPL(__imp__sub_82AB89D0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30896
	ctx.r4.s64 = ctx.r11.s64 + 30896;
	// bl 0x82316b80
	ctx.lr = 0x82AB89EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13721(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13721, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8A04"))) PPC_WEAK_FUNC(sub_82AB8A04);
PPC_FUNC_IMPL(__imp__sub_82AB8A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8A08"))) PPC_WEAK_FUNC(sub_82AB8A08);
PPC_FUNC_IMPL(__imp__sub_82AB8A08) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30900
	ctx.r4.s64 = ctx.r11.s64 + 30900;
	// bl 0x82316b80
	ctx.lr = 0x82AB8A24;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13720(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13720, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8A3C"))) PPC_WEAK_FUNC(sub_82AB8A3C);
PPC_FUNC_IMPL(__imp__sub_82AB8A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8A40"))) PPC_WEAK_FUNC(sub_82AB8A40);
PPC_FUNC_IMPL(__imp__sub_82AB8A40) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30904
	ctx.r4.s64 = ctx.r11.s64 + 30904;
	// bl 0x82316b80
	ctx.lr = 0x82AB8A5C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13719(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13719, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

