#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AB35BC"))) PPC_WEAK_FUNC(sub_82AB35BC);
PPC_FUNC_IMPL(__imp__sub_82AB35BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB35C0"))) PPC_WEAK_FUNC(sub_82AB35C0);
PPC_FUNC_IMPL(__imp__sub_82AB35C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,31920
	ctx.r4.s64 = ctx.r11.s64 + 31920;
	// bl 0x82316b80
	ctx.lr = 0x82AB35DC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14561(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14561, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB35F4"))) PPC_WEAK_FUNC(sub_82AB35F4);
PPC_FUNC_IMPL(__imp__sub_82AB35F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB35F8"))) PPC_WEAK_FUNC(sub_82AB35F8);
PPC_FUNC_IMPL(__imp__sub_82AB35F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,26
	ctx.r3.s64 = 26;
	// addi r4,r11,31924
	ctx.r4.s64 = ctx.r11.s64 + 31924;
	// bl 0x82316b80
	ctx.lr = 0x82AB3614;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14560(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14560, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB362C"))) PPC_WEAK_FUNC(sub_82AB362C);
PPC_FUNC_IMPL(__imp__sub_82AB362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3630"))) PPC_WEAK_FUNC(sub_82AB3630);
PPC_FUNC_IMPL(__imp__sub_82AB3630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,31928
	ctx.r4.s64 = ctx.r11.s64 + 31928;
	// bl 0x82316b80
	ctx.lr = 0x82AB364C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14559(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14559, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3664"))) PPC_WEAK_FUNC(sub_82AB3664);
PPC_FUNC_IMPL(__imp__sub_82AB3664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3668"))) PPC_WEAK_FUNC(sub_82AB3668);
PPC_FUNC_IMPL(__imp__sub_82AB3668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,54
	ctx.r3.s64 = 54;
	// addi r4,r11,31932
	ctx.r4.s64 = ctx.r11.s64 + 31932;
	// bl 0x82316b80
	ctx.lr = 0x82AB3684;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14558(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14558, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB369C"))) PPC_WEAK_FUNC(sub_82AB369C);
PPC_FUNC_IMPL(__imp__sub_82AB369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB36A0"))) PPC_WEAK_FUNC(sub_82AB36A0);
PPC_FUNC_IMPL(__imp__sub_82AB36A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31936
	ctx.r4.s64 = ctx.r11.s64 + 31936;
	// bl 0x82316b80
	ctx.lr = 0x82AB36BC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14557(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14557, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB36D4"))) PPC_WEAK_FUNC(sub_82AB36D4);
PPC_FUNC_IMPL(__imp__sub_82AB36D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB36D8"))) PPC_WEAK_FUNC(sub_82AB36D8);
PPC_FUNC_IMPL(__imp__sub_82AB36D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,64
	ctx.r3.s64 = 64;
	// addi r4,r11,31940
	ctx.r4.s64 = ctx.r11.s64 + 31940;
	// bl 0x82316b80
	ctx.lr = 0x82AB36F4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14556(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14556, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB370C"))) PPC_WEAK_FUNC(sub_82AB370C);
PPC_FUNC_IMPL(__imp__sub_82AB370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3710"))) PPC_WEAK_FUNC(sub_82AB3710);
PPC_FUNC_IMPL(__imp__sub_82AB3710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,70
	ctx.r3.s64 = 70;
	// addi r4,r11,31944
	ctx.r4.s64 = ctx.r11.s64 + 31944;
	// bl 0x82316b80
	ctx.lr = 0x82AB372C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14555(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14555, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3744"))) PPC_WEAK_FUNC(sub_82AB3744);
PPC_FUNC_IMPL(__imp__sub_82AB3744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3748"))) PPC_WEAK_FUNC(sub_82AB3748);
PPC_FUNC_IMPL(__imp__sub_82AB3748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,71
	ctx.r3.s64 = 71;
	// addi r4,r11,31948
	ctx.r4.s64 = ctx.r11.s64 + 31948;
	// bl 0x82316b80
	ctx.lr = 0x82AB3764;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14554(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14554, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB377C"))) PPC_WEAK_FUNC(sub_82AB377C);
PPC_FUNC_IMPL(__imp__sub_82AB377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3780"))) PPC_WEAK_FUNC(sub_82AB3780);
PPC_FUNC_IMPL(__imp__sub_82AB3780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,45
	ctx.r3.s64 = 45;
	// addi r4,r11,31952
	ctx.r4.s64 = ctx.r11.s64 + 31952;
	// bl 0x82316b80
	ctx.lr = 0x82AB379C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14553(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14553, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB37B4"))) PPC_WEAK_FUNC(sub_82AB37B4);
PPC_FUNC_IMPL(__imp__sub_82AB37B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB37B8"))) PPC_WEAK_FUNC(sub_82AB37B8);
PPC_FUNC_IMPL(__imp__sub_82AB37B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,53
	ctx.r3.s64 = 53;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// bl 0x82316b80
	ctx.lr = 0x82AB37D4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14552(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14552, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB37EC"))) PPC_WEAK_FUNC(sub_82AB37EC);
PPC_FUNC_IMPL(__imp__sub_82AB37EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB37F0"))) PPC_WEAK_FUNC(sub_82AB37F0);
PPC_FUNC_IMPL(__imp__sub_82AB37F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,83
	ctx.r3.s64 = 83;
	// addi r4,r11,31960
	ctx.r4.s64 = ctx.r11.s64 + 31960;
	// bl 0x82316b80
	ctx.lr = 0x82AB380C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14551(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14551, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3824"))) PPC_WEAK_FUNC(sub_82AB3824);
PPC_FUNC_IMPL(__imp__sub_82AB3824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3828"))) PPC_WEAK_FUNC(sub_82AB3828);
PPC_FUNC_IMPL(__imp__sub_82AB3828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r4,r11,31964
	ctx.r4.s64 = ctx.r11.s64 + 31964;
	// bl 0x82316b80
	ctx.lr = 0x82AB3844;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14550(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14550, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB385C"))) PPC_WEAK_FUNC(sub_82AB385C);
PPC_FUNC_IMPL(__imp__sub_82AB385C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3860"))) PPC_WEAK_FUNC(sub_82AB3860);
PPC_FUNC_IMPL(__imp__sub_82AB3860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,58
	ctx.r3.s64 = 58;
	// addi r4,r11,31968
	ctx.r4.s64 = ctx.r11.s64 + 31968;
	// bl 0x82316b80
	ctx.lr = 0x82AB387C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14549(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14549, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3894"))) PPC_WEAK_FUNC(sub_82AB3894);
PPC_FUNC_IMPL(__imp__sub_82AB3894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3898"))) PPC_WEAK_FUNC(sub_82AB3898);
PPC_FUNC_IMPL(__imp__sub_82AB3898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r4,r11,31972
	ctx.r4.s64 = ctx.r11.s64 + 31972;
	// bl 0x82316b80
	ctx.lr = 0x82AB38B4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14548(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14548, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB38CC"))) PPC_WEAK_FUNC(sub_82AB38CC);
PPC_FUNC_IMPL(__imp__sub_82AB38CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB38D0"))) PPC_WEAK_FUNC(sub_82AB38D0);
PPC_FUNC_IMPL(__imp__sub_82AB38D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31976
	ctx.r4.s64 = ctx.r11.s64 + 31976;
	// bl 0x82316b80
	ctx.lr = 0x82AB38EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14547(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14547, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3904"))) PPC_WEAK_FUNC(sub_82AB3904);
PPC_FUNC_IMPL(__imp__sub_82AB3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3908"))) PPC_WEAK_FUNC(sub_82AB3908);
PPC_FUNC_IMPL(__imp__sub_82AB3908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,41
	ctx.r3.s64 = 41;
	// addi r4,r11,31980
	ctx.r4.s64 = ctx.r11.s64 + 31980;
	// bl 0x82316b80
	ctx.lr = 0x82AB3924;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14546(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14546, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB393C"))) PPC_WEAK_FUNC(sub_82AB393C);
PPC_FUNC_IMPL(__imp__sub_82AB393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3940"))) PPC_WEAK_FUNC(sub_82AB3940);
PPC_FUNC_IMPL(__imp__sub_82AB3940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r4,r11,31984
	ctx.r4.s64 = ctx.r11.s64 + 31984;
	// bl 0x82316b80
	ctx.lr = 0x82AB395C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14545(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14545, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3974"))) PPC_WEAK_FUNC(sub_82AB3974);
PPC_FUNC_IMPL(__imp__sub_82AB3974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3978"))) PPC_WEAK_FUNC(sub_82AB3978);
PPC_FUNC_IMPL(__imp__sub_82AB3978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,31988
	ctx.r4.s64 = ctx.r11.s64 + 31988;
	// bl 0x82316b80
	ctx.lr = 0x82AB3994;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14544(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14544, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB39AC"))) PPC_WEAK_FUNC(sub_82AB39AC);
PPC_FUNC_IMPL(__imp__sub_82AB39AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB39B0"))) PPC_WEAK_FUNC(sub_82AB39B0);
PPC_FUNC_IMPL(__imp__sub_82AB39B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r4,r11,31992
	ctx.r4.s64 = ctx.r11.s64 + 31992;
	// bl 0x82316b80
	ctx.lr = 0x82AB39CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14543(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14543, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB39E4"))) PPC_WEAK_FUNC(sub_82AB39E4);
PPC_FUNC_IMPL(__imp__sub_82AB39E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB39E8"))) PPC_WEAK_FUNC(sub_82AB39E8);
PPC_FUNC_IMPL(__imp__sub_82AB39E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r4,r11,31996
	ctx.r4.s64 = ctx.r11.s64 + 31996;
	// bl 0x82316b80
	ctx.lr = 0x82AB3A04;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14542(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14542, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3A1C"))) PPC_WEAK_FUNC(sub_82AB3A1C);
PPC_FUNC_IMPL(__imp__sub_82AB3A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3A20"))) PPC_WEAK_FUNC(sub_82AB3A20);
PPC_FUNC_IMPL(__imp__sub_82AB3A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r4,r11,32000
	ctx.r4.s64 = ctx.r11.s64 + 32000;
	// bl 0x82316b80
	ctx.lr = 0x82AB3A3C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14541(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14541, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3A54"))) PPC_WEAK_FUNC(sub_82AB3A54);
PPC_FUNC_IMPL(__imp__sub_82AB3A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3A58"))) PPC_WEAK_FUNC(sub_82AB3A58);
PPC_FUNC_IMPL(__imp__sub_82AB3A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r4,r11,32004
	ctx.r4.s64 = ctx.r11.s64 + 32004;
	// bl 0x82316b80
	ctx.lr = 0x82AB3A74;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14540(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14540, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3A8C"))) PPC_WEAK_FUNC(sub_82AB3A8C);
PPC_FUNC_IMPL(__imp__sub_82AB3A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3A90"))) PPC_WEAK_FUNC(sub_82AB3A90);
PPC_FUNC_IMPL(__imp__sub_82AB3A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,69
	ctx.r3.s64 = 69;
	// addi r4,r11,32008
	ctx.r4.s64 = ctx.r11.s64 + 32008;
	// bl 0x82316b80
	ctx.lr = 0x82AB3AAC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14539(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14539, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3AC4"))) PPC_WEAK_FUNC(sub_82AB3AC4);
PPC_FUNC_IMPL(__imp__sub_82AB3AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3AC8"))) PPC_WEAK_FUNC(sub_82AB3AC8);
PPC_FUNC_IMPL(__imp__sub_82AB3AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,32012
	ctx.r4.s64 = ctx.r11.s64 + 32012;
	// bl 0x82316b80
	ctx.lr = 0x82AB3AE4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14538(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14538, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3AFC"))) PPC_WEAK_FUNC(sub_82AB3AFC);
PPC_FUNC_IMPL(__imp__sub_82AB3AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3B00"))) PPC_WEAK_FUNC(sub_82AB3B00);
PPC_FUNC_IMPL(__imp__sub_82AB3B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,32016
	ctx.r4.s64 = ctx.r11.s64 + 32016;
	// bl 0x82316b80
	ctx.lr = 0x82AB3B1C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14537(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14537, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3B34"))) PPC_WEAK_FUNC(sub_82AB3B34);
PPC_FUNC_IMPL(__imp__sub_82AB3B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3B38"))) PPC_WEAK_FUNC(sub_82AB3B38);
PPC_FUNC_IMPL(__imp__sub_82AB3B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,32020
	ctx.r4.s64 = ctx.r11.s64 + 32020;
	// bl 0x82316b80
	ctx.lr = 0x82AB3B54;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14536(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14536, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3B6C"))) PPC_WEAK_FUNC(sub_82AB3B6C);
PPC_FUNC_IMPL(__imp__sub_82AB3B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3B70"))) PPC_WEAK_FUNC(sub_82AB3B70);
PPC_FUNC_IMPL(__imp__sub_82AB3B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r4,r11,32024
	ctx.r4.s64 = ctx.r11.s64 + 32024;
	// bl 0x82316b80
	ctx.lr = 0x82AB3B8C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14535(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14535, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3BA4"))) PPC_WEAK_FUNC(sub_82AB3BA4);
PPC_FUNC_IMPL(__imp__sub_82AB3BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3BA8"))) PPC_WEAK_FUNC(sub_82AB3BA8);
PPC_FUNC_IMPL(__imp__sub_82AB3BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,32028
	ctx.r4.s64 = ctx.r11.s64 + 32028;
	// bl 0x82316b80
	ctx.lr = 0x82AB3BC4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14534(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14534, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3BDC"))) PPC_WEAK_FUNC(sub_82AB3BDC);
PPC_FUNC_IMPL(__imp__sub_82AB3BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3BE0"))) PPC_WEAK_FUNC(sub_82AB3BE0);
PPC_FUNC_IMPL(__imp__sub_82AB3BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,32032
	ctx.r4.s64 = ctx.r11.s64 + 32032;
	// bl 0x82316b80
	ctx.lr = 0x82AB3BFC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14533(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14533, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3C14"))) PPC_WEAK_FUNC(sub_82AB3C14);
PPC_FUNC_IMPL(__imp__sub_82AB3C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3C18"))) PPC_WEAK_FUNC(sub_82AB3C18);
PPC_FUNC_IMPL(__imp__sub_82AB3C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r11,32036
	ctx.r4.s64 = ctx.r11.s64 + 32036;
	// bl 0x82316b80
	ctx.lr = 0x82AB3C34;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14532(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14532, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3C4C"))) PPC_WEAK_FUNC(sub_82AB3C4C);
PPC_FUNC_IMPL(__imp__sub_82AB3C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3C50"))) PPC_WEAK_FUNC(sub_82AB3C50);
PPC_FUNC_IMPL(__imp__sub_82AB3C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r4,r11,32040
	ctx.r4.s64 = ctx.r11.s64 + 32040;
	// bl 0x82316b80
	ctx.lr = 0x82AB3C6C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14531(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14531, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3C84"))) PPC_WEAK_FUNC(sub_82AB3C84);
PPC_FUNC_IMPL(__imp__sub_82AB3C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3C88"))) PPC_WEAK_FUNC(sub_82AB3C88);
PPC_FUNC_IMPL(__imp__sub_82AB3C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,55
	ctx.r3.s64 = 55;
	// addi r4,r11,32044
	ctx.r4.s64 = ctx.r11.s64 + 32044;
	// bl 0x82316b80
	ctx.lr = 0x82AB3CA4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14530(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14530, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3CBC"))) PPC_WEAK_FUNC(sub_82AB3CBC);
PPC_FUNC_IMPL(__imp__sub_82AB3CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3CC0"))) PPC_WEAK_FUNC(sub_82AB3CC0);
PPC_FUNC_IMPL(__imp__sub_82AB3CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,66
	ctx.r3.s64 = 66;
	// addi r4,r11,32048
	ctx.r4.s64 = ctx.r11.s64 + 32048;
	// bl 0x82316b80
	ctx.lr = 0x82AB3CDC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14529(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14529, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3CF4"))) PPC_WEAK_FUNC(sub_82AB3CF4);
PPC_FUNC_IMPL(__imp__sub_82AB3CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3CF8"))) PPC_WEAK_FUNC(sub_82AB3CF8);
PPC_FUNC_IMPL(__imp__sub_82AB3CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,67
	ctx.r3.s64 = 67;
	// addi r4,r11,32052
	ctx.r4.s64 = ctx.r11.s64 + 32052;
	// bl 0x82316b80
	ctx.lr = 0x82AB3D14;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14528(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14528, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3D2C"))) PPC_WEAK_FUNC(sub_82AB3D2C);
PPC_FUNC_IMPL(__imp__sub_82AB3D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3D30"))) PPC_WEAK_FUNC(sub_82AB3D30);
PPC_FUNC_IMPL(__imp__sub_82AB3D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,68
	ctx.r3.s64 = 68;
	// addi r4,r11,32056
	ctx.r4.s64 = ctx.r11.s64 + 32056;
	// bl 0x82316b80
	ctx.lr = 0x82AB3D4C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14527(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14527, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3D64"))) PPC_WEAK_FUNC(sub_82AB3D64);
PPC_FUNC_IMPL(__imp__sub_82AB3D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3D68"))) PPC_WEAK_FUNC(sub_82AB3D68);
PPC_FUNC_IMPL(__imp__sub_82AB3D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,50
	ctx.r3.s64 = 50;
	// addi r4,r11,32060
	ctx.r4.s64 = ctx.r11.s64 + 32060;
	// bl 0x82316b80
	ctx.lr = 0x82AB3D84;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14526(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14526, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3D9C"))) PPC_WEAK_FUNC(sub_82AB3D9C);
PPC_FUNC_IMPL(__imp__sub_82AB3D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3DA0"))) PPC_WEAK_FUNC(sub_82AB3DA0);
PPC_FUNC_IMPL(__imp__sub_82AB3DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r4,r11,32064
	ctx.r4.s64 = ctx.r11.s64 + 32064;
	// bl 0x82316b80
	ctx.lr = 0x82AB3DBC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14525(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14525, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3DD4"))) PPC_WEAK_FUNC(sub_82AB3DD4);
PPC_FUNC_IMPL(__imp__sub_82AB3DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3DD8"))) PPC_WEAK_FUNC(sub_82AB3DD8);
PPC_FUNC_IMPL(__imp__sub_82AB3DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r4,r11,32068
	ctx.r4.s64 = ctx.r11.s64 + 32068;
	// bl 0x82316b80
	ctx.lr = 0x82AB3DF4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14524(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14524, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3E0C"))) PPC_WEAK_FUNC(sub_82AB3E0C);
PPC_FUNC_IMPL(__imp__sub_82AB3E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3E10"))) PPC_WEAK_FUNC(sub_82AB3E10);
PPC_FUNC_IMPL(__imp__sub_82AB3E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,30
	ctx.r3.s64 = 30;
	// addi r4,r11,32072
	ctx.r4.s64 = ctx.r11.s64 + 32072;
	// bl 0x82316b80
	ctx.lr = 0x82AB3E2C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14523(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14523, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3E44"))) PPC_WEAK_FUNC(sub_82AB3E44);
PPC_FUNC_IMPL(__imp__sub_82AB3E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3E48"))) PPC_WEAK_FUNC(sub_82AB3E48);
PPC_FUNC_IMPL(__imp__sub_82AB3E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r4,r11,32076
	ctx.r4.s64 = ctx.r11.s64 + 32076;
	// bl 0x82316b80
	ctx.lr = 0x82AB3E64;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14522(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14522, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3E7C"))) PPC_WEAK_FUNC(sub_82AB3E7C);
PPC_FUNC_IMPL(__imp__sub_82AB3E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3E80"))) PPC_WEAK_FUNC(sub_82AB3E80);
PPC_FUNC_IMPL(__imp__sub_82AB3E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r4,r11,32080
	ctx.r4.s64 = ctx.r11.s64 + 32080;
	// bl 0x82316b80
	ctx.lr = 0x82AB3E9C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14521(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14521, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3EB4"))) PPC_WEAK_FUNC(sub_82AB3EB4);
PPC_FUNC_IMPL(__imp__sub_82AB3EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3EB8"))) PPC_WEAK_FUNC(sub_82AB3EB8);
PPC_FUNC_IMPL(__imp__sub_82AB3EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r4,r11,32084
	ctx.r4.s64 = ctx.r11.s64 + 32084;
	// bl 0x82316b80
	ctx.lr = 0x82AB3ED4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14520(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14520, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3EEC"))) PPC_WEAK_FUNC(sub_82AB3EEC);
PPC_FUNC_IMPL(__imp__sub_82AB3EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3EF0"))) PPC_WEAK_FUNC(sub_82AB3EF0);
PPC_FUNC_IMPL(__imp__sub_82AB3EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r4,r11,32088
	ctx.r4.s64 = ctx.r11.s64 + 32088;
	// bl 0x82316b80
	ctx.lr = 0x82AB3F0C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14519(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14519, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3F24"))) PPC_WEAK_FUNC(sub_82AB3F24);
PPC_FUNC_IMPL(__imp__sub_82AB3F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3F28"))) PPC_WEAK_FUNC(sub_82AB3F28);
PPC_FUNC_IMPL(__imp__sub_82AB3F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r4,r11,32092
	ctx.r4.s64 = ctx.r11.s64 + 32092;
	// bl 0x82316b80
	ctx.lr = 0x82AB3F44;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14518(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14518, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3F5C"))) PPC_WEAK_FUNC(sub_82AB3F5C);
PPC_FUNC_IMPL(__imp__sub_82AB3F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3F60"))) PPC_WEAK_FUNC(sub_82AB3F60);
PPC_FUNC_IMPL(__imp__sub_82AB3F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r4,r11,32096
	ctx.r4.s64 = ctx.r11.s64 + 32096;
	// bl 0x82316b80
	ctx.lr = 0x82AB3F7C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14517(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14517, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3F94"))) PPC_WEAK_FUNC(sub_82AB3F94);
PPC_FUNC_IMPL(__imp__sub_82AB3F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3F98"))) PPC_WEAK_FUNC(sub_82AB3F98);
PPC_FUNC_IMPL(__imp__sub_82AB3F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r4,r11,32100
	ctx.r4.s64 = ctx.r11.s64 + 32100;
	// bl 0x82316b80
	ctx.lr = 0x82AB3FB4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14516(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14516, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB3FCC"))) PPC_WEAK_FUNC(sub_82AB3FCC);
PPC_FUNC_IMPL(__imp__sub_82AB3FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB3FD0"))) PPC_WEAK_FUNC(sub_82AB3FD0);
PPC_FUNC_IMPL(__imp__sub_82AB3FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r4,r11,32104
	ctx.r4.s64 = ctx.r11.s64 + 32104;
	// bl 0x82316b80
	ctx.lr = 0x82AB3FEC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14515(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14515, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4004"))) PPC_WEAK_FUNC(sub_82AB4004);
PPC_FUNC_IMPL(__imp__sub_82AB4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4008"))) PPC_WEAK_FUNC(sub_82AB4008);
PPC_FUNC_IMPL(__imp__sub_82AB4008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,40
	ctx.r3.s64 = 40;
	// addi r4,r11,32108
	ctx.r4.s64 = ctx.r11.s64 + 32108;
	// bl 0x82316b80
	ctx.lr = 0x82AB4024;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14514(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14514, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB403C"))) PPC_WEAK_FUNC(sub_82AB403C);
PPC_FUNC_IMPL(__imp__sub_82AB403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4040"))) PPC_WEAK_FUNC(sub_82AB4040);
PPC_FUNC_IMPL(__imp__sub_82AB4040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r4,r11,32112
	ctx.r4.s64 = ctx.r11.s64 + 32112;
	// bl 0x82316b80
	ctx.lr = 0x82AB405C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14513(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14513, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4074"))) PPC_WEAK_FUNC(sub_82AB4074);
PPC_FUNC_IMPL(__imp__sub_82AB4074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4078"))) PPC_WEAK_FUNC(sub_82AB4078);
PPC_FUNC_IMPL(__imp__sub_82AB4078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r4,r11,32116
	ctx.r4.s64 = ctx.r11.s64 + 32116;
	// bl 0x82316b80
	ctx.lr = 0x82AB4094;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14512(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14512, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB40AC"))) PPC_WEAK_FUNC(sub_82AB40AC);
PPC_FUNC_IMPL(__imp__sub_82AB40AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB40B0"))) PPC_WEAK_FUNC(sub_82AB40B0);
PPC_FUNC_IMPL(__imp__sub_82AB40B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,46
	ctx.r3.s64 = 46;
	// addi r4,r11,32120
	ctx.r4.s64 = ctx.r11.s64 + 32120;
	// bl 0x82316b80
	ctx.lr = 0x82AB40CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14511(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14511, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB40E4"))) PPC_WEAK_FUNC(sub_82AB40E4);
PPC_FUNC_IMPL(__imp__sub_82AB40E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB40E8"))) PPC_WEAK_FUNC(sub_82AB40E8);
PPC_FUNC_IMPL(__imp__sub_82AB40E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r4,r11,32124
	ctx.r4.s64 = ctx.r11.s64 + 32124;
	// bl 0x82316b80
	ctx.lr = 0x82AB4104;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14510(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14510, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB411C"))) PPC_WEAK_FUNC(sub_82AB411C);
PPC_FUNC_IMPL(__imp__sub_82AB411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4120"))) PPC_WEAK_FUNC(sub_82AB4120);
PPC_FUNC_IMPL(__imp__sub_82AB4120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r4,r11,32128
	ctx.r4.s64 = ctx.r11.s64 + 32128;
	// bl 0x82316b80
	ctx.lr = 0x82AB413C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14509(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14509, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4154"))) PPC_WEAK_FUNC(sub_82AB4154);
PPC_FUNC_IMPL(__imp__sub_82AB4154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4158"))) PPC_WEAK_FUNC(sub_82AB4158);
PPC_FUNC_IMPL(__imp__sub_82AB4158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,82
	ctx.r3.s64 = 82;
	// addi r4,r11,32132
	ctx.r4.s64 = ctx.r11.s64 + 32132;
	// bl 0x82316b80
	ctx.lr = 0x82AB4174;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14508(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14508, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB418C"))) PPC_WEAK_FUNC(sub_82AB418C);
PPC_FUNC_IMPL(__imp__sub_82AB418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4190"))) PPC_WEAK_FUNC(sub_82AB4190);
PPC_FUNC_IMPL(__imp__sub_82AB4190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32136
	ctx.r4.s64 = ctx.r11.s64 + 32136;
	// bl 0x82316b80
	ctx.lr = 0x82AB41AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14507(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14507, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB41C4"))) PPC_WEAK_FUNC(sub_82AB41C4);
PPC_FUNC_IMPL(__imp__sub_82AB41C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB41C8"))) PPC_WEAK_FUNC(sub_82AB41C8);
PPC_FUNC_IMPL(__imp__sub_82AB41C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,58
	ctx.r3.s64 = 58;
	// addi r4,r11,32136
	ctx.r4.s64 = ctx.r11.s64 + 32136;
	// bl 0x82316c70
	ctx.lr = 0x82AB41E4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14506(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14506, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB41FC"))) PPC_WEAK_FUNC(sub_82AB41FC);
PPC_FUNC_IMPL(__imp__sub_82AB41FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4200"))) PPC_WEAK_FUNC(sub_82AB4200);
PPC_FUNC_IMPL(__imp__sub_82AB4200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32140
	ctx.r4.s64 = ctx.r11.s64 + 32140;
	// bl 0x82316b80
	ctx.lr = 0x82AB421C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14505(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14505, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4234"))) PPC_WEAK_FUNC(sub_82AB4234);
PPC_FUNC_IMPL(__imp__sub_82AB4234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4238"))) PPC_WEAK_FUNC(sub_82AB4238);
PPC_FUNC_IMPL(__imp__sub_82AB4238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r4,r11,32140
	ctx.r4.s64 = ctx.r11.s64 + 32140;
	// bl 0x82316c70
	ctx.lr = 0x82AB4254;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14504(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14504, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB426C"))) PPC_WEAK_FUNC(sub_82AB426C);
PPC_FUNC_IMPL(__imp__sub_82AB426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4270"))) PPC_WEAK_FUNC(sub_82AB4270);
PPC_FUNC_IMPL(__imp__sub_82AB4270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32144
	ctx.r4.s64 = ctx.r11.s64 + 32144;
	// bl 0x82316b80
	ctx.lr = 0x82AB428C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14503(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14503, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB42A4"))) PPC_WEAK_FUNC(sub_82AB42A4);
PPC_FUNC_IMPL(__imp__sub_82AB42A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB42A8"))) PPC_WEAK_FUNC(sub_82AB42A8);
PPC_FUNC_IMPL(__imp__sub_82AB42A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r4,r11,32144
	ctx.r4.s64 = ctx.r11.s64 + 32144;
	// bl 0x82316c70
	ctx.lr = 0x82AB42C4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14502(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14502, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB42DC"))) PPC_WEAK_FUNC(sub_82AB42DC);
PPC_FUNC_IMPL(__imp__sub_82AB42DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB42E0"))) PPC_WEAK_FUNC(sub_82AB42E0);
PPC_FUNC_IMPL(__imp__sub_82AB42E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32148
	ctx.r4.s64 = ctx.r11.s64 + 32148;
	// bl 0x82316b80
	ctx.lr = 0x82AB42FC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14501(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14501, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4314"))) PPC_WEAK_FUNC(sub_82AB4314);
PPC_FUNC_IMPL(__imp__sub_82AB4314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4318"))) PPC_WEAK_FUNC(sub_82AB4318);
PPC_FUNC_IMPL(__imp__sub_82AB4318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,82
	ctx.r3.s64 = 82;
	// addi r4,r11,32148
	ctx.r4.s64 = ctx.r11.s64 + 32148;
	// bl 0x82316c70
	ctx.lr = 0x82AB4334;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14500(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14500, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB434C"))) PPC_WEAK_FUNC(sub_82AB434C);
PPC_FUNC_IMPL(__imp__sub_82AB434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4350"))) PPC_WEAK_FUNC(sub_82AB4350);
PPC_FUNC_IMPL(__imp__sub_82AB4350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32152
	ctx.r4.s64 = ctx.r11.s64 + 32152;
	// bl 0x82316b80
	ctx.lr = 0x82AB436C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14499(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14499, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4384"))) PPC_WEAK_FUNC(sub_82AB4384);
PPC_FUNC_IMPL(__imp__sub_82AB4384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4388"))) PPC_WEAK_FUNC(sub_82AB4388);
PPC_FUNC_IMPL(__imp__sub_82AB4388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,61
	ctx.r3.s64 = 61;
	// addi r4,r11,32152
	ctx.r4.s64 = ctx.r11.s64 + 32152;
	// bl 0x82316c70
	ctx.lr = 0x82AB43A4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14498(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14498, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB43BC"))) PPC_WEAK_FUNC(sub_82AB43BC);
PPC_FUNC_IMPL(__imp__sub_82AB43BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB43C0"))) PPC_WEAK_FUNC(sub_82AB43C0);
PPC_FUNC_IMPL(__imp__sub_82AB43C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32156
	ctx.r4.s64 = ctx.r11.s64 + 32156;
	// bl 0x82316b80
	ctx.lr = 0x82AB43DC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14497(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14497, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB43F4"))) PPC_WEAK_FUNC(sub_82AB43F4);
PPC_FUNC_IMPL(__imp__sub_82AB43F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB43F8"))) PPC_WEAK_FUNC(sub_82AB43F8);
PPC_FUNC_IMPL(__imp__sub_82AB43F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,62
	ctx.r3.s64 = 62;
	// addi r4,r11,32156
	ctx.r4.s64 = ctx.r11.s64 + 32156;
	// bl 0x82316c70
	ctx.lr = 0x82AB4414;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14496(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14496, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB442C"))) PPC_WEAK_FUNC(sub_82AB442C);
PPC_FUNC_IMPL(__imp__sub_82AB442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4430"))) PPC_WEAK_FUNC(sub_82AB4430);
PPC_FUNC_IMPL(__imp__sub_82AB4430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32160
	ctx.r4.s64 = ctx.r11.s64 + 32160;
	// bl 0x82316b80
	ctx.lr = 0x82AB444C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14495(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14495, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4464"))) PPC_WEAK_FUNC(sub_82AB4464);
PPC_FUNC_IMPL(__imp__sub_82AB4464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4468"))) PPC_WEAK_FUNC(sub_82AB4468);
PPC_FUNC_IMPL(__imp__sub_82AB4468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,63
	ctx.r3.s64 = 63;
	// addi r4,r11,32160
	ctx.r4.s64 = ctx.r11.s64 + 32160;
	// bl 0x82316c70
	ctx.lr = 0x82AB4484;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14494(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14494, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB449C"))) PPC_WEAK_FUNC(sub_82AB449C);
PPC_FUNC_IMPL(__imp__sub_82AB449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB44A0"))) PPC_WEAK_FUNC(sub_82AB44A0);
PPC_FUNC_IMPL(__imp__sub_82AB44A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32164
	ctx.r4.s64 = ctx.r11.s64 + 32164;
	// bl 0x82316b80
	ctx.lr = 0x82AB44BC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14493(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14493, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB44D4"))) PPC_WEAK_FUNC(sub_82AB44D4);
PPC_FUNC_IMPL(__imp__sub_82AB44D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB44D8"))) PPC_WEAK_FUNC(sub_82AB44D8);
PPC_FUNC_IMPL(__imp__sub_82AB44D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,83
	ctx.r3.s64 = 83;
	// addi r4,r11,32164
	ctx.r4.s64 = ctx.r11.s64 + 32164;
	// bl 0x82316c70
	ctx.lr = 0x82AB44F4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14492(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14492, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB450C"))) PPC_WEAK_FUNC(sub_82AB450C);
PPC_FUNC_IMPL(__imp__sub_82AB450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4510"))) PPC_WEAK_FUNC(sub_82AB4510);
PPC_FUNC_IMPL(__imp__sub_82AB4510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32168
	ctx.r4.s64 = ctx.r11.s64 + 32168;
	// bl 0x82316b80
	ctx.lr = 0x82AB452C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14491(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14491, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4544"))) PPC_WEAK_FUNC(sub_82AB4544);
PPC_FUNC_IMPL(__imp__sub_82AB4544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4548"))) PPC_WEAK_FUNC(sub_82AB4548);
PPC_FUNC_IMPL(__imp__sub_82AB4548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,64
	ctx.r3.s64 = 64;
	// addi r4,r11,32168
	ctx.r4.s64 = ctx.r11.s64 + 32168;
	// bl 0x82316c70
	ctx.lr = 0x82AB4564;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14490(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14490, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB457C"))) PPC_WEAK_FUNC(sub_82AB457C);
PPC_FUNC_IMPL(__imp__sub_82AB457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4580"))) PPC_WEAK_FUNC(sub_82AB4580);
PPC_FUNC_IMPL(__imp__sub_82AB4580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32172
	ctx.r4.s64 = ctx.r11.s64 + 32172;
	// bl 0x82316b80
	ctx.lr = 0x82AB459C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14489(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14489, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB45B4"))) PPC_WEAK_FUNC(sub_82AB45B4);
PPC_FUNC_IMPL(__imp__sub_82AB45B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB45B8"))) PPC_WEAK_FUNC(sub_82AB45B8);
PPC_FUNC_IMPL(__imp__sub_82AB45B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32172
	ctx.r4.s64 = ctx.r11.s64 + 32172;
	// bl 0x82316c70
	ctx.lr = 0x82AB45D4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14488(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14488, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB45EC"))) PPC_WEAK_FUNC(sub_82AB45EC);
PPC_FUNC_IMPL(__imp__sub_82AB45EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB45F0"))) PPC_WEAK_FUNC(sub_82AB45F0);
PPC_FUNC_IMPL(__imp__sub_82AB45F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32176
	ctx.r4.s64 = ctx.r11.s64 + 32176;
	// bl 0x82316b80
	ctx.lr = 0x82AB460C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14487(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14487, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4624"))) PPC_WEAK_FUNC(sub_82AB4624);
PPC_FUNC_IMPL(__imp__sub_82AB4624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4628"))) PPC_WEAK_FUNC(sub_82AB4628);
PPC_FUNC_IMPL(__imp__sub_82AB4628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,66
	ctx.r3.s64 = 66;
	// addi r4,r11,32176
	ctx.r4.s64 = ctx.r11.s64 + 32176;
	// bl 0x82316c70
	ctx.lr = 0x82AB4644;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14486(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14486, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB465C"))) PPC_WEAK_FUNC(sub_82AB465C);
PPC_FUNC_IMPL(__imp__sub_82AB465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4660"))) PPC_WEAK_FUNC(sub_82AB4660);
PPC_FUNC_IMPL(__imp__sub_82AB4660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32180
	ctx.r4.s64 = ctx.r11.s64 + 32180;
	// bl 0x82316b80
	ctx.lr = 0x82AB467C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14485(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14485, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4694"))) PPC_WEAK_FUNC(sub_82AB4694);
PPC_FUNC_IMPL(__imp__sub_82AB4694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4698"))) PPC_WEAK_FUNC(sub_82AB4698);
PPC_FUNC_IMPL(__imp__sub_82AB4698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,84
	ctx.r3.s64 = 84;
	// addi r4,r11,32180
	ctx.r4.s64 = ctx.r11.s64 + 32180;
	// bl 0x82316c70
	ctx.lr = 0x82AB46B4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14484(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14484, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB46CC"))) PPC_WEAK_FUNC(sub_82AB46CC);
PPC_FUNC_IMPL(__imp__sub_82AB46CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB46D0"))) PPC_WEAK_FUNC(sub_82AB46D0);
PPC_FUNC_IMPL(__imp__sub_82AB46D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32184
	ctx.r4.s64 = ctx.r11.s64 + 32184;
	// bl 0x82316b80
	ctx.lr = 0x82AB46EC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14483(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14483, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4704"))) PPC_WEAK_FUNC(sub_82AB4704);
PPC_FUNC_IMPL(__imp__sub_82AB4704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4708"))) PPC_WEAK_FUNC(sub_82AB4708);
PPC_FUNC_IMPL(__imp__sub_82AB4708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,67
	ctx.r3.s64 = 67;
	// addi r4,r11,32184
	ctx.r4.s64 = ctx.r11.s64 + 32184;
	// bl 0x82316c70
	ctx.lr = 0x82AB4724;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14482(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14482, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB473C"))) PPC_WEAK_FUNC(sub_82AB473C);
PPC_FUNC_IMPL(__imp__sub_82AB473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4740"))) PPC_WEAK_FUNC(sub_82AB4740);
PPC_FUNC_IMPL(__imp__sub_82AB4740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32188
	ctx.r4.s64 = ctx.r11.s64 + 32188;
	// bl 0x82316b80
	ctx.lr = 0x82AB475C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14481(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14481, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4774"))) PPC_WEAK_FUNC(sub_82AB4774);
PPC_FUNC_IMPL(__imp__sub_82AB4774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4778"))) PPC_WEAK_FUNC(sub_82AB4778);
PPC_FUNC_IMPL(__imp__sub_82AB4778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,68
	ctx.r3.s64 = 68;
	// addi r4,r11,32188
	ctx.r4.s64 = ctx.r11.s64 + 32188;
	// bl 0x82316c70
	ctx.lr = 0x82AB4794;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14480(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14480, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB47AC"))) PPC_WEAK_FUNC(sub_82AB47AC);
PPC_FUNC_IMPL(__imp__sub_82AB47AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB47B0"))) PPC_WEAK_FUNC(sub_82AB47B0);
PPC_FUNC_IMPL(__imp__sub_82AB47B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32192
	ctx.r4.s64 = ctx.r11.s64 + 32192;
	// bl 0x82316b80
	ctx.lr = 0x82AB47CC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14479(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14479, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB47E4"))) PPC_WEAK_FUNC(sub_82AB47E4);
PPC_FUNC_IMPL(__imp__sub_82AB47E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB47E8"))) PPC_WEAK_FUNC(sub_82AB47E8);
PPC_FUNC_IMPL(__imp__sub_82AB47E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,69
	ctx.r3.s64 = 69;
	// addi r4,r11,32192
	ctx.r4.s64 = ctx.r11.s64 + 32192;
	// bl 0x82316c70
	ctx.lr = 0x82AB4804;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14478(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14478, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB481C"))) PPC_WEAK_FUNC(sub_82AB481C);
PPC_FUNC_IMPL(__imp__sub_82AB481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4820"))) PPC_WEAK_FUNC(sub_82AB4820);
PPC_FUNC_IMPL(__imp__sub_82AB4820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32196
	ctx.r4.s64 = ctx.r11.s64 + 32196;
	// bl 0x82316b80
	ctx.lr = 0x82AB483C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14477(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14477, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4854"))) PPC_WEAK_FUNC(sub_82AB4854);
PPC_FUNC_IMPL(__imp__sub_82AB4854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4858"))) PPC_WEAK_FUNC(sub_82AB4858);
PPC_FUNC_IMPL(__imp__sub_82AB4858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,85
	ctx.r3.s64 = 85;
	// addi r4,r11,32196
	ctx.r4.s64 = ctx.r11.s64 + 32196;
	// bl 0x82316c70
	ctx.lr = 0x82AB4874;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14476(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14476, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB488C"))) PPC_WEAK_FUNC(sub_82AB488C);
PPC_FUNC_IMPL(__imp__sub_82AB488C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4890"))) PPC_WEAK_FUNC(sub_82AB4890);
PPC_FUNC_IMPL(__imp__sub_82AB4890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32200
	ctx.r4.s64 = ctx.r11.s64 + 32200;
	// bl 0x82316b80
	ctx.lr = 0x82AB48AC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14475(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14475, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB48C4"))) PPC_WEAK_FUNC(sub_82AB48C4);
PPC_FUNC_IMPL(__imp__sub_82AB48C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB48C8"))) PPC_WEAK_FUNC(sub_82AB48C8);
PPC_FUNC_IMPL(__imp__sub_82AB48C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,71
	ctx.r3.s64 = 71;
	// addi r4,r11,32200
	ctx.r4.s64 = ctx.r11.s64 + 32200;
	// bl 0x82316c70
	ctx.lr = 0x82AB48E4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14474(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14474, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB48FC"))) PPC_WEAK_FUNC(sub_82AB48FC);
PPC_FUNC_IMPL(__imp__sub_82AB48FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4900"))) PPC_WEAK_FUNC(sub_82AB4900);
PPC_FUNC_IMPL(__imp__sub_82AB4900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32204
	ctx.r4.s64 = ctx.r11.s64 + 32204;
	// bl 0x82316b80
	ctx.lr = 0x82AB491C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14473(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14473, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4934"))) PPC_WEAK_FUNC(sub_82AB4934);
PPC_FUNC_IMPL(__imp__sub_82AB4934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4938"))) PPC_WEAK_FUNC(sub_82AB4938);
PPC_FUNC_IMPL(__imp__sub_82AB4938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,70
	ctx.r3.s64 = 70;
	// addi r4,r11,32204
	ctx.r4.s64 = ctx.r11.s64 + 32204;
	// bl 0x82316c70
	ctx.lr = 0x82AB4954;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14472(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14472, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB496C"))) PPC_WEAK_FUNC(sub_82AB496C);
PPC_FUNC_IMPL(__imp__sub_82AB496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4970"))) PPC_WEAK_FUNC(sub_82AB4970);
PPC_FUNC_IMPL(__imp__sub_82AB4970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32208
	ctx.r4.s64 = ctx.r11.s64 + 32208;
	// bl 0x82316b80
	ctx.lr = 0x82AB498C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14471(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14471, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB49A4"))) PPC_WEAK_FUNC(sub_82AB49A4);
PPC_FUNC_IMPL(__imp__sub_82AB49A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB49A8"))) PPC_WEAK_FUNC(sub_82AB49A8);
PPC_FUNC_IMPL(__imp__sub_82AB49A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,86
	ctx.r3.s64 = 86;
	// addi r4,r11,32208
	ctx.r4.s64 = ctx.r11.s64 + 32208;
	// bl 0x82316c70
	ctx.lr = 0x82AB49C4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14470(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14470, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB49DC"))) PPC_WEAK_FUNC(sub_82AB49DC);
PPC_FUNC_IMPL(__imp__sub_82AB49DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB49E0"))) PPC_WEAK_FUNC(sub_82AB49E0);
PPC_FUNC_IMPL(__imp__sub_82AB49E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32212
	ctx.r4.s64 = ctx.r11.s64 + 32212;
	// bl 0x82316b80
	ctx.lr = 0x82AB49FC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14469(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14469, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4A14"))) PPC_WEAK_FUNC(sub_82AB4A14);
PPC_FUNC_IMPL(__imp__sub_82AB4A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4A18"))) PPC_WEAK_FUNC(sub_82AB4A18);
PPC_FUNC_IMPL(__imp__sub_82AB4A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,55
	ctx.r3.s64 = 55;
	// addi r4,r11,32212
	ctx.r4.s64 = ctx.r11.s64 + 32212;
	// bl 0x82316c70
	ctx.lr = 0x82AB4A34;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14468(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14468, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4A4C"))) PPC_WEAK_FUNC(sub_82AB4A4C);
PPC_FUNC_IMPL(__imp__sub_82AB4A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4A50"))) PPC_WEAK_FUNC(sub_82AB4A50);
PPC_FUNC_IMPL(__imp__sub_82AB4A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32216
	ctx.r4.s64 = ctx.r11.s64 + 32216;
	// bl 0x82316b80
	ctx.lr = 0x82AB4A6C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14467(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14467, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4A84"))) PPC_WEAK_FUNC(sub_82AB4A84);
PPC_FUNC_IMPL(__imp__sub_82AB4A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4A88"))) PPC_WEAK_FUNC(sub_82AB4A88);
PPC_FUNC_IMPL(__imp__sub_82AB4A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r4,r11,32216
	ctx.r4.s64 = ctx.r11.s64 + 32216;
	// bl 0x82316c70
	ctx.lr = 0x82AB4AA4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14466(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14466, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4ABC"))) PPC_WEAK_FUNC(sub_82AB4ABC);
PPC_FUNC_IMPL(__imp__sub_82AB4ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4AC0"))) PPC_WEAK_FUNC(sub_82AB4AC0);
PPC_FUNC_IMPL(__imp__sub_82AB4AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32220
	ctx.r4.s64 = ctx.r11.s64 + 32220;
	// bl 0x82316b80
	ctx.lr = 0x82AB4ADC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14465(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14465, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4AF4"))) PPC_WEAK_FUNC(sub_82AB4AF4);
PPC_FUNC_IMPL(__imp__sub_82AB4AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4AF8"))) PPC_WEAK_FUNC(sub_82AB4AF8);
PPC_FUNC_IMPL(__imp__sub_82AB4AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32220
	ctx.r4.s64 = ctx.r11.s64 + 32220;
	// bl 0x82316c70
	ctx.lr = 0x82AB4B14;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14464(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14464, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4B2C"))) PPC_WEAK_FUNC(sub_82AB4B2C);
PPC_FUNC_IMPL(__imp__sub_82AB4B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4B30"))) PPC_WEAK_FUNC(sub_82AB4B30);
PPC_FUNC_IMPL(__imp__sub_82AB4B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32224
	ctx.r4.s64 = ctx.r11.s64 + 32224;
	// bl 0x82316b80
	ctx.lr = 0x82AB4B4C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14463(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14463, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4B64"))) PPC_WEAK_FUNC(sub_82AB4B64);
PPC_FUNC_IMPL(__imp__sub_82AB4B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4B68"))) PPC_WEAK_FUNC(sub_82AB4B68);
PPC_FUNC_IMPL(__imp__sub_82AB4B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,87
	ctx.r3.s64 = 87;
	// addi r4,r11,32224
	ctx.r4.s64 = ctx.r11.s64 + 32224;
	// bl 0x82316c70
	ctx.lr = 0x82AB4B84;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14462(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14462, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4B9C"))) PPC_WEAK_FUNC(sub_82AB4B9C);
PPC_FUNC_IMPL(__imp__sub_82AB4B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4BA0"))) PPC_WEAK_FUNC(sub_82AB4BA0);
PPC_FUNC_IMPL(__imp__sub_82AB4BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32228
	ctx.r4.s64 = ctx.r11.s64 + 32228;
	// bl 0x82316b80
	ctx.lr = 0x82AB4BBC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14461(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14461, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4BD4"))) PPC_WEAK_FUNC(sub_82AB4BD4);
PPC_FUNC_IMPL(__imp__sub_82AB4BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4BD8"))) PPC_WEAK_FUNC(sub_82AB4BD8);
PPC_FUNC_IMPL(__imp__sub_82AB4BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,96
	ctx.r3.s64 = 96;
	// addi r4,r11,32228
	ctx.r4.s64 = ctx.r11.s64 + 32228;
	// bl 0x82316c70
	ctx.lr = 0x82AB4BF4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14460(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14460, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4C0C"))) PPC_WEAK_FUNC(sub_82AB4C0C);
PPC_FUNC_IMPL(__imp__sub_82AB4C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4C10"))) PPC_WEAK_FUNC(sub_82AB4C10);
PPC_FUNC_IMPL(__imp__sub_82AB4C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32232
	ctx.r4.s64 = ctx.r11.s64 + 32232;
	// bl 0x82316b80
	ctx.lr = 0x82AB4C2C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14459(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14459, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4C44"))) PPC_WEAK_FUNC(sub_82AB4C44);
PPC_FUNC_IMPL(__imp__sub_82AB4C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4C48"))) PPC_WEAK_FUNC(sub_82AB4C48);
PPC_FUNC_IMPL(__imp__sub_82AB4C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32232
	ctx.r4.s64 = ctx.r11.s64 + 32232;
	// bl 0x82316c70
	ctx.lr = 0x82AB4C64;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14458(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14458, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4C7C"))) PPC_WEAK_FUNC(sub_82AB4C7C);
PPC_FUNC_IMPL(__imp__sub_82AB4C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4C80"))) PPC_WEAK_FUNC(sub_82AB4C80);
PPC_FUNC_IMPL(__imp__sub_82AB4C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32236
	ctx.r4.s64 = ctx.r11.s64 + 32236;
	// bl 0x82316b80
	ctx.lr = 0x82AB4C9C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14457(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14457, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4CB4"))) PPC_WEAK_FUNC(sub_82AB4CB4);
PPC_FUNC_IMPL(__imp__sub_82AB4CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4CB8"))) PPC_WEAK_FUNC(sub_82AB4CB8);
PPC_FUNC_IMPL(__imp__sub_82AB4CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,74
	ctx.r3.s64 = 74;
	// addi r4,r11,32236
	ctx.r4.s64 = ctx.r11.s64 + 32236;
	// bl 0x82316c70
	ctx.lr = 0x82AB4CD4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14456(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14456, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4CEC"))) PPC_WEAK_FUNC(sub_82AB4CEC);
PPC_FUNC_IMPL(__imp__sub_82AB4CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4CF0"))) PPC_WEAK_FUNC(sub_82AB4CF0);
PPC_FUNC_IMPL(__imp__sub_82AB4CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32240
	ctx.r4.s64 = ctx.r11.s64 + 32240;
	// bl 0x82316b80
	ctx.lr = 0x82AB4D0C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14455(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14455, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4D24"))) PPC_WEAK_FUNC(sub_82AB4D24);
PPC_FUNC_IMPL(__imp__sub_82AB4D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4D28"))) PPC_WEAK_FUNC(sub_82AB4D28);
PPC_FUNC_IMPL(__imp__sub_82AB4D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,75
	ctx.r3.s64 = 75;
	// addi r4,r11,32240
	ctx.r4.s64 = ctx.r11.s64 + 32240;
	// bl 0x82316c70
	ctx.lr = 0x82AB4D44;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14454(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14454, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4D5C"))) PPC_WEAK_FUNC(sub_82AB4D5C);
PPC_FUNC_IMPL(__imp__sub_82AB4D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4D60"))) PPC_WEAK_FUNC(sub_82AB4D60);
PPC_FUNC_IMPL(__imp__sub_82AB4D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32244
	ctx.r4.s64 = ctx.r11.s64 + 32244;
	// bl 0x82316b80
	ctx.lr = 0x82AB4D7C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14453(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14453, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4D94"))) PPC_WEAK_FUNC(sub_82AB4D94);
PPC_FUNC_IMPL(__imp__sub_82AB4D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4D98"))) PPC_WEAK_FUNC(sub_82AB4D98);
PPC_FUNC_IMPL(__imp__sub_82AB4D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,76
	ctx.r3.s64 = 76;
	// addi r4,r11,32244
	ctx.r4.s64 = ctx.r11.s64 + 32244;
	// bl 0x82316c70
	ctx.lr = 0x82AB4DB4;
	sub_82316C70(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14452(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14452, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4DCC"))) PPC_WEAK_FUNC(sub_82AB4DCC);
PPC_FUNC_IMPL(__imp__sub_82AB4DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4DD0"))) PPC_WEAK_FUNC(sub_82AB4DD0);
PPC_FUNC_IMPL(__imp__sub_82AB4DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,129
	ctx.r3.s64 = 129;
	// addi r4,r11,32248
	ctx.r4.s64 = ctx.r11.s64 + 32248;
	// bl 0x82316b80
	ctx.lr = 0x82AB4DEC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14451(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14451, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4E04"))) PPC_WEAK_FUNC(sub_82AB4E04);
PPC_FUNC_IMPL(__imp__sub_82AB4E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4E08"))) PPC_WEAK_FUNC(sub_82AB4E08);
PPC_FUNC_IMPL(__imp__sub_82AB4E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,242
	ctx.r3.s64 = 242;
	// addi r4,r11,32252
	ctx.r4.s64 = ctx.r11.s64 + 32252;
	// bl 0x82316b80
	ctx.lr = 0x82AB4E24;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14450(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14450, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4E3C"))) PPC_WEAK_FUNC(sub_82AB4E3C);
PPC_FUNC_IMPL(__imp__sub_82AB4E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4E40"))) PPC_WEAK_FUNC(sub_82AB4E40);
PPC_FUNC_IMPL(__imp__sub_82AB4E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,243
	ctx.r3.s64 = 243;
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// bl 0x82316b80
	ctx.lr = 0x82AB4E5C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14449(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14449, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4E74"))) PPC_WEAK_FUNC(sub_82AB4E74);
PPC_FUNC_IMPL(__imp__sub_82AB4E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4E78"))) PPC_WEAK_FUNC(sub_82AB4E78);
PPC_FUNC_IMPL(__imp__sub_82AB4E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,130
	ctx.r3.s64 = 130;
	// addi r4,r11,32260
	ctx.r4.s64 = ctx.r11.s64 + 32260;
	// bl 0x82316b80
	ctx.lr = 0x82AB4E94;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14448(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14448, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4EAC"))) PPC_WEAK_FUNC(sub_82AB4EAC);
PPC_FUNC_IMPL(__imp__sub_82AB4EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4EB0"))) PPC_WEAK_FUNC(sub_82AB4EB0);
PPC_FUNC_IMPL(__imp__sub_82AB4EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,131
	ctx.r3.s64 = 131;
	// addi r4,r11,32264
	ctx.r4.s64 = ctx.r11.s64 + 32264;
	// bl 0x82316b80
	ctx.lr = 0x82AB4ECC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14447(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14447, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4EE4"))) PPC_WEAK_FUNC(sub_82AB4EE4);
PPC_FUNC_IMPL(__imp__sub_82AB4EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4EE8"))) PPC_WEAK_FUNC(sub_82AB4EE8);
PPC_FUNC_IMPL(__imp__sub_82AB4EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,132
	ctx.r3.s64 = 132;
	// addi r4,r11,32268
	ctx.r4.s64 = ctx.r11.s64 + 32268;
	// bl 0x82316b80
	ctx.lr = 0x82AB4F04;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14446(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14446, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4F1C"))) PPC_WEAK_FUNC(sub_82AB4F1C);
PPC_FUNC_IMPL(__imp__sub_82AB4F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4F20"))) PPC_WEAK_FUNC(sub_82AB4F20);
PPC_FUNC_IMPL(__imp__sub_82AB4F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,133
	ctx.r3.s64 = 133;
	// addi r4,r11,32272
	ctx.r4.s64 = ctx.r11.s64 + 32272;
	// bl 0x82316b80
	ctx.lr = 0x82AB4F3C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14445(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14445, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4F54"))) PPC_WEAK_FUNC(sub_82AB4F54);
PPC_FUNC_IMPL(__imp__sub_82AB4F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4F58"))) PPC_WEAK_FUNC(sub_82AB4F58);
PPC_FUNC_IMPL(__imp__sub_82AB4F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,134
	ctx.r3.s64 = 134;
	// addi r4,r11,32276
	ctx.r4.s64 = ctx.r11.s64 + 32276;
	// bl 0x82316b80
	ctx.lr = 0x82AB4F74;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14444(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14444, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4F8C"))) PPC_WEAK_FUNC(sub_82AB4F8C);
PPC_FUNC_IMPL(__imp__sub_82AB4F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4F90"))) PPC_WEAK_FUNC(sub_82AB4F90);
PPC_FUNC_IMPL(__imp__sub_82AB4F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,135
	ctx.r3.s64 = 135;
	// addi r4,r11,32280
	ctx.r4.s64 = ctx.r11.s64 + 32280;
	// bl 0x82316b80
	ctx.lr = 0x82AB4FAC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14443(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14443, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4FC4"))) PPC_WEAK_FUNC(sub_82AB4FC4);
PPC_FUNC_IMPL(__imp__sub_82AB4FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB4FC8"))) PPC_WEAK_FUNC(sub_82AB4FC8);
PPC_FUNC_IMPL(__imp__sub_82AB4FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,136
	ctx.r3.s64 = 136;
	// addi r4,r11,32284
	ctx.r4.s64 = ctx.r11.s64 + 32284;
	// bl 0x82316b80
	ctx.lr = 0x82AB4FE4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14442(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14442, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB4FFC"))) PPC_WEAK_FUNC(sub_82AB4FFC);
PPC_FUNC_IMPL(__imp__sub_82AB4FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5000"))) PPC_WEAK_FUNC(sub_82AB5000);
PPC_FUNC_IMPL(__imp__sub_82AB5000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,137
	ctx.r3.s64 = 137;
	// addi r4,r11,32288
	ctx.r4.s64 = ctx.r11.s64 + 32288;
	// bl 0x82316b80
	ctx.lr = 0x82AB501C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14441(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5034"))) PPC_WEAK_FUNC(sub_82AB5034);
PPC_FUNC_IMPL(__imp__sub_82AB5034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5038"))) PPC_WEAK_FUNC(sub_82AB5038);
PPC_FUNC_IMPL(__imp__sub_82AB5038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,138
	ctx.r3.s64 = 138;
	// addi r4,r11,32292
	ctx.r4.s64 = ctx.r11.s64 + 32292;
	// bl 0x82316b80
	ctx.lr = 0x82AB5054;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14440(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14440, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB506C"))) PPC_WEAK_FUNC(sub_82AB506C);
PPC_FUNC_IMPL(__imp__sub_82AB506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5070"))) PPC_WEAK_FUNC(sub_82AB5070);
PPC_FUNC_IMPL(__imp__sub_82AB5070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,139
	ctx.r3.s64 = 139;
	// addi r4,r11,32296
	ctx.r4.s64 = ctx.r11.s64 + 32296;
	// bl 0x82316b80
	ctx.lr = 0x82AB508C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14439(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14439, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB50A4"))) PPC_WEAK_FUNC(sub_82AB50A4);
PPC_FUNC_IMPL(__imp__sub_82AB50A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB50A8"))) PPC_WEAK_FUNC(sub_82AB50A8);
PPC_FUNC_IMPL(__imp__sub_82AB50A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,140
	ctx.r3.s64 = 140;
	// addi r4,r11,32300
	ctx.r4.s64 = ctx.r11.s64 + 32300;
	// bl 0x82316b80
	ctx.lr = 0x82AB50C4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14438(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14438, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB50DC"))) PPC_WEAK_FUNC(sub_82AB50DC);
PPC_FUNC_IMPL(__imp__sub_82AB50DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB50E0"))) PPC_WEAK_FUNC(sub_82AB50E0);
PPC_FUNC_IMPL(__imp__sub_82AB50E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,141
	ctx.r3.s64 = 141;
	// addi r4,r11,32304
	ctx.r4.s64 = ctx.r11.s64 + 32304;
	// bl 0x82316b80
	ctx.lr = 0x82AB50FC;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14437(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14437, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5114"))) PPC_WEAK_FUNC(sub_82AB5114);
PPC_FUNC_IMPL(__imp__sub_82AB5114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5118"))) PPC_WEAK_FUNC(sub_82AB5118);
PPC_FUNC_IMPL(__imp__sub_82AB5118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,196
	ctx.r3.s64 = 196;
	// addi r4,r11,32308
	ctx.r4.s64 = ctx.r11.s64 + 32308;
	// bl 0x82316b80
	ctx.lr = 0x82AB5134;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14436(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14436, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB514C"))) PPC_WEAK_FUNC(sub_82AB514C);
PPC_FUNC_IMPL(__imp__sub_82AB514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5150"))) PPC_WEAK_FUNC(sub_82AB5150);
PPC_FUNC_IMPL(__imp__sub_82AB5150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,143
	ctx.r3.s64 = 143;
	// addi r4,r11,32312
	ctx.r4.s64 = ctx.r11.s64 + 32312;
	// bl 0x82316b80
	ctx.lr = 0x82AB516C;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14435(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14435, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AB5184"))) PPC_WEAK_FUNC(sub_82AB5184);
PPC_FUNC_IMPL(__imp__sub_82AB5184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AB5188"))) PPC_WEAK_FUNC(sub_82AB5188);
PPC_FUNC_IMPL(__imp__sub_82AB5188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r3,144
	ctx.r3.s64 = 144;
	// addi r4,r11,32316
	ctx.r4.s64 = ctx.r11.s64 + 32316;
	// bl 0x82316b80
	ctx.lr = 0x82AB51A4;
	sub_82316B80(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stb r3,-14434(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14434, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

