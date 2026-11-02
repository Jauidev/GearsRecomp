#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AA4360"))) PPC_WEAK_FUNC(sub_82AA4360);
PPC_FUNC_IMPL(__imp__sub_82AA4360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14960
	ctx.r4.s64 = ctx.r11.s64 + -14960;
	// bl 0x82316b80
	ctx.lr = 0x82AA437C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19842(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19842, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4394"))) PPC_WEAK_FUNC(sub_82AA4394);
PPC_FUNC_IMPL(__imp__sub_82AA4394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4398"))) PPC_WEAK_FUNC(sub_82AA4398);
PPC_FUNC_IMPL(__imp__sub_82AA4398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14956
	ctx.r4.s64 = ctx.r11.s64 + -14956;
	// bl 0x82316b80
	ctx.lr = 0x82AA43B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19679(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19679, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA43CC"))) PPC_WEAK_FUNC(sub_82AA43CC);
PPC_FUNC_IMPL(__imp__sub_82AA43CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA43D0"))) PPC_WEAK_FUNC(sub_82AA43D0);
PPC_FUNC_IMPL(__imp__sub_82AA43D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14952
	ctx.r4.s64 = ctx.r11.s64 + -14952;
	// bl 0x82316b80
	ctx.lr = 0x82AA43EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20152(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20152, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4404"))) PPC_WEAK_FUNC(sub_82AA4404);
PPC_FUNC_IMPL(__imp__sub_82AA4404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4408"))) PPC_WEAK_FUNC(sub_82AA4408);
PPC_FUNC_IMPL(__imp__sub_82AA4408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14948
	ctx.r4.s64 = ctx.r11.s64 + -14948;
	// bl 0x82316b80
	ctx.lr = 0x82AA4424;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20212(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20212, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA443C"))) PPC_WEAK_FUNC(sub_82AA443C);
PPC_FUNC_IMPL(__imp__sub_82AA443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4440"))) PPC_WEAK_FUNC(sub_82AA4440);
PPC_FUNC_IMPL(__imp__sub_82AA4440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14944
	ctx.r4.s64 = ctx.r11.s64 + -14944;
	// bl 0x82316b80
	ctx.lr = 0x82AA445C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20629(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20629, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4474"))) PPC_WEAK_FUNC(sub_82AA4474);
PPC_FUNC_IMPL(__imp__sub_82AA4474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4478"))) PPC_WEAK_FUNC(sub_82AA4478);
PPC_FUNC_IMPL(__imp__sub_82AA4478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14940
	ctx.r4.s64 = ctx.r11.s64 + -14940;
	// bl 0x82316b80
	ctx.lr = 0x82AA4494;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20809(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20809, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA44AC"))) PPC_WEAK_FUNC(sub_82AA44AC);
PPC_FUNC_IMPL(__imp__sub_82AA44AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA44B0"))) PPC_WEAK_FUNC(sub_82AA44B0);
PPC_FUNC_IMPL(__imp__sub_82AA44B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14936
	ctx.r4.s64 = ctx.r11.s64 + -14936;
	// bl 0x82316b80
	ctx.lr = 0x82AA44CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20643(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20643, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA44E4"))) PPC_WEAK_FUNC(sub_82AA44E4);
PPC_FUNC_IMPL(__imp__sub_82AA44E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA44E8"))) PPC_WEAK_FUNC(sub_82AA44E8);
PPC_FUNC_IMPL(__imp__sub_82AA44E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14932
	ctx.r4.s64 = ctx.r11.s64 + -14932;
	// bl 0x82316b80
	ctx.lr = 0x82AA4504;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19898(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19898, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA451C"))) PPC_WEAK_FUNC(sub_82AA451C);
PPC_FUNC_IMPL(__imp__sub_82AA451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4520"))) PPC_WEAK_FUNC(sub_82AA4520);
PPC_FUNC_IMPL(__imp__sub_82AA4520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14928
	ctx.r4.s64 = ctx.r11.s64 + -14928;
	// bl 0x82316b80
	ctx.lr = 0x82AA453C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20697(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20697, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4554"))) PPC_WEAK_FUNC(sub_82AA4554);
PPC_FUNC_IMPL(__imp__sub_82AA4554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4558"))) PPC_WEAK_FUNC(sub_82AA4558);
PPC_FUNC_IMPL(__imp__sub_82AA4558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14924
	ctx.r4.s64 = ctx.r11.s64 + -14924;
	// bl 0x82316b80
	ctx.lr = 0x82AA4574;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20061(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20061, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA458C"))) PPC_WEAK_FUNC(sub_82AA458C);
PPC_FUNC_IMPL(__imp__sub_82AA458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4590"))) PPC_WEAK_FUNC(sub_82AA4590);
PPC_FUNC_IMPL(__imp__sub_82AA4590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14920
	ctx.r4.s64 = ctx.r11.s64 + -14920;
	// bl 0x82316b80
	ctx.lr = 0x82AA45AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20632(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20632, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA45C4"))) PPC_WEAK_FUNC(sub_82AA45C4);
PPC_FUNC_IMPL(__imp__sub_82AA45C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA45C8"))) PPC_WEAK_FUNC(sub_82AA45C8);
PPC_FUNC_IMPL(__imp__sub_82AA45C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14916
	ctx.r4.s64 = ctx.r11.s64 + -14916;
	// bl 0x82316b80
	ctx.lr = 0x82AA45E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20790(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20790, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA45FC"))) PPC_WEAK_FUNC(sub_82AA45FC);
PPC_FUNC_IMPL(__imp__sub_82AA45FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4600"))) PPC_WEAK_FUNC(sub_82AA4600);
PPC_FUNC_IMPL(__imp__sub_82AA4600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14912
	ctx.r4.s64 = ctx.r11.s64 + -14912;
	// bl 0x82316b80
	ctx.lr = 0x82AA461C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-21169(r11)
	PPC_STORE_U8(ctx.r11.u32 + -21169, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4634"))) PPC_WEAK_FUNC(sub_82AA4634);
PPC_FUNC_IMPL(__imp__sub_82AA4634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4638"))) PPC_WEAK_FUNC(sub_82AA4638);
PPC_FUNC_IMPL(__imp__sub_82AA4638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14908
	ctx.r4.s64 = ctx.r11.s64 + -14908;
	// bl 0x82316b80
	ctx.lr = 0x82AA4654;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20386(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20386, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA466C"))) PPC_WEAK_FUNC(sub_82AA466C);
PPC_FUNC_IMPL(__imp__sub_82AA466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4670"))) PPC_WEAK_FUNC(sub_82AA4670);
PPC_FUNC_IMPL(__imp__sub_82AA4670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14904
	ctx.r4.s64 = ctx.r11.s64 + -14904;
	// bl 0x82316b80
	ctx.lr = 0x82AA468C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20475(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20475, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA46A4"))) PPC_WEAK_FUNC(sub_82AA46A4);
PPC_FUNC_IMPL(__imp__sub_82AA46A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA46A8"))) PPC_WEAK_FUNC(sub_82AA46A8);
PPC_FUNC_IMPL(__imp__sub_82AA46A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14900
	ctx.r4.s64 = ctx.r11.s64 + -14900;
	// bl 0x82316b80
	ctx.lr = 0x82AA46C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20549(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20549, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA46DC"))) PPC_WEAK_FUNC(sub_82AA46DC);
PPC_FUNC_IMPL(__imp__sub_82AA46DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA46E0"))) PPC_WEAK_FUNC(sub_82AA46E0);
PPC_FUNC_IMPL(__imp__sub_82AA46E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14896
	ctx.r4.s64 = ctx.r11.s64 + -14896;
	// bl 0x82316b80
	ctx.lr = 0x82AA46FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20340(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20340, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4714"))) PPC_WEAK_FUNC(sub_82AA4714);
PPC_FUNC_IMPL(__imp__sub_82AA4714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4718"))) PPC_WEAK_FUNC(sub_82AA4718);
PPC_FUNC_IMPL(__imp__sub_82AA4718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14892
	ctx.r4.s64 = ctx.r11.s64 + -14892;
	// bl 0x82316b80
	ctx.lr = 0x82AA4734;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19739(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19739, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA474C"))) PPC_WEAK_FUNC(sub_82AA474C);
PPC_FUNC_IMPL(__imp__sub_82AA474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4750"))) PPC_WEAK_FUNC(sub_82AA4750);
PPC_FUNC_IMPL(__imp__sub_82AA4750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14888
	ctx.r4.s64 = ctx.r11.s64 + -14888;
	// bl 0x82316b80
	ctx.lr = 0x82AA476C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19644(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19644, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4784"))) PPC_WEAK_FUNC(sub_82AA4784);
PPC_FUNC_IMPL(__imp__sub_82AA4784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4788"))) PPC_WEAK_FUNC(sub_82AA4788);
PPC_FUNC_IMPL(__imp__sub_82AA4788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14884
	ctx.r4.s64 = ctx.r11.s64 + -14884;
	// bl 0x82316b80
	ctx.lr = 0x82AA47A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19947(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19947, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA47BC"))) PPC_WEAK_FUNC(sub_82AA47BC);
PPC_FUNC_IMPL(__imp__sub_82AA47BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA47C0"))) PPC_WEAK_FUNC(sub_82AA47C0);
PPC_FUNC_IMPL(__imp__sub_82AA47C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14880
	ctx.r4.s64 = ctx.r11.s64 + -14880;
	// bl 0x82316b80
	ctx.lr = 0x82AA47DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20994(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20994, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA47F4"))) PPC_WEAK_FUNC(sub_82AA47F4);
PPC_FUNC_IMPL(__imp__sub_82AA47F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA47F8"))) PPC_WEAK_FUNC(sub_82AA47F8);
PPC_FUNC_IMPL(__imp__sub_82AA47F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14876
	ctx.r4.s64 = ctx.r11.s64 + -14876;
	// bl 0x82316b80
	ctx.lr = 0x82AA4814;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20837(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20837, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA482C"))) PPC_WEAK_FUNC(sub_82AA482C);
PPC_FUNC_IMPL(__imp__sub_82AA482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4830"))) PPC_WEAK_FUNC(sub_82AA4830);
PPC_FUNC_IMPL(__imp__sub_82AA4830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14872
	ctx.r4.s64 = ctx.r11.s64 + -14872;
	// bl 0x82316b80
	ctx.lr = 0x82AA484C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20930(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20930, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4864"))) PPC_WEAK_FUNC(sub_82AA4864);
PPC_FUNC_IMPL(__imp__sub_82AA4864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4868"))) PPC_WEAK_FUNC(sub_82AA4868);
PPC_FUNC_IMPL(__imp__sub_82AA4868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14868
	ctx.r4.s64 = ctx.r11.s64 + -14868;
	// bl 0x82316b80
	ctx.lr = 0x82AA4884;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19806(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19806, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA489C"))) PPC_WEAK_FUNC(sub_82AA489C);
PPC_FUNC_IMPL(__imp__sub_82AA489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA48A0"))) PPC_WEAK_FUNC(sub_82AA48A0);
PPC_FUNC_IMPL(__imp__sub_82AA48A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14864
	ctx.r4.s64 = ctx.r11.s64 + -14864;
	// bl 0x82316b80
	ctx.lr = 0x82AA48BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20062(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20062, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA48D4"))) PPC_WEAK_FUNC(sub_82AA48D4);
PPC_FUNC_IMPL(__imp__sub_82AA48D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA48D8"))) PPC_WEAK_FUNC(sub_82AA48D8);
PPC_FUNC_IMPL(__imp__sub_82AA48D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14860
	ctx.r4.s64 = ctx.r11.s64 + -14860;
	// bl 0x82316b80
	ctx.lr = 0x82AA48F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20686(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20686, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA490C"))) PPC_WEAK_FUNC(sub_82AA490C);
PPC_FUNC_IMPL(__imp__sub_82AA490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4910"))) PPC_WEAK_FUNC(sub_82AA4910);
PPC_FUNC_IMPL(__imp__sub_82AA4910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14856
	ctx.r4.s64 = ctx.r11.s64 + -14856;
	// bl 0x82316b80
	ctx.lr = 0x82AA492C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20339(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20339, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4944"))) PPC_WEAK_FUNC(sub_82AA4944);
PPC_FUNC_IMPL(__imp__sub_82AA4944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4948"))) PPC_WEAK_FUNC(sub_82AA4948);
PPC_FUNC_IMPL(__imp__sub_82AA4948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14852
	ctx.r4.s64 = ctx.r11.s64 + -14852;
	// bl 0x82316b80
	ctx.lr = 0x82AA4964;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19700(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19700, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA497C"))) PPC_WEAK_FUNC(sub_82AA497C);
PPC_FUNC_IMPL(__imp__sub_82AA497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4980"))) PPC_WEAK_FUNC(sub_82AA4980);
PPC_FUNC_IMPL(__imp__sub_82AA4980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14848
	ctx.r4.s64 = ctx.r11.s64 + -14848;
	// bl 0x82316b80
	ctx.lr = 0x82AA499C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19710(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19710, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA49B4"))) PPC_WEAK_FUNC(sub_82AA49B4);
PPC_FUNC_IMPL(__imp__sub_82AA49B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA49B8"))) PPC_WEAK_FUNC(sub_82AA49B8);
PPC_FUNC_IMPL(__imp__sub_82AA49B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14844
	ctx.r4.s64 = ctx.r11.s64 + -14844;
	// bl 0x82316b80
	ctx.lr = 0x82AA49D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20117(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20117, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA49EC"))) PPC_WEAK_FUNC(sub_82AA49EC);
PPC_FUNC_IMPL(__imp__sub_82AA49EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA49F0"))) PPC_WEAK_FUNC(sub_82AA49F0);
PPC_FUNC_IMPL(__imp__sub_82AA49F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14840
	ctx.r4.s64 = ctx.r11.s64 + -14840;
	// bl 0x82316b80
	ctx.lr = 0x82AA4A0C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19697(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19697, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4A24"))) PPC_WEAK_FUNC(sub_82AA4A24);
PPC_FUNC_IMPL(__imp__sub_82AA4A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4A28"))) PPC_WEAK_FUNC(sub_82AA4A28);
PPC_FUNC_IMPL(__imp__sub_82AA4A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14836
	ctx.r4.s64 = ctx.r11.s64 + -14836;
	// bl 0x82316b80
	ctx.lr = 0x82AA4A44;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20894(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20894, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4A5C"))) PPC_WEAK_FUNC(sub_82AA4A5C);
PPC_FUNC_IMPL(__imp__sub_82AA4A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4A60"))) PPC_WEAK_FUNC(sub_82AA4A60);
PPC_FUNC_IMPL(__imp__sub_82AA4A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14832
	ctx.r4.s64 = ctx.r11.s64 + -14832;
	// bl 0x82316b80
	ctx.lr = 0x82AA4A7C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20017(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20017, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4A94"))) PPC_WEAK_FUNC(sub_82AA4A94);
PPC_FUNC_IMPL(__imp__sub_82AA4A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4A98"))) PPC_WEAK_FUNC(sub_82AA4A98);
PPC_FUNC_IMPL(__imp__sub_82AA4A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14828
	ctx.r4.s64 = ctx.r11.s64 + -14828;
	// bl 0x82316b80
	ctx.lr = 0x82AA4AB4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20811(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20811, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4ACC"))) PPC_WEAK_FUNC(sub_82AA4ACC);
PPC_FUNC_IMPL(__imp__sub_82AA4ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4AD0"))) PPC_WEAK_FUNC(sub_82AA4AD0);
PPC_FUNC_IMPL(__imp__sub_82AA4AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14824
	ctx.r4.s64 = ctx.r11.s64 + -14824;
	// bl 0x82316b80
	ctx.lr = 0x82AA4AEC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20762(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20762, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4B04"))) PPC_WEAK_FUNC(sub_82AA4B04);
PPC_FUNC_IMPL(__imp__sub_82AA4B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4B08"))) PPC_WEAK_FUNC(sub_82AA4B08);
PPC_FUNC_IMPL(__imp__sub_82AA4B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14820
	ctx.r4.s64 = ctx.r11.s64 + -14820;
	// bl 0x82316b80
	ctx.lr = 0x82AA4B24;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20656(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20656, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4B3C"))) PPC_WEAK_FUNC(sub_82AA4B3C);
PPC_FUNC_IMPL(__imp__sub_82AA4B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4B40"))) PPC_WEAK_FUNC(sub_82AA4B40);
PPC_FUNC_IMPL(__imp__sub_82AA4B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14816
	ctx.r4.s64 = ctx.r11.s64 + -14816;
	// bl 0x82316b80
	ctx.lr = 0x82AA4B5C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19772(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19772, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4B74"))) PPC_WEAK_FUNC(sub_82AA4B74);
PPC_FUNC_IMPL(__imp__sub_82AA4B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4B78"))) PPC_WEAK_FUNC(sub_82AA4B78);
PPC_FUNC_IMPL(__imp__sub_82AA4B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14812
	ctx.r4.s64 = ctx.r11.s64 + -14812;
	// bl 0x82316b80
	ctx.lr = 0x82AA4B94;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20487(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20487, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4BAC"))) PPC_WEAK_FUNC(sub_82AA4BAC);
PPC_FUNC_IMPL(__imp__sub_82AA4BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4BB0"))) PPC_WEAK_FUNC(sub_82AA4BB0);
PPC_FUNC_IMPL(__imp__sub_82AA4BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14808
	ctx.r4.s64 = ctx.r11.s64 + -14808;
	// bl 0x82316b80
	ctx.lr = 0x82AA4BCC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20441(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4BE4"))) PPC_WEAK_FUNC(sub_82AA4BE4);
PPC_FUNC_IMPL(__imp__sub_82AA4BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4BE8"))) PPC_WEAK_FUNC(sub_82AA4BE8);
PPC_FUNC_IMPL(__imp__sub_82AA4BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14804
	ctx.r4.s64 = ctx.r11.s64 + -14804;
	// bl 0x82316b80
	ctx.lr = 0x82AA4C04;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20868(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20868, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4C1C"))) PPC_WEAK_FUNC(sub_82AA4C1C);
PPC_FUNC_IMPL(__imp__sub_82AA4C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4C20"))) PPC_WEAK_FUNC(sub_82AA4C20);
PPC_FUNC_IMPL(__imp__sub_82AA4C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14800
	ctx.r4.s64 = ctx.r11.s64 + -14800;
	// bl 0x82316b80
	ctx.lr = 0x82AA4C3C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20322(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20322, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4C54"))) PPC_WEAK_FUNC(sub_82AA4C54);
PPC_FUNC_IMPL(__imp__sub_82AA4C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4C58"))) PPC_WEAK_FUNC(sub_82AA4C58);
PPC_FUNC_IMPL(__imp__sub_82AA4C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14796
	ctx.r4.s64 = ctx.r11.s64 + -14796;
	// bl 0x82316b80
	ctx.lr = 0x82AA4C74;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20867(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20867, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4C8C"))) PPC_WEAK_FUNC(sub_82AA4C8C);
PPC_FUNC_IMPL(__imp__sub_82AA4C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4C90"))) PPC_WEAK_FUNC(sub_82AA4C90);
PPC_FUNC_IMPL(__imp__sub_82AA4C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14792
	ctx.r4.s64 = ctx.r11.s64 + -14792;
	// bl 0x82316b80
	ctx.lr = 0x82AA4CAC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20190(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20190, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4CC4"))) PPC_WEAK_FUNC(sub_82AA4CC4);
PPC_FUNC_IMPL(__imp__sub_82AA4CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4CC8"))) PPC_WEAK_FUNC(sub_82AA4CC8);
PPC_FUNC_IMPL(__imp__sub_82AA4CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14788
	ctx.r4.s64 = ctx.r11.s64 + -14788;
	// bl 0x82316b80
	ctx.lr = 0x82AA4CE4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20996(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20996, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4CFC"))) PPC_WEAK_FUNC(sub_82AA4CFC);
PPC_FUNC_IMPL(__imp__sub_82AA4CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4D00"))) PPC_WEAK_FUNC(sub_82AA4D00);
PPC_FUNC_IMPL(__imp__sub_82AA4D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14784
	ctx.r4.s64 = ctx.r11.s64 + -14784;
	// bl 0x82316b80
	ctx.lr = 0x82AA4D1C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20550(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20550, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4D34"))) PPC_WEAK_FUNC(sub_82AA4D34);
PPC_FUNC_IMPL(__imp__sub_82AA4D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4D38"))) PPC_WEAK_FUNC(sub_82AA4D38);
PPC_FUNC_IMPL(__imp__sub_82AA4D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14780
	ctx.r4.s64 = ctx.r11.s64 + -14780;
	// bl 0x82316b80
	ctx.lr = 0x82AA4D54;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19895(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19895, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4D6C"))) PPC_WEAK_FUNC(sub_82AA4D6C);
PPC_FUNC_IMPL(__imp__sub_82AA4D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4D70"))) PPC_WEAK_FUNC(sub_82AA4D70);
PPC_FUNC_IMPL(__imp__sub_82AA4D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14776
	ctx.r4.s64 = ctx.r11.s64 + -14776;
	// bl 0x82316b80
	ctx.lr = 0x82AA4D8C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20191(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20191, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4DA4"))) PPC_WEAK_FUNC(sub_82AA4DA4);
PPC_FUNC_IMPL(__imp__sub_82AA4DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4DA8"))) PPC_WEAK_FUNC(sub_82AA4DA8);
PPC_FUNC_IMPL(__imp__sub_82AA4DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14772
	ctx.r4.s64 = ctx.r11.s64 + -14772;
	// bl 0x82316b80
	ctx.lr = 0x82AA4DC4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-21107(r11)
	PPC_STORE_U8(ctx.r11.u32 + -21107, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4DDC"))) PPC_WEAK_FUNC(sub_82AA4DDC);
PPC_FUNC_IMPL(__imp__sub_82AA4DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4DE0"))) PPC_WEAK_FUNC(sub_82AA4DE0);
PPC_FUNC_IMPL(__imp__sub_82AA4DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14768
	ctx.r4.s64 = ctx.r11.s64 + -14768;
	// bl 0x82316b80
	ctx.lr = 0x82AA4DFC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20445(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20445, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4E14"))) PPC_WEAK_FUNC(sub_82AA4E14);
PPC_FUNC_IMPL(__imp__sub_82AA4E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4E18"))) PPC_WEAK_FUNC(sub_82AA4E18);
PPC_FUNC_IMPL(__imp__sub_82AA4E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14764
	ctx.r4.s64 = ctx.r11.s64 + -14764;
	// bl 0x82316b80
	ctx.lr = 0x82AA4E34;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20138(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20138, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4E4C"))) PPC_WEAK_FUNC(sub_82AA4E4C);
PPC_FUNC_IMPL(__imp__sub_82AA4E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4E50"))) PPC_WEAK_FUNC(sub_82AA4E50);
PPC_FUNC_IMPL(__imp__sub_82AA4E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14760
	ctx.r4.s64 = ctx.r11.s64 + -14760;
	// bl 0x82316b80
	ctx.lr = 0x82AA4E6C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20841(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20841, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4E84"))) PPC_WEAK_FUNC(sub_82AA4E84);
PPC_FUNC_IMPL(__imp__sub_82AA4E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4E88"))) PPC_WEAK_FUNC(sub_82AA4E88);
PPC_FUNC_IMPL(__imp__sub_82AA4E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14756
	ctx.r4.s64 = ctx.r11.s64 + -14756;
	// bl 0x82316b80
	ctx.lr = 0x82AA4EA4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-21136(r11)
	PPC_STORE_U8(ctx.r11.u32 + -21136, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4EBC"))) PPC_WEAK_FUNC(sub_82AA4EBC);
PPC_FUNC_IMPL(__imp__sub_82AA4EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4EC0"))) PPC_WEAK_FUNC(sub_82AA4EC0);
PPC_FUNC_IMPL(__imp__sub_82AA4EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14752
	ctx.r4.s64 = ctx.r11.s64 + -14752;
	// bl 0x82316b80
	ctx.lr = 0x82AA4EDC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19744(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19744, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4EF4"))) PPC_WEAK_FUNC(sub_82AA4EF4);
PPC_FUNC_IMPL(__imp__sub_82AA4EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4EF8"))) PPC_WEAK_FUNC(sub_82AA4EF8);
PPC_FUNC_IMPL(__imp__sub_82AA4EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14748
	ctx.r4.s64 = ctx.r11.s64 + -14748;
	// bl 0x82316b80
	ctx.lr = 0x82AA4F14;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20749(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20749, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4F2C"))) PPC_WEAK_FUNC(sub_82AA4F2C);
PPC_FUNC_IMPL(__imp__sub_82AA4F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4F30"))) PPC_WEAK_FUNC(sub_82AA4F30);
PPC_FUNC_IMPL(__imp__sub_82AA4F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14744
	ctx.r4.s64 = ctx.r11.s64 + -14744;
	// bl 0x82316b80
	ctx.lr = 0x82AA4F4C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20855(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20855, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4F64"))) PPC_WEAK_FUNC(sub_82AA4F64);
PPC_FUNC_IMPL(__imp__sub_82AA4F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4F68"))) PPC_WEAK_FUNC(sub_82AA4F68);
PPC_FUNC_IMPL(__imp__sub_82AA4F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14740
	ctx.r4.s64 = ctx.r11.s64 + -14740;
	// bl 0x82316b80
	ctx.lr = 0x82AA4F84;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20842(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20842, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4F9C"))) PPC_WEAK_FUNC(sub_82AA4F9C);
PPC_FUNC_IMPL(__imp__sub_82AA4F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4FA0"))) PPC_WEAK_FUNC(sub_82AA4FA0);
PPC_FUNC_IMPL(__imp__sub_82AA4FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14736
	ctx.r4.s64 = ctx.r11.s64 + -14736;
	// bl 0x82316b80
	ctx.lr = 0x82AA4FBC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20789(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20789, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA4FD4"))) PPC_WEAK_FUNC(sub_82AA4FD4);
PPC_FUNC_IMPL(__imp__sub_82AA4FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA4FD8"))) PPC_WEAK_FUNC(sub_82AA4FD8);
PPC_FUNC_IMPL(__imp__sub_82AA4FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14732
	ctx.r4.s64 = ctx.r11.s64 + -14732;
	// bl 0x82316b80
	ctx.lr = 0x82AA4FF4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19699(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19699, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA500C"))) PPC_WEAK_FUNC(sub_82AA500C);
PPC_FUNC_IMPL(__imp__sub_82AA500C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5010"))) PPC_WEAK_FUNC(sub_82AA5010);
PPC_FUNC_IMPL(__imp__sub_82AA5010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14728
	ctx.r4.s64 = ctx.r11.s64 + -14728;
	// bl 0x82316b80
	ctx.lr = 0x82AA502C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20387(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20387, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5044"))) PPC_WEAK_FUNC(sub_82AA5044);
PPC_FUNC_IMPL(__imp__sub_82AA5044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5048"))) PPC_WEAK_FUNC(sub_82AA5048);
PPC_FUNC_IMPL(__imp__sub_82AA5048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14724
	ctx.r4.s64 = ctx.r11.s64 + -14724;
	// bl 0x82316b80
	ctx.lr = 0x82AA5064;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20546(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20546, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA507C"))) PPC_WEAK_FUNC(sub_82AA507C);
PPC_FUNC_IMPL(__imp__sub_82AA507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5080"))) PPC_WEAK_FUNC(sub_82AA5080);
PPC_FUNC_IMPL(__imp__sub_82AA5080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14720
	ctx.r4.s64 = ctx.r11.s64 + -14720;
	// bl 0x82316b80
	ctx.lr = 0x82AA509C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19770(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19770, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA50B4"))) PPC_WEAK_FUNC(sub_82AA50B4);
PPC_FUNC_IMPL(__imp__sub_82AA50B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA50B8"))) PPC_WEAK_FUNC(sub_82AA50B8);
PPC_FUNC_IMPL(__imp__sub_82AA50B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14716
	ctx.r4.s64 = ctx.r11.s64 + -14716;
	// bl 0x82316b80
	ctx.lr = 0x82AA50D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20210(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20210, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA50EC"))) PPC_WEAK_FUNC(sub_82AA50EC);
PPC_FUNC_IMPL(__imp__sub_82AA50EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA50F0"))) PPC_WEAK_FUNC(sub_82AA50F0);
PPC_FUNC_IMPL(__imp__sub_82AA50F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14712
	ctx.r4.s64 = ctx.r11.s64 + -14712;
	// bl 0x82316b80
	ctx.lr = 0x82AA510C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20654(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20654, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5124"))) PPC_WEAK_FUNC(sub_82AA5124);
PPC_FUNC_IMPL(__imp__sub_82AA5124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5128"))) PPC_WEAK_FUNC(sub_82AA5128);
PPC_FUNC_IMPL(__imp__sub_82AA5128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14708
	ctx.r4.s64 = ctx.r11.s64 + -14708;
	// bl 0x82316b80
	ctx.lr = 0x82AA5144;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19946(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19946, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA515C"))) PPC_WEAK_FUNC(sub_82AA515C);
PPC_FUNC_IMPL(__imp__sub_82AA515C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5160"))) PPC_WEAK_FUNC(sub_82AA5160);
PPC_FUNC_IMPL(__imp__sub_82AA5160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14704
	ctx.r4.s64 = ctx.r11.s64 + -14704;
	// bl 0x82316b80
	ctx.lr = 0x82AA517C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19978(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19978, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5194"))) PPC_WEAK_FUNC(sub_82AA5194);
PPC_FUNC_IMPL(__imp__sub_82AA5194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5198"))) PPC_WEAK_FUNC(sub_82AA5198);
PPC_FUNC_IMPL(__imp__sub_82AA5198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14700
	ctx.r4.s64 = ctx.r11.s64 + -14700;
	// bl 0x82316b80
	ctx.lr = 0x82AA51B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20967(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20967, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA51CC"))) PPC_WEAK_FUNC(sub_82AA51CC);
PPC_FUNC_IMPL(__imp__sub_82AA51CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA51D0"))) PPC_WEAK_FUNC(sub_82AA51D0);
PPC_FUNC_IMPL(__imp__sub_82AA51D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14696
	ctx.r4.s64 = ctx.r11.s64 + -14696;
	// bl 0x82316b80
	ctx.lr = 0x82AA51EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19791(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19791, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5204"))) PPC_WEAK_FUNC(sub_82AA5204);
PPC_FUNC_IMPL(__imp__sub_82AA5204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5208"))) PPC_WEAK_FUNC(sub_82AA5208);
PPC_FUNC_IMPL(__imp__sub_82AA5208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14692
	ctx.r4.s64 = ctx.r11.s64 + -14692;
	// bl 0x82316b80
	ctx.lr = 0x82AA5224;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19632(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19632, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA523C"))) PPC_WEAK_FUNC(sub_82AA523C);
PPC_FUNC_IMPL(__imp__sub_82AA523C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5240"))) PPC_WEAK_FUNC(sub_82AA5240);
PPC_FUNC_IMPL(__imp__sub_82AA5240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14688
	ctx.r4.s64 = ctx.r11.s64 + -14688;
	// bl 0x82316b80
	ctx.lr = 0x82AA525C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-21056(r11)
	PPC_STORE_U8(ctx.r11.u32 + -21056, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5274"))) PPC_WEAK_FUNC(sub_82AA5274);
PPC_FUNC_IMPL(__imp__sub_82AA5274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5278"))) PPC_WEAK_FUNC(sub_82AA5278);
PPC_FUNC_IMPL(__imp__sub_82AA5278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14684
	ctx.r4.s64 = ctx.r11.s64 + -14684;
	// bl 0x82316b80
	ctx.lr = 0x82AA5294;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19803(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19803, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA52AC"))) PPC_WEAK_FUNC(sub_82AA52AC);
PPC_FUNC_IMPL(__imp__sub_82AA52AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA52B0"))) PPC_WEAK_FUNC(sub_82AA52B0);
PPC_FUNC_IMPL(__imp__sub_82AA52B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// bl 0x82316b80
	ctx.lr = 0x82AA52CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19843(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19843, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA52E4"))) PPC_WEAK_FUNC(sub_82AA52E4);
PPC_FUNC_IMPL(__imp__sub_82AA52E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA52E8"))) PPC_WEAK_FUNC(sub_82AA52E8);
PPC_FUNC_IMPL(__imp__sub_82AA52E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14676
	ctx.r4.s64 = ctx.r11.s64 + -14676;
	// bl 0x82316b80
	ctx.lr = 0x82AA5304;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20752(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20752, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA531C"))) PPC_WEAK_FUNC(sub_82AA531C);
PPC_FUNC_IMPL(__imp__sub_82AA531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5320"))) PPC_WEAK_FUNC(sub_82AA5320);
PPC_FUNC_IMPL(__imp__sub_82AA5320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14672
	ctx.r4.s64 = ctx.r11.s64 + -14672;
	// bl 0x82316b80
	ctx.lr = 0x82AA533C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20180(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20180, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5354"))) PPC_WEAK_FUNC(sub_82AA5354);
PPC_FUNC_IMPL(__imp__sub_82AA5354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5358"))) PPC_WEAK_FUNC(sub_82AA5358);
PPC_FUNC_IMPL(__imp__sub_82AA5358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14668
	ctx.r4.s64 = ctx.r11.s64 + -14668;
	// bl 0x82316b80
	ctx.lr = 0x82AA5374;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20792(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20792, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA538C"))) PPC_WEAK_FUNC(sub_82AA538C);
PPC_FUNC_IMPL(__imp__sub_82AA538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5390"))) PPC_WEAK_FUNC(sub_82AA5390);
PPC_FUNC_IMPL(__imp__sub_82AA5390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14664
	ctx.r4.s64 = ctx.r11.s64 + -14664;
	// bl 0x82316b80
	ctx.lr = 0x82AA53AC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20082(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20082, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA53C4"))) PPC_WEAK_FUNC(sub_82AA53C4);
PPC_FUNC_IMPL(__imp__sub_82AA53C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA53C8"))) PPC_WEAK_FUNC(sub_82AA53C8);
PPC_FUNC_IMPL(__imp__sub_82AA53C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14660
	ctx.r4.s64 = ctx.r11.s64 + -14660;
	// bl 0x82316b80
	ctx.lr = 0x82AA53E4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20321(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20321, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA53FC"))) PPC_WEAK_FUNC(sub_82AA53FC);
PPC_FUNC_IMPL(__imp__sub_82AA53FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5400"))) PPC_WEAK_FUNC(sub_82AA5400);
PPC_FUNC_IMPL(__imp__sub_82AA5400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14656
	ctx.r4.s64 = ctx.r11.s64 + -14656;
	// bl 0x82316b80
	ctx.lr = 0x82AA541C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20740(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20740, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5434"))) PPC_WEAK_FUNC(sub_82AA5434);
PPC_FUNC_IMPL(__imp__sub_82AA5434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5438"))) PPC_WEAK_FUNC(sub_82AA5438);
PPC_FUNC_IMPL(__imp__sub_82AA5438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14652
	ctx.r4.s64 = ctx.r11.s64 + -14652;
	// bl 0x82316b80
	ctx.lr = 0x82AA5454;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20675(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20675, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA546C"))) PPC_WEAK_FUNC(sub_82AA546C);
PPC_FUNC_IMPL(__imp__sub_82AA546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5470"))) PPC_WEAK_FUNC(sub_82AA5470);
PPC_FUNC_IMPL(__imp__sub_82AA5470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14648
	ctx.r4.s64 = ctx.r11.s64 + -14648;
	// bl 0x82316b80
	ctx.lr = 0x82AA548C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19642(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19642, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA54A4"))) PPC_WEAK_FUNC(sub_82AA54A4);
PPC_FUNC_IMPL(__imp__sub_82AA54A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA54A8"))) PPC_WEAK_FUNC(sub_82AA54A8);
PPC_FUNC_IMPL(__imp__sub_82AA54A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14644
	ctx.r4.s64 = ctx.r11.s64 + -14644;
	// bl 0x82316b80
	ctx.lr = 0x82AA54C4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19928(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19928, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA54DC"))) PPC_WEAK_FUNC(sub_82AA54DC);
PPC_FUNC_IMPL(__imp__sub_82AA54DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA54E0"))) PPC_WEAK_FUNC(sub_82AA54E0);
PPC_FUNC_IMPL(__imp__sub_82AA54E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14640
	ctx.r4.s64 = ctx.r11.s64 + -14640;
	// bl 0x82316b80
	ctx.lr = 0x82AA54FC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20674(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20674, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5514"))) PPC_WEAK_FUNC(sub_82AA5514);
PPC_FUNC_IMPL(__imp__sub_82AA5514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5518"))) PPC_WEAK_FUNC(sub_82AA5518);
PPC_FUNC_IMPL(__imp__sub_82AA5518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14636
	ctx.r4.s64 = ctx.r11.s64 + -14636;
	// bl 0x82316b80
	ctx.lr = 0x82AA5534;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19960(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19960, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA554C"))) PPC_WEAK_FUNC(sub_82AA554C);
PPC_FUNC_IMPL(__imp__sub_82AA554C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5550"))) PPC_WEAK_FUNC(sub_82AA5550);
PPC_FUNC_IMPL(__imp__sub_82AA5550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14632
	ctx.r4.s64 = ctx.r11.s64 + -14632;
	// bl 0x82316b80
	ctx.lr = 0x82AA556C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20552(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20552, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5584"))) PPC_WEAK_FUNC(sub_82AA5584);
PPC_FUNC_IMPL(__imp__sub_82AA5584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5588"))) PPC_WEAK_FUNC(sub_82AA5588);
PPC_FUNC_IMPL(__imp__sub_82AA5588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14628
	ctx.r4.s64 = ctx.r11.s64 + -14628;
	// bl 0x82316b80
	ctx.lr = 0x82AA55A4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20932(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20932, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA55BC"))) PPC_WEAK_FUNC(sub_82AA55BC);
PPC_FUNC_IMPL(__imp__sub_82AA55BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA55C0"))) PPC_WEAK_FUNC(sub_82AA55C0);
PPC_FUNC_IMPL(__imp__sub_82AA55C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14624
	ctx.r4.s64 = ctx.r11.s64 + -14624;
	// bl 0x82316b80
	ctx.lr = 0x82AA55DC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19680(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19680, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA55F4"))) PPC_WEAK_FUNC(sub_82AA55F4);
PPC_FUNC_IMPL(__imp__sub_82AA55F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA55F8"))) PPC_WEAK_FUNC(sub_82AA55F8);
PPC_FUNC_IMPL(__imp__sub_82AA55F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14620
	ctx.r4.s64 = ctx.r11.s64 + -14620;
	// bl 0x82316b80
	ctx.lr = 0x82AA5614;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20050(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20050, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA562C"))) PPC_WEAK_FUNC(sub_82AA562C);
PPC_FUNC_IMPL(__imp__sub_82AA562C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5630"))) PPC_WEAK_FUNC(sub_82AA5630);
PPC_FUNC_IMPL(__imp__sub_82AA5630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14616
	ctx.r4.s64 = ctx.r11.s64 + -14616;
	// bl 0x82316b80
	ctx.lr = 0x82AA564C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20352(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20352, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5664"))) PPC_WEAK_FUNC(sub_82AA5664);
PPC_FUNC_IMPL(__imp__sub_82AA5664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5668"))) PPC_WEAK_FUNC(sub_82AA5668);
PPC_FUNC_IMPL(__imp__sub_82AA5668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14612
	ctx.r4.s64 = ctx.r11.s64 + -14612;
	// bl 0x82316b80
	ctx.lr = 0x82AA5684;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20642(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20642, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA569C"))) PPC_WEAK_FUNC(sub_82AA569C);
PPC_FUNC_IMPL(__imp__sub_82AA569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA56A0"))) PPC_WEAK_FUNC(sub_82AA56A0);
PPC_FUNC_IMPL(__imp__sub_82AA56A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14608
	ctx.r4.s64 = ctx.r11.s64 + -14608;
	// bl 0x82316b80
	ctx.lr = 0x82AA56BC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19741(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19741, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA56D4"))) PPC_WEAK_FUNC(sub_82AA56D4);
PPC_FUNC_IMPL(__imp__sub_82AA56D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA56D8"))) PPC_WEAK_FUNC(sub_82AA56D8);
PPC_FUNC_IMPL(__imp__sub_82AA56D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14604
	ctx.r4.s64 = ctx.r11.s64 + -14604;
	// bl 0x82316b80
	ctx.lr = 0x82AA56F4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20995(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20995, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA570C"))) PPC_WEAK_FUNC(sub_82AA570C);
PPC_FUNC_IMPL(__imp__sub_82AA570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5710"))) PPC_WEAK_FUNC(sub_82AA5710);
PPC_FUNC_IMPL(__imp__sub_82AA5710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14600
	ctx.r4.s64 = ctx.r11.s64 + -14600;
	// bl 0x82316b80
	ctx.lr = 0x82AA572C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-21134(r11)
	PPC_STORE_U8(ctx.r11.u32 + -21134, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5744"))) PPC_WEAK_FUNC(sub_82AA5744);
PPC_FUNC_IMPL(__imp__sub_82AA5744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5748"))) PPC_WEAK_FUNC(sub_82AA5748);
PPC_FUNC_IMPL(__imp__sub_82AA5748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14596
	ctx.r4.s64 = ctx.r11.s64 + -14596;
	// bl 0x82316b80
	ctx.lr = 0x82AA5764;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19643(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19643, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA577C"))) PPC_WEAK_FUNC(sub_82AA577C);
PPC_FUNC_IMPL(__imp__sub_82AA577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5780"))) PPC_WEAK_FUNC(sub_82AA5780);
PPC_FUNC_IMPL(__imp__sub_82AA5780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14592
	ctx.r4.s64 = ctx.r11.s64 + -14592;
	// bl 0x82316b80
	ctx.lr = 0x82AA579C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20083(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20083, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA57B4"))) PPC_WEAK_FUNC(sub_82AA57B4);
PPC_FUNC_IMPL(__imp__sub_82AA57B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA57B8"))) PPC_WEAK_FUNC(sub_82AA57B8);
PPC_FUNC_IMPL(__imp__sub_82AA57B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14588
	ctx.r4.s64 = ctx.r11.s64 + -14588;
	// bl 0x82316b80
	ctx.lr = 0x82AA57D4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19980(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19980, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA57EC"))) PPC_WEAK_FUNC(sub_82AA57EC);
PPC_FUNC_IMPL(__imp__sub_82AA57EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA57F0"))) PPC_WEAK_FUNC(sub_82AA57F0);
PPC_FUNC_IMPL(__imp__sub_82AA57F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14584
	ctx.r4.s64 = ctx.r11.s64 + -14584;
	// bl 0x82316b80
	ctx.lr = 0x82AA580C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19897(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19897, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5824"))) PPC_WEAK_FUNC(sub_82AA5824);
PPC_FUNC_IMPL(__imp__sub_82AA5824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5828"))) PPC_WEAK_FUNC(sub_82AA5828);
PPC_FUNC_IMPL(__imp__sub_82AA5828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14580
	ctx.r4.s64 = ctx.r11.s64 + -14580;
	// bl 0x82316b80
	ctx.lr = 0x82AA5844;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20338(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20338, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA585C"))) PPC_WEAK_FUNC(sub_82AA585C);
PPC_FUNC_IMPL(__imp__sub_82AA585C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5860"))) PPC_WEAK_FUNC(sub_82AA5860);
PPC_FUNC_IMPL(__imp__sub_82AA5860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14576
	ctx.r4.s64 = ctx.r11.s64 + -14576;
	// bl 0x82316b80
	ctx.lr = 0x82AA587C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20931(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20931, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5894"))) PPC_WEAK_FUNC(sub_82AA5894);
PPC_FUNC_IMPL(__imp__sub_82AA5894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5898"))) PPC_WEAK_FUNC(sub_82AA5898);
PPC_FUNC_IMPL(__imp__sub_82AA5898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14572
	ctx.r4.s64 = ctx.r11.s64 + -14572;
	// bl 0x82316b80
	ctx.lr = 0x82AA58B4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20856(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20856, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA58CC"))) PPC_WEAK_FUNC(sub_82AA58CC);
PPC_FUNC_IMPL(__imp__sub_82AA58CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA58D0"))) PPC_WEAK_FUNC(sub_82AA58D0);
PPC_FUNC_IMPL(__imp__sub_82AA58D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14568
	ctx.r4.s64 = ctx.r11.s64 + -14568;
	// bl 0x82316b80
	ctx.lr = 0x82AA58EC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20698(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20698, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5904"))) PPC_WEAK_FUNC(sub_82AA5904);
PPC_FUNC_IMPL(__imp__sub_82AA5904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5908"))) PPC_WEAK_FUNC(sub_82AA5908);
PPC_FUNC_IMPL(__imp__sub_82AA5908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14564
	ctx.r4.s64 = ctx.r11.s64 + -14564;
	// bl 0x82316b80
	ctx.lr = 0x82AA5924;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20547(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20547, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA593C"))) PPC_WEAK_FUNC(sub_82AA593C);
PPC_FUNC_IMPL(__imp__sub_82AA593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5940"))) PPC_WEAK_FUNC(sub_82AA5940);
PPC_FUNC_IMPL(__imp__sub_82AA5940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14560
	ctx.r4.s64 = ctx.r11.s64 + -14560;
	// bl 0x82316b80
	ctx.lr = 0x82AA595C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20052(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20052, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5974"))) PPC_WEAK_FUNC(sub_82AA5974);
PPC_FUNC_IMPL(__imp__sub_82AA5974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5978"))) PPC_WEAK_FUNC(sub_82AA5978);
PPC_FUNC_IMPL(__imp__sub_82AA5978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14556
	ctx.r4.s64 = ctx.r11.s64 + -14556;
	// bl 0x82316b80
	ctx.lr = 0x82AA5994;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-21105(r11)
	PPC_STORE_U8(ctx.r11.u32 + -21105, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA59AC"))) PPC_WEAK_FUNC(sub_82AA59AC);
PPC_FUNC_IMPL(__imp__sub_82AA59AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA59B0"))) PPC_WEAK_FUNC(sub_82AA59B0);
PPC_FUNC_IMPL(__imp__sub_82AA59B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14552
	ctx.r4.s64 = ctx.r11.s64 + -14552;
	// bl 0x82316b80
	ctx.lr = 0x82AA59CC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20488(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20488, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA59E4"))) PPC_WEAK_FUNC(sub_82AA59E4);
PPC_FUNC_IMPL(__imp__sub_82AA59E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA59E8"))) PPC_WEAK_FUNC(sub_82AA59E8);
PPC_FUNC_IMPL(__imp__sub_82AA59E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14548
	ctx.r4.s64 = ctx.r11.s64 + -14548;
	// bl 0x82316b80
	ctx.lr = 0x82AA5A04;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19677(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19677, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5A1C"))) PPC_WEAK_FUNC(sub_82AA5A1C);
PPC_FUNC_IMPL(__imp__sub_82AA5A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5A20"))) PPC_WEAK_FUNC(sub_82AA5A20);
PPC_FUNC_IMPL(__imp__sub_82AA5A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14544
	ctx.r4.s64 = ctx.r11.s64 + -14544;
	// bl 0x82316b80
	ctx.lr = 0x82AA5A3C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20737(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20737, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5A54"))) PPC_WEAK_FUNC(sub_82AA5A54);
PPC_FUNC_IMPL(__imp__sub_82AA5A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5A58"))) PPC_WEAK_FUNC(sub_82AA5A58);
PPC_FUNC_IMPL(__imp__sub_82AA5A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14540
	ctx.r4.s64 = ctx.r11.s64 + -14540;
	// bl 0x82316b80
	ctx.lr = 0x82AA5A74;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20593(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20593, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5A8C"))) PPC_WEAK_FUNC(sub_82AA5A8C);
PPC_FUNC_IMPL(__imp__sub_82AA5A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5A90"))) PPC_WEAK_FUNC(sub_82AA5A90);
PPC_FUNC_IMPL(__imp__sub_82AA5A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14536
	ctx.r4.s64 = ctx.r11.s64 + -14536;
	// bl 0x82316b80
	ctx.lr = 0x82AA5AAC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20388(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20388, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5AC4"))) PPC_WEAK_FUNC(sub_82AA5AC4);
PPC_FUNC_IMPL(__imp__sub_82AA5AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5AC8"))) PPC_WEAK_FUNC(sub_82AA5AC8);
PPC_FUNC_IMPL(__imp__sub_82AA5AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14532
	ctx.r4.s64 = ctx.r11.s64 + -14532;
	// bl 0x82316b80
	ctx.lr = 0x82AA5AE4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20866(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20866, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5AFC"))) PPC_WEAK_FUNC(sub_82AA5AFC);
PPC_FUNC_IMPL(__imp__sub_82AA5AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5B00"))) PPC_WEAK_FUNC(sub_82AA5B00);
PPC_FUNC_IMPL(__imp__sub_82AA5B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14528
	ctx.r4.s64 = ctx.r11.s64 + -14528;
	// bl 0x82316b80
	ctx.lr = 0x82AA5B1C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19926(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19926, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5B34"))) PPC_WEAK_FUNC(sub_82AA5B34);
PPC_FUNC_IMPL(__imp__sub_82AA5B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5B38"))) PPC_WEAK_FUNC(sub_82AA5B38);
PPC_FUNC_IMPL(__imp__sub_82AA5B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14524
	ctx.r4.s64 = ctx.r11.s64 + -14524;
	// bl 0x82316b80
	ctx.lr = 0x82AA5B54;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20761(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20761, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5B6C"))) PPC_WEAK_FUNC(sub_82AA5B6C);
PPC_FUNC_IMPL(__imp__sub_82AA5B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5B70"))) PPC_WEAK_FUNC(sub_82AA5B70);
PPC_FUNC_IMPL(__imp__sub_82AA5B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14520
	ctx.r4.s64 = ctx.r11.s64 + -14520;
	// bl 0x82316b80
	ctx.lr = 0x82AA5B8C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20896(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20896, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5BA4"))) PPC_WEAK_FUNC(sub_82AA5BA4);
PPC_FUNC_IMPL(__imp__sub_82AA5BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5BA8"))) PPC_WEAK_FUNC(sub_82AA5BA8);
PPC_FUNC_IMPL(__imp__sub_82AA5BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14516
	ctx.r4.s64 = ctx.r11.s64 + -14516;
	// bl 0x82316b80
	ctx.lr = 0x82AA5BC4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20337(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20337, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5BDC"))) PPC_WEAK_FUNC(sub_82AA5BDC);
PPC_FUNC_IMPL(__imp__sub_82AA5BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5BE0"))) PPC_WEAK_FUNC(sub_82AA5BE0);
PPC_FUNC_IMPL(__imp__sub_82AA5BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14512
	ctx.r4.s64 = ctx.r11.s64 + -14512;
	// bl 0x82316b80
	ctx.lr = 0x82AA5BFC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20024(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20024, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5C14"))) PPC_WEAK_FUNC(sub_82AA5C14);
PPC_FUNC_IMPL(__imp__sub_82AA5C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5C18"))) PPC_WEAK_FUNC(sub_82AA5C18);
PPC_FUNC_IMPL(__imp__sub_82AA5C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14508
	ctx.r4.s64 = ctx.r11.s64 + -14508;
	// bl 0x82316b80
	ctx.lr = 0x82AA5C34;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19896(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19896, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5C4C"))) PPC_WEAK_FUNC(sub_82AA5C4C);
PPC_FUNC_IMPL(__imp__sub_82AA5C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5C50"))) PPC_WEAK_FUNC(sub_82AA5C50);
PPC_FUNC_IMPL(__imp__sub_82AA5C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14504
	ctx.r4.s64 = ctx.r11.s64 + -14504;
	// bl 0x82316b80
	ctx.lr = 0x82AA5C6C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20653(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20653, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5C84"))) PPC_WEAK_FUNC(sub_82AA5C84);
PPC_FUNC_IMPL(__imp__sub_82AA5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5C88"))) PPC_WEAK_FUNC(sub_82AA5C88);
PPC_FUNC_IMPL(__imp__sub_82AA5C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14500
	ctx.r4.s64 = ctx.r11.s64 + -14500;
	// bl 0x82316b80
	ctx.lr = 0x82AA5CA4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19805(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19805, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5CBC"))) PPC_WEAK_FUNC(sub_82AA5CBC);
PPC_FUNC_IMPL(__imp__sub_82AA5CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5CC0"))) PPC_WEAK_FUNC(sub_82AA5CC0);
PPC_FUNC_IMPL(__imp__sub_82AA5CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14496
	ctx.r4.s64 = ctx.r11.s64 + -14496;
	// bl 0x82316b80
	ctx.lr = 0x82AA5CDC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20444(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20444, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5CF4"))) PPC_WEAK_FUNC(sub_82AA5CF4);
PPC_FUNC_IMPL(__imp__sub_82AA5CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5CF8"))) PPC_WEAK_FUNC(sub_82AA5CF8);
PPC_FUNC_IMPL(__imp__sub_82AA5CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14492
	ctx.r4.s64 = ctx.r11.s64 + -14492;
	// bl 0x82316b80
	ctx.lr = 0x82AA5D14;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20595(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20595, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5D2C"))) PPC_WEAK_FUNC(sub_82AA5D2C);
PPC_FUNC_IMPL(__imp__sub_82AA5D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5D30"))) PPC_WEAK_FUNC(sub_82AA5D30);
PPC_FUNC_IMPL(__imp__sub_82AA5D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14488
	ctx.r4.s64 = ctx.r11.s64 + -14488;
	// bl 0x82316b80
	ctx.lr = 0x82AA5D4C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20641(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20641, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5D64"))) PPC_WEAK_FUNC(sub_82AA5D64);
PPC_FUNC_IMPL(__imp__sub_82AA5D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5D68"))) PPC_WEAK_FUNC(sub_82AA5D68);
PPC_FUNC_IMPL(__imp__sub_82AA5D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14484
	ctx.r4.s64 = ctx.r11.s64 + -14484;
	// bl 0x82316b80
	ctx.lr = 0x82AA5D84;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20333(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20333, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5D9C"))) PPC_WEAK_FUNC(sub_82AA5D9C);
PPC_FUNC_IMPL(__imp__sub_82AA5D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5DA0"))) PPC_WEAK_FUNC(sub_82AA5DA0);
PPC_FUNC_IMPL(__imp__sub_82AA5DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14480
	ctx.r4.s64 = ctx.r11.s64 + -14480;
	// bl 0x82316b80
	ctx.lr = 0x82AA5DBC;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20676(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20676, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5DD4"))) PPC_WEAK_FUNC(sub_82AA5DD4);
PPC_FUNC_IMPL(__imp__sub_82AA5DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5DD8"))) PPC_WEAK_FUNC(sub_82AA5DD8);
PPC_FUNC_IMPL(__imp__sub_82AA5DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14476
	ctx.r4.s64 = ctx.r11.s64 + -14476;
	// bl 0x82316b80
	ctx.lr = 0x82AA5DF4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19925(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19925, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5E0C"))) PPC_WEAK_FUNC(sub_82AA5E0C);
PPC_FUNC_IMPL(__imp__sub_82AA5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5E10"))) PPC_WEAK_FUNC(sub_82AA5E10);
PPC_FUNC_IMPL(__imp__sub_82AA5E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14472
	ctx.r4.s64 = ctx.r11.s64 + -14472;
	// bl 0x82316b80
	ctx.lr = 0x82AA5E2C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20019(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20019, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5E44"))) PPC_WEAK_FUNC(sub_82AA5E44);
PPC_FUNC_IMPL(__imp__sub_82AA5E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5E48"))) PPC_WEAK_FUNC(sub_82AA5E48);
PPC_FUNC_IMPL(__imp__sub_82AA5E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14468
	ctx.r4.s64 = ctx.r11.s64 + -14468;
	// bl 0x82316b80
	ctx.lr = 0x82AA5E64;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19893(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19893, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5E7C"))) PPC_WEAK_FUNC(sub_82AA5E7C);
PPC_FUNC_IMPL(__imp__sub_82AA5E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5E80"))) PPC_WEAK_FUNC(sub_82AA5E80);
PPC_FUNC_IMPL(__imp__sub_82AA5E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14464
	ctx.r4.s64 = ctx.r11.s64 + -14464;
	// bl 0x82316b80
	ctx.lr = 0x82AA5E9C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20151(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20151, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5EB4"))) PPC_WEAK_FUNC(sub_82AA5EB4);
PPC_FUNC_IMPL(__imp__sub_82AA5EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5EB8"))) PPC_WEAK_FUNC(sub_82AA5EB8);
PPC_FUNC_IMPL(__imp__sub_82AA5EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14460
	ctx.r4.s64 = ctx.r11.s64 + -14460;
	// bl 0x82316b80
	ctx.lr = 0x82AA5ED4;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20295(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20295, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5EEC"))) PPC_WEAK_FUNC(sub_82AA5EEC);
PPC_FUNC_IMPL(__imp__sub_82AA5EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5EF0"))) PPC_WEAK_FUNC(sub_82AA5EF0);
PPC_FUNC_IMPL(__imp__sub_82AA5EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14456
	ctx.r4.s64 = ctx.r11.s64 + -14456;
	// bl 0x82316b80
	ctx.lr = 0x82AA5F0C;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-19678(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19678, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5F24"))) PPC_WEAK_FUNC(sub_82AA5F24);
PPC_FUNC_IMPL(__imp__sub_82AA5F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AA5F28"))) PPC_WEAK_FUNC(sub_82AA5F28);
PPC_FUNC_IMPL(__imp__sub_82AA5F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14452
	ctx.r4.s64 = ctx.r11.s64 + -14452;
	// bl 0x82316b80
	ctx.lr = 0x82AA5F44;
	sub_82316B80(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stb r3,-20791(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20791, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AA5F5C"))) PPC_WEAK_FUNC(sub_82AA5F5C);
PPC_FUNC_IMPL(__imp__sub_82AA5F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

