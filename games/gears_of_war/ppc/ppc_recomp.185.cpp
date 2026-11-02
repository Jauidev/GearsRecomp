#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82ABA530"))) PPC_WEAK_FUNC(sub_82ABA530);
PPC_FUNC_IMPL(__imp__sub_82ABA530) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28888
	ctx.r4.s64 = ctx.r11.s64 + 28888;
	// bl 0x82316b80
	ctx.lr = 0x82ABA54C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12951(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12951, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA564"))) PPC_WEAK_FUNC(sub_82ABA564);
PPC_FUNC_IMPL(__imp__sub_82ABA564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA568"))) PPC_WEAK_FUNC(sub_82ABA568);
PPC_FUNC_IMPL(__imp__sub_82ABA568) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28892
	ctx.r4.s64 = ctx.r11.s64 + 28892;
	// bl 0x82316b80
	ctx.lr = 0x82ABA584;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13000(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13000, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA59C"))) PPC_WEAK_FUNC(sub_82ABA59C);
PPC_FUNC_IMPL(__imp__sub_82ABA59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA5A0"))) PPC_WEAK_FUNC(sub_82ABA5A0);
PPC_FUNC_IMPL(__imp__sub_82ABA5A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28896
	ctx.r4.s64 = ctx.r11.s64 + 28896;
	// bl 0x82316b80
	ctx.lr = 0x82ABA5BC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12929(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12929, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA5D4"))) PPC_WEAK_FUNC(sub_82ABA5D4);
PPC_FUNC_IMPL(__imp__sub_82ABA5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA5D8"))) PPC_WEAK_FUNC(sub_82ABA5D8);
PPC_FUNC_IMPL(__imp__sub_82ABA5D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28900
	ctx.r4.s64 = ctx.r11.s64 + 28900;
	// bl 0x82316b80
	ctx.lr = 0x82ABA5F4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13024(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13024, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA60C"))) PPC_WEAK_FUNC(sub_82ABA60C);
PPC_FUNC_IMPL(__imp__sub_82ABA60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA610"))) PPC_WEAK_FUNC(sub_82ABA610);
PPC_FUNC_IMPL(__imp__sub_82ABA610) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28904
	ctx.r4.s64 = ctx.r11.s64 + 28904;
	// bl 0x82316b80
	ctx.lr = 0x82ABA62C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12981(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12981, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA644"))) PPC_WEAK_FUNC(sub_82ABA644);
PPC_FUNC_IMPL(__imp__sub_82ABA644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA648"))) PPC_WEAK_FUNC(sub_82ABA648);
PPC_FUNC_IMPL(__imp__sub_82ABA648) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28908
	ctx.r4.s64 = ctx.r11.s64 + 28908;
	// bl 0x82316b80
	ctx.lr = 0x82ABA664;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13219(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13219, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA67C"))) PPC_WEAK_FUNC(sub_82ABA67C);
PPC_FUNC_IMPL(__imp__sub_82ABA67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA680"))) PPC_WEAK_FUNC(sub_82ABA680);
PPC_FUNC_IMPL(__imp__sub_82ABA680) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28912
	ctx.r4.s64 = ctx.r11.s64 + 28912;
	// bl 0x82316b80
	ctx.lr = 0x82ABA69C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13217(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13217, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA6B4"))) PPC_WEAK_FUNC(sub_82ABA6B4);
PPC_FUNC_IMPL(__imp__sub_82ABA6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA6B8"))) PPC_WEAK_FUNC(sub_82ABA6B8);
PPC_FUNC_IMPL(__imp__sub_82ABA6B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28916
	ctx.r4.s64 = ctx.r11.s64 + 28916;
	// bl 0x82316b80
	ctx.lr = 0x82ABA6D4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13126(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13126, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA6EC"))) PPC_WEAK_FUNC(sub_82ABA6EC);
PPC_FUNC_IMPL(__imp__sub_82ABA6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA6F0"))) PPC_WEAK_FUNC(sub_82ABA6F0);
PPC_FUNC_IMPL(__imp__sub_82ABA6F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28920
	ctx.r4.s64 = ctx.r11.s64 + 28920;
	// bl 0x82316b80
	ctx.lr = 0x82ABA70C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13045(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13045, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA724"))) PPC_WEAK_FUNC(sub_82ABA724);
PPC_FUNC_IMPL(__imp__sub_82ABA724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA728"))) PPC_WEAK_FUNC(sub_82ABA728);
PPC_FUNC_IMPL(__imp__sub_82ABA728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28924
	ctx.r4.s64 = ctx.r11.s64 + 28924;
	// bl 0x82316b80
	ctx.lr = 0x82ABA744;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13168(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13168, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA75C"))) PPC_WEAK_FUNC(sub_82ABA75C);
PPC_FUNC_IMPL(__imp__sub_82ABA75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA760"))) PPC_WEAK_FUNC(sub_82ABA760);
PPC_FUNC_IMPL(__imp__sub_82ABA760) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28928
	ctx.r4.s64 = ctx.r11.s64 + 28928;
	// bl 0x82316b80
	ctx.lr = 0x82ABA77C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12932(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12932, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA794"))) PPC_WEAK_FUNC(sub_82ABA794);
PPC_FUNC_IMPL(__imp__sub_82ABA794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA798"))) PPC_WEAK_FUNC(sub_82ABA798);
PPC_FUNC_IMPL(__imp__sub_82ABA798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28932
	ctx.r4.s64 = ctx.r11.s64 + 28932;
	// bl 0x82316b80
	ctx.lr = 0x82ABA7B4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12896(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12896, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA7CC"))) PPC_WEAK_FUNC(sub_82ABA7CC);
PPC_FUNC_IMPL(__imp__sub_82ABA7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA7D0"))) PPC_WEAK_FUNC(sub_82ABA7D0);
PPC_FUNC_IMPL(__imp__sub_82ABA7D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28936
	ctx.r4.s64 = ctx.r11.s64 + 28936;
	// bl 0x82316b80
	ctx.lr = 0x82ABA7EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12987(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12987, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA804"))) PPC_WEAK_FUNC(sub_82ABA804);
PPC_FUNC_IMPL(__imp__sub_82ABA804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA808"))) PPC_WEAK_FUNC(sub_82ABA808);
PPC_FUNC_IMPL(__imp__sub_82ABA808) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28940
	ctx.r4.s64 = ctx.r11.s64 + 28940;
	// bl 0x82316b80
	ctx.lr = 0x82ABA824;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12982(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12982, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA83C"))) PPC_WEAK_FUNC(sub_82ABA83C);
PPC_FUNC_IMPL(__imp__sub_82ABA83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA840"))) PPC_WEAK_FUNC(sub_82ABA840);
PPC_FUNC_IMPL(__imp__sub_82ABA840) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28944
	ctx.r4.s64 = ctx.r11.s64 + 28944;
	// bl 0x82316b80
	ctx.lr = 0x82ABA85C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12988(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12988, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA874"))) PPC_WEAK_FUNC(sub_82ABA874);
PPC_FUNC_IMPL(__imp__sub_82ABA874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA878"))) PPC_WEAK_FUNC(sub_82ABA878);
PPC_FUNC_IMPL(__imp__sub_82ABA878) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28948
	ctx.r4.s64 = ctx.r11.s64 + 28948;
	// bl 0x82316b80
	ctx.lr = 0x82ABA894;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13004(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13004, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA8AC"))) PPC_WEAK_FUNC(sub_82ABA8AC);
PPC_FUNC_IMPL(__imp__sub_82ABA8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA8B0"))) PPC_WEAK_FUNC(sub_82ABA8B0);
PPC_FUNC_IMPL(__imp__sub_82ABA8B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28952
	ctx.r4.s64 = ctx.r11.s64 + 28952;
	// bl 0x82316b80
	ctx.lr = 0x82ABA8CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12985(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12985, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA8E4"))) PPC_WEAK_FUNC(sub_82ABA8E4);
PPC_FUNC_IMPL(__imp__sub_82ABA8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA8E8"))) PPC_WEAK_FUNC(sub_82ABA8E8);
PPC_FUNC_IMPL(__imp__sub_82ABA8E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28956
	ctx.r4.s64 = ctx.r11.s64 + 28956;
	// bl 0x82316b80
	ctx.lr = 0x82ABA904;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13074(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13074, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA91C"))) PPC_WEAK_FUNC(sub_82ABA91C);
PPC_FUNC_IMPL(__imp__sub_82ABA91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA920"))) PPC_WEAK_FUNC(sub_82ABA920);
PPC_FUNC_IMPL(__imp__sub_82ABA920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28960
	ctx.r4.s64 = ctx.r11.s64 + 28960;
	// bl 0x82316b80
	ctx.lr = 0x82ABA93C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13048(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13048, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA954"))) PPC_WEAK_FUNC(sub_82ABA954);
PPC_FUNC_IMPL(__imp__sub_82ABA954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA958"))) PPC_WEAK_FUNC(sub_82ABA958);
PPC_FUNC_IMPL(__imp__sub_82ABA958) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28964
	ctx.r4.s64 = ctx.r11.s64 + 28964;
	// bl 0x82316b80
	ctx.lr = 0x82ABA974;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13073(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13073, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA98C"))) PPC_WEAK_FUNC(sub_82ABA98C);
PPC_FUNC_IMPL(__imp__sub_82ABA98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA990"))) PPC_WEAK_FUNC(sub_82ABA990);
PPC_FUNC_IMPL(__imp__sub_82ABA990) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28968
	ctx.r4.s64 = ctx.r11.s64 + 28968;
	// bl 0x82316b80
	ctx.lr = 0x82ABA9AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13002(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13002, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA9C4"))) PPC_WEAK_FUNC(sub_82ABA9C4);
PPC_FUNC_IMPL(__imp__sub_82ABA9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA9C8"))) PPC_WEAK_FUNC(sub_82ABA9C8);
PPC_FUNC_IMPL(__imp__sub_82ABA9C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28972
	ctx.r4.s64 = ctx.r11.s64 + 28972;
	// bl 0x82316b80
	ctx.lr = 0x82ABA9E4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13027(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13027, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA9FC"))) PPC_WEAK_FUNC(sub_82ABA9FC);
PPC_FUNC_IMPL(__imp__sub_82ABA9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABAA00"))) PPC_WEAK_FUNC(sub_82ABAA00);
PPC_FUNC_IMPL(__imp__sub_82ABAA00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28976
	ctx.r4.s64 = ctx.r11.s64 + 28976;
	// bl 0x82316b80
	ctx.lr = 0x82ABAA1C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13199(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13199, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABAA34"))) PPC_WEAK_FUNC(sub_82ABAA34);
PPC_FUNC_IMPL(__imp__sub_82ABAA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABAA38"))) PPC_WEAK_FUNC(sub_82ABAA38);
PPC_FUNC_IMPL(__imp__sub_82ABAA38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28980
	ctx.r4.s64 = ctx.r11.s64 + 28980;
	// bl 0x82316b80
	ctx.lr = 0x82ABAA54;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12999(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12999, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABAA6C"))) PPC_WEAK_FUNC(sub_82ABAA6C);
PPC_FUNC_IMPL(__imp__sub_82ABAA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABAA70"))) PPC_WEAK_FUNC(sub_82ABAA70);
PPC_FUNC_IMPL(__imp__sub_82ABAA70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28984
	ctx.r4.s64 = ctx.r11.s64 + 28984;
	// bl 0x82316b80
	ctx.lr = 0x82ABAA8C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12895(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12895, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABAAA4"))) PPC_WEAK_FUNC(sub_82ABAAA4);
PPC_FUNC_IMPL(__imp__sub_82ABAAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABAAA8"))) PPC_WEAK_FUNC(sub_82ABAAA8);
PPC_FUNC_IMPL(__imp__sub_82ABAAA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28988
	ctx.r4.s64 = ctx.r11.s64 + 28988;
	// bl 0x82316b80
	ctx.lr = 0x82ABAAC4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13003(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13003, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABAADC"))) PPC_WEAK_FUNC(sub_82ABAADC);
PPC_FUNC_IMPL(__imp__sub_82ABAADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABAAE0"))) PPC_WEAK_FUNC(sub_82ABAAE0);
PPC_FUNC_IMPL(__imp__sub_82ABAAE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28992
	ctx.r4.s64 = ctx.r11.s64 + 28992;
	// bl 0x82316b80
	ctx.lr = 0x82ABAAFC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12984(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12984, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABAB14"))) PPC_WEAK_FUNC(sub_82ABAB14);
PPC_FUNC_IMPL(__imp__sub_82ABAB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABAB18"))) PPC_WEAK_FUNC(sub_82ABAB18);
PPC_FUNC_IMPL(__imp__sub_82ABAB18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28996
	ctx.r4.s64 = ctx.r11.s64 + 28996;
	// bl 0x82316b80
	ctx.lr = 0x82ABAB34;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12930(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12930, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABAB4C"))) PPC_WEAK_FUNC(sub_82ABAB4C);
PPC_FUNC_IMPL(__imp__sub_82ABAB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABAB50"))) PPC_WEAK_FUNC(sub_82ABAB50);
PPC_FUNC_IMPL(__imp__sub_82ABAB50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29000
	ctx.r4.s64 = ctx.r11.s64 + 29000;
	// bl 0x82316b80
	ctx.lr = 0x82ABAB6C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12983(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12983, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABAB84"))) PPC_WEAK_FUNC(sub_82ABAB84);
PPC_FUNC_IMPL(__imp__sub_82ABAB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABAB88"))) PPC_WEAK_FUNC(sub_82ABAB88);
PPC_FUNC_IMPL(__imp__sub_82ABAB88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29004
	ctx.r4.s64 = ctx.r11.s64 + 29004;
	// bl 0x82316b80
	ctx.lr = 0x82ABABA4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12980(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12980, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABABBC"))) PPC_WEAK_FUNC(sub_82ABABBC);
PPC_FUNC_IMPL(__imp__sub_82ABABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABABC0"))) PPC_WEAK_FUNC(sub_82ABABC0);
PPC_FUNC_IMPL(__imp__sub_82ABABC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29008
	ctx.r4.s64 = ctx.r11.s64 + 29008;
	// bl 0x82316b80
	ctx.lr = 0x82ABABDC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12986(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12986, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABABF4"))) PPC_WEAK_FUNC(sub_82ABABF4);
PPC_FUNC_IMPL(__imp__sub_82ABABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABABF8"))) PPC_WEAK_FUNC(sub_82ABABF8);
PPC_FUNC_IMPL(__imp__sub_82ABABF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29012
	ctx.r4.s64 = ctx.r11.s64 + 29012;
	// bl 0x82316b80
	ctx.lr = 0x82ABAC14;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13167(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13167, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABAC2C"))) PPC_WEAK_FUNC(sub_82ABAC2C);
PPC_FUNC_IMPL(__imp__sub_82ABAC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABAC30"))) PPC_WEAK_FUNC(sub_82ABAC30);
PPC_FUNC_IMPL(__imp__sub_82ABAC30) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f0
	ctx.lr = 0x82ABAC38;
	__savegprlr_18(ctx, base);
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// lis r21,-32183
	ctx.r21.s64 = -2109145088;
	// addi r10,r10,-18840
	ctx.r10.s64 = ctx.r10.s64 + -18840;
	// lis r22,-32183
	ctx.r22.s64 = -2109145088;
	// lis r23,-32183
	ctx.r23.s64 = -2109145088;
	// lis r24,-32183
	ctx.r24.s64 = -2109145088;
	// lis r25,-32183
	ctx.r25.s64 = -2109145088;
	// lis r26,-32183
	ctx.r26.s64 = -2109145088;
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// lis r27,-32183
	ctx.r27.s64 = -2109145088;
	// lis r28,-32183
	ctx.r28.s64 = -2109145088;
	// lis r29,-32183
	ctx.r29.s64 = -2109145088;
	// lis r30,-32183
	ctx.r30.s64 = -2109145088;
	// lis r31,-32183
	ctx.r31.s64 = -2109145088;
	// lis r3,-32183
	ctx.r3.s64 = -2109145088;
	// lis r4,-32183
	ctx.r4.s64 = -2109145088;
	// lis r5,-32183
	ctx.r5.s64 = -2109145088;
	// lis r6,-32183
	ctx.r6.s64 = -2109145088;
	// lis r7,-32183
	ctx.r7.s64 = -2109145088;
	// lis r8,-32183
	ctx.r8.s64 = -2109145088;
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,-18984
	ctx.r21.s64 = ctx.r21.s64 + -18984;
	// addi r22,r22,-19208
	ctx.r22.s64 = ctx.r22.s64 + -19208;
	// addi r23,r23,-19376
	ctx.r23.s64 = ctx.r23.s64 + -19376;
	// addi r24,r24,-19680
	ctx.r24.s64 = ctx.r24.s64 + -19680;
	// addi r25,r25,-20000
	ctx.r25.s64 = ctx.r25.s64 + -20000;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r26,r26,-20232
	ctx.r26.s64 = ctx.r26.s64 + -20232;
	// stw r21,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r21.u32);
	// addi r27,r27,-20552
	ctx.r27.s64 = ctx.r27.s64 + -20552;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r28,r28,-20776
	ctx.r28.s64 = ctx.r28.s64 + -20776;
	// stw r22,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r22.u32);
	// addi r29,r29,-21000
	ctx.r29.s64 = ctx.r29.s64 + -21000;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r30,r30,-21280
	ctx.r30.s64 = ctx.r30.s64 + -21280;
	// stw r23,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r23.u32);
	// addi r31,r31,-21456
	ctx.r31.s64 = ctx.r31.s64 + -21456;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r3,r3,-21624
	ctx.r3.s64 = ctx.r3.s64 + -21624;
	// stw r24,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r24.u32);
	// addi r4,r4,-21800
	ctx.r4.s64 = ctx.r4.s64 + -21800;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r5,r5,-21968
	ctx.r5.s64 = ctx.r5.s64 + -21968;
	// stw r25,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r25.u32);
	// addi r6,r6,-22136
	ctx.r6.s64 = ctx.r6.s64 + -22136;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r7,r7,-22312
	ctx.r7.s64 = ctx.r7.s64 + -22312;
	// stw r26,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r26.u32);
	// addi r8,r8,-22488
	ctx.r8.s64 = ctx.r8.s64 + -22488;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r9,r9,-22664
	ctx.r9.s64 = ctx.r9.s64 + -22664;
	// stw r27,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r27.u32);
	// addi r11,r11,-22984
	ctx.r11.s64 = ctx.r11.s64 + -22984;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r28,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r28.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r29,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r29.u32);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// stw r30,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r30.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r31,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r31.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r3,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r3.u32);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// stw r4,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r4.u32);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// stw r5,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r5.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r6,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r6.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r7,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r7.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r8,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r9,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r9.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r11.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lis r18,-32183
	ctx.r18.s64 = -2109145088;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// lis r19,-32183
	ctx.r19.s64 = -2109145088;
	// lis r20,-32183
	ctx.r20.s64 = -2109145088;
	// lis r21,-32183
	ctx.r21.s64 = -2109145088;
	// lis r22,-32183
	ctx.r22.s64 = -2109145088;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lis r23,-32183
	ctx.r23.s64 = -2109145088;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r24,-32183
	ctx.r24.s64 = -2109145088;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r25,-32183
	ctx.r25.s64 = -2109145088;
	// lis r26,-32183
	ctx.r26.s64 = -2109145088;
	// lis r27,-32183
	ctx.r27.s64 = -2109145088;
	// lis r28,-32183
	ctx.r28.s64 = -2109145088;
	// lis r29,-32183
	ctx.r29.s64 = -2109145088;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// lis r30,-32183
	ctx.r30.s64 = -2109145088;
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lis r31,-32183
	ctx.r31.s64 = -2109145088;
	// lis r3,-32183
	ctx.r3.s64 = -2109145088;
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// lis r4,-32183
	ctx.r4.s64 = -2109145088;
	// lis r5,-32183
	ctx.r5.s64 = -2109145088;
	// lis r6,-32183
	ctx.r6.s64 = -2109145088;
	// lis r7,-32183
	ctx.r7.s64 = -2109145088;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r9,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r8,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r8.u32);
	// stw r9,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r9.u32);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r9,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r8,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r8.u32);
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r8,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r8.u32);
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r8,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r8.u32);
	// stw r9,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r8,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r8.u32);
	// stw r9,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r9.u32);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,232(r11)
	PPC_STORE_U64(ctx.r11.u32 + 232, ctx.r9.u64);
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r18,r18,-23160
	ctx.r18.s64 = ctx.r18.s64 + -23160;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r9,r9,-27768
	ctx.r9.s64 = ctx.r9.s64 + -27768;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r7,r7,-27600
	ctx.r7.s64 = ctx.r7.s64 + -27600;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r19,r19,-23616
	ctx.r19.s64 = ctx.r19.s64 + -23616;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r20,r20,-23928
	ctx.r20.s64 = ctx.r20.s64 + -23928;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r18,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r18.u32);
	// addi r21,r21,-24104
	ctx.r21.s64 = ctx.r21.s64 + -24104;
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// addi r22,r22,-24248
	ctx.r22.s64 = ctx.r22.s64 + -24248;
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// addi r23,r23,-24392
	ctx.r23.s64 = ctx.r23.s64 + -24392;
	// stw r7,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r7.u32);
	// addi r24,r24,-24536
	ctx.r24.s64 = ctx.r24.s64 + -24536;
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r19,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r19.u32);
	// stw r20,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r20.u32);
	// addi r25,r25,-24680
	ctx.r25.s64 = ctx.r25.s64 + -24680;
	// stw r21,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r21.u32);
	// addi r26,r26,-24912
	ctx.r26.s64 = ctx.r26.s64 + -24912;
	// stw r22,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r22.u32);
	// addi r27,r27,-25144
	ctx.r27.s64 = ctx.r27.s64 + -25144;
	// stw r23,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r23.u32);
	// addi r28,r28,-25320
	ctx.r28.s64 = ctx.r28.s64 + -25320;
	// stw r7,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r7.u32);
	// addi r29,r29,-25672
	ctx.r29.s64 = ctx.r29.s64 + -25672;
	// stw r9,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r9.u32);
	// addi r30,r30,-25992
	ctx.r30.s64 = ctx.r30.s64 + -25992;
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// addi r31,r31,-26168
	ctx.r31.s64 = ctx.r31.s64 + -26168;
	// addi r3,r3,-26344
	ctx.r3.s64 = ctx.r3.s64 + -26344;
	// stw r24,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r24.u32);
	// addi r4,r4,-26648
	ctx.r4.s64 = ctx.r4.s64 + -26648;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r5,r5,-27136
	ctx.r5.s64 = ctx.r5.s64 + -27136;
	// stw r25,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r25.u32);
	// addi r6,r6,-27368
	ctx.r6.s64 = ctx.r6.s64 + -27368;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// std r9,256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 256, ctx.r9.u64);
	// lis r8,-32183
	ctx.r8.s64 = -2109145088;
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r26,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r26.u32);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r27,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r27.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r28,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r28.u32);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// stw r7,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r7.u32);
	// stw r9,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r29,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r29.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r30,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r30.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// std r9,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// stw r31,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r31.u32);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r3,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r3.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r4,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r7,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r7.u32);
	// stw r9,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r9.u32);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// stw r5,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r5.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r6,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r6.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// std r9,304(r11)
	PPC_STORE_U64(ctx.r11.u32 + 304, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r19,-32183
	ctx.r19.s64 = -2109145088;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lis r20,-32183
	ctx.r20.s64 = -2109145088;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r21,-32183
	ctx.r21.s64 = -2109145088;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r22,-32183
	ctx.r22.s64 = -2109145088;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r7,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r7.u32);
	// lis r23,-32183
	ctx.r23.s64 = -2109145088;
	// stw r9,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r9.u32);
	// lis r24,-32183
	ctx.r24.s64 = -2109145088;
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// addi r19,r19,-28320
	ctx.r19.s64 = ctx.r19.s64 + -28320;
	// addi r20,r20,-28616
	ctx.r20.s64 = ctx.r20.s64 + -28616;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r21,r21,-28744
	ctx.r21.s64 = ctx.r21.s64 + -28744;
	// addi r22,r22,-28976
	ctx.r22.s64 = ctx.r22.s64 + -28976;
	// addi r23,r23,-29120
	ctx.r23.s64 = ctx.r23.s64 + -29120;
	// std r9,328(r11)
	PPC_STORE_U64(ctx.r11.u32 + 328, ctx.r9.u64);
	// addi r24,r24,-29352
	ctx.r24.s64 = ctx.r24.s64 + -29352;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// lis r25,-32183
	ctx.r25.s64 = -2109145088;
	// lis r26,-32183
	ctx.r26.s64 = -2109145088;
	// stw r19,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r19.u32);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r20,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r20.u32);
	// lis r27,-32183
	ctx.r27.s64 = -2109145088;
	// stw r21,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r21.u32);
	// lis r28,-32183
	ctx.r28.s64 = -2109145088;
	// stw r22,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r22.u32);
	// lis r29,-32183
	ctx.r29.s64 = -2109145088;
	// stw r23,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r23.u32);
	// lis r30,-32183
	ctx.r30.s64 = -2109145088;
	// stw r24,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r24.u32);
	// stw r7,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r7.u32);
	// lis r31,-32183
	ctx.r31.s64 = -2109145088;
	// stw r9,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r9.u32);
	// lis r3,-32183
	ctx.r3.s64 = -2109145088;
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// lis r4,-32183
	ctx.r4.s64 = -2109145088;
	// lis r5,-32183
	ctx.r5.s64 = -2109145088;
	// lis r6,-32183
	ctx.r6.s64 = -2109145088;
	// std r9,352(r11)
	PPC_STORE_U64(ctx.r11.u32 + 352, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r7,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r7.u32);
	// stw r9,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r9.u32);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,376(r11)
	PPC_STORE_U64(ctx.r11.u32 + 376, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r7,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r7.u32);
	// stw r9,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r9.u32);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,400(r11)
	PPC_STORE_U64(ctx.r11.u32 + 400, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r7,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r7.u32);
	// stw r9,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r9.u32);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,424(r11)
	PPC_STORE_U64(ctx.r11.u32 + 424, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r7,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r7.u32);
	// stw r9,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r9.u32);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,448(r11)
	PPC_STORE_U64(ctx.r11.u32 + 448, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r7,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r7.u32);
	// lis r7,-32183
	ctx.r7.s64 = -2109145088;
	// stw r9,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r9.u32);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,472(r11)
	PPC_STORE_U64(ctx.r11.u32 + 472, ctx.r9.u64);
	// addi r9,r8,-28016
	ctx.r9.s64 = ctx.r8.s64 + -28016;
	// lis r8,-32183
	ctx.r8.s64 = -2109145088;
	// stw r9,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// addi r9,r9,-32248
	ctx.r9.s64 = ctx.r9.s64 + -32248;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r7,r7,-32024
	ctx.r7.s64 = ctx.r7.s64 + -32024;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r25,r25,-29496
	ctx.r25.s64 = ctx.r25.s64 + -29496;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r26,r26,-29672
	ctx.r26.s64 = ctx.r26.s64 + -29672;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r27,r27,-29840
	ctx.r27.s64 = ctx.r27.s64 + -29840;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// addi r28,r28,-29984
	ctx.r28.s64 = ctx.r28.s64 + -29984;
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// addi r29,r29,-30648
	ctx.r29.s64 = ctx.r29.s64 + -30648;
	// stw r7,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r7.u32);
	// addi r30,r30,-30824
	ctx.r30.s64 = ctx.r30.s64 + -30824;
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r25,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r25.u32);
	// stw r26,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r26.u32);
	// addi r31,r31,-31000
	ctx.r31.s64 = ctx.r31.s64 + -31000;
	// stw r27,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r27.u32);
	// addi r3,r3,-31176
	ctx.r3.s64 = ctx.r3.s64 + -31176;
	// stw r28,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r28.u32);
	// addi r4,r4,-31400
	ctx.r4.s64 = ctx.r4.s64 + -31400;
	// stw r29,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r29.u32);
	// addi r5,r5,-31624
	ctx.r5.s64 = ctx.r5.s64 + -31624;
	// stw r7,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r7.u32);
	// addi r6,r6,-31848
	ctx.r6.s64 = ctx.r6.s64 + -31848;
	// stw r9,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r9.u32);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r30,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r30.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r31,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r31.u32);
	// std r9,496(r11)
	PPC_STORE_U64(ctx.r11.u32 + 496, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r3,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r3.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r4,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r5,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r5.u32);
	// stw r7,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r7.u32);
	// stw r9,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r9.u32);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r6,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r6.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// std r9,520(r11)
	PPC_STORE_U64(ctx.r11.u32 + 520, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r7,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r7.u32);
	// stw r9,536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 536, ctx.r9.u32);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,544(r11)
	PPC_STORE_U64(ctx.r11.u32 + 544, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r7,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r7.u32);
	// stw r9,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r9.u32);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,568(r11)
	PPC_STORE_U64(ctx.r11.u32 + 568, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r7,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r7.u32);
	// stw r9,584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 584, ctx.r9.u32);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r9,592(r11)
	PPC_STORE_U64(ctx.r11.u32 + 592, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r7,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r7.u32);
	// stw r9,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r9.u32);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,616(r11)
	PPC_STORE_U64(ctx.r11.u32 + 616, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r7,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r7.u32);
	// stw r9,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r9.u32);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,640(r11)
	PPC_STORE_U64(ctx.r11.u32 + 640, ctx.r9.u64);
	// lis r27,-32184
	ctx.r27.s64 = -2109210624;
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lis r28,-32184
	ctx.r28.s64 = -2109210624;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r27,r27,32712
	ctx.r27.s64 = ctx.r27.s64 + 32712;
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r28,r28,32536
	ctx.r28.s64 = ctx.r28.s64 + 32536;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r29,-32184
	ctx.r29.s64 = -2109210624;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r30,-32184
	ctx.r30.s64 = -2109210624;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r31,-32184
	ctx.r31.s64 = -2109210624;
	// stw r7,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r7.u32);
	// lis r3,-32184
	ctx.r3.s64 = -2109210624;
	// stw r9,656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 656, ctx.r9.u32);
	// lis r4,-32184
	ctx.r4.s64 = -2109210624;
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lis r5,-32184
	ctx.r5.s64 = -2109210624;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r6,-32184
	ctx.r6.s64 = -2109210624;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r29,r29,32360
	ctx.r29.s64 = ctx.r29.s64 + 32360;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r30,r30,32184
	ctx.r30.s64 = ctx.r30.s64 + 32184;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r31,r31,32008
	ctx.r31.s64 = ctx.r31.s64 + 32008;
	// std r9,664(r11)
	PPC_STORE_U64(ctx.r11.u32 + 664, ctx.r9.u64);
	// addi r3,r3,31832
	ctx.r3.s64 = ctx.r3.s64 + 31832;
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// addi r4,r4,31656
	ctx.r4.s64 = ctx.r4.s64 + 31656;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r5,r5,31424
	ctx.r5.s64 = ctx.r5.s64 + 31424;
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r6,r6,31128
	ctx.r6.s64 = ctx.r6.s64 + 31128;
	// stw r10,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r10.u32);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r27,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r27.u32);
	// stw r7,676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 676, ctx.r7.u32);
	// stw r9,680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 680, ctx.r9.u32);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r28,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r28.u32);
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// stw r30,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r30.u32);
	// stw r31,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r31.u32);
	// std r9,688(r11)
	PPC_STORE_U64(ctx.r11.u32 + 688, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// stw r3,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r3.u32);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r4,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r4.u32);
	// stw r5,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r5.u32);
	// stw r6,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r6.u32);
	// stw r7,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r7.u32);
	// lis r7,-32184
	ctx.r7.s64 = -2109210624;
	// stw r9,704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 704, ctx.r9.u32);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// addi r7,r7,30952
	ctx.r7.s64 = ctx.r7.s64 + 30952;
	// std r9,712(r11)
	PPC_STORE_U64(ctx.r11.u32 + 712, ctx.r9.u64);
	// addi r9,r8,-32600
	ctx.r9.s64 = ctx.r8.s64 + -32600;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r7.u32);
	// addi r8,r8,30736
	ctx.r8.s64 = ctx.r8.s64 + 30736;
	// stw r9,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// addi r9,r9,30592
	ctx.r9.s64 = ctx.r9.s64 + 30592;
	// stw r8,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r8.u32);
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 724, ctx.r9.u32);
	// stw r10,728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 728, ctx.r10.u32);
	// ld r10,-184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r10,736(r11)
	PPC_STORE_U64(ctx.r11.u32 + 736, ctx.r10.u64);
	// ld r10,-200(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r9.u32);
	// stw r10,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r10.u32);
	// ld r10,-216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r10,760(r11)
	PPC_STORE_U64(ctx.r11.u32 + 760, ctx.r10.u64);
	// ld r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r9.u32);
	// stw r10,776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 776, ctx.r10.u32);
	// ld r10,-248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r10,784(r11)
	PPC_STORE_U64(ctx.r11.u32 + 784, ctx.r10.u64);
	// ld r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 796, ctx.r9.u32);
	// stw r10,800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 800, ctx.r10.u32);
	// ld r10,-272(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r10,808(r11)
	PPC_STORE_U64(ctx.r11.u32 + 808, ctx.r10.u64);
	// ld r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 820, ctx.r9.u32);
	// stw r10,824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 824, ctx.r10.u32);
	// ld r10,-280(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r10,832(r11)
	PPC_STORE_U64(ctx.r11.u32 + 832, ctx.r10.u64);
	// ld r10,-288(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 844, ctx.r9.u32);
	// stw r10,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r10.u32);
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r10,856(r11)
	PPC_STORE_U64(ctx.r11.u32 + 856, ctx.r10.u64);
	// ld r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r9,868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 868, ctx.r9.u32);
	// stw r10,872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 872, ctx.r10.u32);
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r10,880(r11)
	PPC_STORE_U64(ctx.r11.u32 + 880, ctx.r10.u64);
	// b 0x828d2840
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB458"))) PPC_WEAK_FUNC(sub_82ABB458);
PPC_FUNC_IMPL(__imp__sub_82ABB458) {
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
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,2576
	ctx.r5.s64 = ctx.r9.s64 + 2576;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,2632
	ctx.r4.s64 = ctx.r9.s64 + 2632;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-12864
	ctx.r31.s64 = ctx.r9.s64 + -12864;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABB4A8;
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
	// addi r3,r8,8752
	ctx.r3.s64 = ctx.r8.s64 + 8752;
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
	ctx.lr = 0x82ABB4D8;
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

__attribute__((alias("__imp__sub_82ABB4EC"))) PPC_WEAK_FUNC(sub_82ABB4EC);
PPC_FUNC_IMPL(__imp__sub_82ABB4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB4F0"))) PPC_WEAK_FUNC(sub_82ABB4F0);
PPC_FUNC_IMPL(__imp__sub_82ABB4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r11,-4916
	ctx.r3.s64 = ctx.r11.s64 + -4916;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8257a5a8
	ctx.lr = 0x82ABB514;
	sub_8257A5A8(ctx, base);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8832
	ctx.r3.s64 = ctx.r11.s64 + 8832;
	// bl 0x828d1968
	ctx.lr = 0x82ABB520;
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

__attribute__((alias("__imp__sub_82ABB530"))) PPC_WEAK_FUNC(sub_82ABB530);
PPC_FUNC_IMPL(__imp__sub_82ABB530) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82ABB538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,-12776
	ctx.r11.s64 = ctx.r11.s64 + -12776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r28,r11,2688
	ctx.r28.s64 = ctx.r11.s64 + 2688;
loc_82ABB558:
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x8257a3a0
	ctx.lr = 0x82ABB588;
	sub_8257A3A0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82abb558
	if (!cr6.lt) goto loc_82ABB558;
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8872
	ctx.r3.s64 = ctx.r11.s64 + 8872;
	// bl 0x828d1968
	ctx.lr = 0x82ABB5A4;
	sub_828D1968(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB5AC"))) PPC_WEAK_FUNC(sub_82ABB5AC);
PPC_FUNC_IMPL(__imp__sub_82ABB5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB5B0"))) PPC_WEAK_FUNC(sub_82ABB5B0);
PPC_FUNC_IMPL(__imp__sub_82ABB5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8960
	ctx.r3.s64 = ctx.r11.s64 + 8960;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB5BC"))) PPC_WEAK_FUNC(sub_82ABB5BC);
PPC_FUNC_IMPL(__imp__sub_82ABB5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB5C0"))) PPC_WEAK_FUNC(sub_82ABB5C0);
PPC_FUNC_IMPL(__imp__sub_82ABB5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,9192
	ctx.r3.s64 = ctx.r11.s64 + 9192;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB5CC"))) PPC_WEAK_FUNC(sub_82ABB5CC);
PPC_FUNC_IMPL(__imp__sub_82ABB5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB5D0"))) PPC_WEAK_FUNC(sub_82ABB5D0);
PPC_FUNC_IMPL(__imp__sub_82ABB5D0) {
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
	// addi r11,r11,-12672
	ctx.r11.s64 = ctx.r11.s64 + -12672;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB608"))) PPC_WEAK_FUNC(sub_82ABB608);
PPC_FUNC_IMPL(__imp__sub_82ABB608) {
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
	// addi r11,r11,-12688
	ctx.r11.s64 = ctx.r11.s64 + -12688;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB638"))) PPC_WEAK_FUNC(sub_82ABB638);
PPC_FUNC_IMPL(__imp__sub_82ABB638) {
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
	// addi r11,r11,-12640
	ctx.r11.s64 = ctx.r11.s64 + -12640;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB670"))) PPC_WEAK_FUNC(sub_82ABB670);
PPC_FUNC_IMPL(__imp__sub_82ABB670) {
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
	// addi r11,r11,-12656
	ctx.r11.s64 = ctx.r11.s64 + -12656;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB6A0"))) PPC_WEAK_FUNC(sub_82ABB6A0);
PPC_FUNC_IMPL(__imp__sub_82ABB6A0) {
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
	// addi r11,r11,-12272
	ctx.r11.s64 = ctx.r11.s64 + -12272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB6D8"))) PPC_WEAK_FUNC(sub_82ABB6D8);
PPC_FUNC_IMPL(__imp__sub_82ABB6D8) {
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
	// addi r11,r11,-12288
	ctx.r11.s64 = ctx.r11.s64 + -12288;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB708"))) PPC_WEAK_FUNC(sub_82ABB708);
PPC_FUNC_IMPL(__imp__sub_82ABB708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r3,r11,-12600
	ctx.r3.s64 = ctx.r11.s64 + -12600;
	// b 0x824a10d8
	sub_824A10D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB714"))) PPC_WEAK_FUNC(sub_82ABB714);
PPC_FUNC_IMPL(__imp__sub_82ABB714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB718"))) PPC_WEAK_FUNC(sub_82ABB718);
PPC_FUNC_IMPL(__imp__sub_82ABB718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-12624
	ctx.r11.s64 = ctx.r11.s64 + -12624;
	// lis r10,-32084
	ctx.r10.s64 = -2102657024;
	// addi r3,r10,9280
	ctx.r3.s64 = ctx.r10.s64 + 9280;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB738"))) PPC_WEAK_FUNC(sub_82ABB738);
PPC_FUNC_IMPL(__imp__sub_82ABB738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,9296
	ctx.r3.s64 = ctx.r11.s64 + 9296;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB744"))) PPC_WEAK_FUNC(sub_82ABB744);
PPC_FUNC_IMPL(__imp__sub_82ABB744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB748"))) PPC_WEAK_FUNC(sub_82ABB748);
PPC_FUNC_IMPL(__imp__sub_82ABB748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,9304
	ctx.r3.s64 = ctx.r11.s64 + 9304;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB754"))) PPC_WEAK_FUNC(sub_82ABB754);
PPC_FUNC_IMPL(__imp__sub_82ABB754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB758"))) PPC_WEAK_FUNC(sub_82ABB758);
PPC_FUNC_IMPL(__imp__sub_82ABB758) {
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
	// addi r11,r11,-12224
	ctx.r11.s64 = ctx.r11.s64 + -12224;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB790"))) PPC_WEAK_FUNC(sub_82ABB790);
PPC_FUNC_IMPL(__imp__sub_82ABB790) {
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
	// addi r11,r11,-12240
	ctx.r11.s64 = ctx.r11.s64 + -12240;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB7C0"))) PPC_WEAK_FUNC(sub_82ABB7C0);
PPC_FUNC_IMPL(__imp__sub_82ABB7C0) {
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
	// addi r11,r11,-12192
	ctx.r11.s64 = ctx.r11.s64 + -12192;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB7F8"))) PPC_WEAK_FUNC(sub_82ABB7F8);
PPC_FUNC_IMPL(__imp__sub_82ABB7F8) {
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
	// addi r11,r11,-12208
	ctx.r11.s64 = ctx.r11.s64 + -12208;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB828"))) PPC_WEAK_FUNC(sub_82ABB828);
PPC_FUNC_IMPL(__imp__sub_82ABB828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,-12176
	ctx.r3.s64 = ctx.r11.s64 + -12176;
	// b 0x824c4f68
	sub_824C4F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB838"))) PPC_WEAK_FUNC(sub_82ABB838);
PPC_FUNC_IMPL(__imp__sub_82ABB838) {
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
	// addi r11,r11,-11600
	ctx.r11.s64 = ctx.r11.s64 + -11600;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB870"))) PPC_WEAK_FUNC(sub_82ABB870);
PPC_FUNC_IMPL(__imp__sub_82ABB870) {
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
	// addi r11,r11,-11616
	ctx.r11.s64 = ctx.r11.s64 + -11616;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABB8A0"))) PPC_WEAK_FUNC(sub_82ABB8A0);
PPC_FUNC_IMPL(__imp__sub_82ABB8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,15600
	ctx.r4.s64 = ctx.r10.s64 + 15600;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,10176
	ctx.r5.s64 = ctx.r11.s64 + 10176;
	// addi r3,r10,-11584
	ctx.r3.s64 = ctx.r10.s64 + -11584;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB8BC"))) PPC_WEAK_FUNC(sub_82ABB8BC);
PPC_FUNC_IMPL(__imp__sub_82ABB8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB8C0"))) PPC_WEAK_FUNC(sub_82ABB8C0);
PPC_FUNC_IMPL(__imp__sub_82ABB8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,15672
	ctx.r4.s64 = ctx.r10.s64 + 15672;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,10496
	ctx.r5.s64 = ctx.r11.s64 + 10496;
	// addi r3,r10,-11576
	ctx.r3.s64 = ctx.r10.s64 + -11576;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB8DC"))) PPC_WEAK_FUNC(sub_82ABB8DC);
PPC_FUNC_IMPL(__imp__sub_82ABB8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB8E0"))) PPC_WEAK_FUNC(sub_82ABB8E0);
PPC_FUNC_IMPL(__imp__sub_82ABB8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,15740
	ctx.r4.s64 = ctx.r10.s64 + 15740;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,10688
	ctx.r5.s64 = ctx.r11.s64 + 10688;
	// addi r3,r10,-11568
	ctx.r3.s64 = ctx.r10.s64 + -11568;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB8FC"))) PPC_WEAK_FUNC(sub_82ABB8FC);
PPC_FUNC_IMPL(__imp__sub_82ABB8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB900"))) PPC_WEAK_FUNC(sub_82ABB900);
PPC_FUNC_IMPL(__imp__sub_82ABB900) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,15808
	ctx.r4.s64 = ctx.r10.s64 + 15808;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,10808
	ctx.r5.s64 = ctx.r11.s64 + 10808;
	// addi r3,r10,-11560
	ctx.r3.s64 = ctx.r10.s64 + -11560;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB91C"))) PPC_WEAK_FUNC(sub_82ABB91C);
PPC_FUNC_IMPL(__imp__sub_82ABB91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB920"))) PPC_WEAK_FUNC(sub_82ABB920);
PPC_FUNC_IMPL(__imp__sub_82ABB920) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,15880
	ctx.r4.s64 = ctx.r10.s64 + 15880;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,10928
	ctx.r5.s64 = ctx.r11.s64 + 10928;
	// addi r3,r10,-11552
	ctx.r3.s64 = ctx.r10.s64 + -11552;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB93C"))) PPC_WEAK_FUNC(sub_82ABB93C);
PPC_FUNC_IMPL(__imp__sub_82ABB93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB940"))) PPC_WEAK_FUNC(sub_82ABB940);
PPC_FUNC_IMPL(__imp__sub_82ABB940) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,15968
	ctx.r4.s64 = ctx.r10.s64 + 15968;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,11360
	ctx.r5.s64 = ctx.r11.s64 + 11360;
	// addi r3,r10,-11544
	ctx.r3.s64 = ctx.r10.s64 + -11544;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB95C"))) PPC_WEAK_FUNC(sub_82ABB95C);
PPC_FUNC_IMPL(__imp__sub_82ABB95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB960"))) PPC_WEAK_FUNC(sub_82ABB960);
PPC_FUNC_IMPL(__imp__sub_82ABB960) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16056
	ctx.r4.s64 = ctx.r10.s64 + 16056;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,11808
	ctx.r5.s64 = ctx.r11.s64 + 11808;
	// addi r3,r10,-11536
	ctx.r3.s64 = ctx.r10.s64 + -11536;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB97C"))) PPC_WEAK_FUNC(sub_82ABB97C);
PPC_FUNC_IMPL(__imp__sub_82ABB97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB980"))) PPC_WEAK_FUNC(sub_82ABB980);
PPC_FUNC_IMPL(__imp__sub_82ABB980) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16144
	ctx.r4.s64 = ctx.r10.s64 + 16144;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,12288
	ctx.r5.s64 = ctx.r11.s64 + 12288;
	// addi r3,r10,-11528
	ctx.r3.s64 = ctx.r10.s64 + -11528;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB99C"))) PPC_WEAK_FUNC(sub_82ABB99C);
PPC_FUNC_IMPL(__imp__sub_82ABB99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB9A0"))) PPC_WEAK_FUNC(sub_82ABB9A0);
PPC_FUNC_IMPL(__imp__sub_82ABB9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16208
	ctx.r4.s64 = ctx.r10.s64 + 16208;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,12664
	ctx.r5.s64 = ctx.r11.s64 + 12664;
	// addi r3,r10,-11520
	ctx.r3.s64 = ctx.r10.s64 + -11520;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB9BC"))) PPC_WEAK_FUNC(sub_82ABB9BC);
PPC_FUNC_IMPL(__imp__sub_82ABB9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB9C0"))) PPC_WEAK_FUNC(sub_82ABB9C0);
PPC_FUNC_IMPL(__imp__sub_82ABB9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16288
	ctx.r4.s64 = ctx.r10.s64 + 16288;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,12856
	ctx.r5.s64 = ctx.r11.s64 + 12856;
	// addi r3,r10,-11512
	ctx.r3.s64 = ctx.r10.s64 + -11512;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB9DC"))) PPC_WEAK_FUNC(sub_82ABB9DC);
PPC_FUNC_IMPL(__imp__sub_82ABB9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABB9E0"))) PPC_WEAK_FUNC(sub_82ABB9E0);
PPC_FUNC_IMPL(__imp__sub_82ABB9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16368
	ctx.r4.s64 = ctx.r10.s64 + 16368;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,13824
	ctx.r5.s64 = ctx.r11.s64 + 13824;
	// addi r3,r10,-11504
	ctx.r3.s64 = ctx.r10.s64 + -11504;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABB9FC"))) PPC_WEAK_FUNC(sub_82ABB9FC);
PPC_FUNC_IMPL(__imp__sub_82ABB9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBA00"))) PPC_WEAK_FUNC(sub_82ABBA00);
PPC_FUNC_IMPL(__imp__sub_82ABBA00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16440
	ctx.r4.s64 = ctx.r10.s64 + 16440;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,14256
	ctx.r5.s64 = ctx.r11.s64 + 14256;
	// addi r3,r10,-11496
	ctx.r3.s64 = ctx.r10.s64 + -11496;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABBA1C"))) PPC_WEAK_FUNC(sub_82ABBA1C);
PPC_FUNC_IMPL(__imp__sub_82ABBA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBA20"))) PPC_WEAK_FUNC(sub_82ABBA20);
PPC_FUNC_IMPL(__imp__sub_82ABBA20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16520
	ctx.r4.s64 = ctx.r10.s64 + 16520;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,14776
	ctx.r5.s64 = ctx.r11.s64 + 14776;
	// addi r3,r10,-11488
	ctx.r3.s64 = ctx.r10.s64 + -11488;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABBA3C"))) PPC_WEAK_FUNC(sub_82ABBA3C);
PPC_FUNC_IMPL(__imp__sub_82ABBA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBA40"))) PPC_WEAK_FUNC(sub_82ABBA40);
PPC_FUNC_IMPL(__imp__sub_82ABBA40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16580
	ctx.r4.s64 = ctx.r10.s64 + 16580;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,15056
	ctx.r5.s64 = ctx.r11.s64 + 15056;
	// addi r3,r10,-11480
	ctx.r3.s64 = ctx.r10.s64 + -11480;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABBA5C"))) PPC_WEAK_FUNC(sub_82ABBA5C);
PPC_FUNC_IMPL(__imp__sub_82ABBA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBA60"))) PPC_WEAK_FUNC(sub_82ABBA60);
PPC_FUNC_IMPL(__imp__sub_82ABBA60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16640
	ctx.r4.s64 = ctx.r10.s64 + 16640;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,15632
	ctx.r5.s64 = ctx.r11.s64 + 15632;
	// addi r3,r10,-11472
	ctx.r3.s64 = ctx.r10.s64 + -11472;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABBA7C"))) PPC_WEAK_FUNC(sub_82ABBA7C);
PPC_FUNC_IMPL(__imp__sub_82ABBA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBA80"))) PPC_WEAK_FUNC(sub_82ABBA80);
PPC_FUNC_IMPL(__imp__sub_82ABBA80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16704
	ctx.r4.s64 = ctx.r10.s64 + 16704;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,16456
	ctx.r5.s64 = ctx.r11.s64 + 16456;
	// addi r3,r10,-11464
	ctx.r3.s64 = ctx.r10.s64 + -11464;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABBA9C"))) PPC_WEAK_FUNC(sub_82ABBA9C);
PPC_FUNC_IMPL(__imp__sub_82ABBA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBAA0"))) PPC_WEAK_FUNC(sub_82ABBAA0);
PPC_FUNC_IMPL(__imp__sub_82ABBAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16768
	ctx.r4.s64 = ctx.r10.s64 + 16768;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,16840
	ctx.r5.s64 = ctx.r11.s64 + 16840;
	// addi r3,r10,-11456
	ctx.r3.s64 = ctx.r10.s64 + -11456;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABBABC"))) PPC_WEAK_FUNC(sub_82ABBABC);
PPC_FUNC_IMPL(__imp__sub_82ABBABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBAC0"))) PPC_WEAK_FUNC(sub_82ABBAC0);
PPC_FUNC_IMPL(__imp__sub_82ABBAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16832
	ctx.r4.s64 = ctx.r10.s64 + 16832;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,17224
	ctx.r5.s64 = ctx.r11.s64 + 17224;
	// addi r3,r10,-11448
	ctx.r3.s64 = ctx.r10.s64 + -11448;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABBADC"))) PPC_WEAK_FUNC(sub_82ABBADC);
PPC_FUNC_IMPL(__imp__sub_82ABBADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBAE0"))) PPC_WEAK_FUNC(sub_82ABBAE0);
PPC_FUNC_IMPL(__imp__sub_82ABBAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r4,r10,16896
	ctx.r4.s64 = ctx.r10.s64 + 16896;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r5,r11,17776
	ctx.r5.s64 = ctx.r11.s64 + 17776;
	// addi r3,r10,-11440
	ctx.r3.s64 = ctx.r10.s64 + -11440;
	// b 0x82501f00
	sub_82501F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABBAFC"))) PPC_WEAK_FUNC(sub_82ABBAFC);
PPC_FUNC_IMPL(__imp__sub_82ABBAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBB00"))) PPC_WEAK_FUNC(sub_82ABBB00);
PPC_FUNC_IMPL(__imp__sub_82ABBB00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,27596
	ctx.r4.s64 = ctx.r11.s64 + 27596;
	// bl 0x82316b80
	ctx.lr = 0x82ABBB1C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-11432(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11432, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABBB34"))) PPC_WEAK_FUNC(sub_82ABBB34);
PPC_FUNC_IMPL(__imp__sub_82ABBB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBB38"))) PPC_WEAK_FUNC(sub_82ABBB38);
PPC_FUNC_IMPL(__imp__sub_82ABBB38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,27600
	ctx.r4.s64 = ctx.r11.s64 + 27600;
	// bl 0x82316b80
	ctx.lr = 0x82ABBB54;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-11431(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11431, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABBB6C"))) PPC_WEAK_FUNC(sub_82ABBB6C);
PPC_FUNC_IMPL(__imp__sub_82ABBB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBB70"))) PPC_WEAK_FUNC(sub_82ABBB70);
PPC_FUNC_IMPL(__imp__sub_82ABBB70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,27604
	ctx.r4.s64 = ctx.r11.s64 + 27604;
	// bl 0x82316b80
	ctx.lr = 0x82ABBB8C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-11430(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11430, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABBBA4"))) PPC_WEAK_FUNC(sub_82ABBBA4);
PPC_FUNC_IMPL(__imp__sub_82ABBBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBBA8"))) PPC_WEAK_FUNC(sub_82ABBBA8);
PPC_FUNC_IMPL(__imp__sub_82ABBBA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,27608
	ctx.r4.s64 = ctx.r11.s64 + 27608;
	// bl 0x82316b80
	ctx.lr = 0x82ABBBC4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-11429(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11429, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABBBDC"))) PPC_WEAK_FUNC(sub_82ABBBDC);
PPC_FUNC_IMPL(__imp__sub_82ABBBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBBE0"))) PPC_WEAK_FUNC(sub_82ABBBE0);
PPC_FUNC_IMPL(__imp__sub_82ABBBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,9440
	ctx.r3.s64 = ctx.r11.s64 + 9440;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABBBEC"))) PPC_WEAK_FUNC(sub_82ABBBEC);
PPC_FUNC_IMPL(__imp__sub_82ABBBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBBF0"))) PPC_WEAK_FUNC(sub_82ABBBF0);
PPC_FUNC_IMPL(__imp__sub_82ABBBF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,27592
	ctx.r4.s64 = ctx.r11.s64 + 27592;
	// bl 0x82316b80
	ctx.lr = 0x82ABBC0C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-11416(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11416, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABBC24"))) PPC_WEAK_FUNC(sub_82ABBC24);
PPC_FUNC_IMPL(__imp__sub_82ABBC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBC28"))) PPC_WEAK_FUNC(sub_82ABBC28);
PPC_FUNC_IMPL(__imp__sub_82ABBC28) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,28548
	ctx.r5.s64 = ctx.r9.s64 + 28548;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,28592
	ctx.r4.s64 = ctx.r9.s64 + 28592;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,329
	ctx.r8.s64 = 329;
	// addi r31,r9,-11412
	ctx.r31.s64 = ctx.r9.s64 + -11412;
	// addi r9,r11,4056
	ctx.r9.s64 = ctx.r11.s64 + 4056;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABBC78;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,9544
	ctx.r3.s64 = ctx.r8.s64 + 9544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4224
	ctx.r11.s64 = ctx.r9.s64 + 4224;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABBCA8;
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

__attribute__((alias("__imp__sub_82ABBCBC"))) PPC_WEAK_FUNC(sub_82ABBCBC);
PPC_FUNC_IMPL(__imp__sub_82ABBCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBCC0"))) PPC_WEAK_FUNC(sub_82ABBCC0);
PPC_FUNC_IMPL(__imp__sub_82ABBCC0) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,28640
	ctx.r5.s64 = ctx.r9.s64 + 28640;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,28688
	ctx.r4.s64 = ctx.r9.s64 + 28688;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-11324
	ctx.r31.s64 = ctx.r9.s64 + -11324;
	// addi r9,r11,-144
	ctx.r9.s64 = ctx.r11.s64 + -144;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABBD10;
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
	// addi r3,r8,9624
	ctx.r3.s64 = ctx.r8.s64 + 9624;
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
	ctx.lr = 0x82ABBD40;
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

__attribute__((alias("__imp__sub_82ABBD54"))) PPC_WEAK_FUNC(sub_82ABBD54);
PPC_FUNC_IMPL(__imp__sub_82ABBD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBD58"))) PPC_WEAK_FUNC(sub_82ABBD58);
PPC_FUNC_IMPL(__imp__sub_82ABBD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,9704
	ctx.r3.s64 = ctx.r11.s64 + 9704;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABBD64"))) PPC_WEAK_FUNC(sub_82ABBD64);
PPC_FUNC_IMPL(__imp__sub_82ABBD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBD68"))) PPC_WEAK_FUNC(sub_82ABBD68);
PPC_FUNC_IMPL(__imp__sub_82ABBD68) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,30264
	ctx.r5.s64 = ctx.r9.s64 + 30264;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,30328
	ctx.r4.s64 = ctx.r9.s64 + 30328;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,12704
	ctx.r31.s64 = ctx.r9.s64 + 12704;
	// addi r9,r11,23208
	ctx.r9.s64 = ctx.r11.s64 + 23208;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABBDB8;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,9936
	ctx.r3.s64 = ctx.r8.s64 + 9936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22352
	ctx.r11.s64 = ctx.r9.s64 + 22352;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,22552
	ctx.r11.s64 = ctx.r10.s64 + 22552;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABBDE8;
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

__attribute__((alias("__imp__sub_82ABBDFC"))) PPC_WEAK_FUNC(sub_82ABBDFC);
PPC_FUNC_IMPL(__imp__sub_82ABBDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBE00"))) PPC_WEAK_FUNC(sub_82ABBE00);
PPC_FUNC_IMPL(__imp__sub_82ABBE00) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,30520
	ctx.r5.s64 = ctx.r9.s64 + 30520;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,30576
	ctx.r4.s64 = ctx.r9.s64 + 30576;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,12616
	ctx.r31.s64 = ctx.r9.s64 + 12616;
	// addi r9,r11,9568
	ctx.r9.s64 = ctx.r11.s64 + 9568;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABBE50;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10016
	ctx.r3.s64 = ctx.r8.s64 + 10016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23392
	ctx.r11.s64 = ctx.r9.s64 + 23392;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,22552
	ctx.r11.s64 = ctx.r10.s64 + 22552;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABBE80;
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

__attribute__((alias("__imp__sub_82ABBE94"))) PPC_WEAK_FUNC(sub_82ABBE94);
PPC_FUNC_IMPL(__imp__sub_82ABBE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBE98"))) PPC_WEAK_FUNC(sub_82ABBE98);
PPC_FUNC_IMPL(__imp__sub_82ABBE98) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,30264
	ctx.r5.s64 = ctx.r9.s64 + 30264;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,-20616
	ctx.r10.s64 = ctx.r10.s64 + -20616;
	// addi r4,r9,30768
	ctx.r4.s64 = ctx.r9.s64 + 30768;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,12528
	ctx.r31.s64 = ctx.r9.s64 + 12528;
	// addi r9,r11,-21472
	ctx.r9.s64 = ctx.r11.s64 + -21472;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABBEE8;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10096
	ctx.r3.s64 = ctx.r8.s64 + 10096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22664
	ctx.r11.s64 = ctx.r9.s64 + 22664;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABBF18;
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

__attribute__((alias("__imp__sub_82ABBF2C"))) PPC_WEAK_FUNC(sub_82ABBF2C);
PPC_FUNC_IMPL(__imp__sub_82ABBF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBF30"))) PPC_WEAK_FUNC(sub_82ABBF30);
PPC_FUNC_IMPL(__imp__sub_82ABBF30) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,30520
	ctx.r5.s64 = ctx.r9.s64 + 30520;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,-20616
	ctx.r10.s64 = ctx.r10.s64 + -20616;
	// addi r4,r9,30952
	ctx.r4.s64 = ctx.r9.s64 + 30952;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,12440
	ctx.r31.s64 = ctx.r9.s64 + 12440;
	// addi r9,r11,22896
	ctx.r9.s64 = ctx.r11.s64 + 22896;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABBF80;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10176
	ctx.r3.s64 = ctx.r8.s64 + 10176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23112
	ctx.r11.s64 = ctx.r9.s64 + 23112;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABBFB0;
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

__attribute__((alias("__imp__sub_82ABBFC4"))) PPC_WEAK_FUNC(sub_82ABBFC4);
PPC_FUNC_IMPL(__imp__sub_82ABBFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABBFC8"))) PPC_WEAK_FUNC(sub_82ABBFC8);
PPC_FUNC_IMPL(__imp__sub_82ABBFC8) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r5,r9,30264
	ctx.r5.s64 = ctx.r9.s64 + 30264;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,23384
	ctx.r10.s64 = ctx.r10.s64 + 23384;
	// addi r4,r9,31136
	ctx.r4.s64 = ctx.r9.s64 + 31136;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,12352
	ctx.r31.s64 = ctx.r9.s64 + 12352;
	// addi r9,r11,23208
	ctx.r9.s64 = ctx.r11.s64 + 23208;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC018;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10256
	ctx.r3.s64 = ctx.r8.s64 + 10256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22352
	ctx.r11.s64 = ctx.r9.s64 + 22352;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC048;
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

__attribute__((alias("__imp__sub_82ABC05C"))) PPC_WEAK_FUNC(sub_82ABC05C);
PPC_FUNC_IMPL(__imp__sub_82ABC05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC060"))) PPC_WEAK_FUNC(sub_82ABC060);
PPC_FUNC_IMPL(__imp__sub_82ABC060) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r5,r9,30520
	ctx.r5.s64 = ctx.r9.s64 + 30520;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,23384
	ctx.r10.s64 = ctx.r10.s64 + 23384;
	// addi r4,r9,31328
	ctx.r4.s64 = ctx.r9.s64 + 31328;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,12264
	ctx.r31.s64 = ctx.r9.s64 + 12264;
	// addi r9,r11,9568
	ctx.r9.s64 = ctx.r11.s64 + 9568;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC0B0;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10336
	ctx.r3.s64 = ctx.r8.s64 + 10336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23392
	ctx.r11.s64 = ctx.r9.s64 + 23392;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC0E0;
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

__attribute__((alias("__imp__sub_82ABC0F4"))) PPC_WEAK_FUNC(sub_82ABC0F4);
PPC_FUNC_IMPL(__imp__sub_82ABC0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC0F8"))) PPC_WEAK_FUNC(sub_82ABC0F8);
PPC_FUNC_IMPL(__imp__sub_82ABC0F8) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r5,r9,31520
	ctx.r5.s64 = ctx.r9.s64 + 31520;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,23800
	ctx.r10.s64 = ctx.r10.s64 + 23800;
	// addi r4,r9,31584
	ctx.r4.s64 = ctx.r9.s64 + 31584;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,346
	ctx.r8.s64 = 346;
	// addi r31,r9,12176
	ctx.r31.s64 = ctx.r9.s64 + 12176;
	// addi r9,r11,23488
	ctx.r9.s64 = ctx.r11.s64 + 23488;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC148;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10416
	ctx.r3.s64 = ctx.r8.s64 + 10416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23680
	ctx.r11.s64 = ctx.r9.s64 + 23680;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC178;
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

__attribute__((alias("__imp__sub_82ABC18C"))) PPC_WEAK_FUNC(sub_82ABC18C);
PPC_FUNC_IMPL(__imp__sub_82ABC18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC190"))) PPC_WEAK_FUNC(sub_82ABC190);
PPC_FUNC_IMPL(__imp__sub_82ABC190) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r5,r9,31704
	ctx.r5.s64 = ctx.r9.s64 + 31704;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,24112
	ctx.r10.s64 = ctx.r10.s64 + 24112;
	// addi r4,r9,31780
	ctx.r4.s64 = ctx.r9.s64 + 31780;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,12088
	ctx.r31.s64 = ctx.r9.s64 + 12088;
	// addi r9,r11,23864
	ctx.r9.s64 = ctx.r11.s64 + 23864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC1E0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10496
	ctx.r3.s64 = ctx.r8.s64 + 10496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23992
	ctx.r11.s64 = ctx.r9.s64 + 23992;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC210;
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

__attribute__((alias("__imp__sub_82ABC224"))) PPC_WEAK_FUNC(sub_82ABC224);
PPC_FUNC_IMPL(__imp__sub_82ABC224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC228"))) PPC_WEAK_FUNC(sub_82ABC228);
PPC_FUNC_IMPL(__imp__sub_82ABC228) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r5,r9,31704
	ctx.r5.s64 = ctx.r9.s64 + 31704;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,27360
	ctx.r10.s64 = ctx.r10.s64 + 27360;
	// addi r4,r9,31836
	ctx.r4.s64 = ctx.r9.s64 + 31836;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,12000
	ctx.r31.s64 = ctx.r9.s64 + 12000;
	// addi r9,r11,27112
	ctx.r9.s64 = ctx.r11.s64 + 27112;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC278;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10576
	ctx.r3.s64 = ctx.r8.s64 + 10576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,27240
	ctx.r11.s64 = ctx.r9.s64 + 27240;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC2A8;
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

__attribute__((alias("__imp__sub_82ABC2BC"))) PPC_WEAK_FUNC(sub_82ABC2BC);
PPC_FUNC_IMPL(__imp__sub_82ABC2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC2C0"))) PPC_WEAK_FUNC(sub_82ABC2C0);
PPC_FUNC_IMPL(__imp__sub_82ABC2C0) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r5,r9,31704
	ctx.r5.s64 = ctx.r9.s64 + 31704;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,30608
	ctx.r10.s64 = ctx.r10.s64 + 30608;
	// addi r4,r9,31896
	ctx.r4.s64 = ctx.r9.s64 + 31896;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,11912
	ctx.r31.s64 = ctx.r9.s64 + 11912;
	// addi r9,r11,30360
	ctx.r9.s64 = ctx.r11.s64 + 30360;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC310;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10656
	ctx.r3.s64 = ctx.r8.s64 + 10656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30488
	ctx.r11.s64 = ctx.r9.s64 + 30488;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC340;
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

__attribute__((alias("__imp__sub_82ABC354"))) PPC_WEAK_FUNC(sub_82ABC354);
PPC_FUNC_IMPL(__imp__sub_82ABC354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC358"))) PPC_WEAK_FUNC(sub_82ABC358);
PPC_FUNC_IMPL(__imp__sub_82ABC358) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r5,r9,31952
	ctx.r5.s64 = ctx.r9.s64 + 31952;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,-31624
	ctx.r10.s64 = ctx.r10.s64 + -31624;
	// addi r4,r9,32008
	ctx.r4.s64 = ctx.r9.s64 + 32008;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,346
	ctx.r8.s64 = 346;
	// addi r31,r9,11824
	ctx.r31.s64 = ctx.r9.s64 + 11824;
	// addi r9,r11,-31928
	ctx.r9.s64 = ctx.r11.s64 + -31928;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC3A8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10736
	ctx.r3.s64 = ctx.r8.s64 + 10736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-31744
	ctx.r11.s64 = ctx.r9.s64 + -31744;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC3D8;
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

__attribute__((alias("__imp__sub_82ABC3EC"))) PPC_WEAK_FUNC(sub_82ABC3EC);
PPC_FUNC_IMPL(__imp__sub_82ABC3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC3F0"))) PPC_WEAK_FUNC(sub_82ABC3F0);
PPC_FUNC_IMPL(__imp__sub_82ABC3F0) {
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
	// addi r5,r9,-29260
	ctx.r5.s64 = ctx.r9.s64 + -29260;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-27040
	ctx.r10.s64 = ctx.r10.s64 + -27040;
	// addi r4,r9,-29200
	ctx.r4.s64 = ctx.r9.s64 + -29200;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,353
	ctx.r8.s64 = 353;
	// addi r31,r9,-11228
	ctx.r31.s64 = ctx.r9.s64 + -11228;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC440;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,10960
	ctx.r3.s64 = ctx.r8.s64 + 10960;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-440
	ctx.r11.s64 = ctx.r9.s64 + -440;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC470;
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

__attribute__((alias("__imp__sub_82ABC484"))) PPC_WEAK_FUNC(sub_82ABC484);
PPC_FUNC_IMPL(__imp__sub_82ABC484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC488"))) PPC_WEAK_FUNC(sub_82ABC488);
PPC_FUNC_IMPL(__imp__sub_82ABC488) {
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
	// addi r5,r9,-29112
	ctx.r5.s64 = ctx.r9.s64 + -29112;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-27040
	ctx.r10.s64 = ctx.r10.s64 + -27040;
	// addi r4,r9,-29052
	ctx.r4.s64 = ctx.r9.s64 + -29052;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,373
	ctx.r8.s64 = 373;
	// addi r31,r9,-11140
	ctx.r31.s64 = ctx.r9.s64 + -11140;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC4D8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,11040
	ctx.r3.s64 = ctx.r8.s64 + 11040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-88
	ctx.r11.s64 = ctx.r9.s64 + -88;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC508;
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

__attribute__((alias("__imp__sub_82ABC51C"))) PPC_WEAK_FUNC(sub_82ABC51C);
PPC_FUNC_IMPL(__imp__sub_82ABC51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC520"))) PPC_WEAK_FUNC(sub_82ABC520);
PPC_FUNC_IMPL(__imp__sub_82ABC520) {
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
	// addi r5,r9,-28988
	ctx.r5.s64 = ctx.r9.s64 + -28988;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-28932
	ctx.r4.s64 = ctx.r9.s64 + -28932;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,329
	ctx.r8.s64 = 329;
	// addi r31,r9,-11052
	ctx.r31.s64 = ctx.r9.s64 + -11052;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC570;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,11120
	ctx.r3.s64 = ctx.r8.s64 + 11120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,248
	ctx.r11.s64 = ctx.r9.s64 + 248;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC5A0;
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

__attribute__((alias("__imp__sub_82ABC5B4"))) PPC_WEAK_FUNC(sub_82ABC5B4);
PPC_FUNC_IMPL(__imp__sub_82ABC5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC5B8"))) PPC_WEAK_FUNC(sub_82ABC5B8);
PPC_FUNC_IMPL(__imp__sub_82ABC5B8) {
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
	// addi r5,r9,-28820
	ctx.r5.s64 = ctx.r9.s64 + -28820;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-28760
	ctx.r4.s64 = ctx.r9.s64 + -28760;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,373
	ctx.r8.s64 = 373;
	// addi r31,r9,-10964
	ctx.r31.s64 = ctx.r9.s64 + -10964;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC608;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,11200
	ctx.r3.s64 = ctx.r8.s64 + 11200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,344
	ctx.r11.s64 = ctx.r9.s64 + 344;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC638;
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

__attribute__((alias("__imp__sub_82ABC64C"))) PPC_WEAK_FUNC(sub_82ABC64C);
PPC_FUNC_IMPL(__imp__sub_82ABC64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC650"))) PPC_WEAK_FUNC(sub_82ABC650);
PPC_FUNC_IMPL(__imp__sub_82ABC650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,11280
	ctx.r3.s64 = ctx.r11.s64 + 11280;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABC65C"))) PPC_WEAK_FUNC(sub_82ABC65C);
PPC_FUNC_IMPL(__imp__sub_82ABC65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC660"))) PPC_WEAK_FUNC(sub_82ABC660);
PPC_FUNC_IMPL(__imp__sub_82ABC660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,11296
	ctx.r3.s64 = ctx.r11.s64 + 11296;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABC66C"))) PPC_WEAK_FUNC(sub_82ABC66C);
PPC_FUNC_IMPL(__imp__sub_82ABC66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC670"))) PPC_WEAK_FUNC(sub_82ABC670);
PPC_FUNC_IMPL(__imp__sub_82ABC670) {
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
	// addi r5,r9,-28124
	ctx.r5.s64 = ctx.r9.s64 + -28124;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-28072
	ctx.r4.s64 = ctx.r9.s64 + -28072;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-10860
	ctx.r31.s64 = ctx.r9.s64 + -10860;
	// addi r9,r11,-248
	ctx.r9.s64 = ctx.r11.s64 + -248;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC6C0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,11456
	ctx.r3.s64 = ctx.r8.s64 + 11456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5320
	ctx.r11.s64 = ctx.r9.s64 + 5320;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC6F0;
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

__attribute__((alias("__imp__sub_82ABC704"))) PPC_WEAK_FUNC(sub_82ABC704);
PPC_FUNC_IMPL(__imp__sub_82ABC704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC708"))) PPC_WEAK_FUNC(sub_82ABC708);
PPC_FUNC_IMPL(__imp__sub_82ABC708) {
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
	// addi r5,r9,-27736
	ctx.r5.s64 = ctx.r9.s64 + -27736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-27688
	ctx.r4.s64 = ctx.r9.s64 + -27688;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,329
	ctx.r8.s64 = 329;
	// addi r31,r9,-10772
	ctx.r31.s64 = ctx.r9.s64 + -10772;
	// addi r9,r11,5808
	ctx.r9.s64 = ctx.r11.s64 + 5808;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC758;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,11536
	ctx.r3.s64 = ctx.r8.s64 + 11536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6008
	ctx.r11.s64 = ctx.r9.s64 + 6008;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABC788;
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

__attribute__((alias("__imp__sub_82ABC79C"))) PPC_WEAK_FUNC(sub_82ABC79C);
PPC_FUNC_IMPL(__imp__sub_82ABC79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC7A0"))) PPC_WEAK_FUNC(sub_82ABC7A0);
PPC_FUNC_IMPL(__imp__sub_82ABC7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,11616
	ctx.r3.s64 = ctx.r11.s64 + 11616;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABC7AC"))) PPC_WEAK_FUNC(sub_82ABC7AC);
PPC_FUNC_IMPL(__imp__sub_82ABC7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC7B0"))) PPC_WEAK_FUNC(sub_82ABC7B0);
PPC_FUNC_IMPL(__imp__sub_82ABC7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-10676
	ctx.r11.s64 = ctx.r11.s64 + -10676;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABC7D0"))) PPC_WEAK_FUNC(sub_82ABC7D0);
PPC_FUNC_IMPL(__imp__sub_82ABC7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-10660
	ctx.r11.s64 = ctx.r11.s64 + -10660;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABC7F0"))) PPC_WEAK_FUNC(sub_82ABC7F0);
PPC_FUNC_IMPL(__imp__sub_82ABC7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-10644
	ctx.r11.s64 = ctx.r11.s64 + -10644;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABC810"))) PPC_WEAK_FUNC(sub_82ABC810);
PPC_FUNC_IMPL(__imp__sub_82ABC810) {
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
	// addi r11,r11,-10608
	ctx.r11.s64 = ctx.r11.s64 + -10608;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABC848"))) PPC_WEAK_FUNC(sub_82ABC848);
PPC_FUNC_IMPL(__imp__sub_82ABC848) {
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
	// addi r11,r11,-10624
	ctx.r11.s64 = ctx.r11.s64 + -10624;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABC878"))) PPC_WEAK_FUNC(sub_82ABC878);
PPC_FUNC_IMPL(__imp__sub_82ABC878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABC884"))) PPC_WEAK_FUNC(sub_82ABC884);
PPC_FUNC_IMPL(__imp__sub_82ABC884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC888"))) PPC_WEAK_FUNC(sub_82ABC888);
PPC_FUNC_IMPL(__imp__sub_82ABC888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,11704
	ctx.r3.s64 = ctx.r11.s64 + 11704;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABC894"))) PPC_WEAK_FUNC(sub_82ABC894);
PPC_FUNC_IMPL(__imp__sub_82ABC894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC898"))) PPC_WEAK_FUNC(sub_82ABC898);
PPC_FUNC_IMPL(__imp__sub_82ABC898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f0,16280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,24844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24844);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,10812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10812);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// fsqrts f10,f0
	ctx.f10.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r11,r11,-21776
	ctx.r11.s64 = ctx.r11.s64 + -21776;
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,-9264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9264);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// lfs f11,24848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24848);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fdivs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABC920"))) PPC_WEAK_FUNC(sub_82ABC920);
PPC_FUNC_IMPL(__imp__sub_82ABC920) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r6,r9,-17760
	ctx.r6.s64 = ctx.r9.s64 + -17760;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,-18160
	ctx.r5.s64 = ctx.r9.s64 + -18160;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-18124
	ctx.r4.s64 = ctx.r9.s64 + -18124;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,338
	ctx.r8.s64 = 338;
	// addi r31,r9,-10592
	ctx.r31.s64 = ctx.r9.s64 + -10592;
	// addi r9,r11,-144
	ctx.r9.s64 = ctx.r11.s64 + -144;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABC970;
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
	// addi r3,r8,11776
	ctx.r3.s64 = ctx.r8.s64 + 11776;
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
	ctx.lr = 0x82ABC9A0;
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

__attribute__((alias("__imp__sub_82ABC9B4"))) PPC_WEAK_FUNC(sub_82ABC9B4);
PPC_FUNC_IMPL(__imp__sub_82ABC9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC9B8"))) PPC_WEAK_FUNC(sub_82ABC9B8);
PPC_FUNC_IMPL(__imp__sub_82ABC9B8) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r6,r9,-17732
	ctx.r6.s64 = ctx.r9.s64 + -17732;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,-18160
	ctx.r5.s64 = ctx.r9.s64 + -18160;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-17856
	ctx.r4.s64 = ctx.r9.s64 + -17856;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,338
	ctx.r8.s64 = 338;
	// addi r31,r9,-10504
	ctx.r31.s64 = ctx.r9.s64 + -10504;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCA08;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,11856
	ctx.r3.s64 = ctx.r8.s64 + 11856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,216
	ctx.r11.s64 = ctx.r9.s64 + 216;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABCA38;
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

__attribute__((alias("__imp__sub_82ABCA4C"))) PPC_WEAK_FUNC(sub_82ABCA4C);
PPC_FUNC_IMPL(__imp__sub_82ABCA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCA50"))) PPC_WEAK_FUNC(sub_82ABCA50);
PPC_FUNC_IMPL(__imp__sub_82ABCA50) {
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
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,-17264
	ctx.r5.s64 = ctx.r9.s64 + -17264;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-17216
	ctx.r4.s64 = ctx.r9.s64 + -17216;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,13672
	ctx.r31.s64 = ctx.r9.s64 + 13672;
	// addi r9,r11,23208
	ctx.r9.s64 = ctx.r11.s64 + 23208;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCAA0;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,11952
	ctx.r3.s64 = ctx.r8.s64 + 11952;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,10000
	ctx.r11.s64 = ctx.r9.s64 + 10000;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,22552
	ctx.r11.s64 = ctx.r10.s64 + 22552;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABCAD0;
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

__attribute__((alias("__imp__sub_82ABCAE4"))) PPC_WEAK_FUNC(sub_82ABCAE4);
PPC_FUNC_IMPL(__imp__sub_82ABCAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCAE8"))) PPC_WEAK_FUNC(sub_82ABCAE8);
PPC_FUNC_IMPL(__imp__sub_82ABCAE8) {
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
	// addi r5,r9,-17036
	ctx.r5.s64 = ctx.r9.s64 + -17036;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-16992
	ctx.r4.s64 = ctx.r9.s64 + -16992;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,13584
	ctx.r31.s64 = ctx.r9.s64 + 13584;
	// addi r9,r11,9568
	ctx.r9.s64 = ctx.r11.s64 + 9568;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCB38;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,12032
	ctx.r3.s64 = ctx.r8.s64 + 12032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,10200
	ctx.r11.s64 = ctx.r9.s64 + 10200;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,22552
	ctx.r11.s64 = ctx.r10.s64 + 22552;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABCB68;
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

__attribute__((alias("__imp__sub_82ABCB7C"))) PPC_WEAK_FUNC(sub_82ABCB7C);
PPC_FUNC_IMPL(__imp__sub_82ABCB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCB80"))) PPC_WEAK_FUNC(sub_82ABCB80);
PPC_FUNC_IMPL(__imp__sub_82ABCB80) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,-17264
	ctx.r5.s64 = ctx.r9.s64 + -17264;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-20616
	ctx.r10.s64 = ctx.r10.s64 + -20616;
	// addi r4,r9,-16816
	ctx.r4.s64 = ctx.r9.s64 + -16816;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,13496
	ctx.r31.s64 = ctx.r9.s64 + 13496;
	// addi r9,r11,-21472
	ctx.r9.s64 = ctx.r11.s64 + -21472;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCBD0;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,12112
	ctx.r3.s64 = ctx.r8.s64 + 12112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-21288
	ctx.r11.s64 = ctx.r9.s64 + -21288;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABCC00;
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

__attribute__((alias("__imp__sub_82ABCC14"))) PPC_WEAK_FUNC(sub_82ABCC14);
PPC_FUNC_IMPL(__imp__sub_82ABCC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCC18"))) PPC_WEAK_FUNC(sub_82ABCC18);
PPC_FUNC_IMPL(__imp__sub_82ABCC18) {
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
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,-17036
	ctx.r5.s64 = ctx.r9.s64 + -17036;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-20616
	ctx.r10.s64 = ctx.r10.s64 + -20616;
	// addi r4,r9,-16640
	ctx.r4.s64 = ctx.r9.s64 + -16640;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,13408
	ctx.r31.s64 = ctx.r9.s64 + 13408;
	// addi r9,r11,22896
	ctx.r9.s64 = ctx.r11.s64 + 22896;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCC68;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,12192
	ctx.r3.s64 = ctx.r8.s64 + 12192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,9784
	ctx.r11.s64 = ctx.r9.s64 + 9784;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABCC98;
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

__attribute__((alias("__imp__sub_82ABCCAC"))) PPC_WEAK_FUNC(sub_82ABCCAC);
PPC_FUNC_IMPL(__imp__sub_82ABCCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCCB0"))) PPC_WEAK_FUNC(sub_82ABCCB0);
PPC_FUNC_IMPL(__imp__sub_82ABCCB0) {
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
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r5,r9,-17264
	ctx.r5.s64 = ctx.r9.s64 + -17264;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,23384
	ctx.r10.s64 = ctx.r10.s64 + 23384;
	// addi r4,r9,-16472
	ctx.r4.s64 = ctx.r9.s64 + -16472;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,13320
	ctx.r31.s64 = ctx.r9.s64 + 13320;
	// addi r9,r11,23208
	ctx.r9.s64 = ctx.r11.s64 + 23208;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCD00;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,12272
	ctx.r3.s64 = ctx.r8.s64 + 12272;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,10000
	ctx.r11.s64 = ctx.r9.s64 + 10000;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABCD30;
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

__attribute__((alias("__imp__sub_82ABCD44"))) PPC_WEAK_FUNC(sub_82ABCD44);
PPC_FUNC_IMPL(__imp__sub_82ABCD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCD48"))) PPC_WEAK_FUNC(sub_82ABCD48);
PPC_FUNC_IMPL(__imp__sub_82ABCD48) {
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
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r5,r9,-17036
	ctx.r5.s64 = ctx.r9.s64 + -17036;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,23384
	ctx.r10.s64 = ctx.r10.s64 + 23384;
	// addi r4,r9,-16288
	ctx.r4.s64 = ctx.r9.s64 + -16288;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,13232
	ctx.r31.s64 = ctx.r9.s64 + 13232;
	// addi r9,r11,9568
	ctx.r9.s64 = ctx.r11.s64 + 9568;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCD98;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,12352
	ctx.r3.s64 = ctx.r8.s64 + 12352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,10200
	ctx.r11.s64 = ctx.r9.s64 + 10200;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABCDC8;
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

__attribute__((alias("__imp__sub_82ABCDDC"))) PPC_WEAK_FUNC(sub_82ABCDDC);
PPC_FUNC_IMPL(__imp__sub_82ABCDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCDE0"))) PPC_WEAK_FUNC(sub_82ABCDE0);
PPC_FUNC_IMPL(__imp__sub_82ABCDE0) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r5,r9,31520
	ctx.r5.s64 = ctx.r9.s64 + 31520;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,10744
	ctx.r10.s64 = ctx.r10.s64 + 10744;
	// addi r4,r9,-16104
	ctx.r4.s64 = ctx.r9.s64 + -16104;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,346
	ctx.r8.s64 = 346;
	// addi r31,r9,13144
	ctx.r31.s64 = ctx.r9.s64 + 13144;
	// addi r9,r11,10400
	ctx.r9.s64 = ctx.r11.s64 + 10400;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCE30;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,12432
	ctx.r3.s64 = ctx.r8.s64 + 12432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,10600
	ctx.r11.s64 = ctx.r9.s64 + 10600;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABCE60;
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

__attribute__((alias("__imp__sub_82ABCE74"))) PPC_WEAK_FUNC(sub_82ABCE74);
PPC_FUNC_IMPL(__imp__sub_82ABCE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCE78"))) PPC_WEAK_FUNC(sub_82ABCE78);
PPC_FUNC_IMPL(__imp__sub_82ABCE78) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r5,r9,31704
	ctx.r5.s64 = ctx.r9.s64 + 31704;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,11248
	ctx.r10.s64 = ctx.r10.s64 + 11248;
	// addi r4,r9,-16000
	ctx.r4.s64 = ctx.r9.s64 + -16000;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,13056
	ctx.r31.s64 = ctx.r9.s64 + 13056;
	// addi r9,r11,10968
	ctx.r9.s64 = ctx.r11.s64 + 10968;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCEC8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,12512
	ctx.r3.s64 = ctx.r8.s64 + 12512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11104
	ctx.r11.s64 = ctx.r9.s64 + 11104;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABCEF8;
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

__attribute__((alias("__imp__sub_82ABCF0C"))) PPC_WEAK_FUNC(sub_82ABCF0C);
PPC_FUNC_IMPL(__imp__sub_82ABCF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCF10"))) PPC_WEAK_FUNC(sub_82ABCF10);
PPC_FUNC_IMPL(__imp__sub_82ABCF10) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r5,r9,31704
	ctx.r5.s64 = ctx.r9.s64 + 31704;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,11752
	ctx.r10.s64 = ctx.r10.s64 + 11752;
	// addi r4,r9,-15936
	ctx.r4.s64 = ctx.r9.s64 + -15936;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,12968
	ctx.r31.s64 = ctx.r9.s64 + 12968;
	// addi r9,r11,11472
	ctx.r9.s64 = ctx.r11.s64 + 11472;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCF60;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,12592
	ctx.r3.s64 = ctx.r8.s64 + 12592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11608
	ctx.r11.s64 = ctx.r9.s64 + 11608;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABCF90;
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

__attribute__((alias("__imp__sub_82ABCFA4"))) PPC_WEAK_FUNC(sub_82ABCFA4);
PPC_FUNC_IMPL(__imp__sub_82ABCFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCFA8"))) PPC_WEAK_FUNC(sub_82ABCFA8);
PPC_FUNC_IMPL(__imp__sub_82ABCFA8) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r5,r9,31704
	ctx.r5.s64 = ctx.r9.s64 + 31704;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,12256
	ctx.r10.s64 = ctx.r10.s64 + 12256;
	// addi r4,r9,-15872
	ctx.r4.s64 = ctx.r9.s64 + -15872;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,12880
	ctx.r31.s64 = ctx.r9.s64 + 12880;
	// addi r9,r11,11976
	ctx.r9.s64 = ctx.r11.s64 + 11976;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABCFF8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,12672
	ctx.r3.s64 = ctx.r8.s64 + 12672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12112
	ctx.r11.s64 = ctx.r9.s64 + 12112;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD028;
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

__attribute__((alias("__imp__sub_82ABD03C"))) PPC_WEAK_FUNC(sub_82ABD03C);
PPC_FUNC_IMPL(__imp__sub_82ABD03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD040"))) PPC_WEAK_FUNC(sub_82ABD040);
PPC_FUNC_IMPL(__imp__sub_82ABD040) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r5,r9,31952
	ctx.r5.s64 = ctx.r9.s64 + 31952;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,12816
	ctx.r10.s64 = ctx.r10.s64 + 12816;
	// addi r4,r9,-15808
	ctx.r4.s64 = ctx.r9.s64 + -15808;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,346
	ctx.r8.s64 = 346;
	// addi r31,r9,12792
	ctx.r31.s64 = ctx.r9.s64 + 12792;
	// addi r9,r11,12480
	ctx.r9.s64 = ctx.r11.s64 + 12480;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD090;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,12752
	ctx.r3.s64 = ctx.r8.s64 + 12752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12672
	ctx.r11.s64 = ctx.r9.s64 + 12672;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD0C0;
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

__attribute__((alias("__imp__sub_82ABD0D4"))) PPC_WEAK_FUNC(sub_82ABD0D4);
PPC_FUNC_IMPL(__imp__sub_82ABD0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD0D8"))) PPC_WEAK_FUNC(sub_82ABD0D8);
PPC_FUNC_IMPL(__imp__sub_82ABD0D8) {
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
	// addi r5,r9,-13336
	ctx.r5.s64 = ctx.r9.s64 + -13336;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-13304
	ctx.r4.s64 = ctx.r9.s64 + -13304;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,-10416
	ctx.r31.s64 = ctx.r9.s64 + -10416;
	// addi r9,r11,-144
	ctx.r9.s64 = ctx.r11.s64 + -144;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD128;
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
	// addi r3,r8,12832
	ctx.r3.s64 = ctx.r8.s64 + 12832;
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
	ctx.lr = 0x82ABD158;
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

__attribute__((alias("__imp__sub_82ABD16C"))) PPC_WEAK_FUNC(sub_82ABD16C);
PPC_FUNC_IMPL(__imp__sub_82ABD16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD170"))) PPC_WEAK_FUNC(sub_82ABD170);
PPC_FUNC_IMPL(__imp__sub_82ABD170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,12984
	ctx.r3.s64 = ctx.r11.s64 + 12984;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABD17C"))) PPC_WEAK_FUNC(sub_82ABD17C);
PPC_FUNC_IMPL(__imp__sub_82ABD17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD180"))) PPC_WEAK_FUNC(sub_82ABD180);
PPC_FUNC_IMPL(__imp__sub_82ABD180) {
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
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,-11876
	ctx.r5.s64 = ctx.r9.s64 + -11876;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-11832
	ctx.r4.s64 = ctx.r9.s64 + -11832;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,14640
	ctx.r31.s64 = ctx.r9.s64 + 14640;
	// addi r9,r11,23208
	ctx.r9.s64 = ctx.r11.s64 + 23208;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD1D0;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13000
	ctx.r3.s64 = ctx.r8.s64 + 13000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,10000
	ctx.r11.s64 = ctx.r9.s64 + 10000;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,22552
	ctx.r11.s64 = ctx.r10.s64 + 22552;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD200;
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

__attribute__((alias("__imp__sub_82ABD214"))) PPC_WEAK_FUNC(sub_82ABD214);
PPC_FUNC_IMPL(__imp__sub_82ABD214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD218"))) PPC_WEAK_FUNC(sub_82ABD218);
PPC_FUNC_IMPL(__imp__sub_82ABD218) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,-11656
	ctx.r5.s64 = ctx.r9.s64 + -11656;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-11608
	ctx.r4.s64 = ctx.r9.s64 + -11608;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,14552
	ctx.r31.s64 = ctx.r9.s64 + 14552;
	// addi r9,r11,-21904
	ctx.r9.s64 = ctx.r11.s64 + -21904;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD268;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13080
	ctx.r3.s64 = ctx.r8.s64 + 13080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-21680
	ctx.r11.s64 = ctx.r9.s64 + -21680;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,22552
	ctx.r11.s64 = ctx.r10.s64 + 22552;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD298;
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

__attribute__((alias("__imp__sub_82ABD2AC"))) PPC_WEAK_FUNC(sub_82ABD2AC);
PPC_FUNC_IMPL(__imp__sub_82ABD2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD2B0"))) PPC_WEAK_FUNC(sub_82ABD2B0);
PPC_FUNC_IMPL(__imp__sub_82ABD2B0) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,-11876
	ctx.r5.s64 = ctx.r9.s64 + -11876;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-20616
	ctx.r10.s64 = ctx.r10.s64 + -20616;
	// addi r4,r9,-11432
	ctx.r4.s64 = ctx.r9.s64 + -11432;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,14464
	ctx.r31.s64 = ctx.r9.s64 + 14464;
	// addi r9,r11,-21472
	ctx.r9.s64 = ctx.r11.s64 + -21472;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD300;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13160
	ctx.r3.s64 = ctx.r8.s64 + 13160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-21288
	ctx.r11.s64 = ctx.r9.s64 + -21288;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD330;
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

__attribute__((alias("__imp__sub_82ABD344"))) PPC_WEAK_FUNC(sub_82ABD344);
PPC_FUNC_IMPL(__imp__sub_82ABD344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD348"))) PPC_WEAK_FUNC(sub_82ABD348);
PPC_FUNC_IMPL(__imp__sub_82ABD348) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,-11656
	ctx.r5.s64 = ctx.r9.s64 + -11656;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-20616
	ctx.r10.s64 = ctx.r10.s64 + -20616;
	// addi r4,r9,-11264
	ctx.r4.s64 = ctx.r9.s64 + -11264;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,14376
	ctx.r31.s64 = ctx.r9.s64 + 14376;
	// addi r9,r11,-20936
	ctx.r9.s64 = ctx.r11.s64 + -20936;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD398;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13240
	ctx.r3.s64 = ctx.r8.s64 + 13240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-20712
	ctx.r11.s64 = ctx.r9.s64 + -20712;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD3C8;
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

__attribute__((alias("__imp__sub_82ABD3DC"))) PPC_WEAK_FUNC(sub_82ABD3DC);
PPC_FUNC_IMPL(__imp__sub_82ABD3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD3E0"))) PPC_WEAK_FUNC(sub_82ABD3E0);
PPC_FUNC_IMPL(__imp__sub_82ABD3E0) {
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
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r5,r9,-11876
	ctx.r5.s64 = ctx.r9.s64 + -11876;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,23384
	ctx.r10.s64 = ctx.r10.s64 + 23384;
	// addi r4,r9,-11096
	ctx.r4.s64 = ctx.r9.s64 + -11096;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,14288
	ctx.r31.s64 = ctx.r9.s64 + 14288;
	// addi r9,r11,23208
	ctx.r9.s64 = ctx.r11.s64 + 23208;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD430;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13320
	ctx.r3.s64 = ctx.r8.s64 + 13320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,10000
	ctx.r11.s64 = ctx.r9.s64 + 10000;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD460;
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

__attribute__((alias("__imp__sub_82ABD474"))) PPC_WEAK_FUNC(sub_82ABD474);
PPC_FUNC_IMPL(__imp__sub_82ABD474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD478"))) PPC_WEAK_FUNC(sub_82ABD478);
PPC_FUNC_IMPL(__imp__sub_82ABD478) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r5,r9,-11656
	ctx.r5.s64 = ctx.r9.s64 + -11656;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,23384
	ctx.r10.s64 = ctx.r10.s64 + 23384;
	// addi r4,r9,-10912
	ctx.r4.s64 = ctx.r9.s64 + -10912;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,360
	ctx.r8.s64 = 360;
	// addi r31,r9,14200
	ctx.r31.s64 = ctx.r9.s64 + 14200;
	// addi r9,r11,-21904
	ctx.r9.s64 = ctx.r11.s64 + -21904;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD4C8;
	sub_824943D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13400
	ctx.r3.s64 = ctx.r8.s64 + 13400;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-21680
	ctx.r11.s64 = ctx.r9.s64 + -21680;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD4F8;
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

__attribute__((alias("__imp__sub_82ABD50C"))) PPC_WEAK_FUNC(sub_82ABD50C);
PPC_FUNC_IMPL(__imp__sub_82ABD50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD510"))) PPC_WEAK_FUNC(sub_82ABD510);
PPC_FUNC_IMPL(__imp__sub_82ABD510) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,31520
	ctx.r5.s64 = ctx.r9.s64 + 31520;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-20128
	ctx.r10.s64 = ctx.r10.s64 + -20128;
	// addi r4,r9,-10736
	ctx.r4.s64 = ctx.r9.s64 + -10736;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,346
	ctx.r8.s64 = 346;
	// addi r31,r9,14112
	ctx.r31.s64 = ctx.r9.s64 + 14112;
	// addi r9,r11,-20488
	ctx.r9.s64 = ctx.r11.s64 + -20488;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD560;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13480
	ctx.r3.s64 = ctx.r8.s64 + 13480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-20280
	ctx.r11.s64 = ctx.r9.s64 + -20280;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD590;
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

__attribute__((alias("__imp__sub_82ABD5A4"))) PPC_WEAK_FUNC(sub_82ABD5A4);
PPC_FUNC_IMPL(__imp__sub_82ABD5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD5A8"))) PPC_WEAK_FUNC(sub_82ABD5A8);
PPC_FUNC_IMPL(__imp__sub_82ABD5A8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,31704
	ctx.r5.s64 = ctx.r9.s64 + 31704;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-19624
	ctx.r10.s64 = ctx.r10.s64 + -19624;
	// addi r4,r9,-10636
	ctx.r4.s64 = ctx.r9.s64 + -10636;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,14024
	ctx.r31.s64 = ctx.r9.s64 + 14024;
	// addi r9,r11,-19920
	ctx.r9.s64 = ctx.r11.s64 + -19920;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD5F8;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13560
	ctx.r3.s64 = ctx.r8.s64 + 13560;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19776
	ctx.r11.s64 = ctx.r9.s64 + -19776;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD628;
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

__attribute__((alias("__imp__sub_82ABD63C"))) PPC_WEAK_FUNC(sub_82ABD63C);
PPC_FUNC_IMPL(__imp__sub_82ABD63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD640"))) PPC_WEAK_FUNC(sub_82ABD640);
PPC_FUNC_IMPL(__imp__sub_82ABD640) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,31704
	ctx.r5.s64 = ctx.r9.s64 + 31704;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-19120
	ctx.r10.s64 = ctx.r10.s64 + -19120;
	// addi r4,r9,-10580
	ctx.r4.s64 = ctx.r9.s64 + -10580;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,13936
	ctx.r31.s64 = ctx.r9.s64 + 13936;
	// addi r9,r11,-19416
	ctx.r9.s64 = ctx.r11.s64 + -19416;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD690;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13640
	ctx.r3.s64 = ctx.r8.s64 + 13640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19272
	ctx.r11.s64 = ctx.r9.s64 + -19272;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD6C0;
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

__attribute__((alias("__imp__sub_82ABD6D4"))) PPC_WEAK_FUNC(sub_82ABD6D4);
PPC_FUNC_IMPL(__imp__sub_82ABD6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD6D8"))) PPC_WEAK_FUNC(sub_82ABD6D8);
PPC_FUNC_IMPL(__imp__sub_82ABD6D8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,31704
	ctx.r5.s64 = ctx.r9.s64 + 31704;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-18616
	ctx.r10.s64 = ctx.r10.s64 + -18616;
	// addi r4,r9,-10516
	ctx.r4.s64 = ctx.r9.s64 + -10516;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r9,13848
	ctx.r31.s64 = ctx.r9.s64 + 13848;
	// addi r9,r11,-18912
	ctx.r9.s64 = ctx.r11.s64 + -18912;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD728;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13720
	ctx.r3.s64 = ctx.r8.s64 + 13720;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-18768
	ctx.r11.s64 = ctx.r9.s64 + -18768;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD758;
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

__attribute__((alias("__imp__sub_82ABD76C"))) PPC_WEAK_FUNC(sub_82ABD76C);
PPC_FUNC_IMPL(__imp__sub_82ABD76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD770"))) PPC_WEAK_FUNC(sub_82ABD770);
PPC_FUNC_IMPL(__imp__sub_82ABD770) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r5,r9,31952
	ctx.r5.s64 = ctx.r9.s64 + 31952;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,-18056
	ctx.r10.s64 = ctx.r10.s64 + -18056;
	// addi r4,r9,-10456
	ctx.r4.s64 = ctx.r9.s64 + -10456;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,346
	ctx.r8.s64 = 346;
	// addi r31,r9,13760
	ctx.r31.s64 = ctx.r9.s64 + 13760;
	// addi r9,r11,-18408
	ctx.r9.s64 = ctx.r11.s64 + -18408;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD7C0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13800
	ctx.r3.s64 = ctx.r8.s64 + 13800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-18208
	ctx.r11.s64 = ctx.r9.s64 + -18208;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD7F0;
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

__attribute__((alias("__imp__sub_82ABD804"))) PPC_WEAK_FUNC(sub_82ABD804);
PPC_FUNC_IMPL(__imp__sub_82ABD804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD808"))) PPC_WEAK_FUNC(sub_82ABD808);
PPC_FUNC_IMPL(__imp__sub_82ABD808) {
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
	// addi r11,r11,-10192
	ctx.r11.s64 = ctx.r11.s64 + -10192;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABD840"))) PPC_WEAK_FUNC(sub_82ABD840);
PPC_FUNC_IMPL(__imp__sub_82ABD840) {
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
	// addi r11,r11,-10224
	ctx.r11.s64 = ctx.r11.s64 + -10224;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABD870"))) PPC_WEAK_FUNC(sub_82ABD870);
PPC_FUNC_IMPL(__imp__sub_82ABD870) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r6,r9,11444
	ctx.r6.s64 = ctx.r9.s64 + 11444;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r5,r9,-6344
	ctx.r5.s64 = ctx.r9.s64 + -6344;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r10,r10,9224
	ctx.r10.s64 = ctx.r10.s64 + 9224;
	// addi r4,r9,-6280
	ctx.r4.s64 = ctx.r9.s64 + -6280;
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// li r8,366
	ctx.r8.s64 = 366;
	// addi r31,r9,-10316
	ctx.r31.s64 = ctx.r9.s64 + -10316;
	// addi r9,r11,15648
	ctx.r9.s64 = ctx.r11.s64 + 15648;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824943d8
	ctx.lr = 0x82ABD8C0;
	sub_824943D8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r3,r8,13880
	ctx.r3.s64 = ctx.r8.s64 + 13880;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,15856
	ctx.r11.s64 = ctx.r9.s64 + 15856;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r10,9096
	ctx.r11.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828d1968
	ctx.lr = 0x82ABD8F0;
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

__attribute__((alias("__imp__sub_82ABD904"))) PPC_WEAK_FUNC(sub_82ABD904);
PPC_FUNC_IMPL(__imp__sub_82ABD904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

