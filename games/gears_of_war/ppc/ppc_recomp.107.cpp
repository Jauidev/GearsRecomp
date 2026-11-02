#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826CE860"))) PPC_WEAK_FUNC(sub_826CE860);
PPC_FUNC_IMPL(__imp__sub_826CE860) {
	PPC_FUNC_PROLOGUE();
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82748e88
	ctx.lr = 0x826CE888;
	sub_82748E88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826ce8b4
	if (!cr0.eq) goto loc_826CE8B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1609
	ctx.r7.s64 = 1609;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,6404
	ctx.r5.s64 = ctx.r11.s64 + 6404;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CE8B4;
	sub_826CA560(ctx, base);
loc_826CE8B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826CE8CC"))) PPC_WEAK_FUNC(sub_826CE8CC);
PPC_FUNC_IMPL(__imp__sub_826CE8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CE8D0"))) PPC_WEAK_FUNC(sub_826CE8D0);
PPC_FUNC_IMPL(__imp__sub_826CE8D0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82748e88
	ctx.lr = 0x826CE8F8;
	sub_82748E88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826ce924
	if (!cr0.eq) goto loc_826CE924;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1650
	ctx.r7.s64 = 1650;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,6404
	ctx.r5.s64 = ctx.r11.s64 + 6404;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CE924;
	sub_826CA560(ctx, base);
loc_826CE924:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826CE93C"))) PPC_WEAK_FUNC(sub_826CE93C);
PPC_FUNC_IMPL(__imp__sub_826CE93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CE940"))) PPC_WEAK_FUNC(sub_826CE940);
PPC_FUNC_IMPL(__imp__sub_826CE940) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826CE948;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,5976
	ctx.r30.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826ce988
	if (!cr6.eq) goto loc_826CE988;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2228
	ctx.r7.s64 = 2228;
	// addi r5,r11,6484
	ctx.r5.s64 = ctx.r11.s64 + 6484;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CE988;
	sub_826CA560(ctx, base);
loc_826CE988:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826ce9ac
	if (!cr6.eq) goto loc_826CE9AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2229
	ctx.r7.s64 = 2229;
	// addi r5,r11,6404
	ctx.r5.s64 = ctx.r11.s64 + 6404;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CE9AC;
	sub_826CA560(ctx, base);
loc_826CE9AC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ce9d4
	if (cr6.eq) goto loc_826CE9D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2232
	ctx.r7.s64 = 2232;
	// addi r5,r11,6460
	ctx.r5.s64 = ctx.r11.s64 + 6460;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CE9D4;
	sub_826CA560(ctx, base);
loc_826CE9D4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ce9fc
	if (cr6.eq) goto loc_826CE9FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2233
	ctx.r7.s64 = 2233;
	// addi r5,r11,6440
	ctx.r5.s64 = ctx.r11.s64 + 6440;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CE9FC;
	sub_826CA560(ctx, base);
loc_826CE9FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// bl 0x826cd830
	ctx.lr = 0x826CEA08;
	sub_826CD830(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// bne 0x826cea30
	if (!cr0.eq) goto loc_826CEA30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2242
	ctx.r7.s64 = 2242;
	// addi r5,r11,6420
	ctx.r5.s64 = ctx.r11.s64 + 6420;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CEA30;
	sub_826CA560(ctx, base);
loc_826CEA30:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CEA60"))) PPC_WEAK_FUNC(sub_826CEA60);
PPC_FUNC_IMPL(__imp__sub_826CEA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826CEA68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r28,r11,-6172
	ctx.r28.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r27,r11,5976
	ctx.r27.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826ceaa4
	if (!cr6.eq) goto loc_826CEAA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2279
	ctx.r7.s64 = 2279;
	// addi r5,r11,6484
	ctx.r5.s64 = ctx.r11.s64 + 6484;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CEAA4;
	sub_826CA560(ctx, base);
loc_826CEAA4:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826ceab8
	if (cr0.eq) goto loc_826CEAB8;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_826CEAB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,6280
	ctx.r29.s64 = ctx.r11.s64 + 6280;
	// bne cr6,0x826ceae0
	if (!cr6.eq) goto loc_826CEAE0;
	// li r7,2284
	ctx.r7.s64 = 2284;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CEAE0;
	sub_826CA560(ctx, base);
loc_826CEAE0:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826ceb64
	if (cr6.eq) goto loc_826CEB64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r11,6496
	ctx.r26.s64 = ctx.r11.s64 + 6496;
loc_826CEAF4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826ceb04
	if (cr6.eq) goto loc_826CEB04;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_826CEB04:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826ceb24
	if (!cr6.eq) goto loc_826CEB24;
	// li r7,2293
	ctx.r7.s64 = 2293;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CEB24;
	sub_826CA560(ctx, base);
loc_826CEB24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826cda78
	ctx.lr = 0x826CEB2C;
	sub_826CDA78(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x826ceb50
	if (!cr0.eq) goto loc_826CEB50;
	// li r7,2297
	ctx.r7.s64 = 2297;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CEB4C;
	sub_826CA560(ctx, base);
	// b 0x826ceb58
	goto loc_826CEB58;
loc_826CEB50:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x827490b8
	ctx.lr = 0x826CEB58;
	sub_827490B8(ctx, base);
loc_826CEB58:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826ceaf4
	if (!cr6.eq) goto loc_826CEAF4;
loc_826CEB64:
	// lwz r4,16(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x826ceb78
	if (cr0.eq) goto loc_826CEB78;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x827490b8
	ctx.lr = 0x826CEB78;
	sub_827490B8(ctx, base);
loc_826CEB78:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826ceba0
	if (!cr6.eq) goto loc_826CEBA0;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82748f48
	ctx.lr = 0x826CEB8C;
	sub_82748F48(ctx, base);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CEBA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826CEBA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CEBA8"))) PPC_WEAK_FUNC(sub_826CEBA8);
PPC_FUNC_IMPL(__imp__sub_826CEBA8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826cebe4
	if (!cr6.eq) goto loc_826CEBE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2334
	ctx.r7.s64 = 2334;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,6484
	ctx.r5.s64 = ctx.r11.s64 + 6484;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CEBE4;
	sub_826CA560(ctx, base);
loc_826CEBE4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_826CEBFC"))) PPC_WEAK_FUNC(sub_826CEBFC);
PPC_FUNC_IMPL(__imp__sub_826CEBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CEC00"))) PPC_WEAK_FUNC(sub_826CEC00);
PPC_FUNC_IMPL(__imp__sub_826CEC00) {
	PPC_FUNC_PROLOGUE();
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82748e88
	ctx.lr = 0x826CEC28;
	sub_82748E88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826cec54
	if (!cr0.eq) goto loc_826CEC54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2712
	ctx.r7.s64 = 2712;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,6404
	ctx.r5.s64 = ctx.r11.s64 + 6404;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CEC54;
	sub_826CA560(ctx, base);
loc_826CEC54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826CEC6C"))) PPC_WEAK_FUNC(sub_826CEC6C);
PPC_FUNC_IMPL(__imp__sub_826CEC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CEC70"))) PPC_WEAK_FUNC(sub_826CEC70);
PPC_FUNC_IMPL(__imp__sub_826CEC70) {
	PPC_FUNC_PROLOGUE();
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82748e88
	ctx.lr = 0x826CEC98;
	sub_82748E88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826cecc4
	if (!cr0.eq) goto loc_826CECC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2753
	ctx.r7.s64 = 2753;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,6404
	ctx.r5.s64 = ctx.r11.s64 + 6404;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CECC4;
	sub_826CA560(ctx, base);
loc_826CECC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826CECDC"))) PPC_WEAK_FUNC(sub_826CECDC);
PPC_FUNC_IMPL(__imp__sub_826CECDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CECE0"))) PPC_WEAK_FUNC(sub_826CECE0);
PPC_FUNC_IMPL(__imp__sub_826CECE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826CECE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,5976
	ctx.r30.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826ced28
	if (!cr6.eq) goto loc_826CED28;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2913
	ctx.r7.s64 = 2913;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CED28;
	sub_826CA560(ctx, base);
loc_826CED28:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826ced4c
	if (!cr6.eq) goto loc_826CED4C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2914
	ctx.r7.s64 = 2914;
	// addi r5,r11,6404
	ctx.r5.s64 = ctx.r11.s64 + 6404;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CED4C;
	sub_826CA560(ctx, base);
loc_826CED4C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ced74
	if (cr6.eq) goto loc_826CED74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2917
	ctx.r7.s64 = 2917;
	// addi r5,r11,6548
	ctx.r5.s64 = ctx.r11.s64 + 6548;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CED74;
	sub_826CA560(ctx, base);
loc_826CED74:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ced9c
	if (cr6.eq) goto loc_826CED9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2918
	ctx.r7.s64 = 2918;
	// addi r5,r11,6528
	ctx.r5.s64 = ctx.r11.s64 + 6528;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CED9C;
	sub_826CA560(ctx, base);
loc_826CED9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// bl 0x826cd830
	ctx.lr = 0x826CEDA8;
	sub_826CD830(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// bne 0x826cedd0
	if (!cr0.eq) goto loc_826CEDD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2927
	ctx.r7.s64 = 2927;
	// addi r5,r11,6508
	ctx.r5.s64 = ctx.r11.s64 + 6508;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CEDD0;
	sub_826CA560(ctx, base);
loc_826CEDD0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CEE00"))) PPC_WEAK_FUNC(sub_826CEE00);
PPC_FUNC_IMPL(__imp__sub_826CEE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826CEE08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826cee24
	if (cr0.eq) goto loc_826CEE24;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_826CEE24:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r29,r11,-6172
	ctx.r29.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,6280
	ctx.r28.s64 = ctx.r11.s64 + 6280;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,5976
	ctx.r27.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826cee60
	if (!cr6.eq) goto loc_826CEE60;
	// li r7,2964
	ctx.r7.s64 = 2964;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CEE60;
	sub_826CA560(ctx, base);
loc_826CEE60:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826ceed4
	if (cr6.eq) goto loc_826CEED4;
loc_826CEE6C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826cee7c
	if (cr6.eq) goto loc_826CEE7C;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_826CEE7C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x826cee9c
	if (!cr6.eq) goto loc_826CEE9C;
	// li r7,2973
	ctx.r7.s64 = 2973;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CEE9C;
	sub_826CA560(ctx, base);
loc_826CEE9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cda78
	ctx.lr = 0x826CEEA4;
	sub_826CDA78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CEEBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x827490b8
	ctx.lr = 0x826CEEC8;
	sub_827490B8(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826cee6c
	if (!cr6.eq) goto loc_826CEE6C;
loc_826CEED4:
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x826ceee8
	if (cr0.eq) goto loc_826CEEE8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x827490b8
	ctx.lr = 0x826CEEE8;
	sub_827490B8(ctx, base);
loc_826CEEE8:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826cef10
	if (!cr6.eq) goto loc_826CEF10;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82748f48
	ctx.lr = 0x826CEEFC;
	sub_82748F48(ctx, base);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CEF10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826CEF10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CEF18"))) PPC_WEAK_FUNC(sub_826CEF18);
PPC_FUNC_IMPL(__imp__sub_826CEF18) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826cef54
	if (!cr6.eq) goto loc_826CEF54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3010
	ctx.r7.s64 = 3010;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CEF54;
	sub_826CA560(ctx, base);
loc_826CEF54:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_826CEF6C"))) PPC_WEAK_FUNC(sub_826CEF6C);
PPC_FUNC_IMPL(__imp__sub_826CEF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CEF70"))) PPC_WEAK_FUNC(sub_826CEF70);
PPC_FUNC_IMPL(__imp__sub_826CEF70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826CEF78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,5976
	ctx.r30.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826cefb8
	if (!cr6.eq) goto loc_826CEFB8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3031
	ctx.r7.s64 = 3031;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CEFB8;
	sub_826CA560(ctx, base);
loc_826CEFB8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826cefdc
	if (!cr6.eq) goto loc_826CEFDC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3032
	ctx.r7.s64 = 3032;
	// addi r5,r11,6212
	ctx.r5.s64 = ctx.r11.s64 + 6212;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CEFDC;
	sub_826CA560(ctx, base);
loc_826CEFDC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826cf004
	if (!cr6.eq) goto loc_826CF004;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3033
	ctx.r7.s64 = 3033;
	// addi r5,r11,6584
	ctx.r5.s64 = ctx.r11.s64 + 6584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF004;
	sub_826CA560(ctx, base);
loc_826CF004:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x826cd8a8
	ctx.lr = 0x826CF010;
	sub_826CD8A8(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826cf024
	if (!cr6.eq) goto loc_826CF024;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_826CF024:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF038"))) PPC_WEAK_FUNC(sub_826CF038);
PPC_FUNC_IMPL(__imp__sub_826CF038) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826CF040;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,5976
	ctx.r30.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826cf080
	if (!cr6.eq) goto loc_826CF080;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3070
	ctx.r7.s64 = 3070;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF080;
	sub_826CA560(ctx, base);
loc_826CF080:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x826cd830
	ctx.lr = 0x826CF088;
	sub_826CD830(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x826cf0ac
	if (!cr0.eq) goto loc_826CF0AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3075
	ctx.r7.s64 = 3075;
	// addi r5,r11,5960
	ctx.r5.s64 = ctx.r11.s64 + 5960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF0AC;
	sub_826CA560(ctx, base);
loc_826CF0AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cef70
	ctx.lr = 0x826CF0BC;
	sub_826CEF70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF0C8"))) PPC_WEAK_FUNC(sub_826CF0C8);
PPC_FUNC_IMPL(__imp__sub_826CF0C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826CF0D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,5976
	ctx.r30.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826cf110
	if (!cr6.eq) goto loc_826CF110;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3105
	ctx.r7.s64 = 3105;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF110;
	sub_826CA560(ctx, base);
loc_826CF110:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826cf134
	if (!cr6.eq) goto loc_826CF134;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3106
	ctx.r7.s64 = 3106;
	// addi r5,r11,6212
	ctx.r5.s64 = ctx.r11.s64 + 6212;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF134;
	sub_826CA560(ctx, base);
loc_826CF134:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826cf15c
	if (!cr6.eq) goto loc_826CF15C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3107
	ctx.r7.s64 = 3107;
	// addi r5,r11,6584
	ctx.r5.s64 = ctx.r11.s64 + 6584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF15C;
	sub_826CA560(ctx, base);
loc_826CF15C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x826cd990
	ctx.lr = 0x826CF168;
	sub_826CD990(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826cf17c
	if (!cr6.eq) goto loc_826CF17C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_826CF17C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF190"))) PPC_WEAK_FUNC(sub_826CF190);
PPC_FUNC_IMPL(__imp__sub_826CF190) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826CF198;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,5976
	ctx.r30.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826cf1d8
	if (!cr6.eq) goto loc_826CF1D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF1D8;
	sub_826CA560(ctx, base);
loc_826CF1D8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x826cd830
	ctx.lr = 0x826CF1E0;
	sub_826CD830(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x826cf204
	if (!cr0.eq) goto loc_826CF204;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3149
	ctx.r7.s64 = 3149;
	// addi r5,r11,5960
	ctx.r5.s64 = ctx.r11.s64 + 5960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF204;
	sub_826CA560(ctx, base);
loc_826CF204:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cf0c8
	ctx.lr = 0x826CF214;
	sub_826CF0C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF220"))) PPC_WEAK_FUNC(sub_826CF220);
PPC_FUNC_IMPL(__imp__sub_826CF220) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x826CF228;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,5976
	ctx.r29.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826cf264
	if (!cr6.eq) goto loc_826CF264;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3202
	ctx.r7.s64 = 3202;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF264;
	sub_826CA560(ctx, base);
loc_826CF264:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826cf278
	if (!cr6.eq) goto loc_826CF278;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826cf2b8
	goto loc_826CF2B8;
loc_826CF278:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826cf28c
	if (!cr0.eq) goto loc_826CF28C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x826cf298
	goto loc_826CF298;
loc_826CF28C:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x826cf2b4
	if (!cr0.eq) goto loc_826CF2B4;
loc_826CF298:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3214
	ctx.r7.s64 = 3214;
	// addi r5,r11,6336
	ctx.r5.s64 = ctx.r11.s64 + 6336;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF2B4;
	sub_826CA560(ctx, base);
loc_826CF2B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826CF2B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF2C0"))) PPC_WEAK_FUNC(sub_826CF2C0);
PPC_FUNC_IMPL(__imp__sub_826CF2C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826CF2C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,5976
	ctx.r30.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826cf304
	if (!cr6.eq) goto loc_826CF304;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3388
	ctx.r7.s64 = 3388;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF304;
	sub_826CA560(ctx, base);
loc_826CF304:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826cf318
	if (!cr6.eq) goto loc_826CF318;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826cf390
	goto loc_826CF390;
loc_826CF318:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826cf32c
	if (!cr0.eq) goto loc_826CF32C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x826cf338
	goto loc_826CF338;
loc_826CF32C:
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x826cf354
	if (!cr0.eq) goto loc_826CF354;
loc_826CF338:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3399
	ctx.r7.s64 = 3399;
	// addi r5,r11,6336
	ctx.r5.s64 = ctx.r11.s64 + 6336;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF354;
	sub_826CA560(ctx, base);
loc_826CF354:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826cf37c
	if (!cr6.eq) goto loc_826CF37C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3402
	ctx.r7.s64 = 3402;
	// addi r5,r11,6624
	ctx.r5.s64 = ctx.r11.s64 + 6624;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF37C;
	sub_826CA560(ctx, base);
loc_826CF37C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cda78
	ctx.lr = 0x826CF384;
	sub_826CDA78(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_826CF390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF398"))) PPC_WEAK_FUNC(sub_826CF398);
PPC_FUNC_IMPL(__imp__sub_826CF398) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826CF3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,5976
	ctx.r30.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826cf3dc
	if (!cr6.eq) goto loc_826CF3DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3430
	ctx.r7.s64 = 3430;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF3DC;
	sub_826CA560(ctx, base);
loc_826CF3DC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826cf3f0
	if (!cr6.eq) goto loc_826CF3F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826cf468
	goto loc_826CF468;
loc_826CF3F0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826cf404
	if (!cr0.eq) goto loc_826CF404;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x826cf410
	goto loc_826CF410;
loc_826CF404:
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r28,0
	cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x826cf42c
	if (!cr0.eq) goto loc_826CF42C;
loc_826CF410:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3441
	ctx.r7.s64 = 3441;
	// addi r5,r11,6616
	ctx.r5.s64 = ctx.r11.s64 + 6616;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF42C;
	sub_826CA560(ctx, base);
loc_826CF42C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826cf454
	if (!cr6.eq) goto loc_826CF454;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3444
	ctx.r7.s64 = 3444;
	// addi r5,r11,6656
	ctx.r5.s64 = ctx.r11.s64 + 6656;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF454;
	sub_826CA560(ctx, base);
loc_826CF454:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cda78
	ctx.lr = 0x826CF45C;
	sub_826CDA78(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_826CF468:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF470"))) PPC_WEAK_FUNC(sub_826CF470);
PPC_FUNC_IMPL(__imp__sub_826CF470) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826CF478;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,5976
	ctx.r30.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826cf4b8
	if (!cr6.eq) goto loc_826CF4B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3473
	ctx.r7.s64 = 3473;
	// addi r5,r11,6572
	ctx.r5.s64 = ctx.r11.s64 + 6572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF4B8;
	sub_826CA560(ctx, base);
loc_826CF4B8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826cf4dc
	if (!cr6.eq) goto loc_826CF4DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3474
	ctx.r7.s64 = 3474;
	// addi r5,r11,6212
	ctx.r5.s64 = ctx.r11.s64 + 6212;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF4DC;
	sub_826CA560(ctx, base);
loc_826CF4DC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826cf504
	if (!cr6.eq) goto loc_826CF504;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3477
	ctx.r7.s64 = 3477;
	// addi r5,r11,6584
	ctx.r5.s64 = ctx.r11.s64 + 6584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF504;
	sub_826CA560(ctx, base);
loc_826CF504:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cda78
	ctx.lr = 0x826CF50C;
	sub_826CDA78(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF520"))) PPC_WEAK_FUNC(sub_826CF520);
PPC_FUNC_IMPL(__imp__sub_826CF520) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826cf568
	if (!cr6.eq) goto loc_826CF568;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3540
	ctx.r7.s64 = 3540;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,6212
	ctx.r5.s64 = ctx.r11.s64 + 6212;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CF560;
	sub_826CA560(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826cf56c
	goto loc_826CF56C;
loc_826CF568:
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_826CF56C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826cf57c
	if (!cr6.eq) goto loc_826CF57C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826CF57C:
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

__attribute__((alias("__imp__sub_826CF590"))) PPC_WEAK_FUNC(sub_826CF590);
PPC_FUNC_IMPL(__imp__sub_826CF590) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826cf5bc
	if (!cr6.eq) goto loc_826CF5BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3575
	ctx.r7.s64 = 3575;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,6212
	ctx.r5.s64 = ctx.r11.s64 + 6212;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// b 0x826ca560
	sub_826CA560(ctx, base);
	return;
loc_826CF5BC:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x827490b8
	sub_827490B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF5C4"))) PPC_WEAK_FUNC(sub_826CF5C4);
PPC_FUNC_IMPL(__imp__sub_826CF5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CF5C8"))) PPC_WEAK_FUNC(sub_826CF5C8);
PPC_FUNC_IMPL(__imp__sub_826CF5C8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826cf604
	if (!cr6.eq) goto loc_826CF604;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3596
	ctx.r7.s64 = 3596;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,6212
	ctx.r5.s64 = ctx.r11.s64 + 6212;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CF604;
	sub_826CA560(ctx, base);
loc_826CF604:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_826CF61C"))) PPC_WEAK_FUNC(sub_826CF61C);
PPC_FUNC_IMPL(__imp__sub_826CF61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CF620"))) PPC_WEAK_FUNC(sub_826CF620);
PPC_FUNC_IMPL(__imp__sub_826CF620) {
	PPC_FUNC_PROLOGUE();
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82748e88
	ctx.lr = 0x826CF648;
	sub_82748E88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826cf674
	if (!cr0.eq) goto loc_826CF674;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3636
	ctx.r7.s64 = 3636;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,6404
	ctx.r5.s64 = ctx.r11.s64 + 6404;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CF674;
	sub_826CA560(ctx, base);
loc_826CF674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826CF68C"))) PPC_WEAK_FUNC(sub_826CF68C);
PPC_FUNC_IMPL(__imp__sub_826CF68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CF690"))) PPC_WEAK_FUNC(sub_826CF690);
PPC_FUNC_IMPL(__imp__sub_826CF690) {
	PPC_FUNC_PROLOGUE();
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82748e88
	ctx.lr = 0x826CF6B8;
	sub_82748E88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826cf6e4
	if (!cr0.eq) goto loc_826CF6E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3676
	ctx.r7.s64 = 3676;
	// addi r6,r11,5976
	ctx.r6.s64 = ctx.r11.s64 + 5976;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,6404
	ctx.r5.s64 = ctx.r11.s64 + 6404;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CF6E4;
	sub_826CA560(ctx, base);
loc_826CF6E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826CF6FC"))) PPC_WEAK_FUNC(sub_826CF6FC);
PPC_FUNC_IMPL(__imp__sub_826CF6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CF700"))) PPC_WEAK_FUNC(sub_826CF700);
PPC_FUNC_IMPL(__imp__sub_826CF700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826CF708;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,-6172
	ctx.r29.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,5976
	ctx.r28.s64 = ctx.r11.s64 + 5976;
	// bne cr6,0x826cf750
	if (!cr6.eq) goto loc_826CF750;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2860
	ctx.r7.s64 = 2860;
	// addi r5,r11,6264
	ctx.r5.s64 = ctx.r11.s64 + 6264;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF750;
	sub_826CA560(ctx, base);
loc_826CF750:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x826cf774
	if (!cr6.eq) goto loc_826CF774;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2861
	ctx.r7.s64 = 2861;
	// addi r5,r11,6252
	ctx.r5.s64 = ctx.r11.s64 + 6252;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF774;
	sub_826CA560(ctx, base);
loc_826CF774:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x826CF784;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826cf7a8
	if (!cr0.eq) goto loc_826CF7A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2867
	ctx.r7.s64 = 2867;
	// addi r5,r11,6240
	ctx.r5.s64 = ctx.r11.s64 + 6240;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF7A8;
	sub_826CA560(ctx, base);
loc_826CF7A8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82748e88
	ctx.lr = 0x826CF7CC;
	sub_82748E88(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x826cf7f0
	if (!cr0.eq) goto loc_826CF7F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2878
	ctx.r7.s64 = 2878;
	// addi r5,r11,6404
	ctx.r5.s64 = ctx.r11.s64 + 6404;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF7F0;
	sub_826CA560(ctx, base);
loc_826CF7F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cece0
	ctx.lr = 0x826CF7FC;
	sub_826CECE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF810"))) PPC_WEAK_FUNC(sub_826CF810);
PPC_FUNC_IMPL(__imp__sub_826CF810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27fc
	ctx.lr = 0x826CF818;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r29,r11,-6172
	ctx.r29.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r28,r11,6792
	ctx.r28.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826cf870
	if (!cr6.eq) goto loc_826CF870;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,155
	ctx.r7.s64 = 155;
	// addi r5,r11,6264
	ctx.r5.s64 = ctx.r11.s64 + 6264;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF870;
	sub_826CA560(ctx, base);
loc_826CF870:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x826cf894
	if (!cr6.eq) goto loc_826CF894;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,156
	ctx.r7.s64 = 156;
	// addi r5,r11,6252
	ctx.r5.s64 = ctx.r11.s64 + 6252;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF894;
	sub_826CA560(ctx, base);
loc_826CF894:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x826cf8b8
	if (!cr6.eq) goto loc_826CF8B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,157
	ctx.r7.s64 = 157;
	// addi r5,r11,6780
	ctx.r5.s64 = ctx.r11.s64 + 6780;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF8B8;
	sub_826CA560(ctx, base);
loc_826CF8B8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x826cf8dc
	if (!cr6.eq) goto loc_826CF8DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,158
	ctx.r7.s64 = 158;
	// addi r5,r11,6764
	ctx.r5.s64 = ctx.r11.s64 + 6764;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF8DC;
	sub_826CA560(ctx, base);
loc_826CF8DC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x826cf900
	if (!cr6.eq) goto loc_826CF900;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,159
	ctx.r7.s64 = 159;
	// addi r5,r11,6748
	ctx.r5.s64 = ctx.r11.s64 + 6748;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF900;
	sub_826CA560(ctx, base);
loc_826CF900:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x826cf924
	if (!cr6.eq) goto loc_826CF924;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,160
	ctx.r7.s64 = 160;
	// addi r5,r11,6732
	ctx.r5.s64 = ctx.r11.s64 + 6732;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF924;
	sub_826CA560(ctx, base);
loc_826CF924:
	// li r4,2452
	ctx.r4.s64 = 2452;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x826CF934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826cf960
	if (!cr0.eq) goto loc_826CF960;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,166
	ctx.r7.s64 = 166;
	// addi r5,r11,6688
	ctx.r5.s64 = ctx.r11.s64 + 6688;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CF958;
	sub_826CA560(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826cf9f4
	goto loc_826CF9F4;
loc_826CF960:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r10,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r21,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r21.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82749658
	ctx.lr = 0x826CF9A8;
	sub_82749658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r11.u32);
	// bl 0x82749658
	ctx.lr = 0x826CF9B8;
	sub_82749658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r11.u32);
	// bl 0x82749658
	ctx.lr = 0x826CF9C8;
	sub_82749658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x827491c8
	ctx.lr = 0x826CF9D8;
	sub_827491C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r11.u32);
	// bl 0x82749418
	ctx.lr = 0x826CF9E8;
	sub_82749418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r11.u32);
loc_826CF9F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d284c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CF9FC"))) PPC_WEAK_FUNC(sub_826CF9FC);
PPC_FUNC_IMPL(__imp__sub_826CF9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CFA00"))) PPC_WEAK_FUNC(sub_826CFA00);
PPC_FUNC_IMPL(__imp__sub_826CFA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x826CFA08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,6792
	ctx.r29.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826cfa44
	if (!cr6.eq) goto loc_826CFA44;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,230
	ctx.r7.s64 = 230;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CFA44;
	sub_826CA560(ctx, base);
loc_826CFA44:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
	// bne 0x826cfbc8
	if (!cr0.eq) goto loc_826CFBC8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cfa78
	if (cr6.eq) goto loc_826CFA78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,241
	ctx.r7.s64 = 241;
	// addi r5,r11,6888
	ctx.r5.s64 = ctx.r11.s64 + 6888;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CFA78;
	sub_826CA560(ctx, base);
loc_826CFA78:
	// lwz r4,2444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x827494b0
	ctx.lr = 0x826CFA84;
	sub_827494B0(ctx, base);
	// b 0x826cfaac
	goto loc_826CFAAC;
loc_826CFA88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826cf5c8
	ctx.lr = 0x826CFA90;
	sub_826CF5C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CFAA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826cf590
	ctx.lr = 0x826CFAAC;
	sub_826CF590(ctx, base);
loc_826CFAAC:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// bl 0x826cf2c0
	ctx.lr = 0x826CFAB4;
	sub_826CF2C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x826cfa88
	if (!cr0.eq) goto loc_826CFA88;
	// lwz r4,2440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x827496f0
	ctx.lr = 0x826CFAC8;
	sub_827496F0(ctx, base);
	// b 0x826cfaf0
	goto loc_826CFAF0;
loc_826CFACC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826cf5c8
	ctx.lr = 0x826CFAD4;
	sub_826CF5C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CFAE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826cf590
	ctx.lr = 0x826CFAF0;
	sub_826CF590(ctx, base);
loc_826CFAF0:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x826cf2c0
	ctx.lr = 0x826CFAF8;
	sub_826CF2C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x826cfacc
	if (!cr0.eq) goto loc_826CFACC;
	// lwz r4,2436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x827496f0
	ctx.lr = 0x826CFB0C;
	sub_827496F0(ctx, base);
	// b 0x826cfb34
	goto loc_826CFB34;
loc_826CFB10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826cf5c8
	ctx.lr = 0x826CFB18;
	sub_826CF5C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CFB2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826cf590
	ctx.lr = 0x826CFB34;
	sub_826CF590(ctx, base);
loc_826CFB34:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// bl 0x826cf2c0
	ctx.lr = 0x826CFB3C;
	sub_826CF2C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x826cfb10
	if (!cr0.eq) goto loc_826CFB10;
	// lwz r4,2428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x827496f0
	ctx.lr = 0x826CFB50;
	sub_827496F0(ctx, base);
	// b 0x826cfb64
	goto loc_826CFB64;
loc_826CFB54:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CFB64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826CFB64:
	// lwz r3,2432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// bl 0x826ce730
	ctx.lr = 0x826CFB6C;
	sub_826CE730(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x826cfb54
	if (!cr0.eq) goto loc_826CFB54;
	// lwz r4,2432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82749270
	ctx.lr = 0x826CFB80;
	sub_82749270(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x826d1338
	ctx.lr = 0x826CFB88;
	sub_826D1338(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826cfb98
	if (cr0.eq) goto loc_826CFB98;
	// bl 0x82749e20
	ctx.lr = 0x826CFB98;
	sub_82749E20(ctx, base);
loc_826CFB98:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x826cfbb4
	if (cr0.eq) goto loc_826CFBB4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CFBB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826CFBB4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CFBC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826CFBC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CFBD0"))) PPC_WEAK_FUNC(sub_826CFBD0);
PPC_FUNC_IMPL(__imp__sub_826CFBD0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826cfc0c
	if (!cr6.eq) goto loc_826CFC0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,314
	ctx.r7.s64 = 314;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CFC0C;
	sub_826CA560(ctx, base);
loc_826CFC0C:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826CFC2C"))) PPC_WEAK_FUNC(sub_826CFC2C);
PPC_FUNC_IMPL(__imp__sub_826CFC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CFC30"))) PPC_WEAK_FUNC(sub_826CFC30);
PPC_FUNC_IMPL(__imp__sub_826CFC30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826CFC38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,6792
	ctx.r29.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826cfc78
	if (!cr6.eq) goto loc_826CFC78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,376
	ctx.r7.s64 = 376;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CFC78;
	sub_826CA560(ctx, base);
loc_826CFC78:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x826cfca0
	if (!cr6.eq) goto loc_826CFCA0;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x826cfcc8
	goto loc_826CFCC8;
loc_826CFCA0:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x826cfcc4
	if (cr6.eq) goto loc_826CFCC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,395
	ctx.r7.s64 = 395;
	// addi r5,r11,6908
	ctx.r5.s64 = ctx.r11.s64 + 6908;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CFCC4;
	sub_826CA560(ctx, base);
loc_826CFCC4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_826CFCC8:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82749cd0
	ctx.lr = 0x826CFCE0;
	sub_82749CD0(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CFCEC"))) PPC_WEAK_FUNC(sub_826CFCEC);
PPC_FUNC_IMPL(__imp__sub_826CFCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CFCF0"))) PPC_WEAK_FUNC(sub_826CFCF0);
PPC_FUNC_IMPL(__imp__sub_826CFCF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cfd0c
	if (cr6.eq) goto loc_826CFD0C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_826CFD0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CFD14"))) PPC_WEAK_FUNC(sub_826CFD14);
PPC_FUNC_IMPL(__imp__sub_826CFD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CFD18"))) PPC_WEAK_FUNC(sub_826CFD18);
PPC_FUNC_IMPL(__imp__sub_826CFD18) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826cfd64
	if (cr6.lt) goto loc_826CFD64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,309
	ctx.r7.s64 = 309;
	// addi r6,r11,-5832
	ctx.r6.s64 = ctx.r11.s64 + -5832;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-5904
	ctx.r5.s64 = ctx.r11.s64 + -5904;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CFD64;
	sub_826CA560(ctx, base);
loc_826CFD64:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826CFD88"))) PPC_WEAK_FUNC(sub_826CFD88);
PPC_FUNC_IMPL(__imp__sub_826CFD88) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826cfdcc
	if (!cr6.eq) goto loc_826CFDCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,452
	ctx.r7.s64 = 452;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CFDCC;
	sub_826CA560(ctx, base);
loc_826CFDCC:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_826CFDE8"))) PPC_WEAK_FUNC(sub_826CFDE8);
PPC_FUNC_IMPL(__imp__sub_826CFDE8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826cfe24
	if (!cr6.eq) goto loc_826CFE24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,472
	ctx.r7.s64 = 472;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CFE24;
	sub_826CA560(ctx, base);
loc_826CFE24:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
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

__attribute__((alias("__imp__sub_826CFE3C"))) PPC_WEAK_FUNC(sub_826CFE3C);
PPC_FUNC_IMPL(__imp__sub_826CFE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CFE40"))) PPC_WEAK_FUNC(sub_826CFE40);
PPC_FUNC_IMPL(__imp__sub_826CFE40) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826cfe84
	if (!cr6.eq) goto loc_826CFE84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,498
	ctx.r7.s64 = 498;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826CFE84;
	sub_826CA560(ctx, base);
loc_826CFE84:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_826CFEA0"))) PPC_WEAK_FUNC(sub_826CFEA0);
PPC_FUNC_IMPL(__imp__sub_826CFEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826CFEA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,6792
	ctx.r29.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826cfef0
	if (!cr6.eq) goto loc_826CFEF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,550
	ctx.r7.s64 = 550;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CFEF0;
	sub_826CA560(ctx, base);
loc_826CFEF0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CFF04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bne 0x826cff34
	if (!cr0.eq) goto loc_826CFF34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,557
	ctx.r7.s64 = 557;
	// addi r5,r11,7024
	ctx.r5.s64 = ctx.r11.s64 + 7024;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CFF2C;
	sub_826CA560(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x826cffc0
	goto loc_826CFFC0;
loc_826CFF34:
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826cff7c
	if (cr0.eq) goto loc_826CFF7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,563
	ctx.r7.s64 = 563;
	// addi r5,r11,6980
	ctx.r5.s64 = ctx.r11.s64 + 6980;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CFF7C;
	sub_826CA560(ctx, base);
loc_826CFF7C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,16384
	cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// blt cr6,0x826cffa8
	if (cr6.lt) goto loc_826CFFA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,564
	ctx.r7.s64 = 564;
	// addi r5,r11,6940
	ctx.r5.s64 = ctx.r11.s64 + 6940;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826CFFA8;
	sub_826CA560(ctx, base);
loc_826CFFA8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828d2930
	ctx.lr = 0x826CFFBC;
	sub_828D2930(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826CFFC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CFFC8"))) PPC_WEAK_FUNC(sub_826CFFC8);
PPC_FUNC_IMPL(__imp__sub_826CFFC8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d0004
	if (!cr6.eq) goto loc_826D0004;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,591
	ctx.r7.s64 = 591;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D0004;
	sub_826CA560(ctx, base);
loc_826D0004:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
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

__attribute__((alias("__imp__sub_826D001C"))) PPC_WEAK_FUNC(sub_826D001C);
PPC_FUNC_IMPL(__imp__sub_826D001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D0020"))) PPC_WEAK_FUNC(sub_826D0020);
PPC_FUNC_IMPL(__imp__sub_826D0020) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826D0028;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,-6172
	ctx.r28.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,-5832
	ctx.r27.s64 = ctx.r11.s64 + -5832;
	// blt cr6,0x826d0070
	if (cr6.lt) goto loc_826D0070;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,634
	ctx.r7.s64 = 634;
	// addi r5,r11,-5680
	ctx.r5.s64 = ctx.r11.s64 + -5680;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0070;
	sub_826CA560(ctx, base);
loc_826D0070:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 * 12;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d00a4
	if (cr6.lt) goto loc_826D00A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,634
	ctx.r7.s64 = 634;
	// addi r5,r11,-5752
	ctx.r5.s64 = ctx.r11.s64 + -5752;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D00A4;
	sub_826CA560(ctx, base);
loc_826D00A4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826cfd18
	ctx.lr = 0x826D00C4;
	sub_826CFD18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D00CC"))) PPC_WEAK_FUNC(sub_826D00CC);
PPC_FUNC_IMPL(__imp__sub_826D00CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D00D0"))) PPC_WEAK_FUNC(sub_826D00D0);
PPC_FUNC_IMPL(__imp__sub_826D00D0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826D00D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826d011c
	if (!cr6.eq) goto loc_826D011C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,919
	ctx.r7.s64 = 919;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D011C;
	sub_826CA560(ctx, base);
loc_826D011C:
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x826d0140
	if (cr6.lt) goto loc_826D0140;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,920
	ctx.r7.s64 = 920;
	// addi r5,r11,7220
	ctx.r5.s64 = ctx.r11.s64 + 7220;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0140;
	sub_826CA560(ctx, base);
loc_826D0140:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x826d0164
	if (!cr6.eq) goto loc_826D0164;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,921
	ctx.r7.s64 = 921;
	// addi r5,r11,7252
	ctx.r5.s64 = ctx.r11.s64 + 7252;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0164;
	sub_826CA560(ctx, base);
loc_826D0164:
	// mulli r11,r28,148
	ctx.r11.s64 = ctx.r28.s64 * 148;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x828d2930
	ctx.lr = 0x826D017C;
	sub_828D2930(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D0188"))) PPC_WEAK_FUNC(sub_826D0188);
PPC_FUNC_IMPL(__imp__sub_826D0188) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d01c4
	if (!cr6.eq) goto loc_826D01C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,997
	ctx.r7.s64 = 997;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D01C4;
	sub_826CA560(ctx, base);
loc_826D01C4:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
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

__attribute__((alias("__imp__sub_826D01DC"))) PPC_WEAK_FUNC(sub_826D01DC);
PPC_FUNC_IMPL(__imp__sub_826D01DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D01E0"))) PPC_WEAK_FUNC(sub_826D01E0);
PPC_FUNC_IMPL(__imp__sub_826D01E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826D01E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826d022c
	if (!cr6.eq) goto loc_826D022C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D022C;
	sub_826CA560(ctx, base);
loc_826D022C:
	// cmpwi cr6,r28,1966
	cr6.compare<int32_t>(ctx.r28.s32, 1966, ctx.xer);
	// bge cr6,0x826d0250
	if (!cr6.lt) goto loc_826D0250;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1101
	ctx.r7.s64 = 1101;
	// addi r5,r11,7440
	ctx.r5.s64 = ctx.r11.s64 + 7440;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0250;
	sub_826CA560(ctx, base);
loc_826D0250:
	// cmpwi cr6,r28,2086
	cr6.compare<int32_t>(ctx.r28.s32, 2086, ctx.xer);
	// blt cr6,0x826d0274
	if (cr6.lt) goto loc_826D0274;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// addi r5,r11,7412
	ctx.r5.s64 = ctx.r11.s64 + 7412;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0274;
	sub_826CA560(ctx, base);
loc_826D0274:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D0288;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x826d02b4
	if (!cr0.eq) goto loc_826D02B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1110
	ctx.r7.s64 = 1110;
	// addi r5,r11,7352
	ctx.r5.s64 = ctx.r11.s64 + 7352;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D02AC;
	sub_826CA560(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x826d02c8
	goto loc_826D02C8;
loc_826D02B4:
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// stw r27,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r27.u32);
	// lwz r3,2440(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2440);
	// bl 0x826cf190
	ctx.lr = 0x826D02C4;
	sub_826CF190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D02C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D02D0"))) PPC_WEAK_FUNC(sub_826D02D0);
PPC_FUNC_IMPL(__imp__sub_826D02D0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d030c
	if (!cr6.eq) goto loc_826D030C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D030C;
	sub_826CA560(ctx, base);
loc_826D030C:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
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

__attribute__((alias("__imp__sub_826D0324"))) PPC_WEAK_FUNC(sub_826D0324);
PPC_FUNC_IMPL(__imp__sub_826D0324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D0328"))) PPC_WEAK_FUNC(sub_826D0328);
PPC_FUNC_IMPL(__imp__sub_826D0328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826D0330;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,6792
	ctx.r29.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826d0378
	if (!cr6.eq) goto loc_826D0378;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1177
	ctx.r7.s64 = 1177;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0378;
	sub_826CA560(ctx, base);
loc_826D0378:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D038C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x826d03b8
	if (!cr0.eq) goto loc_826D03B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1186
	ctx.r7.s64 = 1186;
	// addi r5,r11,7464
	ctx.r5.s64 = ctx.r11.s64 + 7464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D03B0;
	sub_826CA560(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x826d03d8
	goto loc_826D03D8;
loc_826D03B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x826cf190
	ctx.lr = 0x826D03D4;
	sub_826CF190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D03D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D03E0"))) PPC_WEAK_FUNC(sub_826D03E0);
PPC_FUNC_IMPL(__imp__sub_826D03E0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d0424
	if (cr6.eq) goto loc_826D0424;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,268
	ctx.r7.s64 = 268;
	// addi r6,r11,7568
	ctx.r6.s64 = ctx.r11.s64 + 7568;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,7532
	ctx.r5.s64 = ctx.r11.s64 + 7532;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D041C;
	sub_826CA560(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826d0428
	goto loc_826D0428;
loc_826D0424:
	// li r3,32
	ctx.r3.s64 = 32;
loc_826D0428:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D0438"))) PPC_WEAK_FUNC(sub_826D0438);
PPC_FUNC_IMPL(__imp__sub_826D0438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826D0440;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,6792
	ctx.r29.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826d0488
	if (!cr6.eq) goto loc_826D0488;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1284
	ctx.r7.s64 = 1284;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0488;
	sub_826CA560(ctx, base);
loc_826D0488:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D049C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x826d04c8
	if (!cr0.eq) goto loc_826D04C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1293
	ctx.r7.s64 = 1293;
	// addi r5,r11,7464
	ctx.r5.s64 = ctx.r11.s64 + 7464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D04C0;
	sub_826CA560(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x826d04e8
	goto loc_826D04E8;
loc_826D04C8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x826cf190
	ctx.lr = 0x826D04E4;
	sub_826CF190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D04E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D04F0"))) PPC_WEAK_FUNC(sub_826D04F0);
PPC_FUNC_IMPL(__imp__sub_826D04F0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d052c
	if (!cr6.eq) goto loc_826D052C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1327
	ctx.r7.s64 = 1327;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D052C;
	sub_826CA560(ctx, base);
loc_826D052C:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
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

__attribute__((alias("__imp__sub_826D0544"))) PPC_WEAK_FUNC(sub_826D0544);
PPC_FUNC_IMPL(__imp__sub_826D0544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D0548"))) PPC_WEAK_FUNC(sub_826D0548);
PPC_FUNC_IMPL(__imp__sub_826D0548) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x826D0550;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-6172
	ctx.r29.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,6792
	ctx.r28.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826d0594
	if (!cr6.eq) goto loc_826D0594;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0594;
	sub_826CA560(ctx, base);
loc_826D0594:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x826d05b8
	if (!cr6.eq) goto loc_826D05B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1534
	ctx.r7.s64 = 1534;
	// addi r5,r11,5880
	ctx.r5.s64 = ctx.r11.s64 + 5880;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D05B8;
	sub_826CA560(ctx, base);
loc_826D05B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d04f0
	ctx.lr = 0x826D05C0;
	sub_826D04F0(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x826d05e4
	if (!cr0.eq) goto loc_826D05E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1565
	ctx.r7.s64 = 1565;
	// addi r5,r11,7672
	ctx.r5.s64 = ctx.r11.s64 + 7672;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D05E4;
	sub_826CA560(ctx, base);
loc_826D05E4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826cf220
	ctx.lr = 0x826D05EC;
	sub_826CF220(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x826d06b4
	if (cr0.eq) goto loc_826D06B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r11,7660
	ctx.r25.s64 = ctx.r11.s64 + 7660;
loc_826D05FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826cf5c8
	ctx.lr = 0x826D0604;
	sub_826CF5C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826d0624
	if (!cr0.eq) goto loc_826D0624;
	// li r7,1573
	ctx.r7.s64 = 1573;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0624;
	sub_826CA560(ctx, base);
loc_826D0624:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826d0674
	if (cr6.lt) goto loc_826D0674;
	// beq cr6,0x826d0654
	if (cr6.eq) goto loc_826D0654;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x826d0698
	if (!cr6.lt) goto loc_826D0698;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x826d0020
	ctx.lr = 0x826D064C;
	sub_826D0020(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x826d0664
	goto loc_826D0664;
loc_826D0654:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x826cfd18
	ctx.lr = 0x826D0660;
	sub_826CFD18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_826D0664:
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x826d0698
	goto loc_826D0698;
loc_826D0674:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8274a670
	ctx.lr = 0x826D0688;
	sub_8274A670(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826d0698
	if (cr6.eq) goto loc_826D0698;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826D0698:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826d06c0
	if (cr6.eq) goto loc_826D06C0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826cf520
	ctx.lr = 0x826D06AC;
	sub_826CF520(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x826d05fc
	if (!cr0.eq) goto loc_826D05FC;
loc_826D06B4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826D06B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_826D06C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826d06b8
	goto loc_826D06B8;
}

__attribute__((alias("__imp__sub_826D06C8"))) PPC_WEAK_FUNC(sub_826D06C8);
PPC_FUNC_IMPL(__imp__sub_826D06C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826D06D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,6792
	ctx.r29.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826d071c
	if (!cr6.eq) goto loc_826D071C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1647
	ctx.r7.s64 = 1647;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D071C;
	sub_826CA560(ctx, base);
loc_826D071C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d0744
	if (!cr6.eq) goto loc_826D0744;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1648
	ctx.r7.s64 = 1648;
	// addi r5,r11,7688
	ctx.r5.s64 = ctx.r11.s64 + 7688;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0744;
	sub_826CA560(ctx, base);
loc_826D0744:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82749e40
	ctx.lr = 0x826D075C;
	sub_82749E40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D0764"))) PPC_WEAK_FUNC(sub_826D0764);
PPC_FUNC_IMPL(__imp__sub_826D0764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D0768"))) PPC_WEAK_FUNC(sub_826D0768);
PPC_FUNC_IMPL(__imp__sub_826D0768) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x826D0770;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826d07c0
	if (!cr6.eq) goto loc_826D07C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1756
	ctx.r7.s64 = 1756;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D07C0;
	sub_826CA560(ctx, base);
loc_826D07C0:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d07e8
	if (!cr6.eq) goto loc_826D07E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1757
	ctx.r7.s64 = 1757;
	// addi r5,r11,7688
	ctx.r5.s64 = ctx.r11.s64 + 7688;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D07E8;
	sub_826CA560(ctx, base);
loc_826D07E8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x826d080c
	if (!cr6.eq) goto loc_826D080C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1758
	ctx.r7.s64 = 1758;
	// addi r5,r11,5880
	ctx.r5.s64 = ctx.r11.s64 + 5880;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D080C;
	sub_826CA560(ctx, base);
loc_826D080C:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8274a538
	ctx.lr = 0x826D0828;
	sub_8274A538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x826d083c
	if (cr6.eq) goto loc_826D083C;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x826d0874
	if (!cr6.eq) goto loc_826D0874;
loc_826D083C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x826d0874
	if (!cr6.eq) goto loc_826D0874;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d0874
	if (!cr6.eq) goto loc_826D0874;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d0020
	ctx.lr = 0x826D0860;
	sub_826D0020(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d0438
	ctx.lr = 0x826D0874;
	sub_826D0438(ctx, base);
loc_826D0874:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D0880"))) PPC_WEAK_FUNC(sub_826D0880);
PPC_FUNC_IMPL(__imp__sub_826D0880) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d08bc
	if (!cr6.eq) goto loc_826D08BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1795
	ctx.r7.s64 = 1795;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D08BC;
	sub_826CA560(ctx, base);
loc_826D08BC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
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

__attribute__((alias("__imp__sub_826D08D4"))) PPC_WEAK_FUNC(sub_826D08D4);
PPC_FUNC_IMPL(__imp__sub_826D08D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D08D8"))) PPC_WEAK_FUNC(sub_826D08D8);
PPC_FUNC_IMPL(__imp__sub_826D08D8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x826D08E0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d0920
	if (!cr6.eq) goto loc_826D0920;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1830
	ctx.r7.s64 = 1830;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D0920;
	sub_826CA560(ctx, base);
loc_826D0920:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826d1028
	ctx.lr = 0x826D0934;
	sub_826D1028(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D0940"))) PPC_WEAK_FUNC(sub_826D0940);
PPC_FUNC_IMPL(__imp__sub_826D0940) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826D0948;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d0988
	if (!cr6.eq) goto loc_826D0988;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1870
	ctx.r7.s64 = 1870;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D0988;
	sub_826CA560(ctx, base);
loc_826D0988:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826d1090
	ctx.lr = 0x826D09A0;
	sub_826D1090(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D09A8"))) PPC_WEAK_FUNC(sub_826D09A8);
PPC_FUNC_IMPL(__imp__sub_826D09A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x826D09B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d09e8
	if (!cr6.eq) goto loc_826D09E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1903
	ctx.r7.s64 = 1903;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D09E8;
	sub_826CA560(ctx, base);
loc_826D09E8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826d1110
	ctx.lr = 0x826D09F8;
	sub_826D1110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D0A00"))) PPC_WEAK_FUNC(sub_826D0A00);
PPC_FUNC_IMPL(__imp__sub_826D0A00) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d0a3c
	if (!cr6.eq) goto loc_826D0A3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1962
	ctx.r7.s64 = 1962;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D0A3C;
	sub_826CA560(ctx, base);
loc_826D0A3C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
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

__attribute__((alias("__imp__sub_826D0A54"))) PPC_WEAK_FUNC(sub_826D0A54);
PPC_FUNC_IMPL(__imp__sub_826D0A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D0A58"))) PPC_WEAK_FUNC(sub_826D0A58);
PPC_FUNC_IMPL(__imp__sub_826D0A58) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x826D0A60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826d0a9c
	if (!cr6.eq) goto loc_826D0A9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2014
	ctx.r7.s64 = 2014;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0A9C;
	sub_826CA560(ctx, base);
loc_826D0A9C:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d0ac4
	if (!cr6.eq) goto loc_826D0AC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2018
	ctx.r7.s64 = 2018;
	// addi r5,r11,7700
	ctx.r5.s64 = ctx.r11.s64 + 7700;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0AC4;
	sub_826CA560(ctx, base);
loc_826D0AC4:
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x826d1138
	ctx.lr = 0x826D0AD0;
	sub_826D1138(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D0AE0"))) PPC_WEAK_FUNC(sub_826D0AE0);
PPC_FUNC_IMPL(__imp__sub_826D0AE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f4
	ctx.lr = 0x826D0AE8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r24,r11,-6172
	ctx.r24.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r23,r11,6792
	ctx.r23.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826d0b44
	if (!cr6.eq) goto loc_826D0B44;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,657
	ctx.r7.s64 = 657;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0B44;
	sub_826CA560(ctx, base);
loc_826D0B44:
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x826d0b68
	if (cr6.lt) goto loc_826D0B68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,658
	ctx.r7.s64 = 658;
	// addi r5,r11,7220
	ctx.r5.s64 = ctx.r11.s64 + 7220;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0B68;
	sub_826CA560(ctx, base);
loc_826D0B68:
	// mulli r11,r29,148
	ctx.r11.s64 = ctx.r29.s64 * 148;
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r7,r10,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r10.s64;
	// subf r6,r10,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r10.s64;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r11,r27,112
	ctx.r11.s64 = ctx.r27.s64 + 112;
	// stw r31,192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 192, ctx.r31.u32);
	// stw r19,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r19.u32);
loc_826D0B98:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r26,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r26.u32);
	// beq cr6,0x826d0bb0
	if (cr6.eq) goto loc_826D0BB0;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// b 0x826d0bb4
	goto loc_826D0BB4;
loc_826D0BB0:
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
loc_826D0BB4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d0bc4
	if (cr6.eq) goto loc_826D0BC4;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x826d0bc8
	goto loc_826D0BC8;
loc_826D0BC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826D0BC8:
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d0be0
	if (cr6.eq) goto loc_826D0BE0;
	// lwzx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// b 0x826d0be4
	goto loc_826D0BE4;
loc_826D0BE0:
	// stw r19,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r19.u32);
loc_826D0BE4:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x826d0b98
	if (!cr0.eq) goto loc_826D0B98;
	// mulli r10,r29,37
	ctx.r10.s64 = ctx.r29.s64 * 37;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// addi r7,r10,40
	ctx.r7.s64 = ctx.r10.s64 + 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
loc_826D0C0C:
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stwx r22,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r22.u32);
	// stwx r20,r5,r30
	PPC_STORE_U32(ctx.r5.u32 + ctx.r30.u32, ctx.r20.u32);
	// stwx r11,r4,r30
	PPC_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r11.u32);
	// blt cr6,0x826d0c6c
	if (cr6.lt) goto loc_826D0C6C;
	// beq cr6,0x826d0c64
	if (cr6.eq) goto loc_826D0C64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826d0c5c
	if (cr6.lt) goto loc_826D0C5C;
	// beq cr6,0x826d0c54
	if (cr6.eq) goto loc_826D0C54;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x826d0c8c
	if (cr6.lt) goto loc_826D0C8C;
	// b 0x826d0c70
	goto loc_826D0C70;
loc_826D0C54:
	// clrlwi r25,r21,24
	ctx.r25.u64 = ctx.r21.u32 & 0xFF;
	// b 0x826d0c70
	goto loc_826D0C70;
loc_826D0C5C:
	// rlwinm r25,r21,24,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 24) & 0xFF;
	// b 0x826d0c70
	goto loc_826D0C70;
loc_826D0C64:
	// rlwinm r25,r21,16,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xFF;
	// b 0x826d0c70
	goto loc_826D0C70;
loc_826D0C6C:
	// rlwinm r25,r21,8,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFF;
loc_826D0C70:
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// bne cr6,0x826d0c80
	if (!cr6.eq) goto loc_826D0C80;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// b 0x826d0c90
	goto loc_826D0C90;
loc_826D0C80:
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// li r25,2
	ctx.r25.s64 = 2;
	// beq cr6,0x826d0c90
	if (cr6.eq) goto loc_826D0C90;
loc_826D0C8C:
	// li r25,0
	ctx.r25.s64 = 0;
loc_826D0C90:
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stwx r25,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r25.u32);
	// blt cr6,0x826d0c0c
	if (cr6.lt) goto loc_826D0C0C;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x826d0d6c
	if (cr6.eq) goto loc_826D0D6C;
	// ble cr6,0x826d0d14
	if (!cr6.gt) goto loc_826D0D14;
	// cmpwi cr6,r22,4
	cr6.compare<int32_t>(ctx.r22.s32, 4, ctx.xer);
	// bgt cr6,0x826d0d14
	if (cr6.gt) goto loc_826D0D14;
	// lwz r11,200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d0ce4
	if (cr6.eq) goto loc_826D0CE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,742
	ctx.r7.s64 = 742;
	// addi r5,r11,7164
	ctx.r5.s64 = ctx.r11.s64 + 7164;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0CE4;
	sub_826CA560(ctx, base);
loc_826D0CE4:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d0d0c
	if (cr6.eq) goto loc_826D0D0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,743
	ctx.r7.s64 = 743;
	// addi r5,r11,7112
	ctx.r5.s64 = ctx.r11.s64 + 7112;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0D0C;
	sub_826CA560(ctx, base);
loc_826D0D0C:
	// stw r19,196(r27)
	PPC_STORE_U32(ctx.r27.u32 + 196, ctx.r19.u32);
	// b 0x826d0dc0
	goto loc_826D0DC0;
loc_826D0D14:
	// lwz r11,196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d0d3c
	if (cr6.eq) goto loc_826D0D3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,758
	ctx.r7.s64 = 758;
	// addi r5,r11,7060
	ctx.r5.s64 = ctx.r11.s64 + 7060;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0D3C;
	sub_826CA560(ctx, base);
loc_826D0D3C:
	// lwz r11,200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d0d64
	if (cr6.eq) goto loc_826D0D64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,759
	ctx.r7.s64 = 759;
	// addi r5,r11,7164
	ctx.r5.s64 = ctx.r11.s64 + 7164;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0D64;
	sub_826CA560(ctx, base);
loc_826D0D64:
	// stw r19,204(r27)
	PPC_STORE_U32(ctx.r27.u32 + 204, ctx.r19.u32);
	// b 0x826d0dc0
	goto loc_826D0DC0;
loc_826D0D6C:
	// lwz r11,196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d0d94
	if (cr6.eq) goto loc_826D0D94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,750
	ctx.r7.s64 = 750;
	// addi r5,r11,7060
	ctx.r5.s64 = ctx.r11.s64 + 7060;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0D94;
	sub_826CA560(ctx, base);
loc_826D0D94:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d0dbc
	if (cr6.eq) goto loc_826D0DBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,751
	ctx.r7.s64 = 751;
	// addi r5,r11,7112
	ctx.r5.s64 = ctx.r11.s64 + 7112;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0DBC;
	sub_826CA560(ctx, base);
loc_826D0DBC:
	// stw r19,200(r27)
	PPC_STORE_U32(ctx.r27.u32 + 200, ctx.r19.u32);
loc_826D0DC0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2844
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D0DC8"))) PPC_WEAK_FUNC(sub_826D0DC8);
PPC_FUNC_IMPL(__imp__sub_826D0DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826D0DD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-6172
	ctx.r29.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,6792
	ctx.r28.s64 = ctx.r11.s64 + 6792;
	// bne cr6,0x826d0e10
	if (!cr6.eq) goto loc_826D0E10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,956
	ctx.r7.s64 = 956;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0E10;
	sub_826CA560(ctx, base);
loc_826D0E10:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x826d0e34
	if (!cr6.eq) goto loc_826D0E34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,957
	ctx.r7.s64 = 957;
	// addi r5,r11,7340
	ctx.r5.s64 = ctx.r11.s64 + 7340;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0E34;
	sub_826CA560(ctx, base);
loc_826D0E34:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d03e0
	ctx.lr = 0x826D0E3C;
	sub_826D03E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D0E50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826d0e7c
	if (!cr0.eq) goto loc_826D0E7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,966
	ctx.r7.s64 = 966;
	// addi r5,r11,7272
	ctx.r5.s64 = ctx.r11.s64 + 7272;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0E74;
	sub_826CA560(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x826d0ea4
	goto loc_826D0EA4;
loc_826D0E7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d03e0
	ctx.lr = 0x826D0E84;
	sub_826D03E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d2930
	ctx.lr = 0x826D0E94;
	sub_828D2930(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2428);
	// bl 0x826cf190
	ctx.lr = 0x826D0EA0;
	sub_826CF190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D0EA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D0EAC"))) PPC_WEAK_FUNC(sub_826D0EAC);
PPC_FUNC_IMPL(__imp__sub_826D0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D0EB0"))) PPC_WEAK_FUNC(sub_826D0EB0);
PPC_FUNC_IMPL(__imp__sub_826D0EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826D0EB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,7720
	ctx.r29.s64 = ctx.r11.s64 + 7720;
	// bne cr6,0x826d0f00
	if (!cr6.eq) goto loc_826D0F00;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,74
	ctx.r7.s64 = 74;
	// addi r5,r11,6264
	ctx.r5.s64 = ctx.r11.s64 + 6264;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0F00;
	sub_826CA560(ctx, base);
loc_826D0F00:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x826d0f24
	if (!cr6.eq) goto loc_826D0F24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,75
	ctx.r7.s64 = 75;
	// addi r5,r11,6252
	ctx.r5.s64 = ctx.r11.s64 + 6252;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0F24;
	sub_826CA560(ctx, base);
loc_826D0F24:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x826d0f48
	if (!cr6.eq) goto loc_826D0F48;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,76
	ctx.r7.s64 = 76;
	// addi r5,r11,6780
	ctx.r5.s64 = ctx.r11.s64 + 6780;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0F48;
	sub_826CA560(ctx, base);
loc_826D0F48:
	// li r4,2704
	ctx.r4.s64 = 2704;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x826D0F58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826d0f80
	if (!cr0.eq) goto loc_826D0F80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,80
	ctx.r7.s64 = 80;
	// addi r5,r11,7712
	ctx.r5.s64 = ctx.r11.s64 + 7712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D0F7C;
	sub_826CA560(ctx, base);
	// b 0x826d0fd0
	goto loc_826D0FD0;
loc_826D0F80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_826D0F98:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// blt cr6,0x826d0f98
	if (cr6.lt) goto loc_826D0F98;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,1168
	ctx.r10.s64 = ctx.r31.s64 + 1168;
loc_826D0FB8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// blt cr6,0x826d0fb8
	if (cr6.lt) goto loc_826D0FB8;
loc_826D0FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D0FDC"))) PPC_WEAK_FUNC(sub_826D0FDC);
PPC_FUNC_IMPL(__imp__sub_826D0FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D0FE0"))) PPC_WEAK_FUNC(sub_826D0FE0);
PPC_FUNC_IMPL(__imp__sub_826D0FE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r10,32
	ctx.r10.s64 = 32;
loc_826D0FE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,0,12,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bne 0x826d0fe8
	if (!cr0.eq) goto loc_826D0FE8;
	// addi r11,r3,1168
	ctx.r11.s64 = ctx.r3.s64 + 1168;
	// li r10,128
	ctx.r10.s64 = 128;
loc_826D1008:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x826d1008
	if (!cr0.eq) goto loc_826D1008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D1024"))) PPC_WEAK_FUNC(sub_826D1024);
PPC_FUNC_IMPL(__imp__sub_826D1024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D1028"))) PPC_WEAK_FUNC(sub_826D1028);
PPC_FUNC_IMPL(__imp__sub_826D1028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mulli r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 * 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r5,r8,20,8,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF00000;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r11,r6,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r7,r11,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// or r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 | ctx.r11.u64;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// and r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ctx.r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r9,r11,0,20,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r9.u64 & 0xFF000);
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// stfs f1,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D1090"))) PPC_WEAK_FUNC(sub_826D1090);
PPC_FUNC_IMPL(__imp__sub_826D1090) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826D1098;
	__savegprlr_28(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r8,r5,3
	ctx.r8.s64 = ctx.r5.s64 + 3;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,3
	ctx.r29.s64 = 3;
	// mulli r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 * 36;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r31,r5,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r8,r30,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r5.u8 & 0x3F));
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r28,r8,20,8,11
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF00000;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r10,r29,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// slw r9,r30,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r31,r10,12,0,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// or r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 | ctx.r10.u64;
	// and r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 & ctx.r10.u64;
	// or r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 | ctx.r9.u64;
	// rlwimi r9,r10,0,20,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r9.u64 & 0xFF000);
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// stw r6,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r6.u32);
	// stwx r7,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u32);
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D110C"))) PPC_WEAK_FUNC(sub_826D110C);
PPC_FUNC_IMPL(__imp__sub_826D110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D1110"))) PPC_WEAK_FUNC(sub_826D1110);
PPC_FUNC_IMPL(__imp__sub_826D1110) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 * 36;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// rlwimi r9,r10,13,8,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xFFF000) | (ctx.r9.u64 & 0xFFFFFFFFFF000FFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D1134"))) PPC_WEAK_FUNC(sub_826D1134);
PPC_FUNC_IMPL(__imp__sub_826D1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D1138"))) PPC_WEAK_FUNC(sub_826D1138);
PPC_FUNC_IMPL(__imp__sub_826D1138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2800
	ctx.lr = 0x826D1140;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-6172
	ctx.r29.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,7720
	ctx.r27.s64 = ctx.r11.s64 + 7720;
	// bne cr6,0x826d1190
	if (!cr6.eq) goto loc_826D1190;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,401
	ctx.r7.s64 = 401;
	// addi r5,r11,7712
	ctx.r5.s64 = ctx.r11.s64 + 7712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1190;
	sub_826CA560(ctx, base);
loc_826D1190:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x826d11b4
	if (!cr6.eq) goto loc_826D11B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,402
	ctx.r7.s64 = 402;
	// addi r5,r11,7832
	ctx.r5.s64 = ctx.r11.s64 + 7832;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D11B4;
	sub_826CA560(ctx, base);
loc_826D11B4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826d132c
	if (cr6.eq) goto loc_826D132C;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x826d132c
	if (cr6.eq) goto loc_826D132C;
	// addi r24,r31,16
	ctx.r24.s64 = ctx.r31.s64 + 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_826D11D0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,8,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826d11e0
	if (cr0.eq) goto loc_826D11E0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_826D11E0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// bne 0x826d11d0
	if (!cr0.eq) goto loc_826D11D0;
	// addi r25,r31,1168
	ctx.r25.s64 = ctx.r31.s64 + 1168;
	// li r11,128
	ctx.r11.s64 = 128;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_826D11F8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826d1208
	if (cr0.eq) goto loc_826D1208;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_826D1208:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x826d11f8
	if (!cr0.eq) goto loc_826D11F8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826d1224
	if (!cr6.eq) goto loc_826D1224;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826d126c
	if (cr6.eq) goto loc_826D126C;
loc_826D1224:
	// mulli r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 * 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D1244;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x826d1278
	if (!cr0.eq) goto loc_826D1278;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,443
	ctx.r7.s64 = 443;
	// addi r5,r11,7824
	ctx.r5.s64 = ctx.r11.s64 + 7824;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1268;
	sub_826CA560(ctx, base);
	// li r23,16
	ctx.r23.s64 = 16;
loc_826D126C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// b 0x826d1330
	goto loc_826D1330;
loc_826D1278:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// beq cr6,0x826d12d0
	if (cr6.eq) goto loc_826D12D0;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_826D12A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d12c4
	if (cr0.eq) goto loc_826D12C4;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828d2930
	ctx.lr = 0x826D12BC;
	sub_828D2930(ctx, base);
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_826D12C4:
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826d12a0
	if (!cr6.eq) goto loc_826D12A0;
loc_826D12D0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826d126c
	if (cr6.eq) goto loc_826D126C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// beq cr6,0x826d126c
	if (cr6.eq) goto loc_826D126C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_826D12F8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r8,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x826d1320
	if (cr0.eq) goto loc_826D1320;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_826D1320:
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x826d12f8
	goto loc_826D12F8;
loc_826D132C:
	// li r3,25
	ctx.r3.s64 = 25;
loc_826D1330:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2850
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D1338"))) PPC_WEAK_FUNC(sub_826D1338);
PPC_FUNC_IMPL(__imp__sub_826D1338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826D1354"))) PPC_WEAK_FUNC(sub_826D1354);
PPC_FUNC_IMPL(__imp__sub_826D1354) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D1358"))) PPC_WEAK_FUNC(sub_826D1358);
PPC_FUNC_IMPL(__imp__sub_826D1358) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d1378
	if (cr6.eq) goto loc_826D1378;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826d1370
	if (cr6.eq) goto loc_826D1370;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_826D1370:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
loc_826D1378:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D1380"))) PPC_WEAK_FUNC(sub_826D1380);
PPC_FUNC_IMPL(__imp__sub_826D1380) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D1388"))) PPC_WEAK_FUNC(sub_826D1388);
PPC_FUNC_IMPL(__imp__sub_826D1388) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D1390"))) PPC_WEAK_FUNC(sub_826D1390);
PPC_FUNC_IMPL(__imp__sub_826D1390) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D1398"))) PPC_WEAK_FUNC(sub_826D1398);
PPC_FUNC_IMPL(__imp__sub_826D1398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D13A4"))) PPC_WEAK_FUNC(sub_826D13A4);
PPC_FUNC_IMPL(__imp__sub_826D13A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D13A8"))) PPC_WEAK_FUNC(sub_826D13A8);
PPC_FUNC_IMPL(__imp__sub_826D13A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// b 0x826cdd68
	sub_826CDD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D13C4"))) PPC_WEAK_FUNC(sub_826D13C4);
PPC_FUNC_IMPL(__imp__sub_826D13C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D13C8"))) PPC_WEAK_FUNC(sub_826D13C8);
PPC_FUNC_IMPL(__imp__sub_826D13C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x826D13D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826d142c
	if (cr6.eq) goto loc_826D142C;
loc_826D13EC:
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826d1410
	if (cr6.gt) goto loc_826D1410;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826cdee8
	ctx.lr = 0x826D1408;
	sub_826CDEE8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x826d13ec
	if (!cr6.eq) goto loc_826D13EC;
loc_826D1410:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d142c
	if (cr6.eq) goto loc_826D142C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826d142c
	if (cr6.eq) goto loc_826D142C;
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826d1450
	if (!cr6.gt) goto loc_826D1450;
loc_826D142C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,642
	ctx.r7.s64 = 642;
	// addi r6,r11,7952
	ctx.r6.s64 = ctx.r11.s64 + 7952;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,7892
	ctx.r5.s64 = ctx.r11.s64 + 7892;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D1450;
	sub_826CA560(ctx, base);
loc_826D1450:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x826cdf98
	ctx.lr = 0x826D145C;
	sub_826CDF98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D1464"))) PPC_WEAK_FUNC(sub_826D1464);
PPC_FUNC_IMPL(__imp__sub_826D1464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D1468"))) PPC_WEAK_FUNC(sub_826D1468);
PPC_FUNC_IMPL(__imp__sub_826D1468) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826D1470;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,5860
	ctx.r26.s64 = ctx.r11.s64 + 5860;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-6172
	ctx.r29.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r11,8040
	ctx.r25.s64 = ctx.r11.s64 + 8040;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,7952
	ctx.r28.s64 = ctx.r11.s64 + 7952;
loc_826D149C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x826cdee8
	ctx.lr = 0x826D14A8;
	sub_826CDEE8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826d1510
	if (cr0.eq) goto loc_826D1510;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826d14c4
	if (cr6.eq) goto loc_826D14C4;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826d14dc
	if (!cr6.gt) goto loc_826D14DC;
loc_826D14C4:
	// li r7,664
	ctx.r7.s64 = 664;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D14DC;
	sub_826CA560(ctx, base);
loc_826D14DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x826cdf98
	ctx.lr = 0x826D14E8;
	sub_826CDF98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d20c0
	ctx.lr = 0x826D14F0;
	sub_826D20C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d1510
	if (cr0.eq) goto loc_826D1510;
	// li r7,670
	ctx.r7.s64 = 670;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1510;
	sub_826CA560(ctx, base);
loc_826D1510:
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826d149c
	if (!cr6.gt) goto loc_826D149C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D152C"))) PPC_WEAK_FUNC(sub_826D152C);
PPC_FUNC_IMPL(__imp__sub_826D152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D1530"))) PPC_WEAK_FUNC(sub_826D1530);
PPC_FUNC_IMPL(__imp__sub_826D1530) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r10,26564
	ctx.r7.s64 = ctx.r10.s64 + 26564;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r4,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D15B0"))) PPC_WEAK_FUNC(sub_826D15B0);
PPC_FUNC_IMPL(__imp__sub_826D15B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826D15B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// beq cr6,0x826d15d0
	if (cr6.eq) goto loc_826D15D0;
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bne cr6,0x826d1b8c
	if (!cr6.eq) goto loc_826D1B8C;
loc_826D15D0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826d1b8c
	if (cr6.eq) goto loc_826D1B8C;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x826d1b8c
	if (cr0.eq) goto loc_826D1B8C;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x826ca800
	ctx.lr = 0x826D1604;
	sub_826CA800(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,-6172
	ctx.r27.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r11,7952
	ctx.r26.s64 = ctx.r11.s64 + 7952;
	// bne cr6,0x826d163c
	if (!cr6.eq) goto loc_826D163C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,291
	ctx.r7.s64 = 291;
	// addi r5,r11,8592
	ctx.r5.s64 = ctx.r11.s64 + 8592;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D163C;
	sub_826CA560(ctx, base);
loc_826D163C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d16b8
	if (cr6.eq) goto loc_826D16B8;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r11,r11,6144
	ctx.r11.s64 = ctx.r11.s64 + 6144;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,8456
	ctx.r28.s64 = ctx.r11.s64 + 8456;
loc_826D1660:
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D1678;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826d16ac
	if (cr6.eq) goto loc_826D16AC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826d16ac
	if (cr6.eq) goto loc_826D16AC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d16ac
	if (cr6.eq) goto loc_826D16AC;
	// li r7,306
	ctx.r7.s64 = 306;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D16AC;
	sub_826CA560(ctx, base);
loc_826D16AC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x826d1660
	if (!cr0.eq) goto loc_826D1660;
loc_826D16B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x826d16e0
	if (cr6.eq) goto loc_826D16E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,313
	ctx.r7.s64 = 313;
	// addi r5,r11,8408
	ctx.r5.s64 = ctx.r11.s64 + 8408;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D16E0;
	sub_826CA560(ctx, base);
loc_826D16E0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1708
	if (!cr6.eq) goto loc_826D1708;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,316
	ctx.r7.s64 = 316;
	// addi r5,r11,8372
	ctx.r5.s64 = ctx.r11.s64 + 8372;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1708;
	sub_826CA560(ctx, base);
loc_826D1708:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1730
	if (!cr6.eq) goto loc_826D1730;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,317
	ctx.r7.s64 = 317;
	// addi r5,r11,8340
	ctx.r5.s64 = ctx.r11.s64 + 8340;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1730;
	sub_826CA560(ctx, base);
loc_826D1730:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d1b8c
	if (cr0.eq) goto loc_826D1B8C;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d1b8c
	if (cr6.eq) goto loc_826D1B8C;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,312
	ctx.r4.s64 = 312;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D1758;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826d1b8c
	if (cr0.eq) goto loc_826D1B8C;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// addi r6,r11,7960
	ctx.r6.s64 = ctx.r11.s64 + 7960;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_826D1770:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_826D1780:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x826d1780
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826D1780;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r9,r6,100
	ctx.r9.s64 = ctx.r6.s64 + 100;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826d1770
	if (cr6.lt) goto loc_826D1770;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// bl 0x828d2930
	ctx.lr = 0x826D17CC;
	sub_828D2930(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x827497f0
	ctx.lr = 0x826D17E4;
	sub_827497F0(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82749990
	ctx.lr = 0x826D1800;
	sub_82749990(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82749b30
	ctx.lr = 0x826D181C;
	sub_82749B30(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1848
	if (!cr6.eq) goto loc_826D1848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,382
	ctx.r7.s64 = 382;
	// addi r5,r11,8316
	ctx.r5.s64 = ctx.r11.s64 + 8316;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1848;
	sub_826CA560(ctx, base);
loc_826D1848:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1870
	if (!cr6.eq) goto loc_826D1870;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,383
	ctx.r7.s64 = 383;
	// addi r5,r11,8288
	ctx.r5.s64 = ctx.r11.s64 + 8288;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1870;
	sub_826CA560(ctx, base);
loc_826D1870:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1898
	if (!cr6.eq) goto loc_826D1898;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,384
	ctx.r7.s64 = 384;
	// addi r5,r11,8260
	ctx.r5.s64 = ctx.r11.s64 + 8260;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1898;
	sub_826CA560(ctx, base);
loc_826D1898:
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82747618
	ctx.lr = 0x826D18AC;
	sub_82747618(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x826d1530
	ctx.lr = 0x826D18BC;
	sub_826D1530(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x826cdb20
	ctx.lr = 0x826D18D0;
	sub_826CDB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x8274bd60
	ctx.lr = 0x826D1918;
	sub_8274BD60(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// addi r11,r11,-5520
	ctx.r11.s64 = ctx.r11.s64 + -5520;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8274b9b8
	ctx.lr = 0x826D1968;
	sub_8274B9B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r7,308(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x826d2860
	ctx.lr = 0x826D1984;
	sub_826D2860(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82748998
	ctx.lr = 0x826D19AC;
	sub_82748998(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8274aa20
	ctx.lr = 0x826D19C8;
	sub_8274AA20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826d3260
	ctx.lr = 0x826D19FC;
	sub_826D3260(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82748ac8
	ctx.lr = 0x826D1A24;
	sub_82748AC8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82747188
	ctx.lr = 0x826D1A40;
	sub_82747188(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1a6c
	if (!cr6.eq) goto loc_826D1A6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,487
	ctx.r7.s64 = 487;
	// addi r5,r11,8240
	ctx.r5.s64 = ctx.r11.s64 + 8240;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1A6C;
	sub_826CA560(ctx, base);
loc_826D1A6C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1a94
	if (!cr6.eq) goto loc_826D1A94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,488
	ctx.r7.s64 = 488;
	// addi r5,r11,8220
	ctx.r5.s64 = ctx.r11.s64 + 8220;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1A94;
	sub_826CA560(ctx, base);
loc_826D1A94:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1abc
	if (!cr6.eq) goto loc_826D1ABC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,489
	ctx.r7.s64 = 489;
	// addi r5,r11,8196
	ctx.r5.s64 = ctx.r11.s64 + 8196;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1ABC;
	sub_826CA560(ctx, base);
loc_826D1ABC:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1ae4
	if (!cr6.eq) goto loc_826D1AE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,490
	ctx.r7.s64 = 490;
	// addi r5,r11,8172
	ctx.r5.s64 = ctx.r11.s64 + 8172;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1AE4;
	sub_826CA560(ctx, base);
loc_826D1AE4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1b0c
	if (!cr6.eq) goto loc_826D1B0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,491
	ctx.r7.s64 = 491;
	// addi r5,r11,8148
	ctx.r5.s64 = ctx.r11.s64 + 8148;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1B0C;
	sub_826CA560(ctx, base);
loc_826D1B0C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1b34
	if (!cr6.eq) goto loc_826D1B34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,492
	ctx.r7.s64 = 492;
	// addi r5,r11,8124
	ctx.r5.s64 = ctx.r11.s64 + 8124;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1B34;
	sub_826CA560(ctx, base);
loc_826D1B34:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1b5c
	if (!cr6.eq) goto loc_826D1B5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,493
	ctx.r7.s64 = 493;
	// addi r5,r11,8100
	ctx.r5.s64 = ctx.r11.s64 + 8100;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1B5C;
	sub_826CA560(ctx, base);
loc_826D1B5C:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1b84
	if (!cr6.eq) goto loc_826D1B84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,494
	ctx.r7.s64 = 494;
	// addi r5,r11,8080
	ctx.r5.s64 = ctx.r11.s64 + 8080;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1B84;
	sub_826CA560(ctx, base);
loc_826D1B84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x826d1b90
	goto loc_826D1B90;
loc_826D1B8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D1B90:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D1B98"))) PPC_WEAK_FUNC(sub_826D1B98);
PPC_FUNC_IMPL(__imp__sub_826D1B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826D1BA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826d1d70
	if (cr6.eq) goto loc_826D1D70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d1468
	ctx.lr = 0x826D1BB8;
	sub_826D1468(ctx, base);
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x826cdc58
	ctx.lr = 0x826D1BC0;
	sub_826CDC58(ctx, base);
	// lwz r3,108(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// bl 0x82756068
	ctx.lr = 0x826D1BC8;
	sub_82756068(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,8632
	ctx.r30.s64 = ctx.r11.s64 + 8632;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,7952
	ctx.r29.s64 = ctx.r11.s64 + 7952;
	// beq 0x826d1c00
	if (cr0.eq) goto loc_826D1C00;
	// li r7,546
	ctx.r7.s64 = 546;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1C00;
	sub_826CA560(ctx, base);
loc_826D1C00:
	// lwz r3,104(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x8274a718
	ctx.lr = 0x826D1C08;
	sub_8274A718(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d1c28
	if (cr0.eq) goto loc_826D1C28;
	// li r7,549
	ctx.r7.s64 = 549;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1C28;
	sub_826CA560(ctx, base);
loc_826D1C28:
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x82748c78
	ctx.lr = 0x826D1C30;
	sub_82748C78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d1c50
	if (cr0.eq) goto loc_826D1C50;
	// li r7,552
	ctx.r7.s64 = 552;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1C50;
	sub_826CA560(ctx, base);
loc_826D1C50:
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x826d2b30
	ctx.lr = 0x826D1C58;
	sub_826D2B30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d1c78
	if (cr0.eq) goto loc_826D1C78;
	// li r7,555
	ctx.r7.s64 = 555;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1C78;
	sub_826CA560(ctx, base);
loc_826D1C78:
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// bl 0x82756068
	ctx.lr = 0x826D1C80;
	sub_82756068(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d1ca0
	if (cr0.eq) goto loc_826D1CA0;
	// li r7,558
	ctx.r7.s64 = 558;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1CA0;
	sub_826CA560(ctx, base);
loc_826D1CA0:
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// bl 0x826d22e0
	ctx.lr = 0x826D1CA8;
	sub_826D22E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d1cc8
	if (cr0.eq) goto loc_826D1CC8;
	// li r7,561
	ctx.r7.s64 = 561;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1CC8;
	sub_826CA560(ctx, base);
loc_826D1CC8:
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// bl 0x8274b7e0
	ctx.lr = 0x826D1CD0;
	sub_8274B7E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d1cf0
	if (cr0.eq) goto loc_826D1CF0;
	// li r7,564
	ctx.r7.s64 = 564;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1CF0;
	sub_826CA560(ctx, base);
loc_826D1CF0:
	// lwz r3,200(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// bl 0x8274c068
	ctx.lr = 0x826D1CF8;
	sub_8274C068(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d1d18
	if (cr0.eq) goto loc_826D1D18;
	// li r7,567
	ctx.r7.s64 = 567;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1D18;
	sub_826CA560(ctx, base);
loc_826D1D18:
	// lwz r3,92(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// bl 0x82747770
	ctx.lr = 0x826D1D20;
	sub_82747770(ctx, base);
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x82749120
	ctx.lr = 0x826D1D28;
	sub_82749120(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82749370
	ctx.lr = 0x826D1D30;
	sub_82749370(ctx, base);
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x827495b0
	ctx.lr = 0x826D1D38;
	sub_827495B0(ctx, base);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D1D4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x826d1d6c
	if (cr0.eq) goto loc_826D1D6C;
	// li r7,580
	ctx.r7.s64 = 580;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1D6C;
	sub_826CA560(ctx, base);
loc_826D1D6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826D1D70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D1D78"))) PPC_WEAK_FUNC(sub_826D1D78);
PPC_FUNC_IMPL(__imp__sub_826D1D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826D1D80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r29,r11,8824
	ctx.r29.s64 = ctx.r11.s64 + 8824;
	// bne cr6,0x826d1dc0
	if (!cr6.eq) goto loc_826D1DC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,132
	ctx.r7.s64 = 132;
	// addi r5,r11,5752
	ctx.r5.s64 = ctx.r11.s64 + 5752;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1DC0;
	sub_826CA560(ctx, base);
loc_826D1DC0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x826d1de4
	if (!cr6.eq) goto loc_826D1DE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,133
	ctx.r7.s64 = 133;
	// addi r5,r11,8804
	ctx.r5.s64 = ctx.r11.s64 + 8804;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1DE4;
	sub_826CA560(ctx, base);
loc_826D1DE4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x826d1f0c
	if (cr6.eq) goto loc_826D1F0C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826d1f0c
	if (cr6.eq) goto loc_826D1F0C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82482408
	ctx.lr = 0x826D1DFC;
	sub_82482408(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D1E14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826d1f0c
	if (cr0.eq) goto loc_826D1F0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1e54
	if (!cr6.eq) goto loc_826D1E54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,169
	ctx.r7.s64 = 169;
	// addi r5,r11,8768
	ctx.r5.s64 = ctx.r11.s64 + 8768;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1E54;
	sub_826CA560(ctx, base);
loc_826D1E54:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1e7c
	if (!cr6.eq) goto loc_826D1E7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,170
	ctx.r7.s64 = 170;
	// addi r5,r11,8728
	ctx.r5.s64 = ctx.r11.s64 + 8728;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1E7C;
	sub_826CA560(ctx, base);
loc_826D1E7C:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1ea4
	if (!cr6.eq) goto loc_826D1EA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,171
	ctx.r7.s64 = 171;
	// addi r5,r11,8692
	ctx.r5.s64 = ctx.r11.s64 + 8692;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1EA4;
	sub_826CA560(ctx, base);
loc_826D1EA4:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d1ecc
	if (!cr6.eq) goto loc_826D1ECC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,172
	ctx.r7.s64 = 172;
	// addi r5,r11,8652
	ctx.r5.s64 = ctx.r11.s64 + 8652;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1ECC;
	sub_826CA560(ctx, base);
loc_826D1ECC:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d2930
	ctx.lr = 0x826D1EDC;
	sub_828D2930(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x826cdb20
	ctx.lr = 0x826D1EF0;
	sub_826CDB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x826d13a8
	ctx.lr = 0x826D1F04;
	sub_826D13A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x826d1f10
	goto loc_826D1F10;
loc_826D1F0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D1F10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D1F18"))) PPC_WEAK_FUNC(sub_826D1F18);
PPC_FUNC_IMPL(__imp__sub_826D1F18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// b 0x826cdd68
	sub_826CDD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D1F34"))) PPC_WEAK_FUNC(sub_826D1F34);
PPC_FUNC_IMPL(__imp__sub_826D1F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D1F38"))) PPC_WEAK_FUNC(sub_826D1F38);
PPC_FUNC_IMPL(__imp__sub_826D1F38) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826D1F40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,-6172
	ctx.r27.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r26,r11,8824
	ctx.r26.s64 = ctx.r11.s64 + 8824;
	// bne cr6,0x826d1f88
	if (!cr6.eq) goto loc_826D1F88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,301
	ctx.r7.s64 = 301;
	// addi r5,r11,5884
	ctx.r5.s64 = ctx.r11.s64 + 5884;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1F88;
	sub_826CA560(ctx, base);
loc_826D1F88:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826d1fd4
	if (cr6.eq) goto loc_826D1FD4;
loc_826D1F90:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826d1fb8
	if (cr6.gt) goto loc_826D1FB8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826cdee8
	ctx.lr = 0x826D1FAC;
	sub_826CDEE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x826d1f90
	if (!cr6.eq) goto loc_826D1F90;
loc_826D1FB8:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x826d1fd4
	if (!cr6.eq) goto loc_826D1FD4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826d1fd4
	if (cr6.eq) goto loc_826D1FD4;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826d1ff0
	if (!cr6.gt) goto loc_826D1FF0;
loc_826D1FD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,316
	ctx.r7.s64 = 316;
	// addi r5,r11,8912
	ctx.r5.s64 = ctx.r11.s64 + 8912;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D1FF0;
	sub_826CA560(ctx, base);
loc_826D1FF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x826cdf98
	ctx.lr = 0x826D1FFC;
	sub_826CDF98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D2004"))) PPC_WEAK_FUNC(sub_826D2004);
PPC_FUNC_IMPL(__imp__sub_826D2004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D2008"))) PPC_WEAK_FUNC(sub_826D2008);
PPC_FUNC_IMPL(__imp__sub_826D2008) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826D2010;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r11,5860
	ctx.r27.s64 = ctx.r11.s64 + 5860;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r11,8972
	ctx.r26.s64 = ctx.r11.s64 + 8972;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,8824
	ctx.r30.s64 = ctx.r11.s64 + 8824;
loc_826D203C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// bl 0x826cdee8
	ctx.lr = 0x826D2048;
	sub_826CDEE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x826d20a4
	if (cr0.eq) goto loc_826D20A4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826d2064
	if (cr6.eq) goto loc_826D2064;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826d207c
	if (!cr6.gt) goto loc_826D207C;
loc_826D2064:
	// li r7,340
	ctx.r7.s64 = 340;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D207C;
	sub_826CA560(ctx, base);
loc_826D207C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cd778
	ctx.lr = 0x826D2084;
	sub_826CD778(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d20a4
	if (cr0.eq) goto loc_826D20A4;
	// li r7,345
	ctx.r7.s64 = 345;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D20A4;
	sub_826CA560(ctx, base);
loc_826D20A4:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826d203c
	if (!cr6.gt) goto loc_826D203C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D20C0"))) PPC_WEAK_FUNC(sub_826D20C0);
PPC_FUNC_IMPL(__imp__sub_826D20C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d20e4
	if (!cr6.eq) goto loc_826D20E4;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x826d2150
	goto loc_826D2150;
loc_826D20E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d2008
	ctx.lr = 0x826D20EC;
	sub_826D2008(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x826cdc58
	ctx.lr = 0x826D20F4;
	sub_826CDC58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x826d13c8
	ctx.lr = 0x826D2100;
	sub_826D13C8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82482408
	ctx.lr = 0x826D2108;
	sub_82482408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D2120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826d214c
	if (cr0.eq) goto loc_826D214C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,253
	ctx.r7.s64 = 253;
	// addi r6,r11,8824
	ctx.r6.s64 = ctx.r11.s64 + 8824;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,8632
	ctx.r5.s64 = ctx.r11.s64 + 8632;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D214C;
	sub_826CA560(ctx, base);
loc_826D214C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826D2150:
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

__attribute__((alias("__imp__sub_826D2164"))) PPC_WEAK_FUNC(sub_826D2164);
PPC_FUNC_IMPL(__imp__sub_826D2164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D2168"))) PPC_WEAK_FUNC(sub_826D2168);
PPC_FUNC_IMPL(__imp__sub_826D2168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826D2170;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r29,r11,9040
	ctx.r29.s64 = ctx.r11.s64 + 9040;
	// bne cr6,0x826d21b0
	if (!cr6.eq) goto loc_826D21B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,193
	ctx.r7.s64 = 193;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D21B0;
	sub_826CA560(ctx, base);
loc_826D21B0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x826d21d4
	if (!cr6.eq) goto loc_826D21D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,194
	ctx.r7.s64 = 194;
	// addi r5,r11,9016
	ctx.r5.s64 = ctx.r11.s64 + 9016;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D21D4;
	sub_826CA560(ctx, base);
loc_826D21D4:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d2244
	if (cr0.eq) goto loc_826D2244;
	// bl 0x826cf2c0
	ctx.lr = 0x826D21E4;
	sub_826CF2C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826d223c
	if (cr0.eq) goto loc_826D223C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,5856
	ctx.r27.s64 = ctx.r11.s64 + 5856;
loc_826D21F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cf5c8
	ctx.lr = 0x826D21FC;
	sub_826CF5C8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x826d221c
	if (!cr0.eq) goto loc_826D221C;
	// li r7,203
	ctx.r7.s64 = 203;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D221C;
	sub_826CA560(ctx, base);
loc_826D221C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cfa00
	ctx.lr = 0x826D2224;
	sub_826CFA00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cf590
	ctx.lr = 0x826D222C;
	sub_826CF590(ctx, base);
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x826cf2c0
	ctx.lr = 0x826D2234;
	sub_826CF2C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826d21f4
	if (!cr0.eq) goto loc_826D21F4;
loc_826D223C:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x826cee00
	ctx.lr = 0x826D2244;
	sub_826CEE00(ctx, base);
loc_826D2244:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x826d2260
	if (cr0.eq) goto loc_826D2260;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D2260;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826D2260:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x827490b8
	ctx.lr = 0x826D226C;
	sub_827490B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D2274"))) PPC_WEAK_FUNC(sub_826D2274);
PPC_FUNC_IMPL(__imp__sub_826D2274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D2278"))) PPC_WEAK_FUNC(sub_826D2278);
PPC_FUNC_IMPL(__imp__sub_826D2278) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d22bc
	if (!cr6.eq) goto loc_826D22BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,250
	ctx.r7.s64 = 250;
	// addi r6,r11,9040
	ctx.r6.s64 = ctx.r11.s64 + 9040;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D22BC;
	sub_826CA560(ctx, base);
loc_826D22BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8274c308
	ctx.lr = 0x826D22C8;
	sub_8274C308(ctx, base);
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

__attribute__((alias("__imp__sub_826D22E0"))) PPC_WEAK_FUNC(sub_826D22E0);
PPC_FUNC_IMPL(__imp__sub_826D22E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826D22E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-6172
	ctx.r28.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,9040
	ctx.r27.s64 = ctx.r11.s64 + 9040;
	// bne cr6,0x826d2324
	if (!cr6.eq) goto loc_826D2324;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,389
	ctx.r7.s64 = 389;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2324;
	sub_826CA560(ctx, base);
loc_826D2324:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d23b4
	if (cr6.eq) goto loc_826D23B4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d23b4
	if (cr6.eq) goto loc_826D23B4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x826d23b4
	if (!cr6.gt) goto loc_826D23B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r11,9016
	ctx.r26.s64 = ctx.r11.s64 + 9016;
loc_826D2354:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8274c3e8
	ctx.lr = 0x826D2360;
	sub_8274C3E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d23a4
	if (cr0.eq) goto loc_826D23A4;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8274c7f0
	ctx.lr = 0x826D2378;
	sub_8274C7F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x826d2398
	if (!cr0.eq) goto loc_826D2398;
	// li r7,423
	ctx.r7.s64 = 423;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2398;
	sub_826CA560(ctx, base);
loc_826D2398:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d2168
	ctx.lr = 0x826D23A4;
	sub_826D2168(ctx, base);
loc_826D23A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d2354
	if (cr6.lt) goto loc_826D2354;
loc_826D23B4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d23c4
	if (cr0.eq) goto loc_826D23C4;
	// bl 0x8274c1c0
	ctx.lr = 0x826D23C4;
	sub_8274C1C0(ctx, base);
loc_826D23C4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d23d4
	if (cr0.eq) goto loc_826D23D4;
	// bl 0x8274c598
	ctx.lr = 0x826D23D4;
	sub_8274C598(ctx, base);
loc_826D23D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d23e4
	if (cr0.eq) goto loc_826D23E4;
	// bl 0x82748f48
	ctx.lr = 0x826D23E4;
	sub_82748F48(ctx, base);
loc_826D23E4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D23F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D2404"))) PPC_WEAK_FUNC(sub_826D2404);
PPC_FUNC_IMPL(__imp__sub_826D2404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D2408"))) PPC_WEAK_FUNC(sub_826D2408);
PPC_FUNC_IMPL(__imp__sub_826D2408) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826D2410;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,-6172
	ctx.r28.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,9040
	ctx.r27.s64 = ctx.r11.s64 + 9040;
	// bne cr6,0x826d2454
	if (!cr6.eq) goto loc_826D2454;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,575
	ctx.r7.s64 = 575;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2454;
	sub_826CA560(ctx, base);
loc_826D2454:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8274c308
	ctx.lr = 0x826D2460;
	sub_8274C308(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826d2538
	if (cr0.eq) goto loc_826D2538;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x826d2490
	if (cr6.gt) goto loc_826D2490;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,589
	ctx.r7.s64 = 589;
	// addi r5,r11,9128
	ctx.r5.s64 = ctx.r11.s64 + 9128;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2490;
	sub_826CA560(ctx, base);
loc_826D2490:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x826d2520
	if (!cr0.eq) goto loc_826D2520;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8274c3e8
	ctx.lr = 0x826D24AC;
	sub_8274C3E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,9016
	ctx.r29.s64 = ctx.r11.s64 + 9016;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826d24d4
	if (!cr0.eq) goto loc_826D24D4;
	// li r7,600
	ctx.r7.s64 = 600;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D24D4;
	sub_826CA560(ctx, base);
loc_826D24D4:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8274c7f0
	ctx.lr = 0x826D24E4;
	sub_8274C7F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826d2504
	if (!cr0.eq) goto loc_826D2504;
	// li r7,608
	ctx.r7.s64 = 608;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2504;
	sub_826CA560(ctx, base);
loc_826D2504:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d2168
	ctx.lr = 0x826D2510;
	sub_826D2168(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826d2530
	if (cr6.eq) goto loc_826D2530;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826d252c
	goto loc_826D252C;
loc_826D2520:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826d2530
	if (cr6.eq) goto loc_826D2530;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D252C:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_826D2530:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826d253c
	goto loc_826D253C;
loc_826D2538:
	// li r3,19
	ctx.r3.s64 = 19;
loc_826D253C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D2544"))) PPC_WEAK_FUNC(sub_826D2544);
PPC_FUNC_IMPL(__imp__sub_826D2544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D2548"))) PPC_WEAK_FUNC(sub_826D2548);
PPC_FUNC_IMPL(__imp__sub_826D2548) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d258c
	if (!cr6.eq) goto loc_826D258C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,662
	ctx.r7.s64 = 662;
	// addi r6,r11,9040
	ctx.r6.s64 = ctx.r11.s64 + 9040;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D258C;
	sub_826CA560(ctx, base);
loc_826D258C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d2278
	ctx.lr = 0x826D2598;
	sub_826D2278(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d25a8
	if (cr0.eq) goto loc_826D25A8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x826d25ac
	goto loc_826D25AC;
loc_826D25A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D25AC:
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

__attribute__((alias("__imp__sub_826D25C4"))) PPC_WEAK_FUNC(sub_826D25C4);
PPC_FUNC_IMPL(__imp__sub_826D25C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D25C8"))) PPC_WEAK_FUNC(sub_826D25C8);
PPC_FUNC_IMPL(__imp__sub_826D25C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826D25D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,9040
	ctx.r30.s64 = ctx.r11.s64 + 9040;
	// bne cr6,0x826d2614
	if (!cr6.eq) goto loc_826D2614;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,747
	ctx.r7.s64 = 747;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2614;
	sub_826CA560(ctx, base);
loc_826D2614:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x826d2638
	if (!cr6.eq) goto loc_826D2638;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,748
	ctx.r7.s64 = 748;
	// addi r5,r11,5856
	ctx.r5.s64 = ctx.r11.s64 + 5856;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2638;
	sub_826CA560(ctx, base);
loc_826D2638:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2278
	ctx.lr = 0x826D2644;
	sub_826D2278(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826d266c
	if (!cr0.eq) goto loc_826D266C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,756
	ctx.r7.s64 = 756;
	// addi r5,r11,9016
	ctx.r5.s64 = ctx.r11.s64 + 9016;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826ca560
	ctx.lr = 0x826D2664;
	sub_826CA560(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x826d26a0
	goto loc_826D26A0;
loc_826D266C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x826cf190
	ctx.lr = 0x826D2678;
	sub_826CF190(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x826d26a0
	if (!cr0.eq) goto loc_826D26A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,766
	ctx.r7.s64 = 766;
	// addi r5,r11,9152
	ctx.r5.s64 = ctx.r11.s64 + 9152;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826ca560
	ctx.lr = 0x826D269C;
	sub_826CA560(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
loc_826D26A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D26A8"))) PPC_WEAK_FUNC(sub_826D26A8);
PPC_FUNC_IMPL(__imp__sub_826D26A8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d26ec
	if (!cr6.eq) goto loc_826D26EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,798
	ctx.r7.s64 = 798;
	// addi r6,r11,9040
	ctx.r6.s64 = ctx.r11.s64 + 9040;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D26EC;
	sub_826CA560(ctx, base);
loc_826D26EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d2278
	ctx.lr = 0x826D26F8;
	sub_826D2278(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d2708
	if (cr0.eq) goto loc_826D2708;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x826d270c
	goto loc_826D270C;
loc_826D2708:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D270C:
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

__attribute__((alias("__imp__sub_826D2724"))) PPC_WEAK_FUNC(sub_826D2724);
PPC_FUNC_IMPL(__imp__sub_826D2724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D2728"))) PPC_WEAK_FUNC(sub_826D2728);
PPC_FUNC_IMPL(__imp__sub_826D2728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826D2730;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-6172
	ctx.r28.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,9040
	ctx.r27.s64 = ctx.r11.s64 + 9040;
	// bne cr6,0x826d2774
	if (!cr6.eq) goto loc_826D2774;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,113
	ctx.r7.s64 = 113;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2774;
	sub_826CA560(ctx, base);
loc_826D2774:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82748fb8
	ctx.lr = 0x826D277C;
	sub_82748FB8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x826d27a8
	if (!cr0.eq) goto loc_826D27A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,121
	ctx.r7.s64 = 121;
	// addi r5,r11,9208
	ctx.r5.s64 = ctx.r11.s64 + 9208;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D27A0;
	sub_826CA560(ctx, base);
loc_826D27A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826d2858
	goto loc_826D2858;
loc_826D27A8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r29,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D27E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bne 0x826d2818
	if (!cr0.eq) goto loc_826D2818;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r5,r11,9188
	ctx.r5.s64 = ctx.r11.s64 + 9188;
loc_826D27F8:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2808;
	sub_826CA560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d2168
	ctx.lr = 0x826D2814;
	sub_826D2168(ctx, base);
	// b 0x826d27a0
	goto loc_826D27A0;
loc_826D2818:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x828d2930
	ctx.lr = 0x826D2824;
	sub_828D2930(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x826cf700
	ctx.lr = 0x826D2838;
	sub_826CF700(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// bne 0x826d2854
	if (!cr0.eq) goto loc_826D2854;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,155
	ctx.r7.s64 = 155;
	// addi r5,r11,9168
	ctx.r5.s64 = ctx.r11.s64 + 9168;
	// b 0x826d27f8
	goto loc_826D27F8;
loc_826D2854:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_826D2858:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D2860"))) PPC_WEAK_FUNC(sub_826D2860);
PPC_FUNC_IMPL(__imp__sub_826D2860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x826D2868;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r27,r11,-6172
	ctx.r27.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r26,r11,9040
	ctx.r26.s64 = ctx.r11.s64 + 9040;
	// bne cr6,0x826d28b4
	if (!cr6.eq) goto loc_826D28B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,298
	ctx.r7.s64 = 298;
	// addi r5,r11,6264
	ctx.r5.s64 = ctx.r11.s64 + 6264;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D28B4;
	sub_826CA560(ctx, base);
loc_826D28B4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826d28d8
	if (!cr6.eq) goto loc_826D28D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,299
	ctx.r7.s64 = 299;
	// addi r5,r11,6252
	ctx.r5.s64 = ctx.r11.s64 + 6252;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D28D8;
	sub_826CA560(ctx, base);
loc_826D28D8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x826d28fc
	if (!cr6.eq) goto loc_826D28FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,300
	ctx.r7.s64 = 300;
	// addi r5,r11,6764
	ctx.r5.s64 = ctx.r11.s64 + 6764;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D28FC;
	sub_826CA560(ctx, base);
loc_826D28FC:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x826D290C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826d2938
	if (!cr0.eq) goto loc_826D2938;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,308
	ctx.r7.s64 = 308;
	// addi r5,r11,9284
	ctx.r5.s64 = ctx.r11.s64 + 9284;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2930;
	sub_826CA560(ctx, base);
loc_826D2930:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826d2a04
	goto loc_826D2A04;
loc_826D2938:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82748e88
	ctx.lr = 0x826D295C;
	sub_82748E88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne 0x826d2990
	if (!cr0.eq) goto loc_826D2990;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,326
	ctx.r7.s64 = 326;
	// addi r5,r11,9256
	ctx.r5.s64 = ctx.r11.s64 + 9256;
loc_826D2974:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2984;
	sub_826CA560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d22e0
	ctx.lr = 0x826D298C;
	sub_826D22E0(ctx, base);
	// b 0x826d2930
	goto loc_826D2930;
loc_826D2990:
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8274c0d0
	ctx.lr = 0x826D29A8;
	sub_8274C0D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne 0x826d29c4
	if (!cr0.eq) goto loc_826D29C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,339
	ctx.r7.s64 = 339;
	// addi r5,r11,9236
	ctx.r5.s64 = ctx.r11.s64 + 9236;
	// b 0x826d2974
	goto loc_826D2974;
loc_826D29C4:
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8274c488
	ctx.lr = 0x826D29DC;
	sub_8274C488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bne 0x826d29f8
	if (!cr0.eq) goto loc_826D29F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,352
	ctx.r7.s64 = 352;
	// addi r5,r11,9220
	ctx.r5.s64 = ctx.r11.s64 + 9220;
	// b 0x826d2974
	goto loc_826D2974;
loc_826D29F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_826D2A04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D2A0C"))) PPC_WEAK_FUNC(sub_826D2A0C);
PPC_FUNC_IMPL(__imp__sub_826D2A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D2A10"))) PPC_WEAK_FUNC(sub_826D2A10);
PPC_FUNC_IMPL(__imp__sub_826D2A10) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826D2A18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-6172
	ctx.r28.s64 = ctx.r11.s64 + -6172;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// rlwinm r26,r30,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,9040
	ctx.r27.s64 = ctx.r11.s64 + 9040;
	// bne cr6,0x826d2a64
	if (!cr6.eq) goto loc_826D2A64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,493
	ctx.r7.s64 = 493;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2A64;
	sub_826CA560(ctx, base);
loc_826D2A64:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8274c6f8
	ctx.lr = 0x826D2A74;
	sub_8274C6F8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d2a94
	if (cr0.eq) goto loc_826D2A94;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// b 0x826d2b24
	goto loc_826D2B24;
loc_826D2A94:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d2728
	ctx.lr = 0x826D2AA4;
	sub_826D2728(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x826d2ad0
	if (!cr0.eq) goto loc_826D2AD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,521
	ctx.r7.s64 = 521;
	// addi r5,r11,9208
	ctx.r5.s64 = ctx.r11.s64 + 9208;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2AC8;
	sub_826CA560(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x826d2b28
	goto loc_826D2B28;
loc_826D2AD0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8274c260
	ctx.lr = 0x826D2AE0;
	sub_8274C260(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8274c638
	ctx.lr = 0x826D2AF4;
	sub_8274C638(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x826d2b1c
	if (cr6.gt) goto loc_826D2B1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,535
	ctx.r7.s64 = 535;
	// addi r5,r11,9292
	ctx.r5.s64 = ctx.r11.s64 + 9292;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2B1C;
	sub_826CA560(ctx, base);
loc_826D2B1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_826D2B24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D2B28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D2B30"))) PPC_WEAK_FUNC(sub_826D2B30);
PPC_FUNC_IMPL(__imp__sub_826D2B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826D2B38;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-6172
	ctx.r27.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,9352
	ctx.r26.s64 = ctx.r11.s64 + 9352;
	// bne cr6,0x826d2b74
	if (!cr6.eq) goto loc_826D2B74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,267
	ctx.r7.s64 = 267;
	// addi r5,r11,9336
	ctx.r5.s64 = ctx.r11.s64 + 9336;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2B74;
	sub_826CA560(ctx, base);
loc_826D2B74:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x827477d8
	ctx.lr = 0x826D2B80;
	sub_827477D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82749e20
	ctx.lr = 0x826D2B8C;
	sub_82749E20(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82749e20
	ctx.lr = 0x826D2B94;
	sub_82749E20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r25,r11,9316
	ctx.r25.s64 = ctx.r11.s64 + 9316;
	// bne cr6,0x826d2bd0
	if (!cr6.eq) goto loc_826D2BD0;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,412(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// lwz r28,420(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// bl 0x8275a800
	ctx.lr = 0x826D2BBC;
	sub_8275A800(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x826D2BCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x826d2c00
	goto loc_826D2C00;
loc_826D2BD0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d2c00
	if (cr0.eq) goto loc_826D2C00;
	// bl 0x82756068
	ctx.lr = 0x826D2BE0;
	sub_82756068(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d2c00
	if (cr0.eq) goto loc_826D2C00;
	// li r7,293
	ctx.r7.s64 = 293;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2C00;
	sub_826CA560(ctx, base);
loc_826D2C00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D2C14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826d2c34
	if (cr0.eq) goto loc_826D2C34;
	// li r7,300
	ctx.r7.s64 = 300;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D2C34;
	sub_826CA560(ctx, base);
loc_826D2C34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D2C40"))) PPC_WEAK_FUNC(sub_826D2C40);
PPC_FUNC_IMPL(__imp__sub_826D2C40) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x826D2C48;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r25,16(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x827477d8
	ctx.lr = 0x826D2C6C;
	sub_827477D8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826cfd18
	ctx.lr = 0x826D2C7C;
	sub_826CFD18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x826d2548
	ctx.lr = 0x826D2C8C;
	sub_826D2548(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x826d2cc0
	if (!cr0.eq) goto loc_826D2CC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,350
	ctx.r7.s64 = 350;
	// addi r6,r11,9352
	ctx.r6.s64 = ctx.r11.s64 + 9352;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,9568
	ctx.r5.s64 = ctx.r11.s64 + 9568;
loc_826D2CA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D2CB8;
	sub_826CA560(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x826d2efc
	goto loc_826D2EFC;
loc_826D2CC0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826cfd18
	ctx.lr = 0x826D2CCC;
	sub_826CFD18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x826d2548
	ctx.lr = 0x826D2CDC;
	sub_826D2548(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x826d2cfc
	if (!cr0.eq) goto loc_826D2CFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,359
	ctx.r7.s64 = 359;
	// addi r6,r11,9352
	ctx.r6.s64 = ctx.r11.s64 + 9352;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,9552
	ctx.r5.s64 = ctx.r11.s64 + 9552;
	// b 0x826d2ca8
	goto loc_826D2CA8;
loc_826D2CFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8274b2b0
	ctx.lr = 0x826D2D08;
	sub_8274B2B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne 0x826d2d40
	if (!cr0.eq) goto loc_826D2D40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,370
	ctx.r7.s64 = 370;
	// addi r6,r11,9352
	ctx.r6.s64 = ctx.r11.s64 + 9352;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,9504
	ctx.r5.s64 = ctx.r11.s64 + 9504;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D2D38;
	sub_826CA560(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x826d2efc
	goto loc_826D2EFC;
loc_826D2D40:
	// bl 0x8275d848
	ctx.lr = 0x826D2D44;
	sub_8275D848(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x826cfd88
	ctx.lr = 0x826D2D4C;
	sub_826CFD88(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d7f0
	ctx.lr = 0x826D2D54;
	sub_8275D7F0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x826cfd88
	ctx.lr = 0x826D2D5C;
	sub_826CFD88(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x826d2e84
	if (!cr6.eq) goto loc_826D2E84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8274ae78
	ctx.lr = 0x826D2D74;
	sub_8274AE78(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826d2eec
	if (!cr0.eq) goto loc_826D2EEC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8274b008
	ctx.lr = 0x826D2D8C;
	sub_8274B008(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826d2e4c
	if (!cr0.eq) goto loc_826D2E4C;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x826d0fe0
	ctx.lr = 0x826D2D9C;
	sub_826D0FE0(ctx, base);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x826d0fe0
	ctx.lr = 0x826D2DA4;
	sub_826D0FE0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d848
	ctx.lr = 0x826D2DAC;
	sub_8275D848(ctx, base);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x826cfe40
	ctx.lr = 0x826D2DB4;
	sub_826CFE40(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d7f0
	ctx.lr = 0x826D2DBC;
	sub_8275D7F0(ctx, base);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x826cfe40
	ctx.lr = 0x826D2DC4;
	sub_826CFE40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,9476
	ctx.r4.s64 = ctx.r11.s64 + 9476;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82482408
	ctx.lr = 0x826D2DD8;
	sub_82482408(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,9448
	ctx.r4.s64 = ctx.r11.s64 + 9448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82482408
	ctx.lr = 0x826D2DEC;
	sub_82482408(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d7f0
	ctx.lr = 0x826D2DF4;
	sub_8275D7F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d848
	ctx.lr = 0x826D2E00;
	sub_8275D848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8275b720
	ctx.lr = 0x826D2E1C;
	sub_8275B720(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826d2efc
	if (!cr0.eq) goto loc_826D2EFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d848
	ctx.lr = 0x826D2E2C;
	sub_8275D848(ctx, base);
	// bl 0x826d0a58
	ctx.lr = 0x826D2E30;
	sub_826D0A58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826d2efc
	if (!cr0.eq) goto loc_826D2EFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d7f0
	ctx.lr = 0x826D2E40;
	sub_8275D7F0(ctx, base);
	// bl 0x826d0a58
	ctx.lr = 0x826D2E44;
	sub_826D0A58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826d2efc
	if (!cr0.eq) goto loc_826D2EFC;
loc_826D2E4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275e4f8
	ctx.lr = 0x826D2E54;
	sub_8275E4F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275e580
	ctx.lr = 0x826D2E5C;
	sub_8275E580(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d848
	ctx.lr = 0x826D2E64;
	sub_8275D848(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d7f0
	ctx.lr = 0x826D2E70;
	sub_8275D7F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8274a818
	ctx.lr = 0x826D2E80;
	sub_8274A818(ctx, base);
	// b 0x826d2eec
	goto loc_826D2EEC;
loc_826D2E84:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x826d0fe0
	ctx.lr = 0x826D2E8C;
	sub_826D0FE0(ctx, base);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x826d0fe0
	ctx.lr = 0x826D2E94;
	sub_826D0FE0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d848
	ctx.lr = 0x826D2E9C;
	sub_8275D848(ctx, base);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x826cfe40
	ctx.lr = 0x826D2EA4;
	sub_826CFE40(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d7f0
	ctx.lr = 0x826D2EAC;
	sub_8275D7F0(ctx, base);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x826cfe40
	ctx.lr = 0x826D2EB4;
	sub_826CFE40(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82759a60
	ctx.lr = 0x826D2EC4;
	sub_82759A60(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d848
	ctx.lr = 0x826D2ECC;
	sub_8275D848(ctx, base);
	// bl 0x826d0a58
	ctx.lr = 0x826D2ED0;
	sub_826D0A58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826d2efc
	if (!cr0.eq) goto loc_826D2EFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d7f0
	ctx.lr = 0x826D2EE0;
	sub_8275D7F0(ctx, base);
	// bl 0x826d0a58
	ctx.lr = 0x826D2EE4;
	sub_826D0A58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826d2efc
	if (!cr0.eq) goto loc_826D2EFC;
loc_826D2EEC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275c800
	ctx.lr = 0x826D2EF8;
	sub_8275C800(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D2EFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D2F04"))) PPC_WEAK_FUNC(sub_826D2F04);
PPC_FUNC_IMPL(__imp__sub_826D2F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D2F08"))) PPC_WEAK_FUNC(sub_826D2F08);
PPC_FUNC_IMPL(__imp__sub_826D2F08) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826D2F10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x8274b2b0
	ctx.lr = 0x826D2F38;
	sub_8274B2B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x826d2f6c
	if (!cr0.eq) goto loc_826D2F6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,489
	ctx.r7.s64 = 489;
	// addi r6,r11,9352
	ctx.r6.s64 = ctx.r11.s64 + 9352;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,9504
	ctx.r5.s64 = ctx.r11.s64 + 9504;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D2F64;
	sub_826CA560(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x826d2ff0
	goto loc_826D2FF0;
loc_826D2F6C:
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x826bf548
	ctx.lr = 0x826D2F88;
	sub_826BF548(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x826d0fe0
	ctx.lr = 0x826D2F90;
	sub_826D0FE0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826d0fe0
	ctx.lr = 0x826D2F98;
	sub_826D0FE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275d848
	ctx.lr = 0x826D2FA0;
	sub_8275D848(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x826cfe40
	ctx.lr = 0x826D2FA8;
	sub_826CFE40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275d7f0
	ctx.lr = 0x826D2FB0;
	sub_8275D7F0(ctx, base);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826cfe40
	ctx.lr = 0x826D2FB8;
	sub_826CFE40(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82759ce8
	ctx.lr = 0x826D2FCC;
	sub_82759CE8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x826d2fe0
	if (!cr6.eq) goto loc_826D2FE0;
	// bl 0x8275d848
	ctx.lr = 0x826D2FDC;
	sub_8275D848(ctx, base);
	// b 0x826d2fe4
	goto loc_826D2FE4;
loc_826D2FE0:
	// bl 0x8275d7f0
	ctx.lr = 0x826D2FE4;
	sub_8275D7F0(ctx, base);
loc_826D2FE4:
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x826d0a58
	ctx.lr = 0x826D2FF0;
	sub_826D0A58(ctx, base);
loc_826D2FF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D2FF8"))) PPC_WEAK_FUNC(sub_826D2FF8);
PPC_FUNC_IMPL(__imp__sub_826D2FF8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x826D3000;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x826cfd18
	ctx.lr = 0x826D3024;
	sub_826CFD18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826d2548
	ctx.lr = 0x826D3034;
	sub_826D2548(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x826d3068
	if (!cr0.eq) goto loc_826D3068;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,562
	ctx.r7.s64 = 562;
	// addi r6,r11,9352
	ctx.r6.s64 = ctx.r11.s64 + 9352;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,9552
	ctx.r5.s64 = ctx.r11.s64 + 9552;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D3060;
	sub_826CA560(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x826d3120
	goto loc_826D3120;
loc_826D3068:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8274b2b0
	ctx.lr = 0x826D3074;
	sub_8274B2B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// bne 0x826d30ac
	if (!cr0.eq) goto loc_826D30AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,573
	ctx.r7.s64 = 573;
	// addi r6,r11,9352
	ctx.r6.s64 = ctx.r11.s64 + 9352;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,9504
	ctx.r5.s64 = ctx.r11.s64 + 9504;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x826D30A4;
	sub_826CA560(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x826d3120
	goto loc_826D3120;
loc_826D30AC:
	// bl 0x8275d7f0
	ctx.lr = 0x826D30B0;
	sub_8275D7F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826cfd88
	ctx.lr = 0x826D30BC;
	sub_826CFD88(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826d0fe0
	ctx.lr = 0x826D30C4;
	sub_826D0FE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826cfe40
	ctx.lr = 0x826D30D0;
	sub_826CFE40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,9476
	ctx.r4.s64 = ctx.r11.s64 + 9476;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82482408
	ctx.lr = 0x826D30E4;
	sub_82482408(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8275bcf0
	ctx.lr = 0x826D30F8;
	sub_8275BCF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826d3120
	if (!cr0.eq) goto loc_826D3120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0a58
	ctx.lr = 0x826D3108;
	sub_826D0A58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826d3120
	if (!cr0.eq) goto loc_826D3120;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8275c800
	ctx.lr = 0x826D311C;
	sub_8275C800(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D3120:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D3128"))) PPC_WEAK_FUNC(sub_826D3128);
PPC_FUNC_IMPL(__imp__sub_826D3128) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x826D3130;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r11,-6172
	ctx.r25.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r24,r11,9352
	ctx.r24.s64 = ctx.r11.s64 + 9352;
	// bne cr6,0x826d3178
	if (!cr6.eq) goto loc_826D3178;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,642
	ctx.r7.s64 = 642;
	// addi r5,r11,9336
	ctx.r5.s64 = ctx.r11.s64 + 9336;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D3178;
	sub_826CA560(ctx, base);
loc_826D3178:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x826d319c
	if (!cr6.eq) goto loc_826D319C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,643
	ctx.r7.s64 = 643;
	// addi r5,r11,9584
	ctx.r5.s64 = ctx.r11.s64 + 9584;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D319C;
	sub_826CA560(ctx, base);
loc_826D319C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r23,0
	ctx.r23.s64 = 0;
	// bl 0x826d2548
	ctx.lr = 0x826D31B0;
	sub_826D2548(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x826d31dc
	if (!cr0.eq) goto loc_826D31DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,656
	ctx.r7.s64 = 656;
	// addi r5,r11,9632
	ctx.r5.s64 = ctx.r11.s64 + 9632;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D31D4;
	sub_826CA560(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x826d3258
	goto loc_826D3258;
loc_826D31DC:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826d0fe0
	ctx.lr = 0x826D31E4;
	sub_826D0FE0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826cfe40
	ctx.lr = 0x826D31F0;
	sub_826CFE40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,9612
	ctx.r4.s64 = ctx.r11.s64 + 9612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82482408
	ctx.lr = 0x826D3204;
	sub_82482408(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275bcf0
	ctx.lr = 0x826D3218;
	sub_8275BCF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d3224
	if (cr0.eq) goto loc_826D3224;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_826D3224:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0a58
	ctx.lr = 0x826D322C;
	sub_826D0A58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826d3258
	if (!cr0.eq) goto loc_826D3258;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x826d3254
	if (cr6.eq) goto loc_826D3254;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,682
	ctx.r7.s64 = 682;
	// addi r5,r11,9592
	ctx.r5.s64 = ctx.r11.s64 + 9592;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x826ca560
	ctx.lr = 0x826D3254;
	sub_826CA560(ctx, base);
loc_826D3254:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_826D3258:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D3260"))) PPC_WEAK_FUNC(sub_826D3260);
PPC_FUNC_IMPL(__imp__sub_826D3260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f8
	ctx.lr = 0x826D3268;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r26,r11,-6172
	ctx.r26.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r25,r11,9352
	ctx.r25.s64 = ctx.r11.s64 + 9352;
	// bne cr6,0x826d32c0
	if (!cr6.eq) goto loc_826D32C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,139
	ctx.r7.s64 = 139;
	// addi r5,r11,9744
	ctx.r5.s64 = ctx.r11.s64 + 9744;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D32C0;
	sub_826CA560(ctx, base);
loc_826D32C0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x826d32e4
	if (!cr6.eq) goto loc_826D32E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,140
	ctx.r7.s64 = 140;
	// addi r5,r11,6264
	ctx.r5.s64 = ctx.r11.s64 + 6264;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D32E4;
	sub_826CA560(ctx, base);
loc_826D32E4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x826d3308
	if (!cr6.eq) goto loc_826D3308;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,141
	ctx.r7.s64 = 141;
	// addi r5,r11,6252
	ctx.r5.s64 = ctx.r11.s64 + 6252;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D3308;
	sub_826CA560(ctx, base);
loc_826D3308:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x826d332c
	if (!cr6.eq) goto loc_826D332C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,142
	ctx.r7.s64 = 142;
	// addi r5,r11,9728
	ctx.r5.s64 = ctx.r11.s64 + 9728;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D332C;
	sub_826CA560(ctx, base);
loc_826D332C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x826d3350
	if (!cr6.eq) goto loc_826D3350;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,143
	ctx.r7.s64 = 143;
	// addi r5,r11,9024
	ctx.r5.s64 = ctx.r11.s64 + 9024;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D3350;
	sub_826CA560(ctx, base);
loc_826D3350:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x826d3374
	if (!cr6.eq) goto loc_826D3374;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,144
	ctx.r7.s64 = 144;
	// addi r5,r11,9712
	ctx.r5.s64 = ctx.r11.s64 + 9712;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D3374;
	sub_826CA560(ctx, base);
loc_826D3374:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826d3398
	if (!cr6.eq) goto loc_826D3398;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,145
	ctx.r7.s64 = 145;
	// addi r5,r11,6780
	ctx.r5.s64 = ctx.r11.s64 + 6780;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D3398;
	sub_826CA560(ctx, base);
loc_826D3398:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x826d33bc
	if (!cr6.eq) goto loc_826D33BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,146
	ctx.r7.s64 = 146;
	// addi r5,r11,9700
	ctx.r5.s64 = ctx.r11.s64 + 9700;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D33BC;
	sub_826CA560(ctx, base);
loc_826D33BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827477d8
	ctx.lr = 0x826D33C8;
	sub_827477D8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x826D33DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x826d3408
	if (!cr0.eq) goto loc_826D3408;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,156
	ctx.r7.s64 = 156;
	// addi r5,r11,9336
	ctx.r5.s64 = ctx.r11.s64 + 9336;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D3400;
	sub_826CA560(ctx, base);
loc_826D3400:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826d3570
	goto loc_826D3570;
loc_826D3408:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x826d0eb0
	ctx.lr = 0x826D3438;
	sub_826D0EB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x826d0eb0
	ctx.lr = 0x826D3454;
	sub_826D0EB0(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d3518
	if (!cr6.eq) goto loc_826D3518;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r11,r11,11328
	ctx.r11.s64 = ctx.r11.s64 + 11328;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne cr6,0x826d34e4
	if (!cr6.eq) goto loc_826D34E4;
	// li r4,1728
	ctx.r4.s64 = 1728;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x826D3488;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d34ac
	if (cr0.eq) goto loc_826D34AC;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8275af00
	ctx.lr = 0x826D34A8;
	sub_8275AF00(ctx, base);
	// b 0x826d34b0
	goto loc_826D34B0;
loc_826D34AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D34B0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x826d356c
	if (!cr6.eq) goto loc_826D356C;
	// li r7,201
	ctx.r7.s64 = 201;
loc_826D34C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,9668
	ctx.r5.s64 = ctx.r11.s64 + 9668;
loc_826D34C8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x826D34D8;
	sub_826CA560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d2b30
	ctx.lr = 0x826D34E0;
	sub_826D2B30(ctx, base);
	// b 0x826d3400
	goto loc_826D3400;
loc_826D34E4:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82755f28
	ctx.lr = 0x826D34FC;
	sub_82755F28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bne 0x826d356c
	if (!cr0.eq) goto loc_826D356C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,220
	ctx.r7.s64 = 220;
	// addi r5,r11,9644
	ctx.r5.s64 = ctx.r11.s64 + 9644;
	// b 0x826d34c8
	goto loc_826D34C8;
loc_826D3518:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// li r4,1728
	ctx.r4.s64 = 1728;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x826D3530;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d3554
	if (cr0.eq) goto loc_826D3554;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8275af00
	ctx.lr = 0x826D3550;
	sub_8275AF00(ctx, base);
	// b 0x826d3558
	goto loc_826D3558;
loc_826D3554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D3558:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x826d356c
	if (!cr6.eq) goto loc_826D356C;
	// li r7,242
	ctx.r7.s64 = 242;
	// b 0x826d34c0
	goto loc_826D34C0;
loc_826D356C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826D3570:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D3578"))) PPC_WEAK_FUNC(sub_826D3578);
PPC_FUNC_IMPL(__imp__sub_826D3578) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2800
	ctx.lr = 0x826D3580;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// clrlwi r10,r29,21
	ctx.r10.u64 = ctx.r29.u32 & 0x7FF;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// rlwinm r25,r29,0,12,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0000;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826d36cc
	if (cr6.eq) goto loc_826D36CC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826d3694
	if (cr6.eq) goto loc_826D3694;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x826d3680
	if (cr6.eq) goto loc_826D3680;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x826d35ec
	if (cr6.eq) goto loc_826D35EC;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r31,4
	ctx.r31.s64 = 4;
	// bne cr6,0x826d36d4
	if (!cr6.eq) goto loc_826D36D4;
	// li r30,32
	ctx.r30.s64 = 32;
	// b 0x826d36d4
	goto loc_826D36D4;
loc_826D35EC:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bge cr6,0x826d3610
	if (!cr6.lt) goto loc_826D3610;
	// lwz r11,1600(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1600);
	// li r31,17
	ctx.r31.s64 = 17;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826d36d4
	if (!cr6.gt) goto loc_826D36D4;
	// stw r10,1600(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1600, ctx.r10.u32);
	// b 0x826d36d4
	goto loc_826D36D4;
loc_826D3610:
	// li r31,11
	ctx.r31.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r26,1604
	ctx.r9.s64 = ctx.r26.s64 + 1604;
loc_826D361C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,27,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3640
	if (cr6.eq) goto loc_826D3640;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x826d361c
	if (cr6.lt) goto loc_826D361C;
	// b 0x826d364c
	goto loc_826D364C;
loc_826D3640:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r30,1605(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1605);
loc_826D364C:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x826d36d4
	if (!cr6.eq) goto loc_826D36D4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lis r22,128
	ctx.r22.s64 = 8388608;
	// rlwimi r11,r24,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x826d3678
	if (cr6.eq) goto loc_826D3678;
	// bl 0x827a90b0
	ctx.lr = 0x826D3674;
	sub_827A90B0(ctx, base);
	// b 0x826d36d4
	goto loc_826D36D4;
loc_826D3678:
	// lis r23,1
	ctx.r23.s64 = 65536;
	// b 0x826d36d4
	goto loc_826D36D4;
loc_826D3680:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r31,r11,18
	ctx.r31.s64 = ctx.r11.s64 + 18;
	// b 0x826d36d0
	goto loc_826D36D0;
loc_826D3694:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x826d36c4
	if (cr6.eq) goto loc_826D36C4;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x826d36ac
	if (cr6.eq) goto loc_826D36AC;
	// li r31,14
	ctx.r31.s64 = 14;
	// b 0x826d36d0
	goto loc_826D36D0;
loc_826D36AC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r31,4
	ctx.r31.s64 = 4;
	// li r30,50
	ctx.r30.s64 = 50;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// b 0x826d36d4
	goto loc_826D36D4;
loc_826D36C4:
	// li r31,16
	ctx.r31.s64 = 16;
	// b 0x826d36d0
	goto loc_826D36D0;
loc_826D36CC:
	// li r31,3
	ctx.r31.s64 = 3;
loc_826D36D0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_826D36D4:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826d36e8
	if (!cr6.eq) goto loc_826D36E8;
	// li r9,85
	ctx.r9.s64 = 85;
	// b 0x826d371c
	goto loc_826D371C;
loc_826D36E8:
	// rlwinm. r11,r25,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x826d36f8
	if (cr0.eq) goto loc_826D36F8;
	// li r9,1
	ctx.r9.s64 = 1;
loc_826D36F8:
	// rlwinm. r11,r25,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d3704
	if (cr0.eq) goto loc_826D3704;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_826D3704:
	// rlwinm. r11,r25,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d3710
	if (cr0.eq) goto loc_826D3710;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_826D3710:
	// rlwinm. r11,r25,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d371c
	if (cr0.eq) goto loc_826D371C;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_826D371C:
	// rlwinm r10,r29,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100000;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826d3734
	if (!cr6.eq) goto loc_826D3734;
	// li r11,256
	ctx.r11.s64 = 256;
loc_826D3734:
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, ctx.xer);
	// beq cr6,0x826d375c
	if (cr6.eq) goto loc_826D375C;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// beq cr6,0x826d37b8
	if (cr6.eq) goto loc_826D37B8;
	// cmplwi cr6,r31,17
	cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// ble cr6,0x826d37b0
	if (!cr6.gt) goto loc_826D37B0;
	// cmplwi cr6,r31,19
	cr6.compare<uint32_t>(ctx.r31.u32, 19, ctx.xer);
	// ble cr6,0x826d37a0
	if (!cr6.gt) goto loc_826D37A0;
	// cmplwi cr6,r31,50
	cr6.compare<uint32_t>(ctx.r31.u32, 50, ctx.xer);
	// bne cr6,0x826d37b0
	if (!cr6.eq) goto loc_826D37B0;
loc_826D375C:
	// li r9,169
	ctx.r9.s64 = 169;
	// ori r10,r11,169
	ctx.r10.u64 = ctx.r11.u64 | 169;
loc_826D3764:
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// cmplw cr6,r22,r8
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826d3804
	if (!cr6.eq) goto loc_826D3804;
	// cmplwi cr6,r9,85
	cr6.compare<uint32_t>(ctx.r9.u32, 85, ctx.xer);
	// bne cr6,0x826d37c8
	if (!cr6.eq) goto loc_826D37C8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d37c8
	if (!cr6.eq) goto loc_826D37C8;
	// rlwinm r11,r31,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// clrlwi r9,r24,21
	ctx.r9.u64 = ctx.r24.u32 & 0x7FF;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r10,r9,r23
	ctx.r10.u64 = ctx.r9.u64 | ctx.r23.u64;
	// b 0x826d3840
	goto loc_826D3840;
loc_826D37A0:
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r10,768
	cr6.compare<uint32_t>(ctx.r10.u32, 768, ctx.xer);
	// bge cr6,0x826d37b0
	if (!cr6.lt) goto loc_826D37B0;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_826D37B0:
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x826d3764
	goto loc_826D3764;
loc_826D37B8:
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// b 0x826d3764
	goto loc_826D3764;
loc_826D37C8:
	// rlwinm r11,r31,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 12582912;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// clrlwi r9,r24,21
	ctx.r9.u64 = ctx.r24.u32 & 0x7FF;
	// or r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 | ctx.r23.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x826d3858
	goto loc_826D3858;
loc_826D3804:
	// cmplwi cr6,r9,85
	cr6.compare<uint32_t>(ctx.r9.u32, 85, ctx.xer);
	// bne cr6,0x826d3830
	if (!cr6.eq) goto loc_826D3830;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d3830
	if (!cr6.eq) goto loc_826D3830;
	// rlwimi r30,r31,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r30,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x826d3858
	goto loc_826D3858;
loc_826D3830:
	// rlwinm r11,r31,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_826D3840:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_826D3858:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2850
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D3864"))) PPC_WEAK_FUNC(sub_826D3864);
PPC_FUNC_IMPL(__imp__sub_826D3864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D3868"))) PPC_WEAK_FUNC(sub_826D3868);
PPC_FUNC_IMPL(__imp__sub_826D3868) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826D3870;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,28(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x826d388c
	if (!cr0.eq) goto loc_826D388C;
	// bl 0x827a90b0
	ctx.lr = 0x826D388C;
	sub_827A90B0(ctx, base);
loc_826D388C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x826d3898
	if (!cr6.eq) goto loc_826D3898;
	// bl 0x827a90b0
	ctx.lr = 0x826D3898;
	sub_827A90B0(ctx, base);
loc_826D3898:
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826d396c
	if (!cr6.gt) goto loc_826D396C;
	// addi r29,r28,54
	ctx.r29.s64 = ctx.r28.s64 + 54;
loc_826D38C4:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826d38d4
	if (cr6.lt) goto loc_826D38D4;
	// bl 0x827a90b0
	ctx.lr = 0x826D38D4;
	sub_827A90B0(ctx, base);
loc_826D38D4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r11,r11,26
	ctx.r11.u64 = ctx.r11.u64 | 26;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwimi r11,r30,16,1,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0x7FFF0000) | (ctx.r11.u64 & 0xFFFFFFFF8000FFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,-2(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2);
	// rlwinm r11,r11,12,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d3908
	if (!cr6.eq) goto loc_826D3908;
	// li r11,85
	ctx.r11.s64 = 85;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x826d3940
	goto loc_826D3940;
loc_826D3908:
	// rlwinm. r8,r11,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x826d3918
	if (cr0.eq) goto loc_826D3918;
	// li r10,1
	ctx.r10.s64 = 1;
loc_826D3918:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x826d3924
	if (cr0.eq) goto loc_826D3924;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_826D3924:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x826d3930
	if (cr0.eq) goto loc_826D3930;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_826D3930:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d393c
	if (cr0.eq) goto loc_826D393C;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_826D393C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_826D3940:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// oris r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 | 327680;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// addi r27,r27,3
	ctx.r27.s64 = ctx.r27.s64 + 3;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d38c4
	if (cr6.lt) goto loc_826D38C4;
loc_826D396C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D3978"))) PPC_WEAK_FUNC(sub_826D3978);
PPC_FUNC_IMPL(__imp__sub_826D3978) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
loc_826D3984:
	// srw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826d39bc
	if (cr6.lt) goto loc_826D39BC;
	// beq cr6,0x826d39b4
	if (cr6.eq) goto loc_826D39B4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826d39ac
	if (cr6.lt) goto loc_826D39AC;
	// bne cr6,0x826d39bc
	if (!cr6.eq) goto loc_826D39BC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x826d39c0
	goto loc_826D39C0;
loc_826D39AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x826d39c0
	goto loc_826D39C0;
loc_826D39B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826d39c0
	goto loc_826D39C0;
loc_826D39BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D39C0:
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// blt cr6,0x826d3984
	if (cr6.lt) goto loc_826D3984;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D39E0"))) PPC_WEAK_FUNC(sub_826D39E0);
PPC_FUNC_IMPL(__imp__sub_826D39E0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// addi r11,r4,401
	ctx.r11.s64 = ctx.r4.s64 + 401;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r11,8,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xF;
	// rlwinm r4,r11,15,12,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xF0000;
	// rlwinm r7,r11,27,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// rlwinm. r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d3a54
	if (cr0.eq) goto loc_826D3A54;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x826d3a44
	if (cr6.eq) goto loc_826D3A44;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x826d3a3c
	if (cr6.eq) goto loc_826D3A3C;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x826d3a34
	if (cr6.eq) goto loc_826D3A34;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x826d3a5c
	if (!cr6.eq) goto loc_826D3A5C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826d3a5c
	if (!cr6.eq) goto loc_826D3A5C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x826d3a74
	goto loc_826D3A74;
loc_826D3A34:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x826d3a78
	goto loc_826D3A78;
loc_826D3A3C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x826d3a78
	goto loc_826D3A78;
loc_826D3A44:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826d3a5c
	if (!cr6.eq) goto loc_826D3A5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826d3a74
	goto loc_826D3A74;
loc_826D3A54:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d3a70
	if (cr6.eq) goto loc_826D3A70;
loc_826D3A5C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r11,5
	ctx.r11.s64 = 5;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x826d3a78
	goto loc_826D3A78;
loc_826D3A70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D3A74:
	// li r9,0
	ctx.r9.s64 = 0;
loc_826D3A78:
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d3a8c
	if (!cr6.eq) goto loc_826D3A8C;
	// li r10,85
	ctx.r10.s64 = 85;
	// b 0x826d3ac0
	goto loc_826D3AC0;
loc_826D3A8C:
	// rlwinm. r3,r4,0,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x826d3a9c
	if (cr0.eq) goto loc_826D3A9C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_826D3A9C:
	// rlwinm. r3,r4,0,14,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d3aa8
	if (cr0.eq) goto loc_826D3AA8;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_826D3AA8:
	// rlwinm. r3,r4,0,13,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826d3ab4
	if (cr0.eq) goto loc_826D3AB4;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_826D3AB4:
	// rlwinm. r4,r4,0,12,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x826d3ac0
	if (cr0.eq) goto loc_826D3AC0;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_826D3AC0:
	// rlwimi r11,r9,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwimi r4,r11,16,1,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x7FFF0000) | (ctx.r4.u64 & 0xFFFFFFFF8000FFFF);
	// li r11,11
	ctx.r11.s64 = 11;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D3B0C"))) PPC_WEAK_FUNC(sub_826D3B0C);
PPC_FUNC_IMPL(__imp__sub_826D3B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D3B10"))) PPC_WEAK_FUNC(sub_826D3B10);
PPC_FUNC_IMPL(__imp__sub_826D3B10) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f8
	ctx.lr = 0x826D3B18;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// clrlwi r27,r31,21
	ctx.r27.u64 = ctx.r31.u32 & 0x7FF;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826d3c60
	if (cr6.eq) goto loc_826D3C60;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826d3bbc
	if (cr6.eq) goto loc_826D3BBC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826d3bb4
	if (cr6.eq) goto loc_826D3BB4;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x826d3bac
	if (cr6.eq) goto loc_826D3BAC;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x826d3ba0
	if (cr6.eq) goto loc_826D3BA0;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x826d3b98
	if (cr6.eq) goto loc_826D3B98;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r25,4
	ctx.r25.s64 = 4;
	// bne cr6,0x826d3ca0
	if (!cr6.eq) goto loc_826D3CA0;
	// li r27,32
	ctx.r27.s64 = 32;
	// b 0x826d3ca0
	goto loc_826D3CA0;
loc_826D3B98:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x826d3ca0
	goto loc_826D3CA0;
loc_826D3BA0:
	// bl 0x827a90b0
	ctx.lr = 0x826D3BA4;
	sub_827A90B0(ctx, base);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826d3ca0
	goto loc_826D3CA0;
loc_826D3BAC:
	// li r25,2
	ctx.r25.s64 = 2;
	// b 0x826d3ca0
	goto loc_826D3CA0;
loc_826D3BB4:
	// li r25,3
	ctx.r25.s64 = 3;
	// b 0x826d3ca0
	goto loc_826D3CA0;
loc_826D3BBC:
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x826d3c44
	if (!cr6.eq) goto loc_826D3C44;
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// lis r24,128
	ctx.r24.s64 = 8388608;
	// blt cr6,0x826d3c04
	if (cr6.lt) goto loc_826D3C04;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// rlwimi r11,r23,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826d3c0c
	if (cr6.eq) goto loc_826D3C0C;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x826d3bfc
	if (cr6.eq) goto loc_826D3BFC;
	// bl 0x827a90b0
	ctx.lr = 0x826D3BF8;
	sub_827A90B0(ctx, base);
	// b 0x826d3c04
	goto loc_826D3C04;
loc_826D3BFC:
	// lis r22,1
	ctx.r22.s64 = 65536;
loc_826D3C00:
	// li r26,0
	ctx.r26.s64 = 0;
loc_826D3C04:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// b 0x826d3c58
	goto loc_826D3C58;
loc_826D3C0C:
	// rlwinm r11,r23,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0x3;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826d3c00
	if (cr6.lt) goto loc_826D3C00;
	// beq cr6,0x826d3c3c
	if (cr6.eq) goto loc_826D3C3C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826d3c34
	if (cr6.lt) goto loc_826D3C34;
	// bne cr6,0x826d3c00
	if (!cr6.eq) goto loc_826D3C00;
	// lis r26,6
	ctx.r26.s64 = 393216;
	// b 0x826d3c04
	goto loc_826D3C04;
loc_826D3C34:
	// lis r26,4
	ctx.r26.s64 = 262144;
	// b 0x826d3c04
	goto loc_826D3C04;
loc_826D3C3C:
	// lis r26,2
	ctx.r26.s64 = 131072;
	// b 0x826d3c04
	goto loc_826D3C04;
loc_826D3C44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d3c58
	if (cr6.lt) goto loc_826D3C58;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_826D3C58:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x826d3ca0
	goto loc_826D3CA0;
loc_826D3C60:
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// li r25,5
	ctx.r25.s64 = 5;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x826d3ca0
	if (!cr6.eq) goto loc_826D3CA0;
	// cmplwi cr6,r10,768
	cr6.compare<uint32_t>(ctx.r10.u32, 768, ctx.xer);
	// blt cr6,0x826d3ca0
	if (cr6.lt) goto loc_826D3CA0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lis r24,128
	ctx.r24.s64 = 8388608;
	// rlwimi r11,r23,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x826d3c98
	if (cr6.eq) goto loc_826D3C98;
	// bl 0x827a90b0
	ctx.lr = 0x826D3C94;
	sub_827A90B0(ctx, base);
	// b 0x826d3ca0
	goto loc_826D3CA0;
loc_826D3C98:
	// lis r22,1
	ctx.r22.s64 = 65536;
	// li r26,0
	ctx.r26.s64 = 0;
loc_826D3CA0:
	// rlwinm r11,r31,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d3cb8
	if (!cr6.eq) goto loc_826D3CB8;
	// li r3,12816
	ctx.r3.s64 = 12816;
	// b 0x826d3cc0
	goto loc_826D3CC0;
loc_826D3CB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d3978
	ctx.lr = 0x826D3CC0;
	sub_826D3978(ctx, base);
loc_826D3CC0:
	// rlwinm r11,r31,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	// lis r10,1792
	ctx.r10.s64 = 117440512;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826d3d54
	if (cr6.gt) goto loc_826D3D54;
	// beq cr6,0x826d3d4c
	if (cr6.eq) goto loc_826D3D4C;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3d44
	if (cr6.eq) goto loc_826D3D44;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3d3c
	if (cr6.eq) goto loc_826D3D3C;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3d34
	if (cr6.eq) goto loc_826D3D34;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3d2c
	if (cr6.eq) goto loc_826D3D2C;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3d24
	if (cr6.eq) goto loc_826D3D24;
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d3d90
	if (!cr6.eq) goto loc_826D3D90;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x826d3dc0
	goto loc_826D3DC0;
loc_826D3D24:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// b 0x826d3dbc
	goto loc_826D3DBC;
loc_826D3D2C:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// b 0x826d3dc0
	goto loc_826D3DC0;
loc_826D3D34:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x826d3dbc
	goto loc_826D3DBC;
loc_826D3D3C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x826d3dc0
	goto loc_826D3DC0;
loc_826D3D44:
	// lis r11,0
	ctx.r11.s64 = 0;
	// b 0x826d3dbc
	goto loc_826D3DBC;
loc_826D3D4C:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x826d3dc0
	goto loc_826D3DC0;
loc_826D3D54:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3db8
	if (cr6.eq) goto loc_826D3DB8;
	// lis r10,2304
	ctx.r10.s64 = 150994944;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3db0
	if (cr6.eq) goto loc_826D3DB0;
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3da8
	if (cr6.eq) goto loc_826D3DA8;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3da0
	if (cr6.eq) goto loc_826D3DA0;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d3d98
	if (cr6.eq) goto loc_826D3D98;
loc_826D3D90:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826d3dc0
	goto loc_826D3DC0;
loc_826D3D98:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// b 0x826d3dbc
	goto loc_826D3DBC;
loc_826D3DA0:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// b 0x826d3dc0
	goto loc_826D3DC0;
loc_826D3DA8:
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// b 0x826d3dc0
	goto loc_826D3DC0;
loc_826D3DB0:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// b 0x826d3dc0
	goto loc_826D3DC0;
loc_826D3DB8:
	// lis r11,4
	ctx.r11.s64 = 262144;
loc_826D3DBC:
	// ori r11,r11,34952
	ctx.r11.u64 = ctx.r11.u64 | 34952;
loc_826D3DC0:
	// cmplwi cr6,r21,9
	cr6.compare<uint32_t>(ctx.r21.u32, 9, ctx.xer);
	// beq cr6,0x826d3ef8
	if (cr6.eq) goto loc_826D3EF8;
	// cmplwi cr6,r21,53
	cr6.compare<uint32_t>(ctx.r21.u32, 53, ctx.xer);
	// beq cr6,0x826d3ef8
	if (cr6.eq) goto loc_826D3EF8;
	// cmplwi cr6,r21,59
	cr6.compare<uint32_t>(ctx.r21.u32, 59, ctx.xer);
	// ble cr6,0x826d3e08
	if (!cr6.gt) goto loc_826D3E08;
	// cmplwi cr6,r21,61
	cr6.compare<uint32_t>(ctx.r21.u32, 61, ctx.xer);
	// ble cr6,0x826d3e04
	if (!cr6.gt) goto loc_826D3E04;
	// cmplwi cr6,r21,62
	cr6.compare<uint32_t>(ctx.r21.u32, 62, ctx.xer);
	// beq cr6,0x826d3ef8
	if (cr6.eq) goto loc_826D3EF8;
	// cmplwi cr6,r21,78
	cr6.compare<uint32_t>(ctx.r21.u32, 78, ctx.xer);
	// beq cr6,0x826d3dfc
	if (cr6.eq) goto loc_826D3DFC;
	// cmplwi cr6,r21,85
	cr6.compare<uint32_t>(ctx.r21.u32, 85, ctx.xer);
	// beq cr6,0x826d3e04
	if (cr6.eq) goto loc_826D3E04;
	// b 0x826d3e08
	goto loc_826D3E08;
loc_826D3DFC:
	// clrlwi. r10,r20,24
	ctx.r10.u64 = ctx.r20.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d3e08
	if (!cr0.eq) goto loc_826D3E08;
loc_826D3E04:
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
loc_826D3E08:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d3e9c
	if (!cr6.eq) goto loc_826D3E9C;
	// cmplwi cr6,r3,12816
	cr6.compare<uint32_t>(ctx.r3.u32, 12816, ctx.xer);
	// bne cr6,0x826d3e54
	if (!cr6.eq) goto loc_826D3E54;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d3e54
	if (!cr6.eq) goto loc_826D3E54;
	// rlwinm r11,r25,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// clrlwi r9,r23,21
	ctx.r9.u64 = ctx.r23.u32 & 0x7FF;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r10,r9,r26
	ctx.r10.u64 = ctx.r9.u64 | ctx.r26.u64;
	// or r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 | ctx.r22.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826d3ee4
	goto loc_826D3EE4;
loc_826D3E54:
	// rlwinm r10,r25,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r27,16
	ctx.r9.u64 = ctx.r27.u32 & 0xFFFF;
	// oris r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 12582912;
	// or r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 | ctx.r3.u64;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r10,r23,21
	ctx.r10.u64 = ctx.r23.u32 & 0x7FF;
	// or r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 | ctx.r26.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// or r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 | ctx.r22.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// b 0x826d3f10
	goto loc_826D3F10;
loc_826D3E9C:
	// cmplwi cr6,r3,12816
	cr6.compare<uint32_t>(ctx.r3.u32, 12816, ctx.xer);
	// bne cr6,0x826d3ec0
	if (!cr6.eq) goto loc_826D3EC0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d3ec0
	if (!cr6.eq) goto loc_826D3EC0;
	// rlwimi r27,r25,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r25.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r27,r24
	ctx.r11.u64 = ctx.r27.u64 | ctx.r24.u64;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x826d3f00
	goto loc_826D3F00;
loc_826D3EC0:
	// rlwinm r10,r25,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r27,16
	ctx.r9.u64 = ctx.r27.u32 & 0xFFFF;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// or r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 | ctx.r3.u64;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 | ctx.r24.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_826D3EE4:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x826d3f10
	goto loc_826D3F10;
loc_826D3EF8:
	// rlwimi r27,r25,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r25.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_826D3F00:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_826D3F10:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D3F1C"))) PPC_WEAK_FUNC(sub_826D3F1C);
PPC_FUNC_IMPL(__imp__sub_826D3F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D3F20"))) PPC_WEAK_FUNC(sub_826D3F20);
PPC_FUNC_IMPL(__imp__sub_826D3F20) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x826D3F28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826d3578
	ctx.lr = 0x826D3F5C;
	sub_826D3578(ctx, base);
	// rlwinm r11,r31,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x826d3f78
	if (!cr6.eq) goto loc_826D3F78;
	// lis r5,1
	ctx.r5.s64 = 65536;
loc_826D3F78:
	// rlwinm r11,r31,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r4,228
	ctx.r4.s64 = 14942208;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x826d3f98
	if (!cr6.eq) goto loc_826D3F98;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r10,r5,12816
	ctx.r10.u64 = ctx.r5.u64 | 12816;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// b 0x826d3fac
	goto loc_826D3FAC;
loc_826D3F98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d3978
	ctx.lr = 0x826D3FA0;
	sub_826D3978(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
loc_826D3FAC:
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x826d3fe4
	if (!cr6.eq) goto loc_826D3FE4;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// ori r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 | 33;
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x826d4008
	goto loc_826D4008;
loc_826D3FE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d3978
	ctx.lr = 0x826D3FEC;
	sub_826D3978(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// ori r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 | 33;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_826D4008:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D401C"))) PPC_WEAK_FUNC(sub_826D401C);
PPC_FUNC_IMPL(__imp__sub_826D401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D4020"))) PPC_WEAK_FUNC(sub_826D4020);
PPC_FUNC_IMPL(__imp__sub_826D4020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27fc
	ctx.lr = 0x826D4028;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lwz r26,16(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d4060
	if (!cr0.eq) goto loc_826D4060;
	// bl 0x827a90b0
	ctx.lr = 0x826D4060;
	sub_827A90B0(ctx, base);
loc_826D4060:
	// lwz r11,1580(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1580);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d4070
	if (!cr6.eq) goto loc_826D4070;
	// bl 0x827a90b0
	ctx.lr = 0x826D4070;
	sub_827A90B0(ctx, base);
loc_826D4070:
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r30,1580(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1580);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bgt cr6,0x826d49a4
	if (cr6.gt) goto loc_826D49A4;
	// beq cr6,0x826d4928
	if (cr6.eq) goto loc_826D4928;
	// addi r10,r10,-25
	ctx.r10.s64 = ctx.r10.s64 + -25;
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bgt cr6,0x826d49a4
	if (cr6.gt) goto loc_826D49A4;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,9768
	ctx.r12.s64 = ctx.r12.s64 + 9768;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32147
	ctx.r12.s64 = -2106785792;
	// addi r12,r12,16576
	ctx.r12.s64 = ctx.r12.s64 + 16576;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_826D440C;
	case 1:
		goto loc_826D44F0;
	case 2:
		goto loc_826D4328;
	case 3:
		goto loc_826D4434;
	case 4:
		goto loc_826D4470;
	case 5:
		goto loc_826D43C8;
	case 6:
		goto loc_826D49A4;
	case 7:
		goto loc_826D49A4;
	case 8:
		goto loc_826D49A4;
	case 9:
		goto loc_826D49A4;
	case 10:
		goto loc_826D49A4;
	case 11:
		goto loc_826D49A4;
	case 12:
		goto loc_826D49A4;
	case 13:
		goto loc_826D447C;
	case 14:
		goto loc_826D4470;
	case 15:
		goto loc_826D40C0;
	case 16:
		goto loc_826D46C0;
	case 17:
		goto loc_826D4258;
	case 18:
		goto loc_826D42FC;
	case 19:
		goto loc_826D46B8;
	case 20:
		goto loc_826D47F4;
	default:
		__builtin_unreachable();
	}
loc_826D40C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r10,24,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r10,19
	cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bne cr6,0x826d4188
	if (!cr6.eq) goto loc_826D4188;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d40fc
	if (!cr6.eq) goto loc_826D40FC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// b 0x826d4100
	goto loc_826D4100;
loc_826D40FC:
	// li r11,52
	ctx.r11.s64 = 52;
loc_826D4100:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D4134;
	sub_826D3B10(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r23,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r23.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x826d42d0
	goto loc_826D42D0;
loc_826D4188:
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x826d4194
	if (cr6.eq) goto loc_826D4194;
	// bl 0x827a90b0
	ctx.lr = 0x826D4194;
	sub_827A90B0(ctx, base);
loc_826D4194:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r11,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d41ac
	if (cr6.eq) goto loc_826D41AC;
	// bl 0x827a90b0
	ctx.lr = 0x826D41AC;
	sub_827A90B0(ctx, base);
loc_826D41AC:
	// li r11,53
	ctx.r11.s64 = 53;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D41E8;
	sub_826D3B10(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r23,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r23.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826d42cc
	if (!cr6.eq) goto loc_826D42CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,39
	ctx.r10.s64 = 39;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_826D424C:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x826d42d0
	goto loc_826D42D0;
loc_826D4258:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d42f0
	if (cr6.eq) goto loc_826D42F0;
	// li r11,41
	ctx.r11.s64 = 41;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r4,53
	ctx.r4.s64 = 53;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r8,53
	ctx.r8.s64 = 53;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D42C8;
	sub_826D3B10(ctx, base);
loc_826D42C8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_826D42CC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_826D42D0:
	// addi r10,r27,-1
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d284c
	__restgprlr_21(ctx, base);
	return;
loc_826D42F0:
	// li r10,39
	ctx.r10.s64 = 39;
loc_826D42F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826d424c
	goto loc_826D424C;
loc_826D42FC:
	// li r10,41
	ctx.r10.s64 = 41;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x826d42d0
	if (cr0.eq) goto loc_826D42D0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x826d42d0
	goto loc_826D42D0;
loc_826D4328:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,3
	ctx.r27.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x826d4348
	if (cr6.eq) goto loc_826D4348;
	// bl 0x827a90b0
	ctx.lr = 0x826D4348;
	sub_827A90B0(ctx, base);
loc_826D4348:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi. r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d4358
	if (cr0.eq) goto loc_826D4358;
	// bl 0x827a90b0
	ctx.lr = 0x826D4358;
	sub_827A90B0(ctx, base);
loc_826D4358:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x826d4374
	if (cr6.eq) goto loc_826D4374;
	// bl 0x827a90b0
	ctx.lr = 0x826D4374;
	sub_827A90B0(ctx, base);
loc_826D4374:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826d4388
	if (cr6.lt) goto loc_826D4388;
	// bl 0x827a90b0
	ctx.lr = 0x826D4388;
	sub_827A90B0(ctx, base);
loc_826D4388:
	// li r11,62
	ctx.r11.s64 = 62;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D43C4;
	sub_826D3B10(ctx, base);
	// b 0x826d42c8
	goto loc_826D42C8;
loc_826D43C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x826d43e8
	if (cr6.eq) goto loc_826D43E8;
	// bl 0x827a90b0
	ctx.lr = 0x826D43E8;
	sub_827A90B0(ctx, base);
loc_826D43E8:
	// li r10,50
	ctx.r10.s64 = 50;
loc_826D43EC:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
loc_826D4400:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_826D4404:
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// b 0x826d42d0
	goto loc_826D42D0;
loc_826D440C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x826d442c
	if (cr6.eq) goto loc_826D442C;
	// bl 0x827a90b0
	ctx.lr = 0x826D442C;
	sub_827A90B0(ctx, base);
loc_826D442C:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x826d43ec
	goto loc_826D43EC;
loc_826D4434:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d445c
	if (!cr0.eq) goto loc_826D445C;
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// b 0x826d4464
	goto loc_826D4464;
loc_826D445C:
	// li r11,83
	ctx.r11.s64 = 83;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_826D4464:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826d42d0
	goto loc_826D42D0;
loc_826D4470:
	// li r10,42
	ctx.r10.s64 = 42;
loc_826D4474:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x826d42f4
	goto loc_826D42F4;
loc_826D447C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x826d449c
	if (cr6.eq) goto loc_826D449C;
	// bl 0x827a90b0
	ctx.lr = 0x826D449C;
	sub_827A90B0(ctx, base);
loc_826D449C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826d44b0
	if (cr6.lt) goto loc_826D44B0;
	// bl 0x827a90b0
	ctx.lr = 0x826D44B0;
	sub_827A90B0(ctx, base);
loc_826D44B0:
	// li r11,62
	ctx.r11.s64 = 62;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D44EC;
	sub_826D3B10(ctx, base);
	// b 0x826d42c8
	goto loc_826D42C8;
loc_826D44F0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r27,3
	ctx.r27.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// bne cr6,0x826d45b0
	if (!cr6.eq) goto loc_826D45B0;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x826d4528
	if (cr6.eq) goto loc_826D4528;
	// bl 0x827a90b0
	ctx.lr = 0x826D4528;
	sub_827A90B0(ctx, base);
loc_826D4528:
	// li r11,52
	ctx.r11.s64 = 52;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D4564;
	sub_826D3B10(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,41
	ctx.r7.s64 = 41;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x826d4404
	goto loc_826D4404;
loc_826D45B0:
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x826d45bc
	if (cr6.eq) goto loc_826D45BC;
	// bl 0x827a90b0
	ctx.lr = 0x826D45BC;
	sub_827A90B0(ctx, base);
loc_826D45BC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x826d45d8
	if (cr6.eq) goto loc_826D45D8;
	// bl 0x827a90b0
	ctx.lr = 0x826D45D8;
	sub_827A90B0(ctx, base);
loc_826D45D8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826d45ec
	if (cr6.lt) goto loc_826D45EC;
	// bl 0x827a90b0
	ctx.lr = 0x826D45EC;
	sub_827A90B0(ctx, base);
loc_826D45EC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x826d4678
	if (!cr6.eq) goto loc_826D4678;
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r8,53
	ctx.r8.s64 = 53;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D463C;
	sub_826D3B10(ctx, base);
	// li r10,39
	ctx.r10.s64 = 39;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,41
	ctx.r8.s64 = 41;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x826d4404
	goto loc_826D4404;
loc_826D4678:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D469C;
	sub_826D3B10(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826d42d0
	goto loc_826D42D0;
loc_826D46B8:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x826d4474
	goto loc_826D4474;
loc_826D46C0:
	// rlwinm r11,r27,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x7;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826d471c
	if (cr6.eq) goto loc_826D471C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x826d4714
	if (cr6.eq) goto loc_826D4714;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x826d470c
	if (cr6.eq) goto loc_826D470C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// beq cr6,0x826d4704
	if (cr6.eq) goto loc_826D4704;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x826d46fc
	if (cr6.eq) goto loc_826D46FC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x826d4724
	goto loc_826D4724;
loc_826D46FC:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x826d4724
	goto loc_826D4724;
loc_826D4704:
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x826d4728
	goto loc_826D4728;
loc_826D470C:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// b 0x826d4720
	goto loc_826D4720;
loc_826D4714:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x826d4720
	goto loc_826D4720;
loc_826D471C:
	// lis r11,3
	ctx.r11.s64 = 196608;
loc_826D4720:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
loc_826D4724:
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
loc_826D4728:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_826D4738:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r26,512
	cr6.compare<uint32_t>(ctx.r26.u32, 512, ctx.xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x826d478c
	if (cr6.lt) goto loc_826D478C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,8192
	cr6.compare<uint32_t>(ctx.r9.u32, 8192, ctx.xer);
	// bne cr6,0x826d478c
	if (!cr6.eq) goto loc_826D478C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x826d478c
	if (!cr6.eq) goto loc_826D478C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x826d4794
	goto loc_826D4794;
loc_826D478C:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
loc_826D4794:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x826d4738
	if (cr6.lt) goto loc_826D4738;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D47C8;
	sub_826D3B10(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,52
	ctx.r8.s64 = 52;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D47F0;
	sub_826D3B10(ctx, base);
	// b 0x826d42c8
	goto loc_826D42C8;
loc_826D47F4:
	// rlwinm r11,r27,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x7;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826d4850
	if (cr6.eq) goto loc_826D4850;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x826d4848
	if (cr6.eq) goto loc_826D4848;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x826d4840
	if (cr6.eq) goto loc_826D4840;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// beq cr6,0x826d4838
	if (cr6.eq) goto loc_826D4838;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x826d4830
	if (cr6.eq) goto loc_826D4830;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x826d4858
	goto loc_826D4858;
loc_826D4830:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x826d4858
	goto loc_826D4858;
loc_826D4838:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x826d485c
	goto loc_826D485C;
loc_826D4840:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// b 0x826d4854
	goto loc_826D4854;
loc_826D4848:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x826d4854
	goto loc_826D4854;
loc_826D4850:
	// lis r11,3
	ctx.r11.s64 = 196608;
loc_826D4854:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
loc_826D4858:
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
loc_826D485C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_826D486C:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r26,512
	cr6.compare<uint32_t>(ctx.r26.u32, 512, ctx.xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x826d48c0
	if (cr6.lt) goto loc_826D48C0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,8192
	cr6.compare<uint32_t>(ctx.r9.u32, 8192, ctx.xer);
	// bne cr6,0x826d48c0
	if (!cr6.eq) goto loc_826D48C0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x826d48c0
	if (!cr6.eq) goto loc_826D48C0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x826d48c8
	goto loc_826D48C8;
loc_826D48C0:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
loc_826D48C8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x826d486c
	if (cr6.lt) goto loc_826D486C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D48FC;
	sub_826D3B10(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D4924;
	sub_826D3B10(ctx, base);
	// b 0x826d42c8
	goto loc_826D42C8;
loc_826D4928:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x826d4948
	if (cr6.eq) goto loc_826D4948;
	// bl 0x827a90b0
	ctx.lr = 0x826D4948;
	sub_827A90B0(ctx, base);
loc_826D4948:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D4984;
	sub_826D3B10(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// b 0x826d4400
	goto loc_826D4400;
loc_826D49A4:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x826d42d0
	goto loc_826D42D0;
}

__attribute__((alias("__imp__sub_826D49AC"))) PPC_WEAK_FUNC(sub_826D49AC);
PPC_FUNC_IMPL(__imp__sub_826D49AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D49B0"))) PPC_WEAK_FUNC(sub_826D49B0);
PPC_FUNC_IMPL(__imp__sub_826D49B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e8
	ctx.lr = 0x826D49B8;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// rlwinm r10,r30,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r25,16(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x826d4a14
	if (!cr6.eq) goto loc_826D4A14;
	// cmplwi cr6,r25,768
	cr6.compare<uint32_t>(ctx.r25.u32, 768, ctx.xer);
	// blt cr6,0x826d4a14
	if (cr6.lt) goto loc_826D4A14;
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x826d4a18
	goto loc_826D4A18;
loc_826D4A14:
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
loc_826D4A18:
	// lwz r26,356(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x826d4a3c
	if (cr6.eq) goto loc_826D4A3C;
	// li r10,33
	ctx.r10.s64 = 33;
	// lwz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r30,r10,0,19,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1FFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r30,r10,0,1,3
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x70000000) | (ctx.r30.u64 & 0xFFFFFFFF8FFFFFFF);
loc_826D4A3C:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_826D4A40:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r8,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// beq 0x826d4aa4
	if (cr0.eq) goto loc_826D4AA4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// cmplwi cr6,r25,512
	cr6.compare<uint32_t>(ctx.r25.u32, 512, ctx.xer);
	// blt cr6,0x826d4a9c
	if (cr6.lt) goto loc_826D4A9C;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r9,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r8,8192
	cr6.compare<uint32_t>(ctx.r8.u32, 8192, ctx.xer);
	// bne cr6,0x826d4a9c
	if (!cr6.eq) goto loc_826D4A9C;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r9,r8,0,19,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r9,512
	cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// bne cr6,0x826d4a9c
	if (!cr6.eq) goto loc_826D4A9C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x826d4ab0
	goto loc_826D4AB0;
loc_826D4A9C:
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// b 0x826d4aac
	goto loc_826D4AAC;
loc_826D4AA4:
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stwx r18,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r18.u32);
loc_826D4AAC:
	// stwx r18,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r18.u32);
loc_826D4AB0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// blt cr6,0x826d4a40
	if (cr6.lt) goto loc_826D4A40;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x826d4bf8
	if (cr6.eq) goto loc_826D4BF8;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x826d4ad8
	if (cr6.eq) goto loc_826D4AD8;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// b 0x826d4cb0
	goto loc_826D4CB0;
loc_826D4AD8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// rlwimi r11,r20,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d4aec
	if (cr0.eq) goto loc_826D4AEC;
	// bl 0x827a90b0
	ctx.lr = 0x826D4AEC;
	sub_827A90B0(ctx, base);
loc_826D4AEC:
	// cmplwi cr6,r25,768
	cr6.compare<uint32_t>(ctx.r25.u32, 768, ctx.xer);
	// bge cr6,0x826d4b34
	if (!cr6.lt) goto loc_826D4B34;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x826d4b10
	if (cr6.eq) goto loc_826D4B10;
	// bl 0x827a90b0
	ctx.lr = 0x826D4B10;
	sub_827A90B0(ctx, base);
loc_826D4B10:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x826d4b2c
	if (cr6.eq) goto loc_826D4B2C;
	// bl 0x827a90b0
	ctx.lr = 0x826D4B2C;
	sub_827A90B0(ctx, base);
loc_826D4B2C:
	// addi r23,r28,4
	ctx.r23.s64 = ctx.r28.s64 + 4;
	// b 0x826d4b4c
	goto loc_826D4B4C;
loc_826D4B34:
	// rlwinm r11,r29,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d4b48
	if (cr6.eq) goto loc_826D4B48;
	// bl 0x827a90b0
	ctx.lr = 0x826D4B48;
	sub_827A90B0(ctx, base);
loc_826D4B48:
	// addi r23,r28,2
	ctx.r23.s64 = ctx.r28.s64 + 2;
loc_826D4B4C:
	// li r11,89
	ctx.r11.s64 = 89;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r30,r29,16,12,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xF0000) | (ctx.r30.u64 & 0xFFFFFFFFFFF0FFFF);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x826d4b84
	if (!cr6.eq) goto loc_826D4B84;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_826D4B84:
	// bl 0x826d3578
	ctx.lr = 0x826D4B88;
	sub_826D3578(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,89
	ctx.r8.s64 = 89;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D4BB0;
	sub_826D3B10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x826d4cac
	if (cr6.eq) goto loc_826D4CAC;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// rlwimi r4,r29,16,12,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xF0000) | (ctx.r4.u64 & 0xFFFFFFFFFFF0FFFF);
loc_826D4BC4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d3f20
	ctx.lr = 0x826D4BE4;
	sub_826D3F20(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x826d4cb0
	goto loc_826D4CB0;
loc_826D4BF8:
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r23,r28,4
	ctx.r23.s64 = ctx.r28.s64 + 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d4c14
	if (cr0.eq) goto loc_826D4C14;
	// bl 0x827a90b0
	ctx.lr = 0x826D4C14;
	sub_827A90B0(ctx, base);
loc_826D4C14:
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d4c2c
	if (cr0.eq) goto loc_826D4C2C;
	// bl 0x827a90b0
	ctx.lr = 0x826D4C2C;
	sub_827A90B0(ctx, base);
loc_826D4C2C:
	// xor r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 ^ ctx.r29.u64;
	// clrlwi. r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d4c3c
	if (!cr0.eq) goto loc_826D4C3C;
	// bl 0x827a90b0
	ctx.lr = 0x826D4C3C;
	sub_827A90B0(ctx, base);
loc_826D4C3C:
	// li r11,87
	ctx.r11.s64 = 87;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x826d4c6c
	if (!cr6.eq) goto loc_826D4C6C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_826D4C6C:
	// bl 0x826d3578
	ctx.lr = 0x826D4C70;
	sub_826D3578(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,87
	ctx.r8.s64 = 87;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826d3b10
	ctx.lr = 0x826D4C98;
	sub_826D3B10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x826d4cac
	if (cr6.eq) goto loc_826D4CAC;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x826d4bc4
	goto loc_826D4BC4;
loc_826D4CAC:
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_826D4CB0:
	// stw r23,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828d2838
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D4CCC"))) PPC_WEAK_FUNC(sub_826D4CCC);
PPC_FUNC_IMPL(__imp__sub_826D4CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D4CD0"))) PPC_WEAK_FUNC(sub_826D4CD0);
PPC_FUNC_IMPL(__imp__sub_826D4CD0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x826D4CD8;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lwz r24,16(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r24,768
	cr6.compare<uint32_t>(ctx.r24.u32, 768, ctx.xer);
	// bge cr6,0x826d4d08
	if (!cr6.lt) goto loc_826D4D08;
	// bl 0x827a90b0
	ctx.lr = 0x826D4D08;
	sub_827A90B0(ctx, base);
loc_826D4D08:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d4d30
	if (cr0.eq) goto loc_826D4D30;
	// bl 0x827a90b0
	ctx.lr = 0x826D4D30;
	sub_827A90B0(ctx, base);
loc_826D4D30:
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d4d3c
	if (cr0.eq) goto loc_826D4D3C;
	// bl 0x827a90b0
	ctx.lr = 0x826D4D3C;
	sub_827A90B0(ctx, base);
loc_826D4D3C:
	// lwz r21,356(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// li r19,33
	ctx.r19.s64 = 33;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x826d4d64
	if (cr6.eq) goto loc_826D4D64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r18,0(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwimi r28,r11,0,19,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r28,r11,0,1,3
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x70000000) | (ctx.r28.u64 & 0xFFFFFFFF8FFFFFFF);
loc_826D4D64:
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_826D4D6C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// beq 0x826d4ddc
	if (cr0.eq) goto loc_826D4DDC;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x826d4dd4
	if (!cr6.eq) goto loc_826D4DD4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d4db0
	if (cr6.eq) goto loc_826D4DB0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826d4dd4
	if (!cr6.eq) goto loc_826D4DD4;
loc_826D4DB0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826d4dbc
	if (cr6.eq) goto loc_826D4DBC;
	// bl 0x827a90b0
	ctx.lr = 0x826D4DBC;
	sub_827A90B0(ctx, base);
loc_826D4DBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x826d4de8
	goto loc_826D4DE8;
loc_826D4DD4:
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// b 0x826d4de4
	goto loc_826D4DE4;
loc_826D4DDC:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r17,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r17.u32);
loc_826D4DE4:
	// stwx r17,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r17.u32);
loc_826D4DE8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x826d4d6c
	if (cr6.lt) goto loc_826D4D6C;
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r15,r27,3
	ctx.r15.s64 = ctx.r27.s64 + 3;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,2560
	cr6.compare<uint32_t>(ctx.r11.u32, 2560, ctx.xer);
	// beq cr6,0x826d4e18
	if (cr6.eq) goto loc_826D4E18;
	// bl 0x827a90b0
	ctx.lr = 0x826D4E18;
	sub_827A90B0(ctx, base);
loc_826D4E18:
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwimi r10,r11,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwinm r29,r31,0,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r25,228
	ctx.r25.s64 = 14942208;
	// addi r3,r20,4
	ctx.r3.s64 = ctx.r20.s64 + 4;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// stw r10,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// beq cr6,0x826d4e5c
	if (cr6.eq) goto loc_826D4E5C;
	// oris r28,r28,15
	ctx.r28.u64 = ctx.r28.u64 | 983040;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x826d4e5c
	if (!cr6.eq) goto loc_826D4E5C;
	// rlwimi r28,r19,0,19,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r19.u32, 0) & 0x1FFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r28,r19,0,1,3
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r19.u32, 0) & 0x70000000) | (ctx.r28.u64 & 0xFFFFFFFF8FFFFFFF);
loc_826D4E5C:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x826d3578
	ctx.lr = 0x826D4E70;
	sub_826D3578(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,94
	ctx.r8.s64 = 94;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826d3b10
	ctx.lr = 0x826D4EA0;
	sub_826D3B10(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,94
	ctx.r8.s64 = 94;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826d3b10
	ctx.lr = 0x826D4EC8;
	sub_826D3B10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x826d4f08
	if (cr6.eq) goto loc_826D4F08;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r17,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x826d3f20
	ctx.lr = 0x826D4EF4;
	sub_826D3F20(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x826d4f70
	goto loc_826D4F70;
loc_826D4F08:
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x826d4f6c
	if (cr6.eq) goto loc_826D4F6C;
	// li r10,71
	ctx.r10.s64 = 71;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x826d3578
	ctx.lr = 0x826D4F34;
	sub_826D3578(ctx, base);
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,33
	ctx.r10.u64 = ctx.r10.u64 | 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x826d3978
	ctx.lr = 0x826D4F50;
	sub_826D3978(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// b 0x826d4f70
	goto loc_826D4F70;
loc_826D4F6C:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_826D4F70:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D4F90"))) PPC_WEAK_FUNC(sub_826D4F90);
PPC_FUNC_IMPL(__imp__sub_826D4F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x826D4F98;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// stw r5,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r9,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// lwz r17,16(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// stw r19,1600(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1600, ctx.r19.u32);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// addi r29,r14,4
	ctx.r29.s64 = ctx.r14.s64 + 4;
	// lwz r10,28(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// bne 0x826d5004
	if (!cr0.eq) goto loc_826D5004;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// b 0x826d500c
	goto loc_826D500C;
loc_826D5004:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_826D500C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d5028
	if (cr0.eq) goto loc_826D5028;
	// lwz r11,1580(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1580);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d5028
	if (cr0.eq) goto loc_826D5028;
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
loc_826D5028:
	// cmplwi cr6,r17,768
	cr6.compare<uint32_t>(ctx.r17.u32, 768, ctx.xer);
	// blt cr6,0x826d5048
	if (cr6.lt) goto loc_826D5048;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r23,1604
	ctx.r3.s64 = ctx.r23.s64 + 1604;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// bl 0x828d2890
	ctx.lr = 0x826D5044;
	sub_828D2890(ctx, base);
	// b 0x826d504c
	goto loc_826D504C;
loc_826D5048:
	// lwz r18,104(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_826D504C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x826d55d4
	if (cr6.eq) goto loc_826D55D4;
	// addi r11,r18,401
	ctx.r11.s64 = ctx.r18.s64 + 401;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r21,r11,r23
	ctx.r21.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_826D5064:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x826d569c
	if (!cr6.lt) goto loc_826D569C;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r22,r4,0,3,3
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bgt cr6,0x826d55c8
	if (cr6.gt) goto loc_826D55C8;
	// beq cr6,0x826d54dc
	if (cr6.eq) goto loc_826D54DC;
	// cmplwi cr6,r11,96
	cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bgt cr6,0x826d55c8
	if (cr6.gt) goto loc_826D55C8;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,9816
	ctx.r12.s64 = ctx.r12.s64 + 9816;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32147
	ctx.r12.s64 = -2106785792;
	// addi r12,r12,20668
	ctx.r12.s64 = ctx.r12.s64 + 20668;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826D55C8;
	case 1:
		goto loc_826D50BC;
	case 2:
		goto loc_826D5118;
	case 3:
		goto loc_826D5124;
	case 4:
		goto loc_826D5130;
	case 5:
		goto loc_826D513C;
	case 6:
		goto loc_826D5148;
	case 7:
		goto loc_826D5154;
	case 8:
		goto loc_826D5160;
	case 9:
		goto loc_826D516C;
	case 10:
		goto loc_826D5178;
	case 11:
		goto loc_826D5184;
	case 12:
		goto loc_826D5190;
	case 13:
		goto loc_826D51A0;
	case 14:
		goto loc_826D51D8;
	case 15:
		goto loc_826D51F0;
	case 16:
		goto loc_826D51A8;
	case 17:
		goto loc_826D51B4;
	case 18:
		goto loc_826D5474;
	case 19:
		goto loc_826D51E4;
	case 20:
		goto loc_826D51FC;
	case 21:
		goto loc_826D5208;
	case 22:
		goto loc_826D5218;
	case 23:
		goto loc_826D5220;
	case 24:
		goto loc_826D5228;
	case 25:
		goto loc_826D544C;
	case 26:
		goto loc_826D544C;
	case 27:
		goto loc_826D544C;
	case 28:
		goto loc_826D544C;
	case 29:
		goto loc_826D544C;
	case 30:
		goto loc_826D544C;
	case 31:
		goto loc_826D52E0;
	case 32:
		goto loc_826D5480;
	case 33:
		goto loc_826D548C;
	case 34:
		goto loc_826D5498;
	case 35:
		goto loc_826D54C4;
	case 36:
		goto loc_826D54D0;
	case 37:
		goto loc_826D5498;
	case 38:
		goto loc_826D544C;
	case 39:
		goto loc_826D544C;
	case 40:
		goto loc_826D544C;
	case 41:
		goto loc_826D544C;
	case 42:
		goto loc_826D544C;
	case 43:
		goto loc_826D544C;
	case 44:
		goto loc_826D544C;
	case 45:
		goto loc_826D544C;
	case 46:
		goto loc_826D5230;
	case 47:
		goto loc_826D543C;
	case 48:
		goto loc_826D5444;
	case 49:
		goto loc_826D55C8;
	case 50:
		goto loc_826D55C8;
	case 51:
		goto loc_826D55C8;
	case 52:
		goto loc_826D55C8;
	case 53:
		goto loc_826D55C8;
	case 54:
		goto loc_826D55C8;
	case 55:
		goto loc_826D55C8;
	case 56:
		goto loc_826D55C8;
	case 57:
		goto loc_826D55C8;
	case 58:
		goto loc_826D55C8;
	case 59:
		goto loc_826D55C8;
	case 60:
		goto loc_826D55C8;
	case 61:
		goto loc_826D55C8;
	case 62:
		goto loc_826D55C8;
	case 63:
		goto loc_826D55C8;
	case 64:
		goto loc_826D55C8;
	case 65:
		goto loc_826D55C8;
	case 66:
		goto loc_826D55C8;
	case 67:
		goto loc_826D55C8;
	case 68:
		goto loc_826D55C8;
	case 69:
		goto loc_826D55C8;
	case 70:
		goto loc_826D55C8;
	case 71:
		goto loc_826D55C8;
	case 72:
		goto loc_826D55C8;
	case 73:
		goto loc_826D55C8;
	case 74:
		goto loc_826D55C8;
	case 75:
		goto loc_826D55C8;
	case 76:
		goto loc_826D55C8;
	case 77:
		goto loc_826D55C8;
	case 78:
		goto loc_826D51C0;
	case 79:
		goto loc_826D51CC;
	case 80:
		goto loc_826D55C8;
	case 81:
		goto loc_826D5444;
	case 82:
		goto loc_826D55C8;
	case 83:
		goto loc_826D55C8;
	case 84:
		goto loc_826D55C8;
	case 85:
		goto loc_826D55C8;
	case 86:
		goto loc_826D55C8;
	case 87:
		goto loc_826D55C8;
	case 88:
		goto loc_826D55C8;
	case 89:
		goto loc_826D55C8;
	case 90:
		goto loc_826D55C8;
	case 91:
		goto loc_826D55C8;
	case 92:
		goto loc_826D55C8;
	case 93:
		goto loc_826D55C8;
	case 94:
		goto loc_826D5240;
	case 95:
		goto loc_826D52A8;
	case 96:
		goto loc_826D544C;
	default:
		__builtin_unreachable();
	}
loc_826D50BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// addi r11,r11,-768
	ctx.r11.s64 = ctx.r11.s64 + -768;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r31,r11,71
	ctx.r31.s64 = ctx.r11.s64 + 71;
loc_826D50E0:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rlwinm r11,r27,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x826d54e8
	if (!cr6.eq) goto loc_826D54E8;
	// cmplwi cr6,r17,768
	cr6.compare<uint32_t>(ctx.r17.u32, 768, ctx.xer);
	// blt cr6,0x826d54e8
	if (cr6.lt) goto loc_826D54E8;
	// lwz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x826d54ec
	goto loc_826D54EC;
loc_826D5118:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5124:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,91
	ctx.r31.s64 = 91;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5130:
	// li r30,3
	ctx.r30.s64 = 3;
	// li r31,64
	ctx.r31.s64 = 64;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D513C:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,73
	ctx.r31.s64 = 73;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5148:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,81
	ctx.r31.s64 = 81;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5154:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,85
	ctx.r31.s64 = 85;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5160:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D516C:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,35
	ctx.r31.s64 = 35;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5178:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,68
	ctx.r31.s64 = 68;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5184:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,65
	ctx.r31.s64 = 65;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5190:
	// lis r31,5
	ctx.r31.s64 = 327680;
loc_826D5194:
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r31,r31,86
	ctx.r31.u64 = ctx.r31.u64 | 86;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D51A0:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x826d5194
	goto loc_826D5194;
loc_826D51A8:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,57
	ctx.r31.s64 = 57;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D51B4:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,36
	ctx.r31.s64 = 36;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D51C0:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,46
	ctx.r31.s64 = 46;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D51CC:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,61
	ctx.r31.s64 = 61;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D51D8:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,45
	ctx.r31.s64 = 45;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D51E4:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,49
	ctx.r31.s64 = 49;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D51F0:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,60
	ctx.r31.s64 = 60;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D51FC:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,69
	ctx.r31.s64 = 69;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5208:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_826D520C:
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r31,r31,69
	ctx.r31.u64 = ctx.r31.u64 | 69;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5218:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x826d520c
	goto loc_826D520C;
loc_826D5220:
	// lis r31,3
	ctx.r31.s64 = 196608;
	// b 0x826d520c
	goto loc_826D520C;
loc_826D5228:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x826d520c
	goto loc_826D520C;
loc_826D5230:
	// lis r31,1
	ctx.r31.s64 = 65536;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r31,r31,72
	ctx.r31.u64 = ctx.r31.u64 | 72;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5240:
	// rlwinm r11,r4,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0x7;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826d5298
	if (cr6.eq) goto loc_826D5298;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x826d5290
	if (cr6.eq) goto loc_826D5290;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x826d5288
	if (cr6.eq) goto loc_826D5288;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x826d5280
	if (cr6.eq) goto loc_826D5280;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x826d5278
	if (cr6.eq) goto loc_826D5278;
	// lis r31,1
	ctx.r31.s64 = 65536;
	// b 0x826d529c
	goto loc_826D529C;
loc_826D5278:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x826d529c
	goto loc_826D529C;
loc_826D5280:
	// li r31,86
	ctx.r31.s64 = 86;
	// b 0x826d52a0
	goto loc_826D52A0;
loc_826D5288:
	// lis r31,5
	ctx.r31.s64 = 327680;
	// b 0x826d529c
	goto loc_826D529C;
loc_826D5290:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x826d529c
	goto loc_826D529C;
loc_826D5298:
	// lis r31,3
	ctx.r31.s64 = 196608;
loc_826D529C:
	// ori r31,r31,86
	ctx.r31.u64 = ctx.r31.u64 | 86;
loc_826D52A0:
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D52A8:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826d4cd0
	ctx.lr = 0x826D52D0;
	sub_826D4CD0(ctx, base);
loc_826D52D0:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x826d55c0
	goto loc_826D55C0;
loc_826D52E0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x826d543c
	if (cr6.eq) goto loc_826D543C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1536
	cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// bne cr6,0x826d53a0
	if (!cr6.eq) goto loc_826D53A0;
	// cmplwi cr6,r17,768
	cr6.compare<uint32_t>(ctx.r17.u32, 768, ctx.xer);
	// bge cr6,0x826d531c
	if (!cr6.lt) goto loc_826D531C;
	// bl 0x827a90b0
	ctx.lr = 0x826D531C;
	sub_827A90B0(ctx, base);
loc_826D531C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1536
	cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x826d5338
	if (cr6.eq) goto loc_826D5338;
	// bl 0x827a90b0
	ctx.lr = 0x826D5338;
	sub_827A90B0(ctx, base);
loc_826D5338:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r10,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r10,8,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwimi r11,r10,5,16,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0xFFE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFF001F);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwimi r10,r11,17,27,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// bl 0x826d39e0
	ctx.lr = 0x826D538C;
	sub_826D39E0(ctx, base);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// b 0x826d543c
	goto loc_826D543C;
loc_826D53A0:
	// cmplwi cr6,r17,768
	cr6.compare<uint32_t>(ctx.r17.u32, 768, ctx.xer);
	// bge cr6,0x826d53ac
	if (!cr6.lt) goto loc_826D53AC;
	// bl 0x827a90b0
	ctx.lr = 0x826D53AC;
	sub_827A90B0(ctx, base);
loc_826D53AC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,2560
	cr6.compare<uint32_t>(ctx.r11.u32, 2560, ctx.xer);
	// beq cr6,0x826d53c8
	if (cr6.eq) goto loc_826D53C8;
	// bl 0x827a90b0
	ctx.lr = 0x826D53C8;
	sub_827A90B0(ctx, base);
loc_826D53C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r11,r11,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x78000000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d540c
	if (cr6.eq) goto loc_826D540C;
	// lis r10,6144
	ctx.r10.s64 = 402653184;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d5404
	if (cr6.eq) goto loc_826D5404;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d53fc
	if (cr6.eq) goto loc_826D53FC;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x826d5410
	goto loc_826D5410;
loc_826D53FC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x826d5410
	goto loc_826D5410;
loc_826D5404:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x826d5410
	goto loc_826D5410;
loc_826D540C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_826D5410:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,24,5,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7000000;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r10,r10,16,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// ori r11,r11,25
	ctx.r11.u64 = ctx.r11.u64 | 25;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_826D543C:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// b 0x826d55c8
	goto loc_826D55C8;
loc_826D5444:
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// b 0x826d55c8
	goto loc_826D55C8;
loc_826D544C:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826d4020
	ctx.lr = 0x826D5470;
	sub_826D4020(ctx, base);
	// b 0x826d52d0
	goto loc_826D52D0;
loc_826D5474:
	// li r30,3
	ctx.r30.s64 = 3;
	// li r31,63
	ctx.r31.s64 = 63;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5480:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,78
	ctx.r31.s64 = 78;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D548C:
	// li r30,2
	ctx.r30.s64 = 2;
	// li r31,19
	ctx.r31.s64 = 19;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D5498:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826d49b0
	ctx.lr = 0x826D54C0;
	sub_826D49B0(ctx, base);
	// b 0x826d52d0
	goto loc_826D52D0;
loc_826D54C4:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D54D0:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,76
	ctx.r31.s64 = 76;
	// b 0x826d50e0
	goto loc_826D50E0;
loc_826D54DC:
	// rlwinm r11,r4,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x1FFFC;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x826d55c8
	goto loc_826D55C8;
loc_826D54E8:
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
loc_826D54EC:
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x826d5520
	if (cr6.eq) goto loc_826D5520;
	// li r11,33
	ctx.r11.s64 = 33;
	// lwz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r4,r11,0,19,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFE000);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwimi r4,r11,0,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x826d5524
	goto loc_826D5524;
loc_826D5520:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_826D5524:
	// bl 0x826d3578
	ctx.lr = 0x826D5528;
	sub_826D3578(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_826D5530:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x826d5598
	if (!cr6.lt) goto loc_826D5598;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r4,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x826d5560
	if (!cr6.eq) goto loc_826D5560;
	// cmplwi cr6,r17,512
	cr6.compare<uint32_t>(ctx.r17.u32, 512, ctx.xer);
	// blt cr6,0x826d5560
	if (cr6.lt) goto loc_826D5560;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x826d5564
	goto loc_826D5564;
loc_826D5560:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_826D5564:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826d3b10
	ctx.lr = 0x826D5588;
	sub_826D3B10(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x826d5530
	if (cr6.lt) goto loc_826D5530;
loc_826D5598:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x826d55c4
	if (cr6.eq) goto loc_826D55C4;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826d3f20
	ctx.lr = 0x826D55C0;
	sub_826D3F20(ctx, base);
loc_826D55C0:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_826D55C4:
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_826D55C8:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// bne cr6,0x826d5064
	if (!cr6.eq) goto loc_826D5064;
loc_826D55D4:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x826d569c
	if (!cr6.lt) goto loc_826D569C;
	// cmplwi cr6,r17,768
	cr6.compare<uint32_t>(ctx.r17.u32, 768, ctx.xer);
	// bge cr6,0x826d5640
	if (!cr6.lt) goto loc_826D5640;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwinm. r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// beq 0x826d5638
	if (cr0.eq) goto loc_826D5638;
	// li r9,71
	ctx.r9.s64 = 71;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
	// lis r8,77
	ctx.r8.s64 = 5046272;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r7,r10,50
	ctx.r7.u64 = ctx.r10.u64 | 50;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_826D5638:
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_826D5640:
	// li r11,40
	ctx.r11.s64 = 40;
	// addic. r31,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r31.s64 = ctx.r28.s64 + 1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// bne 0x826d5658
	if (!cr0.eq) goto loc_826D5658;
	// bl 0x827a90b0
	ctx.lr = 0x826D5658;
	sub_827A90B0(ctx, base);
loc_826D5658:
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// subf r11,r14,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r14.s64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d5674
	if (cr6.eq) goto loc_826D5674;
	// bl 0x827a90b0
	ctx.lr = 0x826D5674;
	sub_827A90B0(ctx, base);
loc_826D5674:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_826D5694:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_826D569C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2921
	ctx.r3.u64 = ctx.r3.u64 | 2921;
	// b 0x826d5694
	goto loc_826D5694;
}

__attribute__((alias("__imp__sub_826D56A8"))) PPC_WEAK_FUNC(sub_826D56A8);
PPC_FUNC_IMPL(__imp__sub_826D56A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1092(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826d56d8
	if (cr6.eq) goto loc_826D56D8;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828d2890
	ctx.lr = 0x826D56D4;
	sub_828D2890(ctx, base);
	// b 0x826d5b48
	goto loc_826D5B48;
loc_826D56D8:
	// lwz r10,1084(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1084);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,27040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27040);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,1080(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,1088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,26056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r10,1060(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// lwz r9,1068(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f12,-9444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9444);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfs f11,26556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26556);
	ctx.f11.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x826d5788
	if (cr6.gt) goto loc_826D5788;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_826D5788:
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r10,1056(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
	// lwz r9,1064(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x826d57c8
	if (cr6.gt) goto loc_826D57C8;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_826D57C8:
	// stfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,1076(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1076);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfs f9,26064(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26064);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r10,1072(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1072);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r10,1052(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826d5824
	if (cr6.eq) goto loc_826D5824;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,2548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2548);
	ctx.f10.f64 = double(temp.f32);
	// b 0x826d5894
	goto loc_826D5894;
loc_826D5824:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// bne cr6,0x826d5870
	if (!cr6.eq) goto loc_826D5870;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f8,-9440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9440);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// bgt cr6,0x826d5880
	if (cr6.gt) goto loc_826D5880;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfs f10,25704(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25704);
	ctx.f10.f64 = double(temp.f32);
	// b 0x826d5894
	goto loc_826D5894;
loc_826D5870:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfs f8,10812(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10812);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x826d588c
	if (!cr6.gt) goto loc_826D588C;
loc_826D5880:
	// fmuls f13,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x826d5898
	goto loc_826D5898;
loc_826D588C:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfs f10,25148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25148);
	ctx.f10.f64 = double(temp.f32);
loc_826D5894:
	// stfs f10,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_826D5898:
	// lfs f8,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x826d58b0
	if (!cr6.gt) goto loc_826D58B0;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x826d58b4
	goto loc_826D58B4;
loc_826D58B0:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_826D58B4:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x826d58c4
	if (!cr6.gt) goto loc_826D58C4;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x826d58d8
	goto loc_826D58D8;
loc_826D58C4:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x826d58d4
	if (!cr6.gt) goto loc_826D58D4;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x826d58d8
	goto loc_826D58D8;
loc_826D58D4:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_826D58D8:
	// lfs f6,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f10
	cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// ble cr6,0x826d58ec
	if (!cr6.gt) goto loc_826D58EC;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// b 0x826d5924
	goto loc_826D5924;
loc_826D58EC:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x826d58fc
	if (!cr6.gt) goto loc_826D58FC;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x826d5900
	goto loc_826D5900;
loc_826D58FC:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_826D5900:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x826d5910
	if (!cr6.gt) goto loc_826D5910;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x826d5924
	goto loc_826D5924;
loc_826D5910:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x826d5920
	if (!cr6.gt) goto loc_826D5920;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x826d5924
	goto loc_826D5924;
loc_826D5920:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_826D5924:
	// lfs f9,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f10
	cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x826d5938
	if (!cr6.gt) goto loc_826D5938;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x826d59b0
	goto loc_826D59B0;
loc_826D5938:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x826d5948
	if (!cr6.gt) goto loc_826D5948;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x826d594c
	goto loc_826D594C;
loc_826D5948:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_826D594C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x826d595c
	if (!cr6.gt) goto loc_826D595C;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x826d5970
	goto loc_826D5970;
loc_826D595C:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x826d596c
	if (!cr6.gt) goto loc_826D596C;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x826d5970
	goto loc_826D5970;
loc_826D596C:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_826D5970:
	// fcmpu cr6,f6,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// ble cr6,0x826d5980
	if (!cr6.gt) goto loc_826D5980;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// b 0x826d59b0
	goto loc_826D59B0;
loc_826D5980:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x826d5990
	if (!cr6.gt) goto loc_826D5990;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x826d5994
	goto loc_826D5994;
loc_826D5990:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_826D5994:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x826d59b0
	if (cr6.gt) goto loc_826D59B0;
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x826d59ac
	if (!cr6.gt) goto loc_826D59AC;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
	// b 0x826d59b0
	goto loc_826D59B0;
loc_826D59AC:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_826D59B0:
	// lfs f10,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fcmpu cr6,f10,f7
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x826d59c8
	if (!cr6.gt) goto loc_826D59C8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x826d59cc
	goto loc_826D59CC;
loc_826D59C8:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_826D59CC:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x826d59dc
	if (!cr6.gt) goto loc_826D59DC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x826d59f0
	goto loc_826D59F0;
loc_826D59DC:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x826d59ec
	if (!cr6.gt) goto loc_826D59EC;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x826d59f0
	goto loc_826D59F0;
loc_826D59EC:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_826D59F0:
	// fcmpu cr6,f6,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x826d5a00
	if (!cr6.gt) goto loc_826D5A00;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// b 0x826d5a38
	goto loc_826D5A38;
loc_826D5A00:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x826d5a10
	if (!cr6.gt) goto loc_826D5A10;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x826d5a14
	goto loc_826D5A14;
loc_826D5A10:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_826D5A14:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x826d5a24
	if (!cr6.gt) goto loc_826D5A24;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x826d5a38
	goto loc_826D5A38;
loc_826D5A24:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x826d5a34
	if (!cr6.gt) goto loc_826D5A34;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x826d5a38
	goto loc_826D5A38;
loc_826D5A34:
	// fmr f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f7.f64;
loc_826D5A38:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x826d5ac4
	if (cr6.gt) goto loc_826D5AC4;
	// fcmpu cr6,f10,f7
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x826d5a54
	if (!cr6.gt) goto loc_826D5A54;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x826d5a58
	goto loc_826D5A58;
loc_826D5A54:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_826D5A58:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x826d5a68
	if (!cr6.gt) goto loc_826D5A68;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x826d5a7c
	goto loc_826D5A7C;
loc_826D5A68:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x826d5a78
	if (!cr6.gt) goto loc_826D5A78;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x826d5a7c
	goto loc_826D5A7C;
loc_826D5A78:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_826D5A7C:
	// fcmpu cr6,f6,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x826d5a8c
	if (!cr6.gt) goto loc_826D5A8C;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// b 0x826d5ac4
	goto loc_826D5AC4;
loc_826D5A8C:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x826d5a9c
	if (!cr6.gt) goto loc_826D5A9C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x826d5aa0
	goto loc_826D5AA0;
loc_826D5A9C:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_826D5AA0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x826d5ab0
	if (!cr6.gt) goto loc_826D5AB0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x826d5ac4
	goto loc_826D5AC4;
loc_826D5AB0:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x826d5ac0
	if (!cr6.gt) goto loc_826D5AC0;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x826d5ac4
	goto loc_826D5AC4;
loc_826D5AC0:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_826D5AC4:
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// stfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826d5af8
	if (!cr6.lt) goto loc_826D5AF8;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lfs f0,25360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25360);
	ctx.f0.f64 = double(temp.f32);
loc_826D5AE0:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826d5ae0
	if (cr6.lt) goto loc_826D5AE0;
loc_826D5AF8:
	// lwz r10,1036(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1036);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r10,1028(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1028);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r10,1032(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r10,1040(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,1044(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r10,1048(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r10,1052(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x826d5b40
	if (cr6.eq) goto loc_826D5B40;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// b 0x826d5b44
	goto loc_826D5B44;
loc_826D5B40:
	// rlwinm r10,r10,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
loc_826D5B44:
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_826D5B48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D5B58"))) PPC_WEAK_FUNC(sub_826D5B58);
PPC_FUNC_IMPL(__imp__sub_826D5B58) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826d5c10
	if (!cr6.eq) goto loc_826D5C10;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x826d5bb8
	if (cr6.lt) goto loc_826D5BB8;
	// beq cr6,0x826d5c10
	if (cr6.eq) goto loc_826D5C10;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x826d5b80
	if (cr6.lt) goto loc_826D5B80;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_826D5B80:
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r6,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 + 12;
	// addi r11,r11,244
	ctx.r11.s64 = ctx.r11.s64 + 244;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u32);
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x826d5c10
	goto loc_826D5C10;
loc_826D5BB8:
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// andc r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// stwx r6,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_826D5C10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D5C18"))) PPC_WEAK_FUNC(sub_826D5C18);
PPC_FUNC_IMPL(__imp__sub_826D5C18) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826d5cfc
	if (cr6.eq) goto loc_826D5CFC;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x826d5c90
	if (cr6.lt) goto loc_826D5C90;
	// bne cr6,0x826d5cfc
	if (!cr6.eq) goto loc_826D5CFC;
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 + 12;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// slw r9,r6,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r10,244
	ctx.r7.s64 = ctx.r10.s64 + 244;
	// addi r10,r10,254
	ctx.r10.s64 = ctx.r10.s64 + 254;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lwzx r11,r7,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x826d5cf8
	goto loc_826D5CF8;
loc_826D5C90:
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// slw r9,r11,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,236
	ctx.r6.s64 = ctx.r10.s64 + 236;
	// addi r10,r10,246
	ctx.r10.s64 = ctx.r10.s64 + 246;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// andc r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ~ctx.r9.u64;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stwx r11,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_826D5CF8:
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_826D5CFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D5D04"))) PPC_WEAK_FUNC(sub_826D5D04);
PPC_FUNC_IMPL(__imp__sub_826D5D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D5D08"))) PPC_WEAK_FUNC(sub_826D5D08);
PPC_FUNC_IMPL(__imp__sub_826D5D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d5f9c
	if (cr0.eq) goto loc_826D5F9C;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d5e54
	if (!cr0.eq) goto loc_826D5E54;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r10,0,10,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F0000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d5de0
	if (!cr0.eq) goto loc_826D5DE0;
	// lwz r11,1020(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1020);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d5de0
	if (cr0.eq) goto loc_826D5DE0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d60b0
	if (cr6.eq) goto loc_826D60B0;
	// lwz r9,1024(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1024);
	// li r31,1
	ctx.r31.s64 = 1;
loc_826D5D54:
	// stw r31,1048(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1048, ctx.r31.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r11,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x826d5d70
	if (!cr6.eq) goto loc_826D5D70;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_826D5D70:
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826d5dac
	if (cr6.eq) goto loc_826D5DAC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x826d5d90
	if (cr6.eq) goto loc_826D5D90;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x826d5d94
	if (!cr6.eq) goto loc_826D5D94;
loc_826D5D90:
	// li r7,0
	ctx.r7.s64 = 0;
loc_826D5D94:
	// lwz r11,1020(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1020);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d5d54
	if (cr6.lt) goto loc_826D5D54;
	// b 0x826d60b0
	goto loc_826D60B0;
loc_826D5DAC:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826d5dbc
	if (cr6.eq) goto loc_826D5DBC;
	// clrlwi. r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d60b0
	if (!cr0.eq) goto loc_826D60B0;
loc_826D5DBC:
	// rlwinm. r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d5dd0
	if (!cr0.eq) goto loc_826D5DD0;
	// lwz r11,1060(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1060);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1060(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1060, ctx.r11.u32);
loc_826D5DD0:
	// lwz r11,1056(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1056(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1056, ctx.r11.u32);
	// b 0x826d60b0
	goto loc_826D60B0;
loc_826D5DE0:
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d5e08
	if (!cr0.eq) goto loc_826D5E08;
	// rlwinm. r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d5dfc
	if (!cr0.eq) goto loc_826D5DFC;
	// lwz r11,1060(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1060);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1060(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1060, ctx.r11.u32);
loc_826D5DFC:
	// lwz r11,1056(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1056(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1056, ctx.r11.u32);
loc_826D5E08:
	// rlwinm. r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-8704
	ctx.r11.s64 = ctx.r11.s64 + -8704;
	// bne 0x826d5e34
	if (!cr0.eq) goto loc_826D5E34;
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// lwz r9,1068(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1068);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,1068(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1068, ctx.r10.u32);
loc_826D5E34:
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,1064(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1064);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1064(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1064, ctx.r11.u32);
	// b 0x826d60b0
	goto loc_826D60B0;
loc_826D5E54:
	// rlwinm r11,r11,12,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// lwz r10,980(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 980);
	// li r31,1
	ctx.r31.s64 = 1;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,180(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 180);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// beq cr6,0x826d5f74
	if (cr6.eq) goto loc_826D5F74;
	// cmplwi cr6,r4,63
	cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// bgt cr6,0x826d5ec8
	if (cr6.gt) goto loc_826D5EC8;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,10016
	ctx.r12.s64 = ctx.r12.s64 + 10016;
	// lbzx r0,r12,r4
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// lis r12,-32147
	ctx.r12.s64 = -2106785792;
	// addi r12,r12,24236
	ctx.r12.s64 = ctx.r12.s64 + 24236;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_826D5EAC;
	case 1:
		goto loc_826D5EAC;
	case 2:
		goto loc_826D5EAC;
	case 3:
		goto loc_826D5EAC;
	case 4:
		goto loc_826D5EAC;
	case 5:
		goto loc_826D5EAC;
	case 6:
		goto loc_826D5EAC;
	case 7:
		goto loc_826D5EAC;
	case 8:
		goto loc_826D5EAC;
	case 9:
		goto loc_826D5EAC;
	case 10:
		goto loc_826D5EAC;
	case 11:
		goto loc_826D5EAC;
	case 12:
		goto loc_826D5EAC;
	case 13:
		goto loc_826D5EAC;
	case 14:
		goto loc_826D5EAC;
	case 15:
		goto loc_826D5EAC;
	case 16:
		goto loc_826D5EAC;
	case 17:
		goto loc_826D5EAC;
	case 18:
		goto loc_826D5EAC;
	case 19:
		goto loc_826D5EAC;
	case 20:
		goto loc_826D5EAC;
	case 21:
		goto loc_826D5EB4;
	case 22:
		goto loc_826D5EAC;
	case 23:
		goto loc_826D5EAC;
	case 24:
		goto loc_826D5EAC;
	case 25:
		goto loc_826D5EAC;
	case 26:
		goto loc_826D5EB4;
	case 27:
		goto loc_826D5EAC;
	case 28:
		goto loc_826D5EB4;
	case 29:
		goto loc_826D5EC4;
	case 30:
		goto loc_826D5EAC;
	case 31:
		goto loc_826D5EAC;
	case 32:
		goto loc_826D5EB4;
	case 33:
		goto loc_826D5EAC;
	case 34:
		goto loc_826D5EB4;
	case 35:
		goto loc_826D5EC4;
	case 36:
		goto loc_826D5EAC;
	case 37:
		goto loc_826D5EB4;
	case 38:
		goto loc_826D5EC4;
	case 39:
		goto loc_826D5EAC;
	case 40:
		goto loc_826D5EAC;
	case 41:
		goto loc_826D5EAC;
	case 42:
		goto loc_826D5EAC;
	case 43:
		goto loc_826D5EAC;
	case 44:
		goto loc_826D5EAC;
	case 45:
		goto loc_826D5EAC;
	case 46:
		goto loc_826D5EAC;
	case 47:
		goto loc_826D5EAC;
	case 48:
		goto loc_826D5EAC;
	case 49:
		goto loc_826D5EAC;
	case 50:
		goto loc_826D5EB4;
	case 51:
		goto loc_826D5EB4;
	case 52:
		goto loc_826D5EB4;
	case 53:
		goto loc_826D5EB4;
	case 54:
		goto loc_826D5EB4;
	case 55:
		goto loc_826D5EB4;
	case 56:
		goto loc_826D5EB4;
	case 57:
		goto loc_826D5EBC;
	case 58:
		goto loc_826D5EAC;
	case 59:
		goto loc_826D5EAC;
	case 60:
		goto loc_826D5EAC;
	case 61:
		goto loc_826D5EAC;
	case 62:
		goto loc_826D5EAC;
	case 63:
		goto loc_826D5EAC;
	default:
		__builtin_unreachable();
	}
loc_826D5EAC:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// b 0x826d5ec8
	goto loc_826D5EC8;
loc_826D5EB4:
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x826d5ec8
	goto loc_826D5EC8;
loc_826D5EBC:
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x826d5ec8
	goto loc_826D5EC8;
loc_826D5EC4:
	// li r9,4
	ctx.r9.s64 = 4;
loc_826D5EC8:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r8,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x826d5ee0
	if (!cr6.eq) goto loc_826D5EE0;
	// lwz r11,188(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r10,r11,11,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x3;
loc_826D5EE0:
	// rlwinm r11,r8,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d5ef4
	if (!cr6.eq) goto loc_826D5EF4;
	// lwz r11,188(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,11,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x3;
loc_826D5EF4:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826d5f10
	if (!cr6.eq) goto loc_826D5F10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d5f10
	if (!cr6.eq) goto loc_826D5F10;
	// cmplwi cr6,r4,38
	cr6.compare<uint32_t>(ctx.r4.u32, 38, ctx.xer);
	// bne cr6,0x826d5f10
	if (!cr6.eq) goto loc_826D5F10;
	// li r9,2
	ctx.r9.s64 = 2;
loc_826D5F10:
	// rlwinm r11,r8,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x826d5f24
	if (!cr6.eq) goto loc_826D5F24;
	// lwz r11,188(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
loc_826D5F24:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d5f3c
	if (cr6.eq) goto loc_826D5F3C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
loc_826D5F3C:
	// rlwinm r11,r8,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d5f50
	if (!cr6.eq) goto loc_826D5F50;
	// lwz r11,188(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,9,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
loc_826D5F50:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826d5f78
	if (!cr6.eq) goto loc_826D5F78;
	// lwz r11,192(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d5f78
	if (cr0.eq) goto loc_826D5F78;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x826d5f78
	goto loc_826D5F78;
loc_826D5F74:
	// stw r31,1044(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1044, ctx.r31.u32);
loc_826D5F78:
	// rlwinm. r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d5f8c
	if (!cr0.eq) goto loc_826D5F8C;
	// lwz r11,1076(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1076);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,1076(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1076, ctx.r11.u32);
loc_826D5F8C:
	// lwz r11,1072(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1072);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,1072(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1072, ctx.r11.u32);
	// b 0x826d60b0
	goto loc_826D60B0;
loc_826D5F9C:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d5fc8
	if (cr0.eq) goto loc_826D5FC8;
	// rlwinm. r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d5fb8
	if (!cr0.eq) goto loc_826D5FB8;
	// lwz r11,1084(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1084);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1084(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1084, ctx.r11.u32);
loc_826D5FB8:
	// lwz r11,1080(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1080);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1080(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1080, ctx.r11.u32);
	// b 0x826d60b0
	goto loc_826D60B0;
loc_826D5FC8:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d60b0
	if (cr0.eq) goto loc_826D60B0;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x826d60d4
	if (cr6.eq) goto loc_826D60D4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x826d60d4
	if (cr6.eq) goto loc_826D60D4;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x826d60e4
	if (cr6.eq) goto loc_826D60E4;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x826d60d4
	if (cr6.eq) goto loc_826D60D4;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x826d60d4
	if (cr6.eq) goto loc_826D60D4;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x826d60d4
	if (cr6.eq) goto loc_826D60D4;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x826d601c
	if (cr6.eq) goto loc_826D601C;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x826d6054
	if (!cr6.eq) goto loc_826D6054;
loc_826D601C:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,976(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 976);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d6038
	if (!cr0.eq) goto loc_826D6038;
	// stw r31,1028(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1028, ctx.r31.u32);
loc_826D6038:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,1016(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1016);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6054
	if (cr0.eq) goto loc_826D6054;
	// stw r31,1032(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1032, ctx.r31.u32);
loc_826D6054:
	// lwz r11,1088(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1088);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826D605C:
	// stw r11,1088(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1088, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x826d6078
	if (cr6.eq) goto loc_826D6078;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x826d6090
	if (!cr6.eq) goto loc_826D6090;
loc_826D6078:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d6090
	if (!cr0.eq) goto loc_826D6090;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6090
	if (cr0.eq) goto loc_826D6090;
	// stw r31,1036(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1036, ctx.r31.u32);
loc_826D6090:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x826d60b0
	if (!cr6.eq) goto loc_826D60B0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d60b0
	if (cr0.eq) goto loc_826D60B0;
	// stw r31,1040(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1040, ctx.r31.u32);
loc_826D60B0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,1088(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1088);
	// ori r10,r10,34464
	ctx.r10.u64 = ctx.r10.u64 | 34464;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r11,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r3,r3,0,27,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_826D60D4:
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x826d60e4
	if (cr6.eq) goto loc_826D60E4;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x826d60f8
	if (!cr6.eq) goto loc_826D60F8;
loc_826D60E4:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d6054
	if (!cr0.eq) goto loc_826D6054;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d6054
	if (!cr0.eq) goto loc_826D6054;
loc_826D60F8:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r11,30,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1F;
	// rlwinm r11,r11,25,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d6120
	if (!cr0.eq) goto loc_826D6120;
	// stw r31,1028(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1028, ctx.r31.u32);
loc_826D6120:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r11,30,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1F;
	// rlwinm r11,r11,25,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7;
	// addi r11,r11,246
	ctx.r11.s64 = ctx.r11.s64 + 246;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6148
	if (cr0.eq) goto loc_826D6148;
	// stw r31,1032(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1032, ctx.r31.u32);
loc_826D6148:
	// lwz r11,1088(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1088);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x826d605c
	goto loc_826D605C;
}

__attribute__((alias("__imp__sub_826D6154"))) PPC_WEAK_FUNC(sub_826D6154);
PPC_FUNC_IMPL(__imp__sub_826D6154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6158"))) PPC_WEAK_FUNC(sub_826D6158);
PPC_FUNC_IMPL(__imp__sub_826D6158) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r10,r11,23816
	ctx.r10.s64 = ctx.r11.s64 + 23816;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82227d68
	ctx.lr = 0x826D6198;
	sub_82227D68(ctx, base);
	// li r11,-1000
	ctx.r11.s64 = -1000;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826D61C0"))) PPC_WEAK_FUNC(sub_826D61C0);
PPC_FUNC_IMPL(__imp__sub_826D61C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x826D61C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// bl 0x822226c0
	ctx.lr = 0x826D61E4;
	sub_822226C0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d620c
	if (cr6.eq) goto loc_826D620C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x826d620c
	if (cr0.eq) goto loc_826D620C;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d620c
	if (cr0.eq) goto loc_826D620C;
	// addic. r21,r10,4
	ctx.xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r21.s64 = ctx.r10.s64 + 4;
	cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x826d6214
	if (!cr0.eq) goto loc_826D6214;
loc_826D620C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826d6384
	goto loc_826D6384;
loc_826D6214:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r17,12(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// clrlwi r18,r10,31
	ctx.r18.u64 = ctx.r10.u32 & 0x1;
	// add r28,r11,r21
	ctx.r28.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmplwi r17,0
	cr0.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq 0x826d6380
	if (cr0.eq) goto loc_826D6380;
loc_826D6238:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lhz r27,4(r28)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// add r19,r11,r21
	ctx.r19.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lhz r10,6(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// bne cr6,0x826d627c
	if (!cr6.eq) goto loc_826D627C;
	// rlwinm. r9,r31,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826d627c
	if (cr0.eq) goto loc_826D627C;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x826d626c
	if (!cr6.eq) goto loc_826D626C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// xori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 ^ 128;
loc_826D626C:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x826d627c
	if (!cr6.eq) goto loc_826D627C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// xori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 ^ 16;
loc_826D627C:
	// clrlwi r9,r31,31
	ctx.r9.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x826d6348
	if (cr6.lt) goto loc_826D6348;
	// bne cr6,0x826d6370
	if (!cr6.eq) goto loc_826D6370;
	// clrlwi. r22,r11,16
	ctx.r22.u64 = ctx.r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r24,16(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subfic r11,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r27.s64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// beq 0x826d6370
	if (cr0.eq) goto loc_826D6370;
	// add r25,r24,r21
	ctx.r25.u64 = ctx.r24.u64 + ctx.r21.u64;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// rlwinm r23,r29,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_826D62CC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x826d6308
	if (cr6.eq) goto loc_826D6308;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x826d6300
	if (!cr6.gt) goto loc_826D6300;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r25
	ctx.r10.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826D62E8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x826d62e8
	if (!cr0.eq) goto loc_826D62E8;
loc_826D6300:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// b 0x826d630c
	goto loc_826D630C;
loc_826D6308:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_826D630C:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mtctr r14
	ctr.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x826D6328;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826d6384
	if (cr0.lt) goto loc_826D6384;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r23,r31
	ctx.r31.u64 = ctx.r23.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x826d62cc
	if (cr6.lt) goto loc_826D62CC;
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// b 0x826d6370
	goto loc_826D6370;
loc_826D6348:
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mtctr r14
	ctr.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x826D6368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826d6384
	if (cr0.lt) goto loc_826D6384;
loc_826D6370:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplw cr6,r16,r17
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x826d6238
	if (cr6.lt) goto loc_826D6238;
loc_826D6380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D6384:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D638C"))) PPC_WEAK_FUNC(sub_826D638C);
PPC_FUNC_IMPL(__imp__sub_826D638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6390"))) PPC_WEAK_FUNC(sub_826D6390);
PPC_FUNC_IMPL(__imp__sub_826D6390) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x826D6398;
	__savegprlr_23(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x822226c0
	ctx.lr = 0x826D63B0;
	sub_822226C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi. r24,r11,31
	ctx.r24.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq 0x826d63e8
	if (cr0.eq) goto loc_826D63E8;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r26,28(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_826D63E8:
	// li r5,1096
	ctx.r5.s64 = 1096;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828d2890
	ctx.lr = 0x826D6408;
	sub_828D2890(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r24,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r24.u32);
	// addi r5,r11,23384
	ctx.r5.s64 = ctx.r11.s64 + 23384;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r26,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, ctx.r26.u32);
	// stw r25,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r25.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82228168
	ctx.lr = 0x826D6440;
	sub_82228168(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r6,r11,23576
	ctx.r6.s64 = ctx.r11.s64 + 23576;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d61c0
	ctx.lr = 0x826D6458;
	sub_826D61C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826d6158
	ctx.lr = 0x826D6460;
	sub_826D6158(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826d56a8
	ctx.lr = 0x826D646C;
	sub_826D56A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D6478"))) PPC_WEAK_FUNC(sub_826D6478);
PPC_FUNC_IMPL(__imp__sub_826D6478) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d648c
	if (!cr0.eq) goto loc_826D648C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826D648C:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x826d64ac
	if (cr6.eq) goto loc_826D64AC;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// beq cr6,0x826d64ac
	if (cr6.eq) goto loc_826D64AC;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x826d64b0
	if (!cr6.eq) goto loc_826D64B0;
loc_826D64AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826D64B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D64B8"))) PPC_WEAK_FUNC(sub_826D64B8);
PPC_FUNC_IMPL(__imp__sub_826D64B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x826d64d4
	if (cr6.lt) goto loc_826D64D4;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x826d64d8
	if (!cr6.gt) goto loc_826D64D8;
loc_826D64D4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826D64D8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d64f8
	if (!cr0.eq) goto loc_826D64F8;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// blt cr6,0x826d64f0
	if (cr6.lt) goto loc_826D64F0;
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// ble cr6,0x826d64f8
	if (!cr6.gt) goto loc_826D64F8;
loc_826D64F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826d64fc
	goto loc_826D64FC;
loc_826D64F8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826D64FC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6504"))) PPC_WEAK_FUNC(sub_826D6504);
PPC_FUNC_IMPL(__imp__sub_826D6504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6508"))) PPC_WEAK_FUNC(sub_826D6508);
PPC_FUNC_IMPL(__imp__sub_826D6508) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x826d6544
	if (cr6.eq) goto loc_826D6544;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x826d6544
	if (cr6.eq) goto loc_826D6544;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x826d6544
	if (cr6.eq) goto loc_826D6544;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x826d6544
	if (cr6.eq) goto loc_826D6544;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x826d6544
	if (cr6.eq) goto loc_826D6544;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x826d6548
	if (!cr6.eq) goto loc_826D6548;
loc_826D6544:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826D6548:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6550"))) PPC_WEAK_FUNC(sub_826D6550);
PPC_FUNC_IMPL(__imp__sub_826D6550) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r9,r11,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r8,r11,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D656C:
	// srw r6,r8,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// blt cr6,0x826d656c
	if (cr6.lt) goto loc_826D656C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6594"))) PPC_WEAK_FUNC(sub_826D6594);
PPC_FUNC_IMPL(__imp__sub_826D6594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6598"))) PPC_WEAK_FUNC(sub_826D6598);
PPC_FUNC_IMPL(__imp__sub_826D6598) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d6604
	if (!cr6.eq) goto loc_826D6604;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826d6604
	if (!cr0.eq) goto loc_826D6604;
	// rlwinm r9,r11,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r8,r10,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826d6604
	if (!cr6.eq) goto loc_826D6604;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r6,r10,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6608
	if (cr0.eq) goto loc_826D6608;
loc_826D6604:
	// li r8,0
	ctx.r8.s64 = 0;
loc_826D6608:
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6610"))) PPC_WEAK_FUNC(sub_826D6610);
PPC_FUNC_IMPL(__imp__sub_826D6610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// addi r11,r4,-84
	ctx.r11.s64 = ctx.r4.s64 + -84;
	// addi r10,r5,9
	ctx.r10.s64 = ctx.r5.s64 + 9;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,10080
	ctx.r12.s64 = ctx.r12.s64 + 10080;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32147
	ctx.r12.s64 = -2106785792;
	// addi r12,r12,26188
	ctx.r12.s64 = ctx.r12.s64 + 26188;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826D6668;
	case 1:
		goto loc_826D6670;
	case 2:
		goto loc_826D6678;
	case 3:
		goto loc_826D6678;
	case 4:
		goto loc_826D667C;
	case 5:
		goto loc_826D6678;
	case 6:
		goto loc_826D6678;
	case 7:
		goto loc_826D667C;
	case 8:
		goto loc_826D667C;
	case 9:
		goto loc_826D667C;
	case 10:
		goto loc_826D6660;
	case 11:
		goto loc_826D667C;
	case 12:
		goto loc_826D6658;
	case 13:
		goto loc_826D6658;
	case 14:
		goto loc_826D667C;
	case 15:
		goto loc_826D6658;
	case 16:
		goto loc_826D6658;
	case 17:
		goto loc_826D667C;
	case 18:
		goto loc_826D667C;
	case 19:
		goto loc_826D6678;
	case 20:
		goto loc_826D667C;
	case 21:
		goto loc_826D667C;
	case 22:
		goto loc_826D667C;
	case 23:
		goto loc_826D6678;
	case 24:
		goto loc_826D667C;
	case 25:
		goto loc_826D667C;
	case 26:
		goto loc_826D667C;
	case 27:
		goto loc_826D6660;
	case 28:
		goto loc_826D6678;
	case 29:
		goto loc_826D667C;
	case 30:
		goto loc_826D6670;
	case 31:
		goto loc_826D667C;
	case 32:
		goto loc_826D667C;
	case 33:
		goto loc_826D667C;
	case 34:
		goto loc_826D667C;
	case 35:
		goto loc_826D6678;
	case 36:
		goto loc_826D664C;
	default:
		__builtin_unreachable();
	}
loc_826D664C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_826D6658:
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
loc_826D6660:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
loc_826D6668:
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// blr 
	return;
loc_826D6670:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
loc_826D6678:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_826D667C:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6680"))) PPC_WEAK_FUNC(sub_826D6680);
PPC_FUNC_IMPL(__imp__sub_826D6680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,21192
	ctx.r3.s64 = ctx.r11.s64 + 21192;
	// bl 0x828d5ce8
	ctx.lr = 0x826D6698;
	sub_828D5CE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D66AC"))) PPC_WEAK_FUNC(sub_826D66AC);
PPC_FUNC_IMPL(__imp__sub_826D66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D66B0"))) PPC_WEAK_FUNC(sub_826D66B0);
PPC_FUNC_IMPL(__imp__sub_826D66B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_826D66D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beqlr 
	if (cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826d66d0
	if (cr6.eq) goto loc_826D66D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D66F8"))) PPC_WEAK_FUNC(sub_826D66F8);
PPC_FUNC_IMPL(__imp__sub_826D66F8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82790788
	ctx.lr = 0x826D6718;
	sub_82790788(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d6744
	if (cr0.eq) goto loc_826D6744;
	// bl 0x8262c680
	ctx.lr = 0x826D6724;
	sub_8262C680(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6744
	if (cr0.eq) goto loc_826D6744;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x826d6748
	goto loc_826D6748;
loc_826D6744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D6748:
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

__attribute__((alias("__imp__sub_826D6760"))) PPC_WEAK_FUNC(sub_826D6760);
PPC_FUNC_IMPL(__imp__sub_826D6760) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826d67a0
	if (cr6.eq) goto loc_826D67A0;
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d67a0
	if (cr6.eq) goto loc_826D67A0;
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d6798
	if (cr0.eq) goto loc_826D6798;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826d6798
	if (!cr6.lt) goto loc_826D6798;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_826D6798:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x826c4438
	sub_826C4438(ctx, base);
	return;
loc_826D67A0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D67A8"))) PPC_WEAK_FUNC(sub_826D67A8);
PPC_FUNC_IMPL(__imp__sub_826D67A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x826d67e0
	if (!cr6.eq) goto loc_826D67E0;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d67e0
	if (cr0.eq) goto loc_826D67E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,26,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x826d67e0
	if (cr6.eq) goto loc_826D67E0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x826d67e4
	if (!cr6.eq) goto loc_826D67E4;
loc_826D67E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D67E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D67EC"))) PPC_WEAK_FUNC(sub_826D67EC);
PPC_FUNC_IMPL(__imp__sub_826D67EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D67F0"))) PPC_WEAK_FUNC(sub_826D67F0);
PPC_FUNC_IMPL(__imp__sub_826D67F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x826D67F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// b 0x826d6828
	goto loc_826D6828;
loc_826D680C:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x826d68ac
	if (!cr0.eq) goto loc_826D68AC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_826D6828:
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// ble cr6,0x826d680c
	if (!cr6.gt) goto loc_826D680C;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic. r10,r10,4096
	ctx.xer.ca = ctx.r10.u32 > 4294963199;
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d685c
	if (cr0.eq) goto loc_826D685C;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
loc_826D685C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bne 0x826d6894
	if (!cr0.eq) goto loc_826D6894;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4580
	ctx.lr = 0x826D6878;
	sub_826C4580(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d688c
	if (cr0.eq) goto loc_826D688C;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_826D688C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_826D6894:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_826D68A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_826D68AC:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// ble cr6,0x826d68e0
	if (!cr6.gt) goto loc_826D68E0;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
loc_826D68E0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d2890
	ctx.lr = 0x826D68F0;
	sub_828D2890(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826d68a4
	goto loc_826D68A4;
}

__attribute__((alias("__imp__sub_826D68F8"))) PPC_WEAK_FUNC(sub_826D68F8);
PPC_FUNC_IMPL(__imp__sub_826D68F8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826D6924;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
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

__attribute__((alias("__imp__sub_826D6940"))) PPC_WEAK_FUNC(sub_826D6940);
PPC_FUNC_IMPL(__imp__sub_826D6940) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x826d6610
	ctx.lr = 0x826D6968;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
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

__attribute__((alias("__imp__sub_826D6984"))) PPC_WEAK_FUNC(sub_826D6984);
PPC_FUNC_IMPL(__imp__sub_826D6984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6988"))) PPC_WEAK_FUNC(sub_826D6988);
PPC_FUNC_IMPL(__imp__sub_826D6988) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d69e0
	if (cr0.eq) goto loc_826D69E0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x826d69c4
	if (cr6.eq) goto loc_826D69C4;
	// cmplwi cr6,r11,119
	cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x826d69c8
	if (!cr6.eq) goto loc_826D69C8;
loc_826D69C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826D69C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d69e0
	if (!cr0.eq) goto loc_826D69E0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x826d69e4
	if (cr0.eq) goto loc_826D69E4;
loc_826D69E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D69E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D69EC"))) PPC_WEAK_FUNC(sub_826D69EC);
PPC_FUNC_IMPL(__imp__sub_826D69EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D69F0"))) PPC_WEAK_FUNC(sub_826D69F0);
PPC_FUNC_IMPL(__imp__sub_826D69F0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d6a30
	if (cr0.eq) goto loc_826D6A30;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x826d6a30
	if (!cr6.eq) goto loc_826D6A30;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8272e418
	ctx.lr = 0x826D6A28;
	sub_8272E418(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x826d6a54
	goto loc_826D6A54;
loc_826D6A30:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6a4c
	if (cr0.eq) goto loc_826D6A4C;
	// cmplwi cr6,r4,724
	cr6.compare<uint32_t>(ctx.r4.u32, 724, ctx.xer);
	// bge cr6,0x826d6a4c
	if (!cr6.lt) goto loc_826D6A4C;
	// bl 0x8272ee48
	ctx.lr = 0x826D6A48;
	sub_8272EE48(ctx, base);
	// b 0x826d6a54
	goto loc_826D6A54;
loc_826D6A4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,10120
	ctx.r3.s64 = ctx.r11.s64 + 10120;
loc_826D6A54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6A64"))) PPC_WEAK_FUNC(sub_826D6A64);
PPC_FUNC_IMPL(__imp__sub_826D6A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6A68"))) PPC_WEAK_FUNC(sub_826D6A68);
PPC_FUNC_IMPL(__imp__sub_826D6A68) {
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
	// addi r11,r3,716
	ctx.r11.s64 = ctx.r3.s64 + 716;
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x826d6aa4
	if (cr6.lt) goto loc_826D6AA4;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// b 0x826d6ae4
	goto loc_826D6AE4;
loc_826D6AA4:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x826d6adc
	if (cr0.eq) goto loc_826D6ADC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x828d2890
	ctx.lr = 0x826D6AD4;
	sub_828D2890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x826d6ae4
	goto loc_826D6AE4;
loc_826D6ADC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826d67f0
	ctx.lr = 0x826D6AE4;
	sub_826D67F0(ctx, base);
loc_826D6AE4:
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

__attribute__((alias("__imp__sub_826D6AF8"))) PPC_WEAK_FUNC(sub_826D6AF8);
PPC_FUNC_IMPL(__imp__sub_826D6AF8) {
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
	// addi r11,r3,872
	ctx.r11.s64 = ctx.r3.s64 + 872;
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x826d6b34
	if (cr6.lt) goto loc_826D6B34;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// b 0x826d6b74
	goto loc_826D6B74;
loc_826D6B34:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x826d6b6c
	if (cr0.eq) goto loc_826D6B6C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x828d2890
	ctx.lr = 0x826D6B64;
	sub_828D2890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x826d6b74
	goto loc_826D6B74;
loc_826D6B6C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826d67f0
	ctx.lr = 0x826D6B74;
	sub_826D67F0(ctx, base);
loc_826D6B74:
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

__attribute__((alias("__imp__sub_826D6B88"))) PPC_WEAK_FUNC(sub_826D6B88);
PPC_FUNC_IMPL(__imp__sub_826D6B88) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_826D6B8C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d6bcc
	if (cr6.eq) goto loc_826D6BCC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d6bac
	if (cr0.eq) goto loc_826D6BAC;
	// rlwinm. r10,r9,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x826d6bb0
	if (cr0.eq) goto loc_826D6BB0;
loc_826D6BAC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826D6BB0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d6bc4
	if (cr0.eq) goto loc_826D6BC4;
	// rlwinm r10,r9,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE000;
	// cmplwi cr6,r10,57344
	cr6.compare<uint32_t>(ctx.r10.u32, 57344, ctx.xer);
	// beq cr6,0x826d6be0
	if (cr6.eq) goto loc_826D6BE0;
loc_826D6BC4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826d6b8c
	goto loc_826D6B8C;
loc_826D6BCC:
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x826c4438
	sub_826C4438(ctx, base);
	return;
loc_826D6BE0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6BE8"))) PPC_WEAK_FUNC(sub_826D6BE8);
PPC_FUNC_IMPL(__imp__sub_826D6BE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// blt cr6,0x826d6c04
	if (cr6.lt) goto loc_826D6C04;
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826d6c08
	if (!cr6.gt) goto loc_826D6C08;
loc_826D6C04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D6C08:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6c18
	if (cr0.eq) goto loc_826D6C18;
loc_826D6C10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826D6C18:
	// rlwinm. r11,r10,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6c38
	if (cr0.eq) goto loc_826D6C38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d6c10
	if (!cr6.eq) goto loc_826D6C10;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d6c10
	if (!cr6.eq) goto loc_826D6C10;
loc_826D6C38:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826d6c4c
	if (!cr0.eq) goto loc_826D6C4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826D6C4C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d6c9c
	if (cr6.eq) goto loc_826D6C9C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x826d6c94
	if (cr0.eq) goto loc_826D6C94;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826d6c88
	if (!cr0.eq) goto loc_826D6C88;
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x826d6c8c
	if (cr0.eq) goto loc_826D6C8C;
loc_826D6C88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826D6C8C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d6c9c
	if (cr0.eq) goto loc_826D6C9C;
loc_826D6C94:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826d6c4c
	goto loc_826D6C4C;
loc_826D6C9C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6CAC"))) PPC_WEAK_FUNC(sub_826D6CAC);
PPC_FUNC_IMPL(__imp__sub_826D6CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6CB0"))) PPC_WEAK_FUNC(sub_826D6CB0);
PPC_FUNC_IMPL(__imp__sub_826D6CB0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826D6CB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm. r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6ce4
	if (cr0.eq) goto loc_826D6CE4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x826d6b88
	ctx.lr = 0x826D6CE0;
	sub_826D6B88(ctx, base);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_826D6CE4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d6d48
	if (!cr0.eq) goto loc_826D6D48;
	// rlwinm r10,r11,30,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826d6d48
	if (!cr6.eq) goto loc_826D6D48;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6d48
	if (cr0.eq) goto loc_826D6D48;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826d6d2c
	if (cr6.eq) goto loc_826D6D2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d64b8
	ctx.lr = 0x826D6D1C;
	sub_826D64B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d6d2c
	if (!cr0.eq) goto loc_826D6D2C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x826d6d48
	goto loc_826D6D48;
loc_826D6D2C:
	// li r4,3606
	ctx.r4.s64 = 3606;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826c44d0
	ctx.lr = 0x826D6D38;
	sub_826C44D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,6,24,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_826D6D48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D6D58"))) PPC_WEAK_FUNC(sub_826D6D58);
PPC_FUNC_IMPL(__imp__sub_826D6D58) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826D6D60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826d6de4
	if (cr6.eq) goto loc_826D6DE4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x826d6d9c
	if (cr6.lt) goto loc_826D6D9C;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826d6da0
	if (!cr6.gt) goto loc_826D6DA0;
loc_826D6D9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D6DA0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6de4
	if (cr0.eq) goto loc_826D6DE4;
	// addi r11,r10,-96
	ctx.r11.s64 = ctx.r10.s64 + -96;
	// li r30,1
	ctx.r30.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6de4
	if (cr0.eq) goto loc_826D6DE4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826D6DD0;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lhz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d6de4
	if (cr0.eq) goto loc_826D6DE4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_826D6DE4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// rlwimi r11,r10,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r9,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D6E0C"))) PPC_WEAK_FUNC(sub_826D6E0C);
PPC_FUNC_IMPL(__imp__sub_826D6E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6E10"))) PPC_WEAK_FUNC(sub_826D6E10);
PPC_FUNC_IMPL(__imp__sub_826D6E10) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r5,128
	cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x826d6e50
	if (!cr6.gt) goto loc_826D6E50;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x822193d8
	sub_822193D8(ctx, base);
	return;
loc_826D6E50:
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6E6C"))) PPC_WEAK_FUNC(sub_826D6E6C);
PPC_FUNC_IMPL(__imp__sub_826D6E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6E70"))) PPC_WEAK_FUNC(sub_826D6E70);
PPC_FUNC_IMPL(__imp__sub_826D6E70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// addi r10,r3,716
	ctx.r10.s64 = ctx.r3.s64 + 716;
	// cmplwi cr6,r5,128
	cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// ble cr6,0x826d6eac
	if (!cr6.gt) goto loc_826D6EAC;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x822193d8
	sub_822193D8(ctx, base);
	return;
loc_826D6EAC:
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6EC8"))) PPC_WEAK_FUNC(sub_826D6EC8);
PPC_FUNC_IMPL(__imp__sub_826D6EC8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x826D6ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d6f3c
	if (!cr0.eq) goto loc_826D6F3C;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r31,536(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// beq 0x826d6f34
	if (cr0.eq) goto loc_826D6F34;
loc_826D6EF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826D6F14;
	sub_826D6610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d6e70
	ctx.lr = 0x826D6F28;
	sub_826D6E70(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x826d6ef8
	if (!cr6.eq) goto loc_826D6EF8;
loc_826D6F34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r11.u32);
loc_826D6F3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D6F44"))) PPC_WEAK_FUNC(sub_826D6F44);
PPC_FUNC_IMPL(__imp__sub_826D6F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6F48"))) PPC_WEAK_FUNC(sub_826D6F48);
PPC_FUNC_IMPL(__imp__sub_826D6F48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// clrlwi. r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d6fc4
	if (!cr0.eq) goto loc_826D6FC4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d6fc4
	if (cr6.eq) goto loc_826D6FC4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d6fc4
	if (cr0.eq) goto loc_826D6FC4;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,4095
	cr6.compare<uint32_t>(ctx.r11.u32, 4095, ctx.xer);
	// beq cr6,0x826d6fc4
	if (cr6.eq) goto loc_826D6FC4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm. r10,r10,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d6fc4
	if (cr0.eq) goto loc_826D6FC4;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826d6fc4
	if (!cr6.eq) goto loc_826D6FC4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// blt cr6,0x826d6fb8
	if (cr6.lt) goto loc_826D6FB8;
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(ctx.r11.u32, 81, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826d6fbc
	if (!cr6.gt) goto loc_826D6FBC;
loc_826D6FB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D6FBC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!cr0.eq) return;
loc_826D6FC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826D6FCC"))) PPC_WEAK_FUNC(sub_826D6FCC);
PPC_FUNC_IMPL(__imp__sub_826D6FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D6FD0"))) PPC_WEAK_FUNC(sub_826D6FD0);
PPC_FUNC_IMPL(__imp__sub_826D6FD0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826D6FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x826d705c
	goto loc_826D705C;
loc_826D6FE8:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_826D6FEC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826d7054
	if (cr6.eq) goto loc_826D7054;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d704c
	if (cr0.eq) goto loc_826D704C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d704c
	if (cr0.eq) goto loc_826D704C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d6988
	ctx.lr = 0x826D7034;
	sub_826D6988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d704c
	if (cr0.eq) goto loc_826D704C;
	// rlwinm r11,r30,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x826d704c
	if (!cr6.gt) goto loc_826D704C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_826D704C:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x826d6fec
	goto loc_826D6FEC;
loc_826D7054:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_826D705C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7068
	if (cr0.eq) goto loc_826D7068;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D7068:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x826d6fe8
	if (!cr6.eq) goto loc_826D6FE8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D7080"))) PPC_WEAK_FUNC(sub_826D7080);
PPC_FUNC_IMPL(__imp__sub_826D7080) {
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
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822193b0
	ctx.lr = 0x826D70A8;
	sub_822193B0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_826D70F4"))) PPC_WEAK_FUNC(sub_826D70F4);
PPC_FUNC_IMPL(__imp__sub_826D70F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D70F8"))) PPC_WEAK_FUNC(sub_826D70F8);
PPC_FUNC_IMPL(__imp__sub_826D70F8) {
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
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r4,128
	cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x826d7124
	if (!cr6.gt) goto loc_826D7124;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826d7080
	ctx.lr = 0x826D7120;
	sub_826D7080(ctx, base);
	// b 0x826d7190
	goto loc_826D7190;
loc_826D7124:
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x826d7148
	if (cr6.lt) goto loc_826D7148;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// b 0x826d718c
	goto loc_826D718C;
loc_826D7148:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x826d7180
	if (cr0.eq) goto loc_826D7180;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x828d2890
	ctx.lr = 0x826D7178;
	sub_828D2890(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x826d718c
	goto loc_826D718C;
loc_826D7180:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826d67f0
	ctx.lr = 0x826D7188;
	sub_826D67F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_826D718C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_826D7190:
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

__attribute__((alias("__imp__sub_826D71A4"))) PPC_WEAK_FUNC(sub_826D71A4);
PPC_FUNC_IMPL(__imp__sub_826D71A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D71A8"))) PPC_WEAK_FUNC(sub_826D71A8);
PPC_FUNC_IMPL(__imp__sub_826D71A8) {
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
	// addi r11,r3,872
	ctx.r11.s64 = ctx.r3.s64 + 872;
	// cmplwi cr6,r4,128
	cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// ble cr6,0x826d71d0
	if (!cr6.gt) goto loc_826D71D0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826d7080
	ctx.lr = 0x826D71CC;
	sub_826D7080(ctx, base);
	// b 0x826d723c
	goto loc_826D723C;
loc_826D71D0:
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x826d71f4
	if (cr6.lt) goto loc_826D71F4;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// b 0x826d7238
	goto loc_826D7238;
loc_826D71F4:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x826d722c
	if (cr0.eq) goto loc_826D722C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x828d2890
	ctx.lr = 0x826D7224;
	sub_828D2890(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x826d7238
	goto loc_826D7238;
loc_826D722C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826d67f0
	ctx.lr = 0x826D7234;
	sub_826D67F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_826D7238:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_826D723C:
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

__attribute__((alias("__imp__sub_826D7250"))) PPC_WEAK_FUNC(sub_826D7250);
PPC_FUNC_IMPL(__imp__sub_826D7250) {
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
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// addi r11,r3,872
	ctx.r11.s64 = ctx.r3.s64 + 872;
	// rlwinm r4,r10,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r4,128
	cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// ble cr6,0x826d7280
	if (!cr6.gt) goto loc_826D7280;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826d7080
	ctx.lr = 0x826D727C;
	sub_826D7080(ctx, base);
	// b 0x826d72ec
	goto loc_826D72EC;
loc_826D7280:
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x826d72a4
	if (cr6.lt) goto loc_826D72A4;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// b 0x826d72e8
	goto loc_826D72E8;
loc_826D72A4:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x826d72dc
	if (cr0.eq) goto loc_826D72DC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x828d2890
	ctx.lr = 0x826D72D4;
	sub_828D2890(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x826d72e8
	goto loc_826D72E8;
loc_826D72DC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826d67f0
	ctx.lr = 0x826D72E4;
	sub_826D67F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_826D72E8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_826D72EC:
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

__attribute__((alias("__imp__sub_826D7300"))) PPC_WEAK_FUNC(sub_826D7300);
PPC_FUNC_IMPL(__imp__sub_826D7300) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826D7308;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826d6a68
	ctx.lr = 0x826D731C;
	sub_826D6A68(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r30,r10,-28
	ctx.r30.s64 = ctx.r10.s64 + -28;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r29,r9,-28
	ctx.r29.s64 = ctx.r9.s64 + -28;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// ori r28,r8,1
	ctx.r28.u64 = ctx.r8.u64 | 1;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// ori r8,r7,1
	ctx.r8.u64 = ctx.r7.u64 | 1;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// ori r4,r6,1
	ctx.r4.u64 = ctx.r6.u64 | 1;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// rlwimi r11,r5,0,4,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwimi r11,r10,0,0,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r11,r9,0,0,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d73c0
	if (cr0.eq) goto loc_826D73C0;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
loc_826D73C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D73C8"))) PPC_WEAK_FUNC(sub_826D73C8);
PPC_FUNC_IMPL(__imp__sub_826D73C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f8
	ctx.lr = 0x826D73D0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
loc_826D73E0:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
loc_826D73E4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d73f0
	if (cr0.eq) goto loc_826D73F0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_826D73F0:
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x826d7778
	if (cr6.eq) goto loc_826D7778;
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// b 0x826d7738
	goto loc_826D7738;
loc_826D7404:
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r4,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,13184
	cr6.compare<uint32_t>(ctx.r11.u32, 13184, ctx.xer);
	// bne cr6,0x826d7730
	if (!cr6.eq) goto loc_826D7730;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d775c
	if (cr0.eq) goto loc_826D775C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_826D7428:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d74ac
	if (cr6.eq) goto loc_826D74AC;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d74a4
	if (cr0.eq) goto loc_826D74A4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r8,r11,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x826d74a4
	if (cr0.eq) goto loc_826D74A4;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x826d74a0
	if (cr0.eq) goto loc_826D74A0;
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_826D7480:
	// srw r3,r7,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r3,r3,30
	ctx.r3.u64 = ctx.r3.u32 & 0x3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// slw r3,r20,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r3.u8 & 0x3F));
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// blt cr6,0x826d7480
	if (cr6.lt) goto loc_826D7480;
loc_826D74A0:
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
loc_826D74A4:
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x826d7428
	goto loc_826D7428;
loc_826D74AC:
	// rlwinm r10,r4,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0xF;
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d74d0
	if (!cr6.eq) goto loc_826D74D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// xor r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// rlwinm. r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7730
	if (cr0.eq) goto loc_826D7730;
loc_826D74D0:
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// b 0x826d75ac
	goto loc_826D75AC;
loc_826D74E0:
	// lwz r29,36(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d6598
	ctx.lr = 0x826D74F0;
	sub_826D6598(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d75bc
	if (cr0.eq) goto loc_826D75BC;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_826D74FC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d7530
	if (cr6.eq) goto loc_826D7530;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r9,r23,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r23.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826d7528
	if (cr0.eq) goto loc_826D7528;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x826d75bc
	if (!cr6.eq) goto loc_826D75BC;
loc_826D7528:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x826d74fc
	goto loc_826D74FC;
loc_826D7530:
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// rlwinm r11,r31,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0xF;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// rlwinm r5,r8,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
loc_826D7548:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d75a0
	if (cr6.eq) goto loc_826D75A0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subfic r7,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r7.s64 = 31 - ctx.r7.s64;
	// slw r7,r20,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r7.u8 & 0x3F));
	// and. r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 & ctx.r25.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x826d7580
	if (cr0.eq) goto loc_826D7580;
	// rlwinm r7,r8,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// slw r7,r20,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r7.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_826D7580:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x826d75a0
	if (!cr6.lt) goto loc_826D75A0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x826d7548
	goto loc_826D7548;
loc_826D75A0:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_826D75AC:
	// lwz r31,8(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r31,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826d74e0
	if (cr6.eq) goto loc_826D74E0;
loc_826D75BC:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r10,r10,-13568
	ctx.r10.s64 = ctx.r10.s64 + -13568;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7730
	if (cr0.eq) goto loc_826D7730;
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826d7730
	if (cr6.eq) goto loc_826D7730;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r28,r27,36
	ctx.r28.s64 = ctx.r27.s64 + 36;
	// std r23,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// std r23,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r23.u64);
loc_826D75F8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826d76b0
	if (!cr6.lt) goto loc_826D76B0;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// slw r30,r20,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r30,r25
	ctx.r11.u64 = ctx.r30.u64 & ctx.r25.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d76a0
	if (!cr0.eq) goto loc_826D76A0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14720
	cr6.compare<uint32_t>(ctx.r10.u32, 14720, ctx.xer);
	// beq cr6,0x826d76a0
	if (cr6.eq) goto loc_826D76A0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,115
	ctx.r6.s64 = 115;
	// addi r5,r21,16
	ctx.r5.s64 = ctx.r21.s64 + 16;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82761aa0
	ctx.lr = 0x826D7654;
	sub_82761AA0(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// rlwinm r10,r10,0,31,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// rlwimi r11,r30,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x826d767c
	goto loc_826D767C;
loc_826D7678:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_826D767C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826d7678
	if (!cr6.eq) goto loc_826D7678;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_826D76A0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x826d75f8
	goto loc_826D75F8;
loc_826D76B0:
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// li r28,4
	ctx.r28.s64 = 4;
	// rlwinm r27,r11,20,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r10,36(r22)
	PPC_STORE_U32(ctx.r22.u32 + 36, ctx.r10.u32);
loc_826D76CC:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x826d7710
	if (cr0.eq) goto loc_826D7710;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14080
	ctx.r11.s64 = ctx.r11.s64 + -14080;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d7710
	if (!cr0.eq) goto loc_826D7710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d6be8
	ctx.lr = 0x826D76F8;
	sub_826D6BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d7710
	if (cr0.eq) goto loc_826D7710;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82766f68
	ctx.lr = 0x826D770C;
	sub_82766F68(ctx, base);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_826D7710:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x826d76cc
	if (!cr0.eq) goto loc_826D76CC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x826d6ec8
	ctx.lr = 0x826D7728;
	sub_826D6EC8(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d73e0
	if (!cr0.eq) goto loc_826D73E0;
loc_826D7730:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_826D7738:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7744
	if (cr0.eq) goto loc_826D7744;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_826D7744:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// bne cr6,0x826d7404
	if (!cr6.eq) goto loc_826D7404;
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826d73e4
	goto loc_826D73E4;
loc_826D775C:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// bl 0x82766f68
	ctx.lr = 0x826D7774;
	sub_82766F68(ctx, base);
	// b 0x826d73e0
	goto loc_826D73E0;
loc_826D7778:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D7780"))) PPC_WEAK_FUNC(sub_826D7780);
PPC_FUNC_IMPL(__imp__sub_826D7780) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826D7788;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826d7868
	if (cr6.eq) goto loc_826D7868;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c4798
	ctx.lr = 0x826D77B4;
	sub_826C4798(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x826d7868
	if (cr0.eq) goto loc_826D7868;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d66f8
	ctx.lr = 0x826D77CC;
	sub_826D66F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d7868
	if (cr0.eq) goto loc_826D7868;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// clrlwi. r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x826d77ec
	if (!cr0.eq) goto loc_826D77EC;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x826d77f8
	goto loc_826D77F8;
loc_826D77EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d6760
	ctx.lr = 0x826D77F4;
	sub_826D6760(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_826D77F8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826d7848
	if (!cr0.eq) goto loc_826D7848;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r31.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826d7848
	if (cr0.eq) goto loc_826D7848;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x826d7848
	if (!cr6.eq) goto loc_826D7848;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d6610
	ctx.lr = 0x826D783C;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_826D7848:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826be6e8
	ctx.lr = 0x826D7868;
	sub_826BE6E8(ctx, base);
loc_826D7868:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D7870"))) PPC_WEAK_FUNC(sub_826D7870);
PPC_FUNC_IMPL(__imp__sub_826D7870) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x826D7878;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x826d7914
	if (!cr6.lt) goto loc_826D7914;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// beq cr6,0x826d78b8
	if (cr6.eq) goto loc_826D78B8;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D78B8;
	sub_826C4438(ctx, base);
loc_826D78B8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r29,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82227000
	ctx.lr = 0x826D78F0;
	sub_82227000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x826d7780
	ctx.lr = 0x826D790C;
	sub_826D7780(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_826D7914:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D7920"))) PPC_WEAK_FUNC(sub_826D7920);
PPC_FUNC_IMPL(__imp__sub_826D7920) {
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
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bgt cr6,0x826d7948
	if (cr6.gt) goto loc_826D7948;
	// li r30,10
	ctx.r30.s64 = 10;
loc_826D7948:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826d70f8
	ctx.lr = 0x826D7958;
	sub_826D70F8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r9,r31,1
	ctx.r9.u64 = ctx.r31.u64 | 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826D79A4"))) PPC_WEAK_FUNC(sub_826D79A4);
PPC_FUNC_IMPL(__imp__sub_826D79A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D79A8"))) PPC_WEAK_FUNC(sub_826D79A8);
PPC_FUNC_IMPL(__imp__sub_826D79A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826D79B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x826d6af8
	ctx.lr = 0x826D79C8;
	sub_826D6AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// ori r11,r29,1
	ctx.r11.u64 = ctx.r29.u64 | 1;
	// ori r10,r27,1
	ctx.r10.u64 = ctx.r27.u64 | 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_826D79E0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x826d7a3c
	goto loc_826D7A3C;
loc_826D79EC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x826d7a08
	if (cr6.lt) goto loc_826D7A08;
	// cmplwi cr6,r10,81
	cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826d7a0c
	if (!cr6.gt) goto loc_826D7A0C;
loc_826D7A08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D7A0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d7c44
	if (!cr0.eq) goto loc_826D7C44;
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x826d7a28
	if (cr6.lt) goto loc_826D7A28;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826d7a2c
	if (!cr6.gt) goto loc_826D7A2C;
loc_826D7A28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D7A2C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d7c44
	if (!cr0.eq) goto loc_826D7C44;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_826D7A3C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7a48
	if (cr0.eq) goto loc_826D7A48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D7A48:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bne cr6,0x826d79ec
	if (!cr6.eq) goto loc_826D79EC;
	// lwz r30,12(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi r30,0
	cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x826d7a70
	if (cr0.eq) goto loc_826D7A70;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x826d7a74
	if (cr6.eq) goto loc_826D7A74;
loc_826D7A70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D7A74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d7a90
	if (cr0.eq) goto loc_826D7A90;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x826d7ba4
	if (cr6.eq) goto loc_826D7BA4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x826d7ba4
	goto loc_826D7BA4;
loc_826D7A90:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d7aa4
	if (cr0.eq) goto loc_826D7AA4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x826d7ab0
	goto loc_826D7AB0;
loc_826D7AA4:
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-32
	ctx.r31.s64 = ctx.r11.s64 + -32;
loc_826D7AB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,86
	cr6.compare<uint32_t>(ctx.r10.u32, 86, ctx.xer);
	// beq cr6,0x826d7acc
	if (cr6.eq) goto loc_826D7ACC;
	// cmplwi cr6,r10,87
	cr6.compare<uint32_t>(ctx.r10.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x826d7ad0
	if (!cr6.eq) goto loc_826D7AD0;
loc_826D7ACC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826D7AD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d7b80
	if (cr0.eq) goto loc_826D7B80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826D7AF0;
	sub_826D6610(ctx, base);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r31,-8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
loc_826D7AFC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d7b18
	if (cr6.eq) goto loc_826D7B18;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826d7b1c
	if (!cr6.eq) goto loc_826D7B1C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826d7afc
	goto loc_826D7AFC;
loc_826D7B18:
	// li r30,0
	ctx.r30.s64 = 0;
loc_826D7B1C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d7b30
	if (cr0.eq) goto loc_826D7B30;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826d7b3c
	goto loc_826D7B3C;
loc_826D7B30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_826D7B3C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d7b58
	if (cr6.eq) goto loc_826D7B58;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826d7b64
	if (!cr6.gt) goto loc_826D7B64;
loc_826D7B58:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d7920
	ctx.lr = 0x826D7B64;
	sub_826D7920(ctx, base);
loc_826D7B64:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
	// b 0x826d7ba8
	goto loc_826D7BA8;
loc_826D7B80:
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// beq cr6,0x826d7b90
	if (cr6.eq) goto loc_826D7B90;
	// cmpwi cr6,r10,84
	cr6.compare<int32_t>(ctx.r10.s32, 84, ctx.xer);
	// bne cr6,0x826d7bb0
	if (!cr6.eq) goto loc_826D7BB0;
loc_826D7B90:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7ba4
	if (cr0.eq) goto loc_826D7BA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D7BA4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_826D7BA8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d79e0
	if (!cr6.eq) goto loc_826D79E0;
loc_826D7BB0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7bc0
	if (cr0.eq) goto loc_826D7BC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D7BC0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d7c40
	if (!cr0.eq) goto loc_826D7C40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d7bdc
	if (cr6.eq) goto loc_826D7BDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826d7be8
	goto loc_826D7BE8;
loc_826D7BDC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_826D7BE8:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bne 0x826d79e0
	if (!cr0.eq) goto loc_826D79E0;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826d6e10
	ctx.lr = 0x826D7C3C;
	sub_826D6E10(ctx, base);
	// b 0x826d79e0
	goto loc_826D79E0;
loc_826D7C40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D7C44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D7C4C"))) PPC_WEAK_FUNC(sub_826D7C4C);
PPC_FUNC_IMPL(__imp__sub_826D7C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826D7C50"))) PPC_WEAK_FUNC(sub_826D7C50);
PPC_FUNC_IMPL(__imp__sub_826D7C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x826D7C58;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// li r19,1
	ctx.r19.s64 = 1;
	// lwz r22,0(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7c90
	if (cr0.eq) goto loc_826D7C90;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// beq 0x826d7c94
	if (cr0.eq) goto loc_826D7C94;
loc_826D7C90:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D7C94:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d7cc8
	if (cr0.eq) goto loc_826D7CC8;
	// li r4,192
	ctx.r4.s64 = 192;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x826d7cac
	if (cr6.eq) goto loc_826D7CAC;
	// li r4,193
	ctx.r4.s64 = 193;
loc_826D7CAC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82226b30
	ctx.lr = 0x826D7CB4;
	sub_82226B30(ctx, base);
	// lwz r3,20(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826d7cc8
	if (cr0.eq) goto loc_826D7CC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826ba750
	ctx.lr = 0x826D7CC8;
	sub_826BA750(ctx, base);
loc_826D7CC8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7cd8
	if (cr0.eq) goto loc_826D7CD8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D7CD8:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x826d7d80
	goto loc_826D7D80;
loc_826D7CE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// bne cr6,0x826d7d78
	if (!cr6.eq) goto loc_826D7D78;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x826d7d78
	if (cr0.eq) goto loc_826D7D78;
	// rlwinm. r10,r11,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// beq 0x826d7d38
	if (cr0.eq) goto loc_826D7D38;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r8,r31,36
	ctx.r8.s64 = ctx.r31.s64 + 36;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826D7D18:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x826d7d18
	if (!cr0.eq) goto loc_826D7D18;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x826d7d64
	if (!cr6.lt) goto loc_826D7D64;
loc_826D7D38:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d7d64
	if (cr0.eq) goto loc_826D7D64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_826D7D58:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826d7d58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826D7D58;
loc_826D7D64:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r4,r11,15,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// bl 0x82226d30
	ctx.lr = 0x826D7D78;
	sub_82226D30(ctx, base);
loc_826D7D78:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_826D7D80:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7d8c
	if (cr0.eq) goto loc_826D7D8C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D7D8C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x826d7ce0
	if (!cr6.eq) goto loc_826D7CE0;
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lis r29,-1
	ctx.r29.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d7e18
	if (cr0.eq) goto loc_826D7E18;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x826d7e18
	if (!cr6.eq) goto loc_826D7E18;
	// lwz r11,332(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 332);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826d7e18
	if (!cr6.gt) goto loc_826D7E18;
	// addi r31,r26,120
	ctx.r31.s64 = ctx.r26.s64 + 120;
loc_826D7DD8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bgt cr6,0x826d7e04
	if (cr6.gt) goto loc_826D7E04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r10,r11,27,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xF;
	// rlwinm r11,r11,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x82226e20
	ctx.lr = 0x826D7E04;
	sub_82226E20(ctx, base);
loc_826D7E04:
	// lwz r11,332(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 332);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d7dd8
	if (cr6.lt) goto loc_826D7DD8;
loc_826D7E18:
	// lwz r11,532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 532);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826d7f4c
	if (!cr6.gt) goto loc_826D7F4C;
	// addi r31,r26,344
	ctx.r31.s64 = ctx.r26.s64 + 344;
loc_826D7E2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d7f38
	if (!cr0.eq) goto loc_826D7F38;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// beq cr6,0x826d7f38
	if (cr6.eq) goto loc_826D7F38;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_826D7E50:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d7f38
	if (cr6.eq) goto loc_826D7F38;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r11,r20,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r20.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d7e90
	if (cr0.eq) goto loc_826D7E90;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826d7e98
	if (!cr0.eq) goto loc_826D7E98;
loc_826D7E90:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x826d7e50
	goto loc_826D7E50;
loc_826D7E98:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq 0x826d7ef0
	if (cr0.eq) goto loc_826D7EF0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r9,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xF;
	// rlwinm r9,r11,4,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// rlwinm r4,r10,15,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwimi r10,r11,31,18,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x2000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFDFFF);
	// rlwinm r11,r10,27,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1FF;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 | ctx.r9.u64;
	// bl 0x82226e20
	ctx.lr = 0x826D7EEC;
	sub_82226E20(ctx, base);
	// b 0x826d7f38
	goto loc_826D7F38;
loc_826D7EF0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// rlwimi r11,r9,28,11,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x1FE000) | (ctx.r11.u64 & 0xFFFFFFFFFFE01FFF);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// rlwinm r9,r11,23,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFFF;
	// bne cr6,0x826d7f0c
	if (!cr6.eq) goto loc_826D7F0C;
	// li r10,9
	ctx.r10.s64 = 9;
loc_826D7F0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r9,28
	ctx.r5.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r4,r9,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r10,r10,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// rlwimi r9,r11,31,18,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x2000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFDFFF);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r11,r9,27,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1FF;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82226eb0
	ctx.lr = 0x826D7F38;
	sub_82226EB0(ctx, base);
loc_826D7F38:
	// lwz r11,532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 532);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d7e2c
	if (cr6.lt) goto loc_826D7E2C;
loc_826D7F4C:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d7f90
	if (cr0.eq) goto loc_826D7F90;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d79a8
	ctx.lr = 0x826D7F7C;
	sub_826D79A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,8(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r5,4(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// bl 0x826d6d58
	ctx.lr = 0x826D7F90;
	sub_826D6D58(ctx, base);
loc_826D7F90:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d7fa0
	if (cr0.eq) goto loc_826D7FA0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D7FA0:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d6fd0
	ctx.lr = 0x826D7FAC;
	sub_826D6FD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x826d8004
	if (cr6.eq) goto loc_826D8004;
loc_826D7FBC:
	// cmplw cr6,r31,r15
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x826d7fd0
	if (cr6.eq) goto loc_826D7FD0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d8004
	if (!cr0.eq) goto loc_826D8004;
loc_826D7FD0:
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d6fd0
	ctx.lr = 0x826D7FDC;
	sub_826D6FD0(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x826d7fe8
	if (!cr6.gt) goto loc_826D7FE8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_826D7FE8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d7ffc
	if (cr0.eq) goto loc_826D7FFC;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_826D7FFC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d7fbc
	if (!cr6.eq) goto loc_826D7FBC;
loc_826D8004:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x826d8034
	if (cr0.eq) goto loc_826D8034;
	// rlwimi r10,r30,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x826d8038
	goto loc_826D8038;
loc_826D8034:
	// rlwimi r10,r30,8,18,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x3F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC0FF);
loc_826D8038:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r10,4(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82226b68
	ctx.lr = 0x826D8054;
	sub_82226B68(ctx, base);
	// lwz r17,12(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// lwz r18,16(r14)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// lwz r24,20(r14)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// li r16,-1
	ctx.r16.s64 = -1;
	// beq cr6,0x826d8864
	if (cr6.eq) goto loc_826D8864;
loc_826D807C:
	// cmplw cr6,r23,r15
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x826d8090
	if (cr6.eq) goto loc_826D8090;
	// lwz r11,72(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 72);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d8864
	if (!cr0.eq) goto loc_826D8864;
loc_826D8090:
	// lwz r31,20(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// b 0x826d80cc
	goto loc_826D80CC;
loc_826D8098:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14208
	cr6.compare<uint32_t>(ctx.r11.u32, 14208, ctx.xer);
	// bne cr6,0x826d80c4
	if (!cr6.eq) goto loc_826D80C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d80c4
	if (cr6.eq) goto loc_826D80C4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d88e0
	if (cr0.eq) goto loc_826D88E0;
loc_826D80C4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_826D80CC:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d80d8
	if (cr0.eq) goto loc_826D80D8;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_826D80D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d8098
	if (!cr6.eq) goto loc_826D8098;
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8188
	if (cr0.eq) goto loc_826D8188;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8100
	if (cr0.eq) goto loc_826D8100;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x826d810c
	goto loc_826D810C;
loc_826D8100:
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-32
	ctx.r31.s64 = ctx.r11.s64 + -32;
loc_826D810C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826D8124;
	sub_826D6610(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x826d6cb0
	ctx.lr = 0x826D8140;
	sub_826D6CB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8188
	if (cr0.eq) goto loc_826D8188;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82766da8
	ctx.lr = 0x826D815C;
	sub_82766DA8(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826d8188
	if (cr6.eq) goto loc_826D8188;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// bne cr6,0x826d8188
	if (!cr6.eq) goto loc_826D8188;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82766da8
	ctx.lr = 0x826D8188;
	sub_82766DA8(ctx, base);
loc_826D8188:
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d81a4
	if (cr0.eq) goto loc_826D81A4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227120
	ctx.lr = 0x826D819C;
	sub_82227120(ctx, base);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stw r3,76(r23)
	PPC_STORE_U32(ctx.r23.u32 + 76, ctx.r3.u32);
loc_826D81A4:
	// lwz r31,28(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// b 0x826d8830
	goto loc_826D8830;
loc_826D81AC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826d81d8
	if (cr6.lt) goto loc_826D81D8;
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(ctx.r11.u32, 81, ctx.xer);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// ble cr6,0x826d81dc
	if (!cr6.gt) goto loc_826D81DC;
loc_826D81D8:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_826D81DC:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826d8370
	if (cr0.eq) goto loc_826D8370;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// stw r20,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// bl 0x82764f28
	ctx.lr = 0x826D8200;
	sub_82764F28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d6f48
	ctx.lr = 0x826D8208;
	sub_826D6F48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826d8224
	if (cr0.eq) goto loc_826D8224;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82764f28
	ctx.lr = 0x826D8220;
	sub_82764F28(ctx, base);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_826D8224:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8360
	if (cr0.eq) goto loc_826D8360;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d8244
	if (!cr0.eq) goto loc_826D8244;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x826d826c
	goto loc_826D826C;
loc_826D8244:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x826d8264
	if (cr6.eq) goto loc_826D8264;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// beq cr6,0x826d8264
	if (cr6.eq) goto loc_826D8264;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x826d8268
	if (!cr6.eq) goto loc_826D8268;
loc_826D8264:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_826D8268:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_826D826C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d82c0
	if (!cr0.eq) goto loc_826D82C0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x826d8360
	if (cr6.eq) goto loc_826D8360;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d8290
	if (!cr0.eq) goto loc_826D8290;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x826d82b8
	goto loc_826D82B8;
loc_826D8290:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x826d82b0
	if (cr6.eq) goto loc_826D82B0;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// beq cr6,0x826d82b0
	if (cr6.eq) goto loc_826D82B0;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x826d82b4
	if (!cr6.eq) goto loc_826D82B4;
loc_826D82B0:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_826D82B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_826D82B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8360
	if (cr0.eq) goto loc_826D8360;
loc_826D82C0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822271d8
	ctx.lr = 0x826D82C8;
	sub_822271D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x826d8314
	if (cr6.eq) goto loc_826D8314;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d8314
	if (!cr0.eq) goto loc_826D8314;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227220
	ctx.lr = 0x826D82E8;
	sub_82227220(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x826d8308
	if (!cr6.eq) goto loc_826D8308;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,24576
	cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bne cr6,0x826d830c
	if (!cr6.eq) goto loc_826D830C;
loc_826D8308:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_826D830C:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x826d8360
	if (!cr6.eq) goto loc_826D8360;
loc_826D8314:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// stw r20,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r19,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r19.u32, 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82227000
	ctx.lr = 0x826D8348;
	sub_82227000(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d7780
	ctx.lr = 0x826D8360;
	sub_826D7780(ctx, base);
loc_826D8360:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227000
	ctx.lr = 0x826D836C;
	sub_82227000(ctx, base);
	// b 0x826d8548
	goto loc_826D8548;
loc_826D8370:
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// blt cr6,0x826d8384
	if (cr6.lt) goto loc_826D8384;
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// ble cr6,0x826d8388
	if (!cr6.gt) goto loc_826D8388;
loc_826D8384:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_826D8388:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826d8484
	if (cr0.eq) goto loc_826D8484;
	// lwz r10,36(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d83ac
	if (!cr0.eq) goto loc_826D83AC;
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(ctx.r11.s32, 82, ctx.xer);
	// bne cr6,0x826d83ac
	if (!cr6.eq) goto loc_826D83AC;
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8828
	if (cr0.eq) goto loc_826D8828;
loc_826D83AC:
	// cmpwi cr6,r11,84
	cr6.compare<int32_t>(ctx.r11.s32, 84, ctx.xer);
	// bne cr6,0x826d8404
	if (!cr6.eq) goto loc_826D8404;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d6610
	ctx.lr = 0x826D83C8;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8404
	if (cr0.eq) goto loc_826D8404;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r10,-20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r20,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r20.u32);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// lwz r11,-12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82226ca8
	ctx.lr = 0x826D8404;
	sub_82226CA8(ctx, base);
loc_826D8404:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// bl 0x827608a0
	ctx.lr = 0x826D841C;
	sub_827608A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8454
	if (cr0.eq) goto loc_826D8454;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227120
	ctx.lr = 0x826D842C;
	sub_82227120(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826D8448;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
loc_826D8454:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227018
	ctx.lr = 0x826D8460;
	sub_82227018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x826d7780
	ctx.lr = 0x826D847C;
	sub_826D7780(ctx, base);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// b 0x826d86ec
	goto loc_826D86EC;
loc_826D8484:
	// cmplwi cr6,r11,96
	cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x826d8498
	if (cr6.lt) goto loc_826D8498;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// ble cr6,0x826d849c
	if (!cr6.gt) goto loc_826D849C;
loc_826D8498:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_826D849C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826d8570
	if (cr0.eq) goto loc_826D8570;
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8528
	if (cr0.eq) goto loc_826D8528;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// stw r20,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// bl 0x82760b58
	ctx.lr = 0x826D84D0;
	sub_82760B58(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826D84E8;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x826d851c
	if (cr6.eq) goto loc_826D851C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r6,r11,16,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82226ff8
	ctx.lr = 0x826D8518;
	sub_82226FF8(ctx, base);
	// b 0x826d8548
	goto loc_826D8548;
loc_826D851C:
	// rlwinm r5,r10,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1;
	// bl 0x82226f80
	ctx.lr = 0x826D8524;
	sub_82226F80(ctx, base);
	// b 0x826d8548
	goto loc_826D8548;
loc_826D8528:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// stw r20,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// bl 0x8276a450
	ctx.lr = 0x826D853C;
	sub_8276A450(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82226f10
	ctx.lr = 0x826D8548;
	sub_82226F10(ctx, base);
loc_826D8548:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x826d7780
	ctx.lr = 0x826D8564;
	sub_826D7780(ctx, base);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// b 0x826d8714
	goto loc_826D8714;
loc_826D8570:
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// bne cr6,0x826d86f4
	if (!cr6.eq) goto loc_826D86F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_826D857C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d85a8
	if (cr6.eq) goto loc_826D85A8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x826d85a8
	if (!cr0.eq) goto loc_826D85A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826d857c
	goto loc_826D857C;
loc_826D85A8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwimi r10,r9,20,19,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r10,r10,31,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFF;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// stw r20,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// rlwinm r30,r10,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r29,r10,12,16,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF000;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwimi r11,r19,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r19.u32, 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// clrlwi r9,r9,6
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFFFF;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// oris r10,r9,8192
	ctx.r10.u64 = ctx.r9.u64 | 536870912;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,24,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// oris r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 16777216;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// clrlwi r11,r30,26
	ctx.r11.u64 = ctx.r30.u32 & 0x3F;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82227000
	ctx.lr = 0x826D8620;
	sub_82227000(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d7780
	ctx.lr = 0x826D8638;
	sub_826D7780(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227120
	ctx.lr = 0x826D8640;
	sub_82227120(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d6af8
	ctx.lr = 0x826D8654;
	sub_826D6AF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// clrlwi r9,r30,26
	ctx.r9.u64 = ctx.r30.u32 & 0x3F;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// std r20,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r20.u64);
	// stw r20,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r20.u32);
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwimi r11,r19,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r19.u32, 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// oris r10,r10,9216
	ctx.r10.u64 = ctx.r10.u64 | 603979776;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// rlwinm r10,r10,0,24,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82227000
	ctx.lr = 0x826D86C4;
	sub_82227000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d7780
	ctx.lr = 0x826D86E0;
	sub_826D7780(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// bl 0x82227120
	ctx.lr = 0x826D86EC;
	sub_82227120(ctx, base);
loc_826D86EC:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// b 0x826d8714
	goto loc_826D8714;
loc_826D86F4:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826d8708
	if (cr6.lt) goto loc_826D8708;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// ble cr6,0x826d870c
	if (!cr6.gt) goto loc_826D870C;
loc_826D8708:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D870C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d8944
	if (!cr0.eq) goto loc_826D8944;
loc_826D8714:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x826d879c
	if (cr6.eq) goto loc_826D879C;
loc_826D871C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826d8730
	if (cr6.eq) goto loc_826D8730;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826d879c
	if (!cr6.eq) goto loc_826D879C;
loc_826D8730:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d7870
	ctx.lr = 0x826D874C;
	sub_826D7870(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826d8764
	if (cr6.eq) goto loc_826D8764;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826d871c
	if (!cr6.eq) goto loc_826D871C;
loc_826D8764:
	// addi r11,r17,4
	ctx.r11.s64 = ctx.r17.s64 + 4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r30.u32);
	// addi r17,r17,12
	ctx.r17.s64 = ctx.r17.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,668(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 668);
	// lwz r10,664(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d871c
	if (cr6.lt) goto loc_826D871C;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
loc_826D879C:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x826d8824
	if (cr6.eq) goto loc_826D8824;
loc_826D87A4:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826d87b8
	if (cr6.eq) goto loc_826D87B8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826d8824
	if (!cr6.eq) goto loc_826D8824;
loc_826D87B8:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d7870
	ctx.lr = 0x826D87D4;
	sub_826D7870(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826d87ec
	if (cr6.eq) goto loc_826D87EC;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826d87a4
	if (!cr6.eq) goto loc_826D87A4;
loc_826D87EC:
	// addi r11,r18,4
	ctx.r11.s64 = ctx.r18.s64 + 4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r30.u32);
	// addi r18,r18,12
	ctx.r18.s64 = ctx.r18.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,692(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 692);
	// lwz r10,688(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 688);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d87a4
	if (cr6.lt) goto loc_826D87A4;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
loc_826D8824:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_826D8828:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_826D8830:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d883c
	if (cr0.eq) goto loc_826D883C;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_826D883C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826d81ac
	if (!cr6.eq) goto loc_826D81AC;
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8858
	if (cr0.eq) goto loc_826D8858;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D8858:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d807c
	if (!cr6.eq) goto loc_826D807C;
loc_826D8864:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x826d88b0
	if (cr6.eq) goto loc_826D88B0;
loc_826D8870:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82227220
	ctx.lr = 0x826D887C;
	sub_82227220(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,18,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r11,17,22,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x826d8870
	if (!cr0.eq) goto loc_826D8870;
loc_826D88B0:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8a14
	if (cr0.eq) goto loc_826D8A14;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x826d8a14
	if (cr6.eq) goto loc_826D8A14;
loc_826D88C4:
	// cmplw cr6,r29,r15
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x826d88d8
	if (cr6.eq) goto loc_826D88D8;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d8a14
	if (!cr0.eq) goto loc_826D8A14;
loc_826D88D8:
	// lwz r30,28(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x826d89e0
	goto loc_826D89E0;
loc_826D88E0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d6610
	ctx.lr = 0x826D88F4;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi r4,r11,17
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFF;
	// mulli r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8930
	if (cr0.eq) goto loc_826D8930;
	// bl 0x826d69f0
	ctx.lr = 0x826D8920;
	sub_826D69F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3507
	ctx.r4.s64 = 3507;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D8930;
	sub_826C4438(ctx, base);
loc_826D8930:
	// bl 0x826d69f0
	ctx.lr = 0x826D8934;
	sub_826D69F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3526
	ctx.r4.s64 = 3526;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D8944;
	sub_826C4438(ctx, base);
loc_826D8944:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,10132
	ctx.r5.s64 = ctx.r11.s64 + 10132;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D8958;
	sub_826C4438(ctx, base);
loc_826D8958:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x826d898c
	if (cr6.eq) goto loc_826D898C;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x826d898c
	if (cr6.eq) goto loc_826D898C;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x826d898c
	if (cr6.eq) goto loc_826D898C;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x826d898c
	if (cr6.eq) goto loc_826D898C;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x826d8990
	if (!cr6.eq) goto loc_826D8990;
loc_826D898C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_826D8990:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d89d8
	if (cr0.eq) goto loc_826D89D8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826D89B0;
	sub_826D6610(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x82227220
	ctx.lr = 0x826D89C4;
	sub_82227220(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r11,r10,0,0,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFE000) | (ctx.r11.u64 & 0xFFFFFFFF00001FFF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_826D89D8:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_826D89E0:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d89ec
	if (cr0.eq) goto loc_826D89EC;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_826D89EC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x826d8958
	if (!cr6.eq) goto loc_826D8958;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8a08
	if (cr0.eq) goto loc_826D8A08;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D8A08:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d88c4
	if (!cr6.eq) goto loc_826D88C4;
loc_826D8A14:
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x826d8c00
	if (cr6.eq) goto loc_826D8C00;
	// li r29,3
	ctx.r29.s64 = 3;
loc_826D8A24:
	// cmplw cr6,r27,r15
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x826d8a38
	if (cr6.eq) goto loc_826D8A38;
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d8c00
	if (!cr0.eq) goto loc_826D8C00;
loc_826D8A38:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d8ae0
	if (!cr0.eq) goto loc_826D8AE0;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d8ae0
	if (!cr0.eq) goto loc_826D8AE0;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r11.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8ae0
	if (cr0.eq) goto loc_826D8AE0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10496
	cr6.compare<uint32_t>(ctx.r11.u32, 10496, ctx.xer);
	// bne cr6,0x826d8ae0
	if (!cr6.eq) goto loc_826D8AE0;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8a84
	if (cr0.eq) goto loc_826D8A84;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D8A84:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d8aac
	if (cr6.eq) goto loc_826D8AAC;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm. r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8a9c
	if (cr0.eq) goto loc_826D8A9C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D8A9C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d8aac
	if (cr6.eq) goto loc_826D8AAC;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x826d8ab4
	goto loc_826D8AB4;
loc_826D8AAC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227120
	ctx.lr = 0x826D8AB4;
	sub_82227120(ctx, base);
loc_826D8AB4:
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227220
	ctx.lr = 0x826D8AC0;
	sub_82227220(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x826d8ae0
	if (cr6.eq) goto loc_826D8AE0;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x826d8c20
	if (!cr6.eq) goto loc_826D8C20;
	// rlwimi r11,r19,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r19.u32, 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_826D8AE0:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8be0
	if (cr0.eq) goto loc_826D8BE0;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,76(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8b04
	if (cr0.eq) goto loc_826D8B04;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D8B04:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d8b2c
	if (cr6.eq) goto loc_826D8B2C;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm. r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8b1c
	if (cr0.eq) goto loc_826D8B1C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D8B1C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d8b2c
	if (cr6.eq) goto loc_826D8B2C;
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x826d8bd8
	goto loc_826D8BD8;
loc_826D8B2C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227120
	ctx.lr = 0x826D8B34;
	sub_82227120(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826d8bd8
	goto loc_826D8BD8;
loc_826D8B3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227220
	ctx.lr = 0x826D8B48;
	sub_82227220(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x826d8b98
	if (!cr6.eq) goto loc_826D8B98;
	// lwz r10,64(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// rlwinm. r10,r10,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8b8c
	if (cr0.eq) goto loc_826D8B8C;
	// rlwimi r11,r29,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_826D8B6C:
	// lbz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 48);
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r11,17,22,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// b 0x826d8bd0
	goto loc_826D8BD0;
loc_826D8B8C:
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// b 0x826d8bc0
	goto loc_826D8BC0;
loc_826D8B98:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x826d8bd4
	if (!cr6.eq) goto loc_826D8BD4;
	// lwz r10,64(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// rlwinm. r10,r10,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8bbc
	if (cr0.eq) goto loc_826D8BBC;
	// rlwimi r11,r19,14,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r19.u32, 14) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x826d8b6c
	goto loc_826D8B6C;
loc_826D8BBC:
	// rlwimi r11,r29,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
loc_826D8BC0:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lbz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 48);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r11,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
loc_826D8BD0:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_826D8BD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_826D8BD8:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x826d8b3c
	if (cr6.lt) goto loc_826D8B3C;
loc_826D8BE0:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8bf4
	if (cr0.eq) goto loc_826D8BF4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D8BF4:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d8a24
	if (!cr6.eq) goto loc_826D8A24;
loc_826D8C00:
	// lwz r11,12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d8c2c
	if (cr6.eq) goto loc_826D8C2C;
	// lwz r11,668(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 668);
	// lwz r10,664(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x826d8c30
	goto loc_826D8C30;
loc_826D8C20:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D8C2C;
	sub_826C4438(ctx, base);
loc_826D8C2C:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_826D8C30:
	// lwz r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d8c50
	if (cr6.eq) goto loc_826D8C50;
	// lwz r11,692(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 692);
	// lwz r10,688(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 688);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x826d8c54
	goto loc_826D8C54;
loc_826D8C50:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_826D8C54:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x826d8de0
	if (cr6.eq) goto loc_826D8DE0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82482408
	ctx.lr = 0x826D8C64;
	sub_82482408(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82226bb0
	ctx.lr = 0x826D8C70;
	sub_82226BB0(ctx, base);
	// lwz r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d8cdc
	if (cr0.eq) goto loc_826D8CDC;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// divw r4,r11,r10
	ctx.r4.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bl 0x826bde20
	ctx.lr = 0x826D8C90;
	sub_826BDE20(ctx, base);
	// lwz r31,16(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// b 0x826d8cd4
	goto loc_826D8CD4;
loc_826D8C9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// beq 0x826d8cc8
	if (cr0.eq) goto loc_826D8CC8;
	// bl 0x826bde28
	ctx.lr = 0x826D8CC4;
	sub_826BDE28(ctx, base);
	// b 0x826d8ccc
	goto loc_826D8CCC;
loc_826D8CC8:
	// bl 0x826bde30
	ctx.lr = 0x826D8CCC;
	sub_826BDE30(ctx, base);
loc_826D8CCC:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_826D8CD4:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x826d8c9c
	if (cr6.lt) goto loc_826D8C9C;
loc_826D8CDC:
	// lwz r29,16(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826bde08
	ctx.lr = 0x826D8CEC;
	sub_826BDE08(ctx, base);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826d8d60
	if (cr6.eq) goto loc_826D8D60;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_826D8CFC:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d8d20
	if (!cr6.eq) goto loc_826D8D20;
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
loc_826D8D20:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x826d8d34
	if (cr0.eq) goto loc_826D8D34;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x826d8d38
	goto loc_826D8D38;
loc_826D8D34:
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
loc_826D8D38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x826be700
	ctx.lr = 0x826D8D50;
	sub_826BE700(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x826d8cfc
	if (cr6.lt) goto loc_826D8CFC;
loc_826D8D60:
	// lwz r31,12(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// b 0x826d8dd8
	goto loc_826D8DD8;
loc_826D8D68:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r10,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,20480
	cr6.compare<uint32_t>(ctx.r11.u32, 20480, ctx.xer);
	// bne cr6,0x826d8dd4
	if (!cr6.eq) goto loc_826D8DD4;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826d8d8c
	if (cr0.eq) goto loc_826D8D8C;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// b 0x826d8da8
	goto loc_826D8DA8;
loc_826D8D8C:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826d8d9c
	if (cr0.eq) goto loc_826D8D9C;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// b 0x826d8da8
	goto loc_826D8DA8;
loc_826D8D9C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
loc_826D8DA8:
	// rlwinm r8,r10,30,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm r8,r11,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r7,r11,4,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// rlwinm r5,r11,18,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// clrlwi r4,r11,18
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFF;
	// bl 0x826bde10
	ctx.lr = 0x826D8DD4;
	sub_826BDE10(ctx, base);
loc_826D8DD4:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
loc_826D8DD8:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x826d8d68
	if (cr6.lt) goto loc_826D8D68;
loc_826D8DE0:
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8df8
	if (cr0.eq) goto loc_826D8DF8;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// beq 0x826d8dfc
	if (cr0.eq) goto loc_826D8DFC;
loc_826D8DF8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D8DFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8e34
	if (cr0.eq) goto loc_826D8E34;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82226b50
	ctx.lr = 0x826D8E0C;
	sub_82226B50(ctx, base);
	// lwz r11,20(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d8e34
	if (cr6.eq) goto loc_826D8E34;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227120
	ctx.lr = 0x826D8E20;
	sub_82227120(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,20(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x826ba760
	ctx.lr = 0x826D8E34;
	sub_826BA760(ctx, base);
loc_826D8E34:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r17,12(r14)
	PPC_STORE_U32(ctx.r14.u32 + 12, ctx.r17.u32);
	// stw r18,16(r14)
	PPC_STORE_U32(ctx.r14.u32 + 16, ctx.r18.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826D8E48"))) PPC_WEAK_FUNC(sub_826D8E48);
PPC_FUNC_IMPL(__imp__sub_826D8E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x826D8E50;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r6,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// lis r16,-1
	ctx.r16.s64 = -65536;
	// stw r7,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,128
	ctx.r31.s64 = 128;
	// lwz r11,44(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r16,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r16.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8ea4
	if (cr0.eq) goto loc_826D8EA4;
	// li r31,132
	ctx.r31.s64 = 132;
loc_826D8EA4:
	// lwz r11,40(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d8ec4
	if (cr0.eq) goto loc_826D8EC4;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq 0x826d8ec8
	if (cr0.eq) goto loc_826D8EC8;
loc_826D8EC4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D8EC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8ed4
	if (cr0.eq) goto loc_826D8ED4;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
loc_826D8ED4:
	// bl 0x822277d8
	ctx.lr = 0x826D8ED8;
	sub_822277D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x82226b28
	ctx.lr = 0x826D8EE4;
	sub_82226B28(ctx, base);
	// lwz r6,52(r15)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + 52);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x826d8f08
	if (cr0.eq) goto loc_826D8F08;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d8f08
	if (cr0.eq) goto loc_826D8F08;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_826D8F08:
	// lwz r11,44(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 44);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r16,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r16.s64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826d9068
	if (cr0.eq) goto loc_826D9068;
	// lwz r11,332(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 332);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826d8f9c
	if (!cr6.gt) goto loc_826D8F9C;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r15,124
	ctx.r10.s64 = ctx.r15.s64 + 124;
loc_826D8F50:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x826d8f70
	if (cr6.gt) goto loc_826D8F70;
	// rlwinm r4,r5,12,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xF;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x826d8f70
	if (!cr6.gt) goto loc_826D8F70;
	// rlwimi r5,r11,20,8,11
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF00000) | (ctx.r5.u64 & 0xFFFFFFFFFF0FFFFF);
loc_826D8F70:
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x826d8f80
	if (!cr6.eq) goto loc_826D8F80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// b 0x826d8f8c
	goto loc_826D8F8C;
loc_826D8F80:
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x826d8f8c
	if (!cr6.eq) goto loc_826D8F8C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_826D8F8C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x826d8f50
	if (!cr0.eq) goto loc_826D8F50;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_826D8F9C:
	// rlwinm r11,r7,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826d9050
	if (cr6.lt) goto loc_826D9050;
	// beq cr6,0x826d9044
	if (cr6.eq) goto loc_826D9044;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826d9038
	if (cr6.lt) goto loc_826D9038;
	// beq cr6,0x826d8fcc
	if (cr6.eq) goto loc_826D8FCC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D8FCC;
	sub_826C4438(ctx, base);
loc_826D8FCC:
	// rlwimi r5,r30,25,5,7
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r30.u32, 25) & 0x7000000) | (ctx.r5.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_826D8FD4:
	// lis r4,16961
	ctx.r4.s64 = 1111556096;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,21571
	ctx.r4.u64 = ctx.r4.u64 | 21571;
	// bl 0x82645028
	ctx.lr = 0x826D8FE4;
	sub_82645028(ctx, base);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// std r20,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r20.u64);
	// std r20,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r20.u64);
	// stw r20,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r20.u32);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r14,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r14.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// bl 0x826450d8
	ctx.lr = 0x826D9020;
	sub_826450D8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x826d91f4
	if (!cr0.lt) goto loc_826D91F4;
	// li r4,3524
	ctx.r4.s64 = 3524;
	// stw r5,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r5.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D9038;
	sub_826C4438(ctx, base);
loc_826D9038:
	// rlwinm r11,r5,0,8,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x826d8fd4
	goto loc_826D8FD4;
loc_826D9044:
	// li r4,3546
	ctx.r4.s64 = 3546;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D9050;
	sub_826C4438(ctx, base);
loc_826D9050:
	// oris r11,r5,1792
	ctx.r11.u64 = ctx.r5.u64 | 117440512;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826d8fd4
	if (cr6.eq) goto loc_826D8FD4;
	// stw r30,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r30.u32);
	// b 0x826d8fd4
	goto loc_826D8FD4;
loc_826D9068:
	// lwz r11,532(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 532);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826d8fd4
	if (!cr6.gt) goto loc_826D8FD4;
	// addi r31,r15,344
	ctx.r31.s64 = ctx.r15.s64 + 344;
loc_826D907C:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14080
	ctx.r11.s64 = ctx.r11.s64 + -14080;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d91dc
	if (!cr0.eq) goto loc_826D91DC;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_826D909C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d90f4
	if (cr6.eq) goto loc_826D90F4;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// subf r10,r20,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r20.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x826d90ec
	if (cr0.eq) goto loc_826D90EC;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x826d90ec
	if (cr0.eq) goto loc_826D90EC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x826d90f4
	if (!cr6.eq) goto loc_826D90F4;
loc_826D90EC:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x826d909c
	goto loc_826D909C;
loc_826D90F4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d919c
	if (cr0.eq) goto loc_826D919C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x826d9180
	if (cr6.eq) goto loc_826D9180;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x826d91b8
	if (!cr6.eq) goto loc_826D91B8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d91dc
	if (cr6.eq) goto loc_826D91DC;
	// oris r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 262144;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_826D9124:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d9150
	if (cr6.eq) goto loc_826D9150;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x826d9150
	if (!cr0.eq) goto loc_826D9150;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826d9124
	goto loc_826D9124;
loc_826D9150:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,18,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x2;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r9,r11,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r9,3,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFF00;
	// rlwinm r8,r8,0,24,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x826d91dc
	goto loc_826D91DC;
loc_826D9180:
	// rlwinm. r11,r10,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E0;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d91b8
	if (!cr0.eq) goto loc_826D91B8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d91dc
	if (cr6.eq) goto loc_826D91DC;
	// li r4,3549
	ctx.r4.s64 = 3549;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D919C;
	sub_826C4438(ctx, base);
loc_826D919C:
	// rlwinm. r11,r10,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E0;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d91b8
	if (!cr0.eq) goto loc_826D91B8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d91dc
	if (cr6.eq) goto loc_826D91DC;
	// li r4,3548
	ctx.r4.s64 = 3548;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D91B8;
	sub_826C4438(ctx, base);
loc_826D91B8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826d91dc
	if (!cr6.eq) goto loc_826D91DC;
	// rlwinm. r11,r10,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d91dc
	if (!cr0.eq) goto loc_826D91DC;
	// li r4,3595
	ctx.r4.s64 = 3595;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c44d0
	ctx.lr = 0x826D91D8;
	sub_826C44D0(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826D91DC:
	// lwz r11,532(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 532);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d907c
	if (cr6.lt) goto loc_826D907C;
	// b 0x826d8fd4
	goto loc_826D8FD4;
loc_826D91F4:
	// lwz r31,16(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x826d922c
	if (cr0.eq) goto loc_826D922C;
	// lwz r9,12(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_826D920C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x826d67a8
	ctx.lr = 0x826D9214;
	sub_826D67A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9220
	if (cr0.eq) goto loc_826D9220;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_826D9220:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// bne 0x826d920c
	if (!cr0.eq) goto loc_826D920C;
loc_826D922C:
	// stw r18,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r18.u32);
	// li r21,-1
	ctx.r21.s64 = -1;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x826d9824
	if (cr6.eq) goto loc_826D9824;
	// rlwinm r25,r18,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x826d71a8
	ctx.lr = 0x826D9250;
	sub_826D71A8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826d9354
	if (cr6.eq) goto loc_826D9354;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// addi r26,r11,28968
	ctx.r26.s64 = ctx.r11.s64 + 28968;
loc_826D9278:
	// lwz r11,12(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// add r9,r23,r11
	ctx.r9.u64 = ctx.r23.u64 + ctx.r11.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x826d67a8
	ctx.lr = 0x826D9288;
	sub_826D67A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9348
	if (cr0.eq) goto loc_826D9348;
	// stwx r9,r24,r27
	PPC_STORE_U32(ctx.r24.u32 + ctx.r27.u32, ctx.r9.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r28,r11,24
	ctx.r28.s64 = ctx.r11.s64 + 24;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9344
	if (cr0.eq) goto loc_826D9344;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x826d9344
	if (cr6.eq) goto loc_826D9344;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826D92C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826d92c4
	if (!cr6.eq) goto loc_826D92C4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826d7250
	ctx.lr = 0x826D92F4;
	sub_826D7250(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x828d5e30
	ctx.lr = 0x826D9308;
	sub_828D5E30(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// bne cr6,0x826d933c
	if (!cr6.eq) goto loc_826D933C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826d71a8
	ctx.lr = 0x826D9324;
	sub_826D71A8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826d71a8
	ctx.lr = 0x826D9338;
	sub_826D71A8(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
loc_826D933C:
	// stwx r29,r19,r27
	PPC_STORE_U32(ctx.r19.u32 + ctx.r27.u32, ctx.r29.u32);
	// stwx r28,r17,r27
	PPC_STORE_U32(ctx.r17.u32 + ctx.r27.u32, ctx.r28.u32);
loc_826D9344:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_826D9348:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r23,r23,40
	ctx.r23.s64 = ctx.r23.s64 + 40;
	// bne 0x826d9278
	if (!cr0.eq) goto loc_826D9278;
loc_826D9354:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,26288
	ctx.r6.s64 = ctx.r11.s64 + 26288;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x828d36f0
	ctx.lr = 0x826D936C;
	sub_828D36F0(ctx, base);
	// mulli r31,r18,20
	ctx.r31.s64 = ctx.r18.s64 * 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826d71a8
	ctx.lr = 0x826D9380;
	sub_826D71A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826450d8
	ctx.lr = 0x826D939C;
	sub_826450D8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x826d93b4
	if (!cr0.lt) goto loc_826D93B4;
	// li r4,3524
	ctx.r4.s64 = 3524;
	// stw r5,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r5.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D93B4;
	sub_826C4438(ctx, base);
loc_826D93B4:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x826d97e8
	if (cr6.eq) goto loc_826D97E8;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r22,r30,6
	ctx.r22.s64 = ctx.r30.s64 + 6;
	// lfd f29,24736(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24736);
	// lfs f30,2548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2548);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,10548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	ctx.f31.f64 = double(temp.f32);
loc_826D93D8:
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r21,r22,-6
	ctx.r21.s64 = ctx.r22.s64 + -6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d67a8
	ctx.lr = 0x826D93E8;
	sub_826D67A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d97cc
	if (cr0.eq) goto loc_826D97CC;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d9858
	if (!cr6.eq) goto loc_826D9858;
	// lwz r11,12(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// rlwinm r30,r9,29,18,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3FFF;
	// divw r4,r11,r10
	ctx.r4.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bl 0x826d69f0
	ctx.lr = 0x826D9420;
	sub_826D69F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826450d8
	ctx.lr = 0x826D9438;
	sub_826450D8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x826d9868
	if (cr0.lt) goto loc_826D9868;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// sth r11,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1FF;
	// sth r11,2(r22)
	PPC_STORE_U16(ctx.r22.u32 + 2, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// sth r11,-2(r22)
	PPC_STORE_U16(ctx.r22.u32 + -2, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826d9500
	if (cr6.lt) goto loc_826D9500;
	// beq cr6,0x826d94cc
	if (cr6.eq) goto loc_826D94CC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826d9534
	if (cr6.lt) goto loc_826D9534;
	// bne cr6,0x826d9878
	if (!cr6.eq) goto loc_826D9878;
	// lwz r11,712(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 712);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d9498
	if (cr6.eq) goto loc_826D9498;
	// lwz r11,708(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 708);
	// b 0x826d94c0
	goto loc_826D94C0;
loc_826D9498:
	// lwz r11,44(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r16,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r16.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x10;
loc_826D94C0:
	// lhz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x826d9530
	goto loc_826D9530;
loc_826D94CC:
	// lwz r11,44(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r16,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r16.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9534
	if (cr0.eq) goto loc_826D9534;
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x826d9530
	goto loc_826D9530;
loc_826D9500:
	// lwz r11,44(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r16,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r16.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9534
	if (cr0.eq) goto loc_826D9534;
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
loc_826D9530:
	// sth r11,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r11.u16);
loc_826D9534:
	// addi r7,r22,6
	ctx.r7.s64 = ctx.r22.s64 + 6;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826680b8
	ctx.lr = 0x826D954C;
	sub_826680B8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x826d9884
	if (cr0.lt) goto loc_826D9884;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,0,26,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x826d97cc
	if (cr6.eq) goto loc_826D97CC;
	// lwz r25,16(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d9580
	if (!cr6.eq) goto loc_826D9580;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d97cc
	if (cr6.eq) goto loc_826D97CC;
loc_826D9580:
	// lhz r11,2(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 2);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r26,r11,0,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r23,r26,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x826d71a8
	ctx.lr = 0x826D95A4;
	sub_826D71A8(ctx, base);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,40(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r30,r30,r11
	ctx.r30.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	// beq 0x826d95e8
	if (cr0.eq) goto loc_826D95E8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8272e378
	ctx.lr = 0x826D95E4;
	sub_8272E378(ctx, base);
	// lwz r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_826D95E8:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d9614
	if (cr6.eq) goto loc_826D9614;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x826d977c
	if (cr6.eq) goto loc_826D977C;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x8272e3a0
	ctx.lr = 0x826D9608;
	sub_8272E3A0(ctx, base);
	// lwz r27,12(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// b 0x826d962c
	goto loc_826D962C;
loc_826D9614:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826d977c
	if (!cr6.lt) goto loc_826D977C;
	// lwz r11,60(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_826D962C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d9758
	if (cr6.eq) goto loc_826D9758;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x826d977c
	if (!cr6.lt) goto loc_826D977C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r10,29,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x826d970c
	if (cr6.lt) goto loc_826D970C;
	// beq cr6,0x826d96d0
	if (cr6.eq) goto loc_826D96D0;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x826d98a4
	if (!cr6.lt) goto loc_826D98A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x826d96ac
	if (cr6.lt) goto loc_826D96AC;
	// beq cr6,0x826d968c
	if (cr6.eq) goto loc_826D968C;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x826d967c
	if (cr6.lt) goto loc_826D967C;
	// bne cr6,0x826d98b0
	if (!cr6.eq) goto loc_826D98B0;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x826d969c
	goto loc_826D969C;
loc_826D967C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x826d9698
	goto loc_826D9698;
loc_826D968C:
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_826D9698:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_826D969C:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r10,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, temp.u32);
	// b 0x826d9758
	goto loc_826D9758;
loc_826D96AC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d96c0
	if (cr6.eq) goto loc_826D96C0;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x826d96c4
	goto loc_826D96C4;
loc_826D96C0:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_826D96C4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// b 0x826d9758
	goto loc_826D9758;
loc_826D96D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x826d9740
	if (cr6.lt) goto loc_826D9740;
	// beq cr6,0x826d9704
	if (cr6.eq) goto loc_826D9704;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x826d9704
	if (cr6.lt) goto loc_826D9704;
	// bne cr6,0x826d98bc
	if (!cr6.eq) goto loc_826D98BC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// b 0x826d9758
	goto loc_826D9758;
loc_826D9704:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826d9750
	goto loc_826D9750;
loc_826D970C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x826d9740
	if (cr6.lt) goto loc_826D9740;
	// beq cr6,0x826d9740
	if (cr6.eq) goto loc_826D9740;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x826d9740
	if (cr6.lt) goto loc_826D9740;
	// bne cr6,0x826d98c8
	if (!cr6.eq) goto loc_826D98C8;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x826d9750
	if (!cr6.eq) goto loc_826D9750;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826d9750
	goto loc_826D9750;
loc_826D9740:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
loc_826D9750:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
loc_826D9758:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// twllei r30,0
	// divwu r11,r31,r30
	ctx.r11.u32 = ctx.r31.u32 / ctx.r30.u32;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf. r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d95e8
	if (!cr0.eq) goto loc_826D95E8;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x826d95e8
	goto loc_826D95E8;
loc_826D977C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,0,26,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x826d97ac
	if (!cr6.eq) goto loc_826D97AC;
	// rlwinm. r11,r26,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d97ac
	if (cr0.eq) goto loc_826D97AC;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
loc_826D9798:
	// li r9,1
	ctx.r9.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x826d9798
	if (!cr0.eq) goto loc_826D9798;
loc_826D97AC:
	// addi r7,r21,16
	ctx.r7.s64 = ctx.r21.s64 + 16;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826450d8
	ctx.lr = 0x826D97C4;
	sub_826450D8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x826d9894
	if (cr0.lt) goto loc_826D9894;
loc_826D97CC:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r22,r22,20
	ctx.r22.s64 = ctx.r22.s64 + 20;
	// cmplw cr6,r20,r18
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x826d93d8
	if (cr6.lt) goto loc_826D93D8;
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r20,0
	ctx.r20.s64 = 0;
loc_826D97E8:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x826d9824
	if (cr6.eq) goto loc_826D9824;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x826d9824
	if (cr6.eq) goto loc_826D9824;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// subf r8,r19,r17
	ctx.r8.s64 = ctx.r17.s64 - ctx.r19.s64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_826D9804:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826d9818
	if (cr0.eq) goto loc_826D9818;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_826D9818:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x826d9804
	if (!cr0.eq) goto loc_826D9804;
loc_826D9824:
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// std r20,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r20.u64);
	// stw r20,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// bl 0x82617310
	ctx.lr = 0x826D9840;
	sub_82617310(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x826d98d4
	if (!cr0.lt) goto loc_826D98D4;
	// li r4,3524
	ctx.r4.s64 = 3524;
	// stw r5,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r5.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D9858;
	sub_826C4438(ctx, base);
loc_826D9858:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,10176
	ctx.r5.s64 = ctx.r11.s64 + 10176;
	// bl 0x826c4438
	ctx.lr = 0x826D9868;
	sub_826C4438(ctx, base);
loc_826D9868:
	// li r4,3524
	ctx.r4.s64 = 3524;
	// stw r5,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r5.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D9878;
	sub_826C4438(ctx, base);
loc_826D9878:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D9884;
	sub_826C4438(ctx, base);
loc_826D9884:
	// li r4,3524
	ctx.r4.s64 = 3524;
	// stw r5,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r5.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D9894;
	sub_826C4438(ctx, base);
loc_826D9894:
	// li r4,3524
	ctx.r4.s64 = 3524;
	// stw r5,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r5.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D98A4;
	sub_826C4438(ctx, base);
loc_826D98A4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D98B0;
	sub_826C4438(ctx, base);
loc_826D98B0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D98BC;
	sub_826C4438(ctx, base);
loc_826D98BC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D98C8;
	sub_826C4438(ctx, base);
loc_826D98C8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D98D4;
	sub_826C4438(ctx, base);
loc_826D98D4:
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826450d8
	ctx.lr = 0x826D98EC;
	sub_826450D8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x826d9904
	if (!cr0.lt) goto loc_826D9904;
	// li r4,3524
	ctx.r4.s64 = 3524;
	// stw r5,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r5.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D9904;
	sub_826C4438(ctx, base);
loc_826D9904:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// addi r4,r11,10164
	ctx.r4.s64 = ctx.r11.s64 + 10164;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826450d8
	ctx.lr = 0x826D9920;
	sub_826450D8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x826d9938
	if (!cr0.lt) goto loc_826D9938;
	// li r4,3524
	ctx.r4.s64 = 3524;
	// stw r5,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r5.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D9938;
	sub_826C4438(ctx, base);
loc_826D9938:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82645048
	ctx.lr = 0x826D9940;
	sub_82645048(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// cmplwi cr6,r31,32768
	cr6.compare<uint32_t>(ctx.r31.u32, 32768, ctx.xer);
	// ble cr6,0x826d9958
	if (!cr6.gt) goto loc_826D9958;
	// li r4,4548
	ctx.r4.s64 = 4548;
	// bl 0x826c4438
	ctx.lr = 0x826D9958;
	sub_826C4438(ctx, base);
loc_826D9958:
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826d71a8
	ctx.lr = 0x826D9964;
	sub_826D71A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826452c0
	ctx.lr = 0x826D9978;
	sub_826452C0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x826d9990
	if (!cr0.lt) goto loc_826D9990;
	// li r4,3524
	ctx.r4.s64 = 3524;
	// stw r5,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r5.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826D9990;
	sub_826C4438(ctx, base);
loc_826D9990:
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// lwz r22,96(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82226dc8
	ctx.lr = 0x826D99B0;
	sub_82226DC8(ctx, base);
	// lwz r23,92(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x826d99cc
	if (cr6.eq) goto loc_826D99CC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826bc030
	ctx.lr = 0x826D99CC;
	sub_826BC030(ctx, base);
loc_826D99CC:
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d99e0
	if (cr0.eq) goto loc_826D99E0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D99E0:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d9e68
	if (cr6.eq) goto loc_826D9E68;
loc_826D99EC:
	// lwz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9a04
	if (cr0.eq) goto loc_826D9A04;
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
loc_826D9A04:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d9b24
	if (!cr0.eq) goto loc_826D9B24;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r31.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826d9b24
	if (cr0.eq) goto loc_826D9B24;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,86
	cr6.compare<uint32_t>(ctx.r10.u32, 86, ctx.xer);
	// beq cr6,0x826d9a60
	if (cr6.eq) goto loc_826D9A60;
	// cmplwi cr6,r10,87
	cr6.compare<uint32_t>(ctx.r10.u32, 87, ctx.xer);
	// beq cr6,0x826d9a60
	if (cr6.eq) goto loc_826D9A60;
	// cmplwi cr6,r10,89
	cr6.compare<uint32_t>(ctx.r10.u32, 89, ctx.xer);
	// beq cr6,0x826d9a60
	if (cr6.eq) goto loc_826D9A60;
	// cmplwi cr6,r10,90
	cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// beq cr6,0x826d9a60
	if (cr6.eq) goto loc_826D9A60;
	// cmplwi cr6,r10,84
	cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// beq cr6,0x826d9a60
	if (cr6.eq) goto loc_826D9A60;
	// cmplwi cr6,r10,85
	cr6.compare<uint32_t>(ctx.r10.u32, 85, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x826d9a64
	if (!cr6.eq) goto loc_826D9A64;
loc_826D9A60:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826D9A64:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9aec
	if (cr0.eq) goto loc_826D9AEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826D9A84;
	sub_826D6610(ctx, base);
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bne 0x826d9ac4
	if (!cr0.eq) goto loc_826D9AC4;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x826d9b24
	if (!cr6.eq) goto loc_826D9B24;
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826d9b0c
	goto loc_826D9B0C;
loc_826D9AC4:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826d6cb0
	ctx.lr = 0x826D9AD4;
	sub_826D6CB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d9b24
	if (!cr0.eq) goto loc_826D9B24;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x826d9b24
	goto loc_826D9B24;
loc_826D9AEC:
	// cmpwi cr6,r10,82
	cr6.compare<int32_t>(ctx.r10.s32, 82, ctx.xer);
	// bne cr6,0x826d9b24
	if (!cr6.eq) goto loc_826D9B24;
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d9b24
	if (!cr0.eq) goto loc_826D9B24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d9b24
	if (cr6.eq) goto loc_826D9B24;
loc_826D9B0C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9b18
	if (cr0.eq) goto loc_826D9B18;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9B18:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_826D9B24:
	// addi r29,r25,12
	ctx.r29.s64 = ctx.r25.s64 + 12;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_826D9B30:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d9b50
	if (cr6.eq) goto loc_826D9B50;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x826d9b48
	if (cr6.eq) goto loc_826D9B48;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_826D9B48:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826d9b30
	goto loc_826D9B30;
loc_826D9B50:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826d9ca0
	if (cr6.eq) goto loc_826D9CA0;
	// rlwinm r30,r25,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne 0x826d9b70
	if (!cr0.eq) goto loc_826D9B70;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826D9B70:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826d9ca0
	if (cr6.eq) goto loc_826D9CA0;
	// lwz r9,48(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm. r11,r9,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9ba0
	if (cr0.eq) goto loc_826D9BA0;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne 0x826d9b94
	if (!cr0.eq) goto loc_826D9B94;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826D9B94:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d9ca0
	if (!cr0.eq) goto loc_826D9CA0;
loc_826D9BA0:
	// rlwinm. r11,r9,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// beq 0x826d9c54
	if (cr0.eq) goto loc_826D9C54;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826d7300
	ctx.lr = 0x826D9BB4;
	sub_826D7300(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_826D9BE4:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d9c44
	if (cr6.eq) goto loc_826D9C44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x826d9c30
	if (!cr6.eq) goto loc_826D9C30;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// b 0x826d9c0c
	goto loc_826D9C0C;
loc_826D9C04:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_826D9C0C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826d9c04
	if (!cr6.eq) goto loc_826D9C04;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_826D9C30:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826d9be4
	if (!cr6.eq) goto loc_826D9BE4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x826d9be4
	goto loc_826D9BE4;
loc_826D9C44:
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270d7c8
	ctx.lr = 0x826D9C54;
	sub_8270D7C8(ctx, base);
loc_826D9C54:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,89
	ctx.r6.s64 = 89;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82761aa0
	ctx.lr = 0x826D9C70;
	sub_82761AA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826D9C8C;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r28,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r28.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_826D9CA0:
	// lwz r26,48(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm. r11,r26,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9df4
	if (cr0.eq) goto loc_826D9DF4;
	// lwz r11,36(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 36);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d9db0
	if (!cr0.eq) goto loc_826D9DB0;
	// rlwinm. r11,r26,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d9db0
	if (!cr0.eq) goto loc_826D9DB0;
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d9db0
	if (!cr0.eq) goto loc_826D9DB0;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// rlwinm r28,r26,8,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0x1;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9ce8
	if (cr0.eq) goto loc_826D9CE8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9CE8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d9db0
	if (cr6.eq) goto loc_826D9DB0;
loc_826D9CF4:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r31,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 15) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9d14
	if (cr0.eq) goto loc_826D9D14;
	// rlwinm r11,r31,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d9d90
	if (!cr6.eq) goto loc_826D9D90;
	// b 0x826d9d24
	goto loc_826D9D24;
loc_826D9D14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d64b8
	ctx.lr = 0x826D9D1C;
	sub_826D64B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d9d90
	if (!cr0.eq) goto loc_826D9D90;
loc_826D9D24:
	// rlwinm r10,r31,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x826d9d3c
	if (cr6.lt) goto loc_826D9D3C;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826d9d40
	if (!cr6.gt) goto loc_826D9D40;
loc_826D9D3C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9D40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9d70
	if (cr0.eq) goto loc_826D9D70;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x826d9d60
	if (cr6.lt) goto loc_826D9D60;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826d9d64
	if (!cr6.gt) goto loc_826D9D64;
loc_826D9D60:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9D64:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9d70
	if (cr0.eq) goto loc_826D9D70;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_826D9D70:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9d84
	if (cr0.eq) goto loc_826D9D84;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9D84:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d9cf4
	if (!cr6.eq) goto loc_826D9CF4;
loc_826D9D90:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x826d9db0
	if (!cr6.eq) goto loc_826D9DB0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x826d9da8
	if (!cr6.eq) goto loc_826D9DA8;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x826d9db0
	if (!cr6.gt) goto loc_826D9DB0;
loc_826D9DA8:
	// oris r11,r26,512
	ctx.r11.u64 = ctx.r26.u64 | 33554432;
	// stw r11,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
loc_826D9DB0:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9df4
	if (cr0.eq) goto loc_826D9DF4;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// rlwinm r10,r25,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d9df4
	if (!cr0.eq) goto loc_826D9DF4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d9df4
	if (cr6.eq) goto loc_826D9DF4;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9de8
	if (cr0.eq) goto loc_826D9DE8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9DE8:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_826D9DF4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x826d9e34
	if (cr6.eq) goto loc_826D9E34;
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// bne 0x826d9e14
	if (!cr0.eq) goto loc_826D9E14;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826D9E14:
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d9e28
	if (!cr6.eq) goto loc_826D9E28;
loc_826D9E1C:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_826D9E28:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9e5c
	if (cr0.eq) goto loc_826D9E5C;
	// b 0x826d9e58
	goto loc_826D9E58;
loc_826D9E34:
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826d9e48
	if (!cr0.eq) goto loc_826D9E48;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826D9E48:
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826d9e1c
	if (cr6.eq) goto loc_826D9E1C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d9e5c
	if (cr6.eq) goto loc_826D9E5C;
loc_826D9E58:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9E5C:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x826d99ec
	if (!cr6.eq) goto loc_826D99EC;
loc_826D9E68:
	// lwz r11,36(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 36);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9f84
	if (cr0.eq) goto loc_826D9F84;
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// b 0x826d9ef4
	goto loc_826D9EF4;
loc_826D9E7C:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x826d9ed4
	goto loc_826D9ED4;
loc_826D9E84:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// blt cr6,0x826d9e9c
	if (cr6.lt) goto loc_826D9E9C;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// ble cr6,0x826d9eac
	if (!cr6.gt) goto loc_826D9EAC;
loc_826D9E9C:
	// cmplwi cr6,r11,66
	cr6.compare<uint32_t>(ctx.r11.u32, 66, ctx.xer);
	// blt cr6,0x826d9eb4
	if (cr6.lt) goto loc_826D9EB4;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bgt cr6,0x826d9eb4
	if (cr6.gt) goto loc_826D9EB4;
loc_826D9EAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826d9eb8
	goto loc_826D9EB8;
loc_826D9EB4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9EB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826d9ecc
	if (cr0.eq) goto loc_826D9ECC;
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
loc_826D9ECC:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_826D9ED4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9ee0
	if (cr0.eq) goto loc_826D9EE0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9EE0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x826d9e84
	if (!cr6.eq) goto loc_826D9E84;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_826D9EF4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9f00
	if (cr0.eq) goto loc_826D9F00;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9F00:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x826d9e7c
	if (!cr6.eq) goto loc_826D9E7C;
loc_826D9F0C:
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9f60
	if (cr0.eq) goto loc_826D9F60;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x826d9f60
	goto loc_826D9F60;
loc_826D9F24:
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r10,r8,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826d9f60
	if (!cr0.eq) goto loc_826D9F60;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_826D9F34:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d9f54
	if (cr6.eq) goto loc_826D9F54;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,64(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// rlwinm. r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826d9f60
	if (cr0.eq) goto loc_826D9F60;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x826d9f34
	goto loc_826D9F34;
loc_826D9F54:
	// oris r10,r8,8192
	ctx.r10.u64 = ctx.r8.u64 | 536870912;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_826D9F60:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826d9f74
	if (cr0.eq) goto loc_826D9F74;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826D9F74:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d9f24
	if (!cr6.eq) goto loc_826D9F24;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826d9f0c
	if (!cr0.eq) goto loc_826D9F0C;
loc_826D9F84:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x826da084
	if (cr6.eq) goto loc_826DA084;
	// lwz r11,548(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 548);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x826d9fa8
	goto loc_826D9FA8;
loc_826D9F98:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_826D9FA8:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826d9f98
	if (!cr0.eq) goto loc_826D9F98;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826bde18
	ctx.lr = 0x826D9FB8;
	sub_826BDE18(ctx, base);
	// lwz r31,548(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 548);
	// b 0x826d9fd4
	goto loc_826D9FD4;
loc_826D9FC0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x826be708
	ctx.lr = 0x826D9FD0;
	sub_826BE708(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_826D9FD4:
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x826d9fc0
	if (!cr0.eq) goto loc_826D9FC0;
	// lwz r11,684(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 684);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826da084
	if (cr6.eq) goto loc_826DA084;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,676(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 676);
	// bl 0x826bde38
	ctx.lr = 0x826D9FF4;
	sub_826BDE38(ctx, base);
	// lwz r11,672(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 672);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826da00c
	if (cr0.eq) goto loc_826DA00C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826DA00C:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
loc_826DA01C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826da038
	if (cr6.eq) goto loc_826DA038;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x826da03c
	if (!cr6.eq) goto loc_826DA03C;
loc_826DA038:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826DA03C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826da084
	if (!cr0.eq) goto loc_826DA084;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827300e0
	ctx.lr = 0x826DA04C;
	sub_827300E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r5,r11,13
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826da060
	if (!cr6.eq) goto loc_826DA060;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_826DA060:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826da074
	if (!cr6.eq) goto loc_826DA074;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_826DA074:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826bde40
	ctx.lr = 0x826DA07C;
	sub_826BDE40(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x826da01c
	goto loc_826DA01C;
loc_826DA084:
	// lwz r10,664(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 664);
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,688(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 688);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826da0bc
	if (cr0.eq) goto loc_826DA0BC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826DA0BC:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826d7c50
	ctx.lr = 0x826DA0D0;
	sub_826D7C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x826da0f4
	if (cr6.eq) goto loc_826DA0F4;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826bddf8
	ctx.lr = 0x826DA0E8;
	sub_826BDDF8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82226b80
	ctx.lr = 0x826DA0F4;
	sub_82226B80(ctx, base);
loc_826DA0F4:
	// lwz r11,40(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826da10c
	if (cr0.eq) goto loc_826DA10C;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x826da110
	if (cr0.eq) goto loc_826DA110;
loc_826DA10C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826DA110:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826da12c
	if (cr0.eq) goto loc_826DA12C;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826d7c50
	ctx.lr = 0x826DA12C;
	sub_826D7C50(ctx, base);
loc_826DA12C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x826da160
	if (cr6.eq) goto loc_826DA160;
	// lwz r11,52(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 52);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82227030
	ctx.lr = 0x826DA148;
	sub_82227030(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826bddf8
	ctx.lr = 0x826DA154;
	sub_826BDDF8(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82226b80
	ctx.lr = 0x826DA160;
	sub_82226B80(ctx, base);
loc_826DA160:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227268
	ctx.lr = 0x826DA168;
	sub_82227268(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x826da18c
	if (cr6.eq) goto loc_826DA18C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227120
	ctx.lr = 0x826DA178;
	sub_82227120(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x826ba730
	ctx.lr = 0x826DA18C;
	sub_826BA730(ctx, base);
loc_826DA18C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822272c0
	ctx.lr = 0x826DA194;
	sub_822272C0(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8261d480
	ctx.lr = 0x826DA19C;
	sub_8261D480(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x826da1b4
	if (!cr0.lt) goto loc_826DA1B4;
	// li r4,3524
	ctx.r4.s64 = 3524;
	// stw r5,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r5.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826DA1B4;
	sub_826C4438(ctx, base);
loc_826DA1B4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826DA1CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826DA1E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82227350
	ctx.lr = 0x826DA1FC;
	sub_82227350(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82226a70
	ctx.lr = 0x826DA208;
	sub_82226A70(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x826da284
	if (cr6.lt) goto loc_826DA284;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x826da23c
	if (cr6.eq) goto loc_826DA23C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826DA22C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r11,-8632
	ctx.r5.s64 = ctx.r11.s64 + -8632;
	// bl 0x82228168
	ctx.lr = 0x826DA23C;
	sub_82228168(ctx, base);
loc_826DA23C:
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826da284
	if (cr6.eq) goto loc_826DA284;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826DA25C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82617508
	ctx.lr = 0x826DA264;
	sub_82617508(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x826da284
	if (!cr0.lt) goto loc_826DA284;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826DA280;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
loc_826DA284:
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bge cr6,0x826da2ac
	if (!cr6.lt) goto loc_826DA2AC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r31,1360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 1360, ctx.r31.u32);
	// li r4,3524
	ctx.r4.s64 = 3524;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826c4438
	ctx.lr = 0x826DA2AC;
	sub_826C4438(ctx, base);
loc_826DA2AC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82645060
	ctx.lr = 0x826DA2B4;
	sub_82645060(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826DA2C8"))) PPC_WEAK_FUNC(sub_826DA2C8);
PPC_FUNC_IMPL(__imp__sub_826DA2C8) {
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
	// bl 0x826ed298
	ctx.lr = 0x826DA2EC;
	sub_826ED298(ctx, base);
	// addi r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_826DA310"))) PPC_WEAK_FUNC(sub_826DA310);
PPC_FUNC_IMPL(__imp__sub_826DA310) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x826DA344;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r30,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_826DA364"))) PPC_WEAK_FUNC(sub_826DA364);
PPC_FUNC_IMPL(__imp__sub_826DA364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DA368"))) PPC_WEAK_FUNC(sub_826DA368);
PPC_FUNC_IMPL(__imp__sub_826DA368) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x826d6a68
	ctx.lr = 0x826DA390;
	sub_826D6A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// rlwinm r10,r10,0,19,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// rlwimi r11,r30,13,7,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 13) & 0x1FFE000) | (ctx.r11.u64 & 0xFFFFFFFFFE001FFF);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_826DA3D0"))) PPC_WEAK_FUNC(sub_826DA3D0);
PPC_FUNC_IMPL(__imp__sub_826DA3D0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x826DA3D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x826da458
	goto loc_826DA458;
loc_826DA3E8:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826da438
	if (!cr0.eq) goto loc_826DA438;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// b 0x826da438
	goto loc_826DA438;
loc_826DA400:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r7,r7,0,6,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x826da420
	if (cr0.eq) goto loc_826DA420;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA420:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826da400
	if (!cr6.eq) goto loc_826DA400;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826da450
	if (cr6.eq) goto loc_826DA450;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826DA438:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x826da448
	if (cr0.eq) goto loc_826DA448;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA448:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826da400
	if (!cr6.eq) goto loc_826DA400;
loc_826DA450:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_826DA458:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826da464
	if (cr0.eq) goto loc_826DA464;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA464:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x826da3e8
	if (!cr6.eq) goto loc_826DA3E8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x826da608
	goto loc_826DA608;
loc_826DA478:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x826da5e8
	goto loc_826DA5E8;
loc_826DA480:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(ctx.r11.s32, 82, ctx.xer);
	// beq cr6,0x826da5c4
	if (cr6.eq) goto loc_826DA5C4;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x826da4a4
	if (cr6.lt) goto loc_826DA4A4;
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826da4a8
	if (!cr6.gt) goto loc_826DA4A8;
loc_826DA4A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA4A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826da5c4
	if (!cr0.eq) goto loc_826DA5C4;
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826da5e0
	if (cr0.eq) goto loc_826DA5E0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_826DA4BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826da4e8
	if (cr6.eq) goto loc_826DA4E8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x826da4e8
	if (!cr0.eq) goto loc_826DA4E8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826da4bc
	goto loc_826DA4BC;
loc_826DA4E8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x826da5e0
	if (cr6.lt) goto loc_826DA5E0;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// ble cr6,0x826da50c
	if (!cr6.gt) goto loc_826DA50C;
	// addi r11,r11,-62
	ctx.r11.s64 = ctx.r11.s64 + -62;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x826da5e0
	if (cr6.gt) goto loc_826DA5E0;
loc_826DA50C:
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82763138
	ctx.lr = 0x826DA528;
	sub_82763138(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_826DA52C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826da54c
	if (cr6.eq) goto loc_826DA54C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82767eb0
	ctx.lr = 0x826DA544;
	sub_82767EB0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x826da52c
	goto loc_826DA52C;
loc_826DA54C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_826DA550:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826da5e0
	if (cr6.eq) goto loc_826DA5E0;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r9,0
	ctx.r11.s64 = ctx.r9.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826da5bc
	if (cr0.eq) goto loc_826DA5BC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826da5a4
	if (cr0.eq) goto loc_826DA5A4;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x826da5a8
	if (!cr0.eq) goto loc_826DA5A8;
loc_826DA5A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA5A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826da5bc
	if (cr0.eq) goto loc_826DA5BC;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_826DA5BC:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x826da550
	goto loc_826DA550;
loc_826DA5C4:
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82763138
	ctx.lr = 0x826DA5E0;
	sub_82763138(ctx, base);
loc_826DA5E0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_826DA5E8:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826da5f4
	if (cr0.eq) goto loc_826DA5F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA5F4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x826da480
	if (!cr6.eq) goto loc_826DA480;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_826DA608:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826da614
	if (cr0.eq) goto loc_826DA614;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA614:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x826da478
	if (!cr6.eq) goto loc_826DA478;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826DA628"))) PPC_WEAK_FUNC(sub_826DA628);
PPC_FUNC_IMPL(__imp__sub_826DA628) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x826DA630;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x826da3d0
	ctx.lr = 0x826DA63C;
	sub_826DA3D0(ctx, base);
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826da64c
	if (cr0.eq) goto loc_826DA64C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_826DA64C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826da660
	if (cr0.eq) goto loc_826DA660;
	// li r4,0
	ctx.r4.s64 = 0;
loc_826DA660:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82716840
	ctx.lr = 0x826DA694;
	sub_82716840(ctx, base);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826da6a4
	if (cr0.eq) goto loc_826DA6A4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826DA6A4:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// bl 0x8270f728
	ctx.lr = 0x826DA6BC;
	sub_8270F728(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270d7c8
	ctx.lr = 0x826DA6CC;
	sub_8270D7C8(ctx, base);
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,115
	ctx.r6.s64 = 115;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82761aa0
	ctx.lr = 0x826DA6EC;
	sub_82761AA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,90
	ctx.r6.s64 = 90;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bl 0x82761aa0
	ctx.lr = 0x826DA71C;
	sub_82761AA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826da368
	ctx.lr = 0x826DA730;
	sub_826DA368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x826DA73C;
	sub_826ED298(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r11,r9,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x826d6610
	ctx.lr = 0x826DA768;
	sub_826D6610(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// oris r11,r11,3072
	ctx.r11.u64 = ctx.r11.u64 | 201326592;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// bl 0x8272dcd0
	ctx.lr = 0x826DA794;
	sub_8272DCD0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8270f090
	ctx.lr = 0x826DA7A4;
	sub_8270F090(ctx, base);
loc_826DA7A4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x826da870
	goto loc_826DA870;
loc_826DA7AC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13696
	ctx.r11.s64 = ctx.r11.s64 + -13696;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826da868
	if (!cr0.eq) goto loc_826DA868;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_826DA7C8:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x826da868
	if (cr0.eq) goto loc_826DA868;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// lwz r9,48(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// clrlwi r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x826da7fc
	if (cr0.eq) goto loc_826DA7FC;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_826DA7FC:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826da844
	if (cr0.eq) goto loc_826DA844;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826da830
	if (!cr0.eq) goto loc_826DA830;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x826da834
	if (cr0.eq) goto loc_826DA834;
loc_826DA830:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA834:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826da854
	if (cr0.eq) goto loc_826DA854;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x826da854
	if (cr6.eq) goto loc_826DA854;
loc_826DA844:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826edb48
	ctx.lr = 0x826DA854;
	sub_826EDB48(ctx, base);
loc_826DA854:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826da7c8
	if (!cr6.eq) goto loc_826DA7C8;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// b 0x826da7c8
	goto loc_826DA7C8;
loc_826DA868:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_826DA870:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826da87c
	if (cr0.eq) goto loc_826DA87C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA87C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x826da7ac
	if (!cr6.eq) goto loc_826DA7AC;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826da89c
	if (cr0.eq) goto loc_826DA89C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA89C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826da7a4
	if (!cr6.eq) goto loc_826DA7A4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826DA8B0"))) PPC_WEAK_FUNC(sub_826DA8B0);
PPC_FUNC_IMPL(__imp__sub_826DA8B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blelr cr6
	if (!cr6.gt) return;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_826DA8E4:
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r10,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r10.s64;
	// rotlw r10,r9,r10
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, ctx.r10.u8 & 0x1F);
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// bne 0x826da8e4
	if (!cr0.eq) goto loc_826DA8E4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DA908"))) PPC_WEAK_FUNC(sub_826DA908);
PPC_FUNC_IMPL(__imp__sub_826DA908) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826da91c
	if (!cr0.eq) goto loc_826DA91C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826DA91C:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x826da930
	if (cr6.lt) goto loc_826DA930;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// ble cr6,0x826da940
	if (!cr6.gt) goto loc_826DA940;
loc_826DA930:
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// blt cr6,0x826da948
	if (cr6.lt) goto loc_826DA948;
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// bgt cr6,0x826da948
	if (cr6.gt) goto loc_826DA948;
loc_826DA940:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826da94c
	goto loc_826DA94C;
loc_826DA948:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA94C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DA954"))) PPC_WEAK_FUNC(sub_826DA954);
PPC_FUNC_IMPL(__imp__sub_826DA954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DA958"))) PPC_WEAK_FUNC(sub_826DA958);
PPC_FUNC_IMPL(__imp__sub_826DA958) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826da974
	if (cr6.lt) goto loc_826DA974;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x826da978
	if (!cr6.gt) goto loc_826DA978;
loc_826DA974:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826DA978:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826da988
	if (cr0.eq) goto loc_826DA988;
loc_826DA980:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826DA988:
	// cmplwi cr6,r11,104
	cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// blt cr6,0x826da9a0
	if (cr6.lt) goto loc_826DA9A0;
	// cmplwi cr6,r11,105
	cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// ble cr6,0x826da980
	if (!cr6.gt) goto loc_826DA980;
	// cmplwi cr6,r11,118
	cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// beq cr6,0x826da980
	if (cr6.eq) goto loc_826DA980;
loc_826DA9A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DA9A8"))) PPC_WEAK_FUNC(sub_826DA9A8);
PPC_FUNC_IMPL(__imp__sub_826DA9A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x826da9c8
	if (cr6.lt) goto loc_826DA9C8;
	// cmplwi cr6,r10,81
	cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826da9cc
	if (!cr6.gt) goto loc_826DA9CC;
loc_826DA9C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA9CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826daa40
	if (!cr0.eq) goto loc_826DAA40;
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// bne cr6,0x826da9e4
	if (!cr6.eq) goto loc_826DA9E4;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_826DA9E4:
	// blt cr6,0x826da9f4
	if (cr6.lt) goto loc_826DA9F4;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826da9f8
	if (!cr6.gt) goto loc_826DA9F8;
loc_826DA9F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DA9F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826daa08
	if (cr0.eq) goto loc_826DAA08;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_826DAA08:
	// cmplwi cr6,r10,82
	cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// blt cr6,0x826daa1c
	if (cr6.lt) goto loc_826DAA1C;
	// cmplwi cr6,r10,95
	cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826daa20
	if (!cr6.gt) goto loc_826DAA20;
loc_826DAA1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DAA20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826daa48
	if (!cr0.eq) goto loc_826DAA48;
	// cmplwi cr6,r10,105
	cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// beq cr6,0x826daa48
	if (cr6.eq) goto loc_826DAA48;
	// addi r11,r10,-106
	ctx.r11.s64 = ctx.r10.s64 + -106;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
loc_826DAA40:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826DAA48:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DAA50"))) PPC_WEAK_FUNC(sub_826DAA50);
PPC_FUNC_IMPL(__imp__sub_826DAA50) {
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
	// bl 0x826da958
	ctx.lr = 0x826DAA68;
	sub_826DA958(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826daa98
	if (cr0.eq) goto loc_826DAA98;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// blt cr6,0x826daa8c
	if (cr6.lt) goto loc_826DAA8C;
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826daa90
	if (!cr6.gt) goto loc_826DAA90;
loc_826DAA8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DAA90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826daad8
	if (cr0.eq) goto loc_826DAAD8;
loc_826DAA98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// beq cr6,0x826daad8
	if (cr6.eq) goto loc_826DAAD8;
	// cmplwi cr6,r11,106
	cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
	// beq cr6,0x826daad8
	if (cr6.eq) goto loc_826DAAD8;
	// cmplwi cr6,r11,112
	cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// ble cr6,0x826daad0
	if (!cr6.gt) goto loc_826DAAD0;
	// cmplwi cr6,r11,114
	cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// ble cr6,0x826daad8
	if (!cr6.gt) goto loc_826DAAD8;
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// ble cr6,0x826daad0
	if (!cr6.gt) goto loc_826DAAD0;
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// ble cr6,0x826daad8
	if (!cr6.gt) goto loc_826DAAD8;
loc_826DAAD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826daadc
	goto loc_826DAADC;
loc_826DAAD8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826DAADC:
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

__attribute__((alias("__imp__sub_826DAAF0"))) PPC_WEAK_FUNC(sub_826DAAF0);
PPC_FUNC_IMPL(__imp__sub_826DAAF0) {
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
	// bl 0x826daa50
	ctx.lr = 0x826DAB08;
	sub_826DAA50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826dab18
	if (cr0.eq) goto loc_826DAB18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826dab3c
	goto loc_826DAB3C;
loc_826DAB18:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826dab38
	if (cr0.eq) goto loc_826DAB38;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,4095
	cr6.compare<uint32_t>(ctx.r11.u32, 4095, ctx.xer);
	// blt cr6,0x826dab3c
	if (cr6.lt) goto loc_826DAB3C;
loc_826DAB38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826DAB3C:
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

__attribute__((alias("__imp__sub_826DAB50"))) PPC_WEAK_FUNC(sub_826DAB50);
PPC_FUNC_IMPL(__imp__sub_826DAB50) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826dab94
	if (!cr0.eq) goto loc_826DAB94;
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826dab94
	if (!cr0.eq) goto loc_826DAB94;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x826dab7c
	if (cr6.eq) goto loc_826DAB7C;
	// cmplwi cr6,r10,119
	cr6.compare<uint32_t>(ctx.r10.u32, 119, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x826dab80
	if (!cr6.eq) goto loc_826DAB80;
loc_826DAB7C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826DAB80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826dab94
	if (!cr0.eq) goto loc_826DAB94;
	// cmpwi cr6,r10,115
	cr6.compare<int32_t>(ctx.r10.s32, 115, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x826dab98
	if (!cr6.eq) goto loc_826DAB98;
loc_826DAB94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826DAB98:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DABA0"))) PPC_WEAK_FUNC(sub_826DABA0);
PPC_FUNC_IMPL(__imp__sub_826DABA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r10,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r11,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r8,r11,29,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// rlwinm r7,r11,31,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// srw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r4,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwimi r11,r7,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DABEC"))) PPC_WEAK_FUNC(sub_826DABEC);
PPC_FUNC_IMPL(__imp__sub_826DABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DABF0"))) PPC_WEAK_FUNC(sub_826DABF0);
PPC_FUNC_IMPL(__imp__sub_826DABF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826dac10
	if (cr6.lt) goto loc_826DAC10;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x826dac14
	if (!cr6.gt) goto loc_826DAC14;
loc_826DAC10:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826DAC14:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826dac3c
	if (cr6.lt) goto loc_826DAC3C;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// ble cr6,0x826dac34
	if (!cr6.gt) goto loc_826DAC34;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bne cr6,0x826dac3c
	if (!cr6.eq) goto loc_826DAC3C;
loc_826DAC34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826DAC3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DAC44"))) PPC_WEAK_FUNC(sub_826DAC44);
PPC_FUNC_IMPL(__imp__sub_826DAC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DAC48"))) PPC_WEAK_FUNC(sub_826DAC48);
PPC_FUNC_IMPL(__imp__sub_826DAC48) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826dabf0
	ctx.lr = 0x826DAC60;
	sub_826DABF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826dac70
	if (!cr0.eq) goto loc_826DAC70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826dac88
	goto loc_826DAC88;
loc_826DAC70:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r11,r11,-25
	ctx.r11.s64 = ctx.r11.s64 + -25;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_826DAC88:
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

__attribute__((alias("__imp__sub_826DAC9C"))) PPC_WEAK_FUNC(sub_826DAC9C);
PPC_FUNC_IMPL(__imp__sub_826DAC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DACA0"))) PPC_WEAK_FUNC(sub_826DACA0);
PPC_FUNC_IMPL(__imp__sub_826DACA0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x826dace0
	if (cr0.eq) goto loc_826DACE0;
	// rlwinm r6,r8,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DACBC:
	// srw r4,r6,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// slw r5,r5,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// blt cr6,0x826dacbc
	if (cr6.lt) goto loc_826DACBC;
loc_826DACE0:
	// rlwimi r10,r8,19,20,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 19) & 0xFF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF00F);
	// clrlwi r3,r10,20
	ctx.r3.u64 = ctx.r10.u32 & 0xFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DACEC"))) PPC_WEAK_FUNC(sub_826DACEC);
PPC_FUNC_IMPL(__imp__sub_826DACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DACF0"))) PPC_WEAK_FUNC(sub_826DACF0);
PPC_FUNC_IMPL(__imp__sub_826DACF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_826DACF4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dad30
	if (cr6.eq) goto loc_826DAD30;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x826dad20
	if (!cr0.eq) goto loc_826DAD20;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826dacf4
	goto loc_826DACF4;
loc_826DAD20:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x826dad34
	if (!cr0.eq) goto loc_826DAD34;
loc_826DAD30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DAD34:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DAD3C"))) PPC_WEAK_FUNC(sub_826DAD3C);
PPC_FUNC_IMPL(__imp__sub_826DAD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DAD40"))) PPC_WEAK_FUNC(sub_826DAD40);
PPC_FUNC_IMPL(__imp__sub_826DAD40) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x826DAD48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x826dad74
	if (cr6.lt) goto loc_826DAD74;
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x826dad78
	if (!cr6.gt) goto loc_826DAD78;
loc_826DAD74:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826DAD78:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826dad8c
	if (!cr0.eq) goto loc_826DAD8C;
	// cmplwi cr6,r11,118
	cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x826dad90
	if (!cr6.eq) goto loc_826DAD90;
loc_826DAD8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826DAD90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826dae48
	if (!cr0.eq) goto loc_826DAE48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826da9a8
	ctx.lr = 0x826DADA0;
	sub_826DA9A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826dadc4
	if (cr0.eq) goto loc_826DADC4;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x826dadc4
	if (cr6.eq) goto loc_826DADC4;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826dadc4
	if (cr0.eq) goto loc_826DADC4;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x826dae48
	if (!cr6.eq) goto loc_826DAE48;
loc_826DADC4:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x826dae4c
	if (!cr6.eq) goto loc_826DAE4C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_826DADD0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826dae4c
	if (cr6.eq) goto loc_826DAE4C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r9,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826dadf0
	if (cr0.eq) goto loc_826DADF0;
	// rlwinm. r11,r9,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x826dadf4
	if (cr0.eq) goto loc_826DADF4;
loc_826DADF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DADF4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826dae40
	if (cr0.eq) goto loc_826DAE40;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,96
	cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x826dae1c
	if (cr6.lt) goto loc_826DAE1C;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826dae20
	if (!cr6.gt) goto loc_826DAE20;
loc_826DAE1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DAE20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826dae40
	if (cr0.eq) goto loc_826DAE40;
	// rlwinm r11,r9,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826dae48
	if (!cr0.eq) goto loc_826DAE48;
loc_826DAE40:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x826dadd0
	goto loc_826DADD0;
loc_826DAE48:
	// li r29,1
	ctx.r29.s64 = 1;
loc_826DAE4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826DAE58"))) PPC_WEAK_FUNC(sub_826DAE58);
PPC_FUNC_IMPL(__imp__sub_826DAE58) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x826da9a8
	ctx.lr = 0x826DAE74;
	sub_826DA9A8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826dae9c
	if (cr0.eq) goto loc_826DAE9C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826dae9c
	if (cr6.eq) goto loc_826DAE9C;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826dae9c
	if (cr6.eq) goto loc_826DAE9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x826daea0
	goto loc_826DAEA0;
loc_826DAE9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826DAEA0:
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

__attribute__((alias("__imp__sub_826DAEB4"))) PPC_WEAK_FUNC(sub_826DAEB4);
PPC_FUNC_IMPL(__imp__sub_826DAEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DAEB8"))) PPC_WEAK_FUNC(sub_826DAEB8);
PPC_FUNC_IMPL(__imp__sub_826DAEB8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
loc_826DAECC:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826daf38
	if (cr0.eq) goto loc_826DAF38;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826daf08
	if (cr0.eq) goto loc_826DAF08;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// beq 0x826daf0c
	if (cr0.eq) goto loc_826DAF0C;
loc_826DAF08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DAF0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826daf38
	if (cr0.eq) goto loc_826DAF38;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// beq 0x826daf30
	if (cr0.eq) goto loc_826DAF30;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x826daf34
	goto loc_826DAF34;
loc_826DAF30:
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
loc_826DAF34:
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
loc_826DAF38:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x826daecc
	goto loc_826DAECC;
}

__attribute__((alias("__imp__sub_826DAF40"))) PPC_WEAK_FUNC(sub_826DAF40);
PPC_FUNC_IMPL(__imp__sub_826DAF40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DAF44"))) PPC_WEAK_FUNC(sub_826DAF44);
PPC_FUNC_IMPL(__imp__sub_826DAF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DAF48"))) PPC_WEAK_FUNC(sub_826DAF48);
PPC_FUNC_IMPL(__imp__sub_826DAF48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826daff0
	if (cr6.eq) goto loc_826DAFF0;
loc_826DAF54:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_826DAF58:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826dafe4
	if (cr6.eq) goto loc_826DAFE4;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r11,0
	ctx.r10.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x826dafdc
	if (cr0.eq) goto loc_826DAFDC;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826dafdc
	if (!cr6.eq) goto loc_826DAFDC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,0,18,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// addi r7,r7,-13696
	ctx.r7.s64 = ctx.r7.s64 + -13696;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm. r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x826dafdc
	if (!cr0.eq) goto loc_826DAFDC;
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826dafdc
	if (cr0.eq) goto loc_826DAFDC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r7,r10,6,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x826dafdc
	if (!cr0.eq) goto loc_826DAFDC;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r10,12,20,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF00;
	// lbz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// rlwinm r7,r7,12,20,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xF00;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x826daff8
	if (!cr6.eq) goto loc_826DAFF8;
loc_826DAFDC:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x826daf58
	goto loc_826DAF58;
loc_826DAFE4:
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x826daf54
	if (!cr0.eq) goto loc_826DAF54;
loc_826DAFF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826DAFF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DB000"))) PPC_WEAK_FUNC(sub_826DB000);
PPC_FUNC_IMPL(__imp__sub_826DB000) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dacf0
	ctx.lr = 0x826DB020;
	sub_826DACF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826db138
	if (cr0.eq) goto loc_826DB138;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dab50
	ctx.lr = 0x826DB030;
	sub_826DAB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826db138
	if (!cr0.eq) goto loc_826DB138;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,228
	ctx.r30.s64 = 228;
	// bl 0x826dac48
	ctx.lr = 0x826DB044;
	sub_826DAC48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826db074
	if (!cr0.eq) goto loc_826DB074;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// blt cr6,0x826db068
	if (cr6.lt) goto loc_826DB068;
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(ctx.r11.u32, 81, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x826db06c
	if (!cr6.gt) goto loc_826DB06C;
loc_826DB068:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826DB06C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826db0ac
	if (cr0.eq) goto loc_826DB0AC;
loc_826DB074:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r9,r11,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826db0ac
	if (cr6.eq) goto loc_826DB0AC;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// rlwimi r11,r9,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// addi r8,r8,24512
	ctx.r8.s64 = ctx.r8.s64 + 24512;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r30,-1(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_826DB0AC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_826DB0B0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826db138
	if (cr6.eq) goto loc_826DB138;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r9,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826db130
	if (cr0.eq) goto loc_826DB130;
	// cmplwi cr6,r30,228
	cr6.compare<uint32_t>(ctx.r30.u32, 228, ctx.xer);
	// beq cr6,0x826db120
	if (cr6.eq) goto loc_826DB120;
	// rlwinm r11,r9,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r9,r9,0,27,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r8,r11,27,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r7,r11,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// rlwinm r6,r11,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// srw r8,r30,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r30,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r6,r30,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r7,28
	ctx.r8.u64 = ctx.r7.u32 & 0xF;
	// rlwimi r6,r8,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi r11,r6,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_826DB120:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_826DB130:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x826db0b0
	goto loc_826DB0B0;
loc_826DB138:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,0,20,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF000FFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826DB15C"))) PPC_WEAK_FUNC(sub_826DB15C);
PPC_FUNC_IMPL(__imp__sub_826DB15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DB160"))) PPC_WEAK_FUNC(sub_826DB160);
PPC_FUNC_IMPL(__imp__sub_826DB160) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826db17c
	if (!cr0.eq) goto loc_826DB17C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_826DB17C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// b 0x826db1a4
	goto loc_826DB1A4;
loc_826DB198:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_826DB1A4:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// blt cr6,0x826db198
	if (cr6.lt) goto loc_826DB198;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DB1B4"))) PPC_WEAK_FUNC(sub_826DB1B4);
PPC_FUNC_IMPL(__imp__sub_826DB1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DB1B8"))) PPC_WEAK_FUNC(sub_826DB1B8);
PPC_FUNC_IMPL(__imp__sub_826DB1B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// clrldi r9,r4,58
	ctx.r9.u64 = ctx.r4.u64 & 0x3F;
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r4,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// b 0x826db1f4
	goto loc_826DB1F4;
loc_826DB1DC:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x826db214
	if (!cr6.eq) goto loc_826DB214;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_826DB1F4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826db1dc
	if (cr6.lt) goto loc_826DB1DC;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x826db230
	if (!cr6.eq) goto loc_826DB230;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_826DB214:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// cntlzd r11,r10
	ctx.r11.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x826db248
	goto loc_826DB248;
loc_826DB230:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cntlzd r11,r11
	ctx.r11.u64 = ctx.r11.u64 == 0 ? 64 : __builtin_clzll(ctx.r11.u64);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
loc_826DB248:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826DB254"))) PPC_WEAK_FUNC(sub_826DB254);
PPC_FUNC_IMPL(__imp__sub_826DB254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826DB258"))) PPC_WEAK_FUNC(sub_826DB258);
PPC_FUNC_IMPL(__imp__sub_826DB258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x826d6a68
	ctx.lr = 0x826DB280;
	sub_826D6A68(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_826DB28C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826db28c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826DB28C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
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

