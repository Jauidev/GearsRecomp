#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AB8A74"))) PPC_WEAK_FUNC(sub_82AB8A74);
PPC_FUNC_IMPL(__imp__sub_82AB8A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8A78"))) PPC_WEAK_FUNC(sub_82AB8A78);
PPC_FUNC_IMPL(__imp__sub_82AB8A78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30908
	ctx.r4.s64 = ctx.r11.s64 + 30908;
	// bl 0x82316b80
	ctx.lr = 0x82AB8A94;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13718(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13718, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8AAC"))) PPC_WEAK_FUNC(sub_82AB8AAC);
PPC_FUNC_IMPL(__imp__sub_82AB8AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8AB0"))) PPC_WEAK_FUNC(sub_82AB8AB0);
PPC_FUNC_IMPL(__imp__sub_82AB8AB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30912
	ctx.r4.s64 = ctx.r11.s64 + 30912;
	// bl 0x82316b80
	ctx.lr = 0x82AB8ACC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13717(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13717, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8AE4"))) PPC_WEAK_FUNC(sub_82AB8AE4);
PPC_FUNC_IMPL(__imp__sub_82AB8AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8AE8"))) PPC_WEAK_FUNC(sub_82AB8AE8);
PPC_FUNC_IMPL(__imp__sub_82AB8AE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30916
	ctx.r4.s64 = ctx.r11.s64 + 30916;
	// bl 0x82316b80
	ctx.lr = 0x82AB8B04;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13716(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13716, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8B1C"))) PPC_WEAK_FUNC(sub_82AB8B1C);
PPC_FUNC_IMPL(__imp__sub_82AB8B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8B20"))) PPC_WEAK_FUNC(sub_82AB8B20);
PPC_FUNC_IMPL(__imp__sub_82AB8B20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30920
	ctx.r4.s64 = ctx.r11.s64 + 30920;
	// bl 0x82316b80
	ctx.lr = 0x82AB8B3C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13715(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13715, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8B54"))) PPC_WEAK_FUNC(sub_82AB8B54);
PPC_FUNC_IMPL(__imp__sub_82AB8B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8B58"))) PPC_WEAK_FUNC(sub_82AB8B58);
PPC_FUNC_IMPL(__imp__sub_82AB8B58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30924
	ctx.r4.s64 = ctx.r11.s64 + 30924;
	// bl 0x82316b80
	ctx.lr = 0x82AB8B74;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13714(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13714, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8B8C"))) PPC_WEAK_FUNC(sub_82AB8B8C);
PPC_FUNC_IMPL(__imp__sub_82AB8B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8B90"))) PPC_WEAK_FUNC(sub_82AB8B90);
PPC_FUNC_IMPL(__imp__sub_82AB8B90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30928
	ctx.r4.s64 = ctx.r11.s64 + 30928;
	// bl 0x82316b80
	ctx.lr = 0x82AB8BAC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13713(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13713, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8BC4"))) PPC_WEAK_FUNC(sub_82AB8BC4);
PPC_FUNC_IMPL(__imp__sub_82AB8BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8BC8"))) PPC_WEAK_FUNC(sub_82AB8BC8);
PPC_FUNC_IMPL(__imp__sub_82AB8BC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30932
	ctx.r4.s64 = ctx.r11.s64 + 30932;
	// bl 0x82316b80
	ctx.lr = 0x82AB8BE4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13712(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13712, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8BFC"))) PPC_WEAK_FUNC(sub_82AB8BFC);
PPC_FUNC_IMPL(__imp__sub_82AB8BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8C00"))) PPC_WEAK_FUNC(sub_82AB8C00);
PPC_FUNC_IMPL(__imp__sub_82AB8C00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30936
	ctx.r4.s64 = ctx.r11.s64 + 30936;
	// bl 0x82316b80
	ctx.lr = 0x82AB8C1C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13711(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13711, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8C34"))) PPC_WEAK_FUNC(sub_82AB8C34);
PPC_FUNC_IMPL(__imp__sub_82AB8C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8C38"))) PPC_WEAK_FUNC(sub_82AB8C38);
PPC_FUNC_IMPL(__imp__sub_82AB8C38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30940
	ctx.r4.s64 = ctx.r11.s64 + 30940;
	// bl 0x82316b80
	ctx.lr = 0x82AB8C54;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13710(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13710, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8C6C"))) PPC_WEAK_FUNC(sub_82AB8C6C);
PPC_FUNC_IMPL(__imp__sub_82AB8C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8C70"))) PPC_WEAK_FUNC(sub_82AB8C70);
PPC_FUNC_IMPL(__imp__sub_82AB8C70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30944
	ctx.r4.s64 = ctx.r11.s64 + 30944;
	// bl 0x82316b80
	ctx.lr = 0x82AB8C8C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13709(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13709, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8CA4"))) PPC_WEAK_FUNC(sub_82AB8CA4);
PPC_FUNC_IMPL(__imp__sub_82AB8CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8CA8"))) PPC_WEAK_FUNC(sub_82AB8CA8);
PPC_FUNC_IMPL(__imp__sub_82AB8CA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30948
	ctx.r4.s64 = ctx.r11.s64 + 30948;
	// bl 0x82316b80
	ctx.lr = 0x82AB8CC4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13708(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13708, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8CDC"))) PPC_WEAK_FUNC(sub_82AB8CDC);
PPC_FUNC_IMPL(__imp__sub_82AB8CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8CE0"))) PPC_WEAK_FUNC(sub_82AB8CE0);
PPC_FUNC_IMPL(__imp__sub_82AB8CE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30952
	ctx.r4.s64 = ctx.r11.s64 + 30952;
	// bl 0x82316b80
	ctx.lr = 0x82AB8CFC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13707(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13707, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8D14"))) PPC_WEAK_FUNC(sub_82AB8D14);
PPC_FUNC_IMPL(__imp__sub_82AB8D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8D18"))) PPC_WEAK_FUNC(sub_82AB8D18);
PPC_FUNC_IMPL(__imp__sub_82AB8D18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30956
	ctx.r4.s64 = ctx.r11.s64 + 30956;
	// bl 0x82316b80
	ctx.lr = 0x82AB8D34;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13706(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13706, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8D4C"))) PPC_WEAK_FUNC(sub_82AB8D4C);
PPC_FUNC_IMPL(__imp__sub_82AB8D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8D50"))) PPC_WEAK_FUNC(sub_82AB8D50);
PPC_FUNC_IMPL(__imp__sub_82AB8D50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30960
	ctx.r4.s64 = ctx.r11.s64 + 30960;
	// bl 0x82316b80
	ctx.lr = 0x82AB8D6C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13705(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13705, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8D84"))) PPC_WEAK_FUNC(sub_82AB8D84);
PPC_FUNC_IMPL(__imp__sub_82AB8D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8D88"))) PPC_WEAK_FUNC(sub_82AB8D88);
PPC_FUNC_IMPL(__imp__sub_82AB8D88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30964
	ctx.r4.s64 = ctx.r11.s64 + 30964;
	// bl 0x82316b80
	ctx.lr = 0x82AB8DA4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13704(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13704, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8DBC"))) PPC_WEAK_FUNC(sub_82AB8DBC);
PPC_FUNC_IMPL(__imp__sub_82AB8DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8DC0"))) PPC_WEAK_FUNC(sub_82AB8DC0);
PPC_FUNC_IMPL(__imp__sub_82AB8DC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30968
	ctx.r4.s64 = ctx.r11.s64 + 30968;
	// bl 0x82316b80
	ctx.lr = 0x82AB8DDC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13703(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13703, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8DF4"))) PPC_WEAK_FUNC(sub_82AB8DF4);
PPC_FUNC_IMPL(__imp__sub_82AB8DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8DF8"))) PPC_WEAK_FUNC(sub_82AB8DF8);
PPC_FUNC_IMPL(__imp__sub_82AB8DF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30972
	ctx.r4.s64 = ctx.r11.s64 + 30972;
	// bl 0x82316b80
	ctx.lr = 0x82AB8E14;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13702(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13702, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8E2C"))) PPC_WEAK_FUNC(sub_82AB8E2C);
PPC_FUNC_IMPL(__imp__sub_82AB8E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8E30"))) PPC_WEAK_FUNC(sub_82AB8E30);
PPC_FUNC_IMPL(__imp__sub_82AB8E30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30976
	ctx.r4.s64 = ctx.r11.s64 + 30976;
	// bl 0x82316b80
	ctx.lr = 0x82AB8E4C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13701(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13701, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8E64"))) PPC_WEAK_FUNC(sub_82AB8E64);
PPC_FUNC_IMPL(__imp__sub_82AB8E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8E68"))) PPC_WEAK_FUNC(sub_82AB8E68);
PPC_FUNC_IMPL(__imp__sub_82AB8E68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30980
	ctx.r4.s64 = ctx.r11.s64 + 30980;
	// bl 0x82316b80
	ctx.lr = 0x82AB8E84;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13700(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13700, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8E9C"))) PPC_WEAK_FUNC(sub_82AB8E9C);
PPC_FUNC_IMPL(__imp__sub_82AB8E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8EA0"))) PPC_WEAK_FUNC(sub_82AB8EA0);
PPC_FUNC_IMPL(__imp__sub_82AB8EA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30984
	ctx.r4.s64 = ctx.r11.s64 + 30984;
	// bl 0x82316b80
	ctx.lr = 0x82AB8EBC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13699(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13699, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8ED4"))) PPC_WEAK_FUNC(sub_82AB8ED4);
PPC_FUNC_IMPL(__imp__sub_82AB8ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8ED8"))) PPC_WEAK_FUNC(sub_82AB8ED8);
PPC_FUNC_IMPL(__imp__sub_82AB8ED8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30988
	ctx.r4.s64 = ctx.r11.s64 + 30988;
	// bl 0x82316b80
	ctx.lr = 0x82AB8EF4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13698(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13698, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8F0C"))) PPC_WEAK_FUNC(sub_82AB8F0C);
PPC_FUNC_IMPL(__imp__sub_82AB8F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8F10"))) PPC_WEAK_FUNC(sub_82AB8F10);
PPC_FUNC_IMPL(__imp__sub_82AB8F10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30992
	ctx.r4.s64 = ctx.r11.s64 + 30992;
	// bl 0x82316b80
	ctx.lr = 0x82AB8F2C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13697(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13697, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8F44"))) PPC_WEAK_FUNC(sub_82AB8F44);
PPC_FUNC_IMPL(__imp__sub_82AB8F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8F48"))) PPC_WEAK_FUNC(sub_82AB8F48);
PPC_FUNC_IMPL(__imp__sub_82AB8F48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30996
	ctx.r4.s64 = ctx.r11.s64 + 30996;
	// bl 0x82316b80
	ctx.lr = 0x82AB8F64;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13696(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13696, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8F7C"))) PPC_WEAK_FUNC(sub_82AB8F7C);
PPC_FUNC_IMPL(__imp__sub_82AB8F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8F80"))) PPC_WEAK_FUNC(sub_82AB8F80);
PPC_FUNC_IMPL(__imp__sub_82AB8F80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31000
	ctx.r4.s64 = ctx.r11.s64 + 31000;
	// bl 0x82316b80
	ctx.lr = 0x82AB8F9C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13695(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13695, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8FB4"))) PPC_WEAK_FUNC(sub_82AB8FB4);
PPC_FUNC_IMPL(__imp__sub_82AB8FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8FB8"))) PPC_WEAK_FUNC(sub_82AB8FB8);
PPC_FUNC_IMPL(__imp__sub_82AB8FB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31004
	ctx.r4.s64 = ctx.r11.s64 + 31004;
	// bl 0x82316b80
	ctx.lr = 0x82AB8FD4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13694(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13694, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB8FEC"))) PPC_WEAK_FUNC(sub_82AB8FEC);
PPC_FUNC_IMPL(__imp__sub_82AB8FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB8FF0"))) PPC_WEAK_FUNC(sub_82AB8FF0);
PPC_FUNC_IMPL(__imp__sub_82AB8FF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31008
	ctx.r4.s64 = ctx.r11.s64 + 31008;
	// bl 0x82316b80
	ctx.lr = 0x82AB900C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13693(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13693, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9024"))) PPC_WEAK_FUNC(sub_82AB9024);
PPC_FUNC_IMPL(__imp__sub_82AB9024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9028"))) PPC_WEAK_FUNC(sub_82AB9028);
PPC_FUNC_IMPL(__imp__sub_82AB9028) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31012
	ctx.r4.s64 = ctx.r11.s64 + 31012;
	// bl 0x82316b80
	ctx.lr = 0x82AB9044;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13692(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13692, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB905C"))) PPC_WEAK_FUNC(sub_82AB905C);
PPC_FUNC_IMPL(__imp__sub_82AB905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9060"))) PPC_WEAK_FUNC(sub_82AB9060);
PPC_FUNC_IMPL(__imp__sub_82AB9060) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30848
	ctx.r4.s64 = ctx.r11.s64 + 30848;
	// bl 0x82316b80
	ctx.lr = 0x82AB907C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13691(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13691, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9094"))) PPC_WEAK_FUNC(sub_82AB9094);
PPC_FUNC_IMPL(__imp__sub_82AB9094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9098"))) PPC_WEAK_FUNC(sub_82AB9098);
PPC_FUNC_IMPL(__imp__sub_82AB9098) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30852
	ctx.r4.s64 = ctx.r11.s64 + 30852;
	// bl 0x82316b80
	ctx.lr = 0x82AB90B4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13690(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13690, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB90CC"))) PPC_WEAK_FUNC(sub_82AB90CC);
PPC_FUNC_IMPL(__imp__sub_82AB90CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB90D0"))) PPC_WEAK_FUNC(sub_82AB90D0);
PPC_FUNC_IMPL(__imp__sub_82AB90D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30856
	ctx.r4.s64 = ctx.r11.s64 + 30856;
	// bl 0x82316b80
	ctx.lr = 0x82AB90EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13689(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13689, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9104"))) PPC_WEAK_FUNC(sub_82AB9104);
PPC_FUNC_IMPL(__imp__sub_82AB9104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9108"))) PPC_WEAK_FUNC(sub_82AB9108);
PPC_FUNC_IMPL(__imp__sub_82AB9108) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30860
	ctx.r4.s64 = ctx.r11.s64 + 30860;
	// bl 0x82316b80
	ctx.lr = 0x82AB9124;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13688(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13688, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB913C"))) PPC_WEAK_FUNC(sub_82AB913C);
PPC_FUNC_IMPL(__imp__sub_82AB913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9140"))) PPC_WEAK_FUNC(sub_82AB9140);
PPC_FUNC_IMPL(__imp__sub_82AB9140) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30864
	ctx.r4.s64 = ctx.r11.s64 + 30864;
	// bl 0x82316b80
	ctx.lr = 0x82AB915C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13687(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13687, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9174"))) PPC_WEAK_FUNC(sub_82AB9174);
PPC_FUNC_IMPL(__imp__sub_82AB9174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9178"))) PPC_WEAK_FUNC(sub_82AB9178);
PPC_FUNC_IMPL(__imp__sub_82AB9178) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30868
	ctx.r4.s64 = ctx.r11.s64 + 30868;
	// bl 0x82316b80
	ctx.lr = 0x82AB9194;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13686(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13686, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB91AC"))) PPC_WEAK_FUNC(sub_82AB91AC);
PPC_FUNC_IMPL(__imp__sub_82AB91AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB91B0"))) PPC_WEAK_FUNC(sub_82AB91B0);
PPC_FUNC_IMPL(__imp__sub_82AB91B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30872
	ctx.r4.s64 = ctx.r11.s64 + 30872;
	// bl 0x82316b80
	ctx.lr = 0x82AB91CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13685(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13685, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB91E4"))) PPC_WEAK_FUNC(sub_82AB91E4);
PPC_FUNC_IMPL(__imp__sub_82AB91E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB91E8"))) PPC_WEAK_FUNC(sub_82AB91E8);
PPC_FUNC_IMPL(__imp__sub_82AB91E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30876
	ctx.r4.s64 = ctx.r11.s64 + 30876;
	// bl 0x82316b80
	ctx.lr = 0x82AB9204;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13684(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13684, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB921C"))) PPC_WEAK_FUNC(sub_82AB921C);
PPC_FUNC_IMPL(__imp__sub_82AB921C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9220"))) PPC_WEAK_FUNC(sub_82AB9220);
PPC_FUNC_IMPL(__imp__sub_82AB9220) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30880
	ctx.r4.s64 = ctx.r11.s64 + 30880;
	// bl 0x82316b80
	ctx.lr = 0x82AB923C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13683(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13683, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9254"))) PPC_WEAK_FUNC(sub_82AB9254);
PPC_FUNC_IMPL(__imp__sub_82AB9254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9258"))) PPC_WEAK_FUNC(sub_82AB9258);
PPC_FUNC_IMPL(__imp__sub_82AB9258) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29172
	ctx.r4.s64 = ctx.r11.s64 + 29172;
	// bl 0x82316b80
	ctx.lr = 0x82AB9274;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13682(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13682, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB928C"))) PPC_WEAK_FUNC(sub_82AB928C);
PPC_FUNC_IMPL(__imp__sub_82AB928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9290"))) PPC_WEAK_FUNC(sub_82AB9290);
PPC_FUNC_IMPL(__imp__sub_82AB9290) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29176
	ctx.r4.s64 = ctx.r11.s64 + 29176;
	// bl 0x82316b80
	ctx.lr = 0x82AB92AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13681(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13681, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB92C4"))) PPC_WEAK_FUNC(sub_82AB92C4);
PPC_FUNC_IMPL(__imp__sub_82AB92C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB92C8"))) PPC_WEAK_FUNC(sub_82AB92C8);
PPC_FUNC_IMPL(__imp__sub_82AB92C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,7192
	ctx.r3.s64 = ctx.r11.s64 + 7192;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB92D4"))) PPC_WEAK_FUNC(sub_82AB92D4);
PPC_FUNC_IMPL(__imp__sub_82AB92D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB92D8"))) PPC_WEAK_FUNC(sub_82AB92D8);
PPC_FUNC_IMPL(__imp__sub_82AB92D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29108
	ctx.r4.s64 = ctx.r11.s64 + 29108;
	// bl 0x82316b80
	ctx.lr = 0x82AB92F4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13660(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13660, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB930C"))) PPC_WEAK_FUNC(sub_82AB930C);
PPC_FUNC_IMPL(__imp__sub_82AB930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9310"))) PPC_WEAK_FUNC(sub_82AB9310);
PPC_FUNC_IMPL(__imp__sub_82AB9310) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29112
	ctx.r4.s64 = ctx.r11.s64 + 29112;
	// bl 0x82316b80
	ctx.lr = 0x82AB932C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13659(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13659, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9344"))) PPC_WEAK_FUNC(sub_82AB9344);
PPC_FUNC_IMPL(__imp__sub_82AB9344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9348"))) PPC_WEAK_FUNC(sub_82AB9348);
PPC_FUNC_IMPL(__imp__sub_82AB9348) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29116
	ctx.r4.s64 = ctx.r11.s64 + 29116;
	// bl 0x82316b80
	ctx.lr = 0x82AB9364;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13658(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13658, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB937C"))) PPC_WEAK_FUNC(sub_82AB937C);
PPC_FUNC_IMPL(__imp__sub_82AB937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9380"))) PPC_WEAK_FUNC(sub_82AB9380);
PPC_FUNC_IMPL(__imp__sub_82AB9380) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29120
	ctx.r4.s64 = ctx.r11.s64 + 29120;
	// bl 0x82316b80
	ctx.lr = 0x82AB939C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13657(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13657, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB93B4"))) PPC_WEAK_FUNC(sub_82AB93B4);
PPC_FUNC_IMPL(__imp__sub_82AB93B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB93B8"))) PPC_WEAK_FUNC(sub_82AB93B8);
PPC_FUNC_IMPL(__imp__sub_82AB93B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29124
	ctx.r4.s64 = ctx.r11.s64 + 29124;
	// bl 0x82316b80
	ctx.lr = 0x82AB93D4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13656(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13656, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB93EC"))) PPC_WEAK_FUNC(sub_82AB93EC);
PPC_FUNC_IMPL(__imp__sub_82AB93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB93F0"))) PPC_WEAK_FUNC(sub_82AB93F0);
PPC_FUNC_IMPL(__imp__sub_82AB93F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29128
	ctx.r4.s64 = ctx.r11.s64 + 29128;
	// bl 0x82316b80
	ctx.lr = 0x82AB940C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13655(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13655, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9424"))) PPC_WEAK_FUNC(sub_82AB9424);
PPC_FUNC_IMPL(__imp__sub_82AB9424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9428"))) PPC_WEAK_FUNC(sub_82AB9428);
PPC_FUNC_IMPL(__imp__sub_82AB9428) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29132
	ctx.r4.s64 = ctx.r11.s64 + 29132;
	// bl 0x82316b80
	ctx.lr = 0x82AB9444;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13654(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13654, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB945C"))) PPC_WEAK_FUNC(sub_82AB945C);
PPC_FUNC_IMPL(__imp__sub_82AB945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9460"))) PPC_WEAK_FUNC(sub_82AB9460);
PPC_FUNC_IMPL(__imp__sub_82AB9460) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29136
	ctx.r4.s64 = ctx.r11.s64 + 29136;
	// bl 0x82316b80
	ctx.lr = 0x82AB947C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13653(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13653, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9494"))) PPC_WEAK_FUNC(sub_82AB9494);
PPC_FUNC_IMPL(__imp__sub_82AB9494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9498"))) PPC_WEAK_FUNC(sub_82AB9498);
PPC_FUNC_IMPL(__imp__sub_82AB9498) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29140
	ctx.r4.s64 = ctx.r11.s64 + 29140;
	// bl 0x82316b80
	ctx.lr = 0x82AB94B4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13652(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13652, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB94CC"))) PPC_WEAK_FUNC(sub_82AB94CC);
PPC_FUNC_IMPL(__imp__sub_82AB94CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB94D0"))) PPC_WEAK_FUNC(sub_82AB94D0);
PPC_FUNC_IMPL(__imp__sub_82AB94D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29144
	ctx.r4.s64 = ctx.r11.s64 + 29144;
	// bl 0x82316b80
	ctx.lr = 0x82AB94EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13651(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13651, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9504"))) PPC_WEAK_FUNC(sub_82AB9504);
PPC_FUNC_IMPL(__imp__sub_82AB9504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9508"))) PPC_WEAK_FUNC(sub_82AB9508);
PPC_FUNC_IMPL(__imp__sub_82AB9508) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29148
	ctx.r4.s64 = ctx.r11.s64 + 29148;
	// bl 0x82316b80
	ctx.lr = 0x82AB9524;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13650(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13650, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB953C"))) PPC_WEAK_FUNC(sub_82AB953C);
PPC_FUNC_IMPL(__imp__sub_82AB953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9540"))) PPC_WEAK_FUNC(sub_82AB9540);
PPC_FUNC_IMPL(__imp__sub_82AB9540) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29152
	ctx.r4.s64 = ctx.r11.s64 + 29152;
	// bl 0x82316b80
	ctx.lr = 0x82AB955C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13649(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13649, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9574"))) PPC_WEAK_FUNC(sub_82AB9574);
PPC_FUNC_IMPL(__imp__sub_82AB9574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9578"))) PPC_WEAK_FUNC(sub_82AB9578);
PPC_FUNC_IMPL(__imp__sub_82AB9578) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29156
	ctx.r4.s64 = ctx.r11.s64 + 29156;
	// bl 0x82316b80
	ctx.lr = 0x82AB9594;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13648(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13648, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB95AC"))) PPC_WEAK_FUNC(sub_82AB95AC);
PPC_FUNC_IMPL(__imp__sub_82AB95AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB95B0"))) PPC_WEAK_FUNC(sub_82AB95B0);
PPC_FUNC_IMPL(__imp__sub_82AB95B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29160
	ctx.r4.s64 = ctx.r11.s64 + 29160;
	// bl 0x82316b80
	ctx.lr = 0x82AB95CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13647(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13647, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB95E4"))) PPC_WEAK_FUNC(sub_82AB95E4);
PPC_FUNC_IMPL(__imp__sub_82AB95E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB95E8"))) PPC_WEAK_FUNC(sub_82AB95E8);
PPC_FUNC_IMPL(__imp__sub_82AB95E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29164
	ctx.r4.s64 = ctx.r11.s64 + 29164;
	// bl 0x82316b80
	ctx.lr = 0x82AB9604;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13646(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13646, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB961C"))) PPC_WEAK_FUNC(sub_82AB961C);
PPC_FUNC_IMPL(__imp__sub_82AB961C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9620"))) PPC_WEAK_FUNC(sub_82AB9620);
PPC_FUNC_IMPL(__imp__sub_82AB9620) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29168
	ctx.r4.s64 = ctx.r11.s64 + 29168;
	// bl 0x82316b80
	ctx.lr = 0x82AB963C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13645(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13645, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9654"))) PPC_WEAK_FUNC(sub_82AB9654);
PPC_FUNC_IMPL(__imp__sub_82AB9654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9658"))) PPC_WEAK_FUNC(sub_82AB9658);
PPC_FUNC_IMPL(__imp__sub_82AB9658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,7208
	ctx.r3.s64 = ctx.r11.s64 + 7208;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB9664"))) PPC_WEAK_FUNC(sub_82AB9664);
PPC_FUNC_IMPL(__imp__sub_82AB9664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9668"))) PPC_WEAK_FUNC(sub_82AB9668);
PPC_FUNC_IMPL(__imp__sub_82AB9668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,7304
	ctx.r3.s64 = ctx.r11.s64 + 7304;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB9674"))) PPC_WEAK_FUNC(sub_82AB9674);
PPC_FUNC_IMPL(__imp__sub_82AB9674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9678"))) PPC_WEAK_FUNC(sub_82AB9678);
PPC_FUNC_IMPL(__imp__sub_82AB9678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,7400
	ctx.r3.s64 = ctx.r11.s64 + 7400;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB9684"))) PPC_WEAK_FUNC(sub_82AB9684);
PPC_FUNC_IMPL(__imp__sub_82AB9684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9688"))) PPC_WEAK_FUNC(sub_82AB9688);
PPC_FUNC_IMPL(__imp__sub_82AB9688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,7496
	ctx.r3.s64 = ctx.r11.s64 + 7496;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB9694"))) PPC_WEAK_FUNC(sub_82AB9694);
PPC_FUNC_IMPL(__imp__sub_82AB9694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9698"))) PPC_WEAK_FUNC(sub_82AB9698);
PPC_FUNC_IMPL(__imp__sub_82AB9698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,7592
	ctx.r3.s64 = ctx.r11.s64 + 7592;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB96A4"))) PPC_WEAK_FUNC(sub_82AB96A4);
PPC_FUNC_IMPL(__imp__sub_82AB96A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB96A8"))) PPC_WEAK_FUNC(sub_82AB96A8);
PPC_FUNC_IMPL(__imp__sub_82AB96A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,7688
	ctx.r3.s64 = ctx.r11.s64 + 7688;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB96B4"))) PPC_WEAK_FUNC(sub_82AB96B4);
PPC_FUNC_IMPL(__imp__sub_82AB96B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB96B8"))) PPC_WEAK_FUNC(sub_82AB96B8);
PPC_FUNC_IMPL(__imp__sub_82AB96B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,7784
	ctx.r3.s64 = ctx.r11.s64 + 7784;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB96C4"))) PPC_WEAK_FUNC(sub_82AB96C4);
PPC_FUNC_IMPL(__imp__sub_82AB96C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB96C8"))) PPC_WEAK_FUNC(sub_82AB96C8);
PPC_FUNC_IMPL(__imp__sub_82AB96C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,7880
	ctx.r3.s64 = ctx.r11.s64 + 7880;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB96D4"))) PPC_WEAK_FUNC(sub_82AB96D4);
PPC_FUNC_IMPL(__imp__sub_82AB96D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB96D8"))) PPC_WEAK_FUNC(sub_82AB96D8);
PPC_FUNC_IMPL(__imp__sub_82AB96D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,7976
	ctx.r3.s64 = ctx.r11.s64 + 7976;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB96E4"))) PPC_WEAK_FUNC(sub_82AB96E4);
PPC_FUNC_IMPL(__imp__sub_82AB96E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB96E8"))) PPC_WEAK_FUNC(sub_82AB96E8);
PPC_FUNC_IMPL(__imp__sub_82AB96E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// addi r11,r11,-20488
	ctx.r11.s64 = ctx.r11.s64 + -20488;
	// stw r11,-13632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB96FC"))) PPC_WEAK_FUNC(sub_82AB96FC);
PPC_FUNC_IMPL(__imp__sub_82AB96FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9700"))) PPC_WEAK_FUNC(sub_82AB9700);
PPC_FUNC_IMPL(__imp__sub_82AB9700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// bl 0x821702e0
	ctx.lr = 0x82AB9718;
	sub_821702E0(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r11,r11,-13532
	ctx.r11.s64 = ctx.r11.s64 + -13532;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addis r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 262144;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB974C"))) PPC_WEAK_FUNC(sub_82AB974C);
PPC_FUNC_IMPL(__imp__sub_82AB974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9750"))) PPC_WEAK_FUNC(sub_82AB9750);
PPC_FUNC_IMPL(__imp__sub_82AB9750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8072
	ctx.r3.s64 = ctx.r11.s64 + 8072;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB975C"))) PPC_WEAK_FUNC(sub_82AB975C);
PPC_FUNC_IMPL(__imp__sub_82AB975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9760"))) PPC_WEAK_FUNC(sub_82AB9760);
PPC_FUNC_IMPL(__imp__sub_82AB9760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8168
	ctx.r3.s64 = ctx.r11.s64 + 8168;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB976C"))) PPC_WEAK_FUNC(sub_82AB976C);
PPC_FUNC_IMPL(__imp__sub_82AB976C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9770"))) PPC_WEAK_FUNC(sub_82AB9770);
PPC_FUNC_IMPL(__imp__sub_82AB9770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8272
	ctx.r3.s64 = ctx.r11.s64 + 8272;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB977C"))) PPC_WEAK_FUNC(sub_82AB977C);
PPC_FUNC_IMPL(__imp__sub_82AB977C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9780"))) PPC_WEAK_FUNC(sub_82AB9780);
PPC_FUNC_IMPL(__imp__sub_82AB9780) {
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
	// addi r11,r11,-13456
	ctx.r11.s64 = ctx.r11.s64 + -13456;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB97B8"))) PPC_WEAK_FUNC(sub_82AB97B8);
PPC_FUNC_IMPL(__imp__sub_82AB97B8) {
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
	// addi r11,r11,-13472
	ctx.r11.s64 = ctx.r11.s64 + -13472;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB97E8"))) PPC_WEAK_FUNC(sub_82AB97E8);
PPC_FUNC_IMPL(__imp__sub_82AB97E8) {
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
	// addi r11,r11,-13424
	ctx.r11.s64 = ctx.r11.s64 + -13424;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9820"))) PPC_WEAK_FUNC(sub_82AB9820);
PPC_FUNC_IMPL(__imp__sub_82AB9820) {
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
	// addi r11,r11,-13440
	ctx.r11.s64 = ctx.r11.s64 + -13440;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9850"))) PPC_WEAK_FUNC(sub_82AB9850);
PPC_FUNC_IMPL(__imp__sub_82AB9850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8344
	ctx.r3.s64 = ctx.r11.s64 + 8344;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB985C"))) PPC_WEAK_FUNC(sub_82AB985C);
PPC_FUNC_IMPL(__imp__sub_82AB985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9860"))) PPC_WEAK_FUNC(sub_82AB9860);
PPC_FUNC_IMPL(__imp__sub_82AB9860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8416
	ctx.r3.s64 = ctx.r11.s64 + 8416;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB986C"))) PPC_WEAK_FUNC(sub_82AB986C);
PPC_FUNC_IMPL(__imp__sub_82AB986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9870"))) PPC_WEAK_FUNC(sub_82AB9870);
PPC_FUNC_IMPL(__imp__sub_82AB9870) {
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
	// addi r11,r11,-13392
	ctx.r11.s64 = ctx.r11.s64 + -13392;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB98A8"))) PPC_WEAK_FUNC(sub_82AB98A8);
PPC_FUNC_IMPL(__imp__sub_82AB98A8) {
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
	// addi r11,r11,-13408
	ctx.r11.s64 = ctx.r11.s64 + -13408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB98D8"))) PPC_WEAK_FUNC(sub_82AB98D8);
PPC_FUNC_IMPL(__imp__sub_82AB98D8) {
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
	// addi r11,r11,-13328
	ctx.r11.s64 = ctx.r11.s64 + -13328;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9910"))) PPC_WEAK_FUNC(sub_82AB9910);
PPC_FUNC_IMPL(__imp__sub_82AB9910) {
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
	// addi r11,r11,-13360
	ctx.r11.s64 = ctx.r11.s64 + -13360;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9940"))) PPC_WEAK_FUNC(sub_82AB9940);
PPC_FUNC_IMPL(__imp__sub_82AB9940) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29028
	ctx.r4.s64 = ctx.r11.s64 + 29028;
	// bl 0x82316b80
	ctx.lr = 0x82AB995C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13343(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13343, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9974"))) PPC_WEAK_FUNC(sub_82AB9974);
PPC_FUNC_IMPL(__imp__sub_82AB9974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9978"))) PPC_WEAK_FUNC(sub_82AB9978);
PPC_FUNC_IMPL(__imp__sub_82AB9978) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29032
	ctx.r4.s64 = ctx.r11.s64 + 29032;
	// bl 0x82316b80
	ctx.lr = 0x82AB9994;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13341(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13341, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB99AC"))) PPC_WEAK_FUNC(sub_82AB99AC);
PPC_FUNC_IMPL(__imp__sub_82AB99AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB99B0"))) PPC_WEAK_FUNC(sub_82AB99B0);
PPC_FUNC_IMPL(__imp__sub_82AB99B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29036
	ctx.r4.s64 = ctx.r11.s64 + 29036;
	// bl 0x82316b80
	ctx.lr = 0x82AB99CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13344(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13344, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB99E4"))) PPC_WEAK_FUNC(sub_82AB99E4);
PPC_FUNC_IMPL(__imp__sub_82AB99E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB99E8"))) PPC_WEAK_FUNC(sub_82AB99E8);
PPC_FUNC_IMPL(__imp__sub_82AB99E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29040
	ctx.r4.s64 = ctx.r11.s64 + 29040;
	// bl 0x82316b80
	ctx.lr = 0x82AB9A04;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13332(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13332, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9A1C"))) PPC_WEAK_FUNC(sub_82AB9A1C);
PPC_FUNC_IMPL(__imp__sub_82AB9A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9A20"))) PPC_WEAK_FUNC(sub_82AB9A20);
PPC_FUNC_IMPL(__imp__sub_82AB9A20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,29044
	ctx.r4.s64 = ctx.r11.s64 + 29044;
	// bl 0x82316b80
	ctx.lr = 0x82AB9A3C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13342(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13342, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9A54"))) PPC_WEAK_FUNC(sub_82AB9A54);
PPC_FUNC_IMPL(__imp__sub_82AB9A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9A58"))) PPC_WEAK_FUNC(sub_82AB9A58);
PPC_FUNC_IMPL(__imp__sub_82AB9A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r11,r11,-10840
	ctx.r11.s64 = ctx.r11.s64 + -10840;
	// addi r10,r10,-11168
	ctx.r10.s64 = ctx.r10.s64 + -11168;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// addi r9,r9,-11008
	ctx.r9.s64 = ctx.r9.s64 + -11008;
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
	// addi r11,r11,23456
	ctx.r11.s64 = ctx.r11.s64 + 23456;
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

__attribute__((alias("__imp__sub_82AB9AD0"))) PPC_WEAK_FUNC(sub_82AB9AD0);
PPC_FUNC_IMPL(__imp__sub_82AB9AD0) {
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
	// addi r11,r11,-13280
	ctx.r11.s64 = ctx.r11.s64 + -13280;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9B08"))) PPC_WEAK_FUNC(sub_82AB9B08);
PPC_FUNC_IMPL(__imp__sub_82AB9B08) {
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
	// addi r11,r11,-13296
	ctx.r11.s64 = ctx.r11.s64 + -13296;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9B38"))) PPC_WEAK_FUNC(sub_82AB9B38);
PPC_FUNC_IMPL(__imp__sub_82AB9B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8600
	ctx.r3.s64 = ctx.r11.s64 + 8600;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB9B44"))) PPC_WEAK_FUNC(sub_82AB9B44);
PPC_FUNC_IMPL(__imp__sub_82AB9B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9B48"))) PPC_WEAK_FUNC(sub_82AB9B48);
PPC_FUNC_IMPL(__imp__sub_82AB9B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8624
	ctx.r3.s64 = ctx.r11.s64 + 8624;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB9B54"))) PPC_WEAK_FUNC(sub_82AB9B54);
PPC_FUNC_IMPL(__imp__sub_82AB9B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9B58"))) PPC_WEAK_FUNC(sub_82AB9B58);
PPC_FUNC_IMPL(__imp__sub_82AB9B58) {
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
	// addi r11,r11,-13248
	ctx.r11.s64 = ctx.r11.s64 + -13248;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9B90"))) PPC_WEAK_FUNC(sub_82AB9B90);
PPC_FUNC_IMPL(__imp__sub_82AB9B90) {
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
	// addi r11,r11,-13264
	ctx.r11.s64 = ctx.r11.s64 + -13264;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9BC0"))) PPC_WEAK_FUNC(sub_82AB9BC0);
PPC_FUNC_IMPL(__imp__sub_82AB9BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// addi r3,r11,8648
	ctx.r3.s64 = ctx.r11.s64 + 8648;
	// b 0x828d1968
	sub_828D1968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AB9BCC"))) PPC_WEAK_FUNC(sub_82AB9BCC);
PPC_FUNC_IMPL(__imp__sub_82AB9BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9BD0"))) PPC_WEAK_FUNC(sub_82AB9BD0);
PPC_FUNC_IMPL(__imp__sub_82AB9BD0) {
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
	// addi r11,r11,-12976
	ctx.r11.s64 = ctx.r11.s64 + -12976;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9C08"))) PPC_WEAK_FUNC(sub_82AB9C08);
PPC_FUNC_IMPL(__imp__sub_82AB9C08) {
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
	// addi r11,r11,-13072
	ctx.r11.s64 = ctx.r11.s64 + -13072;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9C38"))) PPC_WEAK_FUNC(sub_82AB9C38);
PPC_FUNC_IMPL(__imp__sub_82AB9C38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28724
	ctx.r4.s64 = ctx.r11.s64 + 28724;
	// bl 0x82316b80
	ctx.lr = 0x82AB9C54;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13197(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13197, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9C6C"))) PPC_WEAK_FUNC(sub_82AB9C6C);
PPC_FUNC_IMPL(__imp__sub_82AB9C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9C70"))) PPC_WEAK_FUNC(sub_82AB9C70);
PPC_FUNC_IMPL(__imp__sub_82AB9C70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28728
	ctx.r4.s64 = ctx.r11.s64 + 28728;
	// bl 0x82316b80
	ctx.lr = 0x82AB9C8C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12931(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12931, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9CA4"))) PPC_WEAK_FUNC(sub_82AB9CA4);
PPC_FUNC_IMPL(__imp__sub_82AB9CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9CA8"))) PPC_WEAK_FUNC(sub_82AB9CA8);
PPC_FUNC_IMPL(__imp__sub_82AB9CA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28732
	ctx.r4.s64 = ctx.r11.s64 + 28732;
	// bl 0x82316b80
	ctx.lr = 0x82AB9CC4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12952(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12952, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9CDC"))) PPC_WEAK_FUNC(sub_82AB9CDC);
PPC_FUNC_IMPL(__imp__sub_82AB9CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9CE0"))) PPC_WEAK_FUNC(sub_82AB9CE0);
PPC_FUNC_IMPL(__imp__sub_82AB9CE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28736
	ctx.r4.s64 = ctx.r11.s64 + 28736;
	// bl 0x82316b80
	ctx.lr = 0x82AB9CFC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13047(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13047, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9D14"))) PPC_WEAK_FUNC(sub_82AB9D14);
PPC_FUNC_IMPL(__imp__sub_82AB9D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9D18"))) PPC_WEAK_FUNC(sub_82AB9D18);
PPC_FUNC_IMPL(__imp__sub_82AB9D18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28740
	ctx.r4.s64 = ctx.r11.s64 + 28740;
	// bl 0x82316b80
	ctx.lr = 0x82AB9D34;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13023(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13023, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9D4C"))) PPC_WEAK_FUNC(sub_82AB9D4C);
PPC_FUNC_IMPL(__imp__sub_82AB9D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9D50"))) PPC_WEAK_FUNC(sub_82AB9D50);
PPC_FUNC_IMPL(__imp__sub_82AB9D50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28744
	ctx.r4.s64 = ctx.r11.s64 + 28744;
	// bl 0x82316b80
	ctx.lr = 0x82AB9D6C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13001(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13001, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9D84"))) PPC_WEAK_FUNC(sub_82AB9D84);
PPC_FUNC_IMPL(__imp__sub_82AB9D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9D88"))) PPC_WEAK_FUNC(sub_82AB9D88);
PPC_FUNC_IMPL(__imp__sub_82AB9D88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28748
	ctx.r4.s64 = ctx.r11.s64 + 28748;
	// bl 0x82316b80
	ctx.lr = 0x82AB9DA4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12997(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12997, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9DBC"))) PPC_WEAK_FUNC(sub_82AB9DBC);
PPC_FUNC_IMPL(__imp__sub_82AB9DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9DC0"))) PPC_WEAK_FUNC(sub_82AB9DC0);
PPC_FUNC_IMPL(__imp__sub_82AB9DC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28752
	ctx.r4.s64 = ctx.r11.s64 + 28752;
	// bl 0x82316b80
	ctx.lr = 0x82AB9DDC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13075(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13075, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9DF4"))) PPC_WEAK_FUNC(sub_82AB9DF4);
PPC_FUNC_IMPL(__imp__sub_82AB9DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9DF8"))) PPC_WEAK_FUNC(sub_82AB9DF8);
PPC_FUNC_IMPL(__imp__sub_82AB9DF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28756
	ctx.r4.s64 = ctx.r11.s64 + 28756;
	// bl 0x82316b80
	ctx.lr = 0x82AB9E14;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12894(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12894, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9E2C"))) PPC_WEAK_FUNC(sub_82AB9E2C);
PPC_FUNC_IMPL(__imp__sub_82AB9E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9E30"))) PPC_WEAK_FUNC(sub_82AB9E30);
PPC_FUNC_IMPL(__imp__sub_82AB9E30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28760
	ctx.r4.s64 = ctx.r11.s64 + 28760;
	// bl 0x82316b80
	ctx.lr = 0x82AB9E4C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13154(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13154, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9E64"))) PPC_WEAK_FUNC(sub_82AB9E64);
PPC_FUNC_IMPL(__imp__sub_82AB9E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9E68"))) PPC_WEAK_FUNC(sub_82AB9E68);
PPC_FUNC_IMPL(__imp__sub_82AB9E68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28764
	ctx.r4.s64 = ctx.r11.s64 + 28764;
	// bl 0x82316b80
	ctx.lr = 0x82AB9E84;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13128(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13128, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9E9C"))) PPC_WEAK_FUNC(sub_82AB9E9C);
PPC_FUNC_IMPL(__imp__sub_82AB9E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9EA0"))) PPC_WEAK_FUNC(sub_82AB9EA0);
PPC_FUNC_IMPL(__imp__sub_82AB9EA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28768
	ctx.r4.s64 = ctx.r11.s64 + 28768;
	// bl 0x82316b80
	ctx.lr = 0x82AB9EBC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13028(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13028, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9ED4"))) PPC_WEAK_FUNC(sub_82AB9ED4);
PPC_FUNC_IMPL(__imp__sub_82AB9ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9ED8"))) PPC_WEAK_FUNC(sub_82AB9ED8);
PPC_FUNC_IMPL(__imp__sub_82AB9ED8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28772
	ctx.r4.s64 = ctx.r11.s64 + 28772;
	// bl 0x82316b80
	ctx.lr = 0x82AB9EF4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12950(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12950, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9F0C"))) PPC_WEAK_FUNC(sub_82AB9F0C);
PPC_FUNC_IMPL(__imp__sub_82AB9F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9F10"))) PPC_WEAK_FUNC(sub_82AB9F10);
PPC_FUNC_IMPL(__imp__sub_82AB9F10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28776
	ctx.r4.s64 = ctx.r11.s64 + 28776;
	// bl 0x82316b80
	ctx.lr = 0x82AB9F2C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13025(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13025, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9F44"))) PPC_WEAK_FUNC(sub_82AB9F44);
PPC_FUNC_IMPL(__imp__sub_82AB9F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9F48"))) PPC_WEAK_FUNC(sub_82AB9F48);
PPC_FUNC_IMPL(__imp__sub_82AB9F48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28780
	ctx.r4.s64 = ctx.r11.s64 + 28780;
	// bl 0x82316b80
	ctx.lr = 0x82AB9F64;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13046(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13046, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9F7C"))) PPC_WEAK_FUNC(sub_82AB9F7C);
PPC_FUNC_IMPL(__imp__sub_82AB9F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9F80"))) PPC_WEAK_FUNC(sub_82AB9F80);
PPC_FUNC_IMPL(__imp__sub_82AB9F80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28784
	ctx.r4.s64 = ctx.r11.s64 + 28784;
	// bl 0x82316b80
	ctx.lr = 0x82AB9F9C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13188(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13188, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9FB4"))) PPC_WEAK_FUNC(sub_82AB9FB4);
PPC_FUNC_IMPL(__imp__sub_82AB9FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9FB8"))) PPC_WEAK_FUNC(sub_82AB9FB8);
PPC_FUNC_IMPL(__imp__sub_82AB9FB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28788
	ctx.r4.s64 = ctx.r11.s64 + 28788;
	// bl 0x82316b80
	ctx.lr = 0x82AB9FD4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13022(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13022, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB9FEC"))) PPC_WEAK_FUNC(sub_82AB9FEC);
PPC_FUNC_IMPL(__imp__sub_82AB9FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB9FF0"))) PPC_WEAK_FUNC(sub_82AB9FF0);
PPC_FUNC_IMPL(__imp__sub_82AB9FF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28792
	ctx.r4.s64 = ctx.r11.s64 + 28792;
	// bl 0x82316b80
	ctx.lr = 0x82ABA00C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12949(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12949, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA024"))) PPC_WEAK_FUNC(sub_82ABA024);
PPC_FUNC_IMPL(__imp__sub_82ABA024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA028"))) PPC_WEAK_FUNC(sub_82ABA028);
PPC_FUNC_IMPL(__imp__sub_82ABA028) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28796
	ctx.r4.s64 = ctx.r11.s64 + 28796;
	// bl 0x82316b80
	ctx.lr = 0x82ABA044;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13155(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13155, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA05C"))) PPC_WEAK_FUNC(sub_82ABA05C);
PPC_FUNC_IMPL(__imp__sub_82ABA05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA060"))) PPC_WEAK_FUNC(sub_82ABA060);
PPC_FUNC_IMPL(__imp__sub_82ABA060) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28800
	ctx.r4.s64 = ctx.r11.s64 + 28800;
	// bl 0x82316b80
	ctx.lr = 0x82ABA07C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13166(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13166, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA094"))) PPC_WEAK_FUNC(sub_82ABA094);
PPC_FUNC_IMPL(__imp__sub_82ABA094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA098"))) PPC_WEAK_FUNC(sub_82ABA098);
PPC_FUNC_IMPL(__imp__sub_82ABA098) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28804
	ctx.r4.s64 = ctx.r11.s64 + 28804;
	// bl 0x82316b80
	ctx.lr = 0x82ABA0B4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13125(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13125, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA0CC"))) PPC_WEAK_FUNC(sub_82ABA0CC);
PPC_FUNC_IMPL(__imp__sub_82ABA0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA0D0"))) PPC_WEAK_FUNC(sub_82ABA0D0);
PPC_FUNC_IMPL(__imp__sub_82ABA0D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28808
	ctx.r4.s64 = ctx.r11.s64 + 28808;
	// bl 0x82316b80
	ctx.lr = 0x82ABA0EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13186(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13186, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA104"))) PPC_WEAK_FUNC(sub_82ABA104);
PPC_FUNC_IMPL(__imp__sub_82ABA104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA108"))) PPC_WEAK_FUNC(sub_82ABA108);
PPC_FUNC_IMPL(__imp__sub_82ABA108) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28812
	ctx.r4.s64 = ctx.r11.s64 + 28812;
	// bl 0x82316b80
	ctx.lr = 0x82ABA124;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13218(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13218, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA13C"))) PPC_WEAK_FUNC(sub_82ABA13C);
PPC_FUNC_IMPL(__imp__sub_82ABA13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA140"))) PPC_WEAK_FUNC(sub_82ABA140);
PPC_FUNC_IMPL(__imp__sub_82ABA140) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28816
	ctx.r4.s64 = ctx.r11.s64 + 28816;
	// bl 0x82316b80
	ctx.lr = 0x82ABA15C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13127(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13127, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA174"))) PPC_WEAK_FUNC(sub_82ABA174);
PPC_FUNC_IMPL(__imp__sub_82ABA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA178"))) PPC_WEAK_FUNC(sub_82ABA178);
PPC_FUNC_IMPL(__imp__sub_82ABA178) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28820
	ctx.r4.s64 = ctx.r11.s64 + 28820;
	// bl 0x82316b80
	ctx.lr = 0x82ABA194;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12979(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12979, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA1AC"))) PPC_WEAK_FUNC(sub_82ABA1AC);
PPC_FUNC_IMPL(__imp__sub_82ABA1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA1B0"))) PPC_WEAK_FUNC(sub_82ABA1B0);
PPC_FUNC_IMPL(__imp__sub_82ABA1B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28824
	ctx.r4.s64 = ctx.r11.s64 + 28824;
	// bl 0x82316b80
	ctx.lr = 0x82ABA1CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13021(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13021, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA1E4"))) PPC_WEAK_FUNC(sub_82ABA1E4);
PPC_FUNC_IMPL(__imp__sub_82ABA1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA1E8"))) PPC_WEAK_FUNC(sub_82ABA1E8);
PPC_FUNC_IMPL(__imp__sub_82ABA1E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28828
	ctx.r4.s64 = ctx.r11.s64 + 28828;
	// bl 0x82316b80
	ctx.lr = 0x82ABA204;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12868(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12868, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA21C"))) PPC_WEAK_FUNC(sub_82ABA21C);
PPC_FUNC_IMPL(__imp__sub_82ABA21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA220"))) PPC_WEAK_FUNC(sub_82ABA220);
PPC_FUNC_IMPL(__imp__sub_82ABA220) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28832
	ctx.r4.s64 = ctx.r11.s64 + 28832;
	// bl 0x82316b80
	ctx.lr = 0x82ABA23C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13185(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13185, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA254"))) PPC_WEAK_FUNC(sub_82ABA254);
PPC_FUNC_IMPL(__imp__sub_82ABA254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA258"))) PPC_WEAK_FUNC(sub_82ABA258);
PPC_FUNC_IMPL(__imp__sub_82ABA258) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28836
	ctx.r4.s64 = ctx.r11.s64 + 28836;
	// bl 0x82316b80
	ctx.lr = 0x82ABA274;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13165(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13165, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA28C"))) PPC_WEAK_FUNC(sub_82ABA28C);
PPC_FUNC_IMPL(__imp__sub_82ABA28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA290"))) PPC_WEAK_FUNC(sub_82ABA290);
PPC_FUNC_IMPL(__imp__sub_82ABA290) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28840
	ctx.r4.s64 = ctx.r11.s64 + 28840;
	// bl 0x82316b80
	ctx.lr = 0x82ABA2AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13220(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13220, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA2C4"))) PPC_WEAK_FUNC(sub_82ABA2C4);
PPC_FUNC_IMPL(__imp__sub_82ABA2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA2C8"))) PPC_WEAK_FUNC(sub_82ABA2C8);
PPC_FUNC_IMPL(__imp__sub_82ABA2C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28844
	ctx.r4.s64 = ctx.r11.s64 + 28844;
	// bl 0x82316b80
	ctx.lr = 0x82ABA2E4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13076(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13076, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA2FC"))) PPC_WEAK_FUNC(sub_82ABA2FC);
PPC_FUNC_IMPL(__imp__sub_82ABA2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA300"))) PPC_WEAK_FUNC(sub_82ABA300);
PPC_FUNC_IMPL(__imp__sub_82ABA300) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28848
	ctx.r4.s64 = ctx.r11.s64 + 28848;
	// bl 0x82316b80
	ctx.lr = 0x82ABA31C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12978(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12978, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA334"))) PPC_WEAK_FUNC(sub_82ABA334);
PPC_FUNC_IMPL(__imp__sub_82ABA334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA338"))) PPC_WEAK_FUNC(sub_82ABA338);
PPC_FUNC_IMPL(__imp__sub_82ABA338) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28852
	ctx.r4.s64 = ctx.r11.s64 + 28852;
	// bl 0x82316b80
	ctx.lr = 0x82ABA354;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13200(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13200, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA36C"))) PPC_WEAK_FUNC(sub_82ABA36C);
PPC_FUNC_IMPL(__imp__sub_82ABA36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA370"))) PPC_WEAK_FUNC(sub_82ABA370);
PPC_FUNC_IMPL(__imp__sub_82ABA370) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28856
	ctx.r4.s64 = ctx.r11.s64 + 28856;
	// bl 0x82316b80
	ctx.lr = 0x82ABA38C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13026(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13026, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA3A4"))) PPC_WEAK_FUNC(sub_82ABA3A4);
PPC_FUNC_IMPL(__imp__sub_82ABA3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA3A8"))) PPC_WEAK_FUNC(sub_82ABA3A8);
PPC_FUNC_IMPL(__imp__sub_82ABA3A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28860
	ctx.r4.s64 = ctx.r11.s64 + 28860;
	// bl 0x82316b80
	ctx.lr = 0x82ABA3C4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13187(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13187, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA3DC"))) PPC_WEAK_FUNC(sub_82ABA3DC);
PPC_FUNC_IMPL(__imp__sub_82ABA3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA3E0"))) PPC_WEAK_FUNC(sub_82ABA3E0);
PPC_FUNC_IMPL(__imp__sub_82ABA3E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28864
	ctx.r4.s64 = ctx.r11.s64 + 28864;
	// bl 0x82316b80
	ctx.lr = 0x82ABA3FC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13153(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13153, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA414"))) PPC_WEAK_FUNC(sub_82ABA414);
PPC_FUNC_IMPL(__imp__sub_82ABA414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA418"))) PPC_WEAK_FUNC(sub_82ABA418);
PPC_FUNC_IMPL(__imp__sub_82ABA418) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28868
	ctx.r4.s64 = ctx.r11.s64 + 28868;
	// bl 0x82316b80
	ctx.lr = 0x82ABA434;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12893(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12893, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA44C"))) PPC_WEAK_FUNC(sub_82ABA44C);
PPC_FUNC_IMPL(__imp__sub_82ABA44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA450"))) PPC_WEAK_FUNC(sub_82ABA450);
PPC_FUNC_IMPL(__imp__sub_82ABA450) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28872
	ctx.r4.s64 = ctx.r11.s64 + 28872;
	// bl 0x82316b80
	ctx.lr = 0x82ABA46C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12998(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12998, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA484"))) PPC_WEAK_FUNC(sub_82ABA484);
PPC_FUNC_IMPL(__imp__sub_82ABA484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA488"))) PPC_WEAK_FUNC(sub_82ABA488);
PPC_FUNC_IMPL(__imp__sub_82ABA488) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28876
	ctx.r4.s64 = ctx.r11.s64 + 28876;
	// bl 0x82316b80
	ctx.lr = 0x82ABA4A4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-12977(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12977, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA4BC"))) PPC_WEAK_FUNC(sub_82ABA4BC);
PPC_FUNC_IMPL(__imp__sub_82ABA4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA4C0"))) PPC_WEAK_FUNC(sub_82ABA4C0);
PPC_FUNC_IMPL(__imp__sub_82ABA4C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28880
	ctx.r4.s64 = ctx.r11.s64 + 28880;
	// bl 0x82316b80
	ctx.lr = 0x82ABA4DC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13198(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13198, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA4F4"))) PPC_WEAK_FUNC(sub_82ABA4F4);
PPC_FUNC_IMPL(__imp__sub_82ABA4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABA4F8"))) PPC_WEAK_FUNC(sub_82ABA4F8);
PPC_FUNC_IMPL(__imp__sub_82ABA4F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28884
	ctx.r4.s64 = ctx.r11.s64 + 28884;
	// bl 0x82316b80
	ctx.lr = 0x82ABA514;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-13156(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13156, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABA52C"))) PPC_WEAK_FUNC(sub_82ABA52C);
PPC_FUNC_IMPL(__imp__sub_82ABA52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

