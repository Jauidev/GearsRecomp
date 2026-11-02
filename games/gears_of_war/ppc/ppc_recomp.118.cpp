#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8279A660"))) PPC_WEAK_FUNC(sub_8279A660);
PPC_FUNC_IMPL(__imp__sub_8279A660) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279A678;
	sub_82799B78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-7224
	ctx.r11.s64 = ctx.r11.s64 + -7224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8279A69C"))) PPC_WEAK_FUNC(sub_8279A69C);
PPC_FUNC_IMPL(__imp__sub_8279A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A6A0"))) PPC_WEAK_FUNC(sub_8279A6A0);
PPC_FUNC_IMPL(__imp__sub_8279A6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-7176
	ctx.r3.s64 = ctx.r11.s64 + -7176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A6AC"))) PPC_WEAK_FUNC(sub_8279A6AC);
PPC_FUNC_IMPL(__imp__sub_8279A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A6B0"))) PPC_WEAK_FUNC(sub_8279A6B0);
PPC_FUNC_IMPL(__imp__sub_8279A6B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8279A6B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279A6C8;
	sub_82799B78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-7168
	ctx.r11.s64 = ctx.r11.s64 + -7168;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,140
	ctx.r4.s64 = 140;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r10,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r10.u8);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lwz r28,428(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279A700;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x8279a720
	if (cr0.eq) goto loc_8279A720;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279A718;
	sub_82799B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8279a724
	goto loc_8279A724;
loc_8279A720:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8279A724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// bl 0x8279a318
	ctx.lr = 0x8279A730;
	sub_8279A318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279A73C"))) PPC_WEAK_FUNC(sub_8279A73C);
PPC_FUNC_IMPL(__imp__sub_8279A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A740"))) PPC_WEAK_FUNC(sub_8279A740);
PPC_FUNC_IMPL(__imp__sub_8279A740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-7116
	ctx.r3.s64 = ctx.r11.s64 + -7116;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A74C"))) PPC_WEAK_FUNC(sub_8279A74C);
PPC_FUNC_IMPL(__imp__sub_8279A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A750"))) PPC_WEAK_FUNC(sub_8279A750);
PPC_FUNC_IMPL(__imp__sub_8279A750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279A774;
	sub_82799B78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r11,r11,-7104
	ctx.r11.s64 = ctx.r11.s64 + -7104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A7A0"))) PPC_WEAK_FUNC(sub_8279A7A0);
PPC_FUNC_IMPL(__imp__sub_8279A7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-7056
	ctx.r3.s64 = ctx.r11.s64 + -7056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A7AC"))) PPC_WEAK_FUNC(sub_8279A7AC);
PPC_FUNC_IMPL(__imp__sub_8279A7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A7B0"))) PPC_WEAK_FUNC(sub_8279A7B0);
PPC_FUNC_IMPL(__imp__sub_8279A7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279A7D4;
	sub_82799B78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r11,r11,-7048
	ctx.r11.s64 = ctx.r11.s64 + -7048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A800"))) PPC_WEAK_FUNC(sub_8279A800);
PPC_FUNC_IMPL(__imp__sub_8279A800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A80C"))) PPC_WEAK_FUNC(sub_8279A80C);
PPC_FUNC_IMPL(__imp__sub_8279A80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A810"))) PPC_WEAK_FUNC(sub_8279A810);
PPC_FUNC_IMPL(__imp__sub_8279A810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6940
	ctx.r3.s64 = ctx.r11.s64 + -6940;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A81C"))) PPC_WEAK_FUNC(sub_8279A81C);
PPC_FUNC_IMPL(__imp__sub_8279A81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A820"))) PPC_WEAK_FUNC(sub_8279A820);
PPC_FUNC_IMPL(__imp__sub_8279A820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6880
	ctx.r3.s64 = ctx.r11.s64 + -6880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A82C"))) PPC_WEAK_FUNC(sub_8279A82C);
PPC_FUNC_IMPL(__imp__sub_8279A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A830"))) PPC_WEAK_FUNC(sub_8279A830);
PPC_FUNC_IMPL(__imp__sub_8279A830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6812
	ctx.r3.s64 = ctx.r11.s64 + -6812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A83C"))) PPC_WEAK_FUNC(sub_8279A83C);
PPC_FUNC_IMPL(__imp__sub_8279A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A840"))) PPC_WEAK_FUNC(sub_8279A840);
PPC_FUNC_IMPL(__imp__sub_8279A840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6752
	ctx.r3.s64 = ctx.r11.s64 + -6752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A84C"))) PPC_WEAK_FUNC(sub_8279A84C);
PPC_FUNC_IMPL(__imp__sub_8279A84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A850"))) PPC_WEAK_FUNC(sub_8279A850);
PPC_FUNC_IMPL(__imp__sub_8279A850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8279a460
	ctx.lr = 0x8279A870;
	sub_8279A460(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x8279A87C;
	sub_8279A318(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A894"))) PPC_WEAK_FUNC(sub_8279A894);
PPC_FUNC_IMPL(__imp__sub_8279A894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A898"))) PPC_WEAK_FUNC(sub_8279A898);
PPC_FUNC_IMPL(__imp__sub_8279A898) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x8279A8A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279A8BC;
	sub_82799B78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// addi r11,r11,-6740
	ctx.r11.s64 = ctx.r11.s64 + -6740;
	// li r4,144
	ctx.r4.s64 = 144;
	// stb r27,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r27.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r27,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r27.u8);
	// lwz r28,428(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279A8EC;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8279a91c
	if (cr0.eq) goto loc_8279A91C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279A904;
	sub_82799B78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r31,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r31.u32);
	// addi r10,r11,-6988
	ctx.r10.s64 = ctx.r11.s64 + -6988;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x8279a920
	goto loc_8279A920;
loc_8279A91C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8279A920:
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r28,428(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279A934;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8279a964
	if (cr0.eq) goto loc_8279A964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279A94C;
	sub_82799B78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r31,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r31.u32);
	// addi r10,r11,-6928
	ctx.r10.s64 = ctx.r11.s64 + -6928;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x8279a968
	goto loc_8279A968;
loc_8279A964:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8279A968:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8279a318
	ctx.lr = 0x8279A978;
	sub_8279A318(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x82796938
	ctx.lr = 0x8279A984;
	sub_82796938(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82794220
	ctx.lr = 0x8279A9A8;
	sub_82794220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279A9B8"))) PPC_WEAK_FUNC(sub_8279A9B8);
PPC_FUNC_IMPL(__imp__sub_8279A9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6692
	ctx.r3.s64 = ctx.r11.s64 + -6692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A9C4"))) PPC_WEAK_FUNC(sub_8279A9C4);
PPC_FUNC_IMPL(__imp__sub_8279A9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A9C8"))) PPC_WEAK_FUNC(sub_8279A9C8);
PPC_FUNC_IMPL(__imp__sub_8279A9C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x8279A9D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279A9EC;
	sub_82799B78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// addi r11,r11,-7168
	ctx.r11.s64 = ctx.r11.s64 + -7168;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,140
	ctx.r4.s64 = 140;
	// stb r10,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r27.u32);
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// lwz r29,428(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279AA24;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x8279aa44
	if (cr0.eq) goto loc_8279AA44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279AA3C;
	sub_82799B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8279aa48
	goto loc_8279AA48;
loc_8279AA44:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8279AA48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// bl 0x8279a318
	ctx.lr = 0x8279AA54;
	sub_8279A318(ctx, base);
	// lwz r29,136(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82794220
	ctx.lr = 0x8279AA64;
	sub_82794220(ctx, base);
	// stw r31,948(r29)
	PPC_STORE_U32(ctx.r29.u32 + 948, ctx.r31.u32);
	// lwz r28,428(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// li r4,144
	ctx.r4.s64 = 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279AA78;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8279aaa8
	if (cr0.eq) goto loc_8279AAA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279AA90;
	sub_82799B78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r31,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r31.u32);
	// addi r11,r11,-6860
	ctx.r11.s64 = ctx.r11.s64 + -6860;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8279aaac
	goto loc_8279AAAC;
loc_8279AAA8:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8279AAAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279AABC"))) PPC_WEAK_FUNC(sub_8279AABC);
PPC_FUNC_IMPL(__imp__sub_8279AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279AAC0"))) PPC_WEAK_FUNC(sub_8279AAC0);
PPC_FUNC_IMPL(__imp__sub_8279AAC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8279AAC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8279a6b0
	ctx.lr = 0x8279AAE4;
	sub_8279A6B0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r11,r11,-6680
	ctx.r11.s64 = ctx.r11.s64 + -6680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82794220
	ctx.lr = 0x8279AB00;
	sub_82794220(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r31.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// lwz r28,428(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279AB18;
	sub_82759FF0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8279ab48
	if (cr0.eq) goto loc_8279AB48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82799b78
	ctx.lr = 0x8279AB30;
	sub_82799B78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// addi r11,r11,-6800
	ctx.r11.s64 = ctx.r11.s64 + -6800;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8279ab4c
	goto loc_8279AB4C;
loc_8279AB48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8279AB4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279AB5C"))) PPC_WEAK_FUNC(sub_8279AB5C);
PPC_FUNC_IMPL(__imp__sub_8279AB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279AB60"))) PPC_WEAK_FUNC(sub_8279AB60);
PPC_FUNC_IMPL(__imp__sub_8279AB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6628
	ctx.r3.s64 = ctx.r11.s64 + -6628;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279AB6C"))) PPC_WEAK_FUNC(sub_8279AB6C);
PPC_FUNC_IMPL(__imp__sub_8279AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279AB70"))) PPC_WEAK_FUNC(sub_8279AB70);
PPC_FUNC_IMPL(__imp__sub_8279AB70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8279a3a0
	ctx.lr = 0x8279AB90;
	sub_8279A3A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279abac
	if (cr0.eq) goto loc_8279ABAC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279abac
	if (cr6.eq) goto loc_8279ABAC;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x8279ABAC;
	sub_8275A120(ctx, base);
loc_8279ABAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279ABC8"))) PPC_WEAK_FUNC(sub_8279ABC8);
PPC_FUNC_IMPL(__imp__sub_8279ABC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x8279ABD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r28,r11,-6172
	ctx.r28.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r27,r11,3080
	ctx.r27.s64 = ctx.r11.s64 + 3080;
	// blt cr6,0x8279abfc
	if (cr6.lt) goto loc_8279ABFC;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x8279ac18
	if (cr6.lt) goto loc_8279AC18;
loc_8279ABFC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,68
	ctx.r7.s64 = 68;
	// addi r5,r11,3028
	ctx.r5.s64 = ctx.r11.s64 + 3028;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279AC18;
	sub_826CA560(ctx, base);
loc_8279AC18:
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mulli r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 * 36;
	// addi r30,r11,-1120
	ctx.r30.s64 = ctx.r11.s64 + -1120;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// lwzx r29,r31,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8279ac50
	if (!cr0.eq) goto loc_8279AC50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,71
	ctx.r7.s64 = 71;
	// addi r5,r11,3016
	ctx.r5.s64 = ctx.r11.s64 + 3016;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279AC50;
	sub_826CA560(ctx, base);
loc_8279AC50:
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8279AC60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279AC68"))) PPC_WEAK_FUNC(sub_8279AC68);
PPC_FUNC_IMPL(__imp__sub_8279AC68) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// addi r31,r11,-48
	ctx.r31.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x8279ac9c
	if (!cr6.gt) goto loc_8279AC9C;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// bne cr6,0x8279ac98
	if (!cr6.eq) goto loc_8279AC98;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8279acd0
	goto loc_8279ACD0;
loc_8279AC98:
	// addi r31,r11,-116
	ctx.r31.s64 = ctx.r11.s64 + -116;
loc_8279AC9C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8279acac
	if (cr6.lt) goto loc_8279ACAC;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// ble cr6,0x8279acd0
	if (!cr6.gt) goto loc_8279ACD0;
loc_8279ACAC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// addi r6,r11,3080
	ctx.r6.s64 = ctx.r11.s64 + 3080;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,3164
	ctx.r5.s64 = ctx.r11.s64 + 3164;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279ACD0;
	sub_826CA560(ctx, base);
loc_8279ACD0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-6552
	ctx.r11.s64 = ctx.r11.s64 + -6552;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8279ACF4"))) PPC_WEAK_FUNC(sub_8279ACF4);
PPC_FUNC_IMPL(__imp__sub_8279ACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279ACF8"))) PPC_WEAK_FUNC(sub_8279ACF8);
PPC_FUNC_IMPL(__imp__sub_8279ACF8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8279ad40
	if (!cr6.eq) goto loc_8279AD40;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// addi r6,r11,-31536
	ctx.r6.s64 = ctx.r11.s64 + -31536;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-31456
	ctx.r5.s64 = ctx.r11.s64 + -31456;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279AD40;
	sub_826CA560(ctx, base);
loc_8279AD40:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279AD58;
	sub_82796DB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279AD70"))) PPC_WEAK_FUNC(sub_8279AD70);
PPC_FUNC_IMPL(__imp__sub_8279AD70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8279ad94
	if (cr6.lt) goto loc_8279AD94;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x8279adb8
	if (cr6.lt) goto loc_8279ADB8;
loc_8279AD94:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,5226
	ctx.r7.s64 = 5226;
	// addi r6,r11,3240
	ctx.r6.s64 = ctx.r11.s64 + 3240;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,3184
	ctx.r5.s64 = ctx.r11.s64 + 3184;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279ADB8;
	sub_826CA560(ctx, base);
loc_8279ADB8:
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// addi r11,r11,-1120
	ctx.r11.s64 = ctx.r11.s64 + -1120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,36
	ctx.r5.s64 = 36;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x828d2930
	ctx.lr = 0x8279ADD4;
	sub_828D2930(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279ADEC"))) PPC_WEAK_FUNC(sub_8279ADEC);
PPC_FUNC_IMPL(__imp__sub_8279ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279ADF0"))) PPC_WEAK_FUNC(sub_8279ADF0);
PPC_FUNC_IMPL(__imp__sub_8279ADF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8279ae14
	if (cr6.lt) goto loc_8279AE14;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x8279ae38
	if (cr6.lt) goto loc_8279AE38;
loc_8279AE14:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,5239
	ctx.r7.s64 = 5239;
	// addi r6,r11,3240
	ctx.r6.s64 = ctx.r11.s64 + 3240;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,3184
	ctx.r5.s64 = ctx.r11.s64 + 3184;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279AE38;
	sub_826CA560(ctx, base);
loc_8279AE38:
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// addi r11,r11,-1120
	ctx.r11.s64 = ctx.r11.s64 + -1120;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8279AE60"))) PPC_WEAK_FUNC(sub_8279AE60);
PPC_FUNC_IMPL(__imp__sub_8279AE60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8279ae84
	if (cr6.lt) goto loc_8279AE84;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x8279aea8
	if (cr6.lt) goto loc_8279AEA8;
loc_8279AE84:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,5319
	ctx.r7.s64 = 5319;
	// addi r6,r11,3240
	ctx.r6.s64 = ctx.r11.s64 + 3240;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,3184
	ctx.r5.s64 = ctx.r11.s64 + 3184;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279AEA8;
	sub_826CA560(ctx, base);
loc_8279AEA8:
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// addi r11,r11,-1120
	ctx.r11.s64 = ctx.r11.s64 + -1120;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8279AED0"))) PPC_WEAK_FUNC(sub_8279AED0);
PPC_FUNC_IMPL(__imp__sub_8279AED0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8279aef4
	if (cr6.lt) goto loc_8279AEF4;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x8279af18
	if (cr6.lt) goto loc_8279AF18;
loc_8279AEF4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,5351
	ctx.r7.s64 = 5351;
	// addi r6,r11,3240
	ctx.r6.s64 = ctx.r11.s64 + 3240;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,3184
	ctx.r5.s64 = ctx.r11.s64 + 3184;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279AF18;
	sub_826CA560(ctx, base);
loc_8279AF18:
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// addi r11,r11,-1120
	ctx.r11.s64 = ctx.r11.s64 + -1120;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8279AF40"))) PPC_WEAK_FUNC(sub_8279AF40);
PPC_FUNC_IMPL(__imp__sub_8279AF40) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8279af64
	if (cr6.lt) goto loc_8279AF64;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x8279af88
	if (cr6.lt) goto loc_8279AF88;
loc_8279AF64:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,5363
	ctx.r7.s64 = 5363;
	// addi r6,r11,3240
	ctx.r6.s64 = ctx.r11.s64 + 3240;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,3184
	ctx.r5.s64 = ctx.r11.s64 + 3184;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279AF88;
	sub_826CA560(ctx, base);
loc_8279AF88:
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// addi r11,r11,-1120
	ctx.r11.s64 = ctx.r11.s64 + -1120;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8279AFB0"))) PPC_WEAK_FUNC(sub_8279AFB0);
PPC_FUNC_IMPL(__imp__sub_8279AFB0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8279b018
	if (cr6.lt) goto loc_8279B018;
	// beq cr6,0x8279b010
	if (cr6.eq) goto loc_8279B010;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8279b008
	if (cr6.lt) goto loc_8279B008;
	// beq cr6,0x8279b000
	if (cr6.eq) goto loc_8279B000;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,5399
	ctx.r7.s64 = 5399;
	// addi r6,r11,3240
	ctx.r6.s64 = ctx.r11.s64 + 3240;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,21376
	ctx.r5.s64 = ctx.r11.s64 + 21376;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279AFF8;
	sub_826CA560(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8279b01c
	goto loc_8279B01C;
loc_8279B000:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8279b01c
	goto loc_8279B01C;
loc_8279B008:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8279b01c
	goto loc_8279B01C;
loc_8279B010:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8279b01c
	goto loc_8279B01C;
loc_8279B018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8279B01C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B02C"))) PPC_WEAK_FUNC(sub_8279B02C);
PPC_FUNC_IMPL(__imp__sub_8279B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B030"))) PPC_WEAK_FUNC(sub_8279B030);
PPC_FUNC_IMPL(__imp__sub_8279B030) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8279b0b4
	if (cr6.lt) goto loc_8279B0B4;
	// beq cr6,0x8279b0ac
	if (cr6.eq) goto loc_8279B0AC;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8279b0a4
	if (cr6.lt) goto loc_8279B0A4;
	// beq cr6,0x8279b09c
	if (cr6.eq) goto loc_8279B09C;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x8279b094
	if (cr6.lt) goto loc_8279B094;
	// beq cr6,0x8279b08c
	if (cr6.eq) goto loc_8279B08C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,5422
	ctx.r7.s64 = 5422;
	// addi r6,r11,3240
	ctx.r6.s64 = ctx.r11.s64 + 3240;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,21376
	ctx.r5.s64 = ctx.r11.s64 + 21376;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279B084;
	sub_826CA560(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8279b0b8
	goto loc_8279B0B8;
loc_8279B08C:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x8279b0b8
	goto loc_8279B0B8;
loc_8279B094:
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x8279b0b8
	goto loc_8279B0B8;
loc_8279B09C:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8279b0b8
	goto loc_8279B0B8;
loc_8279B0A4:
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x8279b0b8
	goto loc_8279B0B8;
loc_8279B0AC:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8279b0b8
	goto loc_8279B0B8;
loc_8279B0B4:
	// li r3,5
	ctx.r3.s64 = 5;
loc_8279B0B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B0C8"))) PPC_WEAK_FUNC(sub_8279B0C8);
PPC_FUNC_IMPL(__imp__sub_8279B0C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8279b110
	if (cr6.lt) goto loc_8279B110;
	// beq cr6,0x8279b12c
	if (cr6.eq) goto loc_8279B12C;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8279b124
	if (cr6.lt) goto loc_8279B124;
	// beq cr6,0x8279b110
	if (cr6.eq) goto loc_8279B110;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,5448
	ctx.r7.s64 = 5448;
	// addi r6,r11,3240
	ctx.r6.s64 = ctx.r11.s64 + 3240;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,21376
	ctx.r5.s64 = ctx.r11.s64 + 21376;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279B110;
	sub_826CA560(ctx, base);
loc_8279B110:
	// li r3,3
	ctx.r3.s64 = 3;
loc_8279B114:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8279B124:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8279b114
	goto loc_8279B114;
loc_8279B12C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8279b114
	goto loc_8279B114;
}

__attribute__((alias("__imp__sub_8279B134"))) PPC_WEAK_FUNC(sub_8279B134);
PPC_FUNC_IMPL(__imp__sub_8279B134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B138"))) PPC_WEAK_FUNC(sub_8279B138);
PPC_FUNC_IMPL(__imp__sub_8279B138) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x8279b168
	goto loc_8279B168;
loc_8279B158:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8279a318
	ctx.lr = 0x8279B164;
	sub_8279A318(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8279B168:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8279b158
	if (!cr0.eq) goto loc_8279B158;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B18C"))) PPC_WEAK_FUNC(sub_8279B18C);
PPC_FUNC_IMPL(__imp__sub_8279B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B190"))) PPC_WEAK_FUNC(sub_8279B190);
PPC_FUNC_IMPL(__imp__sub_8279B190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8279B198;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8279B1A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a7930
	ctx.lr = 0x8279B1B8;
	sub_827A7930(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279B1D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8279b1a8
	if (cr6.lt) goto loc_8279B1A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279b200
	if (cr0.eq) goto loc_8279B200;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8279B200:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279B208"))) PPC_WEAK_FUNC(sub_8279B208);
PPC_FUNC_IMPL(__imp__sub_8279B208) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8275a120
	ctx.lr = 0x8279B230;
	sub_8275A120(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279b244
	if (cr0.eq) goto loc_8279B244;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x8279B244;
	sub_8275A120(ctx, base);
loc_8279B244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B260"))) PPC_WEAK_FUNC(sub_8279B260);
PPC_FUNC_IMPL(__imp__sub_8279B260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x8279B268;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// beq cr6,0x8279b2b4
	if (cr6.eq) goto loc_8279B2B4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8279b2d8
	if (!cr6.eq) goto loc_8279B2D8;
loc_8279B2B4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,4319
	ctx.r7.s64 = 4319;
	// addi r6,r11,3080
	ctx.r6.s64 = ctx.r11.s64 + 3080;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,3324
	ctx.r5.s64 = ctx.r11.s64 + 3324;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279B2D8;
	sub_826CA560(ctx, base);
loc_8279B2D8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8279b3ac
	if (cr6.eq) goto loc_8279B3AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279b314
	if (cr0.eq) goto loc_8279B314;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r9,r11,21,11,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x8279b318
	goto loc_8279B318;
loc_8279B314:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8279B318:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279b334
	if (cr6.eq) goto loc_8279B334;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 152, ctx.r10.u8);
loc_8279B334:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279b34c
	if (cr0.eq) goto loc_8279B34C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// b 0x8279b350
	goto loc_8279B350;
loc_8279B34C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8279B350:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279b360
	if (cr6.eq) goto loc_8279B360;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stb r27,158(r11)
	PPC_STORE_U8(ctx.r11.u32 + 158, ctx.r27.u8);
loc_8279B360:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a7930
	ctx.lr = 0x8279B36C;
	sub_827A7930(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x827a7930
	ctx.lr = 0x8279B380;
	sub_827A7930(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x827a7930
	ctx.lr = 0x8279B394;
	sub_827A7930(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// bl 0x827a7930
	ctx.lr = 0x8279B3A8;
	sub_827A7930(ctx, base);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
loc_8279B3AC:
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279B3D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,88(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279B404;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,88(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279B430;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,88(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279B45C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r11,-6524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6524);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279B470"))) PPC_WEAK_FUNC(sub_8279B470);
PPC_FUNC_IMPL(__imp__sub_8279B470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x8279B478;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827768b8
	ctx.lr = 0x8279B484;
	sub_827768B8(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279b554
	if (!cr0.eq) goto loc_8279B554;
	// lbz r11,2116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2116);
	// addi r29,r31,184
	ctx.r29.s64 = ctx.r31.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq 0x8279b4c4
	if (cr0.eq) goto loc_8279B4C4;
	// lwz r6,2124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// lwz r7,2128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// neg r11,r6
	ctx.r11.s64 = -ctx.r6.s64;
	// lwz r5,2120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// stw r11,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r11.u32);
	// bl 0x82792fd0
	ctx.lr = 0x8279B4C0;
	sub_82792FD0(ctx, base);
	// b 0x8279b4d8
	goto loc_8279B4D8;
loc_8279B4C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82792fd0
	ctx.lr = 0x8279B4D4;
	sub_82792FD0(ctx, base);
	// stw r24,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r24.u32);
loc_8279B4D8:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r28,r31,1096
	ctx.r28.s64 = ctx.r31.s64 + 1096;
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
loc_8279B4E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279b540
	if (cr6.eq) goto loc_8279B540;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82788300
	ctx.lr = 0x8279B500;
	sub_82788300(ctx, base);
	// lbz r11,2116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8279b540
	if (cr0.eq) goto loc_8279B540;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,2120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8279b540
	if (!cr6.eq) goto loc_8279B540;
	// lwz r11,2128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// lwz r10,2124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8279b540
	if (!cr6.lt) goto loc_8279B540;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82788298
	ctx.lr = 0x8279B540;
	sub_82788298(ctx, base);
loc_8279B540:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x8279b4e8
	if (cr6.lt) goto loc_8279B4E8;
	// b 0x8279b794
	goto loc_8279B794;
loc_8279B554:
	// lbz r11,2100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2100);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r24,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r24.u32);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// stw r24,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r24.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8279b654
	if (cr0.eq) goto loc_8279B654;
	// lwz r11,2104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2104);
	// lwz r10,2108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2108);
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r11.s64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// stw r9,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r9.u32);
	// bge cr6,0x8279b654
	if (!cr6.lt) goto loc_8279B654;
loc_8279B594:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x82785c48
	ctx.lr = 0x8279B5A8;
	sub_82785C48(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8279b644
	if (cr0.eq) goto loc_8279B644;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_8279B5BC:
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8279b5d4
	if (!cr6.gt) goto loc_8279B5D4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8279b5e0
	goto loc_8279B5E0;
loc_8279B5D4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lwzx r29,r10,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
loc_8279B5E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279b614
	if (cr0.eq) goto loc_8279B614;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8279b608
	if (cr0.eq) goto loc_8279B608;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 228, ctx.r11.u32);
	// bl 0x82776bf8
	ctx.lr = 0x8279B608;
	sub_82776BF8(ctx, base);
loc_8279B608:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x8279b5bc
	goto loc_8279B5BC;
loc_8279B614:
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r23,5(r27)
	PPC_STORE_U8(ctx.r27.u32 + 5, ctx.r23.u8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82788300
	ctx.lr = 0x8279B634;
	sub_82788300(ctx, base);
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82788298
	ctx.lr = 0x8279B644;
	sub_82788298(ctx, base);
loc_8279B644:
	// lwz r11,2108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2108);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8279b594
	if (cr6.lt) goto loc_8279B594;
loc_8279B654:
	// lbz r11,2116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8279b770
	if (cr0.eq) goto loc_8279B770;
	// lwz r29,2124(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// lwz r10,2128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// subf r11,r29,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r29.s64;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// stw r11,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r11.u32);
	// bge cr6,0x8279b770
	if (!cr6.lt) goto loc_8279B770;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r26,-32253
	ctx.r26.s64 = -2113732608;
	// addi r25,r11,3368
	ctx.r25.s64 = ctx.r11.s64 + 3368;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,-6172
	ctx.r28.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r24,r11,3360
	ctx.r24.s64 = ctx.r11.s64 + 3360;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,3080
	ctx.r27.s64 = ctx.r11.s64 + 3080;
loc_8279B69C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,2120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82785c48
	ctx.lr = 0x8279B6AC;
	sub_82785C48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8279b760
	if (cr0.eq) goto loc_8279B760;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-6512(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6512);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279B6DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8279b6fc
	if (!cr0.eq) goto loc_8279B6FC;
	// li r7,4505
	ctx.r7.s64 = 4505;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279B6FC;
	sub_826CA560(ctx, base);
loc_8279B6FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279B710;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279b730
	if (!cr0.eq) goto loc_8279B730;
	// li r7,4506
	ctx.r7.s64 = 4506;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279B730;
	sub_826CA560(ctx, base);
loc_8279B730:
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r23,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r23.u8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82788300
	ctx.lr = 0x8279B750;
	sub_82788300(ctx, base);
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82788298
	ctx.lr = 0x8279B760;
	sub_82788298(ctx, base);
loc_8279B760:
	// lwz r11,2128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8279b69c
	if (cr6.lt) goto loc_8279B69C;
loc_8279B770:
	// addi r29,r31,184
	ctx.r29.s64 = ctx.r31.s64 + 184;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82792fd0
	ctx.lr = 0x8279B78C;
	sub_82792FD0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
loc_8279B794:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82792538
	ctx.lr = 0x8279B79C;
	sub_82792538(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279B7A4"))) PPC_WEAK_FUNC(sub_8279B7A4);
PPC_FUNC_IMPL(__imp__sub_8279B7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B7A8"))) PPC_WEAK_FUNC(sub_8279B7A8);
PPC_FUNC_IMPL(__imp__sub_8279B7A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x8279B7B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,376(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 376);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8279b808
	if (!cr6.eq) goto loc_8279B808;
	// lwz r30,432(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279B7DC;
	sub_82759FF0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x8279b800
	if (cr0.eq) goto loc_8279B800;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82794280
	ctx.lr = 0x8279B7FC;
	sub_82794280(ctx, base);
	// b 0x8279b804
	goto loc_8279B804;
loc_8279B800:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8279B804:
	// stw r31,376(r29)
	PPC_STORE_U32(ctx.r29.u32 + 376, ctx.r31.u32);
loc_8279B808:
	// lwz r3,376(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 376);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8279b864
	if (cr0.eq) goto loc_8279B864;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8279B818:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8279b84c
	if (!cr6.eq) goto loc_8279B84C;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8279b84c
	if (!cr6.eq) goto loc_8279B84C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8279b850
	if (cr6.eq) goto loc_8279B850;
loc_8279B84C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8279B850:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279b8b4
	if (!cr0.eq) goto loc_8279B8B4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8279b818
	if (!cr0.eq) goto loc_8279B818;
loc_8279B864:
	// lwz r30,432(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279B874;
	sub_82759FF0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x8279b89c
	if (cr0.eq) goto loc_8279B89C;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82794280
	ctx.lr = 0x8279B894;
	sub_82794280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8279b8a0
	goto loc_8279B8A0;
loc_8279B89C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8279B8A0:
	// lwz r11,376(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 376);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,376(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 376);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_8279B8B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279B8BC"))) PPC_WEAK_FUNC(sub_8279B8BC);
PPC_FUNC_IMPL(__imp__sub_8279B8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B8C0"))) PPC_WEAK_FUNC(sub_8279B8C0);
PPC_FUNC_IMPL(__imp__sub_8279B8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x8279B8C8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828d4234
	ctx.lr = 0x8279B8D0;
	__savefpr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// stw r5,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// stb r8,367(r1)
	PPC_STORE_U8(ctx.r1.u32 + 367, ctx.r8.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// clrlwi. r22,r8,24
	ctx.r22.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// rlwinm r23,r11,16,26,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// addi r16,r11,-6172
	ctx.r16.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// addi r15,r11,3080
	ctx.r15.s64 = ctx.r11.s64 + 3080;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-6616
	ctx.r11.s64 = ctx.r11.s64 + -6616;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq 0x8279be98
	if (cr0.eq) goto loc_8279BE98;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r18
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// rlwinm r24,r11,15,29,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// clrlwi r25,r11,16
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm. r10,r11,16,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8279bca4
	if (cr0.eq) goto loc_8279BCA4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279b988
	if (cr0.eq) goto loc_8279B988;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,384
	ctx.r7.s64 = 384;
	// addi r5,r11,4208
	ctx.r5.s64 = ctx.r11.s64 + 4208;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279B988;
	sub_826CA560(ctx, base);
loc_8279B988:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8279b9ac
	if (cr6.eq) goto loc_8279B9AC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,385
	ctx.r7.s64 = 385;
	// addi r5,r11,4180
	ctx.r5.s64 = ctx.r11.s64 + 4180;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279B9AC;
	sub_826CA560(ctx, base);
loc_8279B9AC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8279b9d0
	if (cr6.eq) goto loc_8279B9D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,391
	ctx.r7.s64 = 391;
	// addi r5,r11,4164
	ctx.r5.s64 = ctx.r11.s64 + 4164;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279B9D0;
	sub_826CA560(ctx, base);
loc_8279B9D0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279b9f0
	if (!cr6.lt) goto loc_8279B9F0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8279b9f4
	goto loc_8279B9F4;
loc_8279B9F0:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8279B9F4:
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r27,136(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 136);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x827864c0
	ctx.lr = 0x8279BA0C;
	sub_827864C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x8279bad0
	if (!cr6.eq) goto loc_8279BAD0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x827864c0
	ctx.lr = 0x8279BA28;
	sub_827864C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,29(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 29);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8279bac4
	if (!cr0.eq) goto loc_8279BAC4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279BA4C;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8279ba70
	if (cr0.eq) goto loc_8279BA70;
	// li r4,126
	ctx.r4.s64 = 126;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82798050
	ctx.lr = 0x8279BA68;
	sub_82798050(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8279ba74
	goto loc_8279BA74;
loc_8279BA70:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_8279BA74:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279BA84;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279BA94;
	sub_82796DB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82799958
	ctx.lr = 0x8279BAA0;
	sub_82799958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82794e68
	ctx.lr = 0x8279BAAC;
	sub_82794E68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,29(r29)
	PPC_STORE_U8(ctx.r29.u32 + 29, ctx.r11.u8);
	// bl 0x82794eb8
	ctx.lr = 0x8279BAC4;
	sub_82794EB8(ctx, base);
loc_8279BAC4:
	// li r23,30
	ctx.r23.s64 = 30;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x8279be94
	goto loc_8279BE94;
loc_8279BAD0:
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(ctx.r23.s32, 5, ctx.xer);
	// beq cr6,0x8279bb0c
	if (cr6.eq) goto loc_8279BB0C;
	// cmpwi cr6,r23,15
	cr6.compare<int32_t>(ctx.r23.s32, 15, ctx.xer);
	// beq cr6,0x8279bb0c
	if (cr6.eq) goto loc_8279BB0C;
	// cmpwi cr6,r23,17
	cr6.compare<int32_t>(ctx.r23.s32, 17, ctx.xer);
	// beq cr6,0x8279bb0c
	if (cr6.eq) goto loc_8279BB0C;
	// cmpwi cr6,r23,12
	cr6.compare<int32_t>(ctx.r23.s32, 12, ctx.xer);
	// beq cr6,0x8279bb0c
	if (cr6.eq) goto loc_8279BB0C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,418
	ctx.r7.s64 = 418;
	// addi r5,r11,4016
	ctx.r5.s64 = ctx.r11.s64 + 4016;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279BB0C;
	sub_826CA560(ctx, base);
loc_8279BB0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827768b8
	ctx.lr = 0x8279BB14;
	sub_827768B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279bb4c
	if (cr0.eq) goto loc_8279BB4C;
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(ctx.r23.s32, 5, ctx.xer);
	// beq cr6,0x8279bb40
	if (cr6.eq) goto loc_8279BB40;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,422
	ctx.r7.s64 = 422;
	// addi r5,r11,3980
	ctx.r5.s64 = ctx.r11.s64 + 3980;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279BB40;
	sub_826CA560(ctx, base);
loc_8279BB40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2100, ctx.r11.u8);
	// b 0x8279bbe4
	goto loc_8279BBE4;
loc_8279BB4C:
	// lbz r11,2116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8279bb94
	if (cr0.eq) goto loc_8279BB94;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,2120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8279bbe4
	if (cr6.eq) goto loc_8279BBE4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,426
	ctx.r7.s64 = 426;
	// addi r5,r11,3928
	ctx.r5.s64 = ctx.r11.s64 + 3928;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279BB90;
	sub_826CA560(ctx, base);
	// b 0x8279bbe4
	goto loc_8279BBE4;
loc_8279BB94:
	// cmpwi cr6,r23,15
	cr6.compare<int32_t>(ctx.r23.s32, 15, ctx.xer);
	// beq cr6,0x8279bbc8
	if (cr6.eq) goto loc_8279BBC8;
	// cmpwi cr6,r23,17
	cr6.compare<int32_t>(ctx.r23.s32, 17, ctx.xer);
	// beq cr6,0x8279bbc8
	if (cr6.eq) goto loc_8279BBC8;
	// cmpwi cr6,r23,12
	cr6.compare<int32_t>(ctx.r23.s32, 12, ctx.xer);
	// beq cr6,0x8279bbc8
	if (cr6.eq) goto loc_8279BBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,430
	ctx.r7.s64 = 430;
	// addi r5,r11,3816
	ctx.r5.s64 = ctx.r11.s64 + 3816;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279BBC8;
	sub_826CA560(ctx, base);
loc_8279BBC8:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2116, ctx.r10.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r11.u32);
loc_8279BBE4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x827864c0
	ctx.lr = 0x8279BBF8;
	sub_827864C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,29(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 29);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8279bc94
	if (!cr0.eq) goto loc_8279BC94;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279BC1C;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8279bc40
	if (cr0.eq) goto loc_8279BC40;
	// li r4,126
	ctx.r4.s64 = 126;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82798050
	ctx.lr = 0x8279BC38;
	sub_82798050(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8279bc44
	goto loc_8279BC44;
loc_8279BC40:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_8279BC44:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279BC54;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279BC64;
	sub_82796DB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82799958
	ctx.lr = 0x8279BC70;
	sub_82799958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82794e68
	ctx.lr = 0x8279BC7C;
	sub_82794E68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,29(r29)
	PPC_STORE_U8(ctx.r29.u32 + 29, ctx.r11.u8);
	// bl 0x82794eb8
	ctx.lr = 0x8279BC94;
	sub_82794EB8(ctx, base);
loc_8279BC94:
	// mr r17,r26
	ctx.r17.u64 = ctx.r26.u64;
	// li r23,31
	ctx.r23.s64 = 31;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x8279be98
	goto loc_8279BE98;
loc_8279BCA4:
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x8279bcc8
	if (cr6.eq) goto loc_8279BCC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,454
	ctx.r7.s64 = 454;
	// addi r5,r11,3776
	ctx.r5.s64 = ctx.r11.s64 + 3776;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279BCC8;
	sub_826CA560(ctx, base);
loc_8279BCC8:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x8279bcd8
	if (cr6.lt) goto loc_8279BCD8;
	// cmpwi cr6,r24,6
	cr6.compare<int32_t>(ctx.r24.s32, 6, ctx.xer);
	// blt cr6,0x8279bcf4
	if (cr6.lt) goto loc_8279BCF4;
loc_8279BCD8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,455
	ctx.r7.s64 = 455;
	// addi r5,r11,3716
	ctx.r5.s64 = ctx.r11.s64 + 3716;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279BCF4;
	sub_826CA560(ctx, base);
loc_8279BCF4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8279bd18
	if (cr6.eq) goto loc_8279BD18;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,462
	ctx.r7.s64 = 462;
	// addi r5,r11,4164
	ctx.r5.s64 = ctx.r11.s64 + 4164;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279BD18;
	sub_826CA560(ctx, base);
loc_8279BD18:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279BD2C;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8279bd50
	if (cr0.eq) goto loc_8279BD50;
	// li r4,99
	ctx.r4.s64 = 99;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82797b10
	ctx.lr = 0x8279BD48;
	sub_82797B10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8279bd54
	goto loc_8279BD54;
loc_8279BD50:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_8279BD54:
	// li r27,31
	ctx.r27.s64 = 31;
	// stw r25,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r25.u32);
	// li r29,34
	ctx.r29.s64 = 34;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r27.u32);
	// stw r29,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r29.u32);
	// stw r26,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r26.u32);
	// bl 0x827975b0
	ctx.lr = 0x8279BD7C;
	sub_827975B0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279BD90;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8279bdb4
	if (cr0.eq) goto loc_8279BDB4;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82797f30
	ctx.lr = 0x8279BDAC;
	sub_82797F30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8279bdb8
	goto loc_8279BDB8;
loc_8279BDB4:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_8279BDB8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r25.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279BDEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// stw r27,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r27.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,428(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279BE08;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x8279be2c
	if (cr0.eq) goto loc_8279BE2C;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82797f30
	ctx.lr = 0x8279BE24;
	sub_82797F30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8279be30
	goto loc_8279BE30;
loc_8279BE2C:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_8279BE30:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,9416
	ctx.r11.s64 = ctx.r11.s64 + 9416;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwzx r23,r9,r11
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r25,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r25.u32);
	// stw r10,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r10.u32);
	// stw r27,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r27.u32);
	// stw r11,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r11.u32);
	// stw r30,172(r28)
	PPC_STORE_U32(ctx.r28.u32 + 172, ctx.r30.u32);
	// stw r29,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r29.u32);
	// bl 0x827942e0
	ctx.lr = 0x8279BE78;
	sub_827942E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279BE84;
	sub_827942E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279BE90;
	sub_827942E0(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8279BE94:
	// lwz r17,92(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8279BE98:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279cabc
	if (cr0.eq) goto loc_8279CABC;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279bec8
	if (cr0.eq) goto loc_8279BEC8;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// andi. r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 & 17476;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8279bec8
	if (cr0.eq) goto loc_8279BEC8;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8279bed0
	goto loc_8279BED0;
loc_8279BEC8:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8279BED0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,10548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	ctx.f30.f64 = double(temp.f32);
	// beq 0x8279c0dc
	if (cr0.eq) goto loc_8279C0DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827a7930
	ctx.lr = 0x8279BEEC;
	sub_827A7930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827a7930
	ctx.lr = 0x8279BEFC;
	sub_827A7930(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827a7930
	ctx.lr = 0x8279BF0C;
	sub_827A7930(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827a7930
	ctx.lr = 0x8279BF1C;
	sub_827A7930(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r21,r10,-1
	ctx.r21.s64 = ctx.r10.s64 + -1;
	// stw r21,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r21.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279BF3C;
	sub_82796938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8279bf64
	if (cr6.eq) goto loc_8279BF64;
	// stw r17,204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 204, ctx.r17.u32);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r24,367(r1)
	PPC_STORE_U8(ctx.r1.u32 + 367, ctx.r24.u8);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// b 0x8279bf68
	goto loc_8279BF68;
loc_8279BF64:
	// lbz r24,367(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
loc_8279BF68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r21,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r21.u32);
	// stw r19,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r19.u32);
	// rlwinm r10,r23,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// lfs f31,2548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r26.u32);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// bne cr6,0x8279bfb0
	if (!cr6.eq) goto loc_8279BFB0;
	// stb r19,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r19.u8);
	// b 0x8279bfcc
	goto loc_8279BFCC;
loc_8279BFB0:
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bne cr6,0x8279bfc4
	if (!cr6.eq) goto loc_8279BFC4;
	// stb r19,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r19.u8);
	// fmr f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f30.f64;
	// b 0x8279bfcc
	goto loc_8279BFCC;
loc_8279BFC4:
	// stb r25,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r25.u8);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
loc_8279BFCC:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x8279bfe0
	if (!cr6.eq) goto loc_8279BFE0;
	// stb r19,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r19.u8);
	// b 0x8279bffc
	goto loc_8279BFFC;
loc_8279BFE0:
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bne cr6,0x8279bff4
	if (!cr6.eq) goto loc_8279BFF4;
	// stb r19,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r19.u8);
	// fmr f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f30.f64;
	// b 0x8279bffc
	goto loc_8279BFFC;
loc_8279BFF4:
	// stb r25,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r25.u8);
	// stb r29,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r29.u8);
loc_8279BFFC:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x8279c010
	if (!cr6.eq) goto loc_8279C010;
	// stb r19,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r19.u8);
	// b 0x8279c02c
	goto loc_8279C02C;
loc_8279C010:
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bne cr6,0x8279c024
	if (!cr6.eq) goto loc_8279C024;
	// stb r19,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r19.u8);
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
	// b 0x8279c02c
	goto loc_8279C02C;
loc_8279C024:
	// stb r25,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r25.u8);
	// stb r28,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r28.u8);
loc_8279C02C:
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x8279c03c
	if (!cr6.eq) goto loc_8279C03C;
	// stb r19,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r19.u8);
	// b 0x8279c058
	goto loc_8279C058;
loc_8279C03C:
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// bne cr6,0x8279c050
	if (!cr6.eq) goto loc_8279C050;
	// stb r19,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r19.u8);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8279c058
	goto loc_8279C058;
loc_8279C050:
	// stb r25,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
	// stb r27,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r27.u8);
loc_8279C058:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r11.u32);
	// bl 0x827942e0
	ctx.lr = 0x8279C068;
	sub_827942E0(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C074;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// stw r21,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r21.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r19.u32);
	// bl 0x827979c0
	ctx.lr = 0x8279C09C;
	sub_827979C0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x827942e0
	ctx.lr = 0x8279C0B0;
	sub_827942E0(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c0d0
	if (cr0.eq) goto loc_8279C0D0;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r11.u32);
loc_8279C0D0:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// li r23,4
	ctx.r23.s64 = 4;
	// b 0x8279c0e0
	goto loc_8279C0E0;
loc_8279C0DC:
	// lbz r24,367(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
loc_8279C0E0:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8279c100
	if (cr0.eq) goto loc_8279C100;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// and. r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne 0x8279c104
	if (!cr0.eq) goto loc_8279C104;
loc_8279C100:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8279C104:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279cabc
	if (cr0.eq) goto loc_8279CABC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279c120
	if (cr6.eq) goto loc_8279C120;
	// lhz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 4);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x8279c124
	goto loc_8279C124;
loc_8279C120:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279C124:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8279c1e8
	if (!cr6.gt) goto loc_8279C1E8;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x8279c144
	if (!cr6.eq) goto loc_8279C144;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r21,r10,-1
	ctx.r21.s64 = ctx.r10.s64 + -1;
	// stw r21,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r21.u32);
loc_8279C144:
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C150;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// stw r21,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r21.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r19.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// stb r25,153(r30)
	PPC_STORE_U8(ctx.r30.u32 + 153, ctx.r25.u8);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// bne cr6,0x8279c1b0
	if (!cr6.eq) goto loc_8279C1B0;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c1a4
	if (cr0.eq) goto loc_8279C1A4;
	// stw r17,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r17.u32);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r24,367(r1)
	PPC_STORE_U8(ctx.r1.u32 + 367, ctx.r24.u8);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_8279C1A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8279b190
	ctx.lr = 0x8279C1B0;
	sub_8279B190(ctx, base);
loc_8279C1B0:
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279C1D0;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279C1DC;
	sub_827942E0(ctx, base);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// li r23,4
	ctx.r23.s64 = 4;
	// b 0x8279c1ec
	goto loc_8279C1EC;
loc_8279C1E8:
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8279C1EC:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c204
	if (cr0.eq) goto loc_8279C204;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// b 0x8279c208
	goto loc_8279C208;
loc_8279C204:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279C208:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8279c2c8
	if (!cr6.gt) goto loc_8279C2C8;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x8279c228
	if (!cr6.eq) goto loc_8279C228;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r21,r10,-1
	ctx.r21.s64 = ctx.r10.s64 + -1;
	// stw r21,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r21.u32);
loc_8279C228:
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C234;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// stw r21,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r21.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r19.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// bne cr6,0x8279c28c
	if (!cr6.eq) goto loc_8279C28C;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c280
	if (cr0.eq) goto loc_8279C280;
	// stw r17,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r17.u32);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r24,367(r1)
	PPC_STORE_U8(ctx.r1.u32 + 367, ctx.r24.u8);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_8279C280:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8279b190
	ctx.lr = 0x8279C28C;
	sub_8279B190(ctx, base);
loc_8279C28C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,-9444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9444);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279C2B0;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r25,154(r30)
	PPC_STORE_U8(ctx.r30.u32 + 154, ctx.r25.u8);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279C2C0;
	sub_827942E0(ctx, base);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// li r23,4
	ctx.r23.s64 = 4;
loc_8279C2C8:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c2e0
	if (cr0.eq) goto loc_8279C2E0;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// b 0x8279c2e4
	goto loc_8279C2E4;
loc_8279C2E0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279C2E4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8279c3a0
	if (!cr6.gt) goto loc_8279C3A0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x8279c304
	if (!cr6.eq) goto loc_8279C304;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r21,r10,-1
	ctx.r21.s64 = ctx.r10.s64 + -1;
	// stw r21,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r21.u32);
loc_8279C304:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C310;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// stw r21,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r21.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r19.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// bne cr6,0x8279c368
	if (!cr6.eq) goto loc_8279C368;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c35c
	if (cr0.eq) goto loc_8279C35C;
	// stw r17,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r17.u32);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r24,367(r1)
	PPC_STORE_U8(ctx.r1.u32 + 367, ctx.r24.u8);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_8279C35C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8279b190
	ctx.lr = 0x8279C368;
	sub_8279B190(ctx, base);
loc_8279C368:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,10812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10812);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279C38C;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279C398;
	sub_827942E0(ctx, base);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// li r23,4
	ctx.r23.s64 = 4;
loc_8279C3A0:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c3b8
	if (cr0.eq) goto loc_8279C3B8;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// b 0x8279c3bc
	goto loc_8279C3BC;
loc_8279C3B8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279C3BC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8279c4e4
	if (!cr6.gt) goto loc_8279C4E4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r21,r10,-1
	ctx.r21.s64 = ctx.r10.s64 + -1;
	// stw r21,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r21.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C3E0;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// rlwinm r29,r23,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r21,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r21.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r19.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// bl 0x827979c0
	ctx.lr = 0x8279C420;
	sub_827979C0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r26.u32);
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// bne cr6,0x8279c47c
	if (!cr6.eq) goto loc_8279C47C;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c448
	if (cr0.eq) goto loc_8279C448;
	// stw r17,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r17.u32);
loc_8279C448:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c468
	if (cr6.eq) goto loc_8279C468;
	// stw r17,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r17.u32);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r24,367(r1)
	PPC_STORE_U8(ctx.r1.u32 + 367, ctx.r24.u8);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_8279C468:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8279b190
	ctx.lr = 0x8279C474;
	sub_8279B190(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
loc_8279C47C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279C488;
	sub_827942E0(ctx, base);
	// li r3,37
	ctx.r3.s64 = 37;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C494;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r21,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r21.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r19.u32);
	// stw r21,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r21.u32);
	// stw r19,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r19.u32);
	// stw r21,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r21.u32);
	// stw r19,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r19.u32);
	// bl 0x827979c0
	ctx.lr = 0x8279C4CC;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r25,155(r30)
	PPC_STORE_U8(ctx.r30.u32 + 155, ctx.r25.u8);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279C4DC;
	sub_827942E0(ctx, base);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// li r23,4
	ctx.r23.s64 = 4;
loc_8279C4E4:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c4fc
	if (cr0.eq) goto loc_8279C4FC;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r30,r11,11,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// b 0x8279c500
	goto loc_8279C500;
loc_8279C4FC:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8279C500:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8279c8ac
	if (!cr6.gt) goto loc_8279C8AC;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// ble cr6,0x8279c530
	if (!cr6.gt) goto loc_8279C530;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,674
	ctx.r7.s64 = 674;
	// addi r5,r11,3560
	ctx.r5.s64 = ctx.r11.s64 + 3560;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279C52C;
	sub_826CA560(ctx, base);
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
loc_8279C530:
	// bne cr6,0x8279c6ac
	if (!cr6.eq) goto loc_8279C6AC;
	// lwz r30,340(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8279c550
	if (!cr6.lt) goto loc_8279C550;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8279C550:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8279c560
	if (!cr0.eq) goto loc_8279C560;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_8279C560:
	// cmpwi cr6,r10,93
	cr6.compare<int32_t>(ctx.r10.s32, 93, ctx.xer);
	// beq cr6,0x8279c5d0
	if (cr6.eq) goto loc_8279C5D0;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// bge cr6,0x8279c578
	if (!cr6.lt) goto loc_8279C578;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8279C578:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8279c588
	if (!cr0.eq) goto loc_8279C588;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_8279C588:
	// cmpwi cr6,r10,94
	cr6.compare<int32_t>(ctx.r10.s32, 94, ctx.xer);
	// beq cr6,0x8279c5d0
	if (cr6.eq) goto loc_8279C5D0;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// bge cr6,0x8279c5a0
	if (!cr6.lt) goto loc_8279C5A0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8279C5A0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8279c5ac
	if (!cr0.eq) goto loc_8279C5AC;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8279C5AC:
	// cmpwi cr6,r11,80
	cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// beq cr6,0x8279c5d0
	if (cr6.eq) goto loc_8279C5D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,680
	ctx.r7.s64 = 680;
	// addi r5,r11,3384
	ctx.r5.s64 = ctx.r11.s64 + 3384;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279C5D0;
	sub_826CA560(ctx, base);
loc_8279C5D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r30,1(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279C5EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,512(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 512);
	// bl 0x82771c60
	ctx.lr = 0x8279C608;
	sub_82771C60(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279C634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,512(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 512);
	// bl 0x82771d88
	ctx.lr = 0x8279C650;
	sub_82771D88(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279C67C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,512(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 512);
	// bl 0x82771eb0
	ctx.lr = 0x8279C698;
	sub_82771EB0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8279c6dc
	goto loc_8279C6DC;
loc_8279C6AC:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// addi r9,r30,-3
	ctx.r9.s64 = ctx.r30.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
loc_8279C6DC:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8279c6f4
	if (!cr0.eq) goto loc_8279C6F4;
	// clrlwi. r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8279c6f4
	if (!cr0.eq) goto loc_8279C6F4;
	// clrlwi. r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8279c8ac
	if (cr0.eq) goto loc_8279C8AC;
loc_8279C6F4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279c710
	if (cr6.eq) goto loc_8279C710;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r22,12(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8279c754
	goto loc_8279C754;
loc_8279C710:
	// clrlwi. r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8279c72c
	if (cr0.eq) goto loc_8279C72C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r25,2
	ctx.r25.s64 = 2;
	// lwz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r22,16(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8279c754
	goto loc_8279C754;
loc_8279C72C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c748
	if (cr0.eq) goto loc_8279C748;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r25,3
	ctx.r25.s64 = 3;
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r22,20(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8279c754
	goto loc_8279C754;
loc_8279C748:
	// lbz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r22,96(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8279C754:
	// li r3,62
	ctx.r3.s64 = 62;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C760;
	sub_82796938(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r27,r23,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r21,r10,-1
	ctx.r21.s64 = ctx.r10.s64 + -1;
	// stw r21,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r21.u32);
	// stw r19,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r19.u32);
	// stw r21,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r21.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r26.u32);
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C7A0;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// stw r21,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r21.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r19.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C7CC;
	sub_82796938(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// stw r21,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r21.u32);
	// stw r19,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r19.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r26.u32);
	// stw r11,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r11.u32);
	// bne cr6,0x8279c83c
	if (!cr6.eq) goto loc_8279C83C;
	// lbz r11,367(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8279c80c
	if (cr0.eq) goto loc_8279C80C;
	// stw r17,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r17.u32);
	// stw r17,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r17.u32);
loc_8279C80C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c828
	if (cr6.eq) goto loc_8279C828;
	// stw r17,204(r28)
	PPC_STORE_U32(ctx.r28.u32 + 204, ctx.r17.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// stb r19,367(r1)
	PPC_STORE_U8(ctx.r1.u32 + 367, ctx.r19.u8);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_8279C828:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8279b190
	ctx.lr = 0x8279C834;
	sub_8279B190(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
loc_8279C83C:
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r21,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r21.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// stw r19,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r19.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r11.u32);
	// stw r24,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r24.u32);
	// stw r22,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r22.u32);
	// bl 0x827942e0
	ctx.lr = 0x8279C880;
	sub_827942E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279C88C;
	sub_827942E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279C898;
	sub_827942E0(ctx, base);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r24,367(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// li r23,4
	ctx.r23.s64 = 4;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8279C8AC:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c8e4
	if (cr0.eq) goto loc_8279C8E4;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8279c8dc
	if (!cr0.eq) goto loc_8279C8DC;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8279c8dc
	if (!cr0.eq) goto loc_8279C8DC;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8279c8dc
	if (!cr0.eq) goto loc_8279C8DC;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c8e4
	if (cr0.eq) goto loc_8279C8E4;
loc_8279C8DC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8279c8e8
	goto loc_8279C8E8;
loc_8279C8E4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8279C8E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279cabc
	if (cr0.eq) goto loc_8279CABC;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x827a79c8
	ctx.lr = 0x8279C8F8;
	sub_827A79C8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8279cabc
	if (cr0.eq) goto loc_8279CABC;
	// cmplwi cr6,r28,34952
	cr6.compare<uint32_t>(ctx.r28.u32, 34952, ctx.xer);
	// beq cr6,0x8279cabc
	if (cr6.eq) goto loc_8279CABC;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x8279c920
	if (!cr6.eq) goto loc_8279C920;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r21,r10,-1
	ctx.r21.s64 = ctx.r10.s64 + -1;
	// stw r21,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r21.u32);
loc_8279C920:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C92C;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r29,r23,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// stw r21,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r21.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r19.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// bne cr6,0x8279c97c
	if (!cr6.eq) goto loc_8279C97C;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c970
	if (cr0.eq) goto loc_8279C970;
	// stw r17,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r17.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_8279C970:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8279b190
	ctx.lr = 0x8279C97C;
	sub_8279B190(ctx, base);
loc_8279C97C:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279c994
	if (cr0.eq) goto loc_8279C994;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// b 0x8279c998
	goto loc_8279C998;
loc_8279C994:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8279C998:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279c9a4
	if (cr6.eq) goto loc_8279C9A4;
	// stb r25,159(r30)
	PPC_STORE_U8(ctx.r30.u32 + 159, ctx.r25.u8);
loc_8279C9A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279C9B0;
	sub_827942E0(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r30,132(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279C9C0;
	sub_82796938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// stw r21,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r21.u32);
	// stw r19,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r19.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r26.u32);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// bne cr6,0x8279ca04
	if (!cr6.eq) goto loc_8279CA04;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279ca00
	if (cr0.eq) goto loc_8279CA00;
	// stw r17,204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 204, ctx.r17.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_8279CA00:
	// stw r30,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r30.u32);
loc_8279CA04:
	// stb r25,153(r4)
	PPC_STORE_U8(ctx.r4.u32 + 153, ctx.r25.u8);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279ca20
	if (cr0.eq) goto loc_8279CA20;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// b 0x8279ca24
	goto loc_8279CA24;
loc_8279CA20:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8279CA24:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279ca48
	if (cr6.eq) goto loc_8279CA48;
	// stb r25,159(r4)
	PPC_STORE_U8(ctx.r4.u32 + 159, ctx.r25.u8);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279ca48
	if (cr0.eq) goto loc_8279CA48;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r11.u32);
loc_8279CA48:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// not r10,r28
	ctx.r10.u64 = ~ctx.r28.u64;
	// not r9,r28
	ctx.r9.u64 = ~ctx.r28.u64;
	// not r8,r28
	ctx.r8.u64 = ~ctx.r28.u64;
	// not r7,r28
	ctx.r7.u64 = ~ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rlwinm r11,r10,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// rlwinm r11,r9,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// rlwinm r11,r8,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1;
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// rlwinm r11,r7,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1;
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r11.u32);
	// bl 0x827942e0
	ctx.lr = 0x8279CA94;
	sub_827942E0(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279cab4
	if (cr0.eq) goto loc_8279CAB4;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// ori r12,r12,30583
	ctx.r12.u64 = ctx.r12.u64 | 30583;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r11,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r11.u32);
loc_8279CAB4:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// li r23,4
	ctx.r23.s64 = 4;
loc_8279CABC:
	// sth r26,2(r18)
	PPC_STORE_U16(ctx.r18.u32 + 2, ctx.r26.u16);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwimi r11,r23,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828d4280
	ctx.lr = 0x8279CAD8;
	__restfpr_27(ctx, base);
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279CADC"))) PPC_WEAK_FUNC(sub_8279CADC);
PPC_FUNC_IMPL(__imp__sub_8279CADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279CAE0"))) PPC_WEAK_FUNC(sub_8279CAE0);
PPC_FUNC_IMPL(__imp__sub_8279CAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27ec
	ctx.lr = 0x8279CAE8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// extsh r18,r11
	ctx.r18.s64 = ctx.r11.s16;
	// rlwinm r19,r11,16,26,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F;
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8279cb28
	if (cr0.eq) goto loc_8279CB28;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r28,r11,23,28,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xF;
	// b 0x8279cb2c
	goto loc_8279CB2C;
loc_8279CB28:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_8279CB2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r20,1
	ctx.r20.s64 = 1;
	// addi r23,r11,-6172
	ctx.r23.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r22,r11,3080
	ctx.r22.s64 = ctx.r11.s64 + 3080;
	// ble cr6,0x8279cbe4
	if (!cr6.gt) goto loc_8279CBE4;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// ble cr6,0x8279cb6c
	if (!cr6.gt) goto loc_8279CB6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,871
	ctx.r7.s64 = 871;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279CB6C;
	sub_826CA560(ctx, base);
loc_8279CB6C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// stw r30,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r30.u32);
	// sth r30,2(r27)
	PPC_STORE_U16(ctx.r27.u32 + 2, ctx.r30.u16);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r20,18,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 18) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279CB98;
	sub_82796938(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-6576
	ctx.r11.s64 = ctx.r11.s64 + -6576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r21,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r21,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r21.u32);
	// lfs f4,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279CBD8;
	sub_827979C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279CBE4;
	sub_827942E0(ctx, base);
loc_8279CBE4:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_8279CBEC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827a78d0
	ctx.lr = 0x8279CBF8;
	sub_827A78D0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// slw r11,r11,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// or r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 | ctx.r26.u64;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8279cbec
	if (cr6.lt) goto loc_8279CBEC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r25,r11,4444
	ctx.r25.s64 = ctx.r11.s64 + 4444;
	// beq cr6,0x8279ccf4
	if (cr6.eq) goto loc_8279CCF4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8279cc70
	if (!cr6.eq) goto loc_8279CC70;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8279cc50
	if (cr6.eq) goto loc_8279CC50;
	// li r7,895
	ctx.r7.s64 = 895;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279CC50;
	sub_826CA560(ctx, base);
loc_8279CC50:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// stw r30,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r30.u32);
	// sth r30,2(r27)
	PPC_STORE_U16(ctx.r27.u32 + 2, ctx.r30.u16);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r20,18,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 18) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8279CC70:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279CC7C;
	sub_82796938(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f4,2548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stw r21,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279CCA8;
	sub_827979C0(ctx, base);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_8279CCAC:
	// sraw r11,r26,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r26.s32 < 0) & (((ctx.r26.s32 >> temp.u32) << temp.u32) != ctx.r26.s32);
	ctx.r11.s64 = ctx.r26.s32 >> temp.u32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bne 0x8279ccd4
	if (!cr0.eq) goto loc_8279CCD4;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8279CCD4:
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279CCDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8279ccac
	if (cr6.lt) goto loc_8279CCAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279CCF4;
	sub_827942E0(ctx, base);
loc_8279CCF4:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_8279CCFC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827a78d0
	ctx.lr = 0x8279CD08;
	sub_827A78D0(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// slw r11,r11,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// or r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 | ctx.r26.u64;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8279ccfc
	if (cr6.lt) goto loc_8279CCFC;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8279cdfc
	if (cr6.eq) goto loc_8279CDFC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8279cd78
	if (!cr6.eq) goto loc_8279CD78;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8279cd58
	if (cr6.eq) goto loc_8279CD58;
	// li r7,922
	ctx.r7.s64 = 922;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279CD58;
	sub_826CA560(ctx, base);
loc_8279CD58:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// stw r30,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r30.u32);
	// sth r30,2(r27)
	PPC_STORE_U16(ctx.r27.u32 + 2, ctx.r30.u16);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r20,18,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 18) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8279CD78:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279CD84;
	sub_82796938(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f4,10548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stw r21,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279CDB0;
	sub_827979C0(ctx, base);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_8279CDB4:
	// sraw r11,r26,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r26.s32 < 0) & (((ctx.r26.s32 >> temp.u32) << temp.u32) != ctx.r26.s32);
	ctx.r11.s64 = ctx.r26.s32 >> temp.u32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bne 0x8279cddc
	if (!cr0.eq) goto loc_8279CDDC;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8279CDDC:
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279CDE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8279cdb4
	if (cr6.lt) goto loc_8279CDB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x827942e0
	ctx.lr = 0x8279CDFC;
	sub_827942E0(ctx, base);
loc_8279CDFC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827a79e8
	ctx.lr = 0x8279CE04;
	sub_827A79E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279ce64
	if (cr0.eq) goto loc_8279CE64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279ce1c
	if (cr6.eq) goto loc_8279CE1C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8279ce38
	if (!cr6.eq) goto loc_8279CE38;
loc_8279CE1C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,944
	ctx.r7.s64 = 944;
	// addi r5,r11,4412
	ctx.r5.s64 = ctx.r11.s64 + 4412;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279CE38;
	sub_826CA560(ctx, base);
loc_8279CE38:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279CE44;
	sub_82796938(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r21,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r21,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r21.u32);
	// bl 0x827942e0
	ctx.lr = 0x8279CE64;
	sub_827942E0(ctx, base);
loc_8279CE64:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279d06c
	if (cr6.eq) goto loc_8279D06C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279cfb0
	if (cr0.eq) goto loc_8279CFB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827768b8
	ctx.lr = 0x8279CE80;
	sub_827768B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279cea4
	if (!cr0.eq) goto loc_8279CEA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,956
	ctx.r7.s64 = 956;
	// addi r5,r11,4392
	ctx.r5.s64 = ctx.r11.s64 + 4392;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279CEA4;
	sub_826CA560(ctx, base);
loc_8279CEA4:
	// cmpwi cr6,r19,15
	cr6.compare<int32_t>(ctx.r19.s32, 15, ctx.xer);
	// beq cr6,0x8279ced8
	if (cr6.eq) goto loc_8279CED8;
	// cmpwi cr6,r19,17
	cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x8279ced8
	if (cr6.eq) goto loc_8279CED8;
	// cmpwi cr6,r19,11
	cr6.compare<int32_t>(ctx.r19.s32, 11, ctx.xer);
	// beq cr6,0x8279ced8
	if (cr6.eq) goto loc_8279CED8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,959
	ctx.r7.s64 = 959;
	// addi r5,r11,4280
	ctx.r5.s64 = ctx.r11.s64 + 4280;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279CED8;
	sub_826CA560(ctx, base);
loc_8279CED8:
	// lbz r11,2116(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2116);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r19,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x8279cf00
	if (!cr0.eq) goto loc_8279CF00;
	// stb r20,2116(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2116, ctx.r20.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,2120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2120, ctx.r11.u32);
	// b 0x8279cf2c
	goto loc_8279CF2C;
loc_8279CF00:
	// lwz r9,2120(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2120);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8279cf2c
	if (cr6.eq) goto loc_8279CF2C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,964
	ctx.r7.s64 = 964;
	// addi r5,r11,4228
	ctx.r5.s64 = ctx.r11.s64 + 4228;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279CF2C;
	sub_826CA560(ctx, base);
loc_8279CF2C:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r18,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r18.u32);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// li r19,32
	ctx.r19.s64 = 32;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x82776bf8
	ctx.lr = 0x8279CF4C;
	sub_82776BF8(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279cf78
	if (cr0.eq) goto loc_8279CF78;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,971
	ctx.r7.s64 = 971;
	// addi r5,r11,4208
	ctx.r5.s64 = ctx.r11.s64 + 4208;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279CF78;
	sub_826CA560(ctx, base);
loc_8279CF78:
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279cf98
	if (!cr6.lt) goto loc_8279CF98;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8279cf9c
	goto loc_8279CF9C;
loc_8279CF98:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8279CF9C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// lwz r18,136(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_8279CFB0:
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// rlwinm r11,r19,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r18,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r18.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279cfe0
	if (cr0.eq) goto loc_8279CFE0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// b 0x8279cfe4
	goto loc_8279CFE4;
loc_8279CFE0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8279CFE4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279cff0
	if (cr6.eq) goto loc_8279CFF0;
	// stb r20,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r20.u8);
loc_8279CFF0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279d008
	if (cr0.eq) goto loc_8279D008;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_8279D008:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8279D00C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827a78d0
	ctx.lr = 0x8279D018;
	sub_827A78D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq 0x8279d03c
	if (cr0.eq) goto loc_8279D03C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8279D03C:
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279D044;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8279d00c
	if (cr6.lt) goto loc_8279D00C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279d06c
	if (cr0.eq) goto loc_8279D06C;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r11,85
	ctx.r11.s64 = 85;
	// rlwimi r10,r11,0,24,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_8279D06C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828d283c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279D074"))) PPC_WEAK_FUNC(sub_8279D074);
PPC_FUNC_IMPL(__imp__sub_8279D074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279D078"))) PPC_WEAK_FUNC(sub_8279D078);
PPC_FUNC_IMPL(__imp__sub_8279D078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e8
	ctx.lr = 0x8279D080;
	__savegprlr_16(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// rlwinm r10,r11,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, ctx.xer);
	// bne cr6,0x8279d0e4
	if (!cr6.eq) goto loc_8279D0E4;
	// lwz r11,2104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2104);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8279d0cc
	if (cr6.lt) goto loc_8279D0CC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8279D0CC:
	// stw r11,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r11.u32);
	// lwz r11,2108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2108);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x8279d0e0
	if (cr6.gt) goto loc_8279D0E0;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
loc_8279D0E0:
	// stw r11,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r11.u32);
loc_8279D0E4:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279D0EC;
	sub_827864C0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// clrlwi. r19,r30,24
	ctx.r19.u64 = ctx.r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x8279d108
	if (cr0.eq) goto loc_8279D108;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x8279d120
	goto loc_8279D120;
loc_8279D108:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r11,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8279D120:
	// bl 0x827864c0
	ctx.lr = 0x8279D124;
	sub_827864C0(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r7,r11,-21808
	ctx.r7.s64 = ctx.r11.s64 + -21808;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r6,360(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 360);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82773b60
	ctx.lr = 0x8279D148;
	sub_82773B60(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r23,r11,-6172
	ctx.r23.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r21,r11,4512
	ctx.r21.s64 = ctx.r11.s64 + 4512;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r22,r11,3080
	ctx.r22.s64 = ctx.r11.s64 + 3080;
	// beq cr6,0x8279d180
	if (cr6.eq) goto loc_8279D180;
	// li r7,1077
	ctx.r7.s64 = 1077;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279D180;
	sub_826CA560(ctx, base);
loc_8279D180:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x8279d2f0
	if (cr6.eq) goto loc_8279D2F0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279D1A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82772fe8
	ctx.lr = 0x8279D1C0;
	sub_82772FE8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8279d2f0
	if (!cr6.eq) goto loc_8279D2F0;
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x827749c8
	ctx.lr = 0x8279D1E4;
	sub_827749C8(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279D1F0;
	sub_82796938(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// stw r29,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r29.u32);
	// stw r24,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r24.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279D218;
	sub_82796DB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,10548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279D244;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279D250;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82799958
	ctx.lr = 0x8279D25C;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279D264;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279d288
	if (!cr0.eq) goto loc_8279D288;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// addi r5,r11,-31276
	ctx.r5.s64 = ctx.r11.s64 + -31276;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279D288;
	sub_826CA560(ctx, base);
loc_8279D288:
	// li r3,21
	ctx.r3.s64 = 21;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279D294;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r24,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r24.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// stw r24,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r24.u32);
	// bl 0x827771a8
	ctx.lr = 0x8279D2B4;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82799958
	ctx.lr = 0x8279D2C0;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279D2C8;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279d2ec
	if (!cr0.eq) goto loc_8279D2EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,1113
	ctx.r7.s64 = 1113;
	// addi r5,r11,4492
	ctx.r5.s64 = ctx.r11.s64 + 4492;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279D2EC;
	sub_826CA560(ctx, base);
loc_8279D2EC:
	// lwz r25,28(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
loc_8279D2F0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8279d454
	if (!cr6.gt) goto loc_8279D454;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-6488
	ctx.r27.s64 = ctx.r11.s64 + -6488;
loc_8279D308:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82798ec8
	ctx.lr = 0x8279D31C;
	sub_82798EC8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279D32C;
	sub_82796DB8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279D33C;
	sub_82796DB8(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x8279d368
	if (!cr6.eq) goto loc_8279D368;
	// lwz r11,-36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -36);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8279b260
	ctx.lr = 0x8279D364;
	sub_8279B260(ctx, base);
	// b 0x8279d370
	goto loc_8279D370;
loc_8279D368:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
loc_8279D370:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,-21808
	ctx.r8.s64 = ctx.r11.s64 + -21808;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,512(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 512);
	// lwz r7,360(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 360);
	// bl 0x82773790
	ctx.lr = 0x8279D394;
	sub_82773790(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8279d3b4
	if (cr6.eq) goto loc_8279D3B4;
	// li r7,1146
	ctx.r7.s64 = 1146;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279D3B4;
	sub_826CA560(ctx, base);
loc_8279D3B4:
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8279D3BC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8279ac68
	ctx.lr = 0x8279D3C8;
	sub_8279AC68(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r3,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8279d3bc
	if (cr6.lt) goto loc_8279D3BC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8279D3E0:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x8279d418
	if (cr6.gt) goto loc_8279D418;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// ble cr6,0x8279d414
	if (!cr6.gt) goto loc_8279D414;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_8279D414:
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_8279D418:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8279d3e0
	if (cr6.lt) goto loc_8279D3E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x8279D438;
	sub_827771A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82799958
	ctx.lr = 0x8279D444;
	sub_82799958(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8279d308
	if (cr6.lt) goto loc_8279D308;
loc_8279D454:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,29(r25)
	PPC_STORE_U8(ctx.r25.u32 + 29, ctx.r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828d2838
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279D464"))) PPC_WEAK_FUNC(sub_8279D464);
PPC_FUNC_IMPL(__imp__sub_8279D464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279D468"))) PPC_WEAK_FUNC(sub_8279D468);
PPC_FUNC_IMPL(__imp__sub_8279D468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x8279D470;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279D49C;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x8279D4C4;
	sub_82794520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279D4E0"))) PPC_WEAK_FUNC(sub_8279D4E0);
PPC_FUNC_IMPL(__imp__sub_8279D4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2800
	ctx.lr = 0x8279D4E8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r30,r11,3080
	ctx.r30.s64 = ctx.r11.s64 + 3080;
	// bne cr6,0x8279d524
	if (!cr6.eq) goto loc_8279D524;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8279d540
	if (!cr6.eq) goto loc_8279D540;
loc_8279D524:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,4355
	ctx.r7.s64 = 4355;
	// addi r5,r11,4696
	ctx.r5.s64 = ctx.r11.s64 + 4696;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279D540;
	sub_826CA560(ctx, base);
loc_8279D540:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// stb r24,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r24.u8);
	// stb r24,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r24.u8);
	// stb r24,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r24.u8);
	// beq cr6,0x8279d730
	if (cr6.eq) goto loc_8279D730;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279d694
	if (cr0.eq) goto loc_8279D694;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827768b8
	ctx.lr = 0x8279D574;
	sub_827768B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279d598
	if (!cr0.eq) goto loc_8279D598;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,4366
	ctx.r7.s64 = 4366;
	// addi r5,r11,4392
	ctx.r5.s64 = ctx.r11.s64 + 4392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279D598;
	sub_826CA560(ctx, base);
loc_8279D598:
	// lwz r29,80(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// cmpwi cr6,r29,19
	cr6.compare<int32_t>(ctx.r29.s32, 19, ctx.xer);
	// beq cr6,0x8279d5d0
	if (cr6.eq) goto loc_8279D5D0;
	// cmpwi cr6,r29,20
	cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// beq cr6,0x8279d5d0
	if (cr6.eq) goto loc_8279D5D0;
	// cmpwi cr6,r29,33
	cr6.compare<int32_t>(ctx.r29.s32, 33, ctx.xer);
	// beq cr6,0x8279d5d0
	if (cr6.eq) goto loc_8279D5D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,4370
	ctx.r7.s64 = 4370;
	// addi r5,r11,4576
	ctx.r5.s64 = ctx.r11.s64 + 4576;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279D5D0;
	sub_826CA560(ctx, base);
loc_8279D5D0:
	// lbz r11,2116(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8279d5e8
	if (!cr0.eq) goto loc_8279D5E8;
	// stb r22,2116(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2116, ctx.r22.u8);
	// stw r29,2120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2120, ctx.r29.u32);
	// b 0x8279d610
	goto loc_8279D610;
loc_8279D5E8:
	// lwz r11,2120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2120);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8279d610
	if (cr6.eq) goto loc_8279D610;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,4375
	ctx.r7.s64 = 4375;
	// addi r5,r11,4536
	ctx.r5.s64 = ctx.r11.s64 + 4536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279D610;
	sub_826CA560(ctx, base);
loc_8279D610:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// stw r11,200(r25)
	PPC_STORE_U32(ctx.r25.u32 + 200, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279d644
	if (cr0.eq) goto loc_8279D644;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,4380
	ctx.r7.s64 = 4380;
	// addi r5,r11,4208
	ctx.r5.s64 = ctx.r11.s64 + 4208;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279D644;
	sub_826CA560(ctx, base);
loc_8279D644:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279d664
	if (!cr6.lt) goto loc_8279D664;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8279d668
	goto loc_8279D668;
loc_8279D664:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8279D668:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,42
	ctx.r10.s64 = 42;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// stw r10,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r10.u32);
	// stw r11,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,228(r25)
	PPC_STORE_U32(ctx.r25.u32 + 228, ctx.r11.u32);
	// bl 0x82776bf8
	ctx.lr = 0x8279D694;
	sub_82776BF8(ctx, base);
loc_8279D694:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279d6ac
	if (cr0.eq) goto loc_8279D6AC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// b 0x8279d6b0
	goto loc_8279D6B0;
loc_8279D6AC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8279D6B0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279d6bc
	if (cr6.eq) goto loc_8279D6BC;
	// stb r22,164(r25)
	PPC_STORE_U8(ctx.r25.u32 + 164, ctx.r22.u8);
loc_8279D6BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827a78d0
	ctx.lr = 0x8279D6C8;
	sub_827A78D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,2760
	ctx.r31.s64 = ctx.r10.s64 + 2760;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x827a78d0
	ctx.lr = 0x8279D6EC;
	sub_827A78D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x827a78d0
	ctx.lr = 0x8279D708;
	sub_827A78D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// bl 0x827a78d0
	ctx.lr = 0x8279D724;
	sub_827A78D0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
loc_8279D730:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// beq 0x8279d78c
	if (cr0.eq) goto loc_8279D78C;
loc_8279D73C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82789388
	ctx.lr = 0x8279D748;
	sub_82789388(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8279d760
	if (!cr6.eq) goto loc_8279D760;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_8279D760:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279D77C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8279d73c
	if (cr6.lt) goto loc_8279D73C;
	// b 0x8279d7d4
	goto loc_8279D7D4;
loc_8279D78C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82789388
	ctx.lr = 0x8279D798;
	sub_82789388(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8279d7ac
	if (!cr0.eq) goto loc_8279D7AC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
loc_8279D7AC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279D7C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8279d78c
	if (cr6.lt) goto loc_8279D78C;
loc_8279D7D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2850
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279D7DC"))) PPC_WEAK_FUNC(sub_8279D7DC);
PPC_FUNC_IMPL(__imp__sub_8279D7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279D7E0"))) PPC_WEAK_FUNC(sub_8279D7E0);
PPC_FUNC_IMPL(__imp__sub_8279D7E0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x8279D7E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// addi r8,r11,-6472
	ctx.r8.s64 = ctx.r11.s64 + -6472;
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lbz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// bne cr6,0x8279d8a0
	if (!cr6.eq) goto loc_8279D8A0;
	// rlwinm. r8,r11,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8279d8a0
	if (cr0.eq) goto loc_8279D8A0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// lwz r31,92(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// rlwinm r9,r9,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mulli r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 * 6;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r9,295(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 295);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r11,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
	// stw r10,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r10.u32);
	// bl 0x8279d4e0
	ctx.lr = 0x8279D89C;
	sub_8279D4E0(ctx, base);
	// b 0x8279da88
	goto loc_8279DA88;
loc_8279D8A0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm. r11,r3,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r8,r11,3,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r4,r11,3,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// beq 0x8279d904
	if (cr0.eq) goto loc_8279D904;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// mulli r11,r8,6
	ctx.r11.s64 = ctx.r8.s64 * 6;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r7,0,16,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r10.u64 & 0x3F0000);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r11,r10,0,9,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r11.u64 & 0x800000);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8279d918
	goto loc_8279D918;
loc_8279D904:
	// mulli r11,r8,6
	ctx.r11.s64 = ctx.r8.s64 * 6;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8279D918:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r31,r11,16,26,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F;
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// rlwinm. r7,r11,9,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8279d94c
	if (cr0.eq) goto loc_8279D94C;
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r23,r11,r8
	ctx.r23.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8279D94C:
	// rlwinm. r11,r3,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279da40
	if (!cr0.eq) goto loc_8279DA40;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x8279da40
	if (!cr6.eq) goto loc_8279DA40;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
	// stw r28,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r28.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279D978;
	sub_82796938(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq 0x8279d9b0
	if (cr0.eq) goto loc_8279D9B0;
	// stw r23,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r23.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8279D9B0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279b260
	ctx.lr = 0x8279D9C8;
	sub_8279B260(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279D9D4;
	sub_827771A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82799958
	ctx.lr = 0x8279D9E0;
	sub_82799958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279D9E8;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279da14
	if (!cr0.eq) goto loc_8279DA14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,1261
	ctx.r7.s64 = 1261;
	// addi r6,r11,3080
	ctx.r6.s64 = ctx.r11.s64 + 3080;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-31312
	ctx.r5.s64 = ctx.r11.s64 + -31312;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8279DA14;
	sub_826CA560(ctx, base);
loc_8279DA14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,4
	ctx.r31.s64 = 4;
	// rlwinm r11,r11,0,10,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r10,18,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8279da54
	goto loc_8279DA54;
loc_8279DA40:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279b260
	ctx.lr = 0x8279DA54;
	sub_8279B260(ctx, base);
loc_8279DA54:
	// addi r11,r24,50
	ctx.r11.s64 = ctx.r24.s64 + 50;
	// addi r9,r24,14
	ctx.r9.s64 = ctx.r24.s64 + 14;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r24,20
	ctx.r8.s64 = ctx.r24.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r23.u32);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r26,r9,r25
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, ctx.r26.u32);
	// stwx r11,r8,r25
	PPC_STORE_U32(ctx.r8.u32 + ctx.r25.u32, ctx.r11.u32);
loc_8279DA88:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279DA90"))) PPC_WEAK_FUNC(sub_8279DA90);
PPC_FUNC_IMPL(__imp__sub_8279DA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x8279DA98;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828d4230
	ctx.lr = 0x8279DAA0;
	__savefpr_26(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r18,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r18.u32);
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x827775a8
	ctx.lr = 0x8279DAC4;
	sub_827775A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// bl 0x82759ff0
	ctx.lr = 0x8279DADC;
	sub_82759FF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// stw r15,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r15.u32);
	// bl 0x82759ff0
	ctx.lr = 0x8279DAF4;
	sub_82759FF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// bl 0x82759ff0
	ctx.lr = 0x8279DB0C;
	sub_82759FF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,288
	ctx.r4.s64 = 288;
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82759ff0
	ctx.lr = 0x8279DB20;
	sub_82759FF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// stw r25,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r25.u32);
	// bl 0x82759ff0
	ctx.lr = 0x8279DB38;
	sub_82759FF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,288
	ctx.r4.s64 = 288;
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82759ff0
	ctx.lr = 0x8279DB4C;
	sub_82759FF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279DB64;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8279db8c
	if (cr0.eq) goto loc_8279DB8C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x8279DB84;
	sub_82776900(ctx, base);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// b 0x8279db90
	goto loc_8279DB90;
loc_8279DB8C:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_8279DB90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279DBAC;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x8279dbd0
	if (cr0.eq) goto loc_8279DBD0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x8279DBC8;
	sub_82776900(ctx, base);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x8279dbd4
	goto loc_8279DBD4;
loc_8279DBD0:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8279DBD4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// lwz r29,428(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279DBF0;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x8279dc10
	if (cr0.eq) goto loc_8279DC10;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82799b78
	ctx.lr = 0x8279DC08;
	sub_82799B78(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// b 0x8279dc14
	goto loc_8279DC14;
loc_8279DC10:
	// mr r14,r27
	ctx.r14.u64 = ctx.r27.u64;
loc_8279DC14:
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82776858
	ctx.lr = 0x8279DC24;
	sub_82776858(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x8279DC30;
	sub_8279A318(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r14.u32);
	// bl 0x82794280
	ctx.lr = 0x8279DC3C;
	sub_82794280(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82794280
	ctx.lr = 0x8279DC44;
	sub_82794280(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stb r27,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r27.u8);
	// stb r27,2100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2100, ctx.r27.u8);
	// stb r27,2116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2116, ctx.r27.u8);
	// bl 0x8277dfe0
	ctx.lr = 0x8279DC58;
	sub_8277DFE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-6172
	ctx.r11.s64 = ctx.r11.s64 + -6172;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,3080
	ctx.r11.s64 = ctx.r11.s64 + 3080;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq 0x827a3c60
	if (cr0.eq) goto loc_827A3C60;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r11,r11,-5204
	ctx.r11.s64 = ctx.r11.s64 + -5204;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r20,r11,-1120
	ctx.r20.s64 = ctx.r11.s64 + -1120;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-26016
	ctx.r27.s64 = ctx.r11.s64 + -26016;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r20,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r20.u32);
	// addi r11,r11,5600
	ctx.r11.s64 = ctx.r11.s64 + 5600;
	// stw r27,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r27.u32);
	// stw r11,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5580
	ctx.r11.s64 = ctx.r11.s64 + 5580;
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5544
	ctx.r11.s64 = ctx.r11.s64 + 5544;
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5524
	ctx.r11.s64 = ctx.r11.s64 + 5524;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5504
	ctx.r11.s64 = ctx.r11.s64 + 5504;
	// stw r11,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5488
	ctx.r11.s64 = ctx.r11.s64 + 5488;
	// stw r11,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5472
	ctx.r11.s64 = ctx.r11.s64 + 5472;
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5444
	ctx.r11.s64 = ctx.r11.s64 + 5444;
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,11480
	ctx.r11.s64 = ctx.r11.s64 + 11480;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5424
	ctx.r11.s64 = ctx.r11.s64 + 5424;
	// stw r11,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5392
	ctx.r11.s64 = ctx.r11.s64 + 5392;
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5376
	ctx.r11.s64 = ctx.r11.s64 + 5376;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31336
	ctx.r11.s64 = ctx.r11.s64 + -31336;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5352
	ctx.r11.s64 = ctx.r11.s64 + 5352;
	// stw r11,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5336
	ctx.r11.s64 = ctx.r11.s64 + 5336;
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-30804
	ctx.r11.s64 = ctx.r11.s64 + -30804;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31044
	ctx.r11.s64 = ctx.r11.s64 + -31044;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31060
	ctx.r11.s64 = ctx.r11.s64 + -31060;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31260
	ctx.r11.s64 = ctx.r11.s64 + -31260;
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5312
	ctx.r11.s64 = ctx.r11.s64 + 5312;
	// stw r11,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5276
	ctx.r11.s64 = ctx.r11.s64 + 5276;
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-30920
	ctx.r11.s64 = ctx.r11.s64 + -30920;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f26,25044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25044);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,2548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2548);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,5236
	ctx.r11.s64 = ctx.r11.s64 + 5236;
	// lfs f29,5620(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5620);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,5624(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5624);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,10548(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10548);
	ctx.f31.f64 = double(temp.f32);
	// lfs f27,-9444(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -9444);
	ctx.f27.f64 = double(temp.f32);
	// stw r11,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5212
	ctx.r11.s64 = ctx.r11.s64 + 5212;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5196
	ctx.r11.s64 = ctx.r11.s64 + 5196;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5180
	ctx.r11.s64 = ctx.r11.s64 + 5180;
	// stw r11,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5156
	ctx.r11.s64 = ctx.r11.s64 + 5156;
	// stw r11,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-11728
	ctx.r11.s64 = ctx.r11.s64 + -11728;
	// stw r11,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r11.u32);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r24,r11,3888
	ctx.r24.s64 = ctx.r11.s64 + 3888;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5148
	ctx.r11.s64 = ctx.r11.s64 + 5148;
	// stw r24,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r24.u32);
	// stw r11,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5128
	ctx.r11.s64 = ctx.r11.s64 + 5128;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5068
	ctx.r11.s64 = ctx.r11.s64 + 5068;
	// stw r11,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,5036
	ctx.r11.s64 = ctx.r11.s64 + 5036;
	// stw r11,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,4996
	ctx.r11.s64 = ctx.r11.s64 + 4996;
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,4940
	ctx.r11.s64 = ctx.r11.s64 + 4940;
	// stw r11,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,4908
	ctx.r11.s64 = ctx.r11.s64 + 4908;
	// stw r11,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,4880
	ctx.r11.s64 = ctx.r11.s64 + 4880;
	// stw r11,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,4852
	ctx.r11.s64 = ctx.r11.s64 + 4852;
	// stw r11,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// stw r11,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,4752
	ctx.r11.s64 = ctx.r11.s64 + 4752;
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r11,r11,21376
	ctx.r11.s64 = ctx.r11.s64 + 21376;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// b 0x8279dec8
	goto loc_8279DEC8;
loc_8279DEBC:
	// lwz r20,440(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r27,456(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r24,524(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
loc_8279DEC8:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r21,208(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r22,216(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x8279df00
	if (!cr6.lt) goto loc_8279DF00;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8279DF00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// bne 0x8279df10
	if (!cr0.eq) goto loc_8279DF10;
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
loc_8279DF10:
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// stb r29,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, ctx.r29.u8);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r17,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r17.u32);
	// bl 0x8279af40
	ctx.lr = 0x8279DF24;
	sub_8279AF40(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x827a2cf0
	if (cr6.lt) goto loc_827A2CF0;
	// beq cr6,0x827a2d14
	if (cr6.eq) goto loc_827A2D14;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x827a2ce8
	if (cr6.lt) goto loc_827A2CE8;
	// beq cr6,0x827a2ce0
	if (cr6.eq) goto loc_827A2CE0;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x827a2964
	if (cr6.lt) goto loc_827A2964;
	// beq cr6,0x8279df68
	if (cr6.eq) goto loc_8279DF68;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// blt cr6,0x8279df58
	if (cr6.lt) goto loc_8279DF58;
	// li r7,4278
	ctx.r7.s64 = 4278;
	// b 0x827a379c
	goto loc_827A379C;
loc_8279DF58:
	// lhz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r16.u32 + 0);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// addi r17,r11,116
	ctx.r17.s64 = ctx.r11.s64 + 116;
	// stw r17,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r17.u32);
loc_8279DF68:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// stw r29,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8279df94
	if (cr0.eq) goto loc_8279DF94;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// stw r10,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r10.u32);
loc_8279DF94:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279dfb0
	if (cr0.eq) goto loc_8279DFB0;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// stw r10,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r10.u32);
loc_8279DFB0:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8279ad70
	ctx.lr = 0x8279DFB8;
	sub_8279AD70(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stw r19,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r19.u32);
	// ble 0x8279e120
	if (!cr0.gt) goto loc_8279E120;
	// mulli r11,r17,36
	ctx.r11.s64 = ctx.r17.s64 * 36;
	// addi r10,r20,28
	ctx.r10.s64 = ctx.r20.s64 + 28;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// subf r26,r23,r15
	ctx.r26.s64 = ctx.r15.s64 - ctx.r23.s64;
	// subf r30,r21,r23
	ctx.r30.s64 = ctx.r23.s64 - ctx.r21.s64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8279DFE4:
	// lwz r10,20(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stwx r10,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279e038
	if (cr0.eq) goto loc_8279E038;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
loc_8279E038:
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8279e0c0
	if (!cr0.gt) goto loc_8279E0C0;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// addi r10,r6,72
	ctx.r10.s64 = ctx.r6.s64 + 72;
	// subf r5,r21,r15
	ctx.r5.s64 = ctx.r15.s64 - ctx.r21.s64;
loc_8279E058:
	// lwz r7,20(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// beq cr6,0x8279e078
	if (cr6.eq) goto loc_8279E078;
	// lwz r7,20(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8279E078:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// stwx r7,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// clrlwi r7,r7,26
	ctx.r7.u64 = ctx.r7.u32 & 0x3F;
	// stwx r7,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lbzx r7,r29,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8279e058
	if (cr6.lt) goto loc_8279E058;
loc_8279E0C0:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279e0d4
	if (cr0.eq) goto loc_8279E0D4;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_8279E0D4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279e0fc
	if (cr0.eq) goto loc_8279E0FC;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r11,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r11.u32);
loc_8279E0FC:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r29,r19
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r19.s32, ctx.xer);
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// blt cr6,0x8279dfe4
	if (cr6.lt) goto loc_8279DFE4;
loc_8279E120:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8279adf0
	ctx.lr = 0x8279E128;
	sub_8279ADF0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// add r11,r21,r19
	ctx.r11.u64 = ctx.r21.u64 + ctx.r19.u64;
	// subf. r22,r19,r11
	ctx.r22.s64 = ctx.r11.s64 - ctx.r19.s64;
	cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble 0x8279e300
	if (!cr0.gt) goto loc_8279E300;
	// mulli r11,r17,36
	ctx.r11.s64 = ctx.r17.s64 * 36;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r20,28
	ctx.r10.s64 = ctx.r20.s64 + 28;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r29,r9,r23
	ctx.r29.u64 = ctx.r9.u64 + ctx.r23.u64;
	// subf r26,r23,r15
	ctx.r26.s64 = ctx.r15.s64 - ctx.r23.s64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8279E164:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stwx r11,r26,r29
	PPC_STORE_U32(ctx.r26.u32 + ctx.r29.u32, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// rlwinm. r28,r9,10,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8279e1bc
	if (cr0.eq) goto loc_8279E1BC;
	// lwz r9,20(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8279E1BC:
	// clrlwi. r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x8279e1e8
	if (cr0.eq) goto loc_8279E1E8;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r9,20(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_8279E1E8:
	// lbzx r11,r24,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8279e2b4
	if (!cr0.gt) goto loc_8279E2B4;
	// addi r3,r27,18
	ctx.r3.s64 = ctx.r27.s64 + 18;
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
	// addi r11,r4,72
	ctx.r11.s64 = ctx.r4.s64 + 72;
	// addi r7,r29,24
	ctx.r7.s64 = ctx.r29.s64 + 24;
loc_8279E208:
	// lwz r5,20(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// beq cr6,0x8279e24c
	if (cr6.eq) goto loc_8279E24C;
	// lwz r30,20(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_8279E24C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8279e280
	if (cr6.eq) goto loc_8279E280;
	// add r30,r3,r6
	ctx.r30.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lwz r15,20(r18)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,156(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwzx r30,r30,r15
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r15.u32);
	// lwz r15,216(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stwx r30,r6,r15
	PPC_STORE_U32(ctx.r6.u32 + ctx.r15.u32, ctx.r30.u32);
loc_8279E280:
	// stwx r5,r26,r7
	PPC_STORE_U32(ctx.r26.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// addi r3,r3,18
	ctx.r3.s64 = ctx.r3.s64 + 18;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lhz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// clrlwi r6,r6,26
	ctx.r6.u64 = ctx.r6.u32 & 0x3F;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// lbzx r6,r24,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r25.u32);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8279e208
	if (cr6.lt) goto loc_8279E208;
loc_8279E2B4:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// beq cr6,0x8279e2d0
	if (cr6.eq) goto loc_8279E2D0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_8279E2D0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8279e2e4
	if (cr6.eq) goto loc_8279E2E4;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_8279E2E4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,3
	ctx.r27.s64 = ctx.r27.s64 + 3;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r24,r22
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8279e164
	if (cr6.lt) goto loc_8279E164;
loc_8279E300:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8279aed0
	ctx.lr = 0x8279E308;
	sub_8279AED0(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r9,-1312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1312);
	// lwz r11,-1320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1320);
	// lwz r30,432(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x82759ff0
	ctx.lr = 0x8279E334;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x8279e35c
	if (cr0.eq) goto loc_8279E35C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x8279E350;
	sub_82776900(ctx, base);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// li r15,0
	ctx.r15.s64 = 0;
	// b 0x8279e364
	goto loc_8279E364;
loc_8279E35C:
	// li r15,0
	ctx.r15.s64 = 0;
	// stw r15,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
loc_8279E364:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,432(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x8279E378;
	sub_82759FF0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x8279e39c
	if (cr0.eq) goto loc_8279E39C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x8279E394;
	sub_82776900(ctx, base);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// b 0x8279e3a0
	goto loc_8279E3A0;
loc_8279E39C:
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
loc_8279E3A0:
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r15.u32);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stb r15,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r15.u8);
	// stw r15,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r15.u32);
	// stw r15,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r15.u32);
	// stw r15,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r15.u32);
	// stw r15,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r15.u32);
	// stw r15,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r15.u32);
	// stw r15,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r15.u32);
	// stw r15,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r15.u32);
	// ble cr6,0x8279e430
	if (!cr6.gt) goto loc_8279E430;
	// mulli r11,r17,36
	ctx.r11.s64 = ctx.r17.s64 * 36;
	// lwz r26,208(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r10,r20,28
	ctx.r10.s64 = ctx.r20.s64 + 28;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8279E3E4:
	// lbzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8279e420
	if (cr0.lt) goto loc_8279E420;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8279E3F8:
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8279cae0
	ctx.lr = 0x8279E40C;
	sub_8279CAE0(ctx, base);
	// lbzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8279e3f8
	if (!cr6.gt) goto loc_8279E3F8;
loc_8279E420:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r28,r19
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x8279e3e4
	if (cr6.lt) goto loc_8279E3E4;
loc_8279E430:
	// stb r15,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r15.u8);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8279e4c8
	if (!cr6.gt) goto loc_8279E4C8;
	// mulli r11,r17,36
	ctx.r11.s64 = ctx.r17.s64 * 36;
	// lwz r25,184(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r10,r20,28
	ctx.r10.s64 = ctx.r20.s64 + 28;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8279E454:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r26,r11,10,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8279e46c
	if (cr0.eq) goto loc_8279E46C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r11.u8);
loc_8279E46C:
	// lbzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8279e4b8
	if (cr0.lt) goto loc_8279E4B8;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8279E480:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r8,r11,9,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// bl 0x8279b8c0
	ctx.lr = 0x8279E4A4;
	sub_8279B8C0(ctx, base);
	// lbzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8279e480
	if (!cr6.gt) goto loc_8279E480;
loc_8279E4B8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r27,r21
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8279e454
	if (cr6.lt) goto loc_8279E454;
loc_8279E4C8:
	// lwz r30,664(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 664);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8279e524
	goto loc_8279E524;
loc_8279E4D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82794260
	ctx.lr = 0x8279E4DC;
	sub_82794260(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279E4E8;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279E4F4;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279E4FC;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279e51c
	if (!cr0.eq) goto loc_8279E51C;
	// li r7,2243
	ctx.r7.s64 = 2243;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279E51C;
	sub_826CA560(ctx, base);
loc_8279E51C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_8279E524:
	// cmplwi r29,0
	cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8279e4d4
	if (!cr0.eq) goto loc_8279E4D4;
loc_8279E52C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,87
	cr6.compare<uint32_t>(ctx.r10.u32, 87, ctx.xer);
	// bgt cr6,0x827a280c
	if (cr6.gt) goto loc_827A280C;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,2840
	ctx.r12.s64 = ctx.r12.s64 + 2840;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32134
	ctx.r12.s64 = -2105933824;
	// addi r12,r12,-6796
	ctx.r12.s64 = ctx.r12.s64 + -6796;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_827A2804;
	case 1:
		goto loc_827A14E0;
	case 2:
		goto loc_827A14E0;
	case 3:
		goto loc_827A14E0;
	case 4:
		goto loc_827A14E0;
	case 5:
		goto loc_827A14E0;
	case 6:
		goto loc_827A14E0;
	case 7:
		goto loc_827A14E0;
	case 8:
		goto loc_827A14E0;
	case 9:
		goto loc_827A14E0;
	case 10:
		goto loc_827A14E0;
	case 11:
		goto loc_827A14E0;
	case 12:
		goto loc_827A14E0;
	case 13:
		goto loc_827A14E0;
	case 14:
		goto loc_827A14E0;
	case 15:
		goto loc_827A14E0;
	case 16:
		goto loc_827A1538;
	case 17:
		goto loc_827A16D4;
	case 18:
		goto loc_827A282C;
	case 19:
		goto loc_827A1444;
	case 20:
		goto loc_827A1444;
	case 21:
		goto loc_827A1444;
	case 22:
		goto loc_827A2330;
	case 23:
		goto loc_827A280C;
	case 24:
		goto loc_827A280C;
	case 25:
		goto loc_827A280C;
	case 26:
		goto loc_827A280C;
	case 27:
		goto loc_827A280C;
	case 28:
		goto loc_827A280C;
	case 29:
		goto loc_827A280C;
	case 30:
		goto loc_827A0F8C;
	case 31:
		goto loc_827A0F60;
	case 32:
		goto loc_827A1210;
	case 33:
		goto loc_827A12AC;
	case 34:
		goto loc_827A244C;
	case 35:
		goto loc_827A280C;
	case 36:
		goto loc_827A2724;
	case 37:
		goto loc_827A20A0;
	case 38:
		goto loc_827A2790;
	case 39:
		goto loc_827A214C;
	case 40:
		goto loc_827A27B0;
	case 41:
		goto loc_827A280C;
	case 42:
		goto loc_8279E574;
	case 43:
		goto loc_827A1638;
	case 44:
		goto loc_827A2560;
	case 45:
		goto loc_827A1CB8;
	case 46:
		goto loc_827A1A58;
	case 47:
		goto loc_827A1608;
	case 48:
		goto loc_827A18A0;
	case 49:
		goto loc_827A16E0;
	case 50:
		goto loc_827A14B8;
	case 51:
		goto loc_827A0F80;
	case 52:
		goto loc_827A282C;
	case 53:
		goto loc_827A1568;
	case 54:
		goto loc_827A282C;
	case 55:
		goto loc_827A1140;
	case 56:
		goto loc_827A154C;
	case 57:
		goto loc_827A1104;
	case 58:
		goto loc_827A282C;
	case 59:
		goto loc_827A27EC;
	case 60:
		goto loc_827A280C;
	case 61:
		goto loc_827A168C;
	case 62:
		goto loc_827A148C;
	case 63:
		goto loc_827A148C;
	case 64:
		goto loc_827A148C;
	case 65:
		goto loc_827A148C;
	case 66:
		goto loc_827A148C;
	case 67:
		goto loc_827A148C;
	case 68:
		goto loc_827A148C;
	case 69:
		goto loc_827A1154;
	case 70:
		goto loc_827A282C;
	case 71:
		goto loc_827A0F48;
	case 72:
		goto loc_827A1174;
	case 73:
		goto loc_827A10D4;
	case 74:
		goto loc_827A10D4;
	case 75:
		goto loc_827A0FAC;
	case 76:
		goto loc_827A10B4;
	case 77:
		goto loc_827A16C8;
	case 78:
		goto loc_827A1574;
	case 79:
		goto loc_827A1574;
	case 80:
		goto loc_827A1574;
	case 81:
		goto loc_827A1574;
	case 82:
		goto loc_827A1574;
	case 83:
		goto loc_827A1574;
	case 84:
		goto loc_827A1574;
	case 85:
		goto loc_827A1C24;
	case 86:
		goto loc_827A280C;
	case 87:
		goto loc_827A26B0;
	default:
		__builtin_unreachable();
	}
loc_8279E574:
	// lwz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lbz r29,1(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// rlwinm r11,r29,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279e5b8
	if (!cr0.eq) goto loc_8279E5B8;
	// li r7,2263
	ctx.r7.s64 = 2263;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,472(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279E5B8;
	sub_826CA560(ctx, base);
loc_8279E5B8:
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x8279e624
	if (cr6.eq) goto loc_8279E624;
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x8279e620
	if (cr6.eq) goto loc_8279E620;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x8279e618
	if (cr6.eq) goto loc_8279E618;
	// cmpwi cr6,r11,96
	cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// beq cr6,0x8279e610
	if (cr6.eq) goto loc_8279E610;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x8279e608
	if (cr6.eq) goto loc_8279E608;
	// li r7,2293
	ctx.r7.s64 = 2293;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279E604;
	sub_826CA560(ctx, base);
	// b 0x8279e624
	goto loc_8279E624;
loc_8279E608:
	// li r23,32
	ctx.r23.s64 = 32;
	// b 0x8279e624
	goto loc_8279E624;
loc_8279E610:
	// li r23,18
	ctx.r23.s64 = 18;
	// b 0x8279e624
	goto loc_8279E624;
loc_8279E618:
	// li r23,9
	ctx.r23.s64 = 9;
	// b 0x8279e624
	goto loc_8279E624;
loc_8279E620:
	// li r23,5
	ctx.r23.s64 = 5;
loc_8279E624:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x82759ff0
	ctx.lr = 0x8279E634;
	sub_82759FF0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x828d2890
	ctx.lr = 0x8279E644;
	sub_828D2890(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r30,328(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// li r26,1
	ctx.r26.s64 = 1;
	// sth r28,16(r20)
	PPC_STORE_U16(ctx.r20.u32 + 16, ctx.r28.u16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r28,22(r20)
	PPC_STORE_U16(ctx.r20.u32 + 22, ctx.r28.u16);
	// sth r28,24(r20)
	PPC_STORE_U16(ctx.r20.u32 + 24, ctx.r28.u16);
	// sth r11,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
	// sth r10,8(r20)
	PPC_STORE_U16(ctx.r20.u32 + 8, ctx.r10.u16);
	// sth r11,2(r20)
	PPC_STORE_U16(ctx.r20.u32 + 2, ctx.r11.u16);
	// sth r11,4(r20)
	PPC_STORE_U16(ctx.r20.u32 + 4, ctx.r11.u16);
	// sth r10,6(r20)
	PPC_STORE_U16(ctx.r20.u32 + 6, ctx.r10.u16);
	// sth r11,10(r20)
	PPC_STORE_U16(ctx.r20.u32 + 10, ctx.r11.u16);
	// sth r11,12(r20)
	PPC_STORE_U16(ctx.r20.u32 + 12, ctx.r11.u16);
	// sth r26,14(r20)
	PPC_STORE_U16(ctx.r20.u32 + 14, ctx.r26.u16);
	// sth r26,18(r20)
	PPC_STORE_U16(ctx.r20.u32 + 18, ctx.r26.u16);
	// sth r28,26(r20)
	PPC_STORE_U16(ctx.r20.u32 + 26, ctx.r28.u16);
	// sth r28,28(r20)
	PPC_STORE_U16(ctx.r20.u32 + 28, ctx.r28.u16);
	// sth r28,20(r20)
	PPC_STORE_U16(ctx.r20.u32 + 20, ctx.r28.u16);
	// beq cr6,0x8279e71c
	if (cr6.eq) goto loc_8279E71C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// bl 0x8279b0c8
	ctx.lr = 0x8279E6A4;
	sub_8279B0C8(ctx, base);
	// sth r3,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r3,r11,29,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// bl 0x8279b0c8
	ctx.lr = 0x8279E6B4;
	sub_8279B0C8(ctx, base);
	// sth r3,2(r20)
	PPC_STORE_U16(ctx.r20.u32 + 2, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// bl 0x8279b0c8
	ctx.lr = 0x8279E6C4;
	sub_8279B0C8(ctx, base);
	// sth r3,4(r20)
	PPC_STORE_U16(ctx.r20.u32 + 4, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r3,r11,26,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// bl 0x8279b0c8
	ctx.lr = 0x8279E6D4;
	sub_8279B0C8(ctx, base);
	// sth r3,10(r20)
	PPC_STORE_U16(ctx.r20.u32 + 10, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r3,r11,23,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// bl 0x8279b0c8
	ctx.lr = 0x8279E6E4;
	sub_8279B0C8(ctx, base);
	// sth r3,12(r20)
	PPC_STORE_U16(ctx.r20.u32 + 12, ctx.r3.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r3,r11,17,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x7;
	// bl 0x8279b0c8
	ctx.lr = 0x8279E6F4;
	sub_8279B0C8(ctx, base);
	// sth r3,6(r20)
	PPC_STORE_U16(ctx.r20.u32 + 6, ctx.r3.u16);
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,14,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7F;
	// sth r11,22(r20)
	PPC_STORE_U16(ctx.r20.u32 + 22, ctx.r11.u16);
	// beq 0x8279e71c
	if (cr0.eq) goto loc_8279E71C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,16(r20)
	PPC_STORE_U16(ctx.r20.u32 + 16, ctx.r11.u16);
loc_8279E71C:
	// lwz r30,248(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8279e79c
	if (cr6.eq) goto loc_8279E79C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r23,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,24(r20)
	PPC_STORE_U16(ctx.r20.u32 + 24, ctx.r11.u16);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// sth r11,26(r20)
	PPC_STORE_U16(ctx.r20.u32 + 26, ctx.r11.u16);
	// beq 0x8279e794
	if (cr0.eq) goto loc_8279E794;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279E75C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x823e2388
	ctx.lr = 0x8279E778;
	sub_823E2388(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8279e78c
	if (!cr6.eq) goto loc_8279E78C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x8279e798
	goto loc_8279E798;
loc_8279E78C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8279e798
	goto loc_8279E798;
loc_8279E794:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
loc_8279E798:
	// sth r11,28(r20)
	PPC_STORE_U16(ctx.r20.u32 + 28, ctx.r11.u16);
loc_8279E79C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r16,r23,31
	ctx.r16.u64 = ctx.r23.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// rlwinm r21,r11,8,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r22,r11,6,30,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cntlzw r11,r21
	ctx.r11.u64 = ctx.r21.u32 == 0 ? 32 : __builtin_clz(ctx.r21.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r11,18(r20)
	PPC_STORE_U16(ctx.r20.u32 + 18, ctx.r11.u16);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r27,r11,7,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r11,14(r20)
	PPC_STORE_U16(ctx.r20.u32 + 14, ctx.r11.u16);
	// beq 0x8279e7e4
	if (cr0.eq) goto loc_8279E7E4;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279e7e0
	if (cr0.eq) goto loc_8279E7E0;
	// sth r26,20(r20)
	PPC_STORE_U16(ctx.r20.u32 + 20, ctx.r26.u16);
	// b 0x8279e7e4
	goto loc_8279E7E4;
loc_8279E7E0:
	// sth r26,16(r20)
	PPC_STORE_U16(ctx.r20.u32 + 16, ctx.r26.u16);
loc_8279E7E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279E800;
	sub_827864C0(ctx, base);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r30,-1312(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1312);
	// lwz r10,-1320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1320);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279E834;
	sub_827864C0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82796938
	ctx.lr = 0x8279E844;
	sub_82796938(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279E854;
	sub_82796DB8(ctx, base);
	// lwz r17,240(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r28,164(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// lwz r25,184(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r24,208(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r26,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r26.u8);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279d7e0
	ctx.lr = 0x8279E8A0;
	sub_8279D7E0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279E8AC;
	sub_827771A8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279E8B8;
	sub_82799958(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279E8C0;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279e8e0
	if (!cr0.eq) goto loc_8279E8E0;
	// li r7,2397
	ctx.r7.s64 = 2397;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279E8E0;
	sub_826CA560(ctx, base);
loc_8279E8E0:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8279e9a8
	if (cr6.eq) goto loc_8279E9A8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279E908;
	sub_827864C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82796938
	ctx.lr = 0x8279E918;
	sub_82796938(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279E928;
	sub_82796DB8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// stb r6,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r6.u8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279d7e0
	ctx.lr = 0x8279E968;
	sub_8279D7E0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279E974;
	sub_827771A8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279E980;
	sub_82799958(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279E988;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279e9a8
	if (!cr0.eq) goto loc_8279E9A8;
	// li r7,2413
	ctx.r7.s64 = 2413;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279E9A8;
	sub_826CA560(ctx, base);
loc_8279E9A8:
	// rlwinm. r24,r23,0,28,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// beq 0x8279ea70
	if (cr0.eq) goto loc_8279EA70;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279E9D0;
	sub_827864C0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82796938
	ctx.lr = 0x8279E9E0;
	sub_82796938(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279E9F0;
	sub_82796DB8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r6,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r6.u8);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8279d7e0
	ctx.lr = 0x8279EA30;
	sub_8279D7E0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279EA3C;
	sub_827771A8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279EA48;
	sub_82799958(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279EA50;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279ea70
	if (!cr0.eq) goto loc_8279EA70;
	// li r7,2430
	ctx.r7.s64 = 2430;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279EA70;
	sub_826CA560(ctx, base);
loc_8279EA70:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r17,r29,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r17,r11
	ctx.r11.u64 = ctx.r17.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8279eacc
	if (cr6.eq) goto loc_8279EACC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8279ee44
	if (!cr6.eq) goto loc_8279EE44;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279EAA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82770f60
	ctx.lr = 0x8279EAC4;
	sub_82770F60(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8279ee44
	if (!cr6.eq) goto loc_8279EE44;
loc_8279EACC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279EAE8;
	sub_827864C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x82796938
	ctx.lr = 0x8279EAF8;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279EB08;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279EB18;
	sub_82796DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r15,2
	ctx.r15.s64 = 2;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r15,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r15.u8);
	// stb r15,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r15.u8);
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279EB4C;
	sub_82796DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r15,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r15.u8);
	// li r18,1
	ctx.r18.s64 = 1;
	// stb r15,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r15.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r18,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r18.u8);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x8279EB78;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279EB84;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279EB8C;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279ebac
	if (!cr0.eq) goto loc_8279EBAC;
	// li r7,2467
	ctx.r7.s64 = 2467;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279EBAC;
	sub_826CA560(ctx, base);
loc_8279EBAC:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279EBB8;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279EBC8;
	sub_82796DB8(ctx, base);
	// lwz r15,140(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-1296(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + -1296);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279EBE4;
	sub_82796DB8(ctx, base);
	// lwz r11,-1276(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + -1276);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r18,159(r30)
	PPC_STORE_U8(ctx.r30.u32 + 159, ctx.r18.u8);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x8279EBFC;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279EC08;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279EC10;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279ec30
	if (!cr0.eq) goto loc_8279EC30;
	// li r7,2478
	ctx.r7.s64 = 2478;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279EC30;
	sub_826CA560(ctx, base);
loc_8279EC30:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279EC3C;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279EC4C;
	sub_82796DB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279EC6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279EC8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279ECAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279ECCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279ECDC;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279ECEC;
	sub_82796DB8(ctx, base);
	// lwz r11,-1276(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + -1276);
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f4,f26
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f26.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// bl 0x827979c0
	ctx.lr = 0x8279ED14;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279ED20;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279ED2C;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279ED34;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279ed54
	if (!cr0.eq) goto loc_8279ED54;
	// li r7,2493
	ctx.r7.s64 = 2493;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279ED54;
	sub_826CA560(ctx, base);
loc_8279ED54:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279ED60;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279ED70;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279ED80;
	sub_82796DB8(ctx, base);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279EDA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279EDC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279EDE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279EE00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279EE0C;
	sub_827771A8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279EE18;
	sub_82799958(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279EE20;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279ee40
	if (!cr0.eq) goto loc_8279EE40;
	// li r7,2504
	ctx.r7.s64 = 2504;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279EE40;
	sub_826CA560(ctx, base);
loc_8279EE40:
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
loc_8279EE44:
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,512(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 512);
	// bl 0x82774c68
	ctx.lr = 0x8279EE60;
	sub_82774C68(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lhz r3,22(r20)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r20.u32 + 22);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x827966e8
	ctx.lr = 0x8279EE70;
	sub_827966E8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279EE94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82770eb8
	ctx.lr = 0x8279EEB0;
	sub_82770EB8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8279f514
	if (!cr6.eq) goto loc_8279F514;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,280
	ctx.r5.s64 = ctx.r1.s64 + 280;
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,512(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 512);
	// bl 0x82774d08
	ctx.lr = 0x8279EED4;
	sub_82774D08(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,512(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 512);
	// bl 0x82774db8
	ctx.lr = 0x8279EEF0;
	sub_82774DB8(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// beq cr6,0x8279f268
	if (cr6.eq) goto loc_8279F268;
	// bl 0x82796638
	ctx.lr = 0x8279EF08;
	sub_82796638(ctx, base);
	// sth r3,22(r20)
	PPC_STORE_U16(ctx.r20.u32 + 22, ctx.r3.u16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279EF28;
	sub_827864C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82796938
	ctx.lr = 0x8279EF38;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279EF48;
	sub_82796DB8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279EF58;
	sub_82796DB8(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-1272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1272);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lfs f4,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279EF84;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279EF90;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279EF9C;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279EFA4;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279efc4
	if (!cr0.eq) goto loc_8279EFC4;
	// li r7,2562
	ctx.r7.s64 = 2562;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,292(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279EFC4;
	sub_826CA560(ctx, base);
loc_8279EFC4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8279f0f8
	if (!cr6.eq) goto loc_8279F0F8;
	// li r3,110
	ctx.r3.s64 = 110;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279EFD8;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279EFE8;
	sub_82796DB8(ctx, base);
	// lwz r27,140(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-1292(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1292);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279F004;
	sub_82796DB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8275a1f8
	ctx.lr = 0x8279F014;
	sub_8275A1F8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8279f044
	if (cr6.lt) goto loc_8279F044;
	// beq cr6,0x8279f03c
	if (cr6.eq) goto loc_8279F03C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8279f044
	if (!cr6.lt) goto loc_8279F044;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8279f048
	goto loc_8279F048;
loc_8279F03C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8279f048
	goto loc_8279F048;
loc_8279F044:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8279F048:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F058;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F064;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F06C;
	sub_827969E0(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F078;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F088;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F098;
	sub_82796DB8(ctx, base);
	// lwz r11,-1272(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1272);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279F0B0;
	sub_82796DB8(ctx, base);
	// lwz r11,-1284(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1284);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x8279F0C4;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F0D0;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F0D8;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279f0f8
	if (!cr0.eq) goto loc_8279F0F8;
	// li r7,2588
	ctx.r7.s64 = 2588;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,292(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279F0F8;
	sub_826CA560(ctx, base);
loc_8279F0F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,25
	ctx.r3.s64 = 25;
	// sth r11,14(r20)
	PPC_STORE_U16(ctx.r20.u32 + 14, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,16(r20)
	PPC_STORE_U16(ctx.r20.u32 + 16, ctx.r11.u16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F114;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F124;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F134;
	sub_82796DB8(ctx, base);
	// lfs f4,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f4.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279F154;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F160;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F16C;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F174;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279f194
	if (!cr0.eq) goto loc_8279F194;
	// li r7,2603
	ctx.r7.s64 = 2603;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x8279F194;
	sub_826CA560(ctx, base);
loc_8279F194:
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F1A0;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F1B0;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F1C0;
	sub_82796DB8(ctx, base);
	// lfs f4,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f4.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279F1E0;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F1EC;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F1F8;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F200;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279f220
	if (!cr0.eq) goto loc_8279F220;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r7,2612
	ctx.r7.s64 = 2612;
loc_8279F210:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x826ca560
	ctx.lr = 0x8279F220;
	sub_826CA560(ctx, base);
loc_8279F220:
	// li r3,113
	ctx.r3.s64 = 113;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F22C;
	sub_82796938(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279F240;
	sub_827864C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279F254;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F264;
	sub_82796DB8(ctx, base);
	// b 0x8279f58c
	goto loc_8279F58C;
loc_8279F268:
	// bl 0x82796638
	ctx.lr = 0x8279F26C;
	sub_82796638(ctx, base);
	// sth r3,22(r20)
	PPC_STORE_U16(ctx.r20.u32 + 22, ctx.r3.u16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279F28C;
	sub_827864C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// sth r11,14(r20)
	PPC_STORE_U16(ctx.r20.u32 + 14, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,16(r20)
	PPC_STORE_U16(ctx.r20.u32 + 16, ctx.r11.u16);
	// bne cr6,0x8279f4e4
	if (!cr6.eq) goto loc_8279F4E4;
	// li r3,110
	ctx.r3.s64 = 110;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F2B4;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F2C4;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F2D4;
	sub_82796DB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8275a1f8
	ctx.lr = 0x8279F2E4;
	sub_8275A1F8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8279f314
	if (cr6.lt) goto loc_8279F314;
	// beq cr6,0x8279f30c
	if (cr6.eq) goto loc_8279F30C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8279f314
	if (!cr6.lt) goto loc_8279F314;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8279f318
	goto loc_8279F318;
loc_8279F30C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8279f318
	goto loc_8279F318;
loc_8279F314:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8279F318:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F328;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F334;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F33C;
	sub_827969E0(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F348;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F358;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F368;
	sub_82796DB8(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-1272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1272);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lfs f4,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279F394;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F3A0;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F3AC;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F3B4;
	sub_827969E0(ctx, base);
	// lwz r27,132(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279f3d8
	if (!cr0.eq) goto loc_8279F3D8;
	// li r7,2668
	ctx.r7.s64 = 2668;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,292(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279F3D8;
	sub_826CA560(ctx, base);
loc_8279F3D8:
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F3E4;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F3F4;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F404;
	sub_82796DB8(ctx, base);
	// lfs f4,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f4.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279F424;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F430;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F43C;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F444;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279f464
	if (!cr0.eq) goto loc_8279F464;
	// li r7,2677
	ctx.r7.s64 = 2677;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279F464;
	sub_826CA560(ctx, base);
loc_8279F464:
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F470;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F480;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F490;
	sub_82796DB8(ctx, base);
	// lfs f4,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f4.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x8279F4B0;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F4BC;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F4C8;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F4D0;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279f220
	if (!cr0.eq) goto loc_8279F220;
	// li r7,2686
	ctx.r7.s64 = 2686;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x8279f210
	goto loc_8279F210;
loc_8279F4E4:
	// lfs f1,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8279f4fc
	if (!cr6.gt) goto loc_8279F4FC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// stfs f1,200(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
loc_8279F4FC:
	// lfs f0,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8279f5fc
	if (!cr6.lt) goto loc_8279F5FC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// stfs f1,200(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// b 0x8279f5fc
	goto loc_8279F5FC;
loc_8279F514:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8279f5f8
	if (cr6.eq) goto loc_8279F5F8;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8279f5f8
	if (!cr6.eq) goto loc_8279F5F8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f1,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82796638
	ctx.lr = 0x8279F534;
	sub_82796638(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,113
	ctx.r3.s64 = 113;
	// sth r11,22(r20)
	PPC_STORE_U16(ctx.r20.u32 + 22, ctx.r11.u16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F548;
	sub_82796938(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279F55C;
	sub_827864C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279F570;
	sub_82796DB8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F580;
	sub_82796DB8(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,-1272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1272);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
loc_8279F58C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8275a1f8
	ctx.lr = 0x8279F59C;
	sub_8275A1F8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8279f5cc
	if (cr6.lt) goto loc_8279F5CC;
	// beq cr6,0x8279f5c4
	if (cr6.eq) goto loc_8279F5C4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8279f5cc
	if (!cr6.lt) goto loc_8279F5CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8279f5d0
	goto loc_8279F5D0;
loc_8279F5C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8279f5d0
	goto loc_8279F5D0;
loc_8279F5CC:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8279F5D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F5E0;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F5EC;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F5F4;
	sub_827969E0(ctx, base);
	// b 0x8279f60c
	goto loc_8279F60C;
loc_8279F5F8:
	// lfs f1,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
loc_8279F5FC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82796638
	ctx.lr = 0x8279F608;
	sub_82796638(ctx, base);
	// sth r3,22(r20)
	PPC_STORE_U16(ctx.r20.u32 + 22, ctx.r3.u16);
loc_8279F60C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8279f6b0
	if (cr6.eq) goto loc_8279F6B0;
	// li r3,114
	ctx.r3.s64 = 114;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F620;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r27,29
	ctx.r27.s64 = 29;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r28.u32);
	// stw r27,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r27.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279F640;
	sub_82796DB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r20,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r20.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F650;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F65C;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F664;
	sub_827969E0(ctx, base);
	// li r3,115
	ctx.r3.s64 = 115;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F670;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r27.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279F68C;
	sub_82796DB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r20,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r20.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F69C;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F6A8;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F6B0;
	sub_827969E0(ctx, base);
loc_8279F6B0:
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,105
	ctx.r27.s64 = 105;
	// beq 0x8279f6c0
	if (cr0.eq) goto loc_8279F6C0;
	// li r27,108
	ctx.r27.s64 = 108;
loc_8279F6C0:
	// rlwinm. r11,r23,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279f6cc
	if (cr0.eq) goto loc_8279F6CC;
	// li r27,112
	ctx.r27.s64 = 112;
loc_8279F6CC:
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x8279fc68
	if (cr6.eq) goto loc_8279FC68;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x8279f718
	if (!cr6.eq) goto loc_8279F718;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279F6F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82773230
	ctx.lr = 0x8279F710;
	sub_82773230(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8279fc68
	if (cr6.eq) goto loc_8279FC68;
loc_8279F718:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279F724;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// stw r20,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r20.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279F73C;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279F74C;
	sub_82796DB8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8279f778
	if (cr6.lt) goto loc_8279F778;
	// beq cr6,0x8279f770
	if (cr6.eq) goto loc_8279F770;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8279f778
	if (!cr6.lt) goto loc_8279F778;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8279f77c
	goto loc_8279F77C;
loc_8279F770:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8279f77c
	goto loc_8279F77C;
loc_8279F778:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8279F77C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8275a1f8
	ctx.lr = 0x8279F78C;
	sub_8275A1F8(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// sth r21,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r21.u16);
	// beq cr6,0x8279f7e4
	if (cr6.eq) goto loc_8279F7E4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8279fc54
	if (cr6.eq) goto loc_8279FC54;
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x827864c0
	ctx.lr = 0x8279F7BC;
	sub_827864C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x8279F7C8;
	sub_8279ACF8(ctx, base);
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279F7D8;
	sub_827864C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x8279F7E4;
	sub_8279ACF8(ctx, base);
loc_8279F7E4:
	// lwz r22,204(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_8279F7E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279F7F4;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279F800;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279F808;
	sub_827969E0(ctx, base);
	// lwz r23,128(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r24,132(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279f830
	if (!cr0.eq) goto loc_8279F830;
	// li r7,3070
	ctx.r7.s64 = 3070;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279F830;
	sub_826CA560(ctx, base);
loc_8279F830:
	// lwz r26,140(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8279F834:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279F84C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x827720f0
	ctx.lr = 0x8279F868;
	sub_827720F0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827a09d8
	if (!cr6.eq) goto loc_827A09D8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279F88C;
	sub_827864C0(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82774840
	ctx.lr = 0x8279F8AC;
	sub_82774840(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,408
	ctx.r5.s64 = ctx.r1.s64 + 408;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82774858
	ctx.lr = 0x8279F8C8;
	sub_82774858(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,488
	ctx.r5.s64 = ctx.r1.s64 + 488;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82774870
	ctx.lr = 0x8279F8E4;
	sub_82774870(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827741c0
	ctx.lr = 0x8279F900;
	sub_827741C0(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82774888
	ctx.lr = 0x8279F91C;
	sub_82774888(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,392
	ctx.r5.s64 = ctx.r1.s64 + 392;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82774888
	ctx.lr = 0x8279F938;
	sub_82774888(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82774888
	ctx.lr = 0x8279F954;
	sub_82774888(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827748a0
	ctx.lr = 0x8279F970;
	sub_827748A0(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,548
	ctx.r5.s64 = ctx.r1.s64 + 548;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827748a0
	ctx.lr = 0x8279F98C;
	sub_827748A0(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,424
	ctx.r5.s64 = ctx.r1.s64 + 424;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827748b8
	ctx.lr = 0x8279F9A8;
	sub_827748B8(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827748d0
	ctx.lr = 0x8279F9C4;
	sub_827748D0(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827748a0
	ctx.lr = 0x8279F9E0;
	sub_827748A0(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,540
	ctx.r5.s64 = ctx.r1.s64 + 540;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827748e8
	ctx.lr = 0x8279F9FC;
	sub_827748E8(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,364
	ctx.r5.s64 = ctx.r1.s64 + 364;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82774900
	ctx.lr = 0x8279FA18;
	sub_82774900(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,504
	ctx.r5.s64 = ctx.r1.s64 + 504;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827748a0
	ctx.lr = 0x8279FA34;
	sub_827748A0(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827748a0
	ctx.lr = 0x8279FA50;
	sub_827748A0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279FA5C;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FA6C;
	sub_82796DB8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FA7C;
	sub_82796DB8(ctx, base);
	// lwz r11,-1280(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1280);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lfs f4,384(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,528(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827979c0
	ctx.lr = 0x8279FAA4;
	sub_827979C0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f4,400(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f3,488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,544(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827979c0
	ctx.lr = 0x8279FAC4;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279FAD0;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279FADC;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279FAE4;
	sub_827969E0(ctx, base);
	// lwz r27,180(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279fb08
	if (!cr0.eq) goto loc_8279FB08;
	// li r7,3161
	ctx.r7.s64 = 3161;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279FB08;
	sub_826CA560(ctx, base);
loc_8279FB08:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279FB14;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FB24;
	sub_82796DB8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FB34;
	sub_82796DB8(ctx, base);
	// lwz r11,-1276(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1276);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lfs f4,416(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,548(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827979c0
	ctx.lr = 0x8279FB5C;
	sub_827979C0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FB6C;
	sub_82796DB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279FB78;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279FB84;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279FB8C;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279fbac
	if (!cr0.eq) goto loc_8279FBAC;
	// li r7,3171
	ctx.r7.s64 = 3171;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279FBAC;
	sub_826CA560(ctx, base);
loc_8279FBAC:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279FBB8;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FBC8;
	sub_82796DB8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FBD8;
	sub_82796DB8(ctx, base);
	// lwz r11,-1284(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1284);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r11,132(r15)
	PPC_STORE_U32(ctx.r15.u32 + 132, ctx.r11.u32);
	// lfs f4,432(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,504(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,540(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827979c0
	ctx.lr = 0x8279FC00;
	sub_827979C0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FC10;
	sub_82796DB8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279FC1C;
	sub_827771A8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279FC28;
	sub_82799958(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279FC30;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a09dc
	if (!cr0.eq) goto loc_827A09DC;
	// li r7,3181
	ctx.r7.s64 = 3181;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279FC50;
	sub_826CA560(ctx, base);
	// b 0x827a09dc
	goto loc_827A09DC;
loc_8279FC54:
	// lwz r22,204(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8279acf8
	ctx.lr = 0x8279FC64;
	sub_8279ACF8(ctx, base);
	// b 0x8279f7e8
	goto loc_8279F7E8;
loc_8279FC68:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x8279FC84;
	sub_827864C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279FCA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x827722d8
	ctx.lr = 0x8279FCBC;
	sub_827722D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x827a00bc
	if (!cr6.eq) goto loc_827A00BC;
	// bl 0x82796938
	ctx.lr = 0x8279FCD0;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// stw r20,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r20.u32);
	// bl 0x82796638
	ctx.lr = 0x8279FCEC;
	sub_82796638(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// sth r3,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r3.u16);
	// bl 0x82796638
	ctx.lr = 0x8279FD04;
	sub_82796638(ctx, base);
	// lwz r26,140(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,184(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,-1304(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1304);
	// sth r11,24(r9)
	PPC_STORE_U16(ctx.r9.u32 + 24, ctx.r11.u16);
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279FD2C;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FD3C;
	sub_82796DB8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8279fd68
	if (cr6.lt) goto loc_8279FD68;
	// beq cr6,0x8279fd60
	if (cr6.eq) goto loc_8279FD60;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8279fd68
	if (!cr6.lt) goto loc_8279FD68;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8279fd6c
	goto loc_8279FD6C;
loc_8279FD60:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8279fd6c
	goto loc_8279FD6C;
loc_8279FD68:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8279FD6C:
	// lwz r22,204(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// beq cr6,0x8279fd88
	if (cr6.eq) goto loc_8279FD88;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x8279FD88;
	sub_8279ACF8(ctx, base);
loc_8279FD88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279FD94;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279FDA0;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279FDA8;
	sub_827969E0(ctx, base);
	// lwz r23,128(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r25,256(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r24,132(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279fdd4
	if (!cr0.eq) goto loc_8279FDD4;
	// li r7,2812
	ctx.r7.s64 = 2812;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279FDD4;
	sub_826CA560(ctx, base);
loc_8279FDD4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279FDE0;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// stw r20,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r20.u32);
	// bl 0x82796638
	ctx.lr = 0x8279FDFC;
	sub_82796638(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// sth r3,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r3.u16);
	// bl 0x82796638
	ctx.lr = 0x8279FE14;
	sub_82796638(ctx, base);
	// lwz r9,184(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-1300(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1300);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,24(r9)
	PPC_STORE_U16(ctx.r9.u32 + 24, ctx.r11.u16);
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279FE38;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FE48;
	sub_82796DB8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8279fe74
	if (cr6.lt) goto loc_8279FE74;
	// beq cr6,0x8279fe6c
	if (cr6.eq) goto loc_8279FE6C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8279fe74
	if (!cr6.lt) goto loc_8279FE74;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8279fe78
	goto loc_8279FE78;
loc_8279FE6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8279fe78
	goto loc_8279FE78;
loc_8279FE74:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8279FE78:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// beq cr6,0x8279fe90
	if (cr6.eq) goto loc_8279FE90;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x8279FE90;
	sub_8279ACF8(ctx, base);
loc_8279FE90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279FE9C;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279FEA8;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279FEB0;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279fed0
	if (!cr0.eq) goto loc_8279FED0;
	// li r7,2829
	ctx.r7.s64 = 2829;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279FED0;
	sub_826CA560(ctx, base);
loc_8279FED0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279FEDC;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// stw r20,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r20.u32);
	// bl 0x82796638
	ctx.lr = 0x8279FEF8;
	sub_82796638(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// sth r3,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r3.u16);
	// bl 0x82796638
	ctx.lr = 0x8279FF10;
	sub_82796638(ctx, base);
	// lwz r9,184(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-1296(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1296);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,24(r9)
	PPC_STORE_U16(ctx.r9.u32 + 24, ctx.r11.u16);
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// bl 0x82796db8
	ctx.lr = 0x8279FF34;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x8279FF44;
	sub_82796DB8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8279ff70
	if (cr6.lt) goto loc_8279FF70;
	// beq cr6,0x8279ff68
	if (cr6.eq) goto loc_8279FF68;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8279ff70
	if (!cr6.lt) goto loc_8279FF70;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8279ff74
	goto loc_8279FF74;
loc_8279FF68:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8279ff74
	goto loc_8279FF74;
loc_8279FF70:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8279FF74:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// beq cr6,0x8279ff8c
	if (cr6.eq) goto loc_8279FF8C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x8279FF8C;
	sub_8279ACF8(ctx, base);
loc_8279FF8C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x8279FF98;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x8279FFA4;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x8279FFAC;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279ffcc
	if (!cr0.eq) goto loc_8279FFCC;
	// li r7,2846
	ctx.r7.s64 = 2846;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8279FFCC;
	sub_826CA560(ctx, base);
loc_8279FFCC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x8279FFD8;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// stw r20,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r20.u32);
	// bl 0x82796638
	ctx.lr = 0x8279FFF4;
	sub_82796638(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// sth r3,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r3.u16);
	// bl 0x82796638
	ctx.lr = 0x827A000C;
	sub_82796638(ctx, base);
	// lwz r9,184(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-1292(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1292);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,24(r9)
	PPC_STORE_U16(ctx.r9.u32 + 24, ctx.r11.u16);
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0030;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0040;
	sub_82796DB8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x827a006c
	if (cr6.lt) goto loc_827A006C;
	// beq cr6,0x827a0064
	if (cr6.eq) goto loc_827A0064;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x827a006c
	if (!cr6.lt) goto loc_827A006C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827a0070
	goto loc_827A0070;
loc_827A0064:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a0070
	goto loc_827A0070;
loc_827A006C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_827A0070:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// beq cr6,0x827a0088
	if (cr6.eq) goto loc_827A0088;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x827A0088;
	sub_8279ACF8(ctx, base);
loc_827A0088:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A0094;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A00A0;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A00A8;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a019c
	if (!cr0.eq) goto loc_827A019C;
	// li r7,2863
	ctx.r7.s64 = 2863;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x827a018c
	goto loc_827A018C;
loc_827A00BC:
	// bl 0x82796938
	ctx.lr = 0x827A00C0;
	sub_82796938(ctx, base);
	// lwz r26,140(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-1304(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1304);
	// stw r20,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r20.u32);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A00E4;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A00F4;
	sub_82796DB8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x827a0120
	if (cr6.lt) goto loc_827A0120;
	// beq cr6,0x827a0118
	if (cr6.eq) goto loc_827A0118;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x827a0120
	if (!cr6.lt) goto loc_827A0120;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827a0124
	goto loc_827A0124;
loc_827A0118:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a0124
	goto loc_827A0124;
loc_827A0120:
	// li r11,2
	ctx.r11.s64 = 2;
loc_827A0124:
	// lwz r22,204(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// beq cr6,0x827a0140
	if (cr6.eq) goto loc_827A0140;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x827A0140;
	sub_8279ACF8(ctx, base);
loc_827A0140:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8275a1f8
	ctx.lr = 0x827A014C;
	sub_8275A1F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A0160;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A016C;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A0174;
	sub_827969E0(ctx, base);
	// lwz r23,128(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r24,132(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a019c
	if (!cr0.eq) goto loc_827A019C;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,2880
	ctx.r7.s64 = 2880;
loc_827A018C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A019C;
	sub_826CA560(ctx, base);
loc_827A019C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A01B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82772418
	ctx.lr = 0x827A01D0;
	sub_82772418(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827a024c
	if (!cr6.eq) goto loc_827A024C;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x82796938
	ctx.lr = 0x827A01E4;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A01F4;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0204;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0214;
	sub_82796DB8(ctx, base);
	// lwz r11,-1276(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1276);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A0228;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0234;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A023C;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a02cc
	if (!cr0.eq) goto loc_827A02CC;
	// li r7,2894
	ctx.r7.s64 = 2894;
	// b 0x827a02b8
	goto loc_827A02B8;
loc_827A024C:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82796938
	ctx.lr = 0x827A0254;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0264;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0274;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0284;
	sub_82796DB8(ctx, base);
	// lwz r11,-1276(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1276);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A0298;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A02A4;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A02AC;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a02cc
	if (!cr0.eq) goto loc_827A02CC;
	// li r7,2903
	ctx.r7.s64 = 2903;
loc_827A02B8:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A02CC;
	sub_826CA560(ctx, base);
loc_827A02CC:
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A02D8;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A02E8;
	sub_82796DB8(ctx, base);
	// lwz r11,-1284(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1284);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0300;
	sub_82796DB8(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82774918
	ctx.lr = 0x827A031C;
	sub_82774918(ctx, base);
	// lfs f4,376(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f4.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x827A033C;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A0348;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0354;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A035C;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a037c
	if (!cr0.eq) goto loc_827A037C;
	// li r7,2918
	ctx.r7.s64 = 2918;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A037C;
	sub_826CA560(ctx, base);
loc_827A037C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A0394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x827722d8
	ctx.lr = 0x827A03B0;
	sub_827722D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827a06b8
	if (!cr6.eq) goto loc_827A06B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x827A03D4;
	sub_827864C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x827A03F4;
	sub_827864C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82796938
	ctx.lr = 0x827A0404;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0414;
	sub_82796DB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0424;
	sub_82796DB8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x827a0450
	if (cr6.lt) goto loc_827A0450;
	// beq cr6,0x827a0448
	if (cr6.eq) goto loc_827A0448;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x827a0450
	if (!cr6.lt) goto loc_827A0450;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827a0454
	goto loc_827A0454;
loc_827A0448:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a0454
	goto loc_827A0454;
loc_827A0450:
	// li r11,2
	ctx.r11.s64 = 2;
loc_827A0454:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// beq cr6,0x827a046c
	if (cr6.eq) goto loc_827A046C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x827A046C;
	sub_8279ACF8(ctx, base);
loc_827A046C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A047C;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0488;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A0490;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a04b0
	if (!cr0.eq) goto loc_827A04B0;
	// li r7,2944
	ctx.r7.s64 = 2944;
	// lwz r5,536(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A04B0;
	sub_826CA560(ctx, base);
loc_827A04B0:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A04BC;
	sub_82796938(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A04CC;
	sub_82796DB8(ctx, base);
	// lwz r11,-1304(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1304);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A04E4;
	sub_82796DB8(ctx, base);
	// lwz r11,-1284(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1284);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A04FC;
	sub_82796DB8(ctx, base);
	// lwz r11,-1284(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1284);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0514;
	sub_82796DB8(ctx, base);
	// lwz r11,-1280(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1280);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A0528;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0534;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A053C;
	sub_827969E0(ctx, base);
	// lwz r25,272(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a0560
	if (!cr0.eq) goto loc_827A0560;
	// li r7,2957
	ctx.r7.s64 = 2957;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A0560;
	sub_826CA560(ctx, base);
loc_827A0560:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A056C;
	sub_82796938(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A057C;
	sub_82796DB8(ctx, base);
	// lwz r11,-1300(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1300);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0594;
	sub_82796DB8(ctx, base);
	// lwz r11,-1284(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1284);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A05AC;
	sub_82796DB8(ctx, base);
	// lwz r11,-1276(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1276);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A05C4;
	sub_82796DB8(ctx, base);
	// lwz r11,-1272(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1272);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A05D8;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A05E4;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A05EC;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a060c
	if (!cr0.eq) goto loc_827A060C;
	// li r7,2970
	ctx.r7.s64 = 2970;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A060C;
	sub_826CA560(ctx, base);
loc_827A060C:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A0618;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0628;
	sub_82796DB8(ctx, base);
	// lwz r11,-1300(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1300);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0640;
	sub_82796DB8(ctx, base);
	// lwz r11,-1280(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1280);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0658;
	sub_82796DB8(ctx, base);
	// lwz r11,-1284(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1284);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0670;
	sub_82796DB8(ctx, base);
	// lwz r11,-1280(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1280);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A0684;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0690;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A0698;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a06b8
	if (!cr0.eq) goto loc_827A06B8;
	// li r7,2983
	ctx.r7.s64 = 2983;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A06B8;
	sub_826CA560(ctx, base);
loc_827A06B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A06D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82772660
	ctx.lr = 0x827A06EC;
	sub_82772660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827a07dc
	if (!cr6.eq) goto loc_827A07DC;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A0700;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0710;
	sub_82796DB8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0720;
	sub_82796DB8(ctx, base);
	// lwz r11,-1284(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1284);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A0734;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0740;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A0748;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a0768
	if (!cr0.eq) goto loc_827A0768;
	// li r7,2996
	ctx.r7.s64 = 2996;
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A0768;
	sub_826CA560(ctx, base);
loc_827A0768:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A0774;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0784;
	sub_82796DB8(ctx, base);
	// lwz r11,-1292(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1292);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x827979c0
	ctx.lr = 0x827A07AC;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A07B8;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A07C4;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A07CC;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279f834
	if (!cr0.eq) goto loc_8279F834;
	// li r7,3004
	ctx.r7.s64 = 3004;
	// b 0x827a09b4
	goto loc_827A09B4;
loc_827A07DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A07F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82772788
	ctx.lr = 0x827A0810;
	sub_82772788(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827a087c
	if (!cr6.eq) goto loc_827A087C;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A0824;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0834;
	sub_82796DB8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0844;
	sub_82796DB8(ctx, base);
	// lwz r11,-1284(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1284);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A0858;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0864;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A086C;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279f834
	if (!cr0.eq) goto loc_8279F834;
	// li r7,3017
	ctx.r7.s64 = 3017;
	// b 0x827a09b4
	goto loc_827A09B4;
loc_827A087C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A0894;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x827728b0
	ctx.lr = 0x827A08B0;
	sub_827728B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827a09cc
	if (!cr6.eq) goto loc_827A09CC;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A08C4;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A08D4;
	sub_82796DB8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A08E4;
	sub_82796DB8(ctx, base);
	// lwz r11,-1284(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1284);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A08F8;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0904;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A090C;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a092c
	if (!cr0.eq) goto loc_827A092C;
	// li r7,3029
	ctx.r7.s64 = 3029;
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A092C;
	sub_826CA560(ctx, base);
loc_827A092C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A0938;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0948;
	sub_82796DB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A0968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x827979c0
	ctx.lr = 0x827A0988;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A0994;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A09A0;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A09A8;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279f834
	if (!cr0.eq) goto loc_8279F834;
	// li r7,3037
	ctx.r7.s64 = 3037;
loc_827A09B4:
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
loc_827A09B8:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A09C8;
	sub_826CA560(ctx, base);
	// b 0x8279f834
	goto loc_8279F834;
loc_827A09CC:
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,3039
	ctx.r7.s64 = 3039;
	// b 0x827a09b8
	goto loc_827A09B8;
loc_827A09D8:
	// lwz r27,180(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
loc_827A09DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A09F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82772f40
	ctx.lr = 0x827A0A10;
	sub_82772F40(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827a0c00
	if (!cr6.eq) goto loc_827A0C00;
	// li r3,30
	ctx.r3.s64 = 30;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A0A24;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r25,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r25.u8);
	// bl 0x82796db8
	ctx.lr = 0x827A0A3C;
	sub_82796DB8(ctx, base);
	// lwz r11,-1296(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1296);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0A54;
	sub_82796DB8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0A64;
	sub_82796DB8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stb r25,154(r30)
	PPC_STORE_U8(ctx.r30.u32 + 154, ctx.r25.u8);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x827979c0
	ctx.lr = 0x827A0A88;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A0A94;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0AA0;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A0AA8;
	sub_827969E0(ctx, base);
	// lwz r28,352(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a0acc
	if (!cr0.eq) goto loc_827A0ACC;
	// li r7,3201
	ctx.r7.s64 = 3201;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A0ACC;
	sub_826CA560(ctx, base);
loc_827A0ACC:
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A0AD8;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0AE8;
	sub_82796DB8(ctx, base);
	// lwz r11,-1296(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1296);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0B00;
	sub_82796DB8(ctx, base);
	// lwz r11,-1276(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1276);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0B18;
	sub_82796DB8(ctx, base);
	// lwz r11,-1276(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1276);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// bl 0x827979c0
	ctx.lr = 0x827A0B40;
	sub_827979C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A0B4C;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0B58;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A0B60;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a0b80
	if (!cr0.eq) goto loc_827A0B80;
	// li r7,3214
	ctx.r7.s64 = 3214;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A0B80;
	sub_826CA560(ctx, base);
loc_827A0B80:
	// li r3,68
	ctx.r3.s64 = 68;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A0B8C;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0B9C;
	sub_82796DB8(ctx, base);
	// lwz r11,-1296(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1296);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0BB4;
	sub_82796DB8(ctx, base);
	// lwz r11,-1276(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1276);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A0BC8;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0BD4;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A0BDC;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a0c04
	if (!cr0.eq) goto loc_827A0C04;
	// li r7,3224
	ctx.r7.s64 = 3224;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A0BFC;
	sub_826CA560(ctx, base);
	// b 0x827a0c04
	goto loc_827A0C04;
loc_827A0C00:
	// li r25,1
	ctx.r25.s64 = 1;
loc_827A0C04:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A0C1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82770e38
	ctx.lr = 0x827A0C38;
	sub_82770E38(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827a0e90
	if (!cr6.eq) goto loc_827A0E90;
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827741d8
	ctx.lr = 0x827A0C5C;
	sub_827741D8(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,340
	ctx.r5.s64 = ctx.r1.s64 + 340;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82774288
	ctx.lr = 0x827A0C78;
	sub_82774288(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82774338
	ctx.lr = 0x827A0C94;
	sub_82774338(ctx, base);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r5,r1,348
	ctx.r5.s64 = ctx.r1.s64 + 348;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827743e8
	ctx.lr = 0x827A0CB0;
	sub_827743E8(ctx, base);
	// lfs f0,324(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f12,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x827a0ce0
	if (!cr6.eq) goto loc_827A0CE0;
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x827a0ce0
	if (!cr6.eq) goto loc_827A0CE0;
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bne cr6,0x827a0ce0
	if (!cr6.eq) goto loc_827A0CE0;
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x827a282c
	if (cr6.eq) goto loc_827A282C;
loc_827A0CE0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x827a0d00
	if (!cr6.eq) goto loc_827A0D00;
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x827a0d00
	if (!cr6.eq) goto loc_827A0D00;
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bne cr6,0x827a0d00
	if (!cr6.eq) goto loc_827A0D00;
	// fcmpu cr6,f11,f30
	cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// beq cr6,0x827a282c
	if (cr6.eq) goto loc_827A282C;
loc_827A0D00:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x827A0D1C;
	sub_827864C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,109
	ctx.r3.s64 = 109;
	// bl 0x82796938
	ctx.lr = 0x827A0D2C;
	sub_82796938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0D3C;
	sub_82796DB8(ctx, base);
	// lwz r11,-1288(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1288);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x82796db8
	ctx.lr = 0x827A0D54;
	sub_82796DB8(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x827a0d68
	if (cr6.eq) goto loc_827A0D68;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x827A0D68;
	sub_8279ACF8(ctx, base);
loc_827A0D68:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8275a1f8
	ctx.lr = 0x827A0D78;
	sub_8275A1F8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r17,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x827a0da8
	if (cr6.lt) goto loc_827A0DA8;
	// beq cr6,0x827a0da0
	if (cr6.eq) goto loc_827A0DA0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x827a0da8
	if (!cr6.lt) goto loc_827A0DA8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x827a0dac
	goto loc_827A0DAC;
loc_827A0DA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a0dac
	goto loc_827A0DAC;
loc_827A0DA8:
	// li r11,2
	ctx.r11.s64 = 2;
loc_827A0DAC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r20,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r20.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A0DC0;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0DCC;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A0DD4;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a0df4
	if (!cr0.eq) goto loc_827A0DF4;
	// li r7,3283
	ctx.r7.s64 = 3283;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A0DF4;
	sub_826CA560(ctx, base);
loc_827A0DF4:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A0E00;
	sub_82796938(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0E10;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0E20;
	sub_82796DB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f4,348(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827979c0
	ctx.lr = 0x827A0E40;
	sub_827979C0(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0E50;
	sub_82796DB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A0E5C;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0E68;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A0E70;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a0e90
	if (!cr0.eq) goto loc_827A0E90;
	// li r7,3293
	ctx.r7.s64 = 3293;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A0E90;
	sub_826CA560(ctx, base);
loc_827A0E90:
	// lwz r11,-1320(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1320);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r30,-1312(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1312);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// bl 0x82796938
	ctx.lr = 0x827A0EAC;
	sub_82796938(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r25,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r25.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8279d7e0
	ctx.lr = 0x827A0EF4;
	sub_8279D7E0(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A0F04;
	sub_82796DB8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A0F10;
	sub_827771A8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A0F1C;
	sub_82799958(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A0F24;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a282c
	if (!cr0.eq) goto loc_827A282C;
	// li r7,3309
	ctx.r7.s64 = 3309;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_827A0F3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A0F44;
	sub_826CA560(ctx, base);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A0F48:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,184(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 184);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// sth r10,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r10.u16);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A0F60:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r11,r11,r10
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A0F80:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, ctx.r11.u8);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A0F8C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r11,r11,r10
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A0FAC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lbz r30,1(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A0FCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// lwz r3,512(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 512);
	// bl 0x82770eb8
	ctx.lr = 0x827A0FE8;
	sub_82770EB8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827a1030
	if (!cr6.eq) goto loc_827A1030;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A1004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r9,r11,14
	ctx.r9.s64 = ctx.r11.s64 + 14;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + ctx.r15.u32, ctx.r30.u32);
	// stwx r10,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r10.u32);
	// lwz r11,20(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r15)
	PPC_STORE_U32(ctx.r15.u32 + 20, ctx.r11.u32);
loc_827A1030:
	// rlwinm r11,r30,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// clrlwi r10,r30,27
	ctx.r10.u64 = ctx.r30.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a1064
	if (!cr0.eq) goto loc_827A1064;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82482408
	ctx.lr = 0x827A1064;
	sub_82482408(ctx, base);
loc_827A1064:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,176(r15)
	PPC_STORE_U32(ctx.r15.u32 + 176, ctx.r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8275a1f8
	ctx.lr = 0x827A1074;
	sub_8275A1F8(ctx, base);
	// stw r3,172(r15)
	PPC_STORE_U32(ctx.r15.u32 + 172, ctx.r3.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x827a10a8
	if (cr6.lt) goto loc_827A10A8;
	// beq cr6,0x827a10a0
	if (cr6.eq) goto loc_827A10A0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x827a10a8
	if (!cr6.lt) goto loc_827A10A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827a10ac
	goto loc_827A10AC;
loc_827A10A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a10ac
	goto loc_827A10AC;
loc_827A10A8:
	// li r11,2
	ctx.r11.s64 = 2;
loc_827A10AC:
	// stw r11,180(r15)
	PPC_STORE_U32(ctx.r15.u32 + 180, ctx.r11.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A10B4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r10,176(r15)
	PPC_STORE_U32(ctx.r15.u32 + 176, ctx.r10.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8275a1f8
	ctx.lr = 0x827A10CC;
	sub_8275A1F8(ctx, base);
	// stw r3,172(r15)
	PPC_STORE_U32(ctx.r15.u32 + 172, ctx.r3.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A10D4:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82796638
	ctx.lr = 0x827A10F8;
	sub_82796638(ctx, base);
	// lwz r11,184(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 184);
	// sth r3,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r3.u16);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A1104:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r7,r11,4916
	ctx.r7.s64 = ctx.r11.s64 + 4916;
	// beq 0x827a1120
	if (cr0.eq) goto loc_827A1120;
	// addi r7,r11,4868
	ctx.r7.s64 = ctx.r11.s64 + 4868;
loc_827A1120:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
loc_827A1124:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8279d468
	ctx.lr = 0x827A1138;
	sub_8279D468(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A1140:
	// li r7,3389
	ctx.r7.s64 = 3389;
loc_827A1144:
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_827A1148:
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x827a0f3c
	goto loc_827A0F3C;
loc_827A1154:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r7,r11,6708
	ctx.r7.s64 = ctx.r11.s64 + 6708;
	// bne 0x827a1120
	if (!cr0.eq) goto loc_827A1120;
	// addi r7,r11,6852
	ctx.r7.s64 = ctx.r11.s64 + 6852;
	// b 0x827a1120
	goto loc_827A1120;
loc_827A1174:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x827a11fc
	if (cr6.lt) goto loc_827A11FC;
	// beq cr6,0x827a11f0
	if (cr6.eq) goto loc_827A11F0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x827a11e4
	if (cr6.lt) goto loc_827A11E4;
	// beq cr6,0x827a11d8
	if (cr6.eq) goto loc_827A11D8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x827a11cc
	if (cr6.lt) goto loc_827A11CC;
	// beq cr6,0x827a11c0
	if (cr6.eq) goto loc_827A11C0;
	// li r7,3424
	ctx.r7.s64 = 3424;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A11BC;
	sub_826CA560(ctx, base);
	// b 0x827a1208
	goto loc_827A1208;
loc_827A11C0:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// b 0x827a1204
	goto loc_827A1204;
loc_827A11CC:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1596
	ctx.r11.s64 = ctx.r11.s64 + 1596;
	// b 0x827a1204
	goto loc_827A1204;
loc_827A11D8:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1540
	ctx.r11.s64 = ctx.r11.s64 + 1540;
	// b 0x827a1204
	goto loc_827A1204;
loc_827A11E4:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1512
	ctx.r11.s64 = ctx.r11.s64 + 1512;
	// b 0x827a1204
	goto loc_827A1204;
loc_827A11F0:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1456
	ctx.r11.s64 = ctx.r11.s64 + 1456;
	// b 0x827a1204
	goto loc_827A1204;
loc_827A11FC:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1484
	ctx.r11.s64 = ctx.r11.s64 + 1484;
loc_827A1204:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
loc_827A1208:
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// b 0x827a1120
	goto loc_827A1120;
loc_827A1210:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x827a1298
	if (cr6.lt) goto loc_827A1298;
	// beq cr6,0x827a128c
	if (cr6.eq) goto loc_827A128C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x827a1280
	if (cr6.lt) goto loc_827A1280;
	// beq cr6,0x827a1274
	if (cr6.eq) goto loc_827A1274;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x827a1268
	if (cr6.lt) goto loc_827A1268;
	// beq cr6,0x827a125c
	if (cr6.eq) goto loc_827A125C;
	// li r7,3455
	ctx.r7.s64 = 3455;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A1258;
	sub_826CA560(ctx, base);
	// b 0x827a12a4
	goto loc_827A12A4;
loc_827A125C:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1408
	ctx.r11.s64 = ctx.r11.s64 + 1408;
	// b 0x827a12a0
	goto loc_827A12A0;
loc_827A1268:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1372
	ctx.r11.s64 = ctx.r11.s64 + 1372;
	// b 0x827a12a0
	goto loc_827A12A0;
loc_827A1274:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1336
	ctx.r11.s64 = ctx.r11.s64 + 1336;
	// b 0x827a12a0
	goto loc_827A12A0;
loc_827A1280:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1300
	ctx.r11.s64 = ctx.r11.s64 + 1300;
	// b 0x827a12a0
	goto loc_827A12A0;
loc_827A128C:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1264
	ctx.r11.s64 = ctx.r11.s64 + 1264;
	// b 0x827a12a0
	goto loc_827A12A0;
loc_827A1298:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1228
	ctx.r11.s64 = ctx.r11.s64 + 1228;
loc_827A12A0:
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
loc_827A12A4:
	// lwz r7,220(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// b 0x827a1120
	goto loc_827A1120;
loc_827A12AC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r29,r11,10,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x827a282c
	if (cr0.eq) goto loc_827A282C;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A12C8;
	sub_82796938(ctx, base);
	// lwz r27,564(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x827a12f0
	if (!cr6.eq) goto loc_827A12F0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// stw r10,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// stw r27,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r27.u32);
loc_827A12F0:
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r27,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r27.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r26.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8279b260
	ctx.lr = 0x827A1340;
	sub_8279B260(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x827a13ac
	if (cr6.eq) goto loc_827A13AC;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x827a1398
	if (cr6.eq) goto loc_827A1398;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x827a1374
	if (cr6.eq) goto loc_827A1374;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x827a13d4
	if (!cr6.eq) goto loc_827A13D4;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x827a1384
	goto loc_827A1384;
loc_827A1374:
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
loc_827A1384:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x827979c0
	ctx.lr = 0x827A1394;
	sub_827979C0(ctx, base);
	// b 0x827a13d4
	goto loc_827A13D4;
loc_827A1398:
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x827a13bc
	goto loc_827A13BC;
loc_827A13AC:
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
loc_827A13BC:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827979c0
	ctx.lr = 0x827A13CC;
	sub_827979C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,154(r30)
	PPC_STORE_U8(ctx.r30.u32 + 154, ctx.r11.u8);
loc_827A13D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A13E0;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A13EC;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A13F4;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a1414
	if (!cr0.eq) goto loc_827A1414;
	// li r7,3516
	ctx.r7.s64 = 3516;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,512(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A1414;
	sub_826CA560(ctx, base);
loc_827A1414:
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// addi r11,r28,14
	ctx.r11.s64 = ctx.r28.s64 + 14;
	// addi r10,r28,20
	ctx.r10.s64 = ctx.r28.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r27,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r27.u32);
	// stwx r26,r10,r15
	PPC_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r26.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A1444:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// bne cr6,0x827a1468
	if (!cr6.eq) goto loc_827A1468;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x827a1120
	goto loc_827A1120;
loc_827A1468:
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x827a1480
	if (!cr6.eq) goto loc_827A1480;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x827a1484
	goto loc_827A1484;
loc_827A1480:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_827A1484:
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x827a1120
	goto loc_827A1120;
loc_827A148C:
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r11,r11,-63
	ctx.r11.s64 = ctx.r11.s64 + -63;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x827a1120
	goto loc_827A1120;
loc_827A14B8:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82796938
	ctx.lr = 0x827A14D8;
	sub_82796938(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// b 0x827a282c
	goto loc_827A282C;
loc_827A14E0:
	// lbz r8,198(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 198);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// lwz r9,240(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stb r8,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r8.u8);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r9,296(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// bl 0x8279d7e0
	ctx.lr = 0x827A152C;
	sub_8279D7E0(ctx, base);
loc_827A152C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A1538:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// stb r10,158(r11)
	PPC_STORE_U8(ctx.r11.u32 + 158, ctx.r10.u8);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A154C:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lbz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 152);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 152, ctx.r10.u8);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A1568:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,164(r15)
	PPC_STORE_U8(ctx.r15.u32 + 164, ctx.r11.u8);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A1574:
	// addi r11,r11,-79
	ctx.r11.s64 = ctx.r11.s64 + -79;
	// addi r8,r1,560
	ctx.r8.s64 = ctx.r1.s64 + 560;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a15a0
	if (!cr6.eq) goto loc_827A15A0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_827A15A0:
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r30,14
	ctx.r11.s64 = ctx.r30.s64 + 14;
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwx r10,r11,r15
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + ctx.r15.u32, ctx.r11.u32);
	// bne cr6,0x827a15f0
	if (!cr6.eq) goto loc_827A15F0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8279d4e0
	ctx.lr = 0x827A15EC;
	sub_8279D4E0(ctx, base);
	// b 0x827a152c
	goto loc_827A152C;
loc_827A15F0:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x8279b260
	ctx.lr = 0x827A1604;
	sub_8279B260(ctx, base);
	// b 0x827a152c
	goto loc_827A152C;
loc_827A1608:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r8,31
	ctx.r8.s64 = 31;
	// addi r10,r11,14
	ctx.r10.s64 = ctx.r11.s64 + 14;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stwx r8,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + ctx.r15.u32, ctx.r8.u32);
	// stwx r11,r10,r15
	PPC_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r11.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A1638:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f1,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lfsx f3,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f4,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x827979c0
	ctx.lr = 0x827A167C;
	sub_827979C0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A168C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x827979c0
	ctx.lr = 0x827A16C4;
	sub_827979C0(ctx, base);
	// b 0x827a152c
	goto loc_827A152C;
loc_827A16C8:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r7,r11,-548
	ctx.r7.s64 = ctx.r11.s64 + -548;
	// b 0x827a1120
	goto loc_827A1120;
loc_827A16D4:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r7,r11,5092
	ctx.r7.s64 = ctx.r11.s64 + 5092;
	// b 0x827a1120
	goto loc_827A1120;
loc_827A16E0:
	// lwz r28,164(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a1720
	if (!cr0.eq) goto loc_827A1720;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a1718
	if (!cr6.lt) goto loc_827A1718;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a171c
	goto loc_827A171C;
loc_827A1718:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A171C:
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827A1720:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x827768b8
	ctx.lr = 0x827A1738;
	sub_827768B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r6,r1,532
	ctx.r6.s64 = ctx.r1.s64 + 532;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r7,r10,-21808
	ctx.r7.s64 = ctx.r10.s64 + -21808;
	// lwz r3,512(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 512);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x827733c0
	ctx.lr = 0x827A1764;
	sub_827733C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x827a1784
	if (cr6.eq) goto loc_827A1784;
	// li r7,3713
	ctx.r7.s64 = 3713;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,268(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A1784;
	sub_826CA560(ctx, base);
loc_827A1784:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,164
	ctx.r4.s64 = 164;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A1798;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x827a17c0
	if (cr0.eq) goto loc_827A17C0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,532(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8279a898
	ctx.lr = 0x827A17B8;
	sub_8279A898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x827a17c4
	goto loc_827A17C4;
loc_827A17C0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_827A17C4:
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A17D8;
	sub_827771A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A17E4;
	sub_82794520(ctx, base);
	// addic. r28,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r28.s64 = ctx.r29.s64 + 1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// bge 0x827a180c
	if (!cr0.lt) goto loc_827A180C;
	// li r7,3722
	ctx.r7.s64 = 3722;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A180C;
	sub_826CA560(ctx, base);
loc_827A180C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827a3d5c
	if (cr6.gt) goto loc_827A3D5C;
	// lwz r29,160(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82776858
	ctx.lr = 0x827A1834;
	sub_82776858(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A1840;
	sub_8279A318(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r29,428(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A1854;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x827a1874
	if (cr0.eq) goto loc_827A1874;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82799b78
	ctx.lr = 0x827A186C;
	sub_82799B78(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// b 0x827a1878
	goto loc_827A1878;
loc_827A1874:
	// li r14,0
	ctx.r14.s64 = 0;
loc_827A1878:
	// stw r28,52(r14)
	PPC_STORE_U32(ctx.r14.u32 + 52, ctx.r28.u32);
loc_827A187C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x82776858
	ctx.lr = 0x827A188C;
	sub_82776858(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A1898;
	sub_8279A318(ctx, base);
loc_827A1898:
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r14.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A18A0:
	// lwz r26,164(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a18c4
	if (!cr6.lt) goto loc_827A18C4;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a18c8
	goto loc_827A18C8;
loc_827A18C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A18C8:
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x827a18ec
	if (!cr0.eq) goto loc_827A18EC;
	// li r7,3742
	ctx.r7.s64 = 3742;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,464(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A18EC;
	sub_826CA560(ctx, base);
loc_827A18EC:
	// lwz r27,152(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82776858
	ctx.lr = 0x827A1904;
	sub_82776858(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A1918;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a1948
	if (!cr0.eq) goto loc_827A1948;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A1934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a1948
	if (!cr0.eq) goto loc_827A1948;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A1948;
	sub_8279A318(ctx, base);
loc_827A1948:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A195C;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x827a197c
	if (cr0.eq) goto loc_827A197C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82799b78
	ctx.lr = 0x827A1974;
	sub_82799B78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x827a1980
	goto loc_827A1980;
loc_827A197C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827A1980:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A198C;
	sub_8279A318(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82776858
	ctx.lr = 0x827A199C;
	sub_82776858(ctx, base);
	// lwz r30,156(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A19AC;
	sub_8279A318(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82776858
	ctx.lr = 0x827A19BC;
	sub_82776858(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r28,428(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A19D0;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x827a19f0
	if (cr0.eq) goto loc_827A19F0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82799b78
	ctx.lr = 0x827A19E8;
	sub_82799B78(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// b 0x827a19f4
	goto loc_827A19F4;
loc_827A19F0:
	// li r14,0
	ctx.r14.s64 = 0;
loc_827A19F4:
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82776858
	ctx.lr = 0x827A1A04;
	sub_82776858(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A1A10;
	sub_8279A318(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r14.u32);
	// bl 0x82788238
	ctx.lr = 0x827A1A1C;
	sub_82788238(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// bge 0x827a1a44
	if (!cr0.lt) goto loc_827A1A44;
	// li r7,3772
	ctx.r7.s64 = 3772;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A1A44;
	sub_826CA560(ctx, base);
loc_827A1A44:
	// stw r28,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r28.u32);
	// stw r28,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r28.u32);
	// stw r28,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r28.u32);
	// stw r28,52(r14)
	PPC_STORE_U32(ctx.r14.u32 + 52, ctx.r28.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A1A58:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r27,132(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a1a8c
	if (!cr0.eq) goto loc_827A1A8C;
	// li r7,3787
	ctx.r7.s64 = 3787;
	// lwz r5,520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A1A8C;
	sub_826CA560(ctx, base);
loc_827A1A8C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a1ab8
	if (!cr0.eq) goto loc_827A1AB8;
	// li r7,3788
	ctx.r7.s64 = 3788;
	// lwz r5,368(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A1AB8;
	sub_826CA560(ctx, base);
loc_827A1AB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x8279abc8
	ctx.lr = 0x827A1AC4;
	sub_8279ABC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A1ADC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827768b8
	ctx.lr = 0x827A1AF0;
	sub_827768B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r6,r1,372
	ctx.r6.s64 = ctx.r1.s64 + 372;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r7,r10,-21808
	ctx.r7.s64 = ctx.r10.s64 + -21808;
	// lwz r3,512(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 512);
	// extsh r5,r29
	ctx.r5.s64 = ctx.r29.s16;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x827733d8
	ctx.lr = 0x827A1B1C;
	sub_827733D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x827a1b3c
	if (cr6.eq) goto loc_827A1B3C;
	// li r7,3805
	ctx.r7.s64 = 3805;
	// lwz r5,268(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A1B3C;
	sub_826CA560(ctx, base);
loc_827A1B3C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r11,r11,3,23,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1F8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r9.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A1B6C;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,120(r14)
	PPC_STORE_U32(ctx.r14.u32 + 120, ctx.r30.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A1B7C;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A1B84;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a1ba4
	if (!cr0.eq) goto loc_827A1BA4;
	// li r7,3812
	ctx.r7.s64 = 3812;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A1BA4;
	sub_826CA560(ctx, base);
loc_827A1BA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82776bf8
	ctx.lr = 0x827A1BB0;
	sub_82776BF8(ctx, base);
	// lwz r10,940(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// li r14,0
	ctx.r14.s64 = 0;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r14,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r14.u32);
	// stw r14,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r14.u32);
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// bl 0x8279b7a8
	ctx.lr = 0x827A1BE0;
	sub_8279B7A8(ctx, base);
	// bl 0x8279b138
	ctx.lr = 0x827A1BE4;
	sub_8279B138(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A1BF8;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x827a1c14
	if (cr0.eq) goto loc_827A1C14;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82799b78
	ctx.lr = 0x827A1C10;
	sub_82799B78(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
loc_827A1C14:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,52(r14)
	PPC_STORE_U32(ctx.r14.u32 + 52, ctx.r11.u32);
	// b 0x827a187c
	goto loc_827A187C;
loc_827A1C24:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A1C38;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x827a1c58
	if (cr0.eq) goto loc_827A1C58;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82799b78
	ctx.lr = 0x827A1C50;
	sub_82799B78(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// b 0x827a1c5c
	goto loc_827A1C5C;
loc_827A1C58:
	// li r14,0
	ctx.r14.s64 = 0;
loc_827A1C5C:
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82776858
	ctx.lr = 0x827A1C70;
	sub_82776858(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A1C7C;
	sub_8279A318(ctx, base);
	// lwz r10,940(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r11.u32);
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r11.u32);
	// bl 0x8279b7a8
	ctx.lr = 0x827A1CAC;
	sub_8279B7A8(ctx, base);
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// bl 0x8279b138
	ctx.lr = 0x827A1CB4;
	sub_8279B138(ctx, base);
	// b 0x827a1898
	goto loc_827A1898;
loc_827A1CB8:
	// lwz r22,212(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a1d04
	if (!cr0.eq) goto loc_827A1D04;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a1cf8
	if (!cr6.lt) goto loc_827A1CF8;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a1cfc
	goto loc_827A1CFC;
loc_827A1CF8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_827A1CFC:
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r23,140(r25)
	PPC_STORE_U8(ctx.r25.u32 + 140, ctx.r23.u8);
loc_827A1D04:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x827a1fcc
	if (cr6.eq) goto loc_827A1FCC;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// beq cr6,0x827a1ed4
	if (cr6.eq) goto loc_827A1ED4;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x827a2068
	if (!cr6.eq) goto loc_827A2068;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r24,184(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r29,r11,16,26,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// rlwinm r27,r10,16,26,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F;
	// extsh r26,r10
	ctx.r26.s64 = ctx.r10.s16;
	// blt cr6,0x827a1dd4
	if (cr6.lt) goto loc_827A1DD4;
	// beq cr6,0x827a1dcc
	if (cr6.eq) goto loc_827A1DCC;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x827a1dc4
	if (cr6.lt) goto loc_827A1DC4;
	// beq cr6,0x827a1dbc
	if (cr6.eq) goto loc_827A1DBC;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x827a1db4
	if (cr6.lt) goto loc_827A1DB4;
	// beq cr6,0x827a1da8
	if (cr6.eq) goto loc_827A1DA8;
	// li r7,3905
	ctx.r7.s64 = 3905;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A1DA4;
	sub_826CA560(ctx, base);
	// b 0x827a1ddc
	goto loc_827A1DDC;
loc_827A1DA8:
	// li r11,40
	ctx.r11.s64 = 40;
loc_827A1DAC:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x827a1dd8
	goto loc_827A1DD8;
loc_827A1DB4:
	// li r11,41
	ctx.r11.s64 = 41;
	// b 0x827a1dac
	goto loc_827A1DAC;
loc_827A1DBC:
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x827a1dd8
	goto loc_827A1DD8;
loc_827A1DC4:
	// li r11,41
	ctx.r11.s64 = 41;
	// b 0x827a1dd8
	goto loc_827A1DD8;
loc_827A1DCC:
	// li r11,39
	ctx.r11.s64 = 39;
	// b 0x827a1dd8
	goto loc_827A1DD8;
loc_827A1DD4:
	// li r11,42
	ctx.r11.s64 = 42;
loc_827A1DD8:
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
loc_827A1DDC:
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A1DE8;
	sub_82796938(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r6,14
	ctx.r10.s64 = ctx.r6.s64 + 14;
	// addi r8,r6,20
	ctx.r8.s64 = ctx.r6.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r27,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r29,14
	ctx.r5.s64 = ctx.r29.s64 + 14;
	// addi r27,r29,20
	ctx.r27.s64 = ctx.r29.s64 + 20;
	// stwx r28,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r28.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r26,r5,r30
	PPC_STORE_U32(ctx.r5.u32 + ctx.r30.u32, ctx.r26.u32);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x8279b260
	ctx.lr = 0x827A1E70;
	sub_8279B260(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279b260
	ctx.lr = 0x827A1E88;
	sub_8279B260(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// stw r29,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r29.u32);
	// stw r23,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r23.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A1EAC;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A1EB8;
	sub_82799958(ctx, base);
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A1EC4;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// stw r23,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r23.u32);
	// b 0x827a1ff8
	goto loc_827A1FF8;
loc_827A1ED4:
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827768b8
	ctx.lr = 0x827A1EE8;
	sub_827768B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r6,r1,388
	ctx.r6.s64 = ctx.r1.s64 + 388;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r7,r10,-21808
	ctx.r7.s64 = ctx.r10.s64 + -21808;
	// lwz r3,512(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 512);
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x827733d8
	ctx.lr = 0x827A1F14;
	sub_827733D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x827a1f34
	if (cr6.eq) goto loc_827A1F34;
	// li r7,3969
	ctx.r7.s64 = 3969;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,268(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A1F34;
	sub_826CA560(ctx, base);
loc_827A1F34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi. r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827a1f5c
	if (cr0.eq) goto loc_827A1F5C;
	// li r7,3972
	ctx.r7.s64 = 3972;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A1F5C;
	sub_826CA560(ctx, base);
loc_827A1F5C:
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A1F68;
	sub_82796938(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// li r4,164
	ctx.r4.s64 = 164;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// stw r10,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,428(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A1FA4;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x827a2040
	if (cr0.eq) goto loc_827A2040;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8279aac0
	ctx.lr = 0x827A1FC8;
	sub_8279AAC0(ctx, base);
	// b 0x827a2038
	goto loc_827A2038;
loc_827A1FCC:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82796938
	ctx.lr = 0x827A1FD8;
	sub_82796938(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x827979c0
	ctx.lr = 0x827A1FF8;
	sub_827979C0(ctx, base);
loc_827A1FF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,164
	ctx.r4.s64 = 164;
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,428(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A2014;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x827a2040
	if (cr0.eq) goto loc_827A2040;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8279a9c8
	ctx.lr = 0x827A2038;
	sub_8279A9C8(ctx, base);
loc_827A2038:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x827a2044
	goto loc_827A2044;
loc_827A2040:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_827A2044:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// bl 0x827771a8
	ctx.lr = 0x827A2058;
	sub_827771A8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A2064;
	sub_82794520(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_827A2068:
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82776858
	ctx.lr = 0x827A207C;
	sub_82776858(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A2088;
	sub_8279A318(ctx, base);
	// lwz r14,144(r29)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_827A2090:
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82776858
	ctx.lr = 0x827A209C;
	sub_82776858(ctx, base);
	// b 0x827a1898
	goto loc_827A1898;
loc_827A20A0:
	// lwz r30,212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a20cc
	if (cr0.eq) goto loc_827A20CC;
	// li r7,4002
	ctx.r7.s64 = 4002;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A20CC;
	sub_826CA560(ctx, base);
loc_827A20CC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a20ec
	if (!cr6.lt) goto loc_827A20EC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a20f0
	goto loc_827A20F0;
loc_827A20EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A20F0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,428(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A2108;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x827a2128
	if (cr0.eq) goto loc_827A2128;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82799b78
	ctx.lr = 0x827A2120;
	sub_82799B78(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// b 0x827a212c
	goto loc_827A212C;
loc_827A2128:
	// li r14,0
	ctx.r14.s64 = 0;
loc_827A212C:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,52(r14)
	PPC_STORE_U32(ctx.r14.u32 + 52, ctx.r11.u32);
	// stw r14,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r14.u32);
	// bl 0x8279a318
	ctx.lr = 0x827A2144;
	sub_8279A318(ctx, base);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x827a2090
	goto loc_827A2090;
loc_827A214C:
	// lwz r25,212(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a2178
	if (cr0.eq) goto loc_827A2178;
	// li r7,4015
	ctx.r7.s64 = 4015;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A2178;
	sub_826CA560(ctx, base);
loc_827A2178:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a2198
	if (!cr6.lt) goto loc_827A2198;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a219c
	goto loc_827A219C;
loc_827A2198:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A219C:
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,188(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r26,160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r28,152(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r27,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r27.u32);
	// bl 0x82776858
	ctx.lr = 0x827A21C0;
	sub_82776858(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82799f98
	ctx.lr = 0x827A21C8;
	sub_82799F98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r27.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A21E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a2210
	if (!cr0.eq) goto loc_827A2210;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A21FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a2210
	if (!cr0.eq) goto loc_827A2210;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A2210;
	sub_8279A318(ctx, base);
loc_827A2210:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279a090
	ctx.lr = 0x827A2218;
	sub_8279A090(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r27,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r27.u32);
	// bne cr6,0x827a2284
	if (!cr6.eq) goto loc_827A2284;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A223C;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x827a225c
	if (cr0.eq) goto loc_827A225C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82799b78
	ctx.lr = 0x827A2254;
	sub_82799B78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x827a2260
	goto loc_827A2260;
loc_827A225C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_827A2260:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r30.u32);
	// bl 0x8279a318
	ctx.lr = 0x827A2274;
	sub_8279A318(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82776858
	ctx.lr = 0x827A2284;
	sub_82776858(ctx, base);
loc_827A2284:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A2298;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a22c8
	if (!cr0.eq) goto loc_827A22C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A22B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a22c8
	if (!cr0.eq) goto loc_827A22C8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A22C8;
	sub_8279A318(ctx, base);
loc_827A22C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A22DC;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x827a22fc
	if (cr0.eq) goto loc_827A22FC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82799b78
	ctx.lr = 0x827A22F4;
	sub_82799B78(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// b 0x827a2300
	goto loc_827A2300;
loc_827A22FC:
	// li r14,0
	ctx.r14.s64 = 0;
loc_827A2300:
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// stw r27,52(r14)
	PPC_STORE_U32(ctx.r14.u32 + 52, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82776858
	ctx.lr = 0x827A2314;
	sub_82776858(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A2320;
	sub_8279A318(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r14.u32);
	// bl 0x82788238
	ctx.lr = 0x827A232C;
	sub_82788238(ctx, base);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A2330:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a282c
	if (!cr0.eq) goto loc_827A282C;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a2368
	if (!cr6.lt) goto loc_827A2368;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a236c
	goto loc_827A236C;
loc_827A2368:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A236C:
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a243c
	if (!cr0.eq) goto loc_827A243C;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a23a4
	if (!cr6.lt) goto loc_827A23A4;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a23a8
	goto loc_827A23A8;
loc_827A23A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A23A8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,188(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x827a243c
	if (cr6.lt) goto loc_827A243C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r29,156(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A23D4;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x827a23f8
	if (cr0.eq) goto loc_827A23F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8279a750
	ctx.lr = 0x827A23F0;
	sub_8279A750(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x827a23fc
	goto loc_827A23FC;
loc_827A23F8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_827A23FC:
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r26.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82776858
	ctx.lr = 0x827A2414;
	sub_82776858(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A2420;
	sub_8279A318(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A242C;
	sub_8279A318(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r11,140(r28)
	PPC_STORE_U8(ctx.r28.u32 + 140, ctx.r11.u8);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A243C:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r7,r11,-24
	ctx.r7.s64 = ctx.r11.s64 + -24;
loc_827A2444:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x827a1124
	goto loc_827A1124;
loc_827A244C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a282c
	if (!cr0.eq) goto loc_827A282C;
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a2558
	if (!cr0.eq) goto loc_827A2558;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a2494
	if (!cr6.lt) goto loc_827A2494;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a2498
	goto loc_827A2498;
loc_827A2494:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A2498:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,188(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x827a2558
	if (cr6.lt) goto loc_827A2558;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a24d0
	if (!cr6.lt) goto loc_827A24D0;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a24d4
	goto loc_827A24D4;
loc_827A24D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A24D4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,428(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// lwz r29,152(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A24F0;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x827a2514
	if (cr0.eq) goto loc_827A2514;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8279a7b0
	ctx.lr = 0x827A250C;
	sub_8279A7B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x827a2518
	goto loc_827A2518;
loc_827A2514:
	// li r30,0
	ctx.r30.s64 = 0;
loc_827A2518:
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r26.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82776858
	ctx.lr = 0x827A2530;
	sub_82776858(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A253C;
	sub_8279A318(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a318
	ctx.lr = 0x827A2548;
	sub_8279A318(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r11,141(r28)
	PPC_STORE_U8(ctx.r28.u32 + 141, ctx.r11.u8);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A2558:
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x827a2444
	goto loc_827A2444;
loc_827A2560:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A2574;
	sub_82759FF0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,87
	cr6.compare<int32_t>(ctx.r11.s32, 87, ctx.xer);
	// beq cr6,0x827a268c
	if (cr6.eq) goto loc_827A268C;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x827a2654
	if (cr6.eq) goto loc_827A2654;
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x827a261c
	if (cr6.eq) goto loc_827A261C;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x827a25d8
	if (cr6.eq) goto loc_827A25D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4159
	ctx.r7.s64 = 4159;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x826ca560
	ctx.lr = 0x827A25D4;
	sub_826CA560(ctx, base);
	// b 0x827a269c
	goto loc_827A269C;
loc_827A25D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A25F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82772c18
	ctx.lr = 0x827A260C;
	sub_82772C18(ctx, base);
loc_827A260C:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x827a2698
	goto loc_827A2698;
loc_827A261C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A2634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x82772af0
	ctx.lr = 0x827A2650;
	sub_82772AF0(ctx, base);
	// b 0x827a260c
	goto loc_827A260C;
loc_827A2654:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A266C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-21808
	ctx.r6.s64 = ctx.r11.s64 + -21808;
	// bl 0x827729d0
	ctx.lr = 0x827A2688;
	sub_827729D0(ctx, base);
	// b 0x827a260c
	goto loc_827A260C;
loc_827A268C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_827A2698:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_827A269C:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A26A8;
	sub_82794520(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A26B0:
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a26d4
	if (!cr6.lt) goto loc_827A26D4;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x827a26d8
	goto loc_827A26D8;
loc_827A26D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A26D8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827a282c
	if (!cr0.eq) goto loc_827A282C;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827A26F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,51
	cr6.compare<uint32_t>(ctx.r9.u32, 51, ctx.xer);
	// bne cr6,0x827a2704
	if (!cr6.eq) goto loc_827A2704;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_827A2704:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,37
	cr6.compare<uint32_t>(ctx.r9.u32, 37, ctx.xer);
	// bne cr6,0x827a26f0
	if (!cr6.eq) goto loc_827A26F0;
loc_827A2718:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A2724:
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a2748
	if (!cr6.lt) goto loc_827A2748;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x827a274c
	goto loc_827A274C;
loc_827A2748:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A274C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a282c
	if (cr0.eq) goto loc_827A282C;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827A2764:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,51
	cr6.compare<uint32_t>(ctx.r9.u32, 51, ctx.xer);
	// bne cr6,0x827a2778
	if (!cr6.eq) goto loc_827A2778;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_827A2778:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,39
	cr6.compare<uint32_t>(ctx.r9.u32, 39, ctx.xer);
	// bne cr6,0x827a2764
	if (!cr6.eq) goto loc_827A2764;
	// b 0x827a2718
	goto loc_827A2718;
loc_827A2790:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82788238
	ctx.lr = 0x827A2798;
	sub_82788238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827a282c
	if (cr0.eq) goto loc_827A282C;
loc_827A27A0:
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x827A27AC;
	sub_8275A120(ctx, base);
	// b 0x827a282c
	goto loc_827A282C;
loc_827A27B0:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a2824
	if (!cr0.eq) goto loc_827A2824;
	// bl 0x82788238
	ctx.lr = 0x827A27C8;
	sub_82788238(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a27d8
	if (cr0.eq) goto loc_827A27D8;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
loc_827A27D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x827a27a0
	goto loc_827A27A0;
loc_827A27EC:
	// lbz r11,197(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 197);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827a282c
	if (!cr0.eq) goto loc_827A282C;
	// lwz r5,396(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r7,4227
	ctx.r7.s64 = 4227;
	// b 0x827a1148
	goto loc_827A1148;
loc_827A2804:
	// li r7,4233
	ctx.r7.s64 = 4233;
	// b 0x827a1144
	goto loc_827A1144;
loc_827A280C:
	// li r7,4238
	ctx.r7.s64 = 4238;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A2824;
	sub_826CA560(ctx, base);
loc_827A2824:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r11.u8);
loc_827A282C:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x827a28b4
	if (cr6.eq) goto loc_827A28B4;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A2848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827a28b4
	if (!cr6.eq) goto loc_827A28B4;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A2864;
	sub_827771A8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A2870;
	sub_82799958(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A2878;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a2898
	if (!cr0.eq) goto loc_827A2898;
	// li r7,4253
	ctx.r7.s64 = 4253;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A2898;
	sub_826CA560(ctx, base);
loc_827A2898:
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r15,0
	ctx.r15.s64 = 0;
	// lwz r11,-1320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1320);
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r15.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r11,-1312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1312);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
loc_827A28B4:
	// lbz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827a28d0
	if (!cr0.eq) goto loc_827A28D0;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x8279e52c
	goto loc_8279E52C;
loc_827A28D0:
	// lwz r30,632(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x827a292c
	goto loc_827A292C;
loc_827A28DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82794260
	ctx.lr = 0x827A28E4;
	sub_82794260(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A28F0;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A28FC;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A2904;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a2924
	if (!cr0.eq) goto loc_827A2924;
	// li r7,4269
	ctx.r7.s64 = 4269;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A2924;
	sub_826CA560(ctx, base);
loc_827A2924:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_827A292C:
	// cmplwi r29,0
	cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x827a28dc
	if (!cr0.eq) goto loc_827A28DC;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827a2948
	if (cr6.eq) goto loc_827A2948;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8279b208
	ctx.lr = 0x827A2948;
	sub_8279B208(ctx, base);
loc_827A2948:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827a3c34
	if (cr6.eq) goto loc_827A3C34;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8279b208
	ctx.lr = 0x827A2960;
	sub_8279B208(ctx, base);
	// b 0x827a3c34
	goto loc_827A3C34;
loc_827A2964:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279abc8
	ctx.lr = 0x827A2970;
	sub_8279ABC8(ctx, base);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// bl 0x8279ad70
	ctx.lr = 0x827A2988;
	sub_8279AD70(ctx, base);
	// lwz r17,128(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r20,132(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// beq cr6,0x827a29b0
	if (cr6.eq) goto loc_827A29B0;
	// li r7,1955
	ctx.r7.s64 = 1955;
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A29B0;
	sub_826CA560(ctx, base);
loc_827A29B0:
	// lwz r29,20(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r21,164(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827a2a00
	if (cr0.eq) goto loc_827A2A00;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279cae0
	ctx.lr = 0x827A29F4;
	sub_8279CAE0(ctx, base);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A2A00:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827a2a14
	if (cr0.eq) goto loc_827A2A14;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A2A14:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// rlwinm r10,r11,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// lwz r23,140(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// lwz r5,-1312(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + -1312);
	// bl 0x8279d4e0
	ctx.lr = 0x827A2A58;
	sub_8279D4E0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8279adf0
	ctx.lr = 0x827A2A60;
	sub_8279ADF0(ctx, base);
	// addi r25,r3,1
	ctx.r25.s64 = ctx.r3.s64 + 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x827a2bb4
	if (!cr6.gt) goto loc_827A2BB4;
loc_827A2A70:
	// lwz r11,-1320(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -1320);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r28,20(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r11,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// rlwinm r8,r11,9,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// mr. r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x827a2aa4
	if (cr0.eq) goto loc_827A2AA4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
loc_827A2AA4:
	// clrlwi. r26,r8,24
	ctx.r26.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x827a2ab8
	if (cr0.eq) goto loc_827A2AB8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stwx r10,r11,r22
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r10.u32);
loc_827A2AB8:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// bne cr6,0x827a2ad4
	if (!cr6.eq) goto loc_827A2AD4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827a2aec
	if (cr6.eq) goto loc_827A2AEC;
loc_827A2AD4:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279b8c0
	ctx.lr = 0x827A2AEC;
	sub_8279B8C0(ctx, base);
loc_827A2AEC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827a2b00
	if (cr6.eq) goto loc_827A2B00;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A2B00:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827a2b14
	if (cr6.eq) goto loc_827A2B14;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A2B14:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm. r8,r11,9,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r11,r11,16,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F;
	// beq 0x827a2b3c
	if (cr0.eq) goto loc_827A2B3C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r29,50
	ctx.r8.s64 = ctx.r29.s64 + 50;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stwx r10,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u32);
loc_827A2B3C:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r29,14
	ctx.r8.s64 = ctx.r29.s64 + 14;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 + 20;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r9.u32);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a2b90
	if (cr0.eq) goto loc_827A2B90;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// addi r11,r23,-1272
	ctx.r11.s64 = ctx.r23.s64 + -1272;
	// beq cr6,0x827a2b88
	if (cr6.eq) goto loc_827A2B88;
	// addi r11,r23,-1284
	ctx.r11.s64 = ctx.r23.s64 + -1284;
loc_827A2B88:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
loc_827A2B90:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279b260
	ctx.lr = 0x827A2BA8;
	sub_8279B260(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x827a2a70
	if (cr6.lt) goto loc_827A2A70;
loc_827A2BB4:
	// lwz r29,664(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 664);
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x827a2c10
	goto loc_827A2C10;
loc_827A2BC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82794260
	ctx.lr = 0x827A2BC8;
	sub_82794260(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A2BD4;
	sub_827771A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A2BE0;
	sub_82799958(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A2BE8;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a2c08
	if (!cr0.eq) goto loc_827A2C08;
	// li r7,2035
	ctx.r7.s64 = 2035;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A2C08;
	sub_826CA560(ctx, base);
loc_827A2C08:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
loc_827A2C10:
	// cmplwi r28,0
	cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x827a2bc0
	if (!cr0.eq) goto loc_827A2BC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A2C24;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A2C30;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A2C38;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a2c58
	if (!cr0.eq) goto loc_827A2C58;
	// li r7,2040
	ctx.r7.s64 = 2040;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A2C58;
	sub_826CA560(ctx, base);
loc_827A2C58:
	// lwz r30,632(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x827a2cb4
	goto loc_827A2CB4;
loc_827A2C64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82794260
	ctx.lr = 0x827A2C6C;
	sub_82794260(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A2C78;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A2C84;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A2C8C;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a2cac
	if (!cr0.eq) goto loc_827A2CAC;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A2CAC;
	sub_826CA560(ctx, base);
loc_827A2CAC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_827A2CB4:
	// cmplwi r29,0
	cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x827a2c64
	if (!cr0.eq) goto loc_827A2C64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8279ae60
	ctx.lr = 0x827A2CC4;
	sub_8279AE60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827a3c34
	if (cr0.eq) goto loc_827A3C34;
	// lwz r5,412(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// li r7,2051
	ctx.r7.s64 = 2051;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x827a37a8
	goto loc_827A37A8;
loc_827A2CE0:
	// li r7,1936
	ctx.r7.s64 = 1936;
	// b 0x827a379c
	goto loc_827A379C;
loc_827A2CE8:
	// li r7,1916
	ctx.r7.s64 = 1916;
	// b 0x827a379c
	goto loc_827A379C;
loc_827A2CF0:
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r19,79
	cr6.compare<int32_t>(ctx.r19.s32, 79, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,1388
	ctx.r7.s64 = 1388;
	// bne cr6,0x827a2d10
	if (!cr6.eq) goto loc_827A2D10;
	// li r7,1385
	ctx.r7.s64 = 1385;
loc_827A2D10:
	// bl 0x826ca560
	ctx.lr = 0x827A2D14;
	sub_826CA560(ctx, base);
loc_827A2D14:
	// cmpwi cr6,r19,66
	cr6.compare<int32_t>(ctx.r19.s32, 66, ctx.xer);
	// bgt cr6,0x827a3af4
	if (cr6.gt) goto loc_827A3AF4;
	// beq cr6,0x827a37b4
	if (cr6.eq) goto loc_827A37B4;
	// addi r11,r19,-20
	ctx.r11.s64 = ctx.r19.s64 + -20;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x827a3c34
	if (cr6.gt) goto loc_827A3C34;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,2816
	ctx.r12.s64 = ctx.r12.s64 + 2816;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32134
	ctx.r12.s64 = -2105933824;
	// addi r12,r12,11604
	ctx.r12.s64 = ctx.r12.s64 + 11604;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827A2D54;
	case 1:
		goto loc_827A3C34;
	case 2:
		goto loc_827A2E84;
	case 3:
		goto loc_827A3060;
	case 4:
		goto loc_827A2EF4;
	case 5:
		goto loc_827A33FC;
	case 6:
		goto loc_827A3498;
	case 7:
		goto loc_827A3060;
	case 8:
		goto loc_827A36C4;
	case 9:
		goto loc_827A3798;
	default:
		__builtin_unreachable();
	}
loc_827A2D54:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r9,r11,19,23,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r29,19
	cr6.compare<int32_t>(ctx.r29.s32, 19, ctx.xer);
	// stw r7,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r7.u32);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// beq cr6,0x827a2dc4
	if (cr6.eq) goto loc_827A2DC4;
	// cmpwi cr6,r29,20
	cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// beq cr6,0x827a2dc4
	if (cr6.eq) goto loc_827A2DC4;
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,1409
	ctx.r7.s64 = 1409;
	// lwz r27,132(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,420(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x826ca560
	ctx.lr = 0x827A2DC0;
	sub_826CA560(ctx, base);
	// b 0x827a2dcc
	goto loc_827A2DCC;
loc_827A2DC4:
	// lwz r27,132(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_827A2DCC:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x827a2dec
	if (cr6.gt) goto loc_827A2DEC;
	// li r7,1410
	ctx.r7.s64 = 1410;
	// lwz r5,428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A2DEC;
	sub_826CA560(ctx, base);
loc_827A2DEC:
	// lbz r11,2116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a2e10
	if (cr0.eq) goto loc_827A2E10;
	// li r7,1412
	ctx.r7.s64 = 1412;
	// lwz r5,436(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A2E10;
	sub_826CA560(ctx, base);
loc_827A2E10:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r29,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r11.u32);
	// stb r10,2116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2116, ctx.r10.u8);
	// bl 0x827768b8
	ctx.lr = 0x827A2E30;
	sub_827768B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a3c34
	if (cr0.eq) goto loc_827A3C34;
	// lwz r30,2124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// b 0x827a2e74
	goto loc_827A2E74;
loc_827A2E40:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827864c0
	ctx.lr = 0x827A2E50;
	sub_827864C0(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,-1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1312);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A2E70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_827A2E74:
	// lwz r11,2128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827a2e40
	if (cr6.lt) goto loc_827A2E40;
	// b 0x827a3c34
	goto loc_827A3C34;
loc_827A2E84:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r30,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a2ec0
	if (cr0.eq) goto loc_827A2EC0;
	// li r7,1448
	ctx.r7.s64 = 1448;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A2EB4;
	sub_826CA560(ctx, base);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A2EC0:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r11,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x827864c0
	ctx.lr = 0x827A2EEC;
	sub_827864C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x827a2fa0
	goto loc_827A2FA0;
loc_827A2EF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r29,1(r16)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r16.u32 + 1);
	// stb r11,2057(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2057, ctx.r11.u8);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r30,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a2f3c
	if (cr0.eq) goto loc_827A2F3C;
	// li r7,1493
	ctx.r7.s64 = 1493;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A2F30;
	sub_826CA560(ctx, base);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A2F3C:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r11,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82786518
	ctx.lr = 0x827A2F6C;
	sub_82786518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A2F80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a2fa0
	if (!cr0.eq) goto loc_827A2FA0;
	// li r7,1504
	ctx.r7.s64 = 1504;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,444(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A2FA0;
	sub_826CA560(ctx, base);
loc_827A2FA0:
	// lhz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r16.u32 + 0);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// bl 0x8279afb0
	ctx.lr = 0x827A2FAC;
	sub_8279AFB0(ctx, base);
	// addi r29,r31,184
	ctx.r29.s64 = ctx.r31.s64 + 184;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827923b0
	ctx.lr = 0x827A2FCC;
	sub_827923B0(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm r3,r11,14,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// bl 0x8279afb0
	ctx.lr = 0x827A2FD8;
	sub_8279AFB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827923b0
	ctx.lr = 0x827A2FF4;
	sub_827923B0(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm r3,r11,12,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// bl 0x8279afb0
	ctx.lr = 0x827A3000;
	sub_8279AFB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827923b0
	ctx.lr = 0x827A301C;
	sub_827923B0(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm r3,r11,10,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// bl 0x8279afb0
	ctx.lr = 0x827A3028;
	sub_8279AFB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827923b0
	ctx.lr = 0x827A3044;
	sub_827923B0(ctx, base);
	// lbz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// b 0x827a3c34
	goto loc_827A3C34;
loc_827A3060:
	// lhz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r16.u32 + 0);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8279b030
	ctx.lr = 0x827A306C;
	sub_8279B030(ctx, base);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// rlwinm r24,r10,11,24,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFF;
	// stw r30,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r30.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a30e8
	if (cr0.eq) goto loc_827A30E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// bl 0x8279afb0
	ctx.lr = 0x827A309C;
	sub_8279AFB0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// bl 0x8279afb0
	ctx.lr = 0x827A30AC;
	sub_8279AFB0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r3,r11,28,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// bl 0x8279afb0
	ctx.lr = 0x827A30BC;
	sub_8279AFB0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// bl 0x8279afb0
	ctx.lr = 0x827A30CC;
	sub_8279AFB0(ctx, base);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// rlwinm r20,r10,24,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// stw r30,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r30.u32);
	// b 0x827a30fc
	goto loc_827A30FC;
loc_827A30E8:
	// li r27,5
	ctx.r27.s64 = 5;
	// li r25,5
	ctx.r25.s64 = 5;
	// li r22,5
	ctx.r22.s64 = 5;
	// li r21,5
	ctx.r21.s64 = 5;
	// li r20,0
	ctx.r20.s64 = 0;
loc_827A30FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r11,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// lwz r16,128(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r17,132(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r28,33
	cr6.compare<int32_t>(ctx.r28.s32, 33, ctx.xer);
	// beq cr6,0x827a313c
	if (cr6.eq) goto loc_827A313C;
	// li r7,1565
	ctx.r7.s64 = 1565;
	// lwz r5,452(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A313C;
	sub_826CA560(ctx, base);
loc_827A313C:
	// lwz r11,2124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x827a314c
	if (cr6.lt) goto loc_827A314C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827A314C:
	// stw r11,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r11.u32);
	// lwz r11,2128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x827a3160
	if (cr6.gt) goto loc_827A3160;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
loc_827A3160:
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r11,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r11.u32);
	// stw r10,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a3190
	if (cr0.eq) goto loc_827A3190;
	// li r7,1573
	ctx.r7.s64 = 1573;
	// lwz r5,460(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A3190;
	sub_826CA560(ctx, base);
loc_827A3190:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82785c48
	ctx.lr = 0x827A31AC;
	sub_82785C48(ctx, base);
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x827a31d4
	if (!cr0.eq) goto loc_827A31D4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x82785c68
	ctx.lr = 0x827A31D0;
	sub_82785C68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827A31D4:
	// lwz r29,140(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r11,-1308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1308);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// beq cr6,0x827a3208
	if (cr6.eq) goto loc_827A3208;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x827923b0
	ctx.lr = 0x827A3204;
	sub_827923B0(ctx, base);
	// stb r18,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r18.u8);
loc_827A3208:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x827a3230
	if (cr6.eq) goto loc_827A3230;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x827923b0
	ctx.lr = 0x827A322C;
	sub_827923B0(ctx, base);
	// stb r18,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r18.u8);
loc_827A3230:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x827a3258
	if (cr6.eq) goto loc_827A3258;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x827923b0
	ctx.lr = 0x827A3254;
	sub_827923B0(ctx, base);
	// stb r18,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r18.u8);
loc_827A3258:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x827a3280
	if (cr6.eq) goto loc_827A3280;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x827923b0
	ctx.lr = 0x827A327C;
	sub_827923B0(ctx, base);
	// stb r18,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r18.u8);
loc_827A3280:
	// cmpwi cr6,r19,23
	cr6.compare<int32_t>(ctx.r19.s32, 23, ctx.xer);
	// bne cr6,0x827a3298
	if (!cr6.eq) goto loc_827A3298;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x827a3c34
	if (!cr6.eq) goto loc_827A3C34;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_827A3298:
	// cmpwi cr6,r19,27
	cr6.compare<int32_t>(ctx.r19.s32, 27, ctx.xer);
	// bne cr6,0x827a3c34
	if (!cr6.eq) goto loc_827A3C34;
	// lwz r28,156(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq 0x827a32d0
	if (cr0.eq) goto loc_827A32D0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A32CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827a32dc
	goto loc_827A32DC;
loc_827A32D0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A32DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A32DC:
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(ctx.r23.s32, 5, ctx.xer);
	// beq cr6,0x827a32ec
	if (cr6.eq) goto loc_827A32EC;
	// cmpwi cr6,r23,6
	cr6.compare<int32_t>(ctx.r23.s32, 6, ctx.xer);
	// bne cr6,0x827a3c34
	if (!cr6.eq) goto loc_827A3C34;
loc_827A32EC:
	// lwz r11,-1312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1312);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a3318
	if (!cr0.eq) goto loc_827A3318;
	// li r7,1628
	ctx.r7.s64 = 1628;
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A3318;
	sub_826CA560(ctx, base);
loc_827A3318:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A3334;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82785c68
	ctx.lr = 0x827A3348;
	sub_82785C68(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,428(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A3360;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x827a3380
	if (cr0.eq) goto loc_827A3380;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82797b68
	ctx.lr = 0x827A3378;
	sub_82797B68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x827a3384
	goto loc_827A3384;
loc_827A3380:
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_827A3384:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A3394;
	sub_82796DB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A33A4;
	sub_82796DB8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82794eb8
	ctx.lr = 0x827A33B4;
	sub_82794EB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82799958
	ctx.lr = 0x827A33C0;
	sub_82799958(ctx, base);
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(ctx.r23.s32, 5, ctx.xer);
	// bne cr6,0x827a33d0
	if (!cr6.eq) goto loc_827A33D0;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// b 0x827a33e4
	goto loc_827A33E4;
loc_827A33D0:
	// cmpwi cr6,r23,6
	cr6.compare<int32_t>(ctx.r23.s32, 6, ctx.xer);
	// bne cr6,0x827a33e4
	if (!cr6.eq) goto loc_827A33E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// stb r11,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r11.u8);
loc_827A33E4:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A33F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827a3c34
	goto loc_827A3C34;
loc_827A33FC:
	// lbz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 0);
	// clrlwi r30,r11,29
	ctx.r30.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x827a3424
	if (cr6.lt) goto loc_827A3424;
	// li r7,1657
	ctx.r7.s64 = 1657;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,476(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A3424;
	sub_826CA560(ctx, base);
loc_827A3424:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r11,1(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 1);
	// lwz r10,336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x827a3d74
	if (cr6.gt) goto loc_827A3D74;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r8,r10,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r11.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// beq cr6,0x827a3488
	if (cr6.eq) goto loc_827A3488;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_827A3488:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// b 0x827a3c34
	goto loc_827A3C34;
loc_827A3498:
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82794280
	ctx.lr = 0x827A34A0;
	sub_82794280(ctx, base);
	// lwz r26,140(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,-1316(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1316);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lhz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r16.u32 + 0);
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// clrlwi r28,r10,26
	ctx.r28.u64 = ctx.r10.u32 & 0x3F;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827a3534
	if (cr0.eq) goto loc_827A3534;
	// lwz r10,-1308(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1308);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827a34f0
	if (cr0.eq) goto loc_827A34F0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r9,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r9.u8);
loc_827A34F0:
	// rlwinm. r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827a3504
	if (cr0.eq) goto loc_827A3504;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r9,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r9.u8);
loc_827A3504:
	// rlwinm. r9,r10,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827a3518
	if (cr0.eq) goto loc_827A3518;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r9,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r9.u8);
loc_827A3518:
	// rlwinm. r10,r10,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827a352c
	if (cr0.eq) goto loc_827A352C;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r10,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r10.u8);
loc_827A352C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A3534:
	// lwz r29,20(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a3628
	if (cr0.eq) goto loc_827A3628;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a3568
	if (cr0.eq) goto loc_827A3568;
	// li r7,1713
	ctx.r7.s64 = 1713;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,484(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A3568;
	sub_826CA560(ctx, base);
loc_827A3568:
	// lwz r11,-1308(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1308);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x827a78d0
	ctx.lr = 0x827A357C;
	sub_827A78D0(ctx, base);
	// addi r11,r26,7964
	ctx.r11.s64 = ctx.r26.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a359c
	if (!cr6.eq) goto loc_827A359C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
loc_827A359C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a78d0
	ctx.lr = 0x827A35A8;
	sub_827A78D0(ctx, base);
	// addi r11,r26,7964
	ctx.r11.s64 = ctx.r26.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a35c8
	if (!cr6.eq) goto loc_827A35C8;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
loc_827A35C8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a78d0
	ctx.lr = 0x827A35D4;
	sub_827A78D0(ctx, base);
	// addi r11,r26,7964
	ctx.r11.s64 = ctx.r26.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a35f4
	if (!cr6.eq) goto loc_827A35F4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r11,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r11.u8);
loc_827A35F4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a78d0
	ctx.lr = 0x827A3600;
	sub_827A78D0(ctx, base);
	// addi r11,r26,7964
	ctx.r11.s64 = ctx.r26.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a361c
	if (!cr6.eq) goto loc_827A361C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
loc_827A361C:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A3628:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279d078
	ctx.lr = 0x827A3648;
	sub_8279D078(ctx, base);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r30,696(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 696);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x827a36b0
	goto loc_827A36B0;
loc_827A3660:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82794260
	ctx.lr = 0x827A3668;
	sub_82794260(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A3674;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A3680;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A3688;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a36a8
	if (!cr0.eq) goto loc_827A36A8;
	// li r7,1746
	ctx.r7.s64 = 1746;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A36A8;
	sub_826CA560(ctx, base);
loc_827A36A8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_827A36B0:
	// cmplwi r29,0
	cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x827a3660
	if (!cr0.eq) goto loc_827A3660;
	// stw r27,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r27.u32);
	// stw r27,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r27.u32);
	// b 0x827a3c34
	goto loc_827A3C34;
loc_827A36C4:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r11,r11,19,23,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x827864c0
	ctx.lr = 0x827A36F4;
	sub_827864C0(ctx, base);
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827a3718
	if (!cr6.gt) goto loc_827A3718;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x827a3720
	goto loc_827A3720;
loc_827A3718:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82794520
	ctx.lr = 0x827A3720;
	sub_82794520(ctx, base);
loc_827A3720:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x827a3744
	if (!cr0.eq) goto loc_827A3744;
	// li r7,1765
	ctx.r7.s64 = 1765;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,492(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A3744;
	sub_826CA560(ctx, base);
loc_827A3744:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8279ae60
	ctx.lr = 0x827A374C;
	sub_8279AE60(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x827a3c34
	if (!cr0.gt) goto loc_827A3C34;
	// addi r9,r30,928
	ctx.r9.s64 = ctx.r30.s64 + 928;
	// addi r11,r30,896
	ctx.r11.s64 = ctx.r30.s64 + 896;
loc_827A375C:
	// lwz r8,20(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,20(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r8,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r8.u32);
	// bne 0x827a375c
	if (!cr0.eq) goto loc_827A375C;
	// b 0x827a3c34
	goto loc_827A3C34;
loc_827A3798:
	// li r7,1906
	ctx.r7.s64 = 1906;
loc_827A379C:
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_827A37A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A37B0;
	sub_826CA560(ctx, base);
	// b 0x827a3c34
	goto loc_827A3C34;
loc_827A37B4:
	// lwz r11,7484(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7484);
	// li r3,143
	ctx.r3.s64 = 143;
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A37D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,47
	ctx.r4.s64 = 47;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x827864c0
	ctx.lr = 0x827A37EC;
	sub_827864C0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82796db8
	ctx.lr = 0x827A3800;
	sub_82796DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r21,196(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 196);
	// cmplwi r21,0
	cr0.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
	// beq 0x827a3820
	if (cr0.eq) goto loc_827A3820;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x827A3820;
	sub_8279ACF8(ctx, base);
loc_827A3820:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A382C;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A3838;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A3840;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a3860
	if (!cr0.eq) goto loc_827A3860;
	// li r7,1794
	ctx.r7.s64 = 1794;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,508(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826ca560
	ctx.lr = 0x827A3860;
	sub_826CA560(ctx, base);
loc_827A3860:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r17,132(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r16,128(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r22,r11,16,26,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F;
	// rlwinm. r20,r11,9,26,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3F;
	cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x827a389c
	if (cr0.eq) goto loc_827A389C;
	// li r7,1802
	ctx.r7.s64 = 1802;
	// lwz r5,516(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A389C;
	sub_826CA560(ctx, base);
loc_827A389C:
	// cmpwi cr6,r20,4
	cr6.compare<int32_t>(ctx.r20.s32, 4, ctx.xer);
	// ble cr6,0x827a38a8
	if (!cr6.gt) goto loc_827A38A8;
	// li r20,0
	ctx.r20.s64 = 0;
loc_827A38A8:
	// lwz r29,20(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a38c0
	if (cr0.eq) goto loc_827A38C0;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A38C0:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// rlwinm. r9,r9,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r9,r10,19,23,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1F8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r27,4(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq 0x827a38f8
	if (cr0.eq) goto loc_827A38F8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r10.u32);
loc_827A38F8:
	// lwz r10,20(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r11,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x827864c0
	ctx.lr = 0x827A392C;
	sub_827864C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82796938
	ctx.lr = 0x827A393C;
	sub_82796938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,43
	ctx.r5.s64 = 43;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A395C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r29,140(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-1320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1320);
	// stw r19,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r19.u32);
	// stw r28,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r28.u32);
	// stw r27,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r27.u32);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// bl 0x8279b260
	ctx.lr = 0x827A3990;
	sub_8279B260(ctx, base);
	// lwz r11,-1284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1284);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x827979c0
	ctx.lr = 0x827A39B8;
	sub_827979C0(ctx, base);
	// li r10,14
	ctx.r10.s64 = 14;
	// extsh r11,r22
	ctx.r11.s64 = ctx.r22.s16;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,300(r1)
	PPC_STORE_U16(ctx.r1.u32 + 300, ctx.r10.u16);
	// li r10,39
	ctx.r10.s64 = 39;
	// sth r11,302(r1)
	PPC_STORE_U16(ctx.r1.u32 + 302, ctx.r11.u16);
	// sth r11,322(r1)
	PPC_STORE_U16(ctx.r1.u32 + 322, ctx.r11.u16);
	// sth r11,314(r1)
	PPC_STORE_U16(ctx.r1.u32 + 314, ctx.r11.u16);
	// sth r11,306(r1)
	PPC_STORE_U16(ctx.r1.u32 + 306, ctx.r11.u16);
	// sth r10,320(r1)
	PPC_STORE_U16(ctx.r1.u32 + 320, ctx.r10.u16);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r7,320(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r6,300(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// sth r10,312(r1)
	PPC_STORE_U16(ctx.r1.u32 + 312, ctx.r10.u16);
	// li r10,41
	ctx.r10.s64 = 41;
	// lwz r8,312(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// sth r10,304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 304, ctx.r10.u16);
	// lwz r9,304(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82797a18
	ctx.lr = 0x827A3A0C;
	sub_82797A18(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x827A3A18;
	sub_8279ACF8(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x827a3a2c
	if (cr6.eq) goto loc_827A3A2C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279acf8
	ctx.lr = 0x827A3A2C;
	sub_8279ACF8(ctx, base);
loc_827A3A2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A3A38;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A3A44;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A3A4C;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a3a6c
	if (!cr0.eq) goto loc_827A3A6C;
	// li r7,1846
	ctx.r7.s64 = 1846;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A3A6C;
	sub_826CA560(ctx, base);
loc_827A3A6C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82798e08
	ctx.lr = 0x827A3A78;
	sub_82798E08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A3A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r25.u32);
	// stw r24,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r24.u32);
	// bl 0x8279acf8
	ctx.lr = 0x827A3AAC;
	sub_8279ACF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827771a8
	ctx.lr = 0x827A3AB8;
	sub_827771A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82799958
	ctx.lr = 0x827A3AC4;
	sub_82799958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827969e0
	ctx.lr = 0x827A3ACC;
	sub_827969E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a3aec
	if (!cr0.eq) goto loc_827A3AEC;
	// li r7,1857
	ctx.r7.s64 = 1857;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A3AEC;
	sub_826CA560(ctx, base);
loc_827A3AEC:
	// stb r19,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r19.u8);
	// b 0x827a3c34
	goto loc_827A3C34;
loc_827A3AF4:
	// cmpwi cr6,r19,67
	cr6.compare<int32_t>(ctx.r19.s32, 67, ctx.xer);
	// bne cr6,0x827a3c34
	if (!cr6.eq) goto loc_827A3C34;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r16.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r27,140(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// clrlwi r28,r10,26
	ctx.r28.u64 = ctx.r10.u32 & 0x3F;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r6,-1316(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1316);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a3bf0
	if (cr0.eq) goto loc_827A3BF0;
	// lwz r11,-1308(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1308);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x827a78d0
	ctx.lr = 0x827A3B40;
	sub_827A78D0(ctx, base);
	// addi r11,r27,7964
	ctx.r11.s64 = ctx.r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a3b60
	if (!cr6.eq) goto loc_827A3B60;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
loc_827A3B60:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a78d0
	ctx.lr = 0x827A3B6C;
	sub_827A78D0(ctx, base);
	// addi r11,r27,7964
	ctx.r11.s64 = ctx.r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a3b8c
	if (!cr6.eq) goto loc_827A3B8C;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r11,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r11.u8);
loc_827A3B8C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a78d0
	ctx.lr = 0x827A3B98;
	sub_827A78D0(ctx, base);
	// addi r11,r27,7964
	ctx.r11.s64 = ctx.r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a3bb8
	if (!cr6.eq) goto loc_827A3BB8;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r11,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r11.u8);
loc_827A3BB8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a78d0
	ctx.lr = 0x827A3BC4;
	sub_827A78D0(ctx, base);
	// addi r11,r27,7964
	ctx.r11.s64 = ctx.r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a3be0
	if (!cr6.eq) goto loc_827A3BE0;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stb r11,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r11.u8);
loc_827A3BE0:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A3BF0:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r9.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a3c10
	if (cr0.eq) goto loc_827A3C10;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
loc_827A3C10:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// bl 0x8279d078
	ctx.lr = 0x827A3C34;
	sub_8279D078(ctx, base);
loc_827A3C34:
	// lwz r18,940(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8277dfe0
	ctx.lr = 0x827A3C40;
	sub_8277DFE0(ctx, base);
	// lwz r23,336(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r26,260(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r25,344(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r15,240(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8279debc
	if (!cr0.eq) goto loc_8279DEBC;
	// lwz r28,212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r24,164(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_827A3C60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82777fb8
	ctx.lr = 0x827A3C68;
	sub_82777FB8(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x8279a318
	ctx.lr = 0x827A3C74;
	sub_8279A318(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827a3c88
	if (cr6.eq) goto loc_827A3C88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8279b208
	ctx.lr = 0x827A3C88;
	sub_8279B208(ctx, base);
loc_827A3C88:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x827a3c9c
	if (cr6.eq) goto loc_827A3C9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8279b208
	ctx.lr = 0x827A3C9C;
	sub_8279B208(ctx, base);
loc_827A3C9C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x8275a120
	ctx.lr = 0x827A3CAC;
	sub_8275A120(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x8275a120
	ctx.lr = 0x827A3CBC;
	sub_8275A120(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x8275a120
	ctx.lr = 0x827A3CCC;
	sub_8275A120(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x8275a120
	ctx.lr = 0x827A3CDC;
	sub_8275A120(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x8275a120
	ctx.lr = 0x827A3CEC;
	sub_8275A120(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x8275a120
	ctx.lr = 0x827A3CFC;
	sub_8275A120(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827a3d10
	if (cr6.eq) goto loc_827A3D10;
	// addi r4,r26,-4
	ctx.r4.s64 = ctx.r26.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x827A3D10;
	sub_8275A120(ctx, base);
loc_827A3D10:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x8275a120
	ctx.lr = 0x827A3D20;
	sub_8275A120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278a1b0
	ctx.lr = 0x827A3D28;
	sub_8278A1B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a3d4c
	if (!cr0.eq) goto loc_827A3D4C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4297
	ctx.r7.s64 = 4297;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r5,r11,4732
	ctx.r5.s64 = ctx.r11.s64 + 4732;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A3D4C;
	sub_826CA560(ctx, base);
loc_827A3D4C:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828d427c
	ctx.lr = 0x827A3D58;
	__restfpr_26(ctx, base);
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827A3D5C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// bl 0x828d6090
	ctx.lr = 0x827A3D74;
	longjmp(PPCGetJmpBuf(ctx.r3.u32), ctx.r4.s32);
loc_827A3D74:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// bl 0x828d6090
	ctx.lr = 0x827A3D8C;
	longjmp(PPCGetJmpBuf(ctx.r3.u32), ctx.r4.s32);
}

__attribute__((alias("__imp__sub_827A3D8C"))) PPC_WEAK_FUNC(sub_827A3D8C);
PPC_FUNC_IMPL(__imp__sub_827A3D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3D90"))) PPC_WEAK_FUNC(sub_827A3D90);
PPC_FUNC_IMPL(__imp__sub_827A3D90) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827a3df4
	if (!cr6.gt) goto loc_827A3DF4;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// subf r7,r8,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
	// subf r6,r4,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r4.s64;
loc_827A3DB8:
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// andc r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827a3de0
	if (cr6.eq) goto loc_827A3DE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827A3DE0:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827a3db8
	if (cr6.lt) goto loc_827A3DB8;
loc_827A3DF4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3DFC"))) PPC_WEAK_FUNC(sub_827A3DFC);
PPC_FUNC_IMPL(__imp__sub_827A3DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3E00"))) PPC_WEAK_FUNC(sub_827A3E00);
PPC_FUNC_IMPL(__imp__sub_827A3E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827A3E08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi r31,0
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x827a3ea0
	if (!cr0.gt) goto loc_827A3EA0;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_827A3E34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7ab0
	ctx.lr = 0x827A3E40;
	sub_827A7AB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a3e94
	if (cr0.lt) goto loc_827A3E94;
	// rlwinm r11,r3,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827a3e94
	if (!cr0.eq) goto loc_827A3E94;
	// lwz r10,176(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	// slw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A3E94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A3E94:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bgt 0x827a3e34
	if (cr0.gt) goto loc_827A3E34;
loc_827A3EA0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827a3eec
	if (!cr6.gt) goto loc_827A3EEC;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a3eec
	if (!cr0.eq) goto loc_827A3EEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7ab0
	ctx.lr = 0x827A3EC4;
	sub_827A7AB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a3eec
	if (cr0.lt) goto loc_827A3EEC;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r11,r3,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
loc_827A3EEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A3EF4"))) PPC_WEAK_FUNC(sub_827A3EF4);
PPC_FUNC_IMPL(__imp__sub_827A3EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A3EF8"))) PPC_WEAK_FUNC(sub_827A3EF8);
PPC_FUNC_IMPL(__imp__sub_827A3EF8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r9,176(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_827A3F10:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827a3f10
	if (cr6.lt) goto loc_827A3F10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A3F30"))) PPC_WEAK_FUNC(sub_827A3F30);
PPC_FUNC_IMPL(__imp__sub_827A3F30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827A3F38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277a640
	ctx.lr = 0x827A3F44;
	sub_8277A640(ctx, base);
	// addi r27,r31,128
	ctx.r27.s64 = ctx.r31.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x827942b8
	ctx.lr = 0x827A3F58;
	sub_827942B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x827a3fd8
	if (cr6.lt) goto loc_827A3FD8;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_827A3F68:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a3f84
	if (cr0.eq) goto loc_827A3F84;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x827A3F84;
	sub_8275A120(ctx, base);
loc_827A3F84:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a3fa0
	if (cr0.eq) goto loc_827A3FA0;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x827A3FA0;
	sub_8275A120(ctx, base);
loc_827A3FA0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a3fbc
	if (cr0.eq) goto loc_827A3FBC;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x827A3FBC;
	sub_8275A120(ctx, base);
loc_827A3FBC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x827942b8
	ctx.lr = 0x827A3FD0;
	sub_827942B8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x827a3f68
	if (!cr6.gt) goto loc_827A3F68;
loc_827A3FD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A3FE0"))) PPC_WEAK_FUNC(sub_827A3FE0);
PPC_FUNC_IMPL(__imp__sub_827A3FE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A3FE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x827775a8
	ctx.lr = 0x827A4000;
	sub_827775A8(ctx, base);
	// lwz r29,136(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x827a4074
	goto loc_827A4074;
loc_827A400C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827a403c
	if (!cr6.gt) goto loc_827A403C;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
loc_827A4020:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827a4020
	if (cr6.lt) goto loc_827A4020;
loc_827A403C:
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x827a4064
	goto loc_827A4064;
loc_827A4044:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a4060
	if (cr0.eq) goto loc_827A4060;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827a3e00
	ctx.lr = 0x827A4060;
	sub_827A3E00(ctx, base);
loc_827A4060:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_827A4064:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827a4044
	if (!cr0.eq) goto loc_827A4044;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_827A4074:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827a400c
	if (!cr0.eq) goto loc_827A400C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4088"))) PPC_WEAK_FUNC(sub_827A4088);
PPC_FUNC_IMPL(__imp__sub_827A4088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27ec
	ctx.lr = 0x827A4090;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x827775a8
	ctx.lr = 0x827A40AC;
	sub_827775A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// bl 0x8277a598
	ctx.lr = 0x827A40BC;
	sub_8277A598(ctx, base);
	// addi r17,r30,128
	ctx.r17.s64 = ctx.r30.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// bl 0x827942b8
	ctx.lr = 0x827A40D4;
	sub_827942B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x827a4370
	if (cr6.lt) goto loc_827A4370;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r21,r31,4
	ctx.r21.s64 = ctx.r31.s64 + 4;
	// addi r19,r11,5888
	ctx.r19.s64 = ctx.r11.s64 + 5888;
loc_827A40E8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x827775a8
	ctx.lr = 0x827A40FC;
	sub_827775A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x827775a8
	ctx.lr = 0x827A4114;
	sub_827775A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x827775a8
	ctx.lr = 0x827A412C;
	sub_827775A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r26,28(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r22,100(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stw r25,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r25.u32);
	// b 0x827a434c
	goto loc_827A434C;
loc_827A4144:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a433c
	if (cr0.eq) goto loc_827A433C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A4160;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827a433c
	if (!cr0.eq) goto loc_827A433C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_827A4170:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a42a4
	if (!cr0.eq) goto loc_827A42A4;
	// addi r24,r31,228
	ctx.r24.s64 = ctx.r31.s64 + 228;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a428c
	if (cr0.eq) goto loc_827A428C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x827a4240
	if (cr6.lt) goto loc_827A4240;
	// addi r27,r31,236
	ctx.r27.s64 = ctx.r31.s64 + 236;
loc_827A419C:
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827a41d4
	if (cr6.eq) goto loc_827A41D4;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a41d4
	if (!cr0.eq) goto loc_827A41D4;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r10,r19,4
	ctx.r10.s64 = ctx.r19.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bne 0x827a41d8
	if (!cr0.eq) goto loc_827A41D8;
loc_827A41D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A41D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a422c
	if (cr0.eq) goto loc_827A422C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827974b0
	ctx.lr = 0x827A41F0;
	sub_827974B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a422c
	if (!cr0.eq) goto loc_827A422C;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// srw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827a422c
	if (!cr0.eq) goto loc_827A422C;
	// lwzx r9,r11,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// slw r10,r18,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r22
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r10.u32);
loc_827A422C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827a419c
	if (!cr6.gt) goto loc_827A419C;
loc_827A4240:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a428c
	if (cr0.eq) goto loc_827A428C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827769b8
	ctx.lr = 0x827A4254;
	sub_827769B8(ctx, base);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r8,r10,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x827a428c
	if (!cr0.eq) goto loc_827A428C;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r18,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_827A428C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bne 0x827a4170
	if (!cr0.eq) goto loc_827A4170;
loc_827A42A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_827A42AC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827a433c
	if (!cr0.eq) goto loc_827A433C;
	// addi r8,r11,228
	ctx.r8.s64 = ctx.r11.s64 + 228;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827a4324
	if (cr0.eq) goto loc_827A4324;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827a42f4
	if (cr6.eq) goto loc_827A42F4;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827a42f4
	if (!cr0.eq) goto loc_827A42F4;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r9,r19,4
	ctx.r9.s64 = ctx.r19.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// bne 0x827a42f8
	if (!cr0.eq) goto loc_827A42F8;
loc_827A42F4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827A42F8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827a4324
	if (cr0.eq) goto loc_827A4324;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r18,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r7,r10,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r9.u32);
loc_827A4324:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// bne 0x827a42ac
	if (!cr0.eq) goto loc_827A42AC;
loc_827A433C:
	// lwz r11,228(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 228);
	// lwz r26,8(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_827A434C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827a4144
	if (!cr0.eq) goto loc_827A4144;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// bl 0x827942b8
	ctx.lr = 0x827A4368;
	sub_827942B8(ctx, base);
	// cmpw cr6,r20,r3
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x827a40e8
	if (!cr6.gt) goto loc_827A40E8;
loc_827A4370:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277a640
	ctx.lr = 0x827A4378;
	sub_8277A640(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_827A437C:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// bl 0x827942b8
	ctx.lr = 0x827A438C;
	sub_827942B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x827a44f0
	if (cr6.lt) goto loc_827A44F0;
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
loc_827A4398:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A43B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a44d8
	if (!cr0.eq) goto loc_827A44D8;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827a43ec
	if (!cr6.gt) goto loc_827A43EC;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_827A43D0:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827a43d0
	if (cr6.lt) goto loc_827A43D0;
loc_827A43EC:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
loc_827A43FC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827a4414
	if (!cr6.gt) goto loc_827A4414;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a4420
	goto loc_827A4420;
loc_827A4414:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// lwzx r7,r10,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_827A4420:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a44bc
	if (cr0.eq) goto loc_827A44BC;
	// lwz r8,100(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x827a4474
	if (cr0.eq) goto loc_827A4474;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827a446c
	if (!cr6.gt) goto loc_827A446C;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_827A4450:
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x827a4450
	if (cr6.lt) goto loc_827A4450;
loc_827A446C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x827a44b0
	goto loc_827A44B0;
loc_827A4474:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827a44b0
	if (!cr6.gt) goto loc_827A44B0;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_827A448C:
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 | ctx.r26.u64;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x827a448c
	if (cr6.lt) goto loc_827A448C;
loc_827A44B0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x827a43fc
	goto loc_827A43FC;
loc_827A44BC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x827a3d90
	ctx.lr = 0x827A44CC;
	sub_827A3D90(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// or r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_827A44D8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x827942b8
	ctx.lr = 0x827A44E8;
	sub_827942B8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x827a4398
	if (!cr6.gt) goto loc_827A4398;
loc_827A44F0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a437c
	if (!cr0.eq) goto loc_827A437C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828d283c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4500"))) PPC_WEAK_FUNC(sub_827A4500);
PPC_FUNC_IMPL(__imp__sub_827A4500) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4528;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a454c
	if (cr0.eq) goto loc_827A454C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82795808
	ctx.lr = 0x827A4548;
	sub_82795808(ctx, base);
	// b 0x827a4550
	goto loc_827A4550;
loc_827A454C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4558"))) PPC_WEAK_FUNC(sub_827A4558);
PPC_FUNC_IMPL(__imp__sub_827A4558) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4580;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a45a4
	if (cr0.eq) goto loc_827A45A4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827956c8
	ctx.lr = 0x827A45A0;
	sub_827956C8(ctx, base);
	// b 0x827a45a8
	goto loc_827A45A8;
loc_827A45A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A45A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A45B0"))) PPC_WEAK_FUNC(sub_827A45B0);
PPC_FUNC_IMPL(__imp__sub_827A45B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A45B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A45D8;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a45fc
	if (cr0.eq) goto loc_827A45FC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827958b0
	ctx.lr = 0x827A45F8;
	sub_827958B0(ctx, base);
	// b 0x827a4600
	goto loc_827A4600;
loc_827A45FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4600:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4608"))) PPC_WEAK_FUNC(sub_827A4608);
PPC_FUNC_IMPL(__imp__sub_827A4608) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4630;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a4654
	if (cr0.eq) goto loc_827A4654;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82796300
	ctx.lr = 0x827A4650;
	sub_82796300(ctx, base);
	// b 0x827a4658
	goto loc_827A4658;
loc_827A4654:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4660"))) PPC_WEAK_FUNC(sub_827A4660);
PPC_FUNC_IMPL(__imp__sub_827A4660) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4668;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4688;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a46ac
	if (cr0.eq) goto loc_827A46AC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82795b98
	ctx.lr = 0x827A46A8;
	sub_82795B98(ctx, base);
	// b 0x827a46b0
	goto loc_827A46B0;
loc_827A46AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A46B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A46B8"))) PPC_WEAK_FUNC(sub_827A46B8);
PPC_FUNC_IMPL(__imp__sub_827A46B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A46C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A46E0;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a4704
	if (cr0.eq) goto loc_827A4704;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82795af0
	ctx.lr = 0x827A4700;
	sub_82795AF0(ctx, base);
	// b 0x827a4708
	goto loc_827A4708;
loc_827A4704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4708:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4710"))) PPC_WEAK_FUNC(sub_827A4710);
PPC_FUNC_IMPL(__imp__sub_827A4710) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4718;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4738;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a475c
	if (cr0.eq) goto loc_827A475C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82796340
	ctx.lr = 0x827A4758;
	sub_82796340(ctx, base);
	// b 0x827a4760
	goto loc_827A4760;
loc_827A475C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4768"))) PPC_WEAK_FUNC(sub_827A4768);
PPC_FUNC_IMPL(__imp__sub_827A4768) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4770;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4790;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a47b4
	if (cr0.eq) goto loc_827A47B4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827965d0
	ctx.lr = 0x827A47B0;
	sub_827965D0(ctx, base);
	// b 0x827a47b8
	goto loc_827A47B8;
loc_827A47B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A47B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A47C0"))) PPC_WEAK_FUNC(sub_827A47C0);
PPC_FUNC_IMPL(__imp__sub_827A47C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A47C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A47E8;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a480c
	if (cr0.eq) goto loc_827A480C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82796568
	ctx.lr = 0x827A4808;
	sub_82796568(ctx, base);
	// b 0x827a4810
	goto loc_827A4810;
loc_827A480C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4818"))) PPC_WEAK_FUNC(sub_827A4818);
PPC_FUNC_IMPL(__imp__sub_827A4818) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4820;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4840;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a4864
	if (cr0.eq) goto loc_827A4864;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82796500
	ctx.lr = 0x827A4860;
	sub_82796500(ctx, base);
	// b 0x827a4868
	goto loc_827A4868;
loc_827A4864:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4868:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4870"))) PPC_WEAK_FUNC(sub_827A4870);
PPC_FUNC_IMPL(__imp__sub_827A4870) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4878;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4898;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a48bc
	if (cr0.eq) goto loc_827A48BC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827960f8
	ctx.lr = 0x827A48B8;
	sub_827960F8(ctx, base);
	// b 0x827a48c0
	goto loc_827A48C0;
loc_827A48BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A48C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A48C8"))) PPC_WEAK_FUNC(sub_827A48C8);
PPC_FUNC_IMPL(__imp__sub_827A48C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A48D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A48F0;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a4914
	if (cr0.eq) goto loc_827A4914;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82796390
	ctx.lr = 0x827A4910;
	sub_82796390(ctx, base);
	// b 0x827a4918
	goto loc_827A4918;
loc_827A4914:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4918:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4920"))) PPC_WEAK_FUNC(sub_827A4920);
PPC_FUNC_IMPL(__imp__sub_827A4920) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4928;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4948;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a496c
	if (cr0.eq) goto loc_827A496C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82796418
	ctx.lr = 0x827A4968;
	sub_82796418(ctx, base);
	// b 0x827a4970
	goto loc_827A4970;
loc_827A496C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4970:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4978"))) PPC_WEAK_FUNC(sub_827A4978);
PPC_FUNC_IMPL(__imp__sub_827A4978) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4980;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A49A0;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a49c4
	if (cr0.eq) goto loc_827A49C4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82795a98
	ctx.lr = 0x827A49C0;
	sub_82795A98(ctx, base);
	// b 0x827a49c8
	goto loc_827A49C8;
loc_827A49C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A49C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A49D0"))) PPC_WEAK_FUNC(sub_827A49D0);
PPC_FUNC_IMPL(__imp__sub_827A49D0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A49D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A49F8;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a4a1c
	if (cr0.eq) goto loc_827A4A1C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82795868
	ctx.lr = 0x827A4A18;
	sub_82795868(ctx, base);
	// b 0x827a4a20
	goto loc_827A4A20;
loc_827A4A1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4A20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4A28"))) PPC_WEAK_FUNC(sub_827A4A28);
PPC_FUNC_IMPL(__imp__sub_827A4A28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4A30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r31,428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4A50;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a4a74
	if (cr0.eq) goto loc_827A4A74;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82795fe0
	ctx.lr = 0x827A4A70;
	sub_82795FE0(ctx, base);
	// b 0x827a4a78
	goto loc_827A4A78;
loc_827A4A74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A4A78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4A80"))) PPC_WEAK_FUNC(sub_827A4A80);
PPC_FUNC_IMPL(__imp__sub_827A4A80) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x827a4aa0
	if (!cr6.eq) goto loc_827A4AA0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_827A4AA0:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x827a4ac0
	goto loc_827A4AC0;
loc_827A4AAC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_827A4AC0:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827a4aac
	if (cr6.lt) goto loc_827A4AAC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A4AF0"))) PPC_WEAK_FUNC(sub_827A4AF0);
PPC_FUNC_IMPL(__imp__sub_827A4AF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// beq 0x827a4b5c
	if (cr0.eq) goto loc_827A4B5C;
	// lwz r4,30328(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30328);
	// bl 0x827a7860
	ctx.lr = 0x827A4B20;
	sub_827A7860(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827a4b54
	if (cr6.lt) goto loc_827A4B54;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,638
	ctx.r7.s64 = 638;
	// addi r6,r11,6464
	ctx.r6.s64 = ctx.r11.s64 + 6464;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,6552
	ctx.r5.s64 = ctx.r11.s64 + 6552;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827A4B54;
	sub_826CA560(ctx, base);
loc_827A4B54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x827a4b68
	goto loc_827A4B68;
loc_827A4B5C:
	// lwz r11,30328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30328);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_827A4B68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A4B80"))) PPC_WEAK_FUNC(sub_827A4B80);
PPC_FUNC_IMPL(__imp__sub_827A4B80) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x827a4bcc
	if (!cr6.eq) goto loc_827A4BCC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,690
	ctx.r7.s64 = 690;
	// addi r6,r11,6464
	ctx.r6.s64 = ctx.r11.s64 + 6464;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827A4BC8;
	sub_826CA560(ctx, base);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
loc_827A4BCC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// blt cr6,0x827a4bd8
	if (cr6.lt) goto loc_827A4BD8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_827A4BD8:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bgt cr6,0x827a4be8
	if (cr6.gt) goto loc_827A4BE8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827A4BE8:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A4C14"))) PPC_WEAK_FUNC(sub_827A4C14);
PPC_FUNC_IMPL(__imp__sub_827A4C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4C18"))) PPC_WEAK_FUNC(sub_827A4C18);
PPC_FUNC_IMPL(__imp__sub_827A4C18) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A4C20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bne cr6,0x827a4ccc
	if (!cr6.eq) goto loc_827A4CCC;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827a4c88
	if (!cr0.eq) goto loc_827A4C88;
	// lwz r29,432(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 432);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4C70;
	sub_82759FF0(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r28,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x827a4cc8
	goto loc_827A4CC8;
loc_827A4C88:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827a4cc0
	if (!cr6.eq) goto loc_827A4CC0;
	// lwz r31,432(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 432);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4CA4;
	sub_82759FF0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r28,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
loc_827A4CC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_827A4CC8:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_827A4CCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4CD4"))) PPC_WEAK_FUNC(sub_827A4CD4);
PPC_FUNC_IMPL(__imp__sub_827A4CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4CD8"))) PPC_WEAK_FUNC(sub_827A4CD8);
PPC_FUNC_IMPL(__imp__sub_827A4CD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_827A4CF0:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827a4cf0
	if (cr6.lt) goto loc_827A4CF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A4D10"))) PPC_WEAK_FUNC(sub_827A4D10);
PPC_FUNC_IMPL(__imp__sub_827A4D10) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827a4b80
	ctx.lr = 0x827A4D28;
	sub_827A4B80(ctx, base);
	// rlwinm r11,r3,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_827A4D5C"))) PPC_WEAK_FUNC(sub_827A4D5C);
PPC_FUNC_IMPL(__imp__sub_827A4D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4D60"))) PPC_WEAK_FUNC(sub_827A4D60);
PPC_FUNC_IMPL(__imp__sub_827A4D60) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827a4b80
	ctx.lr = 0x827A4D78;
	sub_827A4B80(ctx, base);
	// clrlwi r8,r3,27
	ctx.r8.u64 = ctx.r3.u32 & 0x1F;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_827A4DB4"))) PPC_WEAK_FUNC(sub_827A4DB4);
PPC_FUNC_IMPL(__imp__sub_827A4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4DB8"))) PPC_WEAK_FUNC(sub_827A4DB8);
PPC_FUNC_IMPL(__imp__sub_827A4DB8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	// lwz r11,228(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// lwz r3,56(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,30324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30324);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A4DDC"))) PPC_WEAK_FUNC(sub_827A4DDC);
PPC_FUNC_IMPL(__imp__sub_827A4DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4DE0"))) PPC_WEAK_FUNC(sub_827A4DE0);
PPC_FUNC_IMPL(__imp__sub_827A4DE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827A4DE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// lwz r10,30328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30328);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r30,432(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A4E2C;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x827a4e48
	if (cr0.eq) goto loc_827A4E48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x827A4E44;
	sub_82776900(ctx, base);
	// b 0x827a4e4c
	goto loc_827A4E4C;
loc_827A4E48:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_827A4E4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4E5C"))) PPC_WEAK_FUNC(sub_827A4E5C);
PPC_FUNC_IMPL(__imp__sub_827A4E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A4E60"))) PPC_WEAK_FUNC(sub_827A4E60);
PPC_FUNC_IMPL(__imp__sub_827A4E60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2800
	ctx.lr = 0x827A4E68;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a4e98
	if (!cr6.lt) goto loc_827A4E98;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a4ea0
	goto loc_827A4EA0;
loc_827A4E98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A4EA0;
	sub_82794520(ctx, base);
loc_827A4EA0:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r22,0(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827a4ec0
	if (!cr0.eq) goto loc_827A4EC0;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// b 0x827a4ed4
	goto loc_827A4ED4;
loc_827A4EBC:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_827A4EC0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827a4ebc
	if (!cr6.eq) goto loc_827A4EBC;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_827A4ED4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827a4a80
	ctx.lr = 0x827A4EE4;
	sub_827A4A80(ctx, base);
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a4f04
	if (!cr6.lt) goto loc_827A4F04;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a4f0c
	goto loc_827A4F0C;
loc_827A4F04:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A4F0C;
	sub_82794520(ctx, base);
loc_827A4F0C:
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r29,8(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827a4fc0
	if (!cr6.gt) goto loc_827A4FC0;
	// lis r28,-32068
	ctx.r28.s64 = -2101608448;
loc_827A4F30:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x827a4f44
	if (!cr6.eq) goto loc_827A4F44;
	// lwz r29,28(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_827A4F44:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,30328(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30328);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x827a4d10
	ctx.lr = 0x827A4F68;
	sub_827A4D10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a4fb0
	if (!cr0.eq) goto loc_827A4FB0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827a4c18
	ctx.lr = 0x827A4F84;
	sub_827A4C18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,30328(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30328);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x827a4d60
	ctx.lr = 0x827A4FB0;
	sub_827A4D60(ctx, base);
loc_827A4FB0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827a4f30
	if (cr6.lt) goto loc_827A4F30;
loc_827A4FC0:
	// stw r23,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r23.u32);
	// stw r23,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2850
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A4FD0"))) PPC_WEAK_FUNC(sub_827A4FD0);
PPC_FUNC_IMPL(__imp__sub_827A4FD0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827A4FD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// beq cr6,0x827a50e0
	if (cr6.eq) goto loc_827A50E0;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,432(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 432);
	// bl 0x82759ff0
	ctx.lr = 0x827A5008;
	sub_82759FF0(ctx, base);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,30328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30328, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A5024;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x827a5044
	if (cr0.eq) goto loc_827A5044;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x827A5040;
	sub_82776900(ctx, base);
	// b 0x827a5048
	goto loc_827A5048;
loc_827A5044:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827A5048:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827a50bc
	if (!cr6.gt) goto loc_827A50BC;
loc_827A505C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,432(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A5070;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x827a5098
	if (cr0.eq) goto loc_827A5098;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827a4de0
	ctx.lr = 0x827A5090;
	sub_827A4DE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x827a509c
	goto loc_827A509C;
loc_827A5098:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827A509C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A50A8;
	sub_82794520(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827a505c
	if (cr6.lt) goto loc_827A505C;
loc_827A50BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,432(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x827775a8
	ctx.lr = 0x827A50DC;
	sub_827775A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_827A50E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A50EC"))) PPC_WEAK_FUNC(sub_827A50EC);
PPC_FUNC_IMPL(__imp__sub_827A50EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A50F0"))) PPC_WEAK_FUNC(sub_827A50F0);
PPC_FUNC_IMPL(__imp__sub_827A50F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827A50F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5124
	if (!cr6.lt) goto loc_827A5124;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a5130
	goto loc_827A5130;
loc_827A5124:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82794520
	ctx.lr = 0x827A512C;
	sub_82794520(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_827A5130:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5150
	if (!cr6.lt) goto loc_827A5150;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a5158
	goto loc_827A5158;
loc_827A5150:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5158;
	sub_82794520(ctx, base);
loc_827A5158:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A5168;
	sub_82794520(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A5178"))) PPC_WEAK_FUNC(sub_827A5178);
PPC_FUNC_IMPL(__imp__sub_827A5178) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A5180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r4,432(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827775a8
	ctx.lr = 0x827A51B8;
	sub_827775A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x827a5220
	if (!cr0.gt) goto loc_827A5220;
loc_827A51D0:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x827a5208
	if (cr0.eq) goto loc_827A5208;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_827A5208:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827a51d0
	if (cr6.lt) goto loc_827A51D0;
loc_827A5220:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827a5234
	if (cr6.eq) goto loc_827A5234;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x827A5234;
	sub_8275A120(ctx, base);
loc_827A5234:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r30,-32068
	ctx.r30.s64 = -2101608448;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,30328(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30328);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82759ff0
	ctx.lr = 0x827A5250;
	sub_82759FF0(ctx, base);
	// stw r3,30328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 30328, ctx.r3.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x827a5280
	if (!cr6.gt) goto loc_827A5280;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x827a526c
	goto loc_827A526C;
loc_827A5268:
	// lwz r3,30328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30328);
loc_827A526C:
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x827a5268
	if (!cr0.eq) goto loc_827A5268;
loc_827A5280:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x8275a120
	ctx.lr = 0x827A5290;
	sub_8275A120(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A52A4;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x827a52cc
	if (cr0.eq) goto loc_827A52CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x827a4de0
	ctx.lr = 0x827A52C4;
	sub_827A4DE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x827a52d0
	goto loc_827A52D0;
loc_827A52CC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_827A52D0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A52DC;
	sub_82794520(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A52E8"))) PPC_WEAK_FUNC(sub_827A52E8);
PPC_FUNC_IMPL(__imp__sub_827A52E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827A52F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x827a542c
	if (cr6.eq) goto loc_827A542C;
	// bl 0x827a4d10
	ctx.lr = 0x827A530C;
	sub_827A4D10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a542c
	if (!cr0.eq) goto loc_827A542C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a4d60
	ctx.lr = 0x827A5324;
	sub_827A4D60(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5344
	if (!cr6.lt) goto loc_827A5344;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a534c
	goto loc_827A534C;
loc_827A5344:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82794520
	ctx.lr = 0x827A534C;
	sub_82794520(ctx, base);
loc_827A534C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a4a80
	ctx.lr = 0x827A535C;
	sub_827A4A80(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a537c
	if (!cr6.lt) goto loc_827A537C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a5384
	goto loc_827A5384;
loc_827A537C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5384;
	sub_82794520(ctx, base);
loc_827A5384:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x827a4c18
	ctx.lr = 0x827A5398;
	sub_827A4C18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a53c8
	if (!cr6.lt) goto loc_827A53C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a53d0
	goto loc_827A53D0;
loc_827A53C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A53D0;
	sub_82794520(ctx, base);
loc_827A53D0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827a4a80
	ctx.lr = 0x827A53E0;
	sub_827A4A80(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5400
	if (!cr6.lt) goto loc_827A5400;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a5408
	goto loc_827A5408;
loc_827A5400:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5408;
	sub_82794520(ctx, base);
loc_827A5408:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x827a4c18
	ctx.lr = 0x827A541C;
	sub_827A4C18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
loc_827A542C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A5434"))) PPC_WEAK_FUNC(sub_827A5434);
PPC_FUNC_IMPL(__imp__sub_827A5434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5438"))) PPC_WEAK_FUNC(sub_827A5438);
PPC_FUNC_IMPL(__imp__sub_827A5438) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827A5440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827a54a0
	if (!cr6.gt) goto loc_827A54A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827A545C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5478
	if (!cr6.lt) goto loc_827A5478;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x827a5480
	goto loc_827A5480;
loc_827A5478:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5480;
	sub_82794520(ctx, base);
loc_827A5480:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827a545c
	if (cr6.lt) goto loc_827A545C;
loc_827A54A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A54A8"))) PPC_WEAK_FUNC(sub_827A54A8);
PPC_FUNC_IMPL(__imp__sub_827A54A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A54B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x827a54d0
	if (!cr6.eq) goto loc_827A54D0;
loc_827A54C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a5554
	goto loc_827A5554;
loc_827A54D0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827a4d10
	ctx.lr = 0x827A54E0;
	sub_827A4D10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a5550
	if (!cr0.eq) goto loc_827A5550;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// blt cr6,0x827a5500
	if (cr6.lt) goto loc_827A5500;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// ble cr6,0x827a5500
	if (!cr6.gt) goto loc_827A5500;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_827A5500:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,30328(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30328);
	// bl 0x827a78c0
	ctx.lr = 0x827A5514;
	sub_827A78C0(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5534
	if (!cr6.lt) goto loc_827A5534;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a553c
	goto loc_827A553C;
loc_827A5534:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A553C;
	sub_82794520(ctx, base);
loc_827A553C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827a4e60
	ctx.lr = 0x827A554C;
	sub_827A4E60(ctx, base);
	// b 0x827a54c8
	goto loc_827A54C8;
loc_827A5550:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A5554:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A555C"))) PPC_WEAK_FUNC(sub_827A555C);
PPC_FUNC_IMPL(__imp__sub_827A555C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5560"))) PPC_WEAK_FUNC(sub_827A5560);
PPC_FUNC_IMPL(__imp__sub_827A5560) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x827A5568;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5598
	if (!cr6.lt) goto loc_827A5598;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a559c
	goto loc_827A559C;
loc_827A5598:
	// bl 0x82794520
	ctx.lr = 0x827A559C;
	sub_82794520(ctx, base);
loc_827A559C:
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r29,8(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827a56a0
	if (!cr6.gt) goto loc_827A56A0;
loc_827A55B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x827a55cc
	if (!cr6.eq) goto loc_827A55CC;
	// lwz r29,28(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
loc_827A55CC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a55f4
	if (!cr6.lt) goto loc_827A55F4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a55fc
	goto loc_827A55FC;
loc_827A55F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A55FC;
	sub_82794520(ctx, base);
loc_827A55FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827a5690
	if (!cr6.gt) goto loc_827A5690;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a562c
	if (!cr6.lt) goto loc_827A562C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a5634
	goto loc_827A5634;
loc_827A562C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5634;
	sub_82794520(ctx, base);
loc_827A5634:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5664
	if (!cr6.lt) goto loc_827A5664;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a566c
	goto loc_827A566C;
loc_827A5664:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A566C;
	sub_82794520(ctx, base);
loc_827A566C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r24,-1
	ctx.r10.s64 = ctx.r24.s64 + -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827a5690
	if (!cr6.eq) goto loc_827A5690;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A568C;
	sub_82794520(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_827A5690:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827a55b8
	if (cr6.lt) goto loc_827A55B8;
loc_827A56A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A56A8"))) PPC_WEAK_FUNC(sub_827A56A8);
PPC_FUNC_IMPL(__imp__sub_827A56A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x827a56e0
	goto loc_827A56E0;
loc_827A56C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq 0x827a56e0
	if (cr0.eq) goto loc_827A56E0;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x827A56E0;
	sub_8275A120(ctx, base);
loc_827A56E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827a56c0
	if (!cr6.eq) goto loc_827A56C0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827a5700
	if (cr0.eq) goto loc_827A5700;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8279b208
	ctx.lr = 0x827A5700;
	sub_8279B208(ctx, base);
loc_827A5700:
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

__attribute__((alias("__imp__sub_827A5714"))) PPC_WEAK_FUNC(sub_827A5714);
PPC_FUNC_IMPL(__imp__sub_827A5714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5718"))) PPC_WEAK_FUNC(sub_827A5718);
PPC_FUNC_IMPL(__imp__sub_827A5718) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e4
	ctx.lr = 0x827A5720;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r15,1
	ctx.r15.s64 = 1;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// bgt 0x827a5740
	if (cr0.gt) goto loc_827A5740;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
loc_827A5740:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A5754;
	sub_82759FF0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// beq 0x827a577c
	if (cr0.eq) goto loc_827A577C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x827A5774;
	sub_82776900(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x827a5780
	goto loc_827A5780;
loc_827A577C:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_827A5780:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A5794;
	sub_82759FF0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x827a57b8
	if (cr0.eq) goto loc_827A57B8;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x827A57B0;
	sub_82776900(ctx, base);
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// b 0x827a57bc
	goto loc_827A57BC;
loc_827A57B8:
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
loc_827A57BC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82759ff0
	ctx.lr = 0x827A57D4;
	sub_82759FF0(ctx, base);
	// lis r17,-32068
	ctx.r17.s64 = -2101608448;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// stw r3,30324(r17)
	PPC_STORE_U32(ctx.r17.u32 + 30324, ctx.r3.u32);
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827a5824
	if (!cr6.gt) goto loc_827A5824;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// b 0x827a57f8
	goto loc_827A57F8;
loc_827A57F4:
	// lwz r3,30324(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30324);
loc_827A57F8:
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x827a580c
	if (cr6.lt) goto loc_827A580C;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_827A580C:
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827a57f4
	if (cr6.lt) goto loc_827A57F4;
loc_827A5824:
	// lwz r31,12(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lis r16,-32068
	ctx.r16.s64 = -2101608448;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827a5944
	if (!cr6.lt) goto loc_827A5944;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_827A583C:
	// lwz r11,30328(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 30328);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827a5930
	if (!cr6.eq) goto loc_827A5930;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a586c
	if (!cr6.lt) goto loc_827A586C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x827a5878
	goto loc_827A5878;
loc_827A586C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5874;
	sub_82794520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827A5878:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5894
	if (!cr6.lt) goto loc_827A5894;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x827a589c
	goto loc_827A589C;
loc_827A5894:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A589C;
	sub_82794520(ctx, base);
loc_827A589C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a58c8
	if (!cr6.lt) goto loc_827A58C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x827a58d0
	goto loc_827A58D0;
loc_827A58C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A58D0;
	sub_82794520(ctx, base);
loc_827A58D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a58ec
	if (!cr6.eq) goto loc_827A58EC;
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// b 0x827a5928
	goto loc_827A5928;
loc_827A58EC:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5908
	if (!cr6.lt) goto loc_827A5908;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x827a5910
	goto loc_827A5910;
loc_827A5908:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5910;
	sub_82794520(ctx, base);
loc_827A5910:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x827a5930
	if (!cr6.lt) goto loc_827A5930;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_827A5928:
	// bl 0x82794520
	ctx.lr = 0x827A592C;
	sub_82794520(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_827A5930:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827a583c
	if (cr6.lt) goto loc_827A583C;
loc_827A5944:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x827a5a6c
	if (cr6.eq) goto loc_827A5A6C;
	// addi r29,r25,-1
	ctx.r29.s64 = ctx.r25.s64 + -1;
loc_827A5958:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x827a59c0
	goto loc_827A59C0;
loc_827A5960:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82788238
	ctx.lr = 0x827A5968;
	sub_82788238(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,4(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A5978;
	sub_82794520(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a599c
	if (!cr6.lt) goto loc_827A599C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a59a4
	goto loc_827A59A4;
loc_827A599C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A59A4;
	sub_82794520(ctx, base);
loc_827A59A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r18,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r18.u32);
	// bl 0x827a5560
	ctx.lr = 0x827A59C0;
	sub_827A5560(ctx, base);
loc_827A59C0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a5960
	if (cr0.eq) goto loc_827A5960;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x827a5a60
	if (cr6.eq) goto loc_827A5A60;
	// lwz r31,12(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827a5a60
	if (!cr6.lt) goto loc_827A5A60;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_827A59F8:
	// lwz r11,30328(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 30328);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827a5a4c
	if (!cr6.eq) goto loc_827A5A4C;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5a24
	if (!cr6.lt) goto loc_827A5A24;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x827a5a2c
	goto loc_827A5A2C;
loc_827A5A24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5A2C;
	sub_82794520(ctx, base);
loc_827A5A2C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x827a5a4c
	if (!cr6.eq) goto loc_827A5A4C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A5A48;
	sub_82794520(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_827A5A4C:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827a59f8
	if (cr6.lt) goto loc_827A59F8;
loc_827A5A60:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x827a5958
	if (!cr6.eq) goto loc_827A5958;
loc_827A5A6C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r24,1712(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1712);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r21,4(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x827775a8
	ctx.lr = 0x827A5A8C;
	sub_827775A8(ctx, base);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a5d08
	if (!cr0.eq) goto loc_827A5D08;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827A5AA4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827a5ad0
	if (!cr6.gt) goto loc_827A5AD0;
	// addi r11,r25,8
	ctx.r11.s64 = ctx.r25.s64 + 8;
loc_827A5AB8:
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827a5ab8
	if (cr6.lt) goto loc_827A5AB8;
loc_827A5AD0:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x827a5b1c
	if (!cr6.gt) goto loc_827A5B1C;
loc_827A5ADC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x827882c8
	ctx.lr = 0x827A5AE8;
	sub_827882C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a5b10
	if (!cr0.eq) goto loc_827A5B10;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r11,r31,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// slw r10,r15,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u32);
loc_827A5B10:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r21
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x827a5adc
	if (cr6.lt) goto loc_827A5ADC;
loc_827A5B1C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82788238
	ctx.lr = 0x827A5B24;
	sub_82788238(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827a5b48
	if (!cr6.lt) goto loc_827A5B48;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a5b54
	goto loc_827A5B54;
loc_827A5B48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5B54;
	sub_82794520(ctx, base);
loc_827A5B54:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827a5bd0
	if (!cr6.gt) goto loc_827A5BD0;
loc_827A5B70:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x827a5b84
	if (!cr6.eq) goto loc_827A5B84;
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_827A5B84:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,30324(r17)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30324);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x827a5bc0
	if (cr0.lt) goto loc_827A5BC0;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r8,r11,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r15,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stwx r8,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r8.u32);
loc_827A5BC0:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827a5b70
	if (cr6.lt) goto loc_827A5B70;
loc_827A5BD0:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5bf4
	if (!cr6.lt) goto loc_827A5BF4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a5bfc
	goto loc_827A5BFC;
loc_827A5BF4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5BFC;
	sub_82794520(ctx, base);
loc_827A5BFC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi r28,0
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x827a5cc4
	if (!cr0.gt) goto loc_827A5CC4;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_827A5C18:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5c38
	if (!cr6.lt) goto loc_827A5C38;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x827a5c40
	goto loc_827A5C40;
loc_827A5C38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5C40;
	sub_82794520(ctx, base);
loc_827A5C40:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5c60
	if (!cr6.lt) goto loc_827A5C60;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x827a5c68
	goto loc_827A5C68;
loc_827A5C60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5C68;
	sub_82794520(ctx, base);
loc_827A5C68:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,30324(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30324);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x827a5ca4
	if (cr0.lt) goto loc_827A5CA4;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827a5cb8
	if (cr0.eq) goto loc_827A5CB8;
loc_827A5CA4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x827a5c18
	if (cr6.lt) goto loc_827A5C18;
	// b 0x827a5cc4
	goto loc_827A5CC4;
loc_827A5CB8:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_827A5CC4:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a5ce0
	if (!cr0.eq) goto loc_827A5CE0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8278bb18
	ctx.lr = 0x827A5CD4;
	sub_8278BB18(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x827a5dbc
	if (cr6.eq) goto loc_827A5DBC;
loc_827A5CE0:
	// lwz r10,30324(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30324);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// bl 0x82788300
	ctx.lr = 0x827A5CF8;
	sub_82788300(ctx, base);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a5aa4
	if (cr0.eq) goto loc_827A5AA4;
loc_827A5D08:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827a5d1c
	if (cr6.eq) goto loc_827A5D1C;
	// addi r4,r25,-4
	ctx.r4.s64 = ctx.r25.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x827A5D1C;
	sub_8275A120(ctx, base);
loc_827A5D1C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82788450
	ctx.lr = 0x827A5D24;
	sub_82788450(ctx, base);
	// lwz r11,2080(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2080);
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r4,r10,6728
	ctx.r4.s64 = ctx.r10.s64 + 6728;
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x82482408
	ctx.lr = 0x827A5D44;
	sub_82482408(ctx, base);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x827a5d60
	if (!cr6.gt) goto loc_827A5D60;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,6660
	ctx.r4.s64 = ctx.r11.s64 + 6660;
	// bl 0x82482408
	ctx.lr = 0x827A5D60;
	sub_82482408(ctx, base);
loc_827A5D60:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r11,6592
	ctx.r4.s64 = ctx.r11.s64 + 6592;
	// bl 0x82482408
	ctx.lr = 0x827A5D74;
	sub_82482408(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827a5db4
	if (!cr6.lt) goto loc_827A5DB4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_827A5D88:
	// lwz r9,30328(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 30328);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,30324(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30324);
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827a5d88
	if (cr6.lt) goto loc_827A5D88;
loc_827A5DB4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828d2834
	__restgprlr_15(ctx, base);
	return;
loc_827A5DBC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// bl 0x828d6090
	ctx.lr = 0x827A5DD4;
	longjmp(PPCGetJmpBuf(ctx.r3.u32), ctx.r4.s32);
}

__attribute__((alias("__imp__sub_827A5DD4"))) PPC_WEAK_FUNC(sub_827A5DD4);
PPC_FUNC_IMPL(__imp__sub_827A5DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5DD8"))) PPC_WEAK_FUNC(sub_827A5DD8);
PPC_FUNC_IMPL(__imp__sub_827A5DD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A5DE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827a5e54
	if (!cr6.gt) goto loc_827A5E54;
	// li r28,0
	ctx.r28.s64 = 0;
loc_827A5DFC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a5e18
	if (!cr6.lt) goto loc_827A5E18;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x827a5e20
	goto loc_827A5E20;
loc_827A5E18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A5E20;
	sub_82794520(ctx, base);
loc_827A5E20:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x827a5e40
	if (cr0.eq) goto loc_827A5E40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a56a8
	ctx.lr = 0x827A5E34;
	sub_827A56A8(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8275a120
	ctx.lr = 0x827A5E40;
	sub_8275A120(ctx, base);
loc_827A5E40:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827a5dfc
	if (cr6.lt) goto loc_827A5DFC;
loc_827A5E54:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827a5e68
	if (cr0.eq) goto loc_827A5E68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8279b208
	ctx.lr = 0x827A5E68;
	sub_8279B208(ctx, base);
loc_827A5E68:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r4,30328(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30328);
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x8275a120
	ctx.lr = 0x827A5E7C;
	sub_8275A120(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A5E84"))) PPC_WEAK_FUNC(sub_827A5E84);
PPC_FUNC_IMPL(__imp__sub_827A5E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5E88"))) PPC_WEAK_FUNC(sub_827A5E88);
PPC_FUNC_IMPL(__imp__sub_827A5E88) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a5ee4
	if (cr0.eq) goto loc_827A5EE4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_827A5E98:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_827A5EAC:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x827a5eec
	if (!cr6.eq) goto loc_827A5EEC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x827a5eac
	if (cr6.lt) goto loc_827A5EAC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_827A5ED0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827a5e98
	if (!cr0.eq) goto loc_827A5E98;
loc_827A5EE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827A5EEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a5ed0
	goto loc_827A5ED0;
}

__attribute__((alias("__imp__sub_827A5EF4"))) PPC_WEAK_FUNC(sub_827A5EF4);
PPC_FUNC_IMPL(__imp__sub_827A5EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5EF8"))) PPC_WEAK_FUNC(sub_827A5EF8);
PPC_FUNC_IMPL(__imp__sub_827A5EF8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827a5f28
	if (!cr0.eq) goto loc_827A5F28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a5fac
	goto loc_827A5FAC;
loc_827A5F28:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 * 12;
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x827a5f40
	if (!cr6.gt) goto loc_827A5F40;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
loc_827A5F40:
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x827a5e88
	ctx.lr = 0x827A5F48;
	sub_827A5E88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827a5fac
	if (cr0.eq) goto loc_827A5FAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 * 12;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_827A5F78:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x827a5fc4
	if (!cr6.eq) goto loc_827A5FC4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,12
	cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// blt cr6,0x827a5f78
	if (cr6.lt) goto loc_827A5F78;
	// li r11,1
	ctx.r11.s64 = 1;
loc_827A5F9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_827A5FAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827A5FC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a5f9c
	goto loc_827A5F9C;
}

__attribute__((alias("__imp__sub_827A5FCC"))) PPC_WEAK_FUNC(sub_827A5FCC);
PPC_FUNC_IMPL(__imp__sub_827A5FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A5FD0"))) PPC_WEAK_FUNC(sub_827A5FD0);
PPC_FUNC_IMPL(__imp__sub_827A5FD0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x827a6060
	if (cr6.gt) goto loc_827A6060;
	// mulli r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 * 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x827a5e88
	ctx.lr = 0x827A600C;
	sub_827A5E88(ctx, base);
	// subf r9,r6,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r6.s64;
	// b 0x827a604c
	goto loc_827A604C;
loc_827A6014:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bgt cr6,0x827a6040
	if (cr6.gt) goto loc_827A6040;
	// mulli r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 * 12;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x827a5e88
	ctx.lr = 0x827A6040;
	sub_827A5E88(ctx, base);
loc_827A6040:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_827A604C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x827a6014
	if (!cr6.gt) goto loc_827A6014;
loc_827A6060:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A6078"))) PPC_WEAK_FUNC(sub_827A6078);
PPC_FUNC_IMPL(__imp__sub_827A6078) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827A6080;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x827a60a0
	if (!cr6.gt) goto loc_827A60A0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x827a61a0
	goto loc_827A61A0;
loc_827A60A0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r31,20(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_827A60B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_827A60CC:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x827a6104
	if (!cr6.eq) goto loc_827A6104;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x827a60cc
	if (cr6.lt) goto loc_827A60CC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_827A60F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a610c
	if (!cr0.eq) goto loc_827A610C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x827a60b8
	goto loc_827A60B8;
loc_827A6104:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x827a60f0
	goto loc_827A60F0;
loc_827A610C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A6124;
	sub_82759FF0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x827a614c
	if (cr0.eq) goto loc_827A614C;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// stw r27,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x827a6150
	goto loc_827A6150;
loc_827A614C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_827A6150:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r27,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r27.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// bne cr6,0x827a619c
	if (!cr6.eq) goto loc_827A619C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// b 0x827a61a0
	goto loc_827A61A0;
loc_827A619C:
	// stw r3,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r3.u32);
loc_827A61A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A61A8"))) PPC_WEAK_FUNC(sub_827A61A8);
PPC_FUNC_IMPL(__imp__sub_827A61A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x827A61B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// bl 0x827a5ef8
	ctx.lr = 0x827A61D8;
	sub_827A5EF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827a62b0
	if (!cr0.eq) goto loc_827A62B0;
loc_827A61E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a6078
	ctx.lr = 0x827A61EC;
	sub_827A6078(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A6204;
	sub_82759FF0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x827a6228
	if (cr0.eq) goto loc_827A6228;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// stw r25,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// stw r25,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x827a622c
	goto loc_827A622C;
loc_827A6228:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_827A622C:
	// stw r25,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r25.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r25,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r25.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// beq cr6,0x827a6250
	if (cr6.eq) goto loc_827A6250;
	// stw r29,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r29.u32);
loc_827A6250:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x827a6284
	if (!cr0.eq) goto loc_827A6284;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x827a6284
	if (cr6.gt) goto loc_827A6284;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827A6284:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a5fd0
	ctx.lr = 0x827A6290;
	sub_827A5FD0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a5ef8
	ctx.lr = 0x827A62A0;
	sub_827A5EF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827a61e0
	if (cr0.eq) goto loc_827A61E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
loc_827A62B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A62B8"))) PPC_WEAK_FUNC(sub_827A62B8);
PPC_FUNC_IMPL(__imp__sub_827A62B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827A62C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,380
	ctx.r5.s64 = 380;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x828d2890
	ctx.lr = 0x827A62E8;
	sub_828D2890(ctx, base);
	// mulli r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 * 12;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x828d2930
	ctx.lr = 0x827A62FC;
	sub_828D2930(ctx, base);
	// lwz r29,432(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 432);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A630C;
	sub_82759FF0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x827a6330
	if (cr0.eq) goto loc_827A6330;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x827a6334
	goto loc_827A6334;
loc_827A6330:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_827A6334:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addic. r29,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r29.s64 = ctx.r28.s64 + 1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// ble 0x827a63b8
	if (!cr0.gt) goto loc_827A63B8;
loc_827A6368:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827a6384
	if (!cr6.eq) goto loc_827A6384;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_827A6384:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x827a5fd0
	ctx.lr = 0x827A6398;
	sub_827A5FD0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a61a8
	ctx.lr = 0x827A63AC;
	sub_827A61A8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x827a6368
	if (cr6.lt) goto loc_827A6368;
loc_827A63B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A63C4"))) PPC_WEAK_FUNC(sub_827A63C4);
PPC_FUNC_IMPL(__imp__sub_827A63C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A63C8"))) PPC_WEAK_FUNC(sub_827A63C8);
PPC_FUNC_IMPL(__imp__sub_827A63C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A63D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r31,432(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A63F4;
	sub_82759FF0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// beq 0x827a6410
	if (cr0.eq) goto loc_827A6410;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,432(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x827A640C;
	sub_82776900(ctx, base);
	// b 0x827a6414
	goto loc_827A6414;
loc_827A6410:
	// li r30,0
	ctx.r30.s64 = 0;
loc_827A6414:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A6424"))) PPC_WEAK_FUNC(sub_827A6424);
PPC_FUNC_IMPL(__imp__sub_827A6424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A6428"))) PPC_WEAK_FUNC(sub_827A6428);
PPC_FUNC_IMPL(__imp__sub_827A6428) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x827A6430;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,96(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr. r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble 0x827a65f4
	if (!cr0.gt) goto loc_827A65F4;
	// li r25,0
	ctx.r25.s64 = 0;
loc_827A644C:
	// addi r24,r27,1
	ctx.r24.s64 = ctx.r27.s64 + 1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a65e4
	if (!cr6.lt) goto loc_827A65E4;
	// addi r26,r25,4
	ctx.r26.s64 = ctx.r25.s64 + 4;
loc_827A6460:
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a6474
	if (!cr6.lt) goto loc_827A6474;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x827a6480
	goto loc_827A6480;
loc_827A6474:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A6480;
	sub_82794520(ctx, base);
loc_827A6480:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bge cr6,0x827a64a4
	if (!cr6.lt) goto loc_827A64A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x827a64b0
	goto loc_827A64B0;
loc_827A64A4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A64B0;
	sub_82794520(ctx, base);
loc_827A64B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r29,r11,r30
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// bge cr6,0x827a64d8
	if (!cr6.lt) goto loc_827A64D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x827a64e4
	goto loc_827A64E4;
loc_827A64D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A64E4;
	sub_82794520(ctx, base);
loc_827A64E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bge cr6,0x827a6508
	if (!cr6.lt) goto loc_827A6508;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x827a6514
	goto loc_827A6514;
loc_827A6508:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A6514;
	sub_82794520(ctx, base);
loc_827A6514:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827a65d0
	if (!cr6.lt) goto loc_827A65D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a6544
	if (!cr6.lt) goto loc_827A6544;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x827a6550
	goto loc_827A6550;
loc_827A6544:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A6550;
	sub_82794520(ctx, base);
loc_827A6550:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a656c
	if (!cr6.lt) goto loc_827A656C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x827a657c
	goto loc_827A657C;
loc_827A656C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A6578;
	sub_82794520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827A657C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a6594
	if (!cr6.lt) goto loc_827A6594;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x827a65a0
	goto loc_827A65A0;
loc_827A6594:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A65A0;
	sub_82794520(ctx, base);
loc_827A65A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a65c0
	if (!cr6.lt) goto loc_827A65C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x827a65cc
	goto loc_827A65CC;
loc_827A65C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A65CC;
	sub_82794520(ctx, base);
loc_827A65CC:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_827A65D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827a6460
	if (cr6.lt) goto loc_827A6460;
loc_827A65E4:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r27,r23
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x827a644c
	if (cr6.lt) goto loc_827A644C;
loc_827A65F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A65FC"))) PPC_WEAK_FUNC(sub_827A65FC);
PPC_FUNC_IMPL(__imp__sub_827A65FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A6600"))) PPC_WEAK_FUNC(sub_827A6600);
PPC_FUNC_IMPL(__imp__sub_827A6600) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x827A6608;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r31,432(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A6628;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// beq 0x827a664c
	if (cr0.eq) goto loc_827A664C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x827A6644;
	sub_82776900(ctx, base);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x827a6650
	goto loc_827A6650;
loc_827A664C:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_827A6650:
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r31,432(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A6668;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// beq 0x827a6684
	if (cr0.eq) goto loc_827A6684;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x827A6680;
	sub_82776900(ctx, base);
	// b 0x827a6688
	goto loc_827A6688;
loc_827A6684:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_827A6688:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_827A6690:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a6730
	if (!cr0.eq) goto loc_827A6730;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827a6704
	if (cr6.eq) goto loc_827A6704;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x827a66c0
	if (!cr0.lt) goto loc_827A66C0;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
loc_827A66C0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A66DC;
	sub_82794520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A66F0;
	sub_82794520(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x827a6690
	goto loc_827A6690;
loc_827A6704:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827a6720
	if (!cr6.eq) goto loc_827A6720;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
loc_827A6720:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827a672c
	if (cr6.eq) goto loc_827A672C;
	// stw r31,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r31.u32);
loc_827A672C:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_827A6730:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x827a6690
	if (!cr0.eq) goto loc_827A6690;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827a6764
	if (!cr6.eq) goto loc_827A6764;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827a6760
	if (cr6.eq) goto loc_827A6760;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_827A6760:
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_827A6764:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a67b4
	if (!cr0.eq) goto loc_827A67B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x82788238
	ctx.lr = 0x827A6780;
	sub_82788238(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827a6690
	if (!cr6.eq) goto loc_827A6690;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827a67a8
	if (cr6.eq) goto loc_827A67A8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x827a67ac
	goto loc_827A67AC;
loc_827A67A8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827A67AC:
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x827a6690
	goto loc_827A6690;
loc_827A67B4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a688c
	if (cr0.eq) goto loc_827A688C;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a67dc
	if (!cr6.lt) goto loc_827A67DC;
loc_827A67D0:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x827a67e8
	goto loc_827A67E8;
loc_827A67DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82794520
	ctx.lr = 0x827A67E8;
	sub_82794520(ctx, base);
loc_827A67E8:
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x827a6878
	if (!cr6.gt) goto loc_827A6878;
	// lwz r31,432(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A6808;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x827a6828
	if (cr0.eq) goto loc_827A6828;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x827a63c8
	ctx.lr = 0x827A6820;
	sub_827A63C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x827a682c
	goto loc_827A682C;
loc_827A6828:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_827A682C:
	// lwz r3,96(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A6838;
	sub_82794520(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_827A6848:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827a6864
	if (cr6.eq) goto loc_827A6864;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x827A685C;
	sub_82794520(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_827A6864:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827a6878
	if (cr6.eq) goto loc_827A6878;
	// lwz r30,32(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// b 0x827a6848
	goto loc_827A6848;
loc_827A6878:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827a67d0
	if (cr6.lt) goto loc_827A67D0;
loc_827A688C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A6894"))) PPC_WEAK_FUNC(sub_827A6894);
PPC_FUNC_IMPL(__imp__sub_827A6894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A6898"))) PPC_WEAK_FUNC(sub_827A6898);
PPC_FUNC_IMPL(__imp__sub_827A6898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e4
	ctx.lr = 0x827A68A0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a62b8
	ctx.lr = 0x827A68C4;
	sub_827A62B8(ctx, base);
	// lwz r30,432(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 432);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82759ff0
	ctx.lr = 0x827A68D8;
	sub_82759FF0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// beq 0x827a68f8
	if (cr0.eq) goto loc_827A68F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x827A68F4;
	sub_82776900(ctx, base);
	// b 0x827a68fc
	goto loc_827A68FC;
loc_827A68F8:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_827A68FC:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// stw r29,96(r20)
	PPC_STORE_U32(ctx.r20.u32 + 96, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827a6600
	ctx.lr = 0x827A6918;
	sub_827A6600(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x827a6428
	ctx.lr = 0x827A6920;
	sub_827A6428(ctx, base);
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8275a708
	ctx.lr = 0x827A692C;
	sub_8275A708(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x827a695c
	if (!cr6.gt) goto loc_827A695C;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_827A6940:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r19.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// blt cr6,0x827a6940
	if (cr6.lt) goto loc_827A6940;
loc_827A695C:
	// lwz r11,96(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// li r18,-1
	ctx.r18.s64 = -1;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a6d5c
	if (cr0.eq) goto loc_827A6D5C;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
loc_827A6978:
	// lwz r3,96(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a6994
	if (!cr6.lt) goto loc_827A6994;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// b 0x827a699c
	goto loc_827A699C;
loc_827A6994:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82794520
	ctx.lr = 0x827A699C;
	sub_82794520(ctx, base);
loc_827A699C:
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r22,0(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a6a40
	if (cr0.eq) goto loc_827A6A40;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_827A69C0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a69d8
	if (!cr6.lt) goto loc_827A69D8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x827a69e0
	goto loc_827A69E0;
loc_827A69D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A69E0;
	sub_82794520(ctx, base);
loc_827A69E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x827a6a28
	if (!cr6.gt) goto loc_827A6A28;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_827A69FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827a6a24
	if (!cr6.eq) goto loc_827A6A24;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r22
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x827a69fc
	if (cr6.lt) goto loc_827A69FC;
	// b 0x827a6a28
	goto loc_827A6A28;
loc_827A6A24:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_827A6A28:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827a69c0
	if (cr6.lt) goto loc_827A69C0;
loc_827A6A40:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne 0x827a6ad8
	if (!cr0.eq) goto loc_827A6AD8;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a6d44
	if (cr0.eq) goto loc_827A6D44;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_827A6A60:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a6a78
	if (!cr6.lt) goto loc_827A6A78;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x827a6a80
	goto loc_827A6A80;
loc_827A6A78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x827A6A80;
	sub_82794520(ctx, base);
loc_827A6A80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x827a6abc
	if (!cr6.gt) goto loc_827A6ABC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_827A6A9C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x827a6abc
	if (!cr6.eq) goto loc_827A6ABC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r22
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x827a6a9c
	if (cr6.lt) goto loc_827A6A9C;
loc_827A6ABC:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827a6a60
	if (cr6.lt) goto loc_827A6A60;
	// b 0x827a6d44
	goto loc_827A6D44;
loc_827A6AD8:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a6d44
	if (cr0.eq) goto loc_827A6D44;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_827A6AEC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827a6b04
	if (!cr6.lt) goto loc_827A6B04;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// b 0x827a6b0c
	goto loc_827A6B0C;
loc_827A6B04:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82794520
	ctx.lr = 0x827A6B0C;
	sub_82794520(ctx, base);
loc_827A6B0C:
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x827a6d2c
	if (!cr6.gt) goto loc_827A6D2C;
	// addi r24,r22,-1
	ctx.r24.s64 = ctx.r22.s64 + -1;
loc_827A6B20:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x827a6c10
	if (!cr6.eq) goto loc_827A6C10;
	// lwz r10,52(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x827a6b88
	if (cr0.eq) goto loc_827A6B88;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827a6b8c
	if (cr6.eq) goto loc_827A6B8C;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827a6b88
	if (cr6.eq) goto loc_827A6B88;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x827a6b7c
	goto loc_827A6B7C;
loc_827A6B5C:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A6B74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a6b88
	if (!cr0.eq) goto loc_827A6B88;
loc_827A6B7C:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x827a6b5c
	if (!cr6.eq) goto loc_827A6B5C;
	// b 0x827a6b8c
	goto loc_827A6B8C;
loc_827A6B88:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_827A6B8C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,428(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827a6bd4
	if (!cr6.eq) goto loc_827A6BD4;
	// bl 0x82759ff0
	ctx.lr = 0x827A6BB0;
	sub_82759FF0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x827a6bfc
	if (cr0.eq) goto loc_827A6BFC;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82798600
	ctx.lr = 0x827A6BD0;
	sub_82798600(ctx, base);
	// b 0x827a6c00
	goto loc_827A6C00;
loc_827A6BD4:
	// bl 0x82759ff0
	ctx.lr = 0x827A6BD8;
	sub_82759FF0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x827a6bfc
	if (cr0.eq) goto loc_827A6BFC;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82798598
	ctx.lr = 0x827A6BF8;
	sub_82798598(ctx, base);
	// b 0x827a6c00
	goto loc_827A6C00;
loc_827A6BFC:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_827A6C00:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82799a48
	ctx.lr = 0x827A6C10;
	sub_82799A48(ctx, base);
loc_827A6C10:
	// cmpw cr6,r28,r24
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x827a6cf0
	if (!cr6.eq) goto loc_827A6CF0;
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lwz r10,52(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x827a6c78
	if (cr0.eq) goto loc_827A6C78;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827a6c7c
	if (cr6.eq) goto loc_827A6C7C;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827a6c78
	if (cr6.eq) goto loc_827A6C78;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x827a6c70
	goto loc_827A6C70;
loc_827A6C50:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A6C68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a6c7c
	if (!cr0.eq) goto loc_827A6C7C;
loc_827A6C70:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827a6c50
	if (!cr6.eq) goto loc_827A6C50;
loc_827A6C78:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_827A6C7C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,428(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827a6cbc
	if (!cr6.eq) goto loc_827A6CBC;
	// bl 0x82759ff0
	ctx.lr = 0x827A6CA0;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x827a6cdc
	if (cr0.eq) goto loc_827A6CDC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x827986b0
	ctx.lr = 0x827A6CB8;
	sub_827986B0(ctx, base);
	// b 0x827a6ce0
	goto loc_827A6CE0;
loc_827A6CBC:
	// bl 0x82759ff0
	ctx.lr = 0x827A6CC0;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x827a6cdc
	if (cr0.eq) goto loc_827A6CDC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82798668
	ctx.lr = 0x827A6CD8;
	sub_82798668(ctx, base);
	// b 0x827a6ce0
	goto loc_827A6CE0;
loc_827A6CDC:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_827A6CE0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827999e8
	ctx.lr = 0x827A6CF0;
	sub_827999E8(ctx, base);
loc_827A6CF0:
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r28,r22
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// add r9,r11,r17
	ctx.r9.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blt cr6,0x827a6b20
	if (cr6.lt) goto loc_827A6B20;
loc_827A6D2C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827a6aec
	if (cr6.lt) goto loc_827A6AEC;
loc_827A6D44:
	// lwz r11,96(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827a6978
	if (cr6.lt) goto loc_827A6978;
loc_827A6D5C:
	// addi r5,r18,1
	ctx.r5.s64 = ctx.r18.s64 + 1;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,6796
	ctx.r4.s64 = ctx.r11.s64 + 6796;
	// stw r5,508(r21)
	PPC_STORE_U32(ctx.r21.u32 + 508, ctx.r5.u32);
	// bl 0x82482408
	ctx.lr = 0x827A6D74;
	sub_82482408(ctx, base);
	// lwz r3,420(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 420);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r11,412(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 412);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A6D88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d2834
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A6D90"))) PPC_WEAK_FUNC(sub_827A6D90);
PPC_FUNC_IMPL(__imp__sub_827A6D90) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827A6D98;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f0,2548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x827a6dc0
	if (cr6.lt) goto loc_827A6DC0;
	// li r27,43
	ctx.r27.s64 = 43;
	// b 0x827a6dc8
	goto loc_827A6DC8;
loc_827A6DC0:
	// li r27,45
	ctx.r27.s64 = 45;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_827A6DC8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// li r31,0
	ctx.r31.s64 = 0;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r29,r11,21204
	ctx.r29.s64 = ctx.r11.s64 + 21204;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f30,3540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3540);
	ctx.f30.f64 = double(temp.f32);
loc_827A6E14:
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d1b68
	ctx.lr = 0x827A6E54;
	sub_828D1B68(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x827a6e14
	if (cr6.lt) goto loc_827A6E14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,6836
	ctx.r4.s64 = ctx.r11.s64 + 6836;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// extsb r5,r27
	ctx.r5.s64 = ctx.r27.s8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// bl 0x828d1b68
	ctx.lr = 0x827A6E84;
	sub_828D1B68(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A6E94"))) PPC_WEAK_FUNC(sub_827A6E94);
PPC_FUNC_IMPL(__imp__sub_827A6E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A6E98"))) PPC_WEAK_FUNC(sub_827A6E98);
PPC_FUNC_IMPL(__imp__sub_827A6E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A6EA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r28,r11,3888
	ctx.r28.s64 = ctx.r11.s64 + 3888;
	// beq 0x827a6ecc
	if (cr0.eq) goto loc_827A6ECC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a6edc
	goto loc_827A6EDC;
loc_827A6ECC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_827A6EDC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a6ef4
	if (!cr0.eq) goto loc_827A6EF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,6856
	ctx.r11.s64 = ctx.r11.s64 + 6856;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x827a6f38
	goto loc_827A6F38;
loc_827A6EF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A6F08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a6f44
	if (!cr0.eq) goto loc_827A6F44;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,6856
	ctx.r11.s64 = ctx.r11.s64 + 6856;
	// beq 0x827a6f34
	if (cr0.eq) goto loc_827A6F34;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827a6f38
	goto loc_827A6F38;
loc_827A6F34:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_827A6F38:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_827A6F44:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A6F60"))) PPC_WEAK_FUNC(sub_827A6F60);
PPC_FUNC_IMPL(__imp__sub_827A6F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827A6F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r29,r11,3888
	ctx.r29.s64 = ctx.r11.s64 + 3888;
	// beq 0x827a6f90
	if (cr0.eq) goto loc_827A6F90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827a6fa0
	goto loc_827A6FA0;
loc_827A6F90:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_827A6FA0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a6fb8
	if (!cr0.eq) goto loc_827A6FB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,6856
	ctx.r11.s64 = ctx.r11.s64 + 6856;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x827a6ffc
	goto loc_827A6FFC;
loc_827A6FB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A6FCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a700c
	if (!cr0.eq) goto loc_827A700C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,6856
	ctx.r11.s64 = ctx.r11.s64 + 6856;
	// beq 0x827a6ff8
	if (cr0.eq) goto loc_827A6FF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827a6ffc
	goto loc_827A6FFC;
loc_827A6FF8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_827A6FFC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_827A700C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827a703c
	if (!cr6.eq) goto loc_827A703C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,80
	ctx.r7.s64 = 80;
	// addi r6,r11,7176
	ctx.r6.s64 = ctx.r11.s64 + 7176;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,7160
	ctx.r5.s64 = ctx.r11.s64 + 7160;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827A703C;
	sub_826CA560(ctx, base);
loc_827A703C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A7044"))) PPC_WEAK_FUNC(sub_827A7044);
PPC_FUNC_IMPL(__imp__sub_827A7044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7048"))) PPC_WEAK_FUNC(sub_827A7048);
PPC_FUNC_IMPL(__imp__sub_827A7048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x827A7050;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A7078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r27,r11,6920
	ctx.r27.s64 = ctx.r11.s64 + 6920;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,5888
	ctx.r29.s64 = ctx.r11.s64 + 5888;
	// ble 0x827a70d0
	if (!cr0.gt) goto loc_827A70D0;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r10,r29,6
	ctx.r10.s64 = ctx.r29.s64 + 6;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a70c0
	if (cr0.eq) goto loc_827A70C0;
	// lbz r10,159(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 159);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x827a70c0
	if (cr0.eq) goto loc_827A70C0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_827A70C0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x827a720c
	if (cr6.eq) goto loc_827A720C;
loc_827A70D0:
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r28,r11,3888
	ctx.r28.s64 = ctx.r11.s64 + 3888;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7194
	if (cr0.eq) goto loc_827A7194;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A7100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x827a7124
	if (cr6.gt) goto loc_827A7124;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A711C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7194
	if (cr0.eq) goto loc_827A7194;
loc_827A7124:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A7138;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r29,6
	ctx.r10.s64 = ctx.r29.s64 + 6;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,58
	ctx.r9.s64 = ctx.r11.s64 + 58;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x827a7184
	if (cr0.eq) goto loc_827A7184;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lbz r11,158(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 158);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a7184
	if (cr0.eq) goto loc_827A7184;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_827A7184:
	// mulli r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 * 5;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
loc_827A7194:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x827a720c
	if (cr6.eq) goto loc_827A720C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a720c
	if (cr0.eq) goto loc_827A720C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A71C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x827a720c
	if (!cr6.gt) goto loc_827A720C;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r10,r29,6
	ctx.r10.s64 = ctx.r29.s64 + 6;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x827a71fc
	if (cr0.eq) goto loc_827A71FC;
	// lbz r11,161(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 161);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a71fc
	if (cr0.eq) goto loc_827A71FC;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_827A71FC:
	// mulli r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 * 5;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
loc_827A720C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827a721c
	if (cr6.gt) goto loc_827A721C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827A721C:
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A7234;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7244
	if (cr0.eq) goto loc_827A7244;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bgt cr6,0x827a7258
	if (cr6.gt) goto loc_827A7258;
loc_827A7244:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a725c
	if (cr0.eq) goto loc_827A725C;
	// cmpw cr6,r25,r26
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x827a725c
	if (!cr6.lt) goto loc_827A725C;
loc_827A7258:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_827A725C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A7268"))) PPC_WEAK_FUNC(sub_827A7268);
PPC_FUNC_IMPL(__imp__sub_827A7268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827A7270;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A7290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a72a0
	if (cr0.eq) goto loc_827A72A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a73b4
	goto loc_827A73B4;
loc_827A72A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a7048
	ctx.lr = 0x827A72AC;
	sub_827A7048(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// addi r29,r11,7176
	ctx.r29.s64 = ctx.r11.s64 + 7176;
	// bne cr6,0x827a72e4
	if (!cr6.eq) goto loc_827A72E4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,169
	ctx.r7.s64 = 169;
	// addi r5,r11,7304
	ctx.r5.s64 = ctx.r11.s64 + 7304;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A72E4;
	sub_826CA560(ctx, base);
loc_827A72E4:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827a7310
	if (cr0.eq) goto loc_827A7310;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x827a7310
	if (cr6.eq) goto loc_827A7310;
	// lbz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827a7310
	if (cr6.eq) goto loc_827A7310;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827a73b4
	goto loc_827A73B4;
loc_827A7310:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// mulli r9,r9,52
	ctx.r9.s64 = ctx.r9.s64 * 52;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7360
	if (cr0.eq) goto loc_827A7360;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// ble cr6,0x827a7350
	if (!cr6.gt) goto loc_827A7350;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,182
	ctx.r7.s64 = 182;
	// addi r5,r11,7284
	ctx.r5.s64 = ctx.r11.s64 + 7284;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A7350;
	sub_826CA560(ctx, base);
loc_827A7350:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mulli r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 * 5;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// b 0x827a7390
	goto loc_827A7390;
loc_827A7360:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x827a7384
	if (!cr6.gt) goto loc_827A7384;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,185
	ctx.r7.s64 = 185;
	// addi r5,r11,7264
	ctx.r5.s64 = ctx.r11.s64 + 7264;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A7384;
	sub_826CA560(ctx, base);
loc_827A7384:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mulli r11,r28,5
	ctx.r11.s64 = ctx.r28.s64 * 5;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827A7390:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,6920
	ctx.r11.s64 = ctx.r11.s64 + 6920;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_827A73B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A73BC"))) PPC_WEAK_FUNC(sub_827A73BC);
PPC_FUNC_IMPL(__imp__sub_827A73BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A73C0"))) PPC_WEAK_FUNC(sub_827A73C0);
PPC_FUNC_IMPL(__imp__sub_827A73C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827A73C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A73E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a7540
	if (!cr0.eq) goto loc_827A7540;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a7048
	ctx.lr = 0x827A73FC;
	sub_827A7048(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// addi r29,r11,7176
	ctx.r29.s64 = ctx.r11.s64 + 7176;
	// bne cr6,0x827a7434
	if (!cr6.eq) goto loc_827A7434;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,202
	ctx.r7.s64 = 202;
	// addi r5,r11,7304
	ctx.r5.s64 = ctx.r11.s64 + 7304;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A7434;
	sub_826CA560(ctx, base);
loc_827A7434:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a744c
	if (!cr6.eq) goto loc_827A744C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r11.u8);
	// b 0x827a7480
	goto loc_827A7480;
loc_827A744C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827a7480
	if (cr6.eq) goto loc_827A7480;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827a7480
	if (cr6.eq) goto loc_827A7480;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,207
	ctx.r7.s64 = 207;
	// addi r5,r11,7324
	ctx.r5.s64 = ctx.r11.s64 + 7324;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A7480;
	sub_826CA560(ctx, base);
loc_827A7480:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a74d0
	if (cr0.eq) goto loc_827A74D0;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// ble cr6,0x827a74c0
	if (!cr6.gt) goto loc_827A74C0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,211
	ctx.r7.s64 = 211;
	// addi r5,r11,7284
	ctx.r5.s64 = ctx.r11.s64 + 7284;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A74C0;
	sub_826CA560(ctx, base);
loc_827A74C0:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mulli r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 * 5;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// b 0x827a7504
	goto loc_827A7504;
loc_827A74D0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x827a74f8
	if (!cr6.gt) goto loc_827A74F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,214
	ctx.r7.s64 = 214;
	// addi r5,r11,7264
	ctx.r5.s64 = ctx.r11.s64 + 7264;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A74F8;
	sub_826CA560(ctx, base);
loc_827A74F8:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mulli r11,r27,5
	ctx.r11.s64 = ctx.r27.s64 * 5;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827A7504:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,6920
	ctx.r11.s64 = ctx.r11.s64 + 6920;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827a7540
	if (!cr6.eq) goto loc_827A7540;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,218
	ctx.r7.s64 = 218;
	// addi r5,r11,7160
	ctx.r5.s64 = ctx.r11.s64 + 7160;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A7540;
	sub_826CA560(ctx, base);
loc_827A7540:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A7548"))) PPC_WEAK_FUNC(sub_827A7548);
PPC_FUNC_IMPL(__imp__sub_827A7548) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	// lwz r11,228(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// beq 0x827a7564
	if (cr0.eq) goto loc_827A7564;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x827a7574
	goto loc_827A7574;
loc_827A7564:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_827A7574:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827a758c
	if (!cr0.eq) goto loc_827A758C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_827A758C:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827a75b0
	if (cr0.eq) goto loc_827A75B0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_827A75B0:
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A75C8"))) PPC_WEAK_FUNC(sub_827A75C8);
PPC_FUNC_IMPL(__imp__sub_827A75C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	// lwz r11,228(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// beq 0x827a75e4
	if (cr0.eq) goto loc_827A75E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x827a75f4
	goto loc_827A75F4;
loc_827A75E4:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_827A75F4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827a760c
	if (!cr0.eq) goto loc_827A760C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_827A760C:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827a7630
	if (cr0.eq) goto loc_827A7630;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_827A7630:
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A7648"))) PPC_WEAK_FUNC(sub_827A7648);
PPC_FUNC_IMPL(__imp__sub_827A7648) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827a7674
	if (!cr6.gt) goto loc_827A7674;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a766c
	if (!cr0.eq) goto loc_827A766C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x827a7674
	if (!cr6.eq) goto loc_827A7674;
loc_827A766C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_827A7674:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A767C"))) PPC_WEAK_FUNC(sub_827A767C);
PPC_FUNC_IMPL(__imp__sub_827A767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7680"))) PPC_WEAK_FUNC(sub_827A7680);
PPC_FUNC_IMPL(__imp__sub_827A7680) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,104
	cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x827a76d0
	if (cr6.eq) goto loc_827A76D0;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x827a76d0
	if (cr6.eq) goto loc_827A76D0;
	// cmpwi cr6,r11,106
	cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// beq cr6,0x827a76d0
	if (cr6.eq) goto loc_827A76D0;
	// cmpwi cr6,r11,107
	cr6.compare<int32_t>(ctx.r11.s32, 107, ctx.xer);
	// beq cr6,0x827a76d0
	if (cr6.eq) goto loc_827A76D0;
	// cmpwi cr6,r11,108
	cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// beq cr6,0x827a76d0
	if (cr6.eq) goto loc_827A76D0;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// beq cr6,0x827a76d0
	if (cr6.eq) goto loc_827A76D0;
	// cmpwi cr6,r11,110
	cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x827a76d0
	if (cr6.eq) goto loc_827A76D0;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x827a76d0
	if (cr6.eq) goto loc_827A76D0;
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x827a76d4
	if (!cr6.eq) goto loc_827A76D4;
loc_827A76D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827A76D4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A76DC"))) PPC_WEAK_FUNC(sub_827A76DC);
PPC_FUNC_IMPL(__imp__sub_827A76DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A76E0"))) PPC_WEAK_FUNC(sub_827A76E0);
PPC_FUNC_IMPL(__imp__sub_827A76E0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,113
	cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x827a7708
	if (cr6.eq) goto loc_827A7708;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x827a7708
	if (cr6.eq) goto loc_827A7708;
	// cmpwi cr6,r11,115
	cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x827a7708
	if (cr6.eq) goto loc_827A7708;
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x827a770c
	if (!cr6.eq) goto loc_827A770C;
loc_827A7708:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827A770C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A7714"))) PPC_WEAK_FUNC(sub_827A7714);
PPC_FUNC_IMPL(__imp__sub_827A7714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7718"))) PPC_WEAK_FUNC(sub_827A7718);
PPC_FUNC_IMPL(__imp__sub_827A7718) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x827a7748
	if (cr6.eq) goto loc_827A7748;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x827a7748
	if (cr6.eq) goto loc_827A7748;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x827a7748
	if (cr6.eq) goto loc_827A7748;
	// cmpwi cr6,r11,142
	cr6.compare<int32_t>(ctx.r11.s32, 142, ctx.xer);
	// beq cr6,0x827a7748
	if (cr6.eq) goto loc_827A7748;
	// cmpwi cr6,r11,143
	cr6.compare<int32_t>(ctx.r11.s32, 143, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x827a774c
	if (!cr6.eq) goto loc_827A774C;
loc_827A7748:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827A774C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A7754"))) PPC_WEAK_FUNC(sub_827A7754);
PPC_FUNC_IMPL(__imp__sub_827A7754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7758"))) PPC_WEAK_FUNC(sub_827A7758);
PPC_FUNC_IMPL(__imp__sub_827A7758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x827a7838
	if (!cr6.eq) goto loc_827A7838;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a77a8
	if (cr0.eq) goto loc_827A77A8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827a77a8
	if (!cr6.eq) goto loc_827A77A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827967a8
	ctx.lr = 0x827A77A0;
	sub_827967A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827a7844
	if (!cr0.eq) goto loc_827A7844;
loc_827A77A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A77BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7830
	if (cr0.eq) goto loc_827A7830;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A77D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a77ec
	if (cr0.eq) goto loc_827A77EC;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827a7844
	if (cr6.eq) goto loc_827A7844;
loc_827A77EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A7800;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7830
	if (cr0.eq) goto loc_827A7830;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A781C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7830
	if (cr0.eq) goto loc_827A7830;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827a7844
	if (cr6.eq) goto loc_827A7844;
loc_827A7830:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a7848
	goto loc_827A7848;
loc_827A7838:
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x827a7848
	if (cr6.eq) goto loc_827A7848;
loc_827A7844:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A7848:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A7860"))) PPC_WEAK_FUNC(sub_827A7860);
PPC_FUNC_IMPL(__imp__sub_827A7860) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827a7890
	if (cr6.eq) goto loc_827A7890;
loc_827A7878:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x827a7878
	if (!cr6.eq) goto loc_827A7878;
loc_827A7890:
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x827a78b4
	if (cr6.eq) goto loc_827A78B4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827A789C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bne cr6,0x827a789c
	if (!cr6.eq) goto loc_827A789C;
loc_827A78B4:
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A78BC"))) PPC_WEAK_FUNC(sub_827A78BC);
PPC_FUNC_IMPL(__imp__sub_827A78BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A78C0"))) PPC_WEAK_FUNC(sub_827A78C0);
PPC_FUNC_IMPL(__imp__sub_827A78C0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A78CC"))) PPC_WEAK_FUNC(sub_827A78CC);
PPC_FUNC_IMPL(__imp__sub_827A78CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A78D0"))) PPC_WEAK_FUNC(sub_827A78D0);
PPC_FUNC_IMPL(__imp__sub_827A78D0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7924
	if (cr0.eq) goto loc_827A7924;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x827a7918
	if (cr6.lt) goto loc_827A7918;
	// beq cr6,0x827a790c
	if (cr6.eq) goto loc_827A790C;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x827a7900
	if (cr6.lt) goto loc_827A7900;
	// bne cr6,0x827a7924
	if (!cr6.eq) goto loc_827A7924;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// blr 
	return;
loc_827A7900:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// blr 
	return;
loc_827A790C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// blr 
	return;
loc_827A7918:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_827A7924:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A792C"))) PPC_WEAK_FUNC(sub_827A792C);
PPC_FUNC_IMPL(__imp__sub_827A792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7930"))) PPC_WEAK_FUNC(sub_827A7930);
PPC_FUNC_IMPL(__imp__sub_827A7930) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7988
	if (cr0.eq) goto loc_827A7988;
	// blt cr6,0x827a797c
	if (cr6.lt) goto loc_827A797C;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x827a7970
	if (cr6.eq) goto loc_827A7970;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x827a7964
	if (cr6.lt) goto loc_827A7964;
	// bne cr6,0x827a79a0
	if (!cr6.eq) goto loc_827A79A0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// blr 
	return;
loc_827A7964:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
loc_827A7970:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
loc_827A797C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
loc_827A7988:
	// blt cr6,0x827a79c0
	if (cr6.lt) goto loc_827A79C0;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x827a79b8
	if (cr6.eq) goto loc_827A79B8;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x827a79b0
	if (cr6.lt) goto loc_827A79B0;
	// beq cr6,0x827a79a8
	if (cr6.eq) goto loc_827A79A8;
loc_827A79A0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_827A79A8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_827A79B0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_827A79B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_827A79C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A79C8"))) PPC_WEAK_FUNC(sub_827A79C8);
PPC_FUNC_IMPL(__imp__sub_827A79C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a79e0
	if (cr0.eq) goto loc_827A79E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r3,r11,34952
	ctx.r3.u64 = ctx.r11.u64 & 34952;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
loc_827A79E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A79E8"))) PPC_WEAK_FUNC(sub_827A79E8);
PPC_FUNC_IMPL(__imp__sub_827A79E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827A79F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7a9c
	if (cr0.eq) goto loc_827A7A9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r11,21376
	ctx.r30.s64 = ctx.r11.s64 + 21376;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,7536
	ctx.r29.s64 = ctx.r11.s64 + 7536;
loc_827A7A20:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x827a7a78
	if (cr6.lt) goto loc_827A7A78;
	// beq cr6,0x827a7a6c
	if (cr6.eq) goto loc_827A7A6C;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// blt cr6,0x827a7a60
	if (cr6.lt) goto loc_827A7A60;
	// beq cr6,0x827a7a54
	if (cr6.eq) goto loc_827A7A54;
	// li r7,166
	ctx.r7.s64 = 166;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827A7A50;
	sub_826CA560(ctx, base);
	// b 0x827a7a90
	goto loc_827A7A90;
loc_827A7A54:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// b 0x827a7a80
	goto loc_827A7A80;
loc_827A7A60:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// b 0x827a7a80
	goto loc_827A7A80;
loc_827A7A6C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// b 0x827a7a80
	goto loc_827A7A80;
loc_827A7A78:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_827A7A80:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x827a7aa8
	if (cr6.eq) goto loc_827A7AA8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x827a7aa8
	if (cr6.eq) goto loc_827A7AA8;
loc_827A7A90:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x827a7a20
	if (cr6.lt) goto loc_827A7A20;
loc_827A7A9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A7AA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_827A7AA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a7aa0
	goto loc_827A7AA0;
}

__attribute__((alias("__imp__sub_827A7AB0"))) PPC_WEAK_FUNC(sub_827A7AB0);
PPC_FUNC_IMPL(__imp__sub_827A7AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A7AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a7af0
	if (cr0.eq) goto loc_827A7AF0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x827a7af4
	goto loc_827A7AF4;
loc_827A7AF0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827A7AF4:
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

__attribute__((alias("__imp__sub_827A7B08"))) PPC_WEAK_FUNC(sub_827A7B08);
PPC_FUNC_IMPL(__imp__sub_827A7B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A7B14"))) PPC_WEAK_FUNC(sub_827A7B14);
PPC_FUNC_IMPL(__imp__sub_827A7B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7B18"))) PPC_WEAK_FUNC(sub_827A7B18);
PPC_FUNC_IMPL(__imp__sub_827A7B18) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827A7B20;
	__savegprlr_29(ctx, base);
	// rlwinm r9,r5,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r9.u32);
	// bne cr6,0x827a7b68
	if (!cr6.eq) goto loc_827A7B68;
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827a7c78
	if (cr6.eq) goto loc_827A7C78;
loc_827A7B44:
	// dcbzl r0,r11
	memset(base + ((ctx.r11.u32) & ~127), 0, 128);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lwz r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// blt cr6,0x827a7b44
	if (cr6.lt) goto loc_827A7B44;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_827A7B68:
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r7,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r7.u32);
	// blt cr6,0x827a7b80
	if (cr6.lt) goto loc_827A7B80;
	// li r8,1
	ctx.r8.s64 = 1;
loc_827A7B80:
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// vspltisb v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lvsl v12,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslb v0,v12,v0
	ctx.v0.u8[0] = ctx.v12.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v0.u8[1] = ctx.v12.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v0.u8[2] = ctx.v12.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v0.u8[3] = ctx.v12.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v0.u8[4] = ctx.v12.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v0.u8[5] = ctx.v12.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v0.u8[6] = ctx.v12.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v0.u8[7] = ctx.v12.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v0.u8[8] = ctx.v12.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v0.u8[9] = ctx.v12.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v0.u8[10] = ctx.v12.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v0.u8[11] = ctx.v12.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v0.u8[12] = ctx.v12.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v0.u8[13] = ctx.v12.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v0.u8[14] = ctx.v12.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v0.u8[15] = ctx.v12.u8[15] << (ctx.v0.u8[15] & 0x7);
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// vor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltb v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xF))));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x827a7be8
	if (cr6.eq) goto loc_827A7BE8;
loc_827A7BB8:
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// dcbzl r11,r3
	memset(base + ((ctx.r11.u32 + ctx.r3.u32) & ~127), 0, 128);
	// lwz r11,-64(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// blt cr6,0x827a7bb8
	if (cr6.lt) goto loc_827A7BB8;
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// lwz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r7,-52(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827A7BE8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// beq cr6,0x827a7c78
	if (cr6.eq) goto loc_827A7C78;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
loc_827A7BFC:
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x827a7c28
	if (!cr6.lt) goto loc_827A7C28;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// dcbzl r9,r10
	memset(base + ((ctx.r9.u32 + ctx.r10.u32) & ~127), 0, 128);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lwz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r7,-52(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827A7C28:
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// addi r30,r11,64
	ctx.r30.s64 = ctx.r11.s64 + 64;
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r11,80
	ctx.r29.s64 = ctx.r11.s64 + 80;
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stvx v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// blt cr6,0x827a7bfc
	if (cr6.lt) goto loc_827A7BFC;
loc_827A7C78:
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A7C7C"))) PPC_WEAK_FUNC(sub_827A7C7C);
PPC_FUNC_IMPL(__imp__sub_827A7C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7C80"))) PPC_WEAK_FUNC(sub_827A7C80);
PPC_FUNC_IMPL(__imp__sub_827A7C80) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827A7C88;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// bge cr6,0x827a7d48
	if (!cr6.lt) goto loc_827A7D48;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x827a7ccc
	if (cr6.lt) goto loc_827A7CCC;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a7ccc
	if (!cr6.eq) goto loc_827A7CCC;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
loc_827A7CCC:
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827a7d10
	if (!cr6.eq) goto loc_827A7D10;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x827a7d10
	if (cr6.lt) goto loc_827A7D10;
	// rlwinm r28,r29,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828d2d50
	ctx.lr = 0x827A7CF4;
	sub_828D2D50(ctx, base);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_827A7D00:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x827a7d00
	if (!cr6.eq) goto loc_827A7D00;
loc_827A7D10:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827a7fa8
	if (cr6.eq) goto loc_827A7FA8;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lwz r11,11704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11704);
loc_827A7D20:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x827a7d20
	if (!cr6.eq) goto loc_827A7D20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_827A7D48:
	// neg r11,r27
	ctx.r11.s64 = -ctx.r27.s64;
	// cmplwi cr6,r29,1024
	cr6.compare<uint32_t>(ctx.r29.u32, 1024, ctx.xer);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// blt cr6,0x827a7d6c
	if (cr6.lt) goto loc_827A7D6C;
	// li r10,1024
	ctx.r10.s64 = 1024;
loc_827A7D6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827a7d88
	if (cr6.eq) goto loc_827A7D88;
loc_827A7D78:
	// dcbt r11,r4
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827a7d78
	if (cr6.lt) goto loc_827A7D78;
loc_827A7D88:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827a7db4
	if (cr6.eq) goto loc_827A7DB4;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r9,r27
	ctx.r30.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r29,r9,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r9.s64;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v0,v0,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvlx v0,0,r27
	ea = ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
loc_827A7DB4:
	// rlwinm r11,r29,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x827a7dc8
	if (!cr6.lt) goto loc_827A7DC8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_827A7DC8:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// rlwinm r28,r11,0,0,24
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r28,128
	cr6.compare<uint32_t>(ctx.r28.u32, 128, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// blt cr6,0x827a7de8
	if (cr6.lt) goto loc_827A7DE8;
	// li r10,128
	ctx.r10.s64 = 128;
loc_827A7DE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x827a7e1c
	if (cr6.eq) goto loc_827A7E1C;
	// addi r9,r30,127
	ctx.r9.s64 = ctx.r30.s64 + 127;
loc_827A7DFC:
	// dcbzl r11,r9
	memset(base + ((ctx.r11.u32 + ctx.r9.u32) & ~127), 0, 128);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x827a7dfc
	if (cr6.lt) goto loc_827A7DFC;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_827A7E1C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvsl v0,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x827a7e5c
	if (cr6.eq) goto loc_827A7E5C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_827A7E34:
	// addi r10,r31,15
	ctx.r10.s64 = ctx.r31.s64 + 15;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v13,v13,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v13,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne cr6,0x827a7e34
	if (!cr6.eq) goto loc_827A7E34;
loc_827A7E5C:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r31,28
	ctx.r10.u64 = ctx.r31.u32 & 0xF;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827a7f28
	if (!cr6.eq) goto loc_827A7F28;
	// cmplwi cr6,r29,128
	cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x827a7f4c
	if (cr6.lt) goto loc_827A7F4C;
loc_827A7E78:
	// cmplwi cr6,r29,1024
	cr6.compare<uint32_t>(ctx.r29.u32, 1024, ctx.xer);
	// ble cr6,0x827a7e88
	if (!cr6.gt) goto loc_827A7E88;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// dcbt r11,r31
loc_827A7E88:
	// cmplwi cr6,r29,256
	cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// ble cr6,0x827a7e98
	if (!cr6.gt) goto loc_827A7E98;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbzl r11,r30
	memset(base + ((ctx.r11.u32 + ctx.r30.u32) & ~127), 0, 128);
loc_827A7E98:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
	// lvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lvx128 v9,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r30,64
	ctx.r7.s64 = ctx.r30.s64 + 64;
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// addi r10,r30,112
	ctx.r10.s64 = ctx.r30.s64 + 112;
	// stvx v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,-128
	ctx.r29.s64 = ctx.r29.s64 + -128;
	// stvx v12,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// stvx v10,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// stvx v9,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r29,128
	cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// stvx v8,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bge cr6,0x827a7e78
	if (!cr6.lt) goto loc_827A7E78;
	// b 0x827a7f44
	goto loc_827A7F44;
loc_827A7F28:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a9150
	ctx.lr = 0x827A7F38;
	sub_827A9150(ctx, base);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// subf r29,r28,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r28.s64;
loc_827A7F44:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827A7F4C:
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x827a7f84
	if (cr6.lt) goto loc_827A7F84;
	// rlwinm r11,r29,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
loc_827A7F58:
	// addi r10,r31,15
	ctx.r10.s64 = ctx.r31.s64 + 15;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v13,v13,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v13,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne cr6,0x827a7f58
	if (!cr6.eq) goto loc_827A7F58;
loc_827A7F84:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827a7fa8
	if (cr6.eq) goto loc_827A7FA8;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r31,r29
	temp.u32 = ctx.r31.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v0,v13,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvrx v0,r30,r29
	ea = ctx.r30.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
loc_827A7FA8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A7FB4"))) PPC_WEAK_FUNC(sub_827A7FB4);
PPC_FUNC_IMPL(__imp__sub_827A7FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A7FB8"))) PPC_WEAK_FUNC(sub_827A7FB8);
PPC_FUNC_IMPL(__imp__sub_827A7FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827a8010
	if (cr6.eq) goto loc_827A8010;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a7ffc
	if (cr0.eq) goto loc_827A7FFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827a8028
	if (!cr0.eq) goto loc_827A8028;
loc_827A7FFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A8000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827A8010:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a7ffc
	if (cr0.eq) goto loc_827A7FFC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_827A8028:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A8038;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827a8000
	goto loc_827A8000;
}

__attribute__((alias("__imp__sub_827A803C"))) PPC_WEAK_FUNC(sub_827A803C);
PPC_FUNC_IMPL(__imp__sub_827A803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8040"))) PPC_WEAK_FUNC(sub_827A8040);
PPC_FUNC_IMPL(__imp__sub_827A8040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827a8090
	if (cr6.eq) goto loc_827A8090;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a807c
	if (cr0.eq) goto loc_827A807C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827a80a8
	if (!cr0.eq) goto loc_827A80A8;
loc_827A807C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A8080:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827A8090:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a807c
	if (cr0.eq) goto loc_827A807C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_827A80A8:
	// li r3,38
	ctx.r3.s64 = 38;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A80B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827a8080
	goto loc_827A8080;
}

__attribute__((alias("__imp__sub_827A80B8"))) PPC_WEAK_FUNC(sub_827A80B8);
PPC_FUNC_IMPL(__imp__sub_827A80B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
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
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,2212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2212);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x827a80f8
	if (cr0.eq) goto loc_827A80F8;
	// oris r4,r3,544
	ctx.r4.u64 = ctx.r3.u64 | 35651584;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r3,39
	ctx.r3.s64 = 39;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A80F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,2212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2212);
loc_827A80F8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827a8118
	if (cr0.eq) goto loc_827A8118;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,39
	ctx.r3.s64 = 39;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827A8118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827A8118:
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

__attribute__((alias("__imp__sub_827A812C"))) PPC_WEAK_FUNC(sub_827A812C);
PPC_FUNC_IMPL(__imp__sub_827A812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8130"))) PPC_WEAK_FUNC(sub_827A8130);
PPC_FUNC_IMPL(__imp__sub_827A8130) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ac6b14
	ctx.lr = 0x827A8148;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_827A8168"))) PPC_WEAK_FUNC(sub_827A8168);
PPC_FUNC_IMPL(__imp__sub_827A8168) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827A8170;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827a8198
	if (cr6.eq) goto loc_827A8198;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x827a819c
	goto loc_827A819C;
loc_827A8198:
	// extsw r31,r4
	ctx.r31.s64 = ctx.r4.s32;
loc_827A819C:
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x827a820c
	if (cr6.lt) goto loc_827A820C;
	// beq cr6,0x827a81e4
	if (cr6.eq) goto loc_827A81E4;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x827a81e4
	if (!cr6.lt) goto loc_827A81E4;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac6534
	ctx.lr = 0x827A81C8;
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x827a81d8
	if (!cr0.lt) goto loc_827A81D8;
loc_827A81D0:
	// bl 0x82612fc0
	ctx.lr = 0x827A81D4;
	sub_82612FC0(ctx, base);
	// b 0x827a82a4
	goto loc_827A82A4;
loc_827A81D8:
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
loc_827A81DC:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x827a8210
	goto loc_827A8210;
loc_827A81E4:
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac6534
	ctx.lr = 0x827A81FC;
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a81d0
	if (cr0.lt) goto loc_827A81D0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x827a81dc
	goto loc_827A81DC;
loc_827A820C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827A8210:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x827a8228
	if (!cr6.lt) goto loc_827A8228;
	// li r3,131
	ctx.r3.s64 = 131;
loc_827A8220:
	// bl 0x82612fa8
	ctx.lr = 0x827A8224;
	sub_82612FA8(ctx, base);
	// b 0x827a82a4
	goto loc_827A82A4;
loc_827A8228:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827a8244
	if (!cr6.eq) goto loc_827A8244;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827a8244
	if (cr0.eq) goto loc_827A8244;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x827a8220
	goto loc_827A8220;
loc_827A8244:
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac6554
	ctx.lr = 0x827A825C;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a8290
	if (cr0.lt) goto loc_827A8290;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827a8274
	if (cr6.eq) goto loc_827A8274;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_827A8274:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827a8288
	if (!cr6.eq) goto loc_827A8288;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82613018
	ctx.lr = 0x827A8288;
	sub_82613018(ctx, base);
loc_827A8288:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x827a82a8
	goto loc_827A82A8;
loc_827A8290:
	// bl 0x82612fc0
	ctx.lr = 0x827A8294;
	sub_82612FC0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827a82a4
	if (cr6.eq) goto loc_827A82A4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_827A82A4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827A82A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A82B0"))) PPC_WEAK_FUNC(sub_827A82B0);
PPC_FUNC_IMPL(__imp__sub_827A82B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ac6534
	ctx.lr = 0x827A82D8;
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a8338
	if (cr0.lt) goto loc_827A8338;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82ac6554
	ctx.lr = 0x827A8300;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a8338
	if (cr0.lt) goto loc_827A8338;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x82ac6554
	ctx.lr = 0x827A8328;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a8338
	if (cr0.lt) goto loc_827A8338;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a8340
	goto loc_827A8340;
loc_827A8338:
	// bl 0x82612fc0
	ctx.lr = 0x827A833C;
	sub_82612FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A8340:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8354"))) PPC_WEAK_FUNC(sub_827A8354);
PPC_FUNC_IMPL(__imp__sub_827A8354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8358"))) PPC_WEAK_FUNC(sub_827A8358);
PPC_FUNC_IMPL(__imp__sub_827A8358) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827A8360;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82ac63d4
	ctx.lr = 0x827A837C;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82ac63c4
	ctx.lr = 0x827A83B8;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x827a83e0
	if (!cr0.lt) goto loc_827A83E0;
	// bl 0x82612fc0
	ctx.lr = 0x827A83C4;
	sub_82612FC0(ctx, base);
	// bl 0x826124f8
	ctx.lr = 0x827A83C8;
	sub_826124F8(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x827a83d8
	if (!cr6.eq) goto loc_827A83D8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82613018
	ctx.lr = 0x827A83D8;
	sub_82613018(ctx, base);
loc_827A83D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827a8460
	goto loc_827A8460;
loc_827A83E0:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82ac65c4
	ctx.lr = 0x827A83F8;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ac6414
	ctx.lr = 0x827A8404;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x827a8418
	if (!cr6.lt) goto loc_827A8418;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82612fc0
	ctx.lr = 0x827A8414;
	sub_82612FC0(ctx, base);
	// b 0x827a83d8
	goto loc_827A83D8;
loc_827A8418:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulld r10,r10,r11
	ctx.r10.s64 = ctx.r10.s64 * ctx.r11.s64;
	// mulld r11,r9,r11
	ctx.r11.s64 = ctx.r9.s64 * ctx.r11.s64;
	// beq cr6,0x827a8444
	if (cr6.eq) goto loc_827A8444;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
loc_827A8444:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827a8450
	if (cr6.eq) goto loc_827A8450;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
loc_827A8450:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827a845c
	if (cr6.eq) goto loc_827A845C;
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
loc_827A845C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827A8460:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A8468"))) PPC_WEAK_FUNC(sub_827A8468);
PPC_FUNC_IMPL(__imp__sub_827A8468) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ac63d4
	ctx.lr = 0x827A8484;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r8,16448
	ctx.r8.s64 = 16448;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82ac63c4
	ctx.lr = 0x827A84B8;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a8500
	if (cr0.lt) goto loc_827A8500;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82ac6554
	ctx.lr = 0x827A84E0;
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ac6414
	ctx.lr = 0x827A84EC;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827a84fc
	if (cr6.lt) goto loc_827A84FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a8508
	goto loc_827A8508;
loc_827A84FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827A8500:
	// bl 0x82612fc0
	ctx.lr = 0x827A8504;
	sub_82612FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A8508:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A851C"))) PPC_WEAK_FUNC(sub_827A851C);
PPC_FUNC_IMPL(__imp__sub_827A851C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8520"))) PPC_WEAK_FUNC(sub_827A8520);
PPC_FUNC_IMPL(__imp__sub_827A8520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ac63d4
	ctx.lr = 0x827A8548;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a9210
	ctx.lr = 0x827A8550;
	sub_827A9210(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8560"))) PPC_WEAK_FUNC(sub_827A8560);
PPC_FUNC_IMPL(__imp__sub_827A8560) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac63d4
	ctx.lr = 0x827A8578;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82ac6b24
	ctx.lr = 0x827A859C;
	__imp__NtQueryFullAttributesFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a85ac
	if (cr0.lt) goto loc_827A85AC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x827a85b4
	goto loc_827A85B4;
loc_827A85AC:
	// bl 0x82612fc0
	ctx.lr = 0x827A85B0;
	sub_82612FC0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827A85B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A85C4"))) PPC_WEAK_FUNC(sub_827A85C4);
PPC_FUNC_IMPL(__imp__sub_827A85C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A85C8"))) PPC_WEAK_FUNC(sub_827A85C8);
PPC_FUNC_IMPL(__imp__sub_827A85C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ac6b34
	ctx.lr = 0x827A85DC;
	__imp__NtPulseEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a85ec
	if (cr0.lt) goto loc_827A85EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a85f4
	goto loc_827A85F4;
loc_827A85EC:
	// bl 0x82613da0
	ctx.lr = 0x827A85F0;
	sub_82613DA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A85F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8604"))) PPC_WEAK_FUNC(sub_827A8604);
PPC_FUNC_IMPL(__imp__sub_827A8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8608"))) PPC_WEAK_FUNC(sub_827A8608);
PPC_FUNC_IMPL(__imp__sub_827A8608) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827A8610;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,64
	cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// ble cr6,0x827a8640
	if (!cr6.gt) goto loc_827A8640;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x82613da0
	ctx.lr = 0x827A8638;
	sub_82613DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x827a86b0
	goto loc_827A86B0;
loc_827A8640:
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828d2930
	ctx.lr = 0x827A864C;
	sub_828D2930(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82617030
	ctx.lr = 0x827A8658;
	sub_82617030(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r30,r27,24
	ctx.r30.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
loc_827A8670:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac6b44
	ctx.lr = 0x827A868C;
	__imp__NtWaitForMultipleObjectsEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a86a8
	if (cr0.lt) goto loc_827A86A8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827a86b0
	if (cr6.eq) goto loc_827A86B0;
	// cmpwi cr6,r3,257
	cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x827a8670
	if (cr6.eq) goto loc_827A8670;
	// b 0x827a86b0
	goto loc_827A86B0;
loc_827A86A8:
	// bl 0x82613da0
	ctx.lr = 0x827A86AC;
	sub_82613DA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827A86B0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A86B8"))) PPC_WEAK_FUNC(sub_827A86B8);
PPC_FUNC_IMPL(__imp__sub_827A86B8) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x827a8608
	sub_827A8608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A86C0"))) PPC_WEAK_FUNC(sub_827A86C0);
PPC_FUNC_IMPL(__imp__sub_827A86C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ac6b54
	ctx.lr = 0x827A86D4;
	__imp__NtSetEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a86e4
	if (cr0.lt) goto loc_827A86E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a86ec
	goto loc_827A86EC;
loc_827A86E4:
	// bl 0x82612fc0
	ctx.lr = 0x827A86E8;
	sub_82612FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A86EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A86FC"))) PPC_WEAK_FUNC(sub_827A86FC);
PPC_FUNC_IMPL(__imp__sub_827A86FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8700"))) PPC_WEAK_FUNC(sub_827A8700);
PPC_FUNC_IMPL(__imp__sub_827A8700) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82ac6b64
	ctx.lr = 0x827A8710;
	__imp__NtClearEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a8720
	if (cr0.lt) goto loc_827A8720;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a8728
	goto loc_827A8728;
loc_827A8720:
	// bl 0x82612fc0
	ctx.lr = 0x827A8724;
	sub_82612FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A8728:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8738"))) PPC_WEAK_FUNC(sub_827A8738);
PPC_FUNC_IMPL(__imp__sub_827A8738) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x827a9220
	sub_827A9220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A8744"))) PPC_WEAK_FUNC(sub_827A8744);
PPC_FUNC_IMPL(__imp__sub_827A8744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8748"))) PPC_WEAK_FUNC(sub_827A8748);
PPC_FUNC_IMPL(__imp__sub_827A8748) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac6b74
	ctx.lr = 0x827A875C;
	__imp__NtResumeThread(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x827a8770
	if (!cr0.lt) goto loc_827A8770;
	// bl 0x82612fc0
	ctx.lr = 0x827A8768;
	sub_82612FC0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x827a8774
	goto loc_827A8774;
loc_827A8770:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827A8774:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8784"))) PPC_WEAK_FUNC(sub_827A8784);
PPC_FUNC_IMPL(__imp__sub_827A8784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8788"))) PPC_WEAK_FUNC(sub_827A8788);
PPC_FUNC_IMPL(__imp__sub_827A8788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,104
	ctx.r11.s64 = 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ac6b84
	ctx.lr = 0x827A87AC;
	__imp__MmQueryStatistics(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8804"))) PPC_WEAK_FUNC(sub_827A8804);
PPC_FUNC_IMPL(__imp__sub_827A8804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8808"))) PPC_WEAK_FUNC(sub_827A8808);
PPC_FUNC_IMPL(__imp__sub_827A8808) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac6a14
	__imp__XamShowSigninUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A880C"))) PPC_WEAK_FUNC(sub_827A880C);
PPC_FUNC_IMPL(__imp__sub_827A880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8810"))) PPC_WEAK_FUNC(sub_827A8810);
PPC_FUNC_IMPL(__imp__sub_827A8810) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac6a24
	__imp__XamShowFriendsUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A8814"))) PPC_WEAK_FUNC(sub_827A8814);
PPC_FUNC_IMPL(__imp__sub_827A8814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8818"))) PPC_WEAK_FUNC(sub_827A8818);
PPC_FUNC_IMPL(__imp__sub_827A8818) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac6a34
	__imp__XamShowPlayersUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A881C"))) PPC_WEAK_FUNC(sub_827A881C);
PPC_FUNC_IMPL(__imp__sub_827A881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8820"))) PPC_WEAK_FUNC(sub_827A8820);
PPC_FUNC_IMPL(__imp__sub_827A8820) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac6a44
	__imp__XamShowMessagesUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A8824"))) PPC_WEAK_FUNC(sub_827A8824);
PPC_FUNC_IMPL(__imp__sub_827A8824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8828"))) PPC_WEAK_FUNC(sub_827A8828);
PPC_FUNC_IMPL(__imp__sub_827A8828) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac6a54
	__imp__XamShowKeyboardUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A882C"))) PPC_WEAK_FUNC(sub_827A882C);
PPC_FUNC_IMPL(__imp__sub_827A882C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8830"))) PPC_WEAK_FUNC(sub_827A8830);
PPC_FUNC_IMPL(__imp__sub_827A8830) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ac6a64
	__imp__XamShowGamerCardUIForXUID(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A8838"))) PPC_WEAK_FUNC(sub_827A8838);
PPC_FUNC_IMPL(__imp__sub_827A8838) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ac6a74
	__imp__XamShowAchievementsUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A8840"))) PPC_WEAK_FUNC(sub_827A8840);
PPC_FUNC_IMPL(__imp__sub_827A8840) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac6a84
	__imp__XamShowPlayerReviewUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A8844"))) PPC_WEAK_FUNC(sub_827A8844);
PPC_FUNC_IMPL(__imp__sub_827A8844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8848"))) PPC_WEAK_FUNC(sub_827A8848);
PPC_FUNC_IMPL(__imp__sub_827A8848) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x82ac6a94
	__imp__XamShowMarketplaceUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A8858"))) PPC_WEAK_FUNC(sub_827A8858);
PPC_FUNC_IMPL(__imp__sub_827A8858) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac6aa4
	__imp__XamShowDeviceSelectorUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A885C"))) PPC_WEAK_FUNC(sub_827A885C);
PPC_FUNC_IMPL(__imp__sub_827A885C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8860"))) PPC_WEAK_FUNC(sub_827A8860);
PPC_FUNC_IMPL(__imp__sub_827A8860) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac6ab4
	__imp__XamShowGameInviteUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A8864"))) PPC_WEAK_FUNC(sub_827A8864);
PPC_FUNC_IMPL(__imp__sub_827A8864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8868"))) PPC_WEAK_FUNC(sub_827A8868);
PPC_FUNC_IMPL(__imp__sub_827A8868) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac6ac4
	__imp__XamShowFriendRequestUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A886C"))) PPC_WEAK_FUNC(sub_827A886C);
PPC_FUNC_IMPL(__imp__sub_827A886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8870"))) PPC_WEAK_FUNC(sub_827A8870);
PPC_FUNC_IMPL(__imp__sub_827A8870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82ac6ad4
	ctx.lr = 0x827A8880;
	__imp__XamShowDirtyDiscErrorUI(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x827a9290
	ctx.lr = 0x827A888C;
	sub_827A9290(ctx, base);
}

__attribute__((alias("__imp__sub_827A888C"))) PPC_WEAK_FUNC(sub_827A888C);
PPC_FUNC_IMPL(__imp__sub_827A888C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8890"))) PPC_WEAK_FUNC(sub_827A8890);
PPC_FUNC_IMPL(__imp__sub_827A8890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac6ba4
	ctx.lr = 0x827A88AC;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827a9320
	ctx.lr = 0x827A88B4;
	sub_827A9320(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82ac6b94
	ctx.lr = 0x827A88D0;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r9,126(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// lhz r7,118(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lhz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lhz r11,122(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 122);
	// lhz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r6.u16);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8924"))) PPC_WEAK_FUNC(sub_827A8924);
PPC_FUNC_IMPL(__imp__sub_827A8924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8928"))) PPC_WEAK_FUNC(sub_827A8928);
PPC_FUNC_IMPL(__imp__sub_827A8928) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ac63d4
	ctx.lr = 0x827A894C;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r30,-3
	ctx.r30.s64 = -3;
	// li r8,16416
	ctx.r8.s64 = 16416;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lis r4,17
	ctx.r4.s64 = 1114112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82ac63c4
	ctx.lr = 0x827A8980;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a89d8
	if (cr0.lt) goto loc_827A89D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// bl 0x82ac63d4
	ctx.lr = 0x827A89A0;
	__imp__RtlInitAnsiString(ctx, base);
	// li r7,10
	ctx.r7.s64 = 10;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82ac6554
	ctx.lr = 0x827A89B8;
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ac6414
	ctx.lr = 0x827A89C4;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827a89d4
	if (cr6.lt) goto loc_827A89D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a89e0
	goto loc_827A89E0;
loc_827A89D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827A89D8:
	// bl 0x82613da0
	ctx.lr = 0x827A89DC;
	sub_82613DA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A89E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A89F8"))) PPC_WEAK_FUNC(sub_827A89F8);
PPC_FUNC_IMPL(__imp__sub_827A89F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi. r11,r3,20
	ctx.r11.u64 = ctx.r3.u32 & 0xFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r4,r3,20,12,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xFFFFF;
	// beq 0x827a8a14
	if (cr0.eq) goto loc_827A8A14;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_827A8A14:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ac6bb4
	ctx.lr = 0x827A8A1C;
	__imp__FscSetCacheElementCount(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a8a2c
	if (cr0.lt) goto loc_827A8A2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a8a34
	goto loc_827A8A34;
loc_827A8A2C:
	// bl 0x82613da0
	ctx.lr = 0x827A8A30;
	sub_82613DA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A8A34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8A44"))) PPC_WEAK_FUNC(sub_827A8A44);
PPC_FUNC_IMPL(__imp__sub_827A8A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8A48"))) PPC_WEAK_FUNC(sub_827A8A48);
PPC_FUNC_IMPL(__imp__sub_827A8A48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac6b04
	ctx.lr = 0x827A8A5C;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x827a8a70
	if (!cr0.lt) goto loc_827A8A70;
	// bl 0x82612fc0
	ctx.lr = 0x827A8A68;
	sub_82612FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827a8a74
	goto loc_827A8A74;
loc_827A8A70:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827A8A74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8A84"))) PPC_WEAK_FUNC(sub_827A8A84);
PPC_FUNC_IMPL(__imp__sub_827A8A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8A88"))) PPC_WEAK_FUNC(sub_827A8A88);
PPC_FUNC_IMPL(__imp__sub_827A8A88) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ac63d4
	ctx.lr = 0x827A8AA0;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,16417
	ctx.r11.s64 = 16417;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82ac63e4
	ctx.lr = 0x827A8AE8;
	__imp__NtCreateFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a8b00
	if (cr0.lt) goto loc_827A8B00;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ac6414
	ctx.lr = 0x827A8AF8;
	__imp__NtClose(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a8b08
	goto loc_827A8B08;
loc_827A8B00:
	// bl 0x82612fc0
	ctx.lr = 0x827A8B04;
	sub_82612FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A8B08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8B18"))) PPC_WEAK_FUNC(sub_827A8B18);
PPC_FUNC_IMPL(__imp__sub_827A8B18) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ac63d4
	ctx.lr = 0x827A8B40;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,328
	ctx.r5.s64 = 328;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82613548
	ctx.lr = 0x827A8B6C;
	sub_82613548(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x827a8b80
	if (!cr0.lt) goto loc_827A8B80;
	// bl 0x82612fc0
	ctx.lr = 0x827A8B78;
	sub_82612FC0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x827a8b90
	goto loc_827A8B90;
loc_827A8B80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a93a0
	ctx.lr = 0x827A8B8C;
	sub_827A93A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827A8B90:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8BA4"))) PPC_WEAK_FUNC(sub_827A8BA4);
PPC_FUNC_IMPL(__imp__sub_827A8BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8BA8"))) PPC_WEAK_FUNC(sub_827A8BA8);
PPC_FUNC_IMPL(__imp__sub_827A8BA8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ac63d4
	ctx.lr = 0x827A8BD0;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82613700
	ctx.lr = 0x827A8BD8;
	sub_82613700(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a8be8
	if (cr0.lt) goto loc_827A8BE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a8bf0
	goto loc_827A8BF0;
loc_827A8BE8:
	// bl 0x82613da0
	ctx.lr = 0x827A8BEC;
	sub_82613DA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A8BF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A8C00"))) PPC_WEAK_FUNC(sub_827A8C00);
PPC_FUNC_IMPL(__imp__sub_827A8C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827A8C08;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-3
	ctx.r11.s64 = -3;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x82ac6bd4
	ctx.lr = 0x827A8C40;
	__imp__ExAllocatePool(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x827a8c5c
	if (!cr0.eq) goto loc_827A8C5C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82613018
	ctx.lr = 0x827A8C50;
	sub_82613018(ctx, base);
loc_827A8C50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A8C54:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_827A8C5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ac63d4
	ctx.lr = 0x827A8C68;
	__imp__RtlInitAnsiString(ctx, base);
	// li r8,96
	ctx.r8.s64 = 96;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,-32752
	ctx.r4.s64 = -2146435072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ac63c4
	ctx.lr = 0x827A8C84;
	__imp__NtOpenFile(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827a8ca0
	if (!cr0.lt) goto loc_827A8CA0;
loc_827A8C8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ac6bc4
	ctx.lr = 0x827A8C94;
	__imp__ExFreePool(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82612fc0
	ctx.lr = 0x827A8C9C;
	sub_82612FC0(ctx, base);
	// b 0x827a8c50
	goto loc_827A8C50;
loc_827A8CA0:
	// li r7,34
	ctx.r7.s64 = 34;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82ac6534
	ctx.lr = 0x827A8CB8;
	__imp__NtQueryInformationFile(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827a8ccc
	if (!cr0.lt) goto loc_827A8CCC;
loc_827A8CC0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ac6414
	ctx.lr = 0x827A8CC8;
	__imp__NtClose(ctx, base);
	// b 0x827a8c8c
	goto loc_827A8C8C;
loc_827A8CCC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ac63d4
	ctx.lr = 0x827A8CD8;
	__imp__RtlInitAnsiString(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// li r10,100
	ctx.r10.s64 = 100;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r8,128
	ctx.r8.s64 = 128;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,16401
	ctx.r4.s64 = 1074855936;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82ac63e4
	ctx.lr = 0x827A8D14;
	__imp__NtCreateFile(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x827a8cc0
	if (cr0.lt) goto loc_827A8CC0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// beq cr6,0x827a8d60
	if (cr6.eq) goto loc_827A8D60;
	// ld r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827A8D54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x827a8e44
	if (!cr6.eq) goto loc_827A8E44;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827A8D60:
	// ld r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// bl 0x82ac6554
	ctx.lr = 0x827A8D80;
	__imp__NtSetInformationFile(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x827a8ec8
	if (cr0.lt) goto loc_827A8EC8;
	// ld r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x827a8e7c
	if (!cr6.lt) goto loc_827A8E7C;
loc_827A8D98:
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ac6454
	ctx.lr = 0x827A8DBC;
	__imp__NtReadFile(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x827a8ec8
	if (cr0.lt) goto loc_827A8EC8;
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ac6434
	ctx.lr = 0x827A8DEC;
	__imp__NtWriteFile(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x827a8ec8
	if (cr0.lt) goto loc_827A8EC8;
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// beq cr6,0x827a8e64
	if (cr6.eq) goto loc_827A8E64;
	// ld r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827A8E34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x827a8e58
	if (!cr6.eq) goto loc_827A8E58;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x827a8e60
	goto loc_827A8E60;
loc_827A8E44:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827a8d60
	if (cr6.eq) goto loc_827A8D60;
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,576
	ctx.r29.u64 = ctx.r29.u64 | 576;
	// b 0x827a8ec8
	goto loc_827A8EC8;
loc_827A8E58:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827a8e74
	if (!cr6.eq) goto loc_827A8E74;
loc_827A8E60:
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
loc_827A8E64:
	// ld r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// cmpd cr6,r6,r11
	cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x827a8d98
	if (cr6.lt) goto loc_827A8D98;
	// b 0x827a8e7c
	goto loc_827A8E7C;
loc_827A8E74:
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,576
	ctx.r29.u64 = ctx.r29.u64 | 576;
loc_827A8E7C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827a8ec8
	if (cr6.lt) goto loc_827A8EC8;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// std r11,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r11.u64);
	// ld r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// std r11,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// bl 0x82ac6554
	ctx.lr = 0x827A8EC4;
	__imp__NtSetInformationFile(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_827A8EC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ac6bc4
	ctx.lr = 0x827A8ED0;
	__imp__ExFreePool(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ac6414
	ctx.lr = 0x827A8ED8;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x827a8f1c
	if (!cr6.lt) goto loc_827A8F1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// bl 0x82ac6554
	ctx.lr = 0x827A8F00;
	__imp__NtSetInformationFile(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82612fc0
	ctx.lr = 0x827A8F08;
	sub_82612FC0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_827A8F0C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82ac6414
	ctx.lr = 0x827A8F14;
	__imp__NtClose(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827a8c54
	goto loc_827A8C54;
loc_827A8F1C:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x827a8f0c
	goto loc_827A8F0C;
}

__attribute__((alias("__imp__sub_827A8F24"))) PPC_WEAK_FUNC(sub_827A8F24);
PPC_FUNC_IMPL(__imp__sub_827A8F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8F28"))) PPC_WEAK_FUNC(sub_827A8F28);
PPC_FUNC_IMPL(__imp__sub_827A8F28) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r6,0
	ctx.r6.s64 = 0;
	// xori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 ^ 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x827a8c00
	sub_827A8C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A8F44"))) PPC_WEAK_FUNC(sub_827A8F44);
PPC_FUNC_IMPL(__imp__sub_827A8F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A8F48"))) PPC_WEAK_FUNC(sub_827A8F48);
PPC_FUNC_IMPL(__imp__sub_827A8F48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ac63d4
	ctx.lr = 0x827A8F68;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r8,16416
	ctx.r8.s64 = 16416;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82ac63c4
	ctx.lr = 0x827A8FA0;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a9008
	if (cr0.lt) goto loc_827A9008;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// andi. r9,r31,12583
	ctx.r9.u64 = ctx.r31.u64 & 12583;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// std r10,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// ori r11,r9,128
	ctx.r11.u64 = ctx.r9.u64 | 128;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x82ac6554
	ctx.lr = 0x827A8FE8;
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ac6414
	ctx.lr = 0x827A8FF4;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827a9004
	if (cr6.lt) goto loc_827A9004;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a9010
	goto loc_827A9010;
loc_827A9004:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827A9008:
	// bl 0x82612fc0
	ctx.lr = 0x827A900C;
	sub_82612FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A9010:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A9024"))) PPC_WEAK_FUNC(sub_827A9024);
PPC_FUNC_IMPL(__imp__sub_827A9024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A9028"))) PPC_WEAK_FUNC(sub_827A9028);
PPC_FUNC_IMPL(__imp__sub_827A9028) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,328
	ctx.r5.s64 = 328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826136b0
	ctx.lr = 0x827A9048;
	sub_826136B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x827a905c
	if (!cr0.lt) goto loc_827A905C;
	// bl 0x82612fc0
	ctx.lr = 0x827A9054;
	sub_82612FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827a906c
	goto loc_827A906C;
loc_827A905C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a93a0
	ctx.lr = 0x827A9068;
	sub_827A93A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_827A906C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A9080"))) PPC_WEAK_FUNC(sub_827A9080);
PPC_FUNC_IMPL(__imp__sub_827A9080) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,996
	ctx.r3.s64 = 996;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827a9094
	if (!cr6.eq) goto loc_827A9094;
	// b 0x826124f8
	sub_826124F8(ctx, base);
	return;
loc_827A9094:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,997
	cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A90A8"))) PPC_WEAK_FUNC(sub_827A90A8);
PPC_FUNC_IMPL(__imp__sub_827A90A8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ac6ae4
	__imp__XamNotifyCreateListener(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A90B0"))) PPC_WEAK_FUNC(sub_827A90B0);
PPC_FUNC_IMPL(__imp__sub_827A90B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac6be4
	__imp__DbgBreakPoint(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A90B4"))) PPC_WEAK_FUNC(sub_827A90B4);
PPC_FUNC_IMPL(__imp__sub_827A90B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A90B8"))) PPC_WEAK_FUNC(sub_827A90B8);
PPC_FUNC_IMPL(__imp__sub_827A90B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827A90C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac6534
	ctx.lr = 0x827A90E4;
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827a9124
	if (cr0.lt) goto loc_827A9124;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827a90fc
	if (cr6.eq) goto loc_827A90FC;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_827A90FC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827a910c
	if (cr6.eq) goto loc_827A910C;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_827A910C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827a911c
	if (cr6.eq) goto loc_827A911C;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
loc_827A911C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827a912c
	goto loc_827A912C;
loc_827A9124:
	// bl 0x82612fc0
	ctx.lr = 0x827A9128;
	sub_82612FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827A912C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827A9134"))) PPC_WEAK_FUNC(sub_827A9134);
PPC_FUNC_IMPL(__imp__sub_827A9134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A9138"))) PPC_WEAK_FUNC(sub_827A9138);
PPC_FUNC_IMPL(__imp__sub_827A9138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2104);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827A9148"))) PPC_WEAK_FUNC(sub_827A9148);
PPC_FUNC_IMPL(__imp__sub_827A9148) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827A914C"))) PPC_WEAK_FUNC(sub_827A914C);
PPC_FUNC_IMPL(__imp__sub_827A914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

