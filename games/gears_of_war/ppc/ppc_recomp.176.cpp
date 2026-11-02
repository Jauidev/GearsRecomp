#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AA99A0"))) PPC_WEAK_FUNC(sub_82AA99A0);
PPC_FUNC_IMPL(__imp__sub_82AA99A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30880
	ctx.r4.s64 = ctx.r11.s64 + -30880;
	// bl 0x82316b80
	ctx.lr = 0x82AA99BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17373(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17373, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA99D4"))) PPC_WEAK_FUNC(sub_82AA99D4);
PPC_FUNC_IMPL(__imp__sub_82AA99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA99D8"))) PPC_WEAK_FUNC(sub_82AA99D8);
PPC_FUNC_IMPL(__imp__sub_82AA99D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30876
	ctx.r4.s64 = ctx.r11.s64 + -30876;
	// bl 0x82316b80
	ctx.lr = 0x82AA99F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17372(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17372, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9A0C"))) PPC_WEAK_FUNC(sub_82AA9A0C);
PPC_FUNC_IMPL(__imp__sub_82AA9A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9A10"))) PPC_WEAK_FUNC(sub_82AA9A10);
PPC_FUNC_IMPL(__imp__sub_82AA9A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30872
	ctx.r4.s64 = ctx.r11.s64 + -30872;
	// bl 0x82316b80
	ctx.lr = 0x82AA9A2C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17371(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17371, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9A44"))) PPC_WEAK_FUNC(sub_82AA9A44);
PPC_FUNC_IMPL(__imp__sub_82AA9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9A48"))) PPC_WEAK_FUNC(sub_82AA9A48);
PPC_FUNC_IMPL(__imp__sub_82AA9A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30868
	ctx.r4.s64 = ctx.r11.s64 + -30868;
	// bl 0x82316b80
	ctx.lr = 0x82AA9A64;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17370(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17370, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9A7C"))) PPC_WEAK_FUNC(sub_82AA9A7C);
PPC_FUNC_IMPL(__imp__sub_82AA9A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9A80"))) PPC_WEAK_FUNC(sub_82AA9A80);
PPC_FUNC_IMPL(__imp__sub_82AA9A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30864
	ctx.r4.s64 = ctx.r11.s64 + -30864;
	// bl 0x82316b80
	ctx.lr = 0x82AA9A9C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17369(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17369, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9AB4"))) PPC_WEAK_FUNC(sub_82AA9AB4);
PPC_FUNC_IMPL(__imp__sub_82AA9AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9AB8"))) PPC_WEAK_FUNC(sub_82AA9AB8);
PPC_FUNC_IMPL(__imp__sub_82AA9AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30860
	ctx.r4.s64 = ctx.r11.s64 + -30860;
	// bl 0x82316b80
	ctx.lr = 0x82AA9AD4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17368(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17368, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9AEC"))) PPC_WEAK_FUNC(sub_82AA9AEC);
PPC_FUNC_IMPL(__imp__sub_82AA9AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9AF0"))) PPC_WEAK_FUNC(sub_82AA9AF0);
PPC_FUNC_IMPL(__imp__sub_82AA9AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30856
	ctx.r4.s64 = ctx.r11.s64 + -30856;
	// bl 0x82316b80
	ctx.lr = 0x82AA9B0C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17367(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17367, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9B24"))) PPC_WEAK_FUNC(sub_82AA9B24);
PPC_FUNC_IMPL(__imp__sub_82AA9B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9B28"))) PPC_WEAK_FUNC(sub_82AA9B28);
PPC_FUNC_IMPL(__imp__sub_82AA9B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30852
	ctx.r4.s64 = ctx.r11.s64 + -30852;
	// bl 0x82316b80
	ctx.lr = 0x82AA9B44;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17366(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17366, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9B5C"))) PPC_WEAK_FUNC(sub_82AA9B5C);
PPC_FUNC_IMPL(__imp__sub_82AA9B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9B60"))) PPC_WEAK_FUNC(sub_82AA9B60);
PPC_FUNC_IMPL(__imp__sub_82AA9B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30848
	ctx.r4.s64 = ctx.r11.s64 + -30848;
	// bl 0x82316b80
	ctx.lr = 0x82AA9B7C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17365(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17365, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9B94"))) PPC_WEAK_FUNC(sub_82AA9B94);
PPC_FUNC_IMPL(__imp__sub_82AA9B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9B98"))) PPC_WEAK_FUNC(sub_82AA9B98);
PPC_FUNC_IMPL(__imp__sub_82AA9B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30844
	ctx.r4.s64 = ctx.r11.s64 + -30844;
	// bl 0x82316b80
	ctx.lr = 0x82AA9BB4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17364(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17364, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9BCC"))) PPC_WEAK_FUNC(sub_82AA9BCC);
PPC_FUNC_IMPL(__imp__sub_82AA9BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9BD0"))) PPC_WEAK_FUNC(sub_82AA9BD0);
PPC_FUNC_IMPL(__imp__sub_82AA9BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30840
	ctx.r4.s64 = ctx.r11.s64 + -30840;
	// bl 0x82316b80
	ctx.lr = 0x82AA9BEC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17363(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17363, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9C04"))) PPC_WEAK_FUNC(sub_82AA9C04);
PPC_FUNC_IMPL(__imp__sub_82AA9C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9C08"))) PPC_WEAK_FUNC(sub_82AA9C08);
PPC_FUNC_IMPL(__imp__sub_82AA9C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30836
	ctx.r4.s64 = ctx.r11.s64 + -30836;
	// bl 0x82316b80
	ctx.lr = 0x82AA9C24;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17362(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17362, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9C3C"))) PPC_WEAK_FUNC(sub_82AA9C3C);
PPC_FUNC_IMPL(__imp__sub_82AA9C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9C40"))) PPC_WEAK_FUNC(sub_82AA9C40);
PPC_FUNC_IMPL(__imp__sub_82AA9C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30832
	ctx.r4.s64 = ctx.r11.s64 + -30832;
	// bl 0x82316b80
	ctx.lr = 0x82AA9C5C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17361(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17361, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9C74"))) PPC_WEAK_FUNC(sub_82AA9C74);
PPC_FUNC_IMPL(__imp__sub_82AA9C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9C78"))) PPC_WEAK_FUNC(sub_82AA9C78);
PPC_FUNC_IMPL(__imp__sub_82AA9C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30828
	ctx.r4.s64 = ctx.r11.s64 + -30828;
	// bl 0x82316b80
	ctx.lr = 0x82AA9C94;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17360(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17360, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9CAC"))) PPC_WEAK_FUNC(sub_82AA9CAC);
PPC_FUNC_IMPL(__imp__sub_82AA9CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9CB0"))) PPC_WEAK_FUNC(sub_82AA9CB0);
PPC_FUNC_IMPL(__imp__sub_82AA9CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30824
	ctx.r4.s64 = ctx.r11.s64 + -30824;
	// bl 0x82316b80
	ctx.lr = 0x82AA9CCC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17359(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17359, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9CE4"))) PPC_WEAK_FUNC(sub_82AA9CE4);
PPC_FUNC_IMPL(__imp__sub_82AA9CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9CE8"))) PPC_WEAK_FUNC(sub_82AA9CE8);
PPC_FUNC_IMPL(__imp__sub_82AA9CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30820
	ctx.r4.s64 = ctx.r11.s64 + -30820;
	// bl 0x82316b80
	ctx.lr = 0x82AA9D04;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17358(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17358, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9D1C"))) PPC_WEAK_FUNC(sub_82AA9D1C);
PPC_FUNC_IMPL(__imp__sub_82AA9D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9D20"))) PPC_WEAK_FUNC(sub_82AA9D20);
PPC_FUNC_IMPL(__imp__sub_82AA9D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30816
	ctx.r4.s64 = ctx.r11.s64 + -30816;
	// bl 0x82316b80
	ctx.lr = 0x82AA9D3C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17357(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17357, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9D54"))) PPC_WEAK_FUNC(sub_82AA9D54);
PPC_FUNC_IMPL(__imp__sub_82AA9D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9D58"))) PPC_WEAK_FUNC(sub_82AA9D58);
PPC_FUNC_IMPL(__imp__sub_82AA9D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30812
	ctx.r4.s64 = ctx.r11.s64 + -30812;
	// bl 0x82316b80
	ctx.lr = 0x82AA9D74;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17356(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17356, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9D8C"))) PPC_WEAK_FUNC(sub_82AA9D8C);
PPC_FUNC_IMPL(__imp__sub_82AA9D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9D90"))) PPC_WEAK_FUNC(sub_82AA9D90);
PPC_FUNC_IMPL(__imp__sub_82AA9D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30808
	ctx.r4.s64 = ctx.r11.s64 + -30808;
	// bl 0x82316b80
	ctx.lr = 0x82AA9DAC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17355(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17355, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9DC4"))) PPC_WEAK_FUNC(sub_82AA9DC4);
PPC_FUNC_IMPL(__imp__sub_82AA9DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9DC8"))) PPC_WEAK_FUNC(sub_82AA9DC8);
PPC_FUNC_IMPL(__imp__sub_82AA9DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30804
	ctx.r4.s64 = ctx.r11.s64 + -30804;
	// bl 0x82316b80
	ctx.lr = 0x82AA9DE4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17354(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17354, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9DFC"))) PPC_WEAK_FUNC(sub_82AA9DFC);
PPC_FUNC_IMPL(__imp__sub_82AA9DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9E00"))) PPC_WEAK_FUNC(sub_82AA9E00);
PPC_FUNC_IMPL(__imp__sub_82AA9E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30800
	ctx.r4.s64 = ctx.r11.s64 + -30800;
	// bl 0x82316b80
	ctx.lr = 0x82AA9E1C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17353(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17353, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9E34"))) PPC_WEAK_FUNC(sub_82AA9E34);
PPC_FUNC_IMPL(__imp__sub_82AA9E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9E38"))) PPC_WEAK_FUNC(sub_82AA9E38);
PPC_FUNC_IMPL(__imp__sub_82AA9E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30796
	ctx.r4.s64 = ctx.r11.s64 + -30796;
	// bl 0x82316b80
	ctx.lr = 0x82AA9E54;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17352(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17352, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9E6C"))) PPC_WEAK_FUNC(sub_82AA9E6C);
PPC_FUNC_IMPL(__imp__sub_82AA9E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9E70"))) PPC_WEAK_FUNC(sub_82AA9E70);
PPC_FUNC_IMPL(__imp__sub_82AA9E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30792
	ctx.r4.s64 = ctx.r11.s64 + -30792;
	// bl 0x82316b80
	ctx.lr = 0x82AA9E8C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17351(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17351, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9EA4"))) PPC_WEAK_FUNC(sub_82AA9EA4);
PPC_FUNC_IMPL(__imp__sub_82AA9EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9EA8"))) PPC_WEAK_FUNC(sub_82AA9EA8);
PPC_FUNC_IMPL(__imp__sub_82AA9EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30788
	ctx.r4.s64 = ctx.r11.s64 + -30788;
	// bl 0x82316b80
	ctx.lr = 0x82AA9EC4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17350(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17350, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9EDC"))) PPC_WEAK_FUNC(sub_82AA9EDC);
PPC_FUNC_IMPL(__imp__sub_82AA9EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9EE0"))) PPC_WEAK_FUNC(sub_82AA9EE0);
PPC_FUNC_IMPL(__imp__sub_82AA9EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30784
	ctx.r4.s64 = ctx.r11.s64 + -30784;
	// bl 0x82316b80
	ctx.lr = 0x82AA9EFC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17349(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17349, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9F14"))) PPC_WEAK_FUNC(sub_82AA9F14);
PPC_FUNC_IMPL(__imp__sub_82AA9F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9F18"))) PPC_WEAK_FUNC(sub_82AA9F18);
PPC_FUNC_IMPL(__imp__sub_82AA9F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30780
	ctx.r4.s64 = ctx.r11.s64 + -30780;
	// bl 0x82316b80
	ctx.lr = 0x82AA9F34;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17348(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17348, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9F4C"))) PPC_WEAK_FUNC(sub_82AA9F4C);
PPC_FUNC_IMPL(__imp__sub_82AA9F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9F50"))) PPC_WEAK_FUNC(sub_82AA9F50);
PPC_FUNC_IMPL(__imp__sub_82AA9F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30776
	ctx.r4.s64 = ctx.r11.s64 + -30776;
	// bl 0x82316b80
	ctx.lr = 0x82AA9F6C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17347(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17347, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9F84"))) PPC_WEAK_FUNC(sub_82AA9F84);
PPC_FUNC_IMPL(__imp__sub_82AA9F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9F88"))) PPC_WEAK_FUNC(sub_82AA9F88);
PPC_FUNC_IMPL(__imp__sub_82AA9F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30772
	ctx.r4.s64 = ctx.r11.s64 + -30772;
	// bl 0x82316b80
	ctx.lr = 0x82AA9FA4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17346(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17346, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9FBC"))) PPC_WEAK_FUNC(sub_82AA9FBC);
PPC_FUNC_IMPL(__imp__sub_82AA9FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9FC0"))) PPC_WEAK_FUNC(sub_82AA9FC0);
PPC_FUNC_IMPL(__imp__sub_82AA9FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30768
	ctx.r4.s64 = ctx.r11.s64 + -30768;
	// bl 0x82316b80
	ctx.lr = 0x82AA9FDC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17345(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17345, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA9FF4"))) PPC_WEAK_FUNC(sub_82AA9FF4);
PPC_FUNC_IMPL(__imp__sub_82AA9FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA9FF8"))) PPC_WEAK_FUNC(sub_82AA9FF8);
PPC_FUNC_IMPL(__imp__sub_82AA9FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30764
	ctx.r4.s64 = ctx.r11.s64 + -30764;
	// bl 0x82316b80
	ctx.lr = 0x82AAA014;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17344(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17344, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA02C"))) PPC_WEAK_FUNC(sub_82AAA02C);
PPC_FUNC_IMPL(__imp__sub_82AAA02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA030"))) PPC_WEAK_FUNC(sub_82AAA030);
PPC_FUNC_IMPL(__imp__sub_82AAA030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30760
	ctx.r4.s64 = ctx.r11.s64 + -30760;
	// bl 0x82316b80
	ctx.lr = 0x82AAA04C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17343(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17343, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA064"))) PPC_WEAK_FUNC(sub_82AAA064);
PPC_FUNC_IMPL(__imp__sub_82AAA064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA068"))) PPC_WEAK_FUNC(sub_82AAA068);
PPC_FUNC_IMPL(__imp__sub_82AAA068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30756
	ctx.r4.s64 = ctx.r11.s64 + -30756;
	// bl 0x82316b80
	ctx.lr = 0x82AAA084;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17342(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17342, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA09C"))) PPC_WEAK_FUNC(sub_82AAA09C);
PPC_FUNC_IMPL(__imp__sub_82AAA09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA0A0"))) PPC_WEAK_FUNC(sub_82AAA0A0);
PPC_FUNC_IMPL(__imp__sub_82AAA0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30752
	ctx.r4.s64 = ctx.r11.s64 + -30752;
	// bl 0x82316b80
	ctx.lr = 0x82AAA0BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17341(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17341, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA0D4"))) PPC_WEAK_FUNC(sub_82AAA0D4);
PPC_FUNC_IMPL(__imp__sub_82AAA0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA0D8"))) PPC_WEAK_FUNC(sub_82AAA0D8);
PPC_FUNC_IMPL(__imp__sub_82AAA0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30748
	ctx.r4.s64 = ctx.r11.s64 + -30748;
	// bl 0x82316b80
	ctx.lr = 0x82AAA0F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17340(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17340, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA10C"))) PPC_WEAK_FUNC(sub_82AAA10C);
PPC_FUNC_IMPL(__imp__sub_82AAA10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA110"))) PPC_WEAK_FUNC(sub_82AAA110);
PPC_FUNC_IMPL(__imp__sub_82AAA110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30744
	ctx.r4.s64 = ctx.r11.s64 + -30744;
	// bl 0x82316b80
	ctx.lr = 0x82AAA12C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17339(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17339, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA144"))) PPC_WEAK_FUNC(sub_82AAA144);
PPC_FUNC_IMPL(__imp__sub_82AAA144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA148"))) PPC_WEAK_FUNC(sub_82AAA148);
PPC_FUNC_IMPL(__imp__sub_82AAA148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30740
	ctx.r4.s64 = ctx.r11.s64 + -30740;
	// bl 0x82316b80
	ctx.lr = 0x82AAA164;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17338(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17338, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA17C"))) PPC_WEAK_FUNC(sub_82AAA17C);
PPC_FUNC_IMPL(__imp__sub_82AAA17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA180"))) PPC_WEAK_FUNC(sub_82AAA180);
PPC_FUNC_IMPL(__imp__sub_82AAA180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30736
	ctx.r4.s64 = ctx.r11.s64 + -30736;
	// bl 0x82316b80
	ctx.lr = 0x82AAA19C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17337(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17337, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA1B4"))) PPC_WEAK_FUNC(sub_82AAA1B4);
PPC_FUNC_IMPL(__imp__sub_82AAA1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA1B8"))) PPC_WEAK_FUNC(sub_82AAA1B8);
PPC_FUNC_IMPL(__imp__sub_82AAA1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30732
	ctx.r4.s64 = ctx.r11.s64 + -30732;
	// bl 0x82316b80
	ctx.lr = 0x82AAA1D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17336(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17336, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA1EC"))) PPC_WEAK_FUNC(sub_82AAA1EC);
PPC_FUNC_IMPL(__imp__sub_82AAA1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA1F0"))) PPC_WEAK_FUNC(sub_82AAA1F0);
PPC_FUNC_IMPL(__imp__sub_82AAA1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30728
	ctx.r4.s64 = ctx.r11.s64 + -30728;
	// bl 0x82316b80
	ctx.lr = 0x82AAA20C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17335(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17335, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA224"))) PPC_WEAK_FUNC(sub_82AAA224);
PPC_FUNC_IMPL(__imp__sub_82AAA224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA228"))) PPC_WEAK_FUNC(sub_82AAA228);
PPC_FUNC_IMPL(__imp__sub_82AAA228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30724
	ctx.r4.s64 = ctx.r11.s64 + -30724;
	// bl 0x82316b80
	ctx.lr = 0x82AAA244;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17334(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17334, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA25C"))) PPC_WEAK_FUNC(sub_82AAA25C);
PPC_FUNC_IMPL(__imp__sub_82AAA25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA260"))) PPC_WEAK_FUNC(sub_82AAA260);
PPC_FUNC_IMPL(__imp__sub_82AAA260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30720
	ctx.r4.s64 = ctx.r11.s64 + -30720;
	// bl 0x82316b80
	ctx.lr = 0x82AAA27C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17333(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17333, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA294"))) PPC_WEAK_FUNC(sub_82AAA294);
PPC_FUNC_IMPL(__imp__sub_82AAA294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA298"))) PPC_WEAK_FUNC(sub_82AAA298);
PPC_FUNC_IMPL(__imp__sub_82AAA298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30716
	ctx.r4.s64 = ctx.r11.s64 + -30716;
	// bl 0x82316b80
	ctx.lr = 0x82AAA2B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17332(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17332, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA2CC"))) PPC_WEAK_FUNC(sub_82AAA2CC);
PPC_FUNC_IMPL(__imp__sub_82AAA2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA2D0"))) PPC_WEAK_FUNC(sub_82AAA2D0);
PPC_FUNC_IMPL(__imp__sub_82AAA2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30712
	ctx.r4.s64 = ctx.r11.s64 + -30712;
	// bl 0x82316b80
	ctx.lr = 0x82AAA2EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17331(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17331, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA304"))) PPC_WEAK_FUNC(sub_82AAA304);
PPC_FUNC_IMPL(__imp__sub_82AAA304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA308"))) PPC_WEAK_FUNC(sub_82AAA308);
PPC_FUNC_IMPL(__imp__sub_82AAA308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30708
	ctx.r4.s64 = ctx.r11.s64 + -30708;
	// bl 0x82316b80
	ctx.lr = 0x82AAA324;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17330(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17330, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA33C"))) PPC_WEAK_FUNC(sub_82AAA33C);
PPC_FUNC_IMPL(__imp__sub_82AAA33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA340"))) PPC_WEAK_FUNC(sub_82AAA340);
PPC_FUNC_IMPL(__imp__sub_82AAA340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30704
	ctx.r4.s64 = ctx.r11.s64 + -30704;
	// bl 0x82316b80
	ctx.lr = 0x82AAA35C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17329(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17329, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA374"))) PPC_WEAK_FUNC(sub_82AAA374);
PPC_FUNC_IMPL(__imp__sub_82AAA374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA378"))) PPC_WEAK_FUNC(sub_82AAA378);
PPC_FUNC_IMPL(__imp__sub_82AAA378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30700
	ctx.r4.s64 = ctx.r11.s64 + -30700;
	// bl 0x82316b80
	ctx.lr = 0x82AAA394;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17328(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17328, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA3AC"))) PPC_WEAK_FUNC(sub_82AAA3AC);
PPC_FUNC_IMPL(__imp__sub_82AAA3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA3B0"))) PPC_WEAK_FUNC(sub_82AAA3B0);
PPC_FUNC_IMPL(__imp__sub_82AAA3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30696
	ctx.r4.s64 = ctx.r11.s64 + -30696;
	// bl 0x82316b80
	ctx.lr = 0x82AAA3CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17327(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17327, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA3E4"))) PPC_WEAK_FUNC(sub_82AAA3E4);
PPC_FUNC_IMPL(__imp__sub_82AAA3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA3E8"))) PPC_WEAK_FUNC(sub_82AAA3E8);
PPC_FUNC_IMPL(__imp__sub_82AAA3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30692
	ctx.r4.s64 = ctx.r11.s64 + -30692;
	// bl 0x82316b80
	ctx.lr = 0x82AAA404;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17326(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17326, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA41C"))) PPC_WEAK_FUNC(sub_82AAA41C);
PPC_FUNC_IMPL(__imp__sub_82AAA41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA420"))) PPC_WEAK_FUNC(sub_82AAA420);
PPC_FUNC_IMPL(__imp__sub_82AAA420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// bl 0x82316b80
	ctx.lr = 0x82AAA43C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17325(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17325, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA454"))) PPC_WEAK_FUNC(sub_82AAA454);
PPC_FUNC_IMPL(__imp__sub_82AAA454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA458"))) PPC_WEAK_FUNC(sub_82AAA458);
PPC_FUNC_IMPL(__imp__sub_82AAA458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30684
	ctx.r4.s64 = ctx.r11.s64 + -30684;
	// bl 0x82316b80
	ctx.lr = 0x82AAA474;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17324(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17324, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA48C"))) PPC_WEAK_FUNC(sub_82AAA48C);
PPC_FUNC_IMPL(__imp__sub_82AAA48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA490"))) PPC_WEAK_FUNC(sub_82AAA490);
PPC_FUNC_IMPL(__imp__sub_82AAA490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30680
	ctx.r4.s64 = ctx.r11.s64 + -30680;
	// bl 0x82316b80
	ctx.lr = 0x82AAA4AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17323(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17323, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA4C4"))) PPC_WEAK_FUNC(sub_82AAA4C4);
PPC_FUNC_IMPL(__imp__sub_82AAA4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA4C8"))) PPC_WEAK_FUNC(sub_82AAA4C8);
PPC_FUNC_IMPL(__imp__sub_82AAA4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30676
	ctx.r4.s64 = ctx.r11.s64 + -30676;
	// bl 0x82316b80
	ctx.lr = 0x82AAA4E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17322(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17322, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA4FC"))) PPC_WEAK_FUNC(sub_82AAA4FC);
PPC_FUNC_IMPL(__imp__sub_82AAA4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA500"))) PPC_WEAK_FUNC(sub_82AAA500);
PPC_FUNC_IMPL(__imp__sub_82AAA500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30672
	ctx.r4.s64 = ctx.r11.s64 + -30672;
	// bl 0x82316b80
	ctx.lr = 0x82AAA51C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17321(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17321, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA534"))) PPC_WEAK_FUNC(sub_82AAA534);
PPC_FUNC_IMPL(__imp__sub_82AAA534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA538"))) PPC_WEAK_FUNC(sub_82AAA538);
PPC_FUNC_IMPL(__imp__sub_82AAA538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30668
	ctx.r4.s64 = ctx.r11.s64 + -30668;
	// bl 0x82316b80
	ctx.lr = 0x82AAA554;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17320(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17320, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA56C"))) PPC_WEAK_FUNC(sub_82AAA56C);
PPC_FUNC_IMPL(__imp__sub_82AAA56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA570"))) PPC_WEAK_FUNC(sub_82AAA570);
PPC_FUNC_IMPL(__imp__sub_82AAA570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30664
	ctx.r4.s64 = ctx.r11.s64 + -30664;
	// bl 0x82316b80
	ctx.lr = 0x82AAA58C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17319(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17319, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA5A4"))) PPC_WEAK_FUNC(sub_82AAA5A4);
PPC_FUNC_IMPL(__imp__sub_82AAA5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA5A8"))) PPC_WEAK_FUNC(sub_82AAA5A8);
PPC_FUNC_IMPL(__imp__sub_82AAA5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30660
	ctx.r4.s64 = ctx.r11.s64 + -30660;
	// bl 0x82316b80
	ctx.lr = 0x82AAA5C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17318(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17318, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA5DC"))) PPC_WEAK_FUNC(sub_82AAA5DC);
PPC_FUNC_IMPL(__imp__sub_82AAA5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA5E0"))) PPC_WEAK_FUNC(sub_82AAA5E0);
PPC_FUNC_IMPL(__imp__sub_82AAA5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30656
	ctx.r4.s64 = ctx.r11.s64 + -30656;
	// bl 0x82316b80
	ctx.lr = 0x82AAA5FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17317(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17317, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA614"))) PPC_WEAK_FUNC(sub_82AAA614);
PPC_FUNC_IMPL(__imp__sub_82AAA614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA618"))) PPC_WEAK_FUNC(sub_82AAA618);
PPC_FUNC_IMPL(__imp__sub_82AAA618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30652
	ctx.r4.s64 = ctx.r11.s64 + -30652;
	// bl 0x82316b80
	ctx.lr = 0x82AAA634;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17316(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17316, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA64C"))) PPC_WEAK_FUNC(sub_82AAA64C);
PPC_FUNC_IMPL(__imp__sub_82AAA64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA650"))) PPC_WEAK_FUNC(sub_82AAA650);
PPC_FUNC_IMPL(__imp__sub_82AAA650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30648
	ctx.r4.s64 = ctx.r11.s64 + -30648;
	// bl 0x82316b80
	ctx.lr = 0x82AAA66C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17315(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17315, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA684"))) PPC_WEAK_FUNC(sub_82AAA684);
PPC_FUNC_IMPL(__imp__sub_82AAA684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA688"))) PPC_WEAK_FUNC(sub_82AAA688);
PPC_FUNC_IMPL(__imp__sub_82AAA688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30644
	ctx.r4.s64 = ctx.r11.s64 + -30644;
	// bl 0x82316b80
	ctx.lr = 0x82AAA6A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17314(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17314, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA6BC"))) PPC_WEAK_FUNC(sub_82AAA6BC);
PPC_FUNC_IMPL(__imp__sub_82AAA6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA6C0"))) PPC_WEAK_FUNC(sub_82AAA6C0);
PPC_FUNC_IMPL(__imp__sub_82AAA6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30640
	ctx.r4.s64 = ctx.r11.s64 + -30640;
	// bl 0x82316b80
	ctx.lr = 0x82AAA6DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17313(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17313, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA6F4"))) PPC_WEAK_FUNC(sub_82AAA6F4);
PPC_FUNC_IMPL(__imp__sub_82AAA6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA6F8"))) PPC_WEAK_FUNC(sub_82AAA6F8);
PPC_FUNC_IMPL(__imp__sub_82AAA6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30636
	ctx.r4.s64 = ctx.r11.s64 + -30636;
	// bl 0x82316b80
	ctx.lr = 0x82AAA714;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17312(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17312, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA72C"))) PPC_WEAK_FUNC(sub_82AAA72C);
PPC_FUNC_IMPL(__imp__sub_82AAA72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA730"))) PPC_WEAK_FUNC(sub_82AAA730);
PPC_FUNC_IMPL(__imp__sub_82AAA730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30632
	ctx.r4.s64 = ctx.r11.s64 + -30632;
	// bl 0x82316b80
	ctx.lr = 0x82AAA74C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17311(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17311, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA764"))) PPC_WEAK_FUNC(sub_82AAA764);
PPC_FUNC_IMPL(__imp__sub_82AAA764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA768"))) PPC_WEAK_FUNC(sub_82AAA768);
PPC_FUNC_IMPL(__imp__sub_82AAA768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30628
	ctx.r4.s64 = ctx.r11.s64 + -30628;
	// bl 0x82316b80
	ctx.lr = 0x82AAA784;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17310(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17310, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA79C"))) PPC_WEAK_FUNC(sub_82AAA79C);
PPC_FUNC_IMPL(__imp__sub_82AAA79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA7A0"))) PPC_WEAK_FUNC(sub_82AAA7A0);
PPC_FUNC_IMPL(__imp__sub_82AAA7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30624
	ctx.r4.s64 = ctx.r11.s64 + -30624;
	// bl 0x82316b80
	ctx.lr = 0x82AAA7BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17309(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17309, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA7D4"))) PPC_WEAK_FUNC(sub_82AAA7D4);
PPC_FUNC_IMPL(__imp__sub_82AAA7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA7D8"))) PPC_WEAK_FUNC(sub_82AAA7D8);
PPC_FUNC_IMPL(__imp__sub_82AAA7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30620
	ctx.r4.s64 = ctx.r11.s64 + -30620;
	// bl 0x82316b80
	ctx.lr = 0x82AAA7F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17308(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17308, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA80C"))) PPC_WEAK_FUNC(sub_82AAA80C);
PPC_FUNC_IMPL(__imp__sub_82AAA80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA810"))) PPC_WEAK_FUNC(sub_82AAA810);
PPC_FUNC_IMPL(__imp__sub_82AAA810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30616
	ctx.r4.s64 = ctx.r11.s64 + -30616;
	// bl 0x82316b80
	ctx.lr = 0x82AAA82C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17307(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17307, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA844"))) PPC_WEAK_FUNC(sub_82AAA844);
PPC_FUNC_IMPL(__imp__sub_82AAA844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA848"))) PPC_WEAK_FUNC(sub_82AAA848);
PPC_FUNC_IMPL(__imp__sub_82AAA848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30612
	ctx.r4.s64 = ctx.r11.s64 + -30612;
	// bl 0x82316b80
	ctx.lr = 0x82AAA864;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17306(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17306, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA87C"))) PPC_WEAK_FUNC(sub_82AAA87C);
PPC_FUNC_IMPL(__imp__sub_82AAA87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA880"))) PPC_WEAK_FUNC(sub_82AAA880);
PPC_FUNC_IMPL(__imp__sub_82AAA880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30608
	ctx.r4.s64 = ctx.r11.s64 + -30608;
	// bl 0x82316b80
	ctx.lr = 0x82AAA89C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17305(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17305, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA8B4"))) PPC_WEAK_FUNC(sub_82AAA8B4);
PPC_FUNC_IMPL(__imp__sub_82AAA8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA8B8"))) PPC_WEAK_FUNC(sub_82AAA8B8);
PPC_FUNC_IMPL(__imp__sub_82AAA8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30604
	ctx.r4.s64 = ctx.r11.s64 + -30604;
	// bl 0x82316b80
	ctx.lr = 0x82AAA8D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17304(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17304, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA8EC"))) PPC_WEAK_FUNC(sub_82AAA8EC);
PPC_FUNC_IMPL(__imp__sub_82AAA8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA8F0"))) PPC_WEAK_FUNC(sub_82AAA8F0);
PPC_FUNC_IMPL(__imp__sub_82AAA8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30600
	ctx.r4.s64 = ctx.r11.s64 + -30600;
	// bl 0x82316b80
	ctx.lr = 0x82AAA90C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17303(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17303, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA924"))) PPC_WEAK_FUNC(sub_82AAA924);
PPC_FUNC_IMPL(__imp__sub_82AAA924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA928"))) PPC_WEAK_FUNC(sub_82AAA928);
PPC_FUNC_IMPL(__imp__sub_82AAA928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30596
	ctx.r4.s64 = ctx.r11.s64 + -30596;
	// bl 0x82316b80
	ctx.lr = 0x82AAA944;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17302(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17302, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA95C"))) PPC_WEAK_FUNC(sub_82AAA95C);
PPC_FUNC_IMPL(__imp__sub_82AAA95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA960"))) PPC_WEAK_FUNC(sub_82AAA960);
PPC_FUNC_IMPL(__imp__sub_82AAA960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30592
	ctx.r4.s64 = ctx.r11.s64 + -30592;
	// bl 0x82316b80
	ctx.lr = 0x82AAA97C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17301(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17301, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA994"))) PPC_WEAK_FUNC(sub_82AAA994);
PPC_FUNC_IMPL(__imp__sub_82AAA994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA998"))) PPC_WEAK_FUNC(sub_82AAA998);
PPC_FUNC_IMPL(__imp__sub_82AAA998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30588
	ctx.r4.s64 = ctx.r11.s64 + -30588;
	// bl 0x82316b80
	ctx.lr = 0x82AAA9B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17300(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17300, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAA9CC"))) PPC_WEAK_FUNC(sub_82AAA9CC);
PPC_FUNC_IMPL(__imp__sub_82AAA9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAA9D0"))) PPC_WEAK_FUNC(sub_82AAA9D0);
PPC_FUNC_IMPL(__imp__sub_82AAA9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30584
	ctx.r4.s64 = ctx.r11.s64 + -30584;
	// bl 0x82316b80
	ctx.lr = 0x82AAA9EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17299(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17299, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAA04"))) PPC_WEAK_FUNC(sub_82AAAA04);
PPC_FUNC_IMPL(__imp__sub_82AAAA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAA08"))) PPC_WEAK_FUNC(sub_82AAAA08);
PPC_FUNC_IMPL(__imp__sub_82AAAA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30580
	ctx.r4.s64 = ctx.r11.s64 + -30580;
	// bl 0x82316b80
	ctx.lr = 0x82AAAA24;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17298(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17298, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAA3C"))) PPC_WEAK_FUNC(sub_82AAAA3C);
PPC_FUNC_IMPL(__imp__sub_82AAAA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAA40"))) PPC_WEAK_FUNC(sub_82AAAA40);
PPC_FUNC_IMPL(__imp__sub_82AAAA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30576
	ctx.r4.s64 = ctx.r11.s64 + -30576;
	// bl 0x82316b80
	ctx.lr = 0x82AAAA5C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17297(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17297, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAA74"))) PPC_WEAK_FUNC(sub_82AAAA74);
PPC_FUNC_IMPL(__imp__sub_82AAAA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAA78"))) PPC_WEAK_FUNC(sub_82AAAA78);
PPC_FUNC_IMPL(__imp__sub_82AAAA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30572
	ctx.r4.s64 = ctx.r11.s64 + -30572;
	// bl 0x82316b80
	ctx.lr = 0x82AAAA94;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17296(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17296, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAAAC"))) PPC_WEAK_FUNC(sub_82AAAAAC);
PPC_FUNC_IMPL(__imp__sub_82AAAAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAAB0"))) PPC_WEAK_FUNC(sub_82AAAAB0);
PPC_FUNC_IMPL(__imp__sub_82AAAAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30568
	ctx.r4.s64 = ctx.r11.s64 + -30568;
	// bl 0x82316b80
	ctx.lr = 0x82AAAACC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17295(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17295, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAAE4"))) PPC_WEAK_FUNC(sub_82AAAAE4);
PPC_FUNC_IMPL(__imp__sub_82AAAAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAAE8"))) PPC_WEAK_FUNC(sub_82AAAAE8);
PPC_FUNC_IMPL(__imp__sub_82AAAAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30564
	ctx.r4.s64 = ctx.r11.s64 + -30564;
	// bl 0x82316b80
	ctx.lr = 0x82AAAB04;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17294(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17294, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAB1C"))) PPC_WEAK_FUNC(sub_82AAAB1C);
PPC_FUNC_IMPL(__imp__sub_82AAAB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAB20"))) PPC_WEAK_FUNC(sub_82AAAB20);
PPC_FUNC_IMPL(__imp__sub_82AAAB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30560
	ctx.r4.s64 = ctx.r11.s64 + -30560;
	// bl 0x82316b80
	ctx.lr = 0x82AAAB3C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17293(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17293, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAB54"))) PPC_WEAK_FUNC(sub_82AAAB54);
PPC_FUNC_IMPL(__imp__sub_82AAAB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAB58"))) PPC_WEAK_FUNC(sub_82AAAB58);
PPC_FUNC_IMPL(__imp__sub_82AAAB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30556
	ctx.r4.s64 = ctx.r11.s64 + -30556;
	// bl 0x82316b80
	ctx.lr = 0x82AAAB74;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17292(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17292, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAB8C"))) PPC_WEAK_FUNC(sub_82AAAB8C);
PPC_FUNC_IMPL(__imp__sub_82AAAB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAB90"))) PPC_WEAK_FUNC(sub_82AAAB90);
PPC_FUNC_IMPL(__imp__sub_82AAAB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30552
	ctx.r4.s64 = ctx.r11.s64 + -30552;
	// bl 0x82316b80
	ctx.lr = 0x82AAABAC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17291(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17291, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAABC4"))) PPC_WEAK_FUNC(sub_82AAABC4);
PPC_FUNC_IMPL(__imp__sub_82AAABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAABC8"))) PPC_WEAK_FUNC(sub_82AAABC8);
PPC_FUNC_IMPL(__imp__sub_82AAABC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30548
	ctx.r4.s64 = ctx.r11.s64 + -30548;
	// bl 0x82316b80
	ctx.lr = 0x82AAABE4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17290(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17290, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAABFC"))) PPC_WEAK_FUNC(sub_82AAABFC);
PPC_FUNC_IMPL(__imp__sub_82AAABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAC00"))) PPC_WEAK_FUNC(sub_82AAAC00);
PPC_FUNC_IMPL(__imp__sub_82AAAC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30544
	ctx.r4.s64 = ctx.r11.s64 + -30544;
	// bl 0x82316b80
	ctx.lr = 0x82AAAC1C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17289(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17289, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAC34"))) PPC_WEAK_FUNC(sub_82AAAC34);
PPC_FUNC_IMPL(__imp__sub_82AAAC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAC38"))) PPC_WEAK_FUNC(sub_82AAAC38);
PPC_FUNC_IMPL(__imp__sub_82AAAC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30540
	ctx.r4.s64 = ctx.r11.s64 + -30540;
	// bl 0x82316b80
	ctx.lr = 0x82AAAC54;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17288(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17288, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAC6C"))) PPC_WEAK_FUNC(sub_82AAAC6C);
PPC_FUNC_IMPL(__imp__sub_82AAAC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAC70"))) PPC_WEAK_FUNC(sub_82AAAC70);
PPC_FUNC_IMPL(__imp__sub_82AAAC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30536
	ctx.r4.s64 = ctx.r11.s64 + -30536;
	// bl 0x82316b80
	ctx.lr = 0x82AAAC8C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17287(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17287, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAACA4"))) PPC_WEAK_FUNC(sub_82AAACA4);
PPC_FUNC_IMPL(__imp__sub_82AAACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAACA8"))) PPC_WEAK_FUNC(sub_82AAACA8);
PPC_FUNC_IMPL(__imp__sub_82AAACA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30532
	ctx.r4.s64 = ctx.r11.s64 + -30532;
	// bl 0x82316b80
	ctx.lr = 0x82AAACC4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17286(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17286, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAACDC"))) PPC_WEAK_FUNC(sub_82AAACDC);
PPC_FUNC_IMPL(__imp__sub_82AAACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAACE0"))) PPC_WEAK_FUNC(sub_82AAACE0);
PPC_FUNC_IMPL(__imp__sub_82AAACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30528
	ctx.r4.s64 = ctx.r11.s64 + -30528;
	// bl 0x82316b80
	ctx.lr = 0x82AAACFC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17285(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17285, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAD14"))) PPC_WEAK_FUNC(sub_82AAAD14);
PPC_FUNC_IMPL(__imp__sub_82AAAD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAD18"))) PPC_WEAK_FUNC(sub_82AAAD18);
PPC_FUNC_IMPL(__imp__sub_82AAAD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30524
	ctx.r4.s64 = ctx.r11.s64 + -30524;
	// bl 0x82316b80
	ctx.lr = 0x82AAAD34;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17284(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17284, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAD4C"))) PPC_WEAK_FUNC(sub_82AAAD4C);
PPC_FUNC_IMPL(__imp__sub_82AAAD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAD50"))) PPC_WEAK_FUNC(sub_82AAAD50);
PPC_FUNC_IMPL(__imp__sub_82AAAD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30520
	ctx.r4.s64 = ctx.r11.s64 + -30520;
	// bl 0x82316b80
	ctx.lr = 0x82AAAD6C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17283(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAD84"))) PPC_WEAK_FUNC(sub_82AAAD84);
PPC_FUNC_IMPL(__imp__sub_82AAAD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAD88"))) PPC_WEAK_FUNC(sub_82AAAD88);
PPC_FUNC_IMPL(__imp__sub_82AAAD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30516
	ctx.r4.s64 = ctx.r11.s64 + -30516;
	// bl 0x82316b80
	ctx.lr = 0x82AAADA4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17282(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAADBC"))) PPC_WEAK_FUNC(sub_82AAADBC);
PPC_FUNC_IMPL(__imp__sub_82AAADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAADC0"))) PPC_WEAK_FUNC(sub_82AAADC0);
PPC_FUNC_IMPL(__imp__sub_82AAADC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30512
	ctx.r4.s64 = ctx.r11.s64 + -30512;
	// bl 0x82316b80
	ctx.lr = 0x82AAADDC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17281(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAADF4"))) PPC_WEAK_FUNC(sub_82AAADF4);
PPC_FUNC_IMPL(__imp__sub_82AAADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAADF8"))) PPC_WEAK_FUNC(sub_82AAADF8);
PPC_FUNC_IMPL(__imp__sub_82AAADF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,524
	ctx.r3.s64 = 524;
	// addi r4,r11,-30508
	ctx.r4.s64 = ctx.r11.s64 + -30508;
	// bl 0x82316b80
	ctx.lr = 0x82AAAE14;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17280(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17280, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAE2C"))) PPC_WEAK_FUNC(sub_82AAAE2C);
PPC_FUNC_IMPL(__imp__sub_82AAAE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAE30"))) PPC_WEAK_FUNC(sub_82AAAE30);
PPC_FUNC_IMPL(__imp__sub_82AAAE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30504
	ctx.r4.s64 = ctx.r11.s64 + -30504;
	// bl 0x82316b80
	ctx.lr = 0x82AAAE4C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17279(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17279, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAE64"))) PPC_WEAK_FUNC(sub_82AAAE64);
PPC_FUNC_IMPL(__imp__sub_82AAAE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAE68"))) PPC_WEAK_FUNC(sub_82AAAE68);
PPC_FUNC_IMPL(__imp__sub_82AAAE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30500
	ctx.r4.s64 = ctx.r11.s64 + -30500;
	// bl 0x82316b80
	ctx.lr = 0x82AAAE84;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17278(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17278, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAE9C"))) PPC_WEAK_FUNC(sub_82AAAE9C);
PPC_FUNC_IMPL(__imp__sub_82AAAE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAEA0"))) PPC_WEAK_FUNC(sub_82AAAEA0);
PPC_FUNC_IMPL(__imp__sub_82AAAEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30496
	ctx.r4.s64 = ctx.r11.s64 + -30496;
	// bl 0x82316b80
	ctx.lr = 0x82AAAEBC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17277(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17277, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAED4"))) PPC_WEAK_FUNC(sub_82AAAED4);
PPC_FUNC_IMPL(__imp__sub_82AAAED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAED8"))) PPC_WEAK_FUNC(sub_82AAAED8);
PPC_FUNC_IMPL(__imp__sub_82AAAED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30492
	ctx.r4.s64 = ctx.r11.s64 + -30492;
	// bl 0x82316b80
	ctx.lr = 0x82AAAEF4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17276(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17276, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAF0C"))) PPC_WEAK_FUNC(sub_82AAAF0C);
PPC_FUNC_IMPL(__imp__sub_82AAAF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAF10"))) PPC_WEAK_FUNC(sub_82AAAF10);
PPC_FUNC_IMPL(__imp__sub_82AAAF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30488
	ctx.r4.s64 = ctx.r11.s64 + -30488;
	// bl 0x82316b80
	ctx.lr = 0x82AAAF2C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17275(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17275, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAF44"))) PPC_WEAK_FUNC(sub_82AAAF44);
PPC_FUNC_IMPL(__imp__sub_82AAAF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAF48"))) PPC_WEAK_FUNC(sub_82AAAF48);
PPC_FUNC_IMPL(__imp__sub_82AAAF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30484
	ctx.r4.s64 = ctx.r11.s64 + -30484;
	// bl 0x82316b80
	ctx.lr = 0x82AAAF64;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17274(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17274, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAF7C"))) PPC_WEAK_FUNC(sub_82AAAF7C);
PPC_FUNC_IMPL(__imp__sub_82AAAF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAF80"))) PPC_WEAK_FUNC(sub_82AAAF80);
PPC_FUNC_IMPL(__imp__sub_82AAAF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30480
	ctx.r4.s64 = ctx.r11.s64 + -30480;
	// bl 0x82316b80
	ctx.lr = 0x82AAAF9C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17273(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17273, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAFB4"))) PPC_WEAK_FUNC(sub_82AAAFB4);
PPC_FUNC_IMPL(__imp__sub_82AAAFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAFB8"))) PPC_WEAK_FUNC(sub_82AAAFB8);
PPC_FUNC_IMPL(__imp__sub_82AAAFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30476
	ctx.r4.s64 = ctx.r11.s64 + -30476;
	// bl 0x82316b80
	ctx.lr = 0x82AAAFD4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17272(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17272, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAAFEC"))) PPC_WEAK_FUNC(sub_82AAAFEC);
PPC_FUNC_IMPL(__imp__sub_82AAAFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAAFF0"))) PPC_WEAK_FUNC(sub_82AAAFF0);
PPC_FUNC_IMPL(__imp__sub_82AAAFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,546
	ctx.r3.s64 = 546;
	// addi r4,r11,-30472
	ctx.r4.s64 = ctx.r11.s64 + -30472;
	// bl 0x82316b80
	ctx.lr = 0x82AAB00C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17271(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17271, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB024"))) PPC_WEAK_FUNC(sub_82AAB024);
PPC_FUNC_IMPL(__imp__sub_82AAB024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB028"))) PPC_WEAK_FUNC(sub_82AAB028);
PPC_FUNC_IMPL(__imp__sub_82AAB028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30468
	ctx.r4.s64 = ctx.r11.s64 + -30468;
	// bl 0x82316b80
	ctx.lr = 0x82AAB044;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17270(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17270, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB05C"))) PPC_WEAK_FUNC(sub_82AAB05C);
PPC_FUNC_IMPL(__imp__sub_82AAB05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB060"))) PPC_WEAK_FUNC(sub_82AAB060);
PPC_FUNC_IMPL(__imp__sub_82AAB060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30464
	ctx.r4.s64 = ctx.r11.s64 + -30464;
	// bl 0x82316b80
	ctx.lr = 0x82AAB07C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17269(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17269, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB094"))) PPC_WEAK_FUNC(sub_82AAB094);
PPC_FUNC_IMPL(__imp__sub_82AAB094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB098"))) PPC_WEAK_FUNC(sub_82AAB098);
PPC_FUNC_IMPL(__imp__sub_82AAB098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30460
	ctx.r4.s64 = ctx.r11.s64 + -30460;
	// bl 0x82316b80
	ctx.lr = 0x82AAB0B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17268(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17268, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB0CC"))) PPC_WEAK_FUNC(sub_82AAB0CC);
PPC_FUNC_IMPL(__imp__sub_82AAB0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB0D0"))) PPC_WEAK_FUNC(sub_82AAB0D0);
PPC_FUNC_IMPL(__imp__sub_82AAB0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30456
	ctx.r4.s64 = ctx.r11.s64 + -30456;
	// bl 0x82316b80
	ctx.lr = 0x82AAB0EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17267(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17267, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB104"))) PPC_WEAK_FUNC(sub_82AAB104);
PPC_FUNC_IMPL(__imp__sub_82AAB104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB108"))) PPC_WEAK_FUNC(sub_82AAB108);
PPC_FUNC_IMPL(__imp__sub_82AAB108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30452
	ctx.r4.s64 = ctx.r11.s64 + -30452;
	// bl 0x82316b80
	ctx.lr = 0x82AAB124;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17266(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17266, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB13C"))) PPC_WEAK_FUNC(sub_82AAB13C);
PPC_FUNC_IMPL(__imp__sub_82AAB13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB140"))) PPC_WEAK_FUNC(sub_82AAB140);
PPC_FUNC_IMPL(__imp__sub_82AAB140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30448
	ctx.r4.s64 = ctx.r11.s64 + -30448;
	// bl 0x82316b80
	ctx.lr = 0x82AAB15C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17265(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17265, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB174"))) PPC_WEAK_FUNC(sub_82AAB174);
PPC_FUNC_IMPL(__imp__sub_82AAB174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB178"))) PPC_WEAK_FUNC(sub_82AAB178);
PPC_FUNC_IMPL(__imp__sub_82AAB178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30444
	ctx.r4.s64 = ctx.r11.s64 + -30444;
	// bl 0x82316b80
	ctx.lr = 0x82AAB194;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17264(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17264, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB1AC"))) PPC_WEAK_FUNC(sub_82AAB1AC);
PPC_FUNC_IMPL(__imp__sub_82AAB1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB1B0"))) PPC_WEAK_FUNC(sub_82AAB1B0);
PPC_FUNC_IMPL(__imp__sub_82AAB1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30440
	ctx.r4.s64 = ctx.r11.s64 + -30440;
	// bl 0x82316b80
	ctx.lr = 0x82AAB1CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17263(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17263, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB1E4"))) PPC_WEAK_FUNC(sub_82AAB1E4);
PPC_FUNC_IMPL(__imp__sub_82AAB1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB1E8"))) PPC_WEAK_FUNC(sub_82AAB1E8);
PPC_FUNC_IMPL(__imp__sub_82AAB1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30436
	ctx.r4.s64 = ctx.r11.s64 + -30436;
	// bl 0x82316b80
	ctx.lr = 0x82AAB204;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17262(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17262, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB21C"))) PPC_WEAK_FUNC(sub_82AAB21C);
PPC_FUNC_IMPL(__imp__sub_82AAB21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB220"))) PPC_WEAK_FUNC(sub_82AAB220);
PPC_FUNC_IMPL(__imp__sub_82AAB220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30432
	ctx.r4.s64 = ctx.r11.s64 + -30432;
	// bl 0x82316b80
	ctx.lr = 0x82AAB23C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17261(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17261, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB254"))) PPC_WEAK_FUNC(sub_82AAB254);
PPC_FUNC_IMPL(__imp__sub_82AAB254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB258"))) PPC_WEAK_FUNC(sub_82AAB258);
PPC_FUNC_IMPL(__imp__sub_82AAB258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30428
	ctx.r4.s64 = ctx.r11.s64 + -30428;
	// bl 0x82316b80
	ctx.lr = 0x82AAB274;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17260(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17260, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB28C"))) PPC_WEAK_FUNC(sub_82AAB28C);
PPC_FUNC_IMPL(__imp__sub_82AAB28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB290"))) PPC_WEAK_FUNC(sub_82AAB290);
PPC_FUNC_IMPL(__imp__sub_82AAB290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30424
	ctx.r4.s64 = ctx.r11.s64 + -30424;
	// bl 0x82316b80
	ctx.lr = 0x82AAB2AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17259(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17259, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB2C4"))) PPC_WEAK_FUNC(sub_82AAB2C4);
PPC_FUNC_IMPL(__imp__sub_82AAB2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB2C8"))) PPC_WEAK_FUNC(sub_82AAB2C8);
PPC_FUNC_IMPL(__imp__sub_82AAB2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30420
	ctx.r4.s64 = ctx.r11.s64 + -30420;
	// bl 0x82316b80
	ctx.lr = 0x82AAB2E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17258(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17258, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB2FC"))) PPC_WEAK_FUNC(sub_82AAB2FC);
PPC_FUNC_IMPL(__imp__sub_82AAB2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB300"))) PPC_WEAK_FUNC(sub_82AAB300);
PPC_FUNC_IMPL(__imp__sub_82AAB300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30416
	ctx.r4.s64 = ctx.r11.s64 + -30416;
	// bl 0x82316b80
	ctx.lr = 0x82AAB31C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17257(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17257, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB334"))) PPC_WEAK_FUNC(sub_82AAB334);
PPC_FUNC_IMPL(__imp__sub_82AAB334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB338"))) PPC_WEAK_FUNC(sub_82AAB338);
PPC_FUNC_IMPL(__imp__sub_82AAB338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30412
	ctx.r4.s64 = ctx.r11.s64 + -30412;
	// bl 0x82316b80
	ctx.lr = 0x82AAB354;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17256(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB36C"))) PPC_WEAK_FUNC(sub_82AAB36C);
PPC_FUNC_IMPL(__imp__sub_82AAB36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB370"))) PPC_WEAK_FUNC(sub_82AAB370);
PPC_FUNC_IMPL(__imp__sub_82AAB370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30408
	ctx.r4.s64 = ctx.r11.s64 + -30408;
	// bl 0x82316b80
	ctx.lr = 0x82AAB38C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17255(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17255, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB3A4"))) PPC_WEAK_FUNC(sub_82AAB3A4);
PPC_FUNC_IMPL(__imp__sub_82AAB3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB3A8"))) PPC_WEAK_FUNC(sub_82AAB3A8);
PPC_FUNC_IMPL(__imp__sub_82AAB3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30404
	ctx.r4.s64 = ctx.r11.s64 + -30404;
	// bl 0x82316b80
	ctx.lr = 0x82AAB3C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17254(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB3DC"))) PPC_WEAK_FUNC(sub_82AAB3DC);
PPC_FUNC_IMPL(__imp__sub_82AAB3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB3E0"))) PPC_WEAK_FUNC(sub_82AAB3E0);
PPC_FUNC_IMPL(__imp__sub_82AAB3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30400
	ctx.r4.s64 = ctx.r11.s64 + -30400;
	// bl 0x82316b80
	ctx.lr = 0x82AAB3FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17253(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB414"))) PPC_WEAK_FUNC(sub_82AAB414);
PPC_FUNC_IMPL(__imp__sub_82AAB414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB418"))) PPC_WEAK_FUNC(sub_82AAB418);
PPC_FUNC_IMPL(__imp__sub_82AAB418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30396
	ctx.r4.s64 = ctx.r11.s64 + -30396;
	// bl 0x82316b80
	ctx.lr = 0x82AAB434;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17252(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17252, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB44C"))) PPC_WEAK_FUNC(sub_82AAB44C);
PPC_FUNC_IMPL(__imp__sub_82AAB44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB450"))) PPC_WEAK_FUNC(sub_82AAB450);
PPC_FUNC_IMPL(__imp__sub_82AAB450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30392
	ctx.r4.s64 = ctx.r11.s64 + -30392;
	// bl 0x82316b80
	ctx.lr = 0x82AAB46C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17251(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17251, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB484"))) PPC_WEAK_FUNC(sub_82AAB484);
PPC_FUNC_IMPL(__imp__sub_82AAB484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB488"))) PPC_WEAK_FUNC(sub_82AAB488);
PPC_FUNC_IMPL(__imp__sub_82AAB488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30388
	ctx.r4.s64 = ctx.r11.s64 + -30388;
	// bl 0x82316b80
	ctx.lr = 0x82AAB4A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17250(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17250, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB4BC"))) PPC_WEAK_FUNC(sub_82AAB4BC);
PPC_FUNC_IMPL(__imp__sub_82AAB4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB4C0"))) PPC_WEAK_FUNC(sub_82AAB4C0);
PPC_FUNC_IMPL(__imp__sub_82AAB4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30384
	ctx.r4.s64 = ctx.r11.s64 + -30384;
	// bl 0x82316b80
	ctx.lr = 0x82AAB4DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17249(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17249, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB4F4"))) PPC_WEAK_FUNC(sub_82AAB4F4);
PPC_FUNC_IMPL(__imp__sub_82AAB4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB4F8"))) PPC_WEAK_FUNC(sub_82AAB4F8);
PPC_FUNC_IMPL(__imp__sub_82AAB4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30380
	ctx.r4.s64 = ctx.r11.s64 + -30380;
	// bl 0x82316b80
	ctx.lr = 0x82AAB514;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17248(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17248, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB52C"))) PPC_WEAK_FUNC(sub_82AAB52C);
PPC_FUNC_IMPL(__imp__sub_82AAB52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB530"))) PPC_WEAK_FUNC(sub_82AAB530);
PPC_FUNC_IMPL(__imp__sub_82AAB530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30376
	ctx.r4.s64 = ctx.r11.s64 + -30376;
	// bl 0x82316b80
	ctx.lr = 0x82AAB54C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17247(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17247, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB564"))) PPC_WEAK_FUNC(sub_82AAB564);
PPC_FUNC_IMPL(__imp__sub_82AAB564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AAB568"))) PPC_WEAK_FUNC(sub_82AAB568);
PPC_FUNC_IMPL(__imp__sub_82AAB568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-30372
	ctx.r4.s64 = ctx.r11.s64 + -30372;
	// bl 0x82316b80
	ctx.lr = 0x82AAB584;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-17246(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17246, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AAB59C"))) PPC_WEAK_FUNC(sub_82AAB59C);
PPC_FUNC_IMPL(__imp__sub_82AAB59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

