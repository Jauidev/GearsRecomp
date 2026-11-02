#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AB51BC"))) PPC_WEAK_FUNC(sub_82AB51BC);
PPC_FUNC_IMPL(__imp__sub_82AB51BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB51C0"))) PPC_WEAK_FUNC(sub_82AB51C0);
PPC_FUNC_IMPL(__imp__sub_82AB51C0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,145
	ctx.r3.s64 = 145;
	// addi r4,r11,32320
	ctx.r4.s64 = ctx.r11.s64 + 32320;
	// bl 0x82316b80
	ctx.lr = 0x82AB51DC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14433(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14433, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB51F4"))) PPC_WEAK_FUNC(sub_82AB51F4);
PPC_FUNC_IMPL(__imp__sub_82AB51F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB51F8"))) PPC_WEAK_FUNC(sub_82AB51F8);
PPC_FUNC_IMPL(__imp__sub_82AB51F8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,146
	ctx.r3.s64 = 146;
	// addi r4,r11,32324
	ctx.r4.s64 = ctx.r11.s64 + 32324;
	// bl 0x82316b80
	ctx.lr = 0x82AB5214;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14432(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14432, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB522C"))) PPC_WEAK_FUNC(sub_82AB522C);
PPC_FUNC_IMPL(__imp__sub_82AB522C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5230"))) PPC_WEAK_FUNC(sub_82AB5230);
PPC_FUNC_IMPL(__imp__sub_82AB5230) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,147
	ctx.r3.s64 = 147;
	// addi r4,r11,32328
	ctx.r4.s64 = ctx.r11.s64 + 32328;
	// bl 0x82316b80
	ctx.lr = 0x82AB524C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14431(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14431, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5264"))) PPC_WEAK_FUNC(sub_82AB5264);
PPC_FUNC_IMPL(__imp__sub_82AB5264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5268"))) PPC_WEAK_FUNC(sub_82AB5268);
PPC_FUNC_IMPL(__imp__sub_82AB5268) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,148
	ctx.r3.s64 = 148;
	// addi r4,r11,32332
	ctx.r4.s64 = ctx.r11.s64 + 32332;
	// bl 0x82316b80
	ctx.lr = 0x82AB5284;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14430(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14430, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB529C"))) PPC_WEAK_FUNC(sub_82AB529C);
PPC_FUNC_IMPL(__imp__sub_82AB529C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB52A0"))) PPC_WEAK_FUNC(sub_82AB52A0);
PPC_FUNC_IMPL(__imp__sub_82AB52A0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,149
	ctx.r3.s64 = 149;
	// addi r4,r11,32336
	ctx.r4.s64 = ctx.r11.s64 + 32336;
	// bl 0x82316b80
	ctx.lr = 0x82AB52BC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14429(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14429, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB52D4"))) PPC_WEAK_FUNC(sub_82AB52D4);
PPC_FUNC_IMPL(__imp__sub_82AB52D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB52D8"))) PPC_WEAK_FUNC(sub_82AB52D8);
PPC_FUNC_IMPL(__imp__sub_82AB52D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,150
	ctx.r3.s64 = 150;
	// addi r4,r11,32340
	ctx.r4.s64 = ctx.r11.s64 + 32340;
	// bl 0x82316b80
	ctx.lr = 0x82AB52F4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14428(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14428, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB530C"))) PPC_WEAK_FUNC(sub_82AB530C);
PPC_FUNC_IMPL(__imp__sub_82AB530C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5310"))) PPC_WEAK_FUNC(sub_82AB5310);
PPC_FUNC_IMPL(__imp__sub_82AB5310) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,151
	ctx.r3.s64 = 151;
	// addi r4,r11,32344
	ctx.r4.s64 = ctx.r11.s64 + 32344;
	// bl 0x82316b80
	ctx.lr = 0x82AB532C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14427(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14427, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5344"))) PPC_WEAK_FUNC(sub_82AB5344);
PPC_FUNC_IMPL(__imp__sub_82AB5344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5348"))) PPC_WEAK_FUNC(sub_82AB5348);
PPC_FUNC_IMPL(__imp__sub_82AB5348) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,152
	ctx.r3.s64 = 152;
	// addi r4,r11,32348
	ctx.r4.s64 = ctx.r11.s64 + 32348;
	// bl 0x82316b80
	ctx.lr = 0x82AB5364;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14426(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14426, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB537C"))) PPC_WEAK_FUNC(sub_82AB537C);
PPC_FUNC_IMPL(__imp__sub_82AB537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5380"))) PPC_WEAK_FUNC(sub_82AB5380);
PPC_FUNC_IMPL(__imp__sub_82AB5380) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,153
	ctx.r3.s64 = 153;
	// addi r4,r11,32352
	ctx.r4.s64 = ctx.r11.s64 + 32352;
	// bl 0x82316b80
	ctx.lr = 0x82AB539C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14425(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14425, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB53B4"))) PPC_WEAK_FUNC(sub_82AB53B4);
PPC_FUNC_IMPL(__imp__sub_82AB53B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB53B8"))) PPC_WEAK_FUNC(sub_82AB53B8);
PPC_FUNC_IMPL(__imp__sub_82AB53B8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,154
	ctx.r3.s64 = 154;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82316b80
	ctx.lr = 0x82AB53D4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14424(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14424, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB53EC"))) PPC_WEAK_FUNC(sub_82AB53EC);
PPC_FUNC_IMPL(__imp__sub_82AB53EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB53F0"))) PPC_WEAK_FUNC(sub_82AB53F0);
PPC_FUNC_IMPL(__imp__sub_82AB53F0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,155
	ctx.r3.s64 = 155;
	// addi r4,r11,32360
	ctx.r4.s64 = ctx.r11.s64 + 32360;
	// bl 0x82316b80
	ctx.lr = 0x82AB540C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14423(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14423, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5424"))) PPC_WEAK_FUNC(sub_82AB5424);
PPC_FUNC_IMPL(__imp__sub_82AB5424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5428"))) PPC_WEAK_FUNC(sub_82AB5428);
PPC_FUNC_IMPL(__imp__sub_82AB5428) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,156
	ctx.r3.s64 = 156;
	// addi r4,r11,32364
	ctx.r4.s64 = ctx.r11.s64 + 32364;
	// bl 0x82316b80
	ctx.lr = 0x82AB5444;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14422(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14422, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB545C"))) PPC_WEAK_FUNC(sub_82AB545C);
PPC_FUNC_IMPL(__imp__sub_82AB545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5460"))) PPC_WEAK_FUNC(sub_82AB5460);
PPC_FUNC_IMPL(__imp__sub_82AB5460) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,157
	ctx.r3.s64 = 157;
	// addi r4,r11,32368
	ctx.r4.s64 = ctx.r11.s64 + 32368;
	// bl 0x82316b80
	ctx.lr = 0x82AB547C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14421(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14421, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5494"))) PPC_WEAK_FUNC(sub_82AB5494);
PPC_FUNC_IMPL(__imp__sub_82AB5494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5498"))) PPC_WEAK_FUNC(sub_82AB5498);
PPC_FUNC_IMPL(__imp__sub_82AB5498) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,158
	ctx.r3.s64 = 158;
	// addi r4,r11,32372
	ctx.r4.s64 = ctx.r11.s64 + 32372;
	// bl 0x82316b80
	ctx.lr = 0x82AB54B4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14420(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14420, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB54CC"))) PPC_WEAK_FUNC(sub_82AB54CC);
PPC_FUNC_IMPL(__imp__sub_82AB54CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB54D0"))) PPC_WEAK_FUNC(sub_82AB54D0);
PPC_FUNC_IMPL(__imp__sub_82AB54D0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,159
	ctx.r3.s64 = 159;
	// addi r4,r11,32376
	ctx.r4.s64 = ctx.r11.s64 + 32376;
	// bl 0x82316b80
	ctx.lr = 0x82AB54EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14419(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14419, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5504"))) PPC_WEAK_FUNC(sub_82AB5504);
PPC_FUNC_IMPL(__imp__sub_82AB5504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5508"))) PPC_WEAK_FUNC(sub_82AB5508);
PPC_FUNC_IMPL(__imp__sub_82AB5508) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,160
	ctx.r3.s64 = 160;
	// addi r4,r11,32380
	ctx.r4.s64 = ctx.r11.s64 + 32380;
	// bl 0x82316b80
	ctx.lr = 0x82AB5524;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14418(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14418, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB553C"))) PPC_WEAK_FUNC(sub_82AB553C);
PPC_FUNC_IMPL(__imp__sub_82AB553C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5540"))) PPC_WEAK_FUNC(sub_82AB5540);
PPC_FUNC_IMPL(__imp__sub_82AB5540) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,161
	ctx.r3.s64 = 161;
	// addi r4,r11,32384
	ctx.r4.s64 = ctx.r11.s64 + 32384;
	// bl 0x82316b80
	ctx.lr = 0x82AB555C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14417(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14417, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5574"))) PPC_WEAK_FUNC(sub_82AB5574);
PPC_FUNC_IMPL(__imp__sub_82AB5574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5578"))) PPC_WEAK_FUNC(sub_82AB5578);
PPC_FUNC_IMPL(__imp__sub_82AB5578) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,162
	ctx.r3.s64 = 162;
	// addi r4,r11,32388
	ctx.r4.s64 = ctx.r11.s64 + 32388;
	// bl 0x82316b80
	ctx.lr = 0x82AB5594;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14416(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14416, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB55AC"))) PPC_WEAK_FUNC(sub_82AB55AC);
PPC_FUNC_IMPL(__imp__sub_82AB55AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB55B0"))) PPC_WEAK_FUNC(sub_82AB55B0);
PPC_FUNC_IMPL(__imp__sub_82AB55B0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,163
	ctx.r3.s64 = 163;
	// addi r4,r11,32392
	ctx.r4.s64 = ctx.r11.s64 + 32392;
	// bl 0x82316b80
	ctx.lr = 0x82AB55CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14415(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14415, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB55E4"))) PPC_WEAK_FUNC(sub_82AB55E4);
PPC_FUNC_IMPL(__imp__sub_82AB55E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB55E8"))) PPC_WEAK_FUNC(sub_82AB55E8);
PPC_FUNC_IMPL(__imp__sub_82AB55E8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,164
	ctx.r3.s64 = 164;
	// addi r4,r11,32396
	ctx.r4.s64 = ctx.r11.s64 + 32396;
	// bl 0x82316b80
	ctx.lr = 0x82AB5604;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14414(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14414, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB561C"))) PPC_WEAK_FUNC(sub_82AB561C);
PPC_FUNC_IMPL(__imp__sub_82AB561C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5620"))) PPC_WEAK_FUNC(sub_82AB5620);
PPC_FUNC_IMPL(__imp__sub_82AB5620) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,165
	ctx.r3.s64 = 165;
	// addi r4,r11,32400
	ctx.r4.s64 = ctx.r11.s64 + 32400;
	// bl 0x82316b80
	ctx.lr = 0x82AB563C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14413(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14413, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5654"))) PPC_WEAK_FUNC(sub_82AB5654);
PPC_FUNC_IMPL(__imp__sub_82AB5654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5658"))) PPC_WEAK_FUNC(sub_82AB5658);
PPC_FUNC_IMPL(__imp__sub_82AB5658) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,166
	ctx.r3.s64 = 166;
	// addi r4,r11,32404
	ctx.r4.s64 = ctx.r11.s64 + 32404;
	// bl 0x82316b80
	ctx.lr = 0x82AB5674;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14412(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14412, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB568C"))) PPC_WEAK_FUNC(sub_82AB568C);
PPC_FUNC_IMPL(__imp__sub_82AB568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5690"))) PPC_WEAK_FUNC(sub_82AB5690);
PPC_FUNC_IMPL(__imp__sub_82AB5690) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,167
	ctx.r3.s64 = 167;
	// addi r4,r11,32408
	ctx.r4.s64 = ctx.r11.s64 + 32408;
	// bl 0x82316b80
	ctx.lr = 0x82AB56AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14411(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14411, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB56C4"))) PPC_WEAK_FUNC(sub_82AB56C4);
PPC_FUNC_IMPL(__imp__sub_82AB56C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB56C8"))) PPC_WEAK_FUNC(sub_82AB56C8);
PPC_FUNC_IMPL(__imp__sub_82AB56C8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,249
	ctx.r3.s64 = 249;
	// addi r4,r11,32412
	ctx.r4.s64 = ctx.r11.s64 + 32412;
	// bl 0x82316b80
	ctx.lr = 0x82AB56E4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14410(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14410, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB56FC"))) PPC_WEAK_FUNC(sub_82AB56FC);
PPC_FUNC_IMPL(__imp__sub_82AB56FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5700"))) PPC_WEAK_FUNC(sub_82AB5700);
PPC_FUNC_IMPL(__imp__sub_82AB5700) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,250
	ctx.r3.s64 = 250;
	// addi r4,r11,32416
	ctx.r4.s64 = ctx.r11.s64 + 32416;
	// bl 0x82316b80
	ctx.lr = 0x82AB571C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14409(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14409, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5734"))) PPC_WEAK_FUNC(sub_82AB5734);
PPC_FUNC_IMPL(__imp__sub_82AB5734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5738"))) PPC_WEAK_FUNC(sub_82AB5738);
PPC_FUNC_IMPL(__imp__sub_82AB5738) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,251
	ctx.r3.s64 = 251;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// bl 0x82316b80
	ctx.lr = 0x82AB5754;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14408(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14408, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB576C"))) PPC_WEAK_FUNC(sub_82AB576C);
PPC_FUNC_IMPL(__imp__sub_82AB576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5770"))) PPC_WEAK_FUNC(sub_82AB5770);
PPC_FUNC_IMPL(__imp__sub_82AB5770) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,169
	ctx.r3.s64 = 169;
	// addi r4,r11,32424
	ctx.r4.s64 = ctx.r11.s64 + 32424;
	// bl 0x82316b80
	ctx.lr = 0x82AB578C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14407(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14407, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB57A4"))) PPC_WEAK_FUNC(sub_82AB57A4);
PPC_FUNC_IMPL(__imp__sub_82AB57A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB57A8"))) PPC_WEAK_FUNC(sub_82AB57A8);
PPC_FUNC_IMPL(__imp__sub_82AB57A8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,170
	ctx.r3.s64 = 170;
	// addi r4,r11,32428
	ctx.r4.s64 = ctx.r11.s64 + 32428;
	// bl 0x82316b80
	ctx.lr = 0x82AB57C4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14406(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14406, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB57DC"))) PPC_WEAK_FUNC(sub_82AB57DC);
PPC_FUNC_IMPL(__imp__sub_82AB57DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB57E0"))) PPC_WEAK_FUNC(sub_82AB57E0);
PPC_FUNC_IMPL(__imp__sub_82AB57E0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,171
	ctx.r3.s64 = 171;
	// addi r4,r11,32432
	ctx.r4.s64 = ctx.r11.s64 + 32432;
	// bl 0x82316b80
	ctx.lr = 0x82AB57FC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14405(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14405, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5814"))) PPC_WEAK_FUNC(sub_82AB5814);
PPC_FUNC_IMPL(__imp__sub_82AB5814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5818"))) PPC_WEAK_FUNC(sub_82AB5818);
PPC_FUNC_IMPL(__imp__sub_82AB5818) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,172
	ctx.r3.s64 = 172;
	// addi r4,r11,32436
	ctx.r4.s64 = ctx.r11.s64 + 32436;
	// bl 0x82316b80
	ctx.lr = 0x82AB5834;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14404(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14404, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB584C"))) PPC_WEAK_FUNC(sub_82AB584C);
PPC_FUNC_IMPL(__imp__sub_82AB584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5850"))) PPC_WEAK_FUNC(sub_82AB5850);
PPC_FUNC_IMPL(__imp__sub_82AB5850) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,173
	ctx.r3.s64 = 173;
	// addi r4,r11,32440
	ctx.r4.s64 = ctx.r11.s64 + 32440;
	// bl 0x82316b80
	ctx.lr = 0x82AB586C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14403(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14403, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5884"))) PPC_WEAK_FUNC(sub_82AB5884);
PPC_FUNC_IMPL(__imp__sub_82AB5884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5888"))) PPC_WEAK_FUNC(sub_82AB5888);
PPC_FUNC_IMPL(__imp__sub_82AB5888) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,174
	ctx.r3.s64 = 174;
	// addi r4,r11,32444
	ctx.r4.s64 = ctx.r11.s64 + 32444;
	// bl 0x82316b80
	ctx.lr = 0x82AB58A4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14402(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14402, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB58BC"))) PPC_WEAK_FUNC(sub_82AB58BC);
PPC_FUNC_IMPL(__imp__sub_82AB58BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB58C0"))) PPC_WEAK_FUNC(sub_82AB58C0);
PPC_FUNC_IMPL(__imp__sub_82AB58C0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,175
	ctx.r3.s64 = 175;
	// addi r4,r11,32448
	ctx.r4.s64 = ctx.r11.s64 + 32448;
	// bl 0x82316b80
	ctx.lr = 0x82AB58DC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14401(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14401, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB58F4"))) PPC_WEAK_FUNC(sub_82AB58F4);
PPC_FUNC_IMPL(__imp__sub_82AB58F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB58F8"))) PPC_WEAK_FUNC(sub_82AB58F8);
PPC_FUNC_IMPL(__imp__sub_82AB58F8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,176
	ctx.r3.s64 = 176;
	// addi r4,r11,32452
	ctx.r4.s64 = ctx.r11.s64 + 32452;
	// bl 0x82316b80
	ctx.lr = 0x82AB5914;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14400(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14400, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB592C"))) PPC_WEAK_FUNC(sub_82AB592C);
PPC_FUNC_IMPL(__imp__sub_82AB592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5930"))) PPC_WEAK_FUNC(sub_82AB5930);
PPC_FUNC_IMPL(__imp__sub_82AB5930) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,177
	ctx.r3.s64 = 177;
	// addi r4,r11,32456
	ctx.r4.s64 = ctx.r11.s64 + 32456;
	// bl 0x82316b80
	ctx.lr = 0x82AB594C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14399(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14399, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5964"))) PPC_WEAK_FUNC(sub_82AB5964);
PPC_FUNC_IMPL(__imp__sub_82AB5964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5968"))) PPC_WEAK_FUNC(sub_82AB5968);
PPC_FUNC_IMPL(__imp__sub_82AB5968) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,178
	ctx.r3.s64 = 178;
	// addi r4,r11,32460
	ctx.r4.s64 = ctx.r11.s64 + 32460;
	// bl 0x82316b80
	ctx.lr = 0x82AB5984;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14398(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14398, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB599C"))) PPC_WEAK_FUNC(sub_82AB599C);
PPC_FUNC_IMPL(__imp__sub_82AB599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB59A0"))) PPC_WEAK_FUNC(sub_82AB59A0);
PPC_FUNC_IMPL(__imp__sub_82AB59A0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,179
	ctx.r3.s64 = 179;
	// addi r4,r11,32464
	ctx.r4.s64 = ctx.r11.s64 + 32464;
	// bl 0x82316b80
	ctx.lr = 0x82AB59BC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14397(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14397, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB59D4"))) PPC_WEAK_FUNC(sub_82AB59D4);
PPC_FUNC_IMPL(__imp__sub_82AB59D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB59D8"))) PPC_WEAK_FUNC(sub_82AB59D8);
PPC_FUNC_IMPL(__imp__sub_82AB59D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,180
	ctx.r3.s64 = 180;
	// addi r4,r11,32468
	ctx.r4.s64 = ctx.r11.s64 + 32468;
	// bl 0x82316b80
	ctx.lr = 0x82AB59F4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14396(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14396, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5A0C"))) PPC_WEAK_FUNC(sub_82AB5A0C);
PPC_FUNC_IMPL(__imp__sub_82AB5A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5A10"))) PPC_WEAK_FUNC(sub_82AB5A10);
PPC_FUNC_IMPL(__imp__sub_82AB5A10) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,181
	ctx.r3.s64 = 181;
	// addi r4,r11,32472
	ctx.r4.s64 = ctx.r11.s64 + 32472;
	// bl 0x82316b80
	ctx.lr = 0x82AB5A2C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14395(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14395, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5A44"))) PPC_WEAK_FUNC(sub_82AB5A44);
PPC_FUNC_IMPL(__imp__sub_82AB5A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5A48"))) PPC_WEAK_FUNC(sub_82AB5A48);
PPC_FUNC_IMPL(__imp__sub_82AB5A48) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,210
	ctx.r3.s64 = 210;
	// addi r4,r11,32476
	ctx.r4.s64 = ctx.r11.s64 + 32476;
	// bl 0x82316b80
	ctx.lr = 0x82AB5A64;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14394(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14394, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5A7C"))) PPC_WEAK_FUNC(sub_82AB5A7C);
PPC_FUNC_IMPL(__imp__sub_82AB5A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5A80"))) PPC_WEAK_FUNC(sub_82AB5A80);
PPC_FUNC_IMPL(__imp__sub_82AB5A80) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,182
	ctx.r3.s64 = 182;
	// addi r4,r11,32480
	ctx.r4.s64 = ctx.r11.s64 + 32480;
	// bl 0x82316b80
	ctx.lr = 0x82AB5A9C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14393(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14393, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5AB4"))) PPC_WEAK_FUNC(sub_82AB5AB4);
PPC_FUNC_IMPL(__imp__sub_82AB5AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5AB8"))) PPC_WEAK_FUNC(sub_82AB5AB8);
PPC_FUNC_IMPL(__imp__sub_82AB5AB8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,183
	ctx.r3.s64 = 183;
	// addi r4,r11,32484
	ctx.r4.s64 = ctx.r11.s64 + 32484;
	// bl 0x82316b80
	ctx.lr = 0x82AB5AD4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14392(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14392, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5AEC"))) PPC_WEAK_FUNC(sub_82AB5AEC);
PPC_FUNC_IMPL(__imp__sub_82AB5AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5AF0"))) PPC_WEAK_FUNC(sub_82AB5AF0);
PPC_FUNC_IMPL(__imp__sub_82AB5AF0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,184
	ctx.r3.s64 = 184;
	// addi r4,r11,32488
	ctx.r4.s64 = ctx.r11.s64 + 32488;
	// bl 0x82316b80
	ctx.lr = 0x82AB5B0C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14391(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14391, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5B24"))) PPC_WEAK_FUNC(sub_82AB5B24);
PPC_FUNC_IMPL(__imp__sub_82AB5B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5B28"))) PPC_WEAK_FUNC(sub_82AB5B28);
PPC_FUNC_IMPL(__imp__sub_82AB5B28) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,185
	ctx.r3.s64 = 185;
	// addi r4,r11,32492
	ctx.r4.s64 = ctx.r11.s64 + 32492;
	// bl 0x82316b80
	ctx.lr = 0x82AB5B44;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14390(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14390, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5B5C"))) PPC_WEAK_FUNC(sub_82AB5B5C);
PPC_FUNC_IMPL(__imp__sub_82AB5B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5B60"))) PPC_WEAK_FUNC(sub_82AB5B60);
PPC_FUNC_IMPL(__imp__sub_82AB5B60) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,186
	ctx.r3.s64 = 186;
	// addi r4,r11,32496
	ctx.r4.s64 = ctx.r11.s64 + 32496;
	// bl 0x82316b80
	ctx.lr = 0x82AB5B7C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14389(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14389, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5B94"))) PPC_WEAK_FUNC(sub_82AB5B94);
PPC_FUNC_IMPL(__imp__sub_82AB5B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5B98"))) PPC_WEAK_FUNC(sub_82AB5B98);
PPC_FUNC_IMPL(__imp__sub_82AB5B98) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,187
	ctx.r3.s64 = 187;
	// addi r4,r11,32500
	ctx.r4.s64 = ctx.r11.s64 + 32500;
	// bl 0x82316b80
	ctx.lr = 0x82AB5BB4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14388(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14388, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5BCC"))) PPC_WEAK_FUNC(sub_82AB5BCC);
PPC_FUNC_IMPL(__imp__sub_82AB5BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5BD0"))) PPC_WEAK_FUNC(sub_82AB5BD0);
PPC_FUNC_IMPL(__imp__sub_82AB5BD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x82316b80
	ctx.lr = 0x82AB5BEC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14387(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14387, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5C04"))) PPC_WEAK_FUNC(sub_82AB5C04);
PPC_FUNC_IMPL(__imp__sub_82AB5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5C08"))) PPC_WEAK_FUNC(sub_82AB5C08);
PPC_FUNC_IMPL(__imp__sub_82AB5C08) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,188
	ctx.r3.s64 = 188;
	// addi r4,r11,32508
	ctx.r4.s64 = ctx.r11.s64 + 32508;
	// bl 0x82316b80
	ctx.lr = 0x82AB5C24;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14386(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14386, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5C3C"))) PPC_WEAK_FUNC(sub_82AB5C3C);
PPC_FUNC_IMPL(__imp__sub_82AB5C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5C40"))) PPC_WEAK_FUNC(sub_82AB5C40);
PPC_FUNC_IMPL(__imp__sub_82AB5C40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32512
	ctx.r4.s64 = ctx.r11.s64 + 32512;
	// bl 0x82316b80
	ctx.lr = 0x82AB5C5C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14385(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14385, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5C74"))) PPC_WEAK_FUNC(sub_82AB5C74);
PPC_FUNC_IMPL(__imp__sub_82AB5C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5C78"))) PPC_WEAK_FUNC(sub_82AB5C78);
PPC_FUNC_IMPL(__imp__sub_82AB5C78) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,189
	ctx.r3.s64 = 189;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// bl 0x82316b80
	ctx.lr = 0x82AB5C94;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14384(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14384, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5CAC"))) PPC_WEAK_FUNC(sub_82AB5CAC);
PPC_FUNC_IMPL(__imp__sub_82AB5CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5CB0"))) PPC_WEAK_FUNC(sub_82AB5CB0);
PPC_FUNC_IMPL(__imp__sub_82AB5CB0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,190
	ctx.r3.s64 = 190;
	// addi r4,r11,32520
	ctx.r4.s64 = ctx.r11.s64 + 32520;
	// bl 0x82316b80
	ctx.lr = 0x82AB5CCC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14383(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14383, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5CE4"))) PPC_WEAK_FUNC(sub_82AB5CE4);
PPC_FUNC_IMPL(__imp__sub_82AB5CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5CE8"))) PPC_WEAK_FUNC(sub_82AB5CE8);
PPC_FUNC_IMPL(__imp__sub_82AB5CE8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,191
	ctx.r3.s64 = 191;
	// addi r4,r11,32524
	ctx.r4.s64 = ctx.r11.s64 + 32524;
	// bl 0x82316b80
	ctx.lr = 0x82AB5D04;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14382(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14382, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5D1C"))) PPC_WEAK_FUNC(sub_82AB5D1C);
PPC_FUNC_IMPL(__imp__sub_82AB5D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5D20"))) PPC_WEAK_FUNC(sub_82AB5D20);
PPC_FUNC_IMPL(__imp__sub_82AB5D20) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,192
	ctx.r3.s64 = 192;
	// addi r4,r11,32528
	ctx.r4.s64 = ctx.r11.s64 + 32528;
	// bl 0x82316b80
	ctx.lr = 0x82AB5D3C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14381(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14381, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5D54"))) PPC_WEAK_FUNC(sub_82AB5D54);
PPC_FUNC_IMPL(__imp__sub_82AB5D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5D58"))) PPC_WEAK_FUNC(sub_82AB5D58);
PPC_FUNC_IMPL(__imp__sub_82AB5D58) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,193
	ctx.r3.s64 = 193;
	// addi r4,r11,32532
	ctx.r4.s64 = ctx.r11.s64 + 32532;
	// bl 0x82316b80
	ctx.lr = 0x82AB5D74;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14380(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14380, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5D8C"))) PPC_WEAK_FUNC(sub_82AB5D8C);
PPC_FUNC_IMPL(__imp__sub_82AB5D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5D90"))) PPC_WEAK_FUNC(sub_82AB5D90);
PPC_FUNC_IMPL(__imp__sub_82AB5D90) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,194
	ctx.r3.s64 = 194;
	// addi r4,r11,32536
	ctx.r4.s64 = ctx.r11.s64 + 32536;
	// bl 0x82316b80
	ctx.lr = 0x82AB5DAC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14379(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14379, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5DC4"))) PPC_WEAK_FUNC(sub_82AB5DC4);
PPC_FUNC_IMPL(__imp__sub_82AB5DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5DC8"))) PPC_WEAK_FUNC(sub_82AB5DC8);
PPC_FUNC_IMPL(__imp__sub_82AB5DC8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,195
	ctx.r3.s64 = 195;
	// addi r4,r11,32540
	ctx.r4.s64 = ctx.r11.s64 + 32540;
	// bl 0x82316b80
	ctx.lr = 0x82AB5DE4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14378(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14378, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5DFC"))) PPC_WEAK_FUNC(sub_82AB5DFC);
PPC_FUNC_IMPL(__imp__sub_82AB5DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5E00"))) PPC_WEAK_FUNC(sub_82AB5E00);
PPC_FUNC_IMPL(__imp__sub_82AB5E00) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,244
	ctx.r3.s64 = 244;
	// addi r4,r11,32544
	ctx.r4.s64 = ctx.r11.s64 + 32544;
	// bl 0x82316b80
	ctx.lr = 0x82AB5E1C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14377(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14377, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5E34"))) PPC_WEAK_FUNC(sub_82AB5E34);
PPC_FUNC_IMPL(__imp__sub_82AB5E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5E38"))) PPC_WEAK_FUNC(sub_82AB5E38);
PPC_FUNC_IMPL(__imp__sub_82AB5E38) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,245
	ctx.r3.s64 = 245;
	// addi r4,r11,32548
	ctx.r4.s64 = ctx.r11.s64 + 32548;
	// bl 0x82316b80
	ctx.lr = 0x82AB5E54;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14376(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14376, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5E6C"))) PPC_WEAK_FUNC(sub_82AB5E6C);
PPC_FUNC_IMPL(__imp__sub_82AB5E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5E70"))) PPC_WEAK_FUNC(sub_82AB5E70);
PPC_FUNC_IMPL(__imp__sub_82AB5E70) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,246
	ctx.r3.s64 = 246;
	// addi r4,r11,32552
	ctx.r4.s64 = ctx.r11.s64 + 32552;
	// bl 0x82316b80
	ctx.lr = 0x82AB5E8C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14375(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14375, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5EA4"))) PPC_WEAK_FUNC(sub_82AB5EA4);
PPC_FUNC_IMPL(__imp__sub_82AB5EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5EA8"))) PPC_WEAK_FUNC(sub_82AB5EA8);
PPC_FUNC_IMPL(__imp__sub_82AB5EA8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,247
	ctx.r3.s64 = 247;
	// addi r4,r11,32556
	ctx.r4.s64 = ctx.r11.s64 + 32556;
	// bl 0x82316b80
	ctx.lr = 0x82AB5EC4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14374(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14374, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5EDC"))) PPC_WEAK_FUNC(sub_82AB5EDC);
PPC_FUNC_IMPL(__imp__sub_82AB5EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5EE0"))) PPC_WEAK_FUNC(sub_82AB5EE0);
PPC_FUNC_IMPL(__imp__sub_82AB5EE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32560
	ctx.r4.s64 = ctx.r11.s64 + 32560;
	// bl 0x82316b80
	ctx.lr = 0x82AB5EFC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14373(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14373, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5F14"))) PPC_WEAK_FUNC(sub_82AB5F14);
PPC_FUNC_IMPL(__imp__sub_82AB5F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5F18"))) PPC_WEAK_FUNC(sub_82AB5F18);
PPC_FUNC_IMPL(__imp__sub_82AB5F18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32564
	ctx.r4.s64 = ctx.r11.s64 + 32564;
	// bl 0x82316b80
	ctx.lr = 0x82AB5F34;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14372(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14372, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5F4C"))) PPC_WEAK_FUNC(sub_82AB5F4C);
PPC_FUNC_IMPL(__imp__sub_82AB5F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5F50"))) PPC_WEAK_FUNC(sub_82AB5F50);
PPC_FUNC_IMPL(__imp__sub_82AB5F50) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,34
	ctx.r3.s64 = 34;
	// addi r4,r11,32568
	ctx.r4.s64 = ctx.r11.s64 + 32568;
	// bl 0x82316b80
	ctx.lr = 0x82AB5F6C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14371(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14371, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5F84"))) PPC_WEAK_FUNC(sub_82AB5F84);
PPC_FUNC_IMPL(__imp__sub_82AB5F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5F88"))) PPC_WEAK_FUNC(sub_82AB5F88);
PPC_FUNC_IMPL(__imp__sub_82AB5F88) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,35
	ctx.r3.s64 = 35;
	// addi r4,r11,32572
	ctx.r4.s64 = ctx.r11.s64 + 32572;
	// bl 0x82316b80
	ctx.lr = 0x82AB5FA4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14370(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14370, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5FBC"))) PPC_WEAK_FUNC(sub_82AB5FBC);
PPC_FUNC_IMPL(__imp__sub_82AB5FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5FC0"))) PPC_WEAK_FUNC(sub_82AB5FC0);
PPC_FUNC_IMPL(__imp__sub_82AB5FC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32576
	ctx.r4.s64 = ctx.r11.s64 + 32576;
	// bl 0x82316b80
	ctx.lr = 0x82AB5FDC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14369(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14369, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5FF4"))) PPC_WEAK_FUNC(sub_82AB5FF4);
PPC_FUNC_IMPL(__imp__sub_82AB5FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5FF8"))) PPC_WEAK_FUNC(sub_82AB5FF8);
PPC_FUNC_IMPL(__imp__sub_82AB5FF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32580
	ctx.r4.s64 = ctx.r11.s64 + 32580;
	// bl 0x82316b80
	ctx.lr = 0x82AB6014;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14368(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14368, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB602C"))) PPC_WEAK_FUNC(sub_82AB602C);
PPC_FUNC_IMPL(__imp__sub_82AB602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6030"))) PPC_WEAK_FUNC(sub_82AB6030);
PPC_FUNC_IMPL(__imp__sub_82AB6030) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32584
	ctx.r4.s64 = ctx.r11.s64 + 32584;
	// bl 0x82316b80
	ctx.lr = 0x82AB604C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14367(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14367, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6064"))) PPC_WEAK_FUNC(sub_82AB6064);
PPC_FUNC_IMPL(__imp__sub_82AB6064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6068"))) PPC_WEAK_FUNC(sub_82AB6068);
PPC_FUNC_IMPL(__imp__sub_82AB6068) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32588
	ctx.r4.s64 = ctx.r11.s64 + 32588;
	// bl 0x82316b80
	ctx.lr = 0x82AB6084;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14366(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14366, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB609C"))) PPC_WEAK_FUNC(sub_82AB609C);
PPC_FUNC_IMPL(__imp__sub_82AB609C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB60A0"))) PPC_WEAK_FUNC(sub_82AB60A0);
PPC_FUNC_IMPL(__imp__sub_82AB60A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32592
	ctx.r4.s64 = ctx.r11.s64 + 32592;
	// bl 0x82316b80
	ctx.lr = 0x82AB60BC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14365(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14365, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB60D4"))) PPC_WEAK_FUNC(sub_82AB60D4);
PPC_FUNC_IMPL(__imp__sub_82AB60D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB60D8"))) PPC_WEAK_FUNC(sub_82AB60D8);
PPC_FUNC_IMPL(__imp__sub_82AB60D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,77
	ctx.r3.s64 = 77;
	// addi r4,r11,32592
	ctx.r4.s64 = ctx.r11.s64 + 32592;
	// bl 0x82316c70
	ctx.lr = 0x82AB60F4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14364(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14364, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB610C"))) PPC_WEAK_FUNC(sub_82AB610C);
PPC_FUNC_IMPL(__imp__sub_82AB610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6110"))) PPC_WEAK_FUNC(sub_82AB6110);
PPC_FUNC_IMPL(__imp__sub_82AB6110) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32596
	ctx.r4.s64 = ctx.r11.s64 + 32596;
	// bl 0x82316b80
	ctx.lr = 0x82AB612C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14363(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14363, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6144"))) PPC_WEAK_FUNC(sub_82AB6144);
PPC_FUNC_IMPL(__imp__sub_82AB6144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6148"))) PPC_WEAK_FUNC(sub_82AB6148);
PPC_FUNC_IMPL(__imp__sub_82AB6148) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,78
	ctx.r3.s64 = 78;
	// addi r4,r11,32596
	ctx.r4.s64 = ctx.r11.s64 + 32596;
	// bl 0x82316c70
	ctx.lr = 0x82AB6164;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14362(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14362, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB617C"))) PPC_WEAK_FUNC(sub_82AB617C);
PPC_FUNC_IMPL(__imp__sub_82AB617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6180"))) PPC_WEAK_FUNC(sub_82AB6180);
PPC_FUNC_IMPL(__imp__sub_82AB6180) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32600
	ctx.r4.s64 = ctx.r11.s64 + 32600;
	// bl 0x82316b80
	ctx.lr = 0x82AB619C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14361(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14361, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB61B4"))) PPC_WEAK_FUNC(sub_82AB61B4);
PPC_FUNC_IMPL(__imp__sub_82AB61B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB61B8"))) PPC_WEAK_FUNC(sub_82AB61B8);
PPC_FUNC_IMPL(__imp__sub_82AB61B8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,79
	ctx.r3.s64 = 79;
	// addi r4,r11,32600
	ctx.r4.s64 = ctx.r11.s64 + 32600;
	// bl 0x82316c70
	ctx.lr = 0x82AB61D4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14360(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14360, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB61EC"))) PPC_WEAK_FUNC(sub_82AB61EC);
PPC_FUNC_IMPL(__imp__sub_82AB61EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB61F0"))) PPC_WEAK_FUNC(sub_82AB61F0);
PPC_FUNC_IMPL(__imp__sub_82AB61F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32604
	ctx.r4.s64 = ctx.r11.s64 + 32604;
	// bl 0x82316b80
	ctx.lr = 0x82AB620C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14359(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14359, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6224"))) PPC_WEAK_FUNC(sub_82AB6224);
PPC_FUNC_IMPL(__imp__sub_82AB6224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6228"))) PPC_WEAK_FUNC(sub_82AB6228);
PPC_FUNC_IMPL(__imp__sub_82AB6228) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,88
	ctx.r3.s64 = 88;
	// addi r4,r11,32604
	ctx.r4.s64 = ctx.r11.s64 + 32604;
	// bl 0x82316c70
	ctx.lr = 0x82AB6244;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14358(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14358, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB625C"))) PPC_WEAK_FUNC(sub_82AB625C);
PPC_FUNC_IMPL(__imp__sub_82AB625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6260"))) PPC_WEAK_FUNC(sub_82AB6260);
PPC_FUNC_IMPL(__imp__sub_82AB6260) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32608
	ctx.r4.s64 = ctx.r11.s64 + 32608;
	// bl 0x82316b80
	ctx.lr = 0x82AB627C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14357(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14357, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6294"))) PPC_WEAK_FUNC(sub_82AB6294);
PPC_FUNC_IMPL(__imp__sub_82AB6294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6298"))) PPC_WEAK_FUNC(sub_82AB6298);
PPC_FUNC_IMPL(__imp__sub_82AB6298) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r4,r11,32608
	ctx.r4.s64 = ctx.r11.s64 + 32608;
	// bl 0x82316c70
	ctx.lr = 0x82AB62B4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14356(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14356, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB62CC"))) PPC_WEAK_FUNC(sub_82AB62CC);
PPC_FUNC_IMPL(__imp__sub_82AB62CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB62D0"))) PPC_WEAK_FUNC(sub_82AB62D0);
PPC_FUNC_IMPL(__imp__sub_82AB62D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32612
	ctx.r4.s64 = ctx.r11.s64 + 32612;
	// bl 0x82316b80
	ctx.lr = 0x82AB62EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14355(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14355, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6304"))) PPC_WEAK_FUNC(sub_82AB6304);
PPC_FUNC_IMPL(__imp__sub_82AB6304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6308"))) PPC_WEAK_FUNC(sub_82AB6308);
PPC_FUNC_IMPL(__imp__sub_82AB6308) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32612
	ctx.r4.s64 = ctx.r11.s64 + 32612;
	// bl 0x82316c70
	ctx.lr = 0x82AB6324;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14354(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14354, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB633C"))) PPC_WEAK_FUNC(sub_82AB633C);
PPC_FUNC_IMPL(__imp__sub_82AB633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6340"))) PPC_WEAK_FUNC(sub_82AB6340);
PPC_FUNC_IMPL(__imp__sub_82AB6340) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32616
	ctx.r4.s64 = ctx.r11.s64 + 32616;
	// bl 0x82316b80
	ctx.lr = 0x82AB635C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14353(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14353, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6374"))) PPC_WEAK_FUNC(sub_82AB6374);
PPC_FUNC_IMPL(__imp__sub_82AB6374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6378"))) PPC_WEAK_FUNC(sub_82AB6378);
PPC_FUNC_IMPL(__imp__sub_82AB6378) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,57
	ctx.r3.s64 = 57;
	// addi r4,r11,32616
	ctx.r4.s64 = ctx.r11.s64 + 32616;
	// bl 0x82316c70
	ctx.lr = 0x82AB6394;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14352(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14352, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB63AC"))) PPC_WEAK_FUNC(sub_82AB63AC);
PPC_FUNC_IMPL(__imp__sub_82AB63AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB63B0"))) PPC_WEAK_FUNC(sub_82AB63B0);
PPC_FUNC_IMPL(__imp__sub_82AB63B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32620
	ctx.r4.s64 = ctx.r11.s64 + 32620;
	// bl 0x82316b80
	ctx.lr = 0x82AB63CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14351(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14351, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB63E4"))) PPC_WEAK_FUNC(sub_82AB63E4);
PPC_FUNC_IMPL(__imp__sub_82AB63E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB63E8"))) PPC_WEAK_FUNC(sub_82AB63E8);
PPC_FUNC_IMPL(__imp__sub_82AB63E8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,89
	ctx.r3.s64 = 89;
	// addi r4,r11,32620
	ctx.r4.s64 = ctx.r11.s64 + 32620;
	// bl 0x82316c70
	ctx.lr = 0x82AB6404;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14350(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14350, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB641C"))) PPC_WEAK_FUNC(sub_82AB641C);
PPC_FUNC_IMPL(__imp__sub_82AB641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6420"))) PPC_WEAK_FUNC(sub_82AB6420);
PPC_FUNC_IMPL(__imp__sub_82AB6420) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,211
	ctx.r3.s64 = 211;
	// addi r4,r11,32624
	ctx.r4.s64 = ctx.r11.s64 + 32624;
	// bl 0x82316b80
	ctx.lr = 0x82AB643C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14349(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14349, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6454"))) PPC_WEAK_FUNC(sub_82AB6454);
PPC_FUNC_IMPL(__imp__sub_82AB6454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6458"))) PPC_WEAK_FUNC(sub_82AB6458);
PPC_FUNC_IMPL(__imp__sub_82AB6458) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,212
	ctx.r3.s64 = 212;
	// addi r4,r11,32628
	ctx.r4.s64 = ctx.r11.s64 + 32628;
	// bl 0x82316b80
	ctx.lr = 0x82AB6474;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14348(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14348, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB648C"))) PPC_WEAK_FUNC(sub_82AB648C);
PPC_FUNC_IMPL(__imp__sub_82AB648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6490"))) PPC_WEAK_FUNC(sub_82AB6490);
PPC_FUNC_IMPL(__imp__sub_82AB6490) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,213
	ctx.r3.s64 = 213;
	// addi r4,r11,32632
	ctx.r4.s64 = ctx.r11.s64 + 32632;
	// bl 0x82316b80
	ctx.lr = 0x82AB64AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14347(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14347, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB64C4"))) PPC_WEAK_FUNC(sub_82AB64C4);
PPC_FUNC_IMPL(__imp__sub_82AB64C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB64C8"))) PPC_WEAK_FUNC(sub_82AB64C8);
PPC_FUNC_IMPL(__imp__sub_82AB64C8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,296
	ctx.r3.s64 = 296;
	// addi r4,r11,32636
	ctx.r4.s64 = ctx.r11.s64 + 32636;
	// bl 0x82316b80
	ctx.lr = 0x82AB64E4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14346(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14346, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB64FC"))) PPC_WEAK_FUNC(sub_82AB64FC);
PPC_FUNC_IMPL(__imp__sub_82AB64FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6500"))) PPC_WEAK_FUNC(sub_82AB6500);
PPC_FUNC_IMPL(__imp__sub_82AB6500) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,214
	ctx.r3.s64 = 214;
	// addi r4,r11,32640
	ctx.r4.s64 = ctx.r11.s64 + 32640;
	// bl 0x82316b80
	ctx.lr = 0x82AB651C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14345(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14345, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6534"))) PPC_WEAK_FUNC(sub_82AB6534);
PPC_FUNC_IMPL(__imp__sub_82AB6534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6538"))) PPC_WEAK_FUNC(sub_82AB6538);
PPC_FUNC_IMPL(__imp__sub_82AB6538) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,215
	ctx.r3.s64 = 215;
	// addi r4,r11,32644
	ctx.r4.s64 = ctx.r11.s64 + 32644;
	// bl 0x82316b80
	ctx.lr = 0x82AB6554;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14344(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14344, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB656C"))) PPC_WEAK_FUNC(sub_82AB656C);
PPC_FUNC_IMPL(__imp__sub_82AB656C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6570"))) PPC_WEAK_FUNC(sub_82AB6570);
PPC_FUNC_IMPL(__imp__sub_82AB6570) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,216
	ctx.r3.s64 = 216;
	// addi r4,r11,32648
	ctx.r4.s64 = ctx.r11.s64 + 32648;
	// bl 0x82316b80
	ctx.lr = 0x82AB658C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14343(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14343, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB65A4"))) PPC_WEAK_FUNC(sub_82AB65A4);
PPC_FUNC_IMPL(__imp__sub_82AB65A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB65A8"))) PPC_WEAK_FUNC(sub_82AB65A8);
PPC_FUNC_IMPL(__imp__sub_82AB65A8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,275
	ctx.r3.s64 = 275;
	// addi r4,r11,32652
	ctx.r4.s64 = ctx.r11.s64 + 32652;
	// bl 0x82316b80
	ctx.lr = 0x82AB65C4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14342(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14342, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB65DC"))) PPC_WEAK_FUNC(sub_82AB65DC);
PPC_FUNC_IMPL(__imp__sub_82AB65DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB65E0"))) PPC_WEAK_FUNC(sub_82AB65E0);
PPC_FUNC_IMPL(__imp__sub_82AB65E0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,276
	ctx.r3.s64 = 276;
	// addi r4,r11,32656
	ctx.r4.s64 = ctx.r11.s64 + 32656;
	// bl 0x82316b80
	ctx.lr = 0x82AB65FC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14341(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14341, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6614"))) PPC_WEAK_FUNC(sub_82AB6614);
PPC_FUNC_IMPL(__imp__sub_82AB6614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6618"))) PPC_WEAK_FUNC(sub_82AB6618);
PPC_FUNC_IMPL(__imp__sub_82AB6618) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,217
	ctx.r3.s64 = 217;
	// addi r4,r11,32660
	ctx.r4.s64 = ctx.r11.s64 + 32660;
	// bl 0x82316b80
	ctx.lr = 0x82AB6634;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14340(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14340, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB664C"))) PPC_WEAK_FUNC(sub_82AB664C);
PPC_FUNC_IMPL(__imp__sub_82AB664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6650"))) PPC_WEAK_FUNC(sub_82AB6650);
PPC_FUNC_IMPL(__imp__sub_82AB6650) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,218
	ctx.r3.s64 = 218;
	// addi r4,r11,32664
	ctx.r4.s64 = ctx.r11.s64 + 32664;
	// bl 0x82316b80
	ctx.lr = 0x82AB666C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14339(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14339, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6684"))) PPC_WEAK_FUNC(sub_82AB6684);
PPC_FUNC_IMPL(__imp__sub_82AB6684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6688"))) PPC_WEAK_FUNC(sub_82AB6688);
PPC_FUNC_IMPL(__imp__sub_82AB6688) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,219
	ctx.r3.s64 = 219;
	// addi r4,r11,32668
	ctx.r4.s64 = ctx.r11.s64 + 32668;
	// bl 0x82316b80
	ctx.lr = 0x82AB66A4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14338(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14338, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB66BC"))) PPC_WEAK_FUNC(sub_82AB66BC);
PPC_FUNC_IMPL(__imp__sub_82AB66BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB66C0"))) PPC_WEAK_FUNC(sub_82AB66C0);
PPC_FUNC_IMPL(__imp__sub_82AB66C0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,220
	ctx.r3.s64 = 220;
	// addi r4,r11,32672
	ctx.r4.s64 = ctx.r11.s64 + 32672;
	// bl 0x82316b80
	ctx.lr = 0x82AB66DC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14337(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14337, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB66F4"))) PPC_WEAK_FUNC(sub_82AB66F4);
PPC_FUNC_IMPL(__imp__sub_82AB66F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB66F8"))) PPC_WEAK_FUNC(sub_82AB66F8);
PPC_FUNC_IMPL(__imp__sub_82AB66F8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,221
	ctx.r3.s64 = 221;
	// addi r4,r11,32676
	ctx.r4.s64 = ctx.r11.s64 + 32676;
	// bl 0x82316b80
	ctx.lr = 0x82AB6714;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14336(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14336, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB672C"))) PPC_WEAK_FUNC(sub_82AB672C);
PPC_FUNC_IMPL(__imp__sub_82AB672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6730"))) PPC_WEAK_FUNC(sub_82AB6730);
PPC_FUNC_IMPL(__imp__sub_82AB6730) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,297
	ctx.r3.s64 = 297;
	// addi r4,r11,32680
	ctx.r4.s64 = ctx.r11.s64 + 32680;
	// bl 0x82316b80
	ctx.lr = 0x82AB674C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14335(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14335, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6764"))) PPC_WEAK_FUNC(sub_82AB6764);
PPC_FUNC_IMPL(__imp__sub_82AB6764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6768"))) PPC_WEAK_FUNC(sub_82AB6768);
PPC_FUNC_IMPL(__imp__sub_82AB6768) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,222
	ctx.r3.s64 = 222;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// bl 0x82316b80
	ctx.lr = 0x82AB6784;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14334(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14334, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB679C"))) PPC_WEAK_FUNC(sub_82AB679C);
PPC_FUNC_IMPL(__imp__sub_82AB679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB67A0"))) PPC_WEAK_FUNC(sub_82AB67A0);
PPC_FUNC_IMPL(__imp__sub_82AB67A0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,223
	ctx.r3.s64 = 223;
	// addi r4,r11,32688
	ctx.r4.s64 = ctx.r11.s64 + 32688;
	// bl 0x82316b80
	ctx.lr = 0x82AB67BC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14333(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14333, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB67D4"))) PPC_WEAK_FUNC(sub_82AB67D4);
PPC_FUNC_IMPL(__imp__sub_82AB67D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB67D8"))) PPC_WEAK_FUNC(sub_82AB67D8);
PPC_FUNC_IMPL(__imp__sub_82AB67D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,224
	ctx.r3.s64 = 224;
	// addi r4,r11,32692
	ctx.r4.s64 = ctx.r11.s64 + 32692;
	// bl 0x82316b80
	ctx.lr = 0x82AB67F4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14332(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14332, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB680C"))) PPC_WEAK_FUNC(sub_82AB680C);
PPC_FUNC_IMPL(__imp__sub_82AB680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6810"))) PPC_WEAK_FUNC(sub_82AB6810);
PPC_FUNC_IMPL(__imp__sub_82AB6810) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,225
	ctx.r3.s64 = 225;
	// addi r4,r11,32696
	ctx.r4.s64 = ctx.r11.s64 + 32696;
	// bl 0x82316b80
	ctx.lr = 0x82AB682C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14331(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14331, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6844"))) PPC_WEAK_FUNC(sub_82AB6844);
PPC_FUNC_IMPL(__imp__sub_82AB6844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6848"))) PPC_WEAK_FUNC(sub_82AB6848);
PPC_FUNC_IMPL(__imp__sub_82AB6848) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32700
	ctx.r4.s64 = ctx.r11.s64 + 32700;
	// bl 0x82316b80
	ctx.lr = 0x82AB6864;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14330(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14330, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB687C"))) PPC_WEAK_FUNC(sub_82AB687C);
PPC_FUNC_IMPL(__imp__sub_82AB687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6880"))) PPC_WEAK_FUNC(sub_82AB6880);
PPC_FUNC_IMPL(__imp__sub_82AB6880) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32704
	ctx.r4.s64 = ctx.r11.s64 + 32704;
	// bl 0x82316b80
	ctx.lr = 0x82AB689C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14329(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14329, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB68B4"))) PPC_WEAK_FUNC(sub_82AB68B4);
PPC_FUNC_IMPL(__imp__sub_82AB68B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB68B8"))) PPC_WEAK_FUNC(sub_82AB68B8);
PPC_FUNC_IMPL(__imp__sub_82AB68B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32708
	ctx.r4.s64 = ctx.r11.s64 + 32708;
	// bl 0x82316b80
	ctx.lr = 0x82AB68D4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14328(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14328, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB68EC"))) PPC_WEAK_FUNC(sub_82AB68EC);
PPC_FUNC_IMPL(__imp__sub_82AB68EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB68F0"))) PPC_WEAK_FUNC(sub_82AB68F0);
PPC_FUNC_IMPL(__imp__sub_82AB68F0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,226
	ctx.r3.s64 = 226;
	// addi r4,r11,32712
	ctx.r4.s64 = ctx.r11.s64 + 32712;
	// bl 0x82316b80
	ctx.lr = 0x82AB690C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14327(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14327, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6924"))) PPC_WEAK_FUNC(sub_82AB6924);
PPC_FUNC_IMPL(__imp__sub_82AB6924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6928"))) PPC_WEAK_FUNC(sub_82AB6928);
PPC_FUNC_IMPL(__imp__sub_82AB6928) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32716
	ctx.r4.s64 = ctx.r11.s64 + 32716;
	// bl 0x82316b80
	ctx.lr = 0x82AB6944;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14326(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14326, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB695C"))) PPC_WEAK_FUNC(sub_82AB695C);
PPC_FUNC_IMPL(__imp__sub_82AB695C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6960"))) PPC_WEAK_FUNC(sub_82AB6960);
PPC_FUNC_IMPL(__imp__sub_82AB6960) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32720
	ctx.r4.s64 = ctx.r11.s64 + 32720;
	// bl 0x82316b80
	ctx.lr = 0x82AB697C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14325(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14325, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6994"))) PPC_WEAK_FUNC(sub_82AB6994);
PPC_FUNC_IMPL(__imp__sub_82AB6994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6998"))) PPC_WEAK_FUNC(sub_82AB6998);
PPC_FUNC_IMPL(__imp__sub_82AB6998) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32724
	ctx.r4.s64 = ctx.r11.s64 + 32724;
	// bl 0x82316b80
	ctx.lr = 0x82AB69B4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14324(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14324, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB69CC"))) PPC_WEAK_FUNC(sub_82AB69CC);
PPC_FUNC_IMPL(__imp__sub_82AB69CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB69D0"))) PPC_WEAK_FUNC(sub_82AB69D0);
PPC_FUNC_IMPL(__imp__sub_82AB69D0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,252
	ctx.r3.s64 = 252;
	// addi r4,r11,32728
	ctx.r4.s64 = ctx.r11.s64 + 32728;
	// bl 0x82316b80
	ctx.lr = 0x82AB69EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14323(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14323, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6A04"))) PPC_WEAK_FUNC(sub_82AB6A04);
PPC_FUNC_IMPL(__imp__sub_82AB6A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6A08"))) PPC_WEAK_FUNC(sub_82AB6A08);
PPC_FUNC_IMPL(__imp__sub_82AB6A08) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,320
	ctx.r3.s64 = 320;
	// addi r4,r11,32732
	ctx.r4.s64 = ctx.r11.s64 + 32732;
	// bl 0x82316b80
	ctx.lr = 0x82AB6A24;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14322(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14322, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6A3C"))) PPC_WEAK_FUNC(sub_82AB6A3C);
PPC_FUNC_IMPL(__imp__sub_82AB6A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6A40"))) PPC_WEAK_FUNC(sub_82AB6A40);
PPC_FUNC_IMPL(__imp__sub_82AB6A40) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,300
	ctx.r3.s64 = 300;
	// addi r4,r11,32736
	ctx.r4.s64 = ctx.r11.s64 + 32736;
	// bl 0x82316b80
	ctx.lr = 0x82AB6A5C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14321(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14321, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6A74"))) PPC_WEAK_FUNC(sub_82AB6A74);
PPC_FUNC_IMPL(__imp__sub_82AB6A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6A78"))) PPC_WEAK_FUNC(sub_82AB6A78);
PPC_FUNC_IMPL(__imp__sub_82AB6A78) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,1500
	ctx.r3.s64 = 1500;
	// addi r4,r11,32740
	ctx.r4.s64 = ctx.r11.s64 + 32740;
	// bl 0x82316b80
	ctx.lr = 0x82AB6A94;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14320(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14320, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6AAC"))) PPC_WEAK_FUNC(sub_82AB6AAC);
PPC_FUNC_IMPL(__imp__sub_82AB6AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6AB0"))) PPC_WEAK_FUNC(sub_82AB6AB0);
PPC_FUNC_IMPL(__imp__sub_82AB6AB0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,1501
	ctx.r3.s64 = 1501;
	// addi r4,r11,32744
	ctx.r4.s64 = ctx.r11.s64 + 32744;
	// bl 0x82316b80
	ctx.lr = 0x82AB6ACC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14319(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14319, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6AE4"))) PPC_WEAK_FUNC(sub_82AB6AE4);
PPC_FUNC_IMPL(__imp__sub_82AB6AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6AE8"))) PPC_WEAK_FUNC(sub_82AB6AE8);
PPC_FUNC_IMPL(__imp__sub_82AB6AE8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,142
	ctx.r3.s64 = 142;
	// addi r4,r11,32748
	ctx.r4.s64 = ctx.r11.s64 + 32748;
	// bl 0x82316b80
	ctx.lr = 0x82AB6B04;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14318(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14318, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6B1C"))) PPC_WEAK_FUNC(sub_82AB6B1C);
PPC_FUNC_IMPL(__imp__sub_82AB6B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6B20"))) PPC_WEAK_FUNC(sub_82AB6B20);
PPC_FUNC_IMPL(__imp__sub_82AB6B20) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,203
	ctx.r3.s64 = 203;
	// addi r4,r11,32752
	ctx.r4.s64 = ctx.r11.s64 + 32752;
	// bl 0x82316b80
	ctx.lr = 0x82AB6B3C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14317(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14317, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6B54"))) PPC_WEAK_FUNC(sub_82AB6B54);
PPC_FUNC_IMPL(__imp__sub_82AB6B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6B58"))) PPC_WEAK_FUNC(sub_82AB6B58);
PPC_FUNC_IMPL(__imp__sub_82AB6B58) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,287
	ctx.r3.s64 = 287;
	// addi r4,r11,32756
	ctx.r4.s64 = ctx.r11.s64 + 32756;
	// bl 0x82316b80
	ctx.lr = 0x82AB6B74;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14316(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14316, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6B8C"))) PPC_WEAK_FUNC(sub_82AB6B8C);
PPC_FUNC_IMPL(__imp__sub_82AB6B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6B90"))) PPC_WEAK_FUNC(sub_82AB6B90);
PPC_FUNC_IMPL(__imp__sub_82AB6B90) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,288
	ctx.r3.s64 = 288;
	// addi r4,r11,32760
	ctx.r4.s64 = ctx.r11.s64 + 32760;
	// bl 0x82316b80
	ctx.lr = 0x82AB6BAC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14315(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14315, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6BC4"))) PPC_WEAK_FUNC(sub_82AB6BC4);
PPC_FUNC_IMPL(__imp__sub_82AB6BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6BC8"))) PPC_WEAK_FUNC(sub_82AB6BC8);
PPC_FUNC_IMPL(__imp__sub_82AB6BC8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,289
	ctx.r3.s64 = 289;
	// addi r4,r11,32764
	ctx.r4.s64 = ctx.r11.s64 + 32764;
	// bl 0x82316b80
	ctx.lr = 0x82AB6BE4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14314(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14314, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6BFC"))) PPC_WEAK_FUNC(sub_82AB6BFC);
PPC_FUNC_IMPL(__imp__sub_82AB6BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6C00"))) PPC_WEAK_FUNC(sub_82AB6C00);
PPC_FUNC_IMPL(__imp__sub_82AB6C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,290
	ctx.r3.s64 = 290;
	// addi r4,r11,-32768
	ctx.r4.s64 = ctx.r11.s64 + -32768;
	// bl 0x82316b80
	ctx.lr = 0x82AB6C1C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14313(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14313, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6C34"))) PPC_WEAK_FUNC(sub_82AB6C34);
PPC_FUNC_IMPL(__imp__sub_82AB6C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6C38"))) PPC_WEAK_FUNC(sub_82AB6C38);
PPC_FUNC_IMPL(__imp__sub_82AB6C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,291
	ctx.r3.s64 = 291;
	// addi r4,r11,-32764
	ctx.r4.s64 = ctx.r11.s64 + -32764;
	// bl 0x82316b80
	ctx.lr = 0x82AB6C54;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14312(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14312, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6C6C"))) PPC_WEAK_FUNC(sub_82AB6C6C);
PPC_FUNC_IMPL(__imp__sub_82AB6C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6C70"))) PPC_WEAK_FUNC(sub_82AB6C70);
PPC_FUNC_IMPL(__imp__sub_82AB6C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,316
	ctx.r3.s64 = 316;
	// addi r4,r11,-32760
	ctx.r4.s64 = ctx.r11.s64 + -32760;
	// bl 0x82316b80
	ctx.lr = 0x82AB6C8C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14311(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14311, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6CA4"))) PPC_WEAK_FUNC(sub_82AB6CA4);
PPC_FUNC_IMPL(__imp__sub_82AB6CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6CA8"))) PPC_WEAK_FUNC(sub_82AB6CA8);
PPC_FUNC_IMPL(__imp__sub_82AB6CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,317
	ctx.r3.s64 = 317;
	// addi r4,r11,-32756
	ctx.r4.s64 = ctx.r11.s64 + -32756;
	// bl 0x82316b80
	ctx.lr = 0x82AB6CC4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14310(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14310, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6CDC"))) PPC_WEAK_FUNC(sub_82AB6CDC);
PPC_FUNC_IMPL(__imp__sub_82AB6CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6CE0"))) PPC_WEAK_FUNC(sub_82AB6CE0);
PPC_FUNC_IMPL(__imp__sub_82AB6CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,318
	ctx.r3.s64 = 318;
	// addi r4,r11,-32752
	ctx.r4.s64 = ctx.r11.s64 + -32752;
	// bl 0x82316b80
	ctx.lr = 0x82AB6CFC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14309(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14309, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6D14"))) PPC_WEAK_FUNC(sub_82AB6D14);
PPC_FUNC_IMPL(__imp__sub_82AB6D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6D18"))) PPC_WEAK_FUNC(sub_82AB6D18);
PPC_FUNC_IMPL(__imp__sub_82AB6D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,319
	ctx.r3.s64 = 319;
	// addi r4,r11,-32748
	ctx.r4.s64 = ctx.r11.s64 + -32748;
	// bl 0x82316b80
	ctx.lr = 0x82AB6D34;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14308(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14308, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6D4C"))) PPC_WEAK_FUNC(sub_82AB6D4C);
PPC_FUNC_IMPL(__imp__sub_82AB6D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6D50"))) PPC_WEAK_FUNC(sub_82AB6D50);
PPC_FUNC_IMPL(__imp__sub_82AB6D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,229
	ctx.r3.s64 = 229;
	// addi r4,r11,-32744
	ctx.r4.s64 = ctx.r11.s64 + -32744;
	// bl 0x82316b80
	ctx.lr = 0x82AB6D6C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14307(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14307, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB6D84"))) PPC_WEAK_FUNC(sub_82AB6D84);
PPC_FUNC_IMPL(__imp__sub_82AB6D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB6D88"))) PPC_WEAK_FUNC(sub_82AB6D88);
PPC_FUNC_IMPL(__imp__sub_82AB6D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r3,230
	ctx.r3.s64 = 230;
	// addi r4,r11,-32740
	ctx.r4.s64 = ctx.r11.s64 + -32740;
	// bl 0x82316b80
	ctx.lr = 0x82AB6DA4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14306(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14306, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

