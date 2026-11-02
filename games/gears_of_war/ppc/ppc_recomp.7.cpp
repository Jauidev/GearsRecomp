#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821B73FC"))) PPC_WEAK_FUNC(sub_821B73FC);
PPC_FUNC_IMPL(__imp__sub_821B73FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7400"))) PPC_WEAK_FUNC(sub_821B7400);
PPC_FUNC_IMPL(__imp__sub_821B7400) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x821B7408;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821b7484
	if (cr6.eq) goto loc_821B7484;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// bl 0x826125c0
	ctx.lr = 0x821B7430;
	sub_826125C0(ctx, base);
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// rlwinm r30,r28,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,128
	cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// ble cr6,0x821b7450
	if (!cr6.gt) goto loc_821B7450;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821702e0
	ctx.lr = 0x821B744C;
	sub_821702E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821B7450:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82612500
	ctx.lr = 0x821B7474;
	sub_82612500(ctx, base);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_821B7484:
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7494"))) PPC_WEAK_FUNC(sub_821B7494);
PPC_FUNC_IMPL(__imp__sub_821B7494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7498"))) PPC_WEAK_FUNC(sub_821B7498);
PPC_FUNC_IMPL(__imp__sub_821B7498) {
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
	// beq cr6,0x821b7500
	if (cr6.eq) goto loc_821B7500;
	// bl 0x821b7518
	ctx.lr = 0x821B74B8;
	sub_821B7518(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b74d8
	if (cr6.eq) goto loc_821B74D8;
loc_821B74C4:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821b74e8
	if (cr6.eq) goto loc_821B74E8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b74c4
	if (!cr6.eq) goto loc_821B74C4;
loc_821B74D8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b7500
	if (cr6.eq) goto loc_821B7500;
loc_821B74E8:
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
loc_821B7500:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_821B7518"))) PPC_WEAK_FUNC(sub_821B7518);
PPC_FUNC_IMPL(__imp__sub_821B7518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,-12608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b7640
	if (!cr6.eq) goto loc_821B7640;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821B7548;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b75c0
	if (cr6.eq) goto loc_821B75C0;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,31832
	ctx.r6.s64 = ctx.r10.s64 + 31832;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-6312
	ctx.r11.s64 = ctx.r11.s64 + -6312;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// addi r9,r9,-31040
	ctx.r9.s64 = ctx.r9.s64 + -31040;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821B75BC;
	sub_822ED768(ctx, base);
	// b 0x821b75c4
	goto loc_821B75C4;
loc_821B75C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B75C4:
	// stw r3,-12608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12608, ctx.r3.u32);
	// bl 0x821b7b18
	ctx.lr = 0x821B75CC;
	sub_821B7B18(ctx, base);
	// lwz r11,-12608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12608);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b75e8
	if (cr6.eq) goto loc_821B75E8;
	// bl 0x821b7b18
	ctx.lr = 0x821B75DC;
	sub_821B7B18(ctx, base);
	// lwz r11,-12608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12608);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821b75f0
	goto loc_821B75F0;
loc_821B75E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821B75F0:
	// bl 0x82170938
	ctx.lr = 0x821B75F4;
	sub_82170938(ctx, base);
	// lwz r11,-12608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12608);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821B7600;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-12608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12608);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b7640
	if (cr6.eq) goto loc_821B7640;
	// bl 0x82170ba8
	ctx.lr = 0x821B7620;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-12608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12608);
	// bne cr6,0x821b7640
	if (!cr6.eq) goto loc_821B7640;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B763C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-12608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12608);
loc_821B7640:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821B7658"))) PPC_WEAK_FUNC(sub_821B7658);
PPC_FUNC_IMPL(__imp__sub_821B7658) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821B7660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b7694
	if (cr6.eq) goto loc_821B7694;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821B7694;
	sub_82170408(ctx, base);
loc_821B7694:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821B769C;
	sub_8218C838(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b76c0
	if (cr6.eq) goto loc_821B76C0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821B76C0;
	sub_82170408(ctx, base);
loc_821B76C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821B76C8;
	sub_8218C838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B76D4"))) PPC_WEAK_FUNC(sub_821B76D4);
PPC_FUNC_IMPL(__imp__sub_821B76D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B76D8"))) PPC_WEAK_FUNC(sub_821B76D8);
PPC_FUNC_IMPL(__imp__sub_821B76D8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-5136
	ctx.r11.s64 = ctx.r11.s64 + -5136;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B76F0"))) PPC_WEAK_FUNC(sub_821B76F0);
PPC_FUNC_IMPL(__imp__sub_821B76F0) {
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
	// bl 0x821b7740
	ctx.lr = 0x821B7710;
	sub_821B7740(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7728
	if (cr6.eq) goto loc_821B7728;
	// bl 0x82170268
	ctx.lr = 0x821B7724;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B7728:
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

__attribute__((alias("__imp__sub_821B7740"))) PPC_WEAK_FUNC(sub_821B7740);
PPC_FUNC_IMPL(__imp__sub_821B7740) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-5136
	ctx.r11.s64 = ctx.r11.s64 + -5136;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821B7768;
	sub_822A89B8(ctx, base);
	// addi r31,r30,224
	ctx.r31.s64 = ctx.r30.s64 + 224;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b7794
	if (cr6.eq) goto loc_821B7794;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821B7794;
	sub_82170408(ctx, base);
loc_821B7794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821B779C;
	sub_8218C838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821751d8
	ctx.lr = 0x821B77A4;
	sub_821751D8(ctx, base);
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

__attribute__((alias("__imp__sub_821B77BC"))) PPC_WEAK_FUNC(sub_821B77BC);
PPC_FUNC_IMPL(__imp__sub_821B77BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B77C0"))) PPC_WEAK_FUNC(sub_821B77C0);
PPC_FUNC_IMPL(__imp__sub_821B77C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-4528
	ctx.r11.s64 = ctx.r11.s64 + -4528;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B77D8"))) PPC_WEAK_FUNC(sub_821B77D8);
PPC_FUNC_IMPL(__imp__sub_821B77D8) {
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
	// bl 0x821b7828
	ctx.lr = 0x821B77F8;
	sub_821B7828(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7810
	if (cr6.eq) goto loc_821B7810;
	// bl 0x82170268
	ctx.lr = 0x821B780C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B7810:
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

__attribute__((alias("__imp__sub_821B7828"))) PPC_WEAK_FUNC(sub_821B7828);
PPC_FUNC_IMPL(__imp__sub_821B7828) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-4528
	ctx.r11.s64 = ctx.r11.s64 + -4528;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821B7850;
	sub_822A89B8(ctx, base);
	// addi r31,r30,224
	ctx.r31.s64 = ctx.r30.s64 + 224;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b787c
	if (cr6.eq) goto loc_821B787C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821B787C;
	sub_82170408(ctx, base);
loc_821B787C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821B7884;
	sub_8218C838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821751d8
	ctx.lr = 0x821B788C;
	sub_821751D8(ctx, base);
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

__attribute__((alias("__imp__sub_821B78A4"))) PPC_WEAK_FUNC(sub_821B78A4);
PPC_FUNC_IMPL(__imp__sub_821B78A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B78A8"))) PPC_WEAK_FUNC(sub_821B78A8);
PPC_FUNC_IMPL(__imp__sub_821B78A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-4832
	ctx.r11.s64 = ctx.r11.s64 + -4832;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B78C0"))) PPC_WEAK_FUNC(sub_821B78C0);
PPC_FUNC_IMPL(__imp__sub_821B78C0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4832
	ctx.r11.s64 = ctx.r11.s64 + -4832;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821B78EC;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821751d8
	ctx.lr = 0x821B78F4;
	sub_821751D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b790c
	if (cr6.eq) goto loc_821B790C;
	// bl 0x82170268
	ctx.lr = 0x821B7908;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B790C:
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

__attribute__((alias("__imp__sub_821B7924"))) PPC_WEAK_FUNC(sub_821B7924);
PPC_FUNC_IMPL(__imp__sub_821B7924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7928"))) PPC_WEAK_FUNC(sub_821B7928);
PPC_FUNC_IMPL(__imp__sub_821B7928) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x821B7930;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b79a8
	if (!cr6.gt) goto loc_821B79A8;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_821B7954:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x821B7978;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b7988
	if (cr6.eq) goto loc_821B7988;
	// bl 0x82170268
	ctx.lr = 0x821B7988;
	sub_82170268(ctx, base);
loc_821B7988:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b7954
	if (cr6.lt) goto loc_821B7954;
loc_821B79A8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x821b79cc
	if (cr6.eq) goto loc_821B79CC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821B79CC;
	sub_82170408(ctx, base);
loc_821B79CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B79D4"))) PPC_WEAK_FUNC(sub_821B79D4);
PPC_FUNC_IMPL(__imp__sub_821B79D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B79D8"))) PPC_WEAK_FUNC(sub_821B79D8);
PPC_FUNC_IMPL(__imp__sub_821B79D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,-12612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12612);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b7b00
	if (!cr6.eq) goto loc_821B7B00;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821B7A08;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b7a80
	if (cr6.eq) goto loc_821B7A80;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,32432
	ctx.r6.s64 = ctx.r10.s64 + 32432;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-6452
	ctx.r11.s64 = ctx.r11.s64 + -6452;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// addi r9,r9,-31040
	ctx.r9.s64 = ctx.r9.s64 + -31040;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821B7A7C;
	sub_822ED768(ctx, base);
	// b 0x821b7a84
	goto loc_821B7A84;
loc_821B7A80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B7A84:
	// stw r3,-12612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12612, ctx.r3.u32);
	// bl 0x821b7d70
	ctx.lr = 0x821B7A8C;
	sub_821B7D70(ctx, base);
	// lwz r11,-12612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12612);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b7aa8
	if (cr6.eq) goto loc_821B7AA8;
	// bl 0x821b7d70
	ctx.lr = 0x821B7A9C;
	sub_821B7D70(ctx, base);
	// lwz r11,-12612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12612);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821b7ab0
	goto loc_821B7AB0;
loc_821B7AA8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821B7AB0:
	// bl 0x82170938
	ctx.lr = 0x821B7AB4;
	sub_82170938(ctx, base);
	// lwz r11,-12612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12612);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821B7AC0;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-12612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12612);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b7b00
	if (cr6.eq) goto loc_821B7B00;
	// bl 0x82170ba8
	ctx.lr = 0x821B7AE0;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-12612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12612);
	// bne cr6,0x821b7b00
	if (!cr6.eq) goto loc_821B7B00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B7AFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-12612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12612);
loc_821B7B00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821B7B18"))) PPC_WEAK_FUNC(sub_821B7B18);
PPC_FUNC_IMPL(__imp__sub_821B7B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,31436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b7c3c
	if (!cr6.eq) goto loc_821B7C3C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821B7B48;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b7bbc
	if (cr6.eq) goto loc_821B7BBC;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-19208
	ctx.r7.s64 = ctx.r10.s64 + -19208;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,14752
	ctx.r11.s64 = ctx.r11.s64 + 14752;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821B7BB8;
	sub_822ED768(ctx, base);
	// b 0x821b7bc0
	goto loc_821B7BC0;
loc_821B7BBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B7BC0:
	// stw r3,31436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31436, ctx.r3.u32);
	// bl 0x8226c0c8
	ctx.lr = 0x821B7BC8;
	sub_8226C0C8(ctx, base);
	// lwz r11,31436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31436);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b7be4
	if (cr6.eq) goto loc_821B7BE4;
	// bl 0x8226c0c8
	ctx.lr = 0x821B7BD8;
	sub_8226C0C8(ctx, base);
	// lwz r11,31436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31436);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821b7bec
	goto loc_821B7BEC;
loc_821B7BE4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821B7BEC:
	// bl 0x82170938
	ctx.lr = 0x821B7BF0;
	sub_82170938(ctx, base);
	// lwz r11,31436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31436);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821B7BFC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31436);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b7c3c
	if (cr6.eq) goto loc_821B7C3C;
	// bl 0x82170ba8
	ctx.lr = 0x821B7C1C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31436);
	// bne cr6,0x821b7c3c
	if (!cr6.eq) goto loc_821B7C3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B7C38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31436);
loc_821B7C3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821B7C54"))) PPC_WEAK_FUNC(sub_821B7C54);
PPC_FUNC_IMPL(__imp__sub_821B7C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7C58"))) PPC_WEAK_FUNC(sub_821B7C58);
PPC_FUNC_IMPL(__imp__sub_821B7C58) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,-15268
	ctx.r11.s64 = ctx.r11.s64 + -15268;
	// addi r10,r10,-5432
	ctx.r10.s64 = ctx.r10.s64 + -5432;
	// addi r9,r9,-5164
	ctx.r9.s64 = ctx.r9.s64 + -5164;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7C88"))) PPC_WEAK_FUNC(sub_821B7C88);
PPC_FUNC_IMPL(__imp__sub_821B7C88) {
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
	// bl 0x821b7cd8
	ctx.lr = 0x821B7CA8;
	sub_821B7CD8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7cc0
	if (cr6.eq) goto loc_821B7CC0;
	// bl 0x82170268
	ctx.lr = 0x821B7CBC;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B7CC0:
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

__attribute__((alias("__imp__sub_821B7CD8"))) PPC_WEAK_FUNC(sub_821B7CD8);
PPC_FUNC_IMPL(__imp__sub_821B7CD8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5432
	ctx.r11.s64 = ctx.r11.s64 + -5432;
	// addi r10,r10,-5164
	ctx.r10.s64 = ctx.r10.s64 + -5164;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821B7D08;
	sub_822A89B8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-16736
	ctx.r11.s64 = ctx.r11.s64 + -16736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821B7D1C;
	sub_822A89B8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823810d8
	ctx.lr = 0x821B7D24;
	sub_823810D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172b18
	ctx.lr = 0x821B7D2C;
	sub_82172B18(ctx, base);
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

__attribute__((alias("__imp__sub_821B7D40"))) PPC_WEAK_FUNC(sub_821B7D40);
PPC_FUNC_IMPL(__imp__sub_821B7D40) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne cr6,0x821b7d60
	if (!cr6.eq) goto loc_821B7D60;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_821B7D60:
	// addi r11,r4,120
	ctx.r11.s64 = ctx.r4.s64 + 120;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7D6C"))) PPC_WEAK_FUNC(sub_821B7D6C);
PPC_FUNC_IMPL(__imp__sub_821B7D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7D70"))) PPC_WEAK_FUNC(sub_821B7D70);
PPC_FUNC_IMPL(__imp__sub_821B7D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,31572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31572);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b7e94
	if (!cr6.eq) goto loc_821B7E94;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821B7DA0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b7e14
	if (cr6.eq) goto loc_821B7E14;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-21584
	ctx.r7.s64 = ctx.r10.s64 + -21584;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,16672
	ctx.r11.s64 = ctx.r11.s64 + 16672;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821B7E10;
	sub_822ED768(ctx, base);
	// b 0x821b7e18
	goto loc_821B7E18;
loc_821B7E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B7E18:
	// stw r3,31572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31572, ctx.r3.u32);
	// bl 0x8226c0c8
	ctx.lr = 0x821B7E20;
	sub_8226C0C8(ctx, base);
	// lwz r11,31572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31572);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b7e3c
	if (cr6.eq) goto loc_821B7E3C;
	// bl 0x8226c0c8
	ctx.lr = 0x821B7E30;
	sub_8226C0C8(ctx, base);
	// lwz r11,31572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31572);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821b7e44
	goto loc_821B7E44;
loc_821B7E3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821B7E44:
	// bl 0x82170938
	ctx.lr = 0x821B7E48;
	sub_82170938(ctx, base);
	// lwz r11,31572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31572);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821B7E54;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31572);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b7e94
	if (cr6.eq) goto loc_821B7E94;
	// bl 0x82170ba8
	ctx.lr = 0x821B7E74;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31572);
	// bne cr6,0x821b7e94
	if (!cr6.eq) goto loc_821B7E94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B7E90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31572);
loc_821B7E94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821B7EAC"))) PPC_WEAK_FUNC(sub_821B7EAC);
PPC_FUNC_IMPL(__imp__sub_821B7EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7EB0"))) PPC_WEAK_FUNC(sub_821B7EB0);
PPC_FUNC_IMPL(__imp__sub_821B7EB0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,-20064
	ctx.r11.s64 = ctx.r11.s64 + -20064;
	// addi r10,r10,-5696
	ctx.r10.s64 = ctx.r10.s64 + -5696;
	// addi r9,r9,-5448
	ctx.r9.s64 = ctx.r9.s64 + -5448;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B7EE0"))) PPC_WEAK_FUNC(sub_821B7EE0);
PPC_FUNC_IMPL(__imp__sub_821B7EE0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5944
	ctx.r11.s64 = ctx.r11.s64 + -5944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821B7F0C;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172b18
	ctx.lr = 0x821B7F14;
	sub_82172B18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7f2c
	if (cr6.eq) goto loc_821B7F2C;
	// bl 0x82170268
	ctx.lr = 0x821B7F28;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B7F2C:
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

__attribute__((alias("__imp__sub_821B7F44"))) PPC_WEAK_FUNC(sub_821B7F44);
PPC_FUNC_IMPL(__imp__sub_821B7F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7F48"))) PPC_WEAK_FUNC(sub_821B7F48);
PPC_FUNC_IMPL(__imp__sub_821B7F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x821B7F50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32064
	ctx.r10.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-16436(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16436);
	// bl 0x822aa9b0
	ctx.lr = 0x821B7F7C;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B7F98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7FA0"))) PPC_WEAK_FUNC(sub_821B7FA0);
PPC_FUNC_IMPL(__imp__sub_821B7FA0) {
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
	// bl 0x821b7ff0
	ctx.lr = 0x821B7FC0;
	sub_821B7FF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7fd8
	if (cr6.eq) goto loc_821B7FD8;
	// bl 0x82170268
	ctx.lr = 0x821B7FD4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B7FD8:
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

__attribute__((alias("__imp__sub_821B7FF0"))) PPC_WEAK_FUNC(sub_821B7FF0);
PPC_FUNC_IMPL(__imp__sub_821B7FF0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// addi r10,r10,-5448
	ctx.r10.s64 = ctx.r10.s64 + -5448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821B8020;
	sub_822A89B8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821b8198
	ctx.lr = 0x821B8028;
	sub_821B8198(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-5944
	ctx.r11.s64 = ctx.r11.s64 + -5944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821B803C;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172b18
	ctx.lr = 0x821B8044;
	sub_82172B18(ctx, base);
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

__attribute__((alias("__imp__sub_821B8058"))) PPC_WEAK_FUNC(sub_821B8058);
PPC_FUNC_IMPL(__imp__sub_821B8058) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170398
	ctx.lr = 0x821B8080;
	sub_82170398(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b80d8
	if (cr6.eq) goto loc_821B80D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-5988
	ctx.r4.s64 = ctx.r11.s64 + -5988;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364678
	ctx.lr = 0x821B80B8;
	sub_82364678(ctx, base);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_821B80D8:
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

__attribute__((alias("__imp__sub_821B80EC"))) PPC_WEAK_FUNC(sub_821B80EC);
PPC_FUNC_IMPL(__imp__sub_821B80EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B80F0"))) PPC_WEAK_FUNC(sub_821B80F0);
PPC_FUNC_IMPL(__imp__sub_821B80F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170398
	ctx.lr = 0x821B8118;
	sub_82170398(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8144
	if (cr6.eq) goto loc_821B8144;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-6008
	ctx.r4.s64 = ctx.r11.s64 + -6008;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82364678
	ctx.lr = 0x821B8144;
	sub_82364678(ctx, base);
loc_821B8144:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170398
	ctx.lr = 0x821B8158;
	sub_82170398(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8184
	if (cr6.eq) goto loc_821B8184;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-31016
	ctx.r4.s64 = ctx.r11.s64 + -31016;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82364678
	ctx.lr = 0x821B8184;
	sub_82364678(ctx, base);
loc_821B8184:
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

__attribute__((alias("__imp__sub_821B8198"))) PPC_WEAK_FUNC(sub_821B8198);
PPC_FUNC_IMPL(__imp__sub_821B8198) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x821B81A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x821b81e0
	if (!cr6.gt) goto loc_821B81E0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_821B81C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821b7658
	ctx.lr = 0x821B81D0;
	sub_821B7658(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b81c0
	if (!cr6.eq) goto loc_821B81C0;
loc_821B81E0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232ad68
	ctx.lr = 0x821B81F8;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8208
	if (cr6.eq) goto loc_821B8208;
	// bl 0x82170268
	ctx.lr = 0x821B8208;
	sub_82170268(ctx, base);
loc_821B8208:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B821C"))) PPC_WEAK_FUNC(sub_821B821C);
PPC_FUNC_IMPL(__imp__sub_821B821C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8220"))) PPC_WEAK_FUNC(sub_821B8220);
PPC_FUNC_IMPL(__imp__sub_821B8220) {
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
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8248
	if (cr6.eq) goto loc_821B8248;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x821b8250
	goto loc_821B8250;
loc_821B8248:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,16764
	ctx.r5.s64 = ctx.r11.s64 + 16764;
loc_821B8250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8270
	ctx.lr = 0x821B8258;
	sub_821B8270(ctx, base);
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

__attribute__((alias("__imp__sub_821B8270"))) PPC_WEAK_FUNC(sub_821B8270);
PPC_FUNC_IMPL(__imp__sub_821B8270) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82170480
	ctx.lr = 0x821B8294;
	sub_82170480(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82170720
	ctx.lr = 0x821B829C;
	sub_82170720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170480
	ctx.lr = 0x821B82A8;
	sub_82170480(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821b82d0
	if (cr6.eq) goto loc_821B82D0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x821B82D0;
	sub_82170408(ctx, base);
loc_821B82D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x821B82D8;
	sub_8218C838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_821B82F4"))) PPC_WEAK_FUNC(sub_821B82F4);
PPC_FUNC_IMPL(__imp__sub_821B82F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B82F8"))) PPC_WEAK_FUNC(sub_821B82F8);
PPC_FUNC_IMPL(__imp__sub_821B82F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3084
	ctx.r11.s64 = ctx.r11.s64 + -3084;
	// lwz r10,21076(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21076);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x821b834c
	if (!cr6.eq) goto loc_821B834C;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-13964
	ctx.r3.s64 = ctx.r11.s64 + -13964;
	// bl 0x822c7780
	ctx.lr = 0x821B834C;
	sub_822C7780(ctx, base);
loc_821B834C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f30,12(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r11,r11,-3408
	ctx.r11.s64 = ctx.r11.s64 + -3408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B838C"))) PPC_WEAK_FUNC(sub_821B838C);
PPC_FUNC_IMPL(__imp__sub_821B838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8390"))) PPC_WEAK_FUNC(sub_821B8390);
PPC_FUNC_IMPL(__imp__sub_821B8390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-23708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b84b8
	if (!cr6.eq) goto loc_821B84B8;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821B83C0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8438
	if (cr6.eq) goto loc_821B8438;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-19720
	ctx.r7.s64 = ctx.r10.s64 + -19720;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,-18528
	ctx.r9.s64 = ctx.r9.s64 + -18528;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r11,r11,25432
	ctx.r11.s64 = ctx.r11.s64 + 25432;
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,13
	ctx.r6.u64 = ctx.r6.u64 | 13;
	// li r5,20312
	ctx.r5.s64 = 20312;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821B8434;
	sub_822ED768(ctx, base);
	// b 0x821b843c
	goto loc_821B843C;
loc_821B8438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B843C:
	// stw r3,-23708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23708, ctx.r3.u32);
	// bl 0x8228eda0
	ctx.lr = 0x821B8444;
	sub_8228EDA0(ctx, base);
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b8460
	if (cr6.eq) goto loc_821B8460;
	// bl 0x8228eda0
	ctx.lr = 0x821B8454;
	sub_8228EDA0(ctx, base);
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821b8468
	goto loc_821B8468;
loc_821B8460:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821B8468:
	// bl 0x82170938
	ctx.lr = 0x821B846C;
	sub_82170938(ctx, base);
	// lwz r11,-23708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821B8478;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b84b8
	if (cr6.eq) goto loc_821B84B8;
	// bl 0x82170ba8
	ctx.lr = 0x821B8498;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
	// bne cr6,0x821b84b8
	if (!cr6.eq) goto loc_821B84B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B84B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23708);
loc_821B84B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821B84D0"))) PPC_WEAK_FUNC(sub_821B84D0);
PPC_FUNC_IMPL(__imp__sub_821B84D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-23704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b85f8
	if (!cr6.eq) goto loc_821B85F8;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821B8500;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8578
	if (cr6.eq) goto loc_821B8578;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-19536
	ctx.r7.s64 = ctx.r10.s64 + -19536;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,-18288
	ctx.r9.s64 = ctx.r9.s64 + -18288;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r11,r11,25464
	ctx.r11.s64 = ctx.r11.s64 + 25464;
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,12
	ctx.r6.u64 = ctx.r6.u64 | 12;
	// li r5,20316
	ctx.r5.s64 = 20316;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821B8574;
	sub_822ED768(ctx, base);
	// b 0x821b857c
	goto loc_821B857C;
loc_821B8578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B857C:
	// stw r3,-23704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23704, ctx.r3.u32);
	// bl 0x821b8390
	ctx.lr = 0x821B8584;
	sub_821B8390(ctx, base);
	// lwz r11,-23704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b85a0
	if (cr6.eq) goto loc_821B85A0;
	// bl 0x821b8390
	ctx.lr = 0x821B8594;
	sub_821B8390(ctx, base);
	// lwz r11,-23704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821b85a8
	goto loc_821B85A8;
loc_821B85A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821B85A8:
	// bl 0x82170938
	ctx.lr = 0x821B85AC;
	sub_82170938(ctx, base);
	// lwz r11,-23704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821B85B8;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b85f8
	if (cr6.eq) goto loc_821B85F8;
	// bl 0x82170ba8
	ctx.lr = 0x821B85D8;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
	// bne cr6,0x821b85f8
	if (!cr6.eq) goto loc_821B85F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B85F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23704);
loc_821B85F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821B8610"))) PPC_WEAK_FUNC(sub_821B8610);
PPC_FUNC_IMPL(__imp__sub_821B8610) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x821B8618;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,-4136
	ctx.r4.s64 = ctx.r11.s64 + -4136;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364678
	ctx.lr = 0x821B863C;
	sub_82364678(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-4104
	ctx.r4.s64 = ctx.r11.s64 + -4104;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82364678
	ctx.lr = 0x821B8658;
	sub_82364678(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821bcc98
	ctx.lr = 0x821B8660;
	sub_821BCC98(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8760
	if (cr6.eq) goto loc_821B8760;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r11,26968
	ctx.r30.s64 = ctx.r11.s64 + 26968;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_821B868C:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821b86a8
	if (cr6.eq) goto loc_821B86A8;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// b 0x821b86c4
	goto loc_821B86C4;
loc_821B86A8:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364678
	ctx.lr = 0x821B86C0;
	sub_82364678(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_821B86C4:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821b86ec
	if (!cr6.eq) goto loc_821B86EC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x821b86ec
	if (!cr6.eq) goto loc_821B86EC;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x821b8744
	goto loc_821B8744;
loc_821B86EC:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821b8704
	if (cr6.eq) goto loc_821B8704;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// b 0x821b8720
	goto loc_821B8720;
loc_821B8704:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82364678
	ctx.lr = 0x821B871C;
	sub_82364678(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_821B8720:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x821b8744
	if (!cr6.eq) goto loc_821B8744;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x821b8744
	if (!cr6.eq) goto loc_821B8744;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_821B8744:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821bcb70
	ctx.lr = 0x821B874C;
	sub_821BCB70(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b868c
	if (!cr6.eq) goto loc_821B868C;
loc_821B8760:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8768"))) PPC_WEAK_FUNC(sub_821B8768);
PPC_FUNC_IMPL(__imp__sub_821B8768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821B8770;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r11,-31672
	ctx.r5.s64 = ctx.r11.s64 + -31672;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,17204
	ctx.r4.s64 = ctx.r11.s64 + 17204;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8232b480
	ctx.lr = 0x821B8794;
	sub_8232B480(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,-4080
	ctx.r5.s64 = ctx.r11.s64 + -4080;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821b8270
	ctx.lr = 0x821B87A8;
	sub_821B8270(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// beq cr6,0x821b87d0
	if (cr6.eq) goto loc_821B87D0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82170408
	ctx.lr = 0x821B87D0;
	sub_82170408(ctx, base);
loc_821B87D0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8218c838
	ctx.lr = 0x821B87D8;
	sub_8218C838(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b87ec
	if (cr6.eq) goto loc_821B87EC;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x821b87f4
	goto loc_821B87F4;
loc_821B87EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16764
	ctx.r4.s64 = ctx.r11.s64 + 16764;
loc_821B87F4:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-32324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32324);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B8810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8830
	if (cr6.eq) goto loc_821B8830;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8830
	if (cr6.eq) goto loc_821B8830;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x821b8838
	goto loc_821B8838;
loc_821B8830:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,-4228
	ctx.r5.s64 = ctx.r11.s64 + -4228;
loc_821B8838:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bca78
	ctx.lr = 0x821B8844;
	sub_821BCA78(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8868
	if (cr6.eq) goto loc_821B8868;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82170408
	ctx.lr = 0x821B8868;
	sub_82170408(ctx, base);
loc_821B8868:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8218c838
	ctx.lr = 0x821B8870;
	sub_8218C838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B887C"))) PPC_WEAK_FUNC(sub_821B887C);
PPC_FUNC_IMPL(__imp__sub_821B887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8880"))) PPC_WEAK_FUNC(sub_821B8880);
PPC_FUNC_IMPL(__imp__sub_821B8880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x821B8888;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B88A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821b88d4
	if (cr6.lt) goto loc_821B88D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B88D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821b88dc
	goto loc_821B88DC;
loc_821B88D4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_821B88DC:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232b548
	ctx.lr = 0x821B88E8;
	sub_8232B548(ctx, base);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232b548
	ctx.lr = 0x821B88F4;
	sub_8232B548(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232b548
	ctx.lr = 0x821B8900;
	sub_8232B548(ctx, base);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232b548
	ctx.lr = 0x821B890C;
	sub_8232B548(ctx, base);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232b548
	ctx.lr = 0x821B8918;
	sub_8232B548(ctx, base);
	// addi r29,r30,68
	ctx.r29.s64 = ctx.r30.s64 + 68;
	// addi r30,r30,196
	ctx.r30.s64 = ctx.r30.s64 + 196;
	// li r27,2
	ctx.r27.s64 = 2;
loc_821B8924:
	// li r28,4
	ctx.r28.s64 = 4;
loc_821B8928:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232b548
	ctx.lr = 0x821B8934;
	sub_8232B548(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B8950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B896C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821b8928
	if (!cr6.eq) goto loc_821B8928;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821b8924
	if (!cr6.eq) goto loc_821B8924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8998"))) PPC_WEAK_FUNC(sub_821B8998);
PPC_FUNC_IMPL(__imp__sub_821B8998) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-4228
	ctx.r4.s64 = ctx.r11.s64 + -4228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821704f8
	ctx.lr = 0x821B89BC;
	sub_821704F8(ctx, base);
	// addi r5,r31,436
	ctx.r5.s64 = ctx.r31.s64 + 436;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x821b5e48
	ctx.lr = 0x821B89CC;
	sub_821B5E48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821b89f8
	if (cr6.eq) goto loc_821B89F8;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x821B89F8;
	sub_82170408(ctx, base);
loc_821B89F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x821B8A00;
	sub_8218C838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_821B8A18"))) PPC_WEAK_FUNC(sub_821B8A18);
PPC_FUNC_IMPL(__imp__sub_821B8A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27fc
	ctx.lr = 0x821B8A20;
	__savegprlr_21(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r31,r25,420
	ctx.r31.s64 = ctx.r25.s64 + 420;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8a54
	if (cr6.eq) goto loc_821B8A54;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821B8A54;
	sub_82170408(ctx, base);
loc_821B8A54:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x821b5b78
	ctx.lr = 0x821B8A5C;
	sub_821B5B78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r24,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r24.u32);
	// addi r11,r11,-3176
	ctx.r11.s64 = ctx.r11.s64 + -3176;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stw r24,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r24.u32);
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// bl 0x821b91f8
	ctx.lr = 0x821B8A84;
	sub_821B91F8(ctx, base);
	// lwz r11,432(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lwz r11,416(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 416);
	// addi r4,r11,632
	ctx.r4.s64 = ctx.r11.s64 + 632;
	// bl 0x82170670
	ctx.lr = 0x821B8A9C;
	sub_82170670(ctx, base);
	// lwz r11,416(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 416);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// addi r4,r11,644
	ctx.r4.s64 = ctx.r11.s64 + 644;
	// bl 0x82170670
	ctx.lr = 0x821B8AAC;
	sub_82170670(ctx, base);
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// lwz r31,804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b8aec
	if (cr6.eq) goto loc_821B8AEC;
loc_821B8ABC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ded8
	ctx.lr = 0x821B8AC4;
	sub_8218DED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8adc
	if (!cr6.eq) goto loc_821B8ADC;
	// lwz r31,428(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b8abc
	if (!cr6.eq) goto loc_821B8ABC;
	// b 0x821b8aec
	goto loc_821B8AEC;
loc_821B8ADC:
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// lwz r11,732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
loc_821B8AEC:
	// lis r28,-32064
	ctx.r28.s64 = -2101346304;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r27,r10,-7956
	ctx.r27.s64 = ctx.r10.s64 + -7956;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r11,-24420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -24420);
	// addi r26,r10,26968
	ctx.r26.s64 = ctx.r10.s64 + 26968;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b8b44
	if (cr6.eq) goto loc_821B8B44;
loc_821B8B14:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b8b3c
	if (cr6.eq) goto loc_821B8B3C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b8b14
	if (!cr6.eq) goto loc_821B8B14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821704f8
	ctx.lr = 0x821B8B38;
	sub_821704F8(ctx, base);
	// b 0x821b8b78
	goto loc_821B8B78;
loc_821B8B3C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b8b54
	if (!cr6.eq) goto loc_821B8B54;
loc_821B8B44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821704f8
	ctx.lr = 0x821B8B50;
	sub_821704F8(ctx, base);
	// b 0x821b8b78
	goto loc_821B8B78;
loc_821B8B54:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821b8b70
	if (!cr6.eq) goto loc_821B8B70;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821704f8
	ctx.lr = 0x821B8B6C;
	sub_821704F8(ctx, base);
	// b 0x821b8b78
	goto loc_821B8B78;
loc_821B8B70:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x823647f0
	ctx.lr = 0x821B8B78;
	sub_823647F0(ctx, base);
loc_821B8B78:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8b8c
	if (cr6.eq) goto loc_821B8B8C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821b8b94
	goto loc_821B8B94;
loc_821B8B8C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,16764
	ctx.r3.s64 = ctx.r11.s64 + 16764;
loc_821B8B94:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,-4056
	ctx.r4.s64 = ctx.r11.s64 + -4056;
	// bl 0x828d0320
	ctx.lr = 0x821B8BA0;
	sub_828D0320(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lis r23,-32065
	ctx.r23.s64 = -2101411840;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x821b8c04
	if (cr6.eq) goto loc_821B8C04;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8c04
	if (cr6.eq) goto loc_821B8C04;
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8be4
	if (!cr6.eq) goto loc_821B8BE4;
	// bl 0x82216290
	ctx.lr = 0x821B8BE0;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
loc_821B8BE4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B8C00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_821B8C04:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8232ad68
	ctx.lr = 0x821B8C1C;
	sub_8232AD68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8c54
	if (cr6.eq) goto loc_821B8C54;
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8c40
	if (!cr6.eq) goto loc_821B8C40;
	// bl 0x82216290
	ctx.lr = 0x821B8C3C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
loc_821B8C40:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B8C54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B8C54:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// beq cr6,0x821b8c74
	if (cr6.eq) goto loc_821B8C74;
	// lwz r11,-24420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -24420);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_821B8C74:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b8cb0
	if (cr6.eq) goto loc_821B8CB0;
loc_821B8C80:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b8ca8
	if (cr6.eq) goto loc_821B8CA8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b8c80
	if (!cr6.eq) goto loc_821B8C80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821704f8
	ctx.lr = 0x821B8CA4;
	sub_821704F8(ctx, base);
	// b 0x821b8ce4
	goto loc_821B8CE4;
loc_821B8CA8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b8cc0
	if (!cr6.eq) goto loc_821B8CC0;
loc_821B8CB0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821704f8
	ctx.lr = 0x821B8CBC;
	sub_821704F8(ctx, base);
	// b 0x821b8ce4
	goto loc_821B8CE4;
loc_821B8CC0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821b8cdc
	if (!cr6.eq) goto loc_821B8CDC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821704f8
	ctx.lr = 0x821B8CD8;
	sub_821704F8(ctx, base);
	// b 0x821b8ce4
	goto loc_821B8CE4;
loc_821B8CDC:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x823647f0
	ctx.lr = 0x821B8CE4;
	sub_823647F0(ctx, base);
loc_821B8CE4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82170670
	ctx.lr = 0x821B8CF0;
	sub_82170670(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8d48
	if (cr6.eq) goto loc_821B8D48;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8d48
	if (cr6.eq) goto loc_821B8D48;
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8d28
	if (!cr6.eq) goto loc_821B8D28;
	// bl 0x82216290
	ctx.lr = 0x821B8D24;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
loc_821B8D28:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B8D44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_821B8D48:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232ad68
	ctx.lr = 0x821B8D60;
	sub_8232AD68(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8d98
	if (cr6.eq) goto loc_821B8D98;
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8d84
	if (!cr6.eq) goto loc_821B8D84;
	// bl 0x82216290
	ctx.lr = 0x821B8D80;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
loc_821B8D84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B8D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B8D98:
	// lwz r11,416(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 416);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// beq cr6,0x821b8de0
	if (cr6.eq) goto loc_821B8DE0;
loc_821B8DB0:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b8dd8
	if (cr6.eq) goto loc_821B8DD8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b8db0
	if (!cr6.eq) goto loc_821B8DB0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821704f8
	ctx.lr = 0x821B8DD4;
	sub_821704F8(ctx, base);
	// b 0x821b8e14
	goto loc_821B8E14;
loc_821B8DD8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b8df0
	if (!cr6.eq) goto loc_821B8DF0;
loc_821B8DE0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821704f8
	ctx.lr = 0x821B8DEC;
	sub_821704F8(ctx, base);
	// b 0x821b8e14
	goto loc_821B8E14;
loc_821B8DF0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821b8e0c
	if (!cr6.eq) goto loc_821B8E0C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821704f8
	ctx.lr = 0x821B8E08;
	sub_821704F8(ctx, base);
	// b 0x821b8e14
	goto loc_821B8E14;
loc_821B8E0C:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x823647f0
	ctx.lr = 0x821B8E14;
	sub_823647F0(ctx, base);
loc_821B8E14:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x82170670
	ctx.lr = 0x821B8E20;
	sub_82170670(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8e78
	if (cr6.eq) goto loc_821B8E78;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8e78
	if (cr6.eq) goto loc_821B8E78;
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8e58
	if (!cr6.eq) goto loc_821B8E58;
	// bl 0x82216290
	ctx.lr = 0x821B8E54;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
loc_821B8E58:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B8E74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
loc_821B8E78:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8232ad68
	ctx.lr = 0x821B8E90;
	sub_8232AD68(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8ec8
	if (cr6.eq) goto loc_821B8EC8;
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8eb4
	if (!cr6.eq) goto loc_821B8EB4;
	// bl 0x82216290
	ctx.lr = 0x821B8EB0;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
loc_821B8EB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B8EC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B8EC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,416(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 416);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// bl 0x822a8698
	ctx.lr = 0x821B8EE4;
	sub_822A8698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82170670
	ctx.lr = 0x821B8EF0;
	sub_82170670(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8f48
	if (cr6.eq) goto loc_821B8F48;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8f48
	if (cr6.eq) goto loc_821B8F48;
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8f28
	if (!cr6.eq) goto loc_821B8F28;
	// bl 0x82216290
	ctx.lr = 0x821B8F24;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
loc_821B8F28:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B8F44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_821B8F48:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8232ad68
	ctx.lr = 0x821B8F60;
	sub_8232AD68(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8f98
	if (cr6.eq) goto loc_821B8F98;
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8f84
	if (!cr6.eq) goto loc_821B8F84;
	// bl 0x82216290
	ctx.lr = 0x821B8F80;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
loc_821B8F84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B8F98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B8F98:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// bl 0x821b8610
	ctx.lr = 0x821B8FB4;
	sub_821B8610(ctx, base);
	// lwz r21,160(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addi r25,r1,340
	ctx.r25.s64 = ctx.r1.s64 + 340;
	// addi r22,r1,244
	ctx.r22.s64 = ctx.r1.s64 + 244;
loc_821B8FC4:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwzx r9,r26,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b9048
	if (!cr6.eq) goto loc_821B9048;
	// lwz r3,428(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 428);
	// bl 0x8218ded8
	ctx.lr = 0x821B8FDC;
	sub_8218DED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9044
	if (cr6.eq) goto loc_821B9044;
	// lwz r11,1664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1664);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9044
	if (cr6.eq) goto loc_821B9044;
	// addi r30,r25,32
	ctx.r30.s64 = ctx.r25.s64 + 32;
	// addi r31,r3,1648
	ctx.r31.s64 = ctx.r3.s64 + 1648;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r28,r3,1584
	ctx.r28.s64 = ctx.r3.s64 + 1584;
	// li r29,4
	ctx.r29.s64 = 4;
loc_821B9008:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82170670
	ctx.lr = 0x821B9014;
	sub_82170670(ctx, base);
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x821b9008
	if (!cr6.eq) goto loc_821B9008;
	// b 0x821b91c0
	goto loc_821B91C0;
loc_821B9044:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_821B9048:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_821B9050:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r24,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r24.u32);
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b9050
	if (!cr6.eq) goto loc_821B9050;
	// lwz r11,856(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 856);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b91c0
	if (cr6.eq) goto loc_821B91C0;
	// lwz r27,416(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b91c0
	if (cr6.eq) goto loc_821B91C0;
loc_821B9084:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bge cr6,0x821b91c0
	if (!cr6.lt) goto loc_821B91C0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a6e08
	ctx.lr = 0x821B9094;
	sub_821A6E08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b91b4
	if (cr6.eq) goto loc_821B91B4;
	// lbz r11,735(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 735);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x821b91b4
	if (cr6.eq) goto loc_821B91B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// subfic r31,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r31.s64 = 3 - ctx.r11.s64;
	// bl 0x822a8698
	ctx.lr = 0x821B90C0;
	sub_822A8698(ctx, base);
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r10,r1,244
	ctx.r10.s64 = ctx.r1.s64 + 244;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82170670
	ctx.lr = 0x821B90E0;
	sub_82170670(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9138
	if (cr6.eq) goto loc_821B9138;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9138
	if (cr6.eq) goto loc_821B9138;
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b9118
	if (!cr6.eq) goto loc_821B9118;
	// bl 0x82216290
	ctx.lr = 0x821B9114;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
loc_821B9118:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9134;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
loc_821B9138:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8232ad68
	ctx.lr = 0x821B9150;
	sub_8232AD68(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9188
	if (cr6.eq) goto loc_821B9188;
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b9174
	if (!cr6.eq) goto loc_821B9174;
	// bl 0x82216290
	ctx.lr = 0x821B9170;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11780);
loc_821B9174:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B9188:
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// addi r9,r1,340
	ctx.r9.s64 = ctx.r1.s64 + 340;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// addi r8,r1,372
	ctx.r8.s64 = ctx.r1.s64 + 372;
	// lwz r10,1176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1176);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r10,1168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1168);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_821B91B4:
	// lwz r27,416(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 416);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821b9084
	if (!cr6.eq) goto loc_821B9084;
loc_821B91C0:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r22,r22,48
	ctx.r22.s64 = ctx.r22.s64 + 48;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// blt cr6,0x821b8fc4
	if (cr6.lt) goto loc_821B8FC4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x821b8880
	ctx.lr = 0x821B91E0;
	sub_821B8880(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821b9300
	ctx.lr = 0x821B91E8;
	sub_821B9300(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x828d284c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B91F4"))) PPC_WEAK_FUNC(sub_821B91F4);
PPC_FUNC_IMPL(__imp__sub_821B91F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B91F8"))) PPC_WEAK_FUNC(sub_821B91F8);
PPC_FUNC_IMPL(__imp__sub_821B91F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,-44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,-40(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,-28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,-4(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B9300"))) PPC_WEAK_FUNC(sub_821B9300);
PPC_FUNC_IMPL(__imp__sub_821B9300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x821B9308;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,7
	ctx.r27.s64 = 7;
	// addi r31,r26,164
	ctx.r31.s64 = ctx.r26.s64 + 164;
	// lis r28,-32065
	ctx.r28.s64 = -2101411840;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821B9320:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9378
	if (cr6.eq) goto loc_821B9378;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b9378
	if (cr6.eq) goto loc_821B9378;
	// lwz r3,-11780(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b9358
	if (!cr6.eq) goto loc_821B9358;
	// bl 0x82216290
	ctx.lr = 0x821B9354;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11780);
loc_821B9358:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821B9378:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ad68
	ctx.lr = 0x821B9390;
	sub_8232AD68(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b93c4
	if (cr6.eq) goto loc_821B93C4;
	// lwz r3,-11780(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b93b0
	if (!cr6.eq) goto loc_821B93B0;
	// bl 0x82216290
	ctx.lr = 0x821B93AC;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11780);
loc_821B93B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B93C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B93C4:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x821b9320
	if (!cr6.lt) goto loc_821B9320;
	// addi r31,r26,56
	ctx.r31.s64 = ctx.r26.s64 + 56;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9404
	if (cr6.eq) goto loc_821B9404;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821B9404;
	sub_82170408(ctx, base);
loc_821B9404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821B940C;
	sub_8218C838(ctx, base);
	// addi r31,r26,44
	ctx.r31.s64 = ctx.r26.s64 + 44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9434
	if (cr6.eq) goto loc_821B9434;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821B9434;
	sub_82170408(ctx, base);
loc_821B9434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821B943C;
	sub_8218C838(ctx, base);
	// addi r31,r26,32
	ctx.r31.s64 = ctx.r26.s64 + 32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9464
	if (cr6.eq) goto loc_821B9464;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821B9464;
	sub_82170408(ctx, base);
loc_821B9464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821B946C;
	sub_8218C838(ctx, base);
	// addi r31,r26,20
	ctx.r31.s64 = ctx.r26.s64 + 20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9494
	if (cr6.eq) goto loc_821B9494;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821B9494;
	sub_82170408(ctx, base);
loc_821B9494:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821B949C;
	sub_8218C838(ctx, base);
	// addi r31,r26,8
	ctx.r31.s64 = ctx.r26.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b94c4
	if (cr6.eq) goto loc_821B94C4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821B94C4;
	sub_82170408(ctx, base);
loc_821B94C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821B94CC;
	sub_8218C838(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B94D4"))) PPC_WEAK_FUNC(sub_821B94D4);
PPC_FUNC_IMPL(__imp__sub_821B94D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B94D8"))) PPC_WEAK_FUNC(sub_821B94D8);
PPC_FUNC_IMPL(__imp__sub_821B94D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9504
	if (cr6.eq) goto loc_821B9504;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b9524
	if (!cr6.eq) goto loc_821B9524;
loc_821B9504:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4228
	ctx.r4.s64 = ctx.r11.s64 + -4228;
	// bl 0x821704f8
	ctx.lr = 0x821B9514;
	sub_821704F8(ctx, base);
	// addi r4,r31,420
	ctx.r4.s64 = ctx.r31.s64 + 420;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b5f30
	ctx.lr = 0x821B9520;
	sub_821B5F30(ctx, base);
	// b 0x821b9588
	goto loc_821B9588;
loc_821B9524:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b8768
	ctx.lr = 0x821B952C;
	sub_821B8768(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9540
	if (cr6.eq) goto loc_821B9540;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821b9548
	goto loc_821B9548;
loc_821B9540:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16764
	ctx.r4.s64 = ctx.r11.s64 + 16764;
loc_821B9548:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-32324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32324);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r6,r11,-8704
	ctx.r6.s64 = ctx.r11.s64 + -8704;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B956C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821b9580
	if (!cr6.eq) goto loc_821B9580;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821b958c
	goto loc_821B958C;
loc_821B9580:
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x8232f010
	ctx.lr = 0x821B9588;
	sub_8232F010(ctx, base);
loc_821B9588:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821B958C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fc470
	ctx.lr = 0x821B9594;
	sub_821FC470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_821B95AC"))) PPC_WEAK_FUNC(sub_821B95AC);
PPC_FUNC_IMPL(__imp__sub_821B95AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B95B0"))) PPC_WEAK_FUNC(sub_821B95B0);
PPC_FUNC_IMPL(__imp__sub_821B95B0) {
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
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11572
	ctx.r3.s64 = ctx.r11.s64 + -11572;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821b4370
	ctx.lr = 0x821B95D8;
	sub_821B4370(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-21184
	ctx.r11.s64 = ctx.r11.s64 + -21184;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821B9608"))) PPC_WEAK_FUNC(sub_821B9608);
PPC_FUNC_IMPL(__imp__sub_821B9608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e4
	ctx.lr = 0x821B9610;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,129
	ctx.r4.s64 = 129;
	// lwz r3,14164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r5,r11,-21088
	ctx.r5.s64 = ctx.r11.s64 + -21088;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9648;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826117c8
	ctx.lr = 0x821B9650;
	sub_826117C8(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x821b5b78
	ctx.lr = 0x821B9658;
	sub_821B5B78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r11,r11,-7920
	ctx.r11.s64 = ctx.r11.s64 + -7920;
	// addi r10,r19,420
	ctx.r10.s64 = ctx.r19.s64 + 420;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r22,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r22.u32);
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r10.u32);
	// stw r22,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r22.u32);
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// bl 0x821b91f8
	ctx.lr = 0x821B9688;
	sub_821B91F8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x821b8880
	ctx.lr = 0x821B9694;
	sub_821B8880(ctx, base);
	// lwz r11,140(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 140);
	// lis r15,-32768
	ctx.r15.s64 = -2147483648;
	// lis r16,-32064
	ctx.r16.s64 = -2101346304;
	// lwz r29,804(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b9768
	if (cr6.eq) goto loc_821B9768;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f31,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f31.f64 = double(temp.f32);
loc_821B96B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218ded8
	ctx.lr = 0x821B96BC;
	sub_8218DED8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b975c
	if (cr6.eq) goto loc_821B975C;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x821bb538
	ctx.lr = 0x821B96D0;
	sub_821BB538(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b975c
	if (cr6.eq) goto loc_821B975C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B96EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b975c
	if (!cr6.eq) goto loc_821B975C;
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// addi r27,r1,136
	ctx.r27.s64 = ctx.r1.s64 + 136;
	// ld r4,-20640(r16)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r16.u32 + -20640);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822aa9b0
	ctx.lr = 0x821B9718;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc8d8
	ctx.lr = 0x821B9748;
	sub_821BC8D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B975C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B975C:
	// lwz r29,428(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821b96b4
	if (!cr6.eq) goto loc_821B96B4;
loc_821B9768:
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821b9ca8
	ctx.lr = 0x821B977C;
	sub_821B9CA8(ctx, base);
	// lis r20,-32064
	ctx.r20.s64 = -2101346304;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// beq cr6,0x821b97bc
	if (cr6.eq) goto loc_821B97BC;
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,416(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 416);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823a2208
	ctx.lr = 0x821B97BC;
	sub_823A2208(ctx, base);
loc_821B97BC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// bl 0x821b8610
	ctx.lr = 0x821B97CC;
	sub_821B8610(ctx, base);
	// lwz r11,140(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 140);
	// lwz r29,804(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b9840
	if (cr6.eq) goto loc_821B9840;
	// lis r30,-32064
	ctx.r30.s64 = -2101346304;
loc_821B97E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218ded8
	ctx.lr = 0x821B97E8;
	sub_8218DED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9834
	if (cr6.eq) goto loc_821B9834;
	// lwz r11,140(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 140);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-19736(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + -19736);
	// addi r28,r1,104
	ctx.r28.s64 = ctx.r1.s64 + 104;
	// lwz r31,732(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822aa9b0
	ctx.lr = 0x821B9818;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9834;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B9834:
	// lwz r29,428(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821b97e0
	if (!cr6.eq) goto loc_821B97E0;
loc_821B9840:
	// lwz r18,88(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lis r23,-32064
	ctx.r23.s64 = -2101346304;
	// lis r21,-32064
	ctx.r21.s64 = -2101346304;
	// lis r24,-32064
	ctx.r24.s64 = -2101346304;
loc_821B9854:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b99cc
	if (cr6.eq) goto loc_821B99CC;
	// lwz r3,428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// bl 0x8218ded8
	ctx.lr = 0x821B9870;
	sub_8218DED8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b99cc
	if (cr6.eq) goto loc_821B99CC;
	// lwz r30,416(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 416);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// ld r4,-20780(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + -20780);
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822aa9b0
	ctx.lr = 0x821B98A0;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B98BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,937(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 937);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9900
	if (cr6.eq) goto loc_821B9900;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-20432(r21)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r21.u32 + -20432);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa9b0
	ctx.lr = 0x821B98E4;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B9900:
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,356
	ctx.r9.s64 = ctx.r1.s64 + 356;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r31,1564
	ctx.r29.s64 = ctx.r31.s64 + 1564;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r26,r31,1500
	ctx.r26.s64 = ctx.r31.s64 + 1500;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r28,4
	ctx.r28.s64 = 4;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821B992C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82170670
	ctx.lr = 0x821B9938;
	sub_82170670(ctx, base);
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,-16(r29)
	PPC_STORE_U32(ctx.r29.u32 + -16, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne cr6,0x821b992c
	if (!cr6.eq) goto loc_821B992C;
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r10,1232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// stw r10,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r10.u32);
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// bl 0x821bb5b8
	ctx.lr = 0x821B9994;
	sub_821BB5B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-20168(r23)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r23.u32 + -20168);
	// addi r31,r1,100
	ctx.r31.s64 = ctx.r1.s64 + 100;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822aa9b0
	ctx.lr = 0x821B99B0;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B99CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B99CC:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x821b9a34
	if (!cr6.eq) goto loc_821B9A34;
	// lwz r3,428(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 428);
	// bl 0x8218ded8
	ctx.lr = 0x821B99DC;
	sub_8218DED8(ctx, base);
	// lwz r11,1664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1664);
	// addi r31,r1,372
	ctx.r31.s64 = ctx.r1.s64 + 372;
	// addi r28,r1,276
	ctx.r28.s64 = ctx.r1.s64 + 276;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r30,r3,1648
	ctx.r30.s64 = ctx.r3.s64 + 1648;
	// addi r27,r3,1584
	ctx.r27.s64 = ctx.r3.s64 + 1584;
	// stw r11,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r11.u32);
loc_821B99FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82170670
	ctx.lr = 0x821B9A08;
	sub_82170670(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x821b99fc
	if (!cr6.eq) goto loc_821B99FC;
loc_821B9A34:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// blt cr6,0x821b9854
	if (cr6.lt) goto loc_821B9854;
	// lwz r11,416(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9ae0
	if (cr6.eq) goto loc_821B9AE0;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821b9ae0
	if (!cr6.gt) goto loc_821B9AE0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_821B9A60:
	// lwz r11,392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b9ac8
	if (cr6.eq) goto loc_821B9AC8;
	// bl 0x821bb9b8
	ctx.lr = 0x821B9A74;
	sub_821BB9B8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9a94
	if (cr6.eq) goto loc_821B9A94;
loc_821B9A80:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821b9aa4
	if (cr6.eq) goto loc_821B9AA4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9a80
	if (!cr6.eq) goto loc_821B9A80;
loc_821B9A94:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9ac8
	if (cr6.eq) goto loc_821B9AC8;
loc_821B9AA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B9AC8:
	// lwz r11,416(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 416);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821b9a60
	if (cr6.lt) goto loc_821B9A60;
loc_821B9AE0:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// lfs f31,24344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,416(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 416);
	// bne cr6,0x821b9b70
	if (!cr6.eq) goto loc_821B9B70;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9b00
	if (cr6.eq) goto loc_821B9B00;
	// lfs f31,708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	ctx.f31.f64 = double(temp.f32);
loc_821B9B00:
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// lwz r11,-11976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11976);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9b7c
	if (cr6.eq) goto loc_821B9B7C;
	// lwz r11,668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b9b7c
	if (cr6.eq) goto loc_821B9B7C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b9b7c
	if (cr6.eq) goto loc_821B9B7C;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// ld r4,-20788(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20788);
	// bl 0x822aa9b0
	ctx.lr = 0x821B9B50;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9B6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821b9b7c
	goto loc_821B9B7C;
loc_821B9B70:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9b7c
	if (cr6.eq) goto loc_821B9B7C;
	// lfs f31,704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	ctx.f31.f64 = double(temp.f32);
loc_821B9B7C:
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b9b94
	if (!cr6.eq) goto loc_821B9B94;
	// bl 0x82216290
	ctx.lr = 0x821B9B90;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_821B9B94:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9bc8
	if (cr6.eq) goto loc_821B9BC8;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,24324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24324);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// bl 0x821b82f8
	ctx.lr = 0x821B9BC8;
	sub_821B82F8(ctx, base);
loc_821B9BC8:
	// lwz r11,140(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 140);
	// lwz r29,804(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b9c88
	if (cr6.eq) goto loc_821B9C88;
loc_821B9BD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218ded8
	ctx.lr = 0x821B9BE0;
	sub_8218DED8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b9c7c
	if (cr6.eq) goto loc_821B9C7C;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x821bb538
	ctx.lr = 0x821B9BF4;
	sub_821BB538(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9c7c
	if (cr6.eq) goto loc_821B9C7C;
	// lwz r30,656(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b9c3c
	if (cr6.eq) goto loc_821B9C3C;
	// bl 0x821b84d0
	ctx.lr = 0x821B9C0C;
	sub_821B84D0(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9c2c
	if (cr6.eq) goto loc_821B9C2C;
loc_821B9C18:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821b9c7c
	if (cr6.eq) goto loc_821B9C7C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9c18
	if (!cr6.eq) goto loc_821B9C18;
loc_821B9C2C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b9c7c
	if (!cr6.eq) goto loc_821B9C7C;
loc_821B9C3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// addi r28,r1,120
	ctx.r28.s64 = ctx.r1.s64 + 120;
	// ld r4,-20640(r16)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r16.u32 + -20640);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822aa9b0
	ctx.lr = 0x821B9C60;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9C7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B9C7C:
	// lwz r29,428(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821b9bd8
	if (!cr6.eq) goto loc_821B9BD8;
loc_821B9C88:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826117c8
	ctx.lr = 0x821B9C90;
	sub_826117C8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821b9300
	ctx.lr = 0x821B9C98;
	sub_821B9300(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x828d2834
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9CA8"))) PPC_WEAK_FUNC(sub_821B9CA8);
PPC_FUNC_IMPL(__imp__sub_821B9CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x821B9CB0;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x826117c8
	ctx.lr = 0x821B9CD0;
	sub_826117C8(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r19,0
	ctx.r19.s64 = 0;
	// lis r14,-32065
	ctx.r14.s64 = -2101411840;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,140(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 140);
	// lfd f0,21024(r14)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r14.u32 + 21024);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// lwz r30,804(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fmul f31,f13,f0
	ctx.f31.f64 = ctx.f13.f64 * ctx.f0.f64;
	// beq cr6,0x821b9d94
	if (cr6.eq) goto loc_821B9D94;
loc_821B9D14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ded8
	ctx.lr = 0x821B9D1C;
	sub_8218DED8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821b9d88
	if (cr6.eq) goto loc_821B9D88;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmpw cr6,r16,r11
	cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// ble cr6,0x821b9d74
	if (!cr6.gt) goto loc_821B9D74;
	// rlwinm r11,r16,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x821B9D6C;
	sub_82170408(ctx, base);
	// lwz r16,124(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_821B9D74:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9d88
	if (cr6.eq) goto loc_821B9D88;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_821B9D88:
	// lwz r30,428(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821b9d14
	if (!cr6.eq) goto loc_821B9D14;
loc_821B9D94:
	// lwz r11,140(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 140);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// lis r15,-32065
	ctx.r15.s64 = -2101411840;
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// ble cr6,0x821b9ea4
	if (!cr6.gt) goto loc_821B9EA4;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
loc_821B9DC8:
	// lwz r11,140(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 140);
	// lwz r11,576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x821bb638
	ctx.lr = 0x821B9DD8;
	sub_821BB638(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b9e80
	if (cr6.eq) goto loc_821B9E80;
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b9dfc
	if (!cr6.eq) goto loc_821B9DFC;
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9e80
	if (cr6.eq) goto loc_821B9E80;
loc_821B9DFC:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpw cr6,r18,r30
	cr6.compare<int32_t>(ctx.r18.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x821b9e6c
	if (!cr6.gt) goto loc_821B9E6C;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// add r11,r18,r11
	ctx.r11.u64 = ctx.r18.u64 + ctx.r11.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// bne cr6,0x821b9e34
	if (!cr6.eq) goto loc_821B9E34;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821b9e6c
	if (cr6.eq) goto loc_821B9E6C;
loc_821B9E34:
	// lwz r3,-11780(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -11780);
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b9e4c
	if (!cr6.eq) goto loc_821B9E4C;
	// bl 0x82216290
	ctx.lr = 0x821B9E48;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -11780);
loc_821B9E4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9E68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
loc_821B9E6C:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9e80
	if (cr6.eq) goto loc_821B9E80;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_821B9E80:
	// lwz r11,140(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 140);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b9dc8
	if (cr6.lt) goto loc_821B9DC8;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
loc_821B9EA4:
	// lis r26,-32065
	ctx.r26.s64 = -2101411840;
	// lwz r11,-11976(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11976);
	// lwz r10,664(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b9f18
	if (cr6.eq) goto loc_821B9F18;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9ECC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9f00
	if (cr6.eq) goto loc_821B9F00;
	// lwz r11,-11976(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11976);
	// lwz r3,664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9EEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9F00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B9F00:
	// lwz r11,-11976(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11976);
	// lwz r3,664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B9F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821B9F18:
	// lis r20,-32064
	ctx.r20.s64 = -2101346304;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// stw r19,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r19.u32);
	// ble cr6,0x821b9fb0
	if (!cr6.gt) goto loc_821B9FB0;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_821B9F34:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b9fa0
	if (!cr6.eq) goto loc_821B9FA0;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// ble cr6,0x821b9fa0
	if (!cr6.gt) goto loc_821B9FA0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_821B9F64:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 60);
	// lwz r3,656(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x821bb538
	ctx.lr = 0x821B9F7C;
	sub_821BB538(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9f90
	if (cr6.eq) goto loc_821B9F90;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r3,20232
	ctx.r3.s64 = ctx.r3.s64 + 20232;
	// bl 0x822b7530
	ctx.lr = 0x821B9F90;
	sub_822B7530(ctx, base);
loc_821B9F90:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821b9f64
	if (!cr6.eq) goto loc_821B9F64;
loc_821B9FA0:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821b9f34
	if (!cr6.eq) goto loc_821B9F34;
loc_821B9FB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-24420(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82375868
	ctx.lr = 0x821B9FC0;
	sub_82375868(ctx, base);
	// lwz r3,-11976(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11976);
	// bl 0x82428010
	ctx.lr = 0x821B9FC8;
	sub_82428010(ctx, base);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// bl 0x821bc798
	ctx.lr = 0x821B9FD8;
	sub_821BC798(ctx, base);
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,164(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b9ffc
	if (cr6.eq) goto loc_821B9FFC;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821B9FFC:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8234cee8
	ctx.lr = 0x821BA00C;
	sub_8234CEE8(ctx, base);
	// bl 0x821bc658
	ctx.lr = 0x821BA010;
	sub_821BC658(ctx, base);
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ba034
	if (cr6.eq) goto loc_821BA034;
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821BA034:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8234cee8
	ctx.lr = 0x821BA044;
	sub_8234CEE8(ctx, base);
	// bl 0x821bc518
	ctx.lr = 0x821BA048;
	sub_821BC518(ctx, base);
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ba06c
	if (cr6.eq) goto loc_821BA06C;
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821BA06C:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8234cee8
	ctx.lr = 0x821BA07C;
	sub_8234CEE8(ctx, base);
	// bl 0x821bc3d8
	ctx.lr = 0x821BA080;
	sub_821BC3D8(ctx, base);
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ba0a4
	if (cr6.eq) goto loc_821BA0A4;
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821BA0A4:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8234cee8
	ctx.lr = 0x821BA0B4;
	sub_8234CEE8(ctx, base);
	// bl 0x821bc298
	ctx.lr = 0x821BA0B8;
	sub_821BC298(ctx, base);
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,164(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ba0dc
	if (cr6.eq) goto loc_821BA0DC;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821BA0DC:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8234cee8
	ctx.lr = 0x821BA0EC;
	sub_8234CEE8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ba178
	if (!cr6.gt) goto loc_821BA178;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_821BA100:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x8233d930
	ctx.lr = 0x821BA128;
	sub_8233D930(ctx, base);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821ba164
	if (!cr6.gt) goto loc_821BA164;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_821BA13C:
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821ba13c
	if (cr6.lt) goto loc_821BA13C;
loc_821BA164:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ba100
	if (cr6.lt) goto loc_821BA100;
loc_821BA178:
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r3,r3,58,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824440a8
	ctx.lr = 0x821BA188;
	sub_824440A8(ctx, base);
	// bl 0x824453f8
	ctx.lr = 0x821BA18C;
	sub_824453F8(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,16764
	ctx.r31.s64 = ctx.r11.s64 + 16764;
	// beq cr6,0x821ba1ac
	if (cr6.eq) goto loc_821BA1AC;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x821ba1b0
	goto loc_821BA1B0;
loc_821BA1AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_821BA1B0:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ba1c4
	if (cr6.eq) goto loc_821BA1C4;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// b 0x821ba1c8
	goto loc_821BA1C8;
loc_821BA1C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BA1C8:
	// bl 0x828d0320
	ctx.lr = 0x821BA1CC;
	sub_828D0320(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ba268
	if (cr6.eq) goto loc_821BA268;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ba1e8
	if (cr6.eq) goto loc_821BA1E8;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// b 0x821ba1ec
	goto loc_821BA1EC;
loc_821BA1E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_821BA1EC:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364678
	ctx.lr = 0x821BA200;
	sub_82364678(ctx, base);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x821ba258
	if (!cr6.gt) goto loc_821BA258;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821BA218:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821ba234
	if (!cr6.eq) goto loc_821BA234;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x821ba248
	if (cr6.eq) goto loc_821BA248;
loc_821BA234:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r18
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x821ba218
	if (cr6.lt) goto loc_821BA218;
	// b 0x821ba258
	goto loc_821BA258;
loc_821BA248:
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// oris r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 3221225472;
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
loc_821BA258:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-24420(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82375868
	ctx.lr = 0x821BA268;
	sub_82375868(ctx, base);
loc_821BA268:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ba278
	if (cr6.eq) goto loc_821BA278;
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
loc_821BA278:
	// bl 0x821b5418
	ctx.lr = 0x821BA27C;
	sub_821B5418(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822adcf0
	ctx.lr = 0x821BA28C;
	sub_822ADCF0(ctx, base);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// stw r3,416(r21)
	PPC_STORE_U32(ctx.r21.u32 + 416, ctx.r3.u32);
	// ble cr6,0x821ba2ec
	if (!cr6.gt) goto loc_821BA2EC;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_821BA2A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,96(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// rlwinm r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ba2dc
	if (cr6.eq) goto loc_821BA2DC;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x821ba2dc
	if (cr6.eq) goto loc_821BA2DC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,124(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,124(r9)
	PPC_STORE_U32(ctx.r9.u32 + 124, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,124(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// rlwinm r8,r8,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r8,124(r9)
	PPC_STORE_U32(ctx.r9.u32 + 124, ctx.r8.u32);
loc_821BA2DC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r18
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x821ba2a0
	if (cr6.lt) goto loc_821BA2A0;
loc_821BA2EC:
	// lwz r11,416(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 416);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ba3c4
	if (!cr6.gt) goto loc_821BA3C4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_821BA304:
	// lwz r11,416(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 416);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r11,668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ble cr6,0x821ba3ac
	if (!cr6.gt) goto loc_821BA3AC;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
loc_821BA320:
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821ba39c
	if (!cr6.eq) goto loc_821BA39C;
	// lwz r11,64(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821ba39c
	if (!cr6.eq) goto loc_821BA39C;
	// lbz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba39c
	if (cr6.eq) goto loc_821BA39C;
	// lwz r10,108(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821ba39c
	if (!cr6.gt) goto loc_821BA39C;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_821BA364:
	// lwz r31,104(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,10(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 10);
	// addi r30,r9,-2
	ctx.r30.s64 = ctx.r9.s64 + -2;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cntlzw r31,r30
	ctx.r31.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r31,r31,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// lwz r30,488(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 488);
	// rlwimi r30,r31,30,1,1
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 30) & 0x40000000) | (ctx.r30.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r30,488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 488, ctx.r30.u32);
	// lwz r9,108(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821ba364
	if (cr6.lt) goto loc_821BA364;
loc_821BA39C:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821ba320
	if (!cr6.eq) goto loc_821BA320;
loc_821BA3AC:
	// lwz r11,416(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 416);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// lwz r11,672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ba304
	if (cr6.lt) goto loc_821BA304;
loc_821BA3C4:
	// lwz r11,416(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 416);
	// lwz r3,-24420(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// addi r4,r11,204
	ctx.r4.s64 = ctx.r11.s64 + 204;
	// bl 0x823ce290
	ctx.lr = 0x821BA3D4;
	sub_823CE290(ctx, base);
	// lwz r11,416(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 416);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r11,672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ba498
	if (!cr6.gt) goto loc_821BA498;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_821BA3EC:
	// lwz r11,416(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 416);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r11,668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// ble cr6,0x821ba480
	if (!cr6.gt) goto loc_821BA480;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
loc_821BA408:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821ba470
	if (!cr6.eq) goto loc_821BA470;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821ba470
	if (!cr6.eq) goto loc_821BA470;
	// lbz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ba44c
	if (cr6.eq) goto loc_821BA44C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwimi r4,r10,26,0,0
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x80000000) | (ctx.r4.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r4,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r4.u32);
loc_821BA44C:
	// lbz r10,9(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ba470
	if (cr6.eq) goto loc_821BA470;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwimi r4,r10,30,1,1
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r4.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r4,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r4.u32);
loc_821BA470:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821ba408
	if (!cr6.eq) goto loc_821BA408;
loc_821BA480:
	// lwz r11,416(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 416);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// lwz r11,672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ba3ec
	if (cr6.lt) goto loc_821BA3EC;
loc_821BA498:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x821ba5c8
	if (!cr6.gt) goto loc_821BA5C8;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// lis r24,-32064
	ctx.r24.s64 = -2101346304;
	// lis r26,-32064
	ctx.r26.s64 = -2101346304;
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
loc_821BA4B4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,656(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// bl 0x821bb538
	ctx.lr = 0x821BA4C0;
	sub_821BB538(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ba5b8
	if (cr6.eq) goto loc_821BA5B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA4D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ba5b8
	if (!cr6.eq) goto loc_821BA5B8;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x821ba584
	if (!cr6.gt) goto loc_821BA584;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_821BA4F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x1;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// rlwinm r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ba520
	if (!cr6.eq) goto loc_821BA520;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
loc_821BA520:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r25,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// bne cr6,0x821ba530
	if (!cr6.eq) goto loc_821BA530;
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
loc_821BA530:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// bne cr6,0x821ba540
	if (!cr6.eq) goto loc_821BA540;
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
loc_821BA540:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r22,0(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-18432(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + -18432);
	// addi r21,r1,160
	ctx.r21.s64 = ctx.r1.s64 + 160;
	// bl 0x822aa9b0
	ctx.lr = 0x821BA558;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA574;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821ba4f0
	if (!cr6.eq) goto loc_821BA4F0;
loc_821BA584:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-19088(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + -19088);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822aa9b0
	ctx.lr = 0x821BA59C;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA5B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BA5B8:
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x821ba4b4
	if (!cr6.eq) goto loc_821BA4B4;
loc_821BA5C8:
	// lwz r3,-24420(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// bl 0x8239d4e8
	ctx.lr = 0x821BA5D0;
	sub_8239D4E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r3,r3,58,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824440a8
	ctx.lr = 0x821BA5E0;
	sub_824440A8(ctx, base);
	// bl 0x824453f8
	ctx.lr = 0x821BA5E4;
	sub_824453F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-24420(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// bl 0x82375868
	ctx.lr = 0x821BA5F4;
	sub_82375868(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826117c8
	ctx.lr = 0x821BA5FC;
	sub_826117C8(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f0,21024(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r14.u32 + 21024);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmsub f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64 - ctx.f31.f64;
	// beq cr6,0x821ba6c8
	if (cr6.eq) goto loc_821BA6C8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ba66c
	if (cr6.eq) goto loc_821BA66C;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r9,256(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fadd f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 + ctx.f0.f64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r10.u32);
	// stw r9,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r9.u32);
	// lwz r11,-24420(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24420);
loc_821BA66C:
	// lwz r8,208(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ba6c8
	if (!cr6.gt) goto loc_821BA6C8;
	// lwz r9,68(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
loc_821BA684:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,252(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r6,256(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fadd f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 + ctx.f0.f64;
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r7.u32);
	// stw r6,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r6.u32);
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ba684
	if (cr6.lt) goto loc_821BA684;
loc_821BA6C8:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x821ba71c
	if (!cr6.gt) goto loc_821BA71C;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lis r28,-32064
	ctx.r28.s64 = -2101346304;
loc_821BA6D8:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-19728(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + -19728);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822aa9b0
	ctx.lr = 0x821BA6F0;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA70C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821ba6d8
	if (!cr6.eq) goto loc_821BA6D8;
loc_821BA71C:
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// lwz r3,-32284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32284);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8232ad68
	ctx.lr = 0x821BA74C;
	sub_8232AD68(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba784
	if (cr6.eq) goto loc_821BA784;
	// lwz r3,-11780(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -11780);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ba770
	if (!cr6.eq) goto loc_821BA770;
	// bl 0x82216290
	ctx.lr = 0x821BA76C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -11780);
loc_821BA770:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA784;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BA784:
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8232ad68
	ctx.lr = 0x821BA7A8;
	sub_8232AD68(ctx, base);
	// lwz r31,136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ba7dc
	if (cr6.eq) goto loc_821BA7DC;
	// lwz r3,-11780(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ba7c8
	if (!cr6.eq) goto loc_821BA7C8;
	// bl 0x82216290
	ctx.lr = 0x821BA7C4;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -11780);
loc_821BA7C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA7DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BA7DC:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8232ad68
	ctx.lr = 0x821BA7F4;
	sub_8232AD68(ctx, base);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ba828
	if (cr6.eq) goto loc_821BA828;
	// lwz r3,-11780(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ba814
	if (!cr6.eq) goto loc_821BA814;
	// bl 0x82216290
	ctx.lr = 0x821BA810;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -11780);
loc_821BA814:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA828;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BA828:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA834"))) PPC_WEAK_FUNC(sub_821BA834);
PPC_FUNC_IMPL(__imp__sub_821BA834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA838"))) PPC_WEAK_FUNC(sub_821BA838);
PPC_FUNC_IMPL(__imp__sub_821BA838) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x821BA840;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ba864
	if (!cr6.eq) goto loc_821BA864;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_821BA864:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821b91f8
	ctx.lr = 0x821BA86C;
	sub_821B91F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b5b78
	ctx.lr = 0x821BA874;
	sub_821B5B78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r11,r11,-7920
	ctx.r11.s64 = ctx.r11.s64 + -7920;
	// addi r10,r29,420
	ctx.r10.s64 = ctx.r29.s64 + 420;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// bl 0x821b8880
	ctx.lr = 0x821BA8A4;
	sub_821B8880(ctx, base);
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r10,580(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821ba93c
	if (!cr6.gt) goto loc_821BA93C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821BA8BC:
	// lwz r11,576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x821bb6b8
	ctx.lr = 0x821BA8C8;
	sub_821BB6B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ba8ec
	if (!cr6.eq) goto loc_821BA8EC;
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,580(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ba8bc
	if (cr6.lt) goto loc_821BA8BC;
	// b 0x821ba93c
	goto loc_821BA93C;
loc_821BA8EC:
	// addi r4,r3,60
	ctx.r4.s64 = ctx.r3.s64 + 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823647f0
	ctx.lr = 0x821BA8F8;
	sub_823647F0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// bl 0x82170820
	ctx.lr = 0x821BA900;
	sub_82170820(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ba928
	if (cr6.eq) goto loc_821BA928;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x821BA928;
	sub_82170408(ctx, base);
loc_821BA928:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x821BA930;
	sub_8218C838(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821ba93c
	if (cr6.eq) goto loc_821BA93C;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_821BA93C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,14216
	ctx.r11.s64 = ctx.r11.s64 + 14216;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821b9300
	ctx.lr = 0x821BA950;
	sub_821B9300(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA95C"))) PPC_WEAK_FUNC(sub_821BA95C);
PPC_FUNC_IMPL(__imp__sub_821BA95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA960"))) PPC_WEAK_FUNC(sub_821BA960);
PPC_FUNC_IMPL(__imp__sub_821BA960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x821BA968;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,16832
	ctx.r30.s64 = ctx.r11.s64 + 16832;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA9AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA9DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x821baa2c
	if (!cr6.eq) goto loc_821BAA2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BAA2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BAA2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x821baa40
	if (!cr6.eq) goto loc_821BAA40;
	// addi r11,r11,-37
	ctx.r11.s64 = ctx.r11.s64 + -37;
loc_821BAA40:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x821baa58
	if (!cr6.eq) goto loc_821BAA58;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_821BAA58:
	// addi r10,r11,-11
	ctx.r10.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x821baa6c
	if (!cr6.gt) goto loc_821BAA6C;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// ble cr6,0x821baa70
	if (!cr6.gt) goto loc_821BAA70;
loc_821BAA6C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821BAA70:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BAA7C"))) PPC_WEAK_FUNC(sub_821BAA7C);
PPC_FUNC_IMPL(__imp__sub_821BAA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BAA80"))) PPC_WEAK_FUNC(sub_821BAA80);
PPC_FUNC_IMPL(__imp__sub_821BAA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x821BAA88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,16832
	ctx.r30.s64 = ctx.r11.s64 + 16832;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BAACC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BAAFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x821bab4c
	if (!cr6.eq) goto loc_821BAB4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BAB4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BAB4C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x821bab60
	if (!cr6.eq) goto loc_821BAB60;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x821bab78
	goto loc_821BAB78;
loc_821BAB60:
	// addi r10,r11,-10
	ctx.r10.s64 = ctx.r11.s64 + -10;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x821bab74
	if (!cr6.gt) goto loc_821BAB74;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// blt cr6,0x821bab78
	if (cr6.lt) goto loc_821BAB78;
loc_821BAB74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821BAB78:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821bab88
	if (!cr6.eq) goto loc_821BAB88;
	// addi r11,r11,37
	ctx.r11.s64 = ctx.r11.s64 + 37;
loc_821BAB88:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BAB94"))) PPC_WEAK_FUNC(sub_821BAB94);
PPC_FUNC_IMPL(__imp__sub_821BAB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BAB98"))) PPC_WEAK_FUNC(sub_821BAB98);
PPC_FUNC_IMPL(__imp__sub_821BAB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32065
	ctx.r9.s64 = -2101411840;
	// lwz r10,-12584(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12584);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x821babec
	if (cr6.eq) goto loc_821BABEC;
	// addi r8,r10,-10
	ctx.r8.s64 = ctx.r10.s64 + -10;
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// ble cr6,0x821babcc
	if (!cr6.gt) goto loc_821BABCC;
	// cmpwi cr6,r10,19
	cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// blt cr6,0x821babd0
	if (cr6.lt) goto loc_821BABD0;
loc_821BABCC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821BABD0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x821babec
	if (!cr6.eq) goto loc_821BABEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821BABEC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4036
	ctx.r4.s64 = ctx.r11.s64 + -4036;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// stw r11,-12584(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12584, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-12588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12588, ctx.r11.u32);
	// bl 0x821704f8
	ctx.lr = 0x821BAC10;
	sub_821704F8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-11976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11976);
	// lwz r11,668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BAC40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821fc470
	ctx.lr = 0x821BAC48;
	sub_821FC470(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fc470
	ctx.lr = 0x821BAC50;
	sub_821FC470(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BAC64"))) PPC_WEAK_FUNC(sub_821BAC64);
PPC_FUNC_IMPL(__imp__sub_821BAC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BAC68"))) PPC_WEAK_FUNC(sub_821BAC68);
PPC_FUNC_IMPL(__imp__sub_821BAC68) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821BAC70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x821baca4
	if (cr6.eq) goto loc_821BACA4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821bacac
	goto loc_821BACAC;
loc_821BACA4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,16764
	ctx.r3.s64 = ctx.r11.s64 + 16764;
loc_821BACAC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x8232dde8
	ctx.lr = 0x821BACB8;
	sub_8232DDE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bacf8
	if (cr6.eq) goto loc_821BACF8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x82170670
	ctx.lr = 0x821BACE4;
	sub_82170670(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fc470
	ctx.lr = 0x821BACEC;
	sub_821FC470(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_821BACF8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fc470
	ctx.lr = 0x821BAD00;
	sub_821FC470(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BAD0C"))) PPC_WEAK_FUNC(sub_821BAD0C);
PPC_FUNC_IMPL(__imp__sub_821BAD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BAD10"))) PPC_WEAK_FUNC(sub_821BAD10);
PPC_FUNC_IMPL(__imp__sub_821BAD10) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x821BAD18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bad40
	if (cr6.eq) goto loc_821BAD40;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821bad48
	goto loc_821BAD48;
loc_821BAD40:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,16764
	ctx.r3.s64 = ctx.r11.s64 + 16764;
loc_821BAD48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232beb0
	ctx.lr = 0x821BAD50;
	sub_8232BEB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bad94
	if (cr6.eq) goto loc_821BAD94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d05e0
	ctx.lr = 0x821BAD64;
	sub_828D05E0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828d0508
	ctx.lr = 0x821BAD70;
	sub_828D0508(ctx, base);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,41
	ctx.r10.s64 = ctx.r10.s64 + 41;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_821BAD94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BADA0"))) PPC_WEAK_FUNC(sub_821BADA0);
PPC_FUNC_IMPL(__imp__sub_821BADA0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x821BADA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821badd0
	if (cr6.eq) goto loc_821BADD0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821badd8
	goto loc_821BADD8;
loc_821BADD0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,16764
	ctx.r3.s64 = ctx.r11.s64 + 16764;
loc_821BADD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232beb0
	ctx.lr = 0x821BADE0;
	sub_8232BEB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bae24
	if (cr6.eq) goto loc_821BAE24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d05e0
	ctx.lr = 0x821BADF4;
	sub_828D05E0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828d0508
	ctx.lr = 0x821BAE00;
	sub_828D0508(ctx, base);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,49
	ctx.r10.s64 = ctx.r10.s64 + 49;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_821BAE24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BAE30"))) PPC_WEAK_FUNC(sub_821BAE30);
PPC_FUNC_IMPL(__imp__sub_821BAE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x821BAE38;
	__savegprlr_14(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r11,16764
	ctx.r27.s64 = ctx.r11.s64 + 16764;
	// beq cr6,0x821bae5c
	if (cr6.eq) goto loc_821BAE5C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x821bae60
	goto loc_821BAE60;
loc_821BAE5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821BAE60:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,-3992
	ctx.r4.s64 = ctx.r11.s64 + -3992;
	// bl 0x8232dd30
	ctx.lr = 0x821BAE6C;
	sub_8232DD30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bb468
	if (!cr6.eq) goto loc_821BB468;
	// bl 0x82373738
	ctx.lr = 0x821BAE78;
	sub_82373738(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x821947e8
	ctx.lr = 0x821BAE8C;
	sub_821947E8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x821bc0c8
	ctx.lr = 0x821BAEB4;
	sub_821BC0C8(ctx, base);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// lwz r3,-24420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24420);
	// bl 0x8239c928
	ctx.lr = 0x821BAEEC;
	sub_8239C928(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// beq cr6,0x821baf14
	if (cr6.eq) goto loc_821BAF14;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x821baf18
	goto loc_821BAF18;
loc_821BAF14:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821BAF18:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,-3980
	ctx.r4.s64 = ctx.r11.s64 + -3980;
	// bl 0x8232dde8
	ctx.lr = 0x821BAF28;
	sub_8232DDE8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BAF40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x821b5b78
	ctx.lr = 0x821BAF48;
	sub_821B5B78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r29,420
	ctx.r10.s64 = ctx.r29.s64 + 420;
	// stw r30,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r30.u32);
	// addi r11,r11,-7920
	ctx.r11.s64 = ctx.r11.s64 + -7920;
	// stw r30,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r30.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r11,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r11.u32);
	// stw r28,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r28.u32);
	// stw r10,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r10.u32);
	// bl 0x821b91f8
	ctx.lr = 0x821BAF7C;
	sub_821B91F8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x821b8880
	ctx.lr = 0x821BAF88;
	sub_821B8880(ctx, base);
	// lwz r11,432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821bafa0
	if (cr6.eq) goto loc_821BAFA0;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_821BAFA0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// beq cr6,0x821bafbc
	if (cr6.eq) goto loc_821BAFBC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x821bafc0
	goto loc_821BAFC0;
loc_821BAFBC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821BAFC0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-3968
	ctx.r4.s64 = ctx.r11.s64 + -3968;
	// bl 0x8232df30
	ctx.lr = 0x821BAFD0;
	sub_8232DF30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821baff0
	if (cr6.eq) goto loc_821BAFF0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821baff0
	if (cr6.eq) goto loc_821BAFF0;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_821BAFF0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-3940
	ctx.r7.s64 = ctx.r11.s64 + -3940;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bac68
	ctx.lr = 0x821BB00C;
	sub_821BAC68(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r7,r11,-3920
	ctx.r7.s64 = ctx.r11.s64 + -3920;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bac68
	ctx.lr = 0x821BB02C;
	sub_821BAC68(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r7,r11,-3900
	ctx.r7.s64 = ctx.r11.s64 + -3900;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bac68
	ctx.lr = 0x821BB04C;
	sub_821BAC68(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r7,r11,-3880
	ctx.r7.s64 = ctx.r11.s64 + -3880;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bac68
	ctx.lr = 0x821BB06C;
	sub_821BAC68(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r7,r11,-3860
	ctx.r7.s64 = ctx.r11.s64 + -3860;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bac68
	ctx.lr = 0x821BB08C;
	sub_821BAC68(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r7,r11,-3840
	ctx.r7.s64 = ctx.r11.s64 + -3840;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bac68
	ctx.lr = 0x821BB0AC;
	sub_821BAC68(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r7,r11,-3820
	ctx.r7.s64 = ctx.r11.s64 + -3820;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bac68
	ctx.lr = 0x821BB0CC;
	sub_821BAC68(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r7,r11,-3800
	ctx.r7.s64 = ctx.r11.s64 + -3800;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bac68
	ctx.lr = 0x821BB0EC;
	sub_821BAC68(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r7,r11,-3780
	ctx.r7.s64 = ctx.r11.s64 + -3780;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bad10
	ctx.lr = 0x821BB10C;
	sub_821BAD10(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r7,r11,-3760
	ctx.r7.s64 = ctx.r11.s64 + -3760;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bad10
	ctx.lr = 0x821BB12C;
	sub_821BAD10(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r7,r11,-3740
	ctx.r7.s64 = ctx.r11.s64 + -3740;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bad10
	ctx.lr = 0x821BB14C;
	sub_821BAD10(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r7,r11,-3720
	ctx.r7.s64 = ctx.r11.s64 + -3720;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bad10
	ctx.lr = 0x821BB16C;
	sub_821BAD10(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r7,r11,-3700
	ctx.r7.s64 = ctx.r11.s64 + -3700;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bad10
	ctx.lr = 0x821BB18C;
	sub_821BAD10(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r7,r11,-3680
	ctx.r7.s64 = ctx.r11.s64 + -3680;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bad10
	ctx.lr = 0x821BB1AC;
	sub_821BAD10(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r7,r11,-3660
	ctx.r7.s64 = ctx.r11.s64 + -3660;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bad10
	ctx.lr = 0x821BB1CC;
	sub_821BAD10(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r7,r11,-3640
	ctx.r7.s64 = ctx.r11.s64 + -3640;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bad10
	ctx.lr = 0x821BB1EC;
	sub_821BAD10(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r7,r11,-3620
	ctx.r7.s64 = ctx.r11.s64 + -3620;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bada0
	ctx.lr = 0x821BB20C;
	sub_821BADA0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r7,r11,-3600
	ctx.r7.s64 = ctx.r11.s64 + -3600;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bada0
	ctx.lr = 0x821BB22C;
	sub_821BADA0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r7,r11,-3580
	ctx.r7.s64 = ctx.r11.s64 + -3580;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bada0
	ctx.lr = 0x821BB24C;
	sub_821BADA0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r7,r11,-3560
	ctx.r7.s64 = ctx.r11.s64 + -3560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bada0
	ctx.lr = 0x821BB26C;
	sub_821BADA0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r7,r11,-3540
	ctx.r7.s64 = ctx.r11.s64 + -3540;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bada0
	ctx.lr = 0x821BB28C;
	sub_821BADA0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r11,-3520
	ctx.r7.s64 = ctx.r11.s64 + -3520;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bada0
	ctx.lr = 0x821BB2AC;
	sub_821BADA0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r7,r11,-3500
	ctx.r7.s64 = ctx.r11.s64 + -3500;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bada0
	ctx.lr = 0x821BB2CC;
	sub_821BADA0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r7,r11,-3480
	ctx.r7.s64 = ctx.r11.s64 + -3480;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bada0
	ctx.lr = 0x821BB2EC;
	sub_821BADA0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// or r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 | ctx.r14.u64;
	// or r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 | ctx.r15.u64;
	// or r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 | ctx.r16.u64;
	// or r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 | ctx.r17.u64;
	// or r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 | ctx.r18.u64;
	// or r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 | ctx.r19.u64;
	// or r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 | ctx.r20.u64;
	// or r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 | ctx.r21.u64;
	// or r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 | ctx.r22.u64;
	// or r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 | ctx.r23.u64;
	// or r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 | ctx.r24.u64;
	// or r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 | ctx.r25.u64;
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,14216
	ctx.r31.s64 = ctx.r11.s64 + 14216;
	// beq cr6,0x821bb3d4
	if (cr6.eq) goto loc_821BB3D4;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x821b5b78
	ctx.lr = 0x821BB380;
	sub_821B5B78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-3176
	ctx.r11.s64 = ctx.r11.s64 + -3176;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r30,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r30.u32);
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r10.u32);
	// stw r30,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r30.u32);
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// bl 0x821b8880
	ctx.lr = 0x821BB3B4;
	sub_821B8880(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BB3CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// b 0x821bb3d8
	goto loc_821BB3D8;
loc_821BB3D4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821BB3D8:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821b9300
	ctx.lr = 0x821BB3E0;
	sub_821B9300(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb440
	if (cr6.eq) goto loc_821BB440;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb440
	if (cr6.eq) goto loc_821BB440;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bb420
	if (!cr6.eq) goto loc_821BB420;
	// bl 0x82216290
	ctx.lr = 0x821BB41C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_821BB420:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BB43C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
loc_821BB440:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8232ad68
	ctx.lr = 0x821BB458;
	sub_8232AD68(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bb468
	if (cr6.eq) goto loc_821BB468;
	// bl 0x82170268
	ctx.lr = 0x821BB468;
	sub_82170268(ctx, base);
loc_821BB468:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB474"))) PPC_WEAK_FUNC(sub_821BB474);
PPC_FUNC_IMPL(__imp__sub_821BB474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB478"))) PPC_WEAK_FUNC(sub_821BB478);
PPC_FUNC_IMPL(__imp__sub_821BB478) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x821BB480;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,-11564
	ctx.r29.s64 = ctx.r11.s64 + -11564;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x821bb4f4
	if (!cr6.gt) goto loc_821BB4F4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_821BB4A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x821BB4C8;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bb4d8
	if (cr6.eq) goto loc_821BB4D8;
	// bl 0x82170268
	ctx.lr = 0x821BB4D8;
	sub_82170268(ctx, base);
loc_821BB4D8:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821bb4a4
	if (!cr6.eq) goto loc_821BB4A4;
loc_821BB4F4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232ad68
	ctx.lr = 0x821BB50C;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bb51c
	if (cr6.eq) goto loc_821BB51C;
	// bl 0x82170268
	ctx.lr = 0x821BB51C;
	sub_82170268(ctx, base);
loc_821BB51C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB534"))) PPC_WEAK_FUNC(sub_821BB534);
PPC_FUNC_IMPL(__imp__sub_821BB534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB538"))) PPC_WEAK_FUNC(sub_821BB538);
PPC_FUNC_IMPL(__imp__sub_821BB538) {
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
	// beq cr6,0x821bb5a0
	if (cr6.eq) goto loc_821BB5A0;
	// bl 0x821b8390
	ctx.lr = 0x821BB558;
	sub_821B8390(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb578
	if (cr6.eq) goto loc_821BB578;
loc_821BB564:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821bb588
	if (cr6.eq) goto loc_821BB588;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb564
	if (!cr6.eq) goto loc_821BB564;
loc_821BB578:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb5a0
	if (cr6.eq) goto loc_821BB5A0;
loc_821BB588:
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
loc_821BB5A0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_821BB5B8"))) PPC_WEAK_FUNC(sub_821BB5B8);
PPC_FUNC_IMPL(__imp__sub_821BB5B8) {
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
	// beq cr6,0x821bb620
	if (cr6.eq) goto loc_821BB620;
	// bl 0x821bbaf8
	ctx.lr = 0x821BB5D8;
	sub_821BBAF8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb5f8
	if (cr6.eq) goto loc_821BB5F8;
loc_821BB5E4:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821bb608
	if (cr6.eq) goto loc_821BB608;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb5e4
	if (!cr6.eq) goto loc_821BB5E4;
loc_821BB5F8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb620
	if (cr6.eq) goto loc_821BB620;
loc_821BB608:
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
loc_821BB620:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_821BB638"))) PPC_WEAK_FUNC(sub_821BB638);
PPC_FUNC_IMPL(__imp__sub_821BB638) {
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
	// beq cr6,0x821bb6a0
	if (cr6.eq) goto loc_821BB6A0;
	// bl 0x821bb878
	ctx.lr = 0x821BB658;
	sub_821BB878(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb678
	if (cr6.eq) goto loc_821BB678;
loc_821BB664:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821bb688
	if (cr6.eq) goto loc_821BB688;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb664
	if (!cr6.eq) goto loc_821BB664;
loc_821BB678:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb6a0
	if (cr6.eq) goto loc_821BB6A0;
loc_821BB688:
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
loc_821BB6A0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_821BB6B8"))) PPC_WEAK_FUNC(sub_821BB6B8);
PPC_FUNC_IMPL(__imp__sub_821BB6B8) {
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
	// beq cr6,0x821bb720
	if (cr6.eq) goto loc_821BB720;
	// bl 0x821bb738
	ctx.lr = 0x821BB6D8;
	sub_821BB738(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb6f8
	if (cr6.eq) goto loc_821BB6F8;
loc_821BB6E4:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821bb708
	if (cr6.eq) goto loc_821BB708;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb6e4
	if (!cr6.eq) goto loc_821BB6E4;
loc_821BB6F8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb720
	if (cr6.eq) goto loc_821BB720;
loc_821BB708:
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
loc_821BB720:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_821BB738"))) PPC_WEAK_FUNC(sub_821BB738);
PPC_FUNC_IMPL(__imp__sub_821BB738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-24404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24404);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bb85c
	if (!cr6.eq) goto loc_821BB85C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BB768;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bb7dc
	if (cr6.eq) goto loc_821BB7DC;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-26096
	ctx.r7.s64 = ctx.r10.s64 + -26096;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,15516
	ctx.r11.s64 = ctx.r11.s64 + 15516;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BB7D8;
	sub_822ED768(ctx, base);
	// b 0x821bb7e0
	goto loc_821BB7E0;
loc_821BB7DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BB7E0:
	// stw r3,-24404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24404, ctx.r3.u32);
	// bl 0x822915a0
	ctx.lr = 0x821BB7E8;
	sub_822915A0(ctx, base);
	// lwz r11,-24404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24404);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bb804
	if (cr6.eq) goto loc_821BB804;
	// bl 0x822915a0
	ctx.lr = 0x821BB7F8;
	sub_822915A0(ctx, base);
	// lwz r11,-24404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24404);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bb80c
	goto loc_821BB80C;
loc_821BB804:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BB80C:
	// bl 0x82170938
	ctx.lr = 0x821BB810;
	sub_82170938(ctx, base);
	// lwz r11,-24404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24404);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BB81C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24404);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb85c
	if (cr6.eq) goto loc_821BB85C;
	// bl 0x82170ba8
	ctx.lr = 0x821BB83C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24404);
	// bne cr6,0x821bb85c
	if (!cr6.eq) goto loc_821BB85C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BB858;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24404);
loc_821BB85C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BB874"))) PPC_WEAK_FUNC(sub_821BB874);
PPC_FUNC_IMPL(__imp__sub_821BB874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB878"))) PPC_WEAK_FUNC(sub_821BB878);
PPC_FUNC_IMPL(__imp__sub_821BB878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-24412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24412);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bb99c
	if (!cr6.eq) goto loc_821BB99C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BB8A8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bb91c
	if (cr6.eq) goto loc_821BB91C;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-25584
	ctx.r7.s64 = ctx.r10.s64 + -25584;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,15424
	ctx.r11.s64 = ctx.r11.s64 + 15424;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BB918;
	sub_822ED768(ctx, base);
	// b 0x821bb920
	goto loc_821BB920;
loc_821BB91C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BB920:
	// stw r3,-24412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24412, ctx.r3.u32);
	// bl 0x822915a0
	ctx.lr = 0x821BB928;
	sub_822915A0(ctx, base);
	// lwz r11,-24412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24412);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bb944
	if (cr6.eq) goto loc_821BB944;
	// bl 0x822915a0
	ctx.lr = 0x821BB938;
	sub_822915A0(ctx, base);
	// lwz r11,-24412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24412);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bb94c
	goto loc_821BB94C;
loc_821BB944:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BB94C:
	// bl 0x82170938
	ctx.lr = 0x821BB950;
	sub_82170938(ctx, base);
	// lwz r11,-24412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24412);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BB95C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24412);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb99c
	if (cr6.eq) goto loc_821BB99C;
	// bl 0x82170ba8
	ctx.lr = 0x821BB97C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24412);
	// bne cr6,0x821bb99c
	if (!cr6.eq) goto loc_821BB99C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BB998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24412);
loc_821BB99C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BB9B4"))) PPC_WEAK_FUNC(sub_821BB9B4);
PPC_FUNC_IMPL(__imp__sub_821BB9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB9B8"))) PPC_WEAK_FUNC(sub_821BB9B8);
PPC_FUNC_IMPL(__imp__sub_821BB9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,-12160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bbae0
	if (!cr6.eq) goto loc_821BBAE0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BB9E8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bba60
	if (cr6.eq) goto loc_821BBA60;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-11080
	ctx.r6.s64 = ctx.r10.s64 + -11080;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,14700
	ctx.r11.s64 = ctx.r11.s64 + 14700;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// addi r9,r9,-31040
	ctx.r9.s64 = ctx.r9.s64 + -31040;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BBA5C;
	sub_822ED768(ctx, base);
	// b 0x821bba64
	goto loc_821BBA64;
loc_821BBA60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BBA64:
	// stw r3,-12160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12160, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x821BBA6C;
	sub_821FD018(ctx, base);
	// lwz r11,-12160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12160);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bba88
	if (cr6.eq) goto loc_821BBA88;
	// bl 0x821fd018
	ctx.lr = 0x821BBA7C;
	sub_821FD018(ctx, base);
	// lwz r11,-12160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12160);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bba90
	goto loc_821BBA90;
loc_821BBA88:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BBA90:
	// bl 0x82170938
	ctx.lr = 0x821BBA94;
	sub_82170938(ctx, base);
	// lwz r11,-12160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12160);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BBAA0;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-12160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12160);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bbae0
	if (cr6.eq) goto loc_821BBAE0;
	// bl 0x82170ba8
	ctx.lr = 0x821BBAC0;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-12160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12160);
	// bne cr6,0x821bbae0
	if (!cr6.eq) goto loc_821BBAE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBADC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-12160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12160);
loc_821BBAE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BBAF8"))) PPC_WEAK_FUNC(sub_821BBAF8);
PPC_FUNC_IMPL(__imp__sub_821BBAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,-12496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bbc20
	if (!cr6.eq) goto loc_821BBC20;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BBB28;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bbba0
	if (cr6.eq) goto loc_821BBBA0;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-11592
	ctx.r6.s64 = ctx.r10.s64 + -11592;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,8884
	ctx.r11.s64 = ctx.r11.s64 + 8884;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31180
	ctx.r10.s64 = ctx.r10.s64 + -31180;
	// addi r9,r9,-31040
	ctx.r9.s64 = ctx.r9.s64 + -31040;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,916
	ctx.r5.s64 = 916;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BBB9C;
	sub_822ED768(ctx, base);
	// b 0x821bbba4
	goto loc_821BBBA4;
loc_821BBBA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BBBA4:
	// stw r3,-12496(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12496, ctx.r3.u32);
	// bl 0x821c05c0
	ctx.lr = 0x821BBBAC;
	sub_821C05C0(ctx, base);
	// lwz r11,-12496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12496);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bbbc8
	if (cr6.eq) goto loc_821BBBC8;
	// bl 0x821c05c0
	ctx.lr = 0x821BBBBC;
	sub_821C05C0(ctx, base);
	// lwz r11,-12496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12496);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bbbd0
	goto loc_821BBBD0;
loc_821BBBC8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BBBD0:
	// bl 0x82170938
	ctx.lr = 0x821BBBD4;
	sub_82170938(ctx, base);
	// lwz r11,-12496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12496);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BBBE0;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-12496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12496);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bbc20
	if (cr6.eq) goto loc_821BBC20;
	// bl 0x82170ba8
	ctx.lr = 0x821BBC00;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-12496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12496);
	// bne cr6,0x821bbc20
	if (!cr6.eq) goto loc_821BBC20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBC1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-12496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12496);
loc_821BBC20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BBC38"))) PPC_WEAK_FUNC(sub_821BBC38);
PPC_FUNC_IMPL(__imp__sub_821BBC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-23852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23852);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bbd60
	if (!cr6.eq) goto loc_821BBD60;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BBC68;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bbce0
	if (cr6.eq) goto loc_821BBCE0;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,7440
	ctx.r6.s64 = ctx.r10.s64 + 7440;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,11548
	ctx.r11.s64 = ctx.r11.s64 + 11548;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// addi r9,r9,-31208
	ctx.r9.s64 = ctx.r9.s64 + -31208;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,484
	ctx.r5.s64 = 484;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BBCDC;
	sub_822ED768(ctx, base);
	// b 0x821bbce4
	goto loc_821BBCE4;
loc_821BBCE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BBCE4:
	// stw r3,-23852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23852, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x821BBCEC;
	sub_82170938(ctx, base);
	// lwz r11,-23852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23852);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bbd08
	if (cr6.eq) goto loc_821BBD08;
	// bl 0x82170938
	ctx.lr = 0x821BBCFC;
	sub_82170938(ctx, base);
	// lwz r11,-23852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23852);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bbd10
	goto loc_821BBD10;
loc_821BBD08:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BBD10:
	// bl 0x82170938
	ctx.lr = 0x821BBD14;
	sub_82170938(ctx, base);
	// lwz r11,-23852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23852);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BBD20;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23852);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bbd60
	if (cr6.eq) goto loc_821BBD60;
	// bl 0x82170ba8
	ctx.lr = 0x821BBD40;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23852);
	// bne cr6,0x821bbd60
	if (!cr6.eq) goto loc_821BBD60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBD5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23852);
loc_821BBD60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BBD78"))) PPC_WEAK_FUNC(sub_821BBD78);
PPC_FUNC_IMPL(__imp__sub_821BBD78) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-2384
	ctx.r11.s64 = ctx.r11.s64 + -2384;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BBDA8"))) PPC_WEAK_FUNC(sub_821BBDA8);
PPC_FUNC_IMPL(__imp__sub_821BBDA8) {
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
	// bl 0x821bbdf8
	ctx.lr = 0x821BBDC8;
	sub_821BBDF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bbde0
	if (cr6.eq) goto loc_821BBDE0;
	// bl 0x82170268
	ctx.lr = 0x821BBDDC;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BBDE0:
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

__attribute__((alias("__imp__sub_821BBDF8"))) PPC_WEAK_FUNC(sub_821BBDF8);
PPC_FUNC_IMPL(__imp__sub_821BBDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x821BBE00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-3384
	ctx.r11.s64 = ctx.r11.s64 + -3384;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BBE18;
	sub_822A89B8(ctx, base);
	// addi r31,r26,480
	ctx.r31.s64 = ctx.r26.s64 + 480;
	// li r28,15
	ctx.r28.s64 = 15;
	// lis r27,-32065
	ctx.r27.s64 = -2101411840;
	// li r29,0
	ctx.r29.s64 = 0;
loc_821BBE28:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bbe80
	if (cr6.eq) goto loc_821BBE80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bbe80
	if (cr6.eq) goto loc_821BBE80;
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bbe60
	if (!cr6.eq) goto loc_821BBE60;
	// bl 0x82216290
	ctx.lr = 0x821BBE5C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
loc_821BBE60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBE7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821BBE80:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ad68
	ctx.lr = 0x821BBE98;
	sub_8232AD68(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bbecc
	if (cr6.eq) goto loc_821BBECC;
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bbeb8
	if (!cr6.eq) goto loc_821BBEB8;
	// bl 0x82216290
	ctx.lr = 0x821BBEB4;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
loc_821BBEB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBECC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BBECC:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x821bbe28
	if (!cr6.lt) goto loc_821BBE28;
	// addi r31,r26,288
	ctx.r31.s64 = ctx.r26.s64 + 288;
	// li r28,15
	ctx.r28.s64 = 15;
loc_821BBEEC:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bbf44
	if (cr6.eq) goto loc_821BBF44;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bbf44
	if (cr6.eq) goto loc_821BBF44;
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bbf24
	if (!cr6.eq) goto loc_821BBF24;
	// bl 0x82216290
	ctx.lr = 0x821BBF20;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
loc_821BBF24:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBF40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821BBF44:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ad68
	ctx.lr = 0x821BBF5C;
	sub_8232AD68(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bbf90
	if (cr6.eq) goto loc_821BBF90;
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bbf7c
	if (!cr6.eq) goto loc_821BBF7C;
	// bl 0x82216290
	ctx.lr = 0x821BBF78;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
loc_821BBF7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBF90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BBF90:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x821bbeec
	if (!cr6.lt) goto loc_821BBEEC;
	// addi r31,r26,84
	ctx.r31.s64 = ctx.r26.s64 + 84;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bbfd0
	if (cr6.eq) goto loc_821BBFD0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821BBFD0;
	sub_82170408(ctx, base);
loc_821BBFD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821BBFD8;
	sub_8218C838(ctx, base);
	// addi r31,r26,72
	ctx.r31.s64 = ctx.r26.s64 + 72;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc000
	if (cr6.eq) goto loc_821BC000;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821BC000;
	sub_82170408(ctx, base);
loc_821BC000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821BC008;
	sub_8218C838(ctx, base);
	// addi r31,r26,60
	ctx.r31.s64 = ctx.r26.s64 + 60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc030
	if (cr6.eq) goto loc_821BC030;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821BC030;
	sub_82170408(ctx, base);
loc_821BC030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821BC038;
	sub_8218C838(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a8e90
	ctx.lr = 0x821BC040;
	sub_822A8E90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC048"))) PPC_WEAK_FUNC(sub_821BC048);
PPC_FUNC_IMPL(__imp__sub_821BC048) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2384
	ctx.r11.s64 = ctx.r11.s64 + -2384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BC074;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbdf8
	ctx.lr = 0x821BC07C;
	sub_821BBDF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc094
	if (cr6.eq) goto loc_821BC094;
	// bl 0x82170268
	ctx.lr = 0x821BC090;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BC094:
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

__attribute__((alias("__imp__sub_821BC0AC"))) PPC_WEAK_FUNC(sub_821BC0AC);
PPC_FUNC_IMPL(__imp__sub_821BC0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC0B0"))) PPC_WEAK_FUNC(sub_821BC0B0);
PPC_FUNC_IMPL(__imp__sub_821BC0B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// li r11,29
	ctx.r11.s64 = 29;
	// rlwimi r10,r11,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r10,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BC0C4"))) PPC_WEAK_FUNC(sub_821BC0C4);
PPC_FUNC_IMPL(__imp__sub_821BC0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC0C8"))) PPC_WEAK_FUNC(sub_821BC0C8);
PPC_FUNC_IMPL(__imp__sub_821BC0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,-12592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12592);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bc1f0
	if (!cr6.eq) goto loc_821BC1F0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BC0F8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc170
	if (cr6.eq) goto loc_821BC170;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-13048
	ctx.r6.s64 = ctx.r10.s64 + -13048;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-4180
	ctx.r11.s64 = ctx.r11.s64 + -4180;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// addi r9,r9,-31040
	ctx.r9.s64 = ctx.r9.s64 + -31040;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,448
	ctx.r5.s64 = 448;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BC16C;
	sub_822ED768(ctx, base);
	// b 0x821bc174
	goto loc_821BC174;
loc_821BC170:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BC174:
	// stw r3,-12592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12592, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x821BC17C;
	sub_821A7638(ctx, base);
	// lwz r11,-12592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12592);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bc198
	if (cr6.eq) goto loc_821BC198;
	// bl 0x821a7638
	ctx.lr = 0x821BC18C;
	sub_821A7638(ctx, base);
	// lwz r11,-12592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12592);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bc1a0
	goto loc_821BC1A0;
loc_821BC198:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BC1A0:
	// bl 0x82170938
	ctx.lr = 0x821BC1A4;
	sub_82170938(ctx, base);
	// lwz r11,-12592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12592);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BC1B0;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-12592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12592);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc1f0
	if (cr6.eq) goto loc_821BC1F0;
	// bl 0x82170ba8
	ctx.lr = 0x821BC1D0;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-12592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12592);
	// bne cr6,0x821bc1f0
	if (!cr6.eq) goto loc_821BC1F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC1EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-12592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12592);
loc_821BC1F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BC208"))) PPC_WEAK_FUNC(sub_821BC208);
PPC_FUNC_IMPL(__imp__sub_821BC208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x821BC210;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x821bc234
	if (!cr6.eq) goto loc_821BC234;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_821BC234:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x821bc244
	if (!cr6.eq) goto loc_821BC244;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_821BC244:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bne cr6,0x821bc254
	if (!cr6.eq) goto loc_821BC254;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_821BC254:
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-18432(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18432);
	// bl 0x822aa9b0
	ctx.lr = 0x821BC270;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC28C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC294"))) PPC_WEAK_FUNC(sub_821BC294);
PPC_FUNC_IMPL(__imp__sub_821BC294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC298"))) PPC_WEAK_FUNC(sub_821BC298);
PPC_FUNC_IMPL(__imp__sub_821BC298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-24596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24596);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bc3bc
	if (!cr6.eq) goto loc_821BC3BC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BC2C8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc33c
	if (cr6.eq) goto loc_821BC33C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12440
	ctx.r7.s64 = ctx.r10.s64 + 12440;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-22864
	ctx.r11.s64 = ctx.r11.s64 + -22864;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,244
	ctx.r5.s64 = 244;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BC338;
	sub_822ED768(ctx, base);
	// b 0x821bc340
	goto loc_821BC340;
loc_821BC33C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BC340:
	// stw r3,-24596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24596, ctx.r3.u32);
	// bl 0x8224cf68
	ctx.lr = 0x821BC348;
	sub_8224CF68(ctx, base);
	// lwz r11,-24596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24596);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bc364
	if (cr6.eq) goto loc_821BC364;
	// bl 0x8224cf68
	ctx.lr = 0x821BC358;
	sub_8224CF68(ctx, base);
	// lwz r11,-24596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24596);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bc36c
	goto loc_821BC36C;
loc_821BC364:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BC36C:
	// bl 0x82170938
	ctx.lr = 0x821BC370;
	sub_82170938(ctx, base);
	// lwz r11,-24596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24596);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BC37C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24596);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc3bc
	if (cr6.eq) goto loc_821BC3BC;
	// bl 0x82170ba8
	ctx.lr = 0x821BC39C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24596);
	// bne cr6,0x821bc3bc
	if (!cr6.eq) goto loc_821BC3BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC3B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24596);
loc_821BC3BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BC3D4"))) PPC_WEAK_FUNC(sub_821BC3D4);
PPC_FUNC_IMPL(__imp__sub_821BC3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC3D8"))) PPC_WEAK_FUNC(sub_821BC3D8);
PPC_FUNC_IMPL(__imp__sub_821BC3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-24576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24576);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bc4fc
	if (!cr6.eq) goto loc_821BC4FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BC408;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc47c
	if (cr6.eq) goto loc_821BC47C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12680
	ctx.r7.s64 = ctx.r10.s64 + 12680;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-22636
	ctx.r11.s64 = ctx.r11.s64 + -22636;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,244
	ctx.r5.s64 = 244;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BC478;
	sub_822ED768(ctx, base);
	// b 0x821bc480
	goto loc_821BC480;
loc_821BC47C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BC480:
	// stw r3,-24576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24576, ctx.r3.u32);
	// bl 0x8224cf68
	ctx.lr = 0x821BC488;
	sub_8224CF68(ctx, base);
	// lwz r11,-24576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24576);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bc4a4
	if (cr6.eq) goto loc_821BC4A4;
	// bl 0x8224cf68
	ctx.lr = 0x821BC498;
	sub_8224CF68(ctx, base);
	// lwz r11,-24576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24576);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bc4ac
	goto loc_821BC4AC;
loc_821BC4A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BC4AC:
	// bl 0x82170938
	ctx.lr = 0x821BC4B0;
	sub_82170938(ctx, base);
	// lwz r11,-24576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24576);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BC4BC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24576);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc4fc
	if (cr6.eq) goto loc_821BC4FC;
	// bl 0x82170ba8
	ctx.lr = 0x821BC4DC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24576);
	// bne cr6,0x821bc4fc
	if (!cr6.eq) goto loc_821BC4FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC4F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24576);
loc_821BC4FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BC514"))) PPC_WEAK_FUNC(sub_821BC514);
PPC_FUNC_IMPL(__imp__sub_821BC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC518"))) PPC_WEAK_FUNC(sub_821BC518);
PPC_FUNC_IMPL(__imp__sub_821BC518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-24588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24588);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bc63c
	if (!cr6.eq) goto loc_821BC63C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BC548;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc5bc
	if (cr6.eq) goto loc_821BC5BC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12784
	ctx.r7.s64 = ctx.r10.s64 + 12784;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-22760
	ctx.r11.s64 = ctx.r11.s64 + -22760;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BC5B8;
	sub_822ED768(ctx, base);
	// b 0x821bc5c0
	goto loc_821BC5C0;
loc_821BC5BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BC5C0:
	// stw r3,-24588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24588, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x821BC5C8;
	sub_821FC748(ctx, base);
	// lwz r11,-24588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24588);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bc5e4
	if (cr6.eq) goto loc_821BC5E4;
	// bl 0x821fc748
	ctx.lr = 0x821BC5D8;
	sub_821FC748(ctx, base);
	// lwz r11,-24588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24588);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bc5ec
	goto loc_821BC5EC;
loc_821BC5E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BC5EC:
	// bl 0x82170938
	ctx.lr = 0x821BC5F0;
	sub_82170938(ctx, base);
	// lwz r11,-24588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24588);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BC5FC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24588);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc63c
	if (cr6.eq) goto loc_821BC63C;
	// bl 0x82170ba8
	ctx.lr = 0x821BC61C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24588);
	// bne cr6,0x821bc63c
	if (!cr6.eq) goto loc_821BC63C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC638;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24588);
loc_821BC63C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BC654"))) PPC_WEAK_FUNC(sub_821BC654);
PPC_FUNC_IMPL(__imp__sub_821BC654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC658"))) PPC_WEAK_FUNC(sub_821BC658);
PPC_FUNC_IMPL(__imp__sub_821BC658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-24460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24460);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bc77c
	if (!cr6.eq) goto loc_821BC77C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BC688;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc6fc
	if (cr6.eq) goto loc_821BC6FC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,13328
	ctx.r7.s64 = ctx.r10.s64 + 13328;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-21360
	ctx.r11.s64 = ctx.r11.s64 + -21360;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,244
	ctx.r5.s64 = 244;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BC6F8;
	sub_822ED768(ctx, base);
	// b 0x821bc700
	goto loc_821BC700;
loc_821BC6FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BC700:
	// stw r3,-24460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24460, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x821BC708;
	sub_821FC748(ctx, base);
	// lwz r11,-24460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24460);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bc724
	if (cr6.eq) goto loc_821BC724;
	// bl 0x821fc748
	ctx.lr = 0x821BC718;
	sub_821FC748(ctx, base);
	// lwz r11,-24460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24460);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bc72c
	goto loc_821BC72C;
loc_821BC724:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BC72C:
	// bl 0x82170938
	ctx.lr = 0x821BC730;
	sub_82170938(ctx, base);
	// lwz r11,-24460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24460);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BC73C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24460);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc77c
	if (cr6.eq) goto loc_821BC77C;
	// bl 0x82170ba8
	ctx.lr = 0x821BC75C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24460);
	// bne cr6,0x821bc77c
	if (!cr6.eq) goto loc_821BC77C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC778;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24460);
loc_821BC77C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BC794"))) PPC_WEAK_FUNC(sub_821BC794);
PPC_FUNC_IMPL(__imp__sub_821BC794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC798"))) PPC_WEAK_FUNC(sub_821BC798);
PPC_FUNC_IMPL(__imp__sub_821BC798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-24556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24556);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bc8bc
	if (!cr6.eq) goto loc_821BC8BC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BC7C8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bc83c
	if (cr6.eq) goto loc_821BC83C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12936
	ctx.r7.s64 = ctx.r10.s64 + 12936;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-22436
	ctx.r11.s64 = ctx.r11.s64 + -22436;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,252
	ctx.r5.s64 = 252;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BC838;
	sub_822ED768(ctx, base);
	// b 0x821bc840
	goto loc_821BC840;
loc_821BC83C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BC840:
	// stw r3,-24556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24556, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x821BC848;
	sub_821FC748(ctx, base);
	// lwz r11,-24556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24556);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bc864
	if (cr6.eq) goto loc_821BC864;
	// bl 0x821fc748
	ctx.lr = 0x821BC858;
	sub_821FC748(ctx, base);
	// lwz r11,-24556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24556);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bc86c
	goto loc_821BC86C;
loc_821BC864:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BC86C:
	// bl 0x82170938
	ctx.lr = 0x821BC870;
	sub_82170938(ctx, base);
	// lwz r11,-24556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24556);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BC87C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24556);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc8bc
	if (cr6.eq) goto loc_821BC8BC;
	// bl 0x82170ba8
	ctx.lr = 0x821BC89C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24556);
	// bne cr6,0x821bc8bc
	if (!cr6.eq) goto loc_821BC8BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC8B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24556);
loc_821BC8BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BC8D4"))) PPC_WEAK_FUNC(sub_821BC8D4);
PPC_FUNC_IMPL(__imp__sub_821BC8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC8D8"))) PPC_WEAK_FUNC(sub_821BC8D8);
PPC_FUNC_IMPL(__imp__sub_821BC8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x821BC8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x82170670
	ctx.lr = 0x821BC920;
	sub_82170670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82170670
	ctx.lr = 0x821BC92C;
	sub_82170670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82170670
	ctx.lr = 0x821BC938;
	sub_82170670(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-19628(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -19628);
	// bl 0x822aa9b0
	ctx.lr = 0x821BC954;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc994
	if (cr6.eq) goto loc_821BC994;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82170408
	ctx.lr = 0x821BC994;
	sub_82170408(ctx, base);
loc_821BC994:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218c838
	ctx.lr = 0x821BC99C;
	sub_8218C838(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc9c0
	if (cr6.eq) goto loc_821BC9C0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82170408
	ctx.lr = 0x821BC9C0;
	sub_82170408(ctx, base);
loc_821BC9C0:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8218c838
	ctx.lr = 0x821BC9C8;
	sub_8218C838(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bc9ec
	if (cr6.eq) goto loc_821BC9EC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x821BC9EC;
	sub_82170408(ctx, base);
loc_821BC9EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x821BC9F4;
	sub_8218C838(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC9FC"))) PPC_WEAK_FUNC(sub_821BC9FC);
PPC_FUNC_IMPL(__imp__sub_821BC9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCA00"))) PPC_WEAK_FUNC(sub_821BCA00);
PPC_FUNC_IMPL(__imp__sub_821BCA00) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821BCA08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821bca40
	if (!cr6.gt) goto loc_821BCA40;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82170398
	ctx.lr = 0x821BCA40;
	sub_82170398(ctx, base);
loc_821BCA40:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821bca70
	if (cr6.eq) goto loc_821BCA70;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x828d2930
	ctx.lr = 0x821BCA64;
	sub_828D2930(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_821BCA70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BCA78"))) PPC_WEAK_FUNC(sub_821BCA78);
PPC_FUNC_IMPL(__imp__sub_821BCA78) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82170480
	ctx.lr = 0x821BCA9C;
	sub_82170480(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821bcb00
	ctx.lr = 0x821BCAA4;
	sub_821BCB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170480
	ctx.lr = 0x821BCAB0;
	sub_82170480(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821bcad8
	if (cr6.eq) goto loc_821BCAD8;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x821BCAD8;
	sub_82170408(ctx, base);
loc_821BCAD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x821BCAE0;
	sub_8218C838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_821BCAFC"))) PPC_WEAK_FUNC(sub_821BCAFC);
PPC_FUNC_IMPL(__imp__sub_821BCAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCB00"))) PPC_WEAK_FUNC(sub_821BCB00);
PPC_FUNC_IMPL(__imp__sub_821BCB00) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821bcb4c
	if (!cr6.gt) goto loc_821BCB4C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x821bcb4c
	if (cr6.eq) goto loc_821BCB4C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,-3388
	ctx.r4.s64 = ctx.r11.s64 + -3388;
	// bl 0x82170720
	ctx.lr = 0x821BCB4C;
	sub_82170720(ctx, base);
loc_821BCB4C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170720
	ctx.lr = 0x821BCB58;
	sub_82170720(ctx, base);
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

__attribute__((alias("__imp__sub_821BCB70"))) PPC_WEAK_FUNC(sub_821BCB70);
PPC_FUNC_IMPL(__imp__sub_821BCB70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-32064
	ctx.r8.s64 = -2101346304;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r11,-24420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24420);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// lwz r5,31388(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31388);
loc_821BCBA4:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bcbc4
	if (cr6.eq) goto loc_821BCBC4;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821bcbdc
	if (cr6.eq) goto loc_821BCBDC;
loc_821BCBC4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blt cr6,0x821bcc44
	if (cr6.lt) goto loc_821BCC44;
loc_821BCBDC:
	// lwz r10,-24420(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24420);
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821bcc80
	if (!cr6.lt) goto loc_821BCC80;
	// lwz r10,-24420(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24420);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bcc1c
	if (cr6.eq) goto loc_821BCC1C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821bcc70
	if (cr6.eq) goto loc_821BCC70;
loc_821BCC1C:
	// lwz r10,-24420(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24420);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821bcc70
	if (!cr6.lt) goto loc_821BCC70;
loc_821BCC44:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// bne cr6,0x821bcc70
	if (!cr6.eq) goto loc_821BCC70;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
loc_821BCC70:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bcba4
	if (cr6.eq) goto loc_821BCBA4;
	// blr 
	return;
loc_821BCC80:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BCC94"))) PPC_WEAK_FUNC(sub_821BCC94);
PPC_FUNC_IMPL(__imp__sub_821BCC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCC98"))) PPC_WEAK_FUNC(sub_821BCC98);
PPC_FUNC_IMPL(__imp__sub_821BCC98) {
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
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bl 0x821bcb70
	ctx.lr = 0x821BCCEC;
	sub_821BCB70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_821BCD04"))) PPC_WEAK_FUNC(sub_821BCD04);
PPC_FUNC_IMPL(__imp__sub_821BCD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCD08"))) PPC_WEAK_FUNC(sub_821BCD08);
PPC_FUNC_IMPL(__imp__sub_821BCD08) {
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
	// beq cr6,0x821bcd34
	if (cr6.eq) goto loc_821BCD34;
	// bl 0x82191870
	ctx.lr = 0x821BCD28;
	sub_82191870(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-3064
	ctx.r11.s64 = ctx.r11.s64 + -3064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821BCD34:
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

__attribute__((alias("__imp__sub_821BCD48"))) PPC_WEAK_FUNC(sub_821BCD48);
PPC_FUNC_IMPL(__imp__sub_821BCD48) {
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
	// bl 0x821bcd98
	ctx.lr = 0x821BCD68;
	sub_821BCD98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bcd80
	if (cr6.eq) goto loc_821BCD80;
	// bl 0x82170268
	ctx.lr = 0x821BCD7C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BCD80:
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

__attribute__((alias("__imp__sub_821BCD98"))) PPC_WEAK_FUNC(sub_821BCD98);
PPC_FUNC_IMPL(__imp__sub_821BCD98) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3064
	ctx.r11.s64 = ctx.r11.s64 + -3064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BCDC0;
	sub_822A89B8(ctx, base);
	// addi r30,r31,436
	ctx.r30.s64 = ctx.r31.s64 + 436;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bcdec
	if (cr6.eq) goto loc_821BCDEC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821BCDEC;
	sub_82170408(ctx, base);
loc_821BCDEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821BCDF4;
	sub_8218C838(ctx, base);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x824c5b40
	ctx.lr = 0x821BCDFC;
	sub_824C5B40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821BCE04;
	sub_82191130(ctx, base);
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

__attribute__((alias("__imp__sub_821BCE1C"))) PPC_WEAK_FUNC(sub_821BCE1C);
PPC_FUNC_IMPL(__imp__sub_821BCE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCE20"))) PPC_WEAK_FUNC(sub_821BCE20);
PPC_FUNC_IMPL(__imp__sub_821BCE20) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3084
	ctx.r11.s64 = ctx.r11.s64 + -3084;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-13964
	ctx.r3.s64 = ctx.r10.s64 + -13964;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8233d930
	ctx.lr = 0x821BCE54;
	sub_8233D930(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-13952
	ctx.r3.s64 = ctx.r11.s64 + -13952;
	// bl 0x8233d930
	ctx.lr = 0x821BCE68;
	sub_8233D930(ctx, base);
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

__attribute__((alias("__imp__sub_821BCE7C"))) PPC_WEAK_FUNC(sub_821BCE7C);
PPC_FUNC_IMPL(__imp__sub_821BCE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCE80"))) PPC_WEAK_FUNC(sub_821BCE80);
PPC_FUNC_IMPL(__imp__sub_821BCE80) {
	PPC_FUNC_PROLOGUE();
	// b 0x8234ea30
	sub_8234EA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BCE84"))) PPC_WEAK_FUNC(sub_821BCE84);
PPC_FUNC_IMPL(__imp__sub_821BCE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCE88"))) PPC_WEAK_FUNC(sub_821BCE88);
PPC_FUNC_IMPL(__imp__sub_821BCE88) {
	PPC_FUNC_PROLOGUE();
	// b 0x8234a500
	sub_8234A500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BCE8C"))) PPC_WEAK_FUNC(sub_821BCE8C);
PPC_FUNC_IMPL(__imp__sub_821BCE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCE90"))) PPC_WEAK_FUNC(sub_821BCE90);
PPC_FUNC_IMPL(__imp__sub_821BCE90) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bcf04
	if (cr6.eq) goto loc_821BCF04;
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bge cr6,0x821bceac
	if (!cr6.lt) goto loc_821BCEAC;
	// li r11,-2
	ctx.r11.s64 = -2;
	// b 0x821bceb8
	goto loc_821BCEB8;
loc_821BCEAC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821bceb8
	if (cr6.lt) goto loc_821BCEB8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_821BCEB8:
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bge cr6,0x821bced0
	if (!cr6.lt) goto loc_821BCED0;
	// li r11,-2
	ctx.r11.s64 = -2;
	// b 0x821bcedc
	goto loc_821BCEDC;
loc_821BCED0:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821bcedc
	if (cr6.lt) goto loc_821BCEDC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_821BCEDC:
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bge cr6,0x821bcef4
	if (!cr6.lt) goto loc_821BCEF4;
	// li r11,-2
	ctx.r11.s64 = -2;
	// b 0x821bcf00
	goto loc_821BCF00;
loc_821BCEF4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821bcf00
	if (cr6.lt) goto loc_821BCF00;
	// li r11,2
	ctx.r11.s64 = 2;
loc_821BCF00:
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
loc_821BCF04:
	// b 0x8235bd08
	sub_8235BD08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BCF08"))) PPC_WEAK_FUNC(sub_821BCF08);
PPC_FUNC_IMPL(__imp__sub_821BCF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x821BCF10;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// std r4,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r4.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,21068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21068, ctx.r11.u32);
	// bl 0x823647f0
	ctx.lr = 0x821BCF34;
	sub_823647F0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,16764
	ctx.r28.s64 = ctx.r11.s64 + 16764;
	// beq cr6,0x821bcf50
	if (cr6.eq) goto loc_821BCF50;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821bcf54
	goto loc_821BCF54;
loc_821BCF50:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_821BCF54:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-2124
	ctx.r4.s64 = ctx.r11.s64 + -2124;
	// bl 0x8232b480
	ctx.lr = 0x821BCF64;
	sub_8232B480(ctx, base);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r29,r11,-31672
	ctx.r29.s64 = ctx.r11.s64 + -31672;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BCF78;
	sub_821704F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x821704f8
	ctx.lr = 0x821BCF88;
	sub_821704F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82331a50
	ctx.lr = 0x821BCF94;
	sub_82331A50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bcfac
	if (cr6.eq) goto loc_821BCFAC;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x821bcfb0
	goto loc_821BCFB0;
loc_821BCFAC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_821BCFB0:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821b8270
	ctx.lr = 0x821BCFB8;
	sub_821B8270(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bcfcc
	if (cr6.eq) goto loc_821BCFCC;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x821bcfd0
	goto loc_821BCFD0;
loc_821BCFCC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_821BCFD0:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x821b8270
	ctx.lr = 0x821BCFDC;
	sub_821B8270(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bcff0
	if (!cr6.eq) goto loc_821BCFF0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_821BCFF0:
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b8270
	ctx.lr = 0x821BCFFC;
	sub_821B8270(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// beq cr6,0x821bd024
	if (cr6.eq) goto loc_821BD024;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82170408
	ctx.lr = 0x821BD024;
	sub_82170408(ctx, base);
loc_821BD024:
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8218c838
	ctx.lr = 0x821BD02C;
	sub_8218C838(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd050
	if (cr6.eq) goto loc_821BD050;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82170408
	ctx.lr = 0x821BD050;
	sub_82170408(ctx, base);
loc_821BD050:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8218c838
	ctx.lr = 0x821BD058;
	sub_8218C838(ctx, base);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stw r26,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd07c
	if (cr6.eq) goto loc_821BD07C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82170408
	ctx.lr = 0x821BD07C;
	sub_82170408(ctx, base);
loc_821BD07C:
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x8218c838
	ctx.lr = 0x821BD084;
	sub_8218C838(ctx, base);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// stw r26,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd0a8
	if (cr6.eq) goto loc_821BD0A8;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82170408
	ctx.lr = 0x821BD0A8;
	sub_82170408(ctx, base);
loc_821BD0A8:
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x8218c838
	ctx.lr = 0x821BD0B0;
	sub_8218C838(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r26,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd0d4
	if (cr6.eq) goto loc_821BD0D4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82170408
	ctx.lr = 0x821BD0D4;
	sub_82170408(ctx, base);
loc_821BD0D4:
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8218c838
	ctx.lr = 0x821BD0DC;
	sub_8218C838(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd100
	if (cr6.eq) goto loc_821BD100;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82170408
	ctx.lr = 0x821BD100;
	sub_82170408(ctx, base);
loc_821BD100:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8218c838
	ctx.lr = 0x821BD108;
	sub_8218C838(ctx, base);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r26,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd12c
	if (cr6.eq) goto loc_821BD12C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82170408
	ctx.lr = 0x821BD12C;
	sub_82170408(ctx, base);
loc_821BD12C:
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8218c838
	ctx.lr = 0x821BD134;
	sub_8218C838(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd148
	if (cr6.eq) goto loc_821BD148;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x821bd14c
	goto loc_821BD14C;
loc_821BD148:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_821BD14C:
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x823647f0
	ctx.lr = 0x821BD158;
	sub_823647F0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd16c
	if (cr6.eq) goto loc_821BD16C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821bd170
	goto loc_821BD170;
loc_821BD16C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_821BD170:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-2108
	ctx.r4.s64 = ctx.r11.s64 + -2108;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8232b480
	ctx.lr = 0x821BD184;
	sub_8232B480(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BD190;
	sub_821704F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82331a50
	ctx.lr = 0x821BD19C;
	sub_82331A50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd1b4
	if (cr6.eq) goto loc_821BD1B4;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x821bd1b8
	goto loc_821BD1B8;
loc_821BD1B4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_821BD1B8:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x821b8270
	ctx.lr = 0x821BD1C0;
	sub_821B8270(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bd1d4
	if (!cr6.eq) goto loc_821BD1D4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_821BD1D4:
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821b8270
	ctx.lr = 0x821BD1E0;
	sub_821B8270(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd204
	if (cr6.eq) goto loc_821BD204;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82170408
	ctx.lr = 0x821BD204;
	sub_82170408(ctx, base);
loc_821BD204:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8218c838
	ctx.lr = 0x821BD20C;
	sub_8218C838(ctx, base);
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r26,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd230
	if (cr6.eq) goto loc_821BD230;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82170408
	ctx.lr = 0x821BD230;
	sub_82170408(ctx, base);
loc_821BD230:
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8218c838
	ctx.lr = 0x821BD238;
	sub_8218C838(ctx, base);
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// stw r26,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd25c
	if (cr6.eq) goto loc_821BD25C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82170408
	ctx.lr = 0x821BD25C;
	sub_82170408(ctx, base);
loc_821BD25C:
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x8218c838
	ctx.lr = 0x821BD264;
	sub_8218C838(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd288
	if (cr6.eq) goto loc_821BD288;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82170408
	ctx.lr = 0x821BD288;
	sub_82170408(ctx, base);
loc_821BD288:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8218c838
	ctx.lr = 0x821BD290;
	sub_8218C838(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stw r26,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd2b4
	if (cr6.eq) goto loc_821BD2B4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r26,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82170408
	ctx.lr = 0x821BD2B4;
	sub_82170408(ctx, base);
loc_821BD2B4:
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x8218c838
	ctx.lr = 0x821BD2BC;
	sub_8218C838(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bd2d0
	if (!cr6.eq) goto loc_821BD2D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_821BD2D0:
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,-11792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11792);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BD2E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bd300
	if (!cr6.eq) goto loc_821BD300;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_821BD300:
	// lwz r11,-11792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11792);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BD318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82170938
	ctx.lr = 0x821BD31C;
	sub_82170938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x821bd890
	ctx.lr = 0x821BD334;
	sub_821BD890(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r28,428(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r29,424(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// addi r30,r11,-14940
	ctx.r30.s64 = ctx.r11.s64 + -14940;
loc_821BD344:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821bd3b0
	if (!cr6.lt) goto loc_821BD3B0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x821bd3a4
	if (!cr6.eq) goto loc_821BD3A4;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821bd3a4
	if (!cr6.eq) goto loc_821BD3A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aad68
	ctx.lr = 0x821BD394;
	sub_822AAD68(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ac8c0
	ctx.lr = 0x821BD3A4;
	sub_822AC8C0(ctx, base);
loc_821BD3A4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821bd890
	ctx.lr = 0x821BD3AC;
	sub_821BD890(ctx, base);
	// b 0x821bd344
	goto loc_821BD344;
loc_821BD3B0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd40c
	if (cr6.eq) goto loc_821BD40C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd40c
	if (cr6.eq) goto loc_821BD40C;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bd3ec
	if (!cr6.eq) goto loc_821BD3EC;
	// bl 0x82216290
	ctx.lr = 0x821BD3E8;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_821BD3EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BD408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_821BD40C:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232ad68
	ctx.lr = 0x821BD424;
	sub_8232AD68(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd45c
	if (cr6.eq) goto loc_821BD45C;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bd448
	if (!cr6.eq) goto loc_821BD448;
	// bl 0x82216290
	ctx.lr = 0x821BD444;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_821BD448:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BD45C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BD45C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// beq cr6,0x821bd4c0
	if (cr6.eq) goto loc_821BD4C0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd4c0
	if (cr6.eq) goto loc_821BD4C0;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bd4a0
	if (!cr6.eq) goto loc_821BD4A0;
	// bl 0x82216290
	ctx.lr = 0x821BD49C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_821BD4A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BD4BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_821BD4C0:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8232ad68
	ctx.lr = 0x821BD4D8;
	sub_8232AD68(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd510
	if (cr6.eq) goto loc_821BD510;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bd4fc
	if (!cr6.eq) goto loc_821BD4FC;
	// bl 0x82216290
	ctx.lr = 0x821BD4F8;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_821BD4FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BD510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BD510:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BD518"))) PPC_WEAK_FUNC(sub_821BD518);
PPC_FUNC_IMPL(__imp__sub_821BD518) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-22444
	ctx.r4.s64 = ctx.r11.s64 + -22444;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364678
	ctx.lr = 0x821BD54C;
	sub_82364678(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-2024
	ctx.r4.s64 = ctx.r11.s64 + -2024;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82364678
	ctx.lr = 0x821BD568;
	sub_82364678(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-2012
	ctx.r4.s64 = ctx.r11.s64 + -2012;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82364678
	ctx.lr = 0x821BD584;
	sub_82364678(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r30,r11,16764
	ctx.r30.s64 = ctx.r11.s64 + 16764;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bcf08
	ctx.lr = 0x821BD59C;
	sub_821BCF08(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x821bcf08
	ctx.lr = 0x821BD5AC;
	sub_821BCF08(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x821bcf08
	ctx.lr = 0x821BD5BC;
	sub_821BCF08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_821BD5D4"))) PPC_WEAK_FUNC(sub_821BD5D4);
PPC_FUNC_IMPL(__imp__sub_821BD5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BD5D8"))) PPC_WEAK_FUNC(sub_821BD5D8);
PPC_FUNC_IMPL(__imp__sub_821BD5D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2088
	ctx.r4.s64 = ctx.r11.s64 + -2088;
	// bl 0x821704f8
	ctx.lr = 0x821BD5F4;
	sub_821704F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bd518
	ctx.lr = 0x821BD5FC;
	sub_821BD518(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821bd624
	if (cr6.eq) goto loc_821BD624;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x821BD624;
	sub_82170408(ctx, base);
loc_821BD624:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x821BD62C;
	sub_8218C838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BD63C"))) PPC_WEAK_FUNC(sub_821BD63C);
PPC_FUNC_IMPL(__imp__sub_821BD63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BD640"))) PPC_WEAK_FUNC(sub_821BD640);
PPC_FUNC_IMPL(__imp__sub_821BD640) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2072
	ctx.r4.s64 = ctx.r11.s64 + -2072;
	// bl 0x821704f8
	ctx.lr = 0x821BD65C;
	sub_821704F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bd518
	ctx.lr = 0x821BD664;
	sub_821BD518(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821bd68c
	if (cr6.eq) goto loc_821BD68C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x821BD68C;
	sub_82170408(ctx, base);
loc_821BD68C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x821BD694;
	sub_8218C838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BD6A4"))) PPC_WEAK_FUNC(sub_821BD6A4);
PPC_FUNC_IMPL(__imp__sub_821BD6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BD6A8"))) PPC_WEAK_FUNC(sub_821BD6A8);
PPC_FUNC_IMPL(__imp__sub_821BD6A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2052
	ctx.r4.s64 = ctx.r11.s64 + -2052;
	// bl 0x821704f8
	ctx.lr = 0x821BD6C4;
	sub_821704F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bd518
	ctx.lr = 0x821BD6CC;
	sub_821BD518(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821bd6f4
	if (cr6.eq) goto loc_821BD6F4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x821BD6F4;
	sub_82170408(ctx, base);
loc_821BD6F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x821BD6FC;
	sub_8218C838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BD70C"))) PPC_WEAK_FUNC(sub_821BD70C);
PPC_FUNC_IMPL(__imp__sub_821BD70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BD710"))) PPC_WEAK_FUNC(sub_821BD710);
PPC_FUNC_IMPL(__imp__sub_821BD710) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2036
	ctx.r4.s64 = ctx.r11.s64 + -2036;
	// bl 0x821704f8
	ctx.lr = 0x821BD72C;
	sub_821704F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bd518
	ctx.lr = 0x821BD734;
	sub_821BD518(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821bd75c
	if (cr6.eq) goto loc_821BD75C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x821BD75C;
	sub_82170408(ctx, base);
loc_821BD75C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x821BD764;
	sub_8218C838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BD774"))) PPC_WEAK_FUNC(sub_821BD774);
PPC_FUNC_IMPL(__imp__sub_821BD774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BD778"))) PPC_WEAK_FUNC(sub_821BD778);
PPC_FUNC_IMPL(__imp__sub_821BD778) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821BD780;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,-2012
	ctx.r4.s64 = ctx.r11.s64 + -2012;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364678
	ctx.lr = 0x821BD7A4;
	sub_82364678(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,16764
	ctx.r30.s64 = ctx.r11.s64 + 16764;
	// beq cr6,0x821bd7c0
	if (cr6.eq) goto loc_821BD7C0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x821bd7c4
	goto loc_821BD7C4;
loc_821BD7C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821BD7C4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821704f8
	ctx.lr = 0x821BD7CC;
	sub_821704F8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x821bcf08
	ctx.lr = 0x821BD7DC;
	sub_821BCF08(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// beq cr6,0x821bd804
	if (cr6.eq) goto loc_821BD804;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82170408
	ctx.lr = 0x821BD804;
	sub_82170408(ctx, base);
loc_821BD804:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218c838
	ctx.lr = 0x821BD80C;
	sub_8218C838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-2024
	ctx.r4.s64 = ctx.r11.s64 + -2024;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364678
	ctx.lr = 0x821BD828;
	sub_82364678(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd83c
	if (cr6.eq) goto loc_821BD83C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x821bd840
	goto loc_821BD840;
loc_821BD83C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821BD840:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821704f8
	ctx.lr = 0x821BD848;
	sub_821704F8(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x821bcf08
	ctx.lr = 0x821BD858;
	sub_821BCF08(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd87c
	if (cr6.eq) goto loc_821BD87C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82170408
	ctx.lr = 0x821BD87C;
	sub_82170408(ctx, base);
loc_821BD87C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218c838
	ctx.lr = 0x821BD884;
	sub_8218C838(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BD88C"))) PPC_WEAK_FUNC(sub_821BD88C);
PPC_FUNC_IMPL(__imp__sub_821BD88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BD890"))) PPC_WEAK_FUNC(sub_821BD890);
PPC_FUNC_IMPL(__imp__sub_821BD890) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// li r7,1
	ctx.r7.s64 = 1;
	// rldicr r7,r7,33,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,31368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31368);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bd8b0
	if (!cr6.eq) goto loc_821BD8B0;
	// li r7,513
	ctx.r7.s64 = 513;
	// rldicr r7,r7,33,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 33) & 0xFFFFFFFE00000000;
loc_821BD8B0:
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,-14940
	ctx.r9.s64 = ctx.r11.s64 + -14940;
loc_821BD8BC:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821bd8bc
	if (cr6.eq) goto loc_821BD8BC;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x821bd8bc
	if (!cr6.eq) goto loc_821BD8BC;
	// cmpdi cr6,r7,-1
	cr6.compare<int64_t>(ctx.r7.s64, -1, ctx.xer);
	// beq cr6,0x821bd8bc
	if (cr6.eq) goto loc_821BD8BC;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bd928
	if (cr6.eq) goto loc_821BD928;
loc_821BD914:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bd914
	if (!cr6.eq) goto loc_821BD914;
loc_821BD928:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bd8bc
	if (cr6.eq) goto loc_821BD8BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BD93C"))) PPC_WEAK_FUNC(sub_821BD93C);
PPC_FUNC_IMPL(__imp__sub_821BD93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BD940"))) PPC_WEAK_FUNC(sub_821BD940);
PPC_FUNC_IMPL(__imp__sub_821BD940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-24872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24872);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bda64
	if (!cr6.eq) goto loc_821BDA64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BD970;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bd9e4
	if (cr6.eq) goto loc_821BD9E4;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7624
	ctx.r7.s64 = ctx.r10.s64 + 7624;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-25716
	ctx.r11.s64 = ctx.r11.s64 + -25716;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BD9E0;
	sub_822ED768(ctx, base);
	// b 0x821bd9e8
	goto loc_821BD9E8;
loc_821BD9E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BD9E8:
	// stw r3,-24872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24872, ctx.r3.u32);
	// bl 0x8224aca0
	ctx.lr = 0x821BD9F0;
	sub_8224ACA0(ctx, base);
	// lwz r11,-24872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24872);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bda0c
	if (cr6.eq) goto loc_821BDA0C;
	// bl 0x8224aca0
	ctx.lr = 0x821BDA00;
	sub_8224ACA0(ctx, base);
	// lwz r11,-24872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24872);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bda14
	goto loc_821BDA14;
loc_821BDA0C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BDA14:
	// bl 0x82170938
	ctx.lr = 0x821BDA18;
	sub_82170938(ctx, base);
	// lwz r11,-24872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24872);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BDA24;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24872);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bda64
	if (cr6.eq) goto loc_821BDA64;
	// bl 0x82170ba8
	ctx.lr = 0x821BDA44;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24872);
	// bne cr6,0x821bda64
	if (!cr6.eq) goto loc_821BDA64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BDA60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24872);
loc_821BDA64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BDA7C"))) PPC_WEAK_FUNC(sub_821BDA7C);
PPC_FUNC_IMPL(__imp__sub_821BDA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BDA80"))) PPC_WEAK_FUNC(sub_821BDA80);
PPC_FUNC_IMPL(__imp__sub_821BDA80) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-1992
	ctx.r11.s64 = ctx.r11.s64 + -1992;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BDA98"))) PPC_WEAK_FUNC(sub_821BDA98);
PPC_FUNC_IMPL(__imp__sub_821BDA98) {
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
	// bl 0x821bdae8
	ctx.lr = 0x821BDAB8;
	sub_821BDAE8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdad0
	if (cr6.eq) goto loc_821BDAD0;
	// bl 0x82170268
	ctx.lr = 0x821BDACC;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BDAD0:
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

__attribute__((alias("__imp__sub_821BDAE8"))) PPC_WEAK_FUNC(sub_821BDAE8);
PPC_FUNC_IMPL(__imp__sub_821BDAE8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1992
	ctx.r11.s64 = ctx.r11.s64 + -1992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BDB0C;
	sub_822A89B8(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x82288288
	ctx.lr = 0x821BDB14;
	sub_82288288(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82288288
	ctx.lr = 0x821BDB1C;
	sub_82288288(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x82288288
	ctx.lr = 0x821BDB24;
	sub_82288288(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18152
	ctx.r11.s64 = ctx.r11.s64 + -18152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BDB38;
	sub_822A89B8(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// bl 0x82288288
	ctx.lr = 0x821BDB40;
	sub_82288288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821719e0
	ctx.lr = 0x821BDB48;
	sub_821719E0(ctx, base);
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

__attribute__((alias("__imp__sub_821BDB5C"))) PPC_WEAK_FUNC(sub_821BDB5C);
PPC_FUNC_IMPL(__imp__sub_821BDB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BDB60"))) PPC_WEAK_FUNC(sub_821BDB60);
PPC_FUNC_IMPL(__imp__sub_821BDB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,1670
	ctx.r30.s64 = ctx.r31.s64 + 1670;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 884);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BDB90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 888);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BDBAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2764
	ctx.r3.s64 = ctx.r31.s64 + 2764;
	// bl 0x82170670
	ctx.lr = 0x821BDBB8;
	sub_82170670(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821bdbe0
	if (cr6.eq) goto loc_821BDBE0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x821BDBE0;
	sub_82170408(ctx, base);
loc_821BDBE0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x821BDBE8;
	sub_8218C838(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_821BDC00"))) PPC_WEAK_FUNC(sub_821BDC00);
PPC_FUNC_IMPL(__imp__sub_821BDC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_821BDC28:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821bdc28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_821BDC28;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x821702e0
	ctx.lr = 0x821BDC40;
	sub_821702E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdc5c
	if (cr6.eq) goto loc_821BDC5C;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2890
	ctx.lr = 0x821BDC58;
	sub_828D2890(ctx, base);
	// b 0x821bdc60
	goto loc_821BDC60;
loc_821BDC5C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821BDC60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826ba108
	ctx.lr = 0x821BDC68;
	sub_826BA108(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bdca8
	if (!cr6.eq) goto loc_821BDCA8;
	// rlwinm r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bdca8
	if (!cr6.eq) goto loc_821BDCA8;
	// addi r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 10;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_821BDC90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821bdc90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_821BDC90;
	// b 0x821bdcd0
	goto loc_821BDCD0;
loc_821BDCA8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,-1692
	ctx.r11.s64 = ctx.r11.s64 + -1692;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_821BDCBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821bdcbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_821BDCBC;
loc_821BDCD0:
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

__attribute__((alias("__imp__sub_821BDCE8"))) PPC_WEAK_FUNC(sub_821BDCE8);
PPC_FUNC_IMPL(__imp__sub_821BDCE8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-27622
	ctx.r4.s64 = ctx.r11.s64 + -27622;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82170590
	ctx.lr = 0x821BDD14;
	sub_82170590(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r4,r11,-1684
	ctx.r4.s64 = ctx.r11.s64 + -1684;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// bl 0x823e1b30
	ctx.lr = 0x821BDD3C;
	sub_823E1B30(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821708a0
	ctx.lr = 0x821BDD48;
	sub_821708A0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BDD54;
	sub_821704F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// beq cr6,0x821bdd7c
	if (cr6.eq) goto loc_821BDD7C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82170408
	ctx.lr = 0x821BDD7C;
	sub_82170408(ctx, base);
loc_821BDD7C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8218c838
	ctx.lr = 0x821BDD84;
	sub_8218C838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_821BDDA0"))) PPC_WEAK_FUNC(sub_821BDDA0);
PPC_FUNC_IMPL(__imp__sub_821BDDA0) {
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
	// addi r4,r4,2764
	ctx.r4.s64 = ctx.r4.s64 + 2764;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82170480
	ctx.lr = 0x821BDDBC;
	sub_82170480(ctx, base);
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

__attribute__((alias("__imp__sub_821BDDD4"))) PPC_WEAK_FUNC(sub_821BDDD4);
PPC_FUNC_IMPL(__imp__sub_821BDDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BDDD8"))) PPC_WEAK_FUNC(sub_821BDDD8);
PPC_FUNC_IMPL(__imp__sub_821BDDD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bde34
	if (cr6.eq) goto loc_821BDE34;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-1656
	ctx.r4.s64 = ctx.r10.s64 + -1656;
	// lfs f3,212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f3.f64 = double(temp.f32);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// lfs f2,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// lfs f1,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,220(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x828d1b68
	ctx.lr = 0x821BDE34;
	sub_828D1B68(ctx, base);
loc_821BDE34:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BDE44"))) PPC_WEAK_FUNC(sub_821BDE44);
PPC_FUNC_IMPL(__imp__sub_821BDE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BDE48"))) PPC_WEAK_FUNC(sub_821BDE48);
PPC_FUNC_IMPL(__imp__sub_821BDE48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821BDE50;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,16764
	ctx.r31.s64 = ctx.r11.s64 + 16764;
	// beq cr6,0x821bde74
	if (cr6.eq) goto loc_821BDE74;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x821bde78
	goto loc_821BDE78;
loc_821BDE74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BDE78:
	// bl 0x828d05e0
	ctx.lr = 0x821BDE7C;
	sub_828D05E0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bde90
	if (cr6.eq) goto loc_821BDE90;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x821bde94
	goto loc_821BDE94;
loc_821BDE90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BDE94:
	// bl 0x828d05e0
	ctx.lr = 0x821BDE98;
	sub_828D05E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821bdf20
	if (!cr6.gt) goto loc_821BDF20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82170700
	ctx.lr = 0x821BDEAC;
	sub_82170700(ctx, base);
	// bl 0x828d05e0
	ctx.lr = 0x821BDEB0;
	sub_828D05E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821bdee8
	if (!cr6.gt) goto loc_821BDEE8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821BDEBC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82170700
	ctx.lr = 0x821BDEDC;
	sub_82170700(ctx, base);
	// bl 0x828d05e0
	ctx.lr = 0x821BDEE0;
	sub_828D05E0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821bdebc
	if (cr6.lt) goto loc_821BDEBC;
loc_821BDEE8:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfd f1,24856(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24856);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,-1620
	ctx.r4.s64 = ctx.r11.s64 + -1620;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x828d1b68
	ctx.lr = 0x821BDF18;
	sub_828D1B68(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_821BDF20:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-1600
	ctx.r4.s64 = ctx.r11.s64 + -1600;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfd f1,24856(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24856);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x828d1b68
	ctx.lr = 0x821BDF40;
	sub_828D1B68(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BDF48"))) PPC_WEAK_FUNC(sub_821BDF48);
PPC_FUNC_IMPL(__imp__sub_821BDF48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x821BDF50;
	__savegprlr_26(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,99
	ctx.r5.s64 = 99;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,417
	ctx.r3.s64 = ctx.r1.s64 + 417;
	// stb r26,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r26.u8);
	// bl 0x828d2890
	ctx.lr = 0x821BDF70;
	sub_828D2890(ctx, base);
	// lbz r11,939(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 939);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be140
	if (cr6.eq) goto loc_821BE140;
	// lwz r11,1772(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1772);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be140
	if (cr6.eq) goto loc_821BE140;
	// lwz r10,1800(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1800);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x821be140
	if (cr6.lt) goto loc_821BE140;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r30,r10,26968
	ctx.r30.s64 = ctx.r10.s64 + 26968;
	// bne cr6,0x821bdfb8
	if (!cr6.eq) goto loc_821BDFB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BDFB4;
	sub_821704F8(ctx, base);
	// b 0x821bdfc0
	goto loc_821BDFC0;
loc_821BDFB8:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x823647f0
	ctx.lr = 0x821BDFC0;
	sub_823647F0(ctx, base);
loc_821BDFC0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,16764
	ctx.r31.s64 = ctx.r11.s64 + 16764;
	// bne cr6,0x821bdfdc
	if (!cr6.eq) goto loc_821BDFDC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_821BDFDC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823e1b30
	ctx.lr = 0x821BDFE4;
	sub_823E1B30(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821fc470
	ctx.lr = 0x821BDFEC;
	sub_821FC470(ctx, base);
	// lwz r11,1772(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1772);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be02c
	if (cr6.eq) goto loc_821BE02C;
loc_821BDFF8:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821be024
	if (cr6.eq) goto loc_821BE024;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bdff8
	if (!cr6.eq) goto loc_821BDFF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7956
	ctx.r4.s64 = ctx.r11.s64 + -7956;
	// bl 0x821704f8
	ctx.lr = 0x821BE020;
	sub_821704F8(ctx, base);
	// b 0x821be064
	goto loc_821BE064;
loc_821BE024:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be040
	if (!cr6.eq) goto loc_821BE040;
loc_821BE02C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7956
	ctx.r4.s64 = ctx.r11.s64 + -7956;
	// bl 0x821704f8
	ctx.lr = 0x821BE03C;
	sub_821704F8(ctx, base);
	// b 0x821be064
	goto loc_821BE064;
loc_821BE040:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821be05c
	if (!cr6.eq) goto loc_821BE05C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BE058;
	sub_821704F8(ctx, base);
	// b 0x821be064
	goto loc_821BE064;
loc_821BE05C:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x823647f0
	ctx.lr = 0x821BE064;
	sub_823647F0(ctx, base);
loc_821BE064:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821be078
	if (!cr6.eq) goto loc_821BE078;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_821BE078:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823e1b30
	ctx.lr = 0x821BE080;
	sub_823E1B30(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821fc470
	ctx.lr = 0x821BE088;
	sub_821FC470(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bl 0x828d05e0
	ctx.lr = 0x821BE094;
	sub_828D05E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821be0c4
	if (!cr6.gt) goto loc_821BE0C4;
	// addi r30,r1,304
	ctx.r30.s64 = ctx.r1.s64 + 304;
loc_821BE0A0:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x828d05e0
	ctx.lr = 0x821BE0BC;
	sub_828D05E0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821be0a0
	if (cr6.lt) goto loc_821BE0A0;
loc_821BE0C4:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,46
	ctx.r10.s64 = 46;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 1;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bl 0x828d05e0
	ctx.lr = 0x821BE0E0;
	sub_828D05E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821be114
	if (!cr6.gt) goto loc_821BE114;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_821BE0F4:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stbx r11,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x828d05e0
	ctx.lr = 0x821BE10C;
	sub_828D05E0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821be0f4
	if (cr6.lt) goto loc_821BE0F4;
loc_821BE114:
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// lwz r6,1800(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1800);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-1584
	ctx.r4.s64 = ctx.r11.s64 + -1584;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stbx r26,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r26.u8);
	// bl 0x828d1b68
	ctx.lr = 0x821BE138;
	sub_828D1B68(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_821BE140:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-1560
	ctx.r4.s64 = ctx.r11.s64 + -1560;
	// bl 0x828d1b68
	ctx.lr = 0x821BE150;
	sub_828D1B68(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BE158"))) PPC_WEAK_FUNC(sub_821BE158);
PPC_FUNC_IMPL(__imp__sub_821BE158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e4
	ctx.lr = 0x821BE160;
	__savegprlr_15(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-32064
	ctx.r22.s64 = -2101346304;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r11,-24420(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -24420);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// lwz r26,80(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwz r11,-11976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11976);
	// lwz r11,668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// lwz r17,0(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x821be5a4
	if (cr6.eq) goto loc_821BE5A4;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_821BE1A0:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r19,r9,-7956
	ctx.r19.s64 = ctx.r9.s64 + -7956;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r16,r9,26968
	ctx.r16.s64 = ctx.r9.s64 + 26968;
	// beq cr6,0x821be1d8
	if (cr6.eq) goto loc_821BE1D8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821be1a0
	if (!cr6.eq) goto loc_821BE1A0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BE1D4;
	sub_821704F8(ctx, base);
	// b 0x821be214
	goto loc_821BE214;
loc_821BE1D8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821be1f0
	if (!cr6.eq) goto loc_821BE1F0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BE1EC;
	sub_821704F8(ctx, base);
	// b 0x821be214
	goto loc_821BE214;
loc_821BE1F0:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821be20c
	if (!cr6.eq) goto loc_821BE20C;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BE208;
	sub_821704F8(ctx, base);
	// b 0x821be214
	goto loc_821BE214;
loc_821BE20C:
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x823647f0
	ctx.lr = 0x821BE214;
	sub_823647F0(ctx, base);
loc_821BE214:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r23,r11,16764
	ctx.r23.s64 = ctx.r11.s64 + 16764;
	// bne cr6,0x821be230
	if (!cr6.eq) goto loc_821BE230;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_821BE230:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821be244
	if (cr6.eq) goto loc_821BE244;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// b 0x821be248
	goto loc_821BE248;
loc_821BE244:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_821BE248:
	// bl 0x828d1c58
	ctx.lr = 0x821BE24C;
	sub_828D1C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821fc470
	ctx.lr = 0x821BE258;
	sub_821FC470(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be348
	if (cr6.eq) goto loc_821BE348;
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821be5a4
	if (!cr6.gt) goto loc_821BE5A4;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_821BE27C:
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821be32c
	if (cr6.eq) goto loc_821BE32C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821be2a8
	if (!cr6.eq) goto loc_821BE2A8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BE2A4;
	sub_821704F8(ctx, base);
	// b 0x821be2b0
	goto loc_821BE2B0;
loc_821BE2A8:
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// bl 0x823647f0
	ctx.lr = 0x821BE2B0;
	sub_823647F0(ctx, base);
loc_821BE2B0:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x821707c0
	ctx.lr = 0x821BE2BC;
	sub_821707C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x821fc470
	ctx.lr = 0x821BE2C8;
	sub_821FC470(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821be32c
	if (cr6.eq) goto loc_821BE32C;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821be32c
	if (!cr6.gt) goto loc_821BE32C;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_821BE2E4:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x821bea98
	ctx.lr = 0x821BE2F0;
	sub_821BEA98(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be318
	if (cr6.eq) goto loc_821BE318;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,64(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r5,416(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 416);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BE318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BE318:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821be2e4
	if (cr6.lt) goto loc_821BE2E4;
loc_821BE32C:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821be27c
	if (cr6.lt) goto loc_821BE27C;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x828d2834
	__restgprlr_15(ctx, base);
	return;
loc_821BE348:
	// lwz r11,-24420(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -24420);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821be5a4
	if (!cr6.gt) goto loc_821BE5A4;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_821BE360:
	// lwz r11,-24420(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -24420);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwzx r26,r11,r25
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821be410
	if (cr6.eq) goto loc_821BE410;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821BE378:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821be3a0
	if (cr6.eq) goto loc_821BE3A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be378
	if (!cr6.eq) goto loc_821BE378;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BE39C;
	sub_821704F8(ctx, base);
	// b 0x821be3dc
	goto loc_821BE3DC;
loc_821BE3A0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be3b8
	if (!cr6.eq) goto loc_821BE3B8;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BE3B4;
	sub_821704F8(ctx, base);
	// b 0x821be3dc
	goto loc_821BE3DC;
loc_821BE3B8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821be3d4
	if (!cr6.eq) goto loc_821BE3D4;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BE3D0;
	sub_821704F8(ctx, base);
	// b 0x821be3dc
	goto loc_821BE3DC;
loc_821BE3D4:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x823647f0
	ctx.lr = 0x821BE3DC;
	sub_823647F0(ctx, base);
loc_821BE3DC:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ori r20,r20,1
	ctx.r20.u64 = ctx.r20.u64 | 1;
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821be3f4
	if (!cr6.eq) goto loc_821BE3F4;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_821BE3F4:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82170700
	ctx.lr = 0x821BE3FC;
	sub_82170700(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828d1c58
	ctx.lr = 0x821BE404;
	sub_828D1C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821be414
	if (cr6.eq) goto loc_821BE414;
loc_821BE410:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_821BE414:
	// clrlwi r10,r20,31
	ctx.r10.u64 = ctx.r20.u32 & 0x1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821be430
	if (cr6.eq) goto loc_821BE430;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// rlwinm r20,r20,0,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x821fc470
	ctx.lr = 0x821BE430;
	sub_821FC470(ctx, base);
loc_821BE430:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be58c
	if (cr6.eq) goto loc_821BE58C;
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821be58c
	if (!cr6.gt) goto loc_821BE58C;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_821BE450:
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821be578
	if (cr6.eq) goto loc_821BE578;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821be47c
	if (!cr6.eq) goto loc_821BE47C;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x821704f8
	ctx.lr = 0x821BE478;
	sub_821704F8(ctx, base);
	// b 0x821be484
	goto loc_821BE484;
loc_821BE47C:
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// bl 0x823647f0
	ctx.lr = 0x821BE484;
	sub_823647F0(ctx, base);
loc_821BE484:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821be498
	if (!cr6.eq) goto loc_821BE498;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_821BE498:
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821be4ac
	if (cr6.eq) goto loc_821BE4AC;
	// lwz r3,0(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// b 0x821be4b0
	goto loc_821BE4B0;
loc_821BE4AC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_821BE4B0:
	// bl 0x828d0320
	ctx.lr = 0x821BE4B4;
	sub_828D0320(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x821be4e0
	if (cr6.eq) goto loc_821BE4E0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82170408
	ctx.lr = 0x821BE4E0;
	sub_82170408(ctx, base);
loc_821BE4E0:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8232ad68
	ctx.lr = 0x821BE4F8;
	sub_8232AD68(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be508
	if (cr6.eq) goto loc_821BE508;
	// bl 0x82170268
	ctx.lr = 0x821BE508;
	sub_82170268(ctx, base);
loc_821BE508:
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// beq cr6,0x821be578
	if (cr6.eq) goto loc_821BE578;
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821be578
	if (!cr6.gt) goto loc_821BE578;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_821BE530:
	// lwz r11,392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x821bea98
	ctx.lr = 0x821BE53C;
	sub_821BEA98(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be564
	if (cr6.eq) goto loc_821BE564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,64(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r5,416(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 416);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BE564;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BE564:
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821be530
	if (cr6.lt) goto loc_821BE530;
loc_821BE578:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821be450
	if (cr6.lt) goto loc_821BE450;
loc_821BE58C:
	// lwz r11,-24420(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -24420);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821be360
	if (cr6.lt) goto loc_821BE360;
loc_821BE5A4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x828d2834
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BE5AC"))) PPC_WEAK_FUNC(sub_821BE5AC);
PPC_FUNC_IMPL(__imp__sub_821BE5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BE5B0"))) PPC_WEAK_FUNC(sub_821BE5B0);
PPC_FUNC_IMPL(__imp__sub_821BE5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x821BE5B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32064
	ctx.r10.s64 = -2101346304;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r30,-32065
	ctx.r30.s64 = -2101411840;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,-24420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24420);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,580(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 580);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821be9f0
	if (!cr6.gt) goto loc_821BE9F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r23,r11,16764
	ctx.r23.s64 = ctx.r11.s64 + 16764;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r17,r11,26968
	ctx.r17.s64 = ctx.r11.s64 + 26968;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r16,r11,-1348
	ctx.r16.s64 = ctx.r11.s64 + -1348;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r22,r11,-1368
	ctx.r22.s64 = ctx.r11.s64 + -1368;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r15,r11,-1400
	ctx.r15.s64 = ctx.r11.s64 + -1400;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r21,r11,-1420
	ctx.r21.s64 = ctx.r11.s64 + -1420;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r14,r11,-1448
	ctx.r14.s64 = ctx.r11.s64 + -1448;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r20,r11,-1464
	ctx.r20.s64 = ctx.r11.s64 + -1464;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-1492
	ctx.r11.s64 = ctx.r11.s64 + -1492;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,-1500
	ctx.r25.s64 = ctx.r11.s64 + -1500;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r19,r11,-1524
	ctx.r19.s64 = ctx.r11.s64 + -1524;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r18,r11,-1540
	ctx.r18.s64 = ctx.r11.s64 + -1540;
	// b 0x821be678
	goto loc_821BE678;
loc_821BE674:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_821BE678:
	// lwz r11,576(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 576);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r27,r9,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821be9c0
	if (cr6.eq) goto loc_821BE9C0;
	// addi r28,r27,60
	ctx.r28.s64 = ctx.r27.s64 + 60;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821be6a8
	if (!cr6.eq) goto loc_821BE6A8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821be9c0
	if (cr6.eq) goto loc_821BE9C0;
loc_821BE6A8:
	// lwz r11,-24420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be6cc
	if (cr6.eq) goto loc_821BE6CC;
loc_821BE6B4:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821be6cc
	if (cr6.eq) goto loc_821BE6CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be6b4
	if (!cr6.eq) goto loc_821BE6B4;
loc_821BE6CC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821be6e0
	if (cr6.eq) goto loc_821BE6E0;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// b 0x821be6fc
	goto loc_821BE6FC;
loc_821BE6E0:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82364678
	ctx.lr = 0x821BE6F8;
	sub_82364678(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
loc_821BE6FC:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821be724
	if (!cr6.eq) goto loc_821BE724;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821be9c0
	if (cr6.eq) goto loc_821BE9C0;
loc_821BE724:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823647f0
	ctx.lr = 0x821BE730;
	sub_823647F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170670
	ctx.lr = 0x821BE73C;
	sub_82170670(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x821fc470
	ctx.lr = 0x821BE744;
	sub_821FC470(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_821BE750:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x821be760
	if (!cr6.eq) goto loc_821BE760;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_821BE760:
	// bl 0x828d05e0
	ctx.lr = 0x821BE764;
	sub_828D05E0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x821be784
	if (!cr6.lt) goto loc_821BE784;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x821be750
	goto loc_821BE750;
loc_821BE784:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stbx r24,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// lwz r8,68(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821be868
	if (cr6.eq) goto loc_821BE868;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be868
	if (!cr6.eq) goto loc_821BE868;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,-24420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24420);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821be7e0
	if (!cr6.gt) goto loc_821BE7E0;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
loc_821BE7C4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821be800
	if (cr6.eq) goto loc_821BE800;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821be7c4
	if (cr6.lt) goto loc_821BE7C4;
loc_821BE7E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82170700
	ctx.lr = 0x821BE7E8;
	sub_82170700(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x828d1c58
	ctx.lr = 0x821BE7F0;
	sub_828D1C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821be848
	if (!cr6.eq) goto loc_821BE848;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x821be9b4
	goto loc_821BE9B4;
loc_821BE800:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821be7e0
	if (cr6.eq) goto loc_821BE7E0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82170700
	ctx.lr = 0x821BE810;
	sub_82170700(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x828d1c58
	ctx.lr = 0x821BE818;
	sub_828D1C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821be828
	if (!cr6.eq) goto loc_821BE828;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x821be9b4
	goto loc_821BE9B4;
loc_821BE828:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82170700
	ctx.lr = 0x821BE830;
	sub_82170700(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x828d1c58
	ctx.lr = 0x821BE838;
	sub_828D1C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821be9c0
	if (!cr6.eq) goto loc_821BE9C0;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x821be9b4
	goto loc_821BE9B4;
loc_821BE848:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82170700
	ctx.lr = 0x821BE850;
	sub_82170700(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x828d1c58
	ctx.lr = 0x821BE858;
	sub_828D1C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821be9c0
	if (!cr6.eq) goto loc_821BE9C0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// b 0x821be9b4
	goto loc_821BE9B4;
loc_821BE868:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823647f0
	ctx.lr = 0x821BE874;
	sub_823647F0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821be888
	if (cr6.eq) goto loc_821BE888;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821be88c
	goto loc_821BE88C;
loc_821BE888:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_821BE88C:
	// bl 0x821beb18
	ctx.lr = 0x821BE890;
	sub_821BEB18(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822adcf0
	ctx.lr = 0x821BE8A0;
	sub_822ADCF0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821be900
	if (cr6.eq) goto loc_821BE900;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be900
	if (cr6.eq) goto loc_821BE900;
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r3,-11780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821be8e0
	if (!cr6.eq) goto loc_821BE8E0;
	// bl 0x82216290
	ctx.lr = 0x821BE8DC;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11780);
loc_821BE8E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BE8FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
loc_821BE900:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8232ad68
	ctx.lr = 0x821BE918;
	sub_8232AD68(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821be928
	if (cr6.eq) goto loc_821BE928;
	// bl 0x82170268
	ctx.lr = 0x821BE928;
	sub_82170268(ctx, base);
loc_821BE928:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// beq cr6,0x821be97c
	if (cr6.eq) goto loc_821BE97C;
	// bl 0x82170700
	ctx.lr = 0x821BE944;
	sub_82170700(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x828d1c58
	ctx.lr = 0x821BE94C;
	sub_828D1C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821be95c
	if (!cr6.eq) goto loc_821BE95C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x821be9b4
	goto loc_821BE9B4;
loc_821BE95C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82170700
	ctx.lr = 0x821BE964;
	sub_82170700(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x828d1c58
	ctx.lr = 0x821BE96C;
	sub_828D1C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821be9c0
	if (!cr6.eq) goto loc_821BE9C0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// b 0x821be9b4
	goto loc_821BE9B4;
loc_821BE97C:
	// bl 0x82170700
	ctx.lr = 0x821BE980;
	sub_82170700(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x828d1c58
	ctx.lr = 0x821BE988;
	sub_828D1C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821be998
	if (!cr6.eq) goto loc_821BE998;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x821be9b4
	goto loc_821BE9B4;
loc_821BE998:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82170700
	ctx.lr = 0x821BE9A0;
	sub_82170700(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x828d1c58
	ctx.lr = 0x821BE9A8;
	sub_828D1C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821be9c0
	if (!cr6.eq) goto loc_821BE9C0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_821BE9B4:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x828d1b68
	ctx.lr = 0x821BE9C0;
	sub_828D1B68(ctx, base);
loc_821BE9C0:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r11,580(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 580);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821be674
	if (cr6.lt) goto loc_821BE674;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821BE9F0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bea40
	if (cr6.eq) goto loc_821BEA40;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bea40
	if (cr6.eq) goto loc_821BEA40;
	// lwz r3,-11780(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bea20
	if (!cr6.eq) goto loc_821BEA20;
	// bl 0x82216290
	ctx.lr = 0x821BEA1C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11780);
loc_821BEA20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BEA3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_821BEA40:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8232ad68
	ctx.lr = 0x821BEA58;
	sub_8232AD68(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bea8c
	if (cr6.eq) goto loc_821BEA8C;
	// lwz r3,-11780(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bea78
	if (!cr6.eq) goto loc_821BEA78;
	// bl 0x82216290
	ctx.lr = 0x821BEA74;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11780);
loc_821BEA78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BEA8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BEA8C:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BEA94"))) PPC_WEAK_FUNC(sub_821BEA94);
PPC_FUNC_IMPL(__imp__sub_821BEA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BEA98"))) PPC_WEAK_FUNC(sub_821BEA98);
PPC_FUNC_IMPL(__imp__sub_821BEA98) {
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
	// beq cr6,0x821beb00
	if (cr6.eq) goto loc_821BEB00;
	// bl 0x821bebe0
	ctx.lr = 0x821BEAB8;
	sub_821BEBE0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bead8
	if (cr6.eq) goto loc_821BEAD8;
loc_821BEAC4:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821beae8
	if (cr6.eq) goto loc_821BEAE8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821beac4
	if (!cr6.eq) goto loc_821BEAC4;
loc_821BEAD8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821beb00
	if (cr6.eq) goto loc_821BEB00;
loc_821BEAE8:
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
loc_821BEB00:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_821BEB18"))) PPC_WEAK_FUNC(sub_821BEB18);
PPC_FUNC_IMPL(__imp__sub_821BEB18) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-23844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23844);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bebcc
	if (!cr6.eq) goto loc_821BEBCC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BEB44;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bebbc
	if (cr6.eq) goto loc_821BEBBC;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,7304
	ctx.r6.s64 = ctx.r10.s64 + 7304;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,11572
	ctx.r11.s64 = ctx.r11.s64 + 11572;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// addi r9,r9,-31208
	ctx.r9.s64 = ctx.r9.s64 + -31208;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BEBB8;
	sub_822ED768(ctx, base);
	// b 0x821bebc0
	goto loc_821BEBC0;
loc_821BEBBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BEBC0:
	// stw r3,-23844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23844, ctx.r3.u32);
	// bl 0x82410f30
	ctx.lr = 0x821BEBC8;
	sub_82410F30(ctx, base);
	// lwz r3,-23844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23844);
loc_821BEBCC:
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

__attribute__((alias("__imp__sub_821BEBE0"))) PPC_WEAK_FUNC(sub_821BEBE0);
PPC_FUNC_IMPL(__imp__sub_821BEBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-24692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bed04
	if (!cr6.eq) goto loc_821BED04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BEC10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bec84
	if (cr6.eq) goto loc_821BEC84;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,28216
	ctx.r7.s64 = ctx.r10.s64 + 28216;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-23932
	ctx.r11.s64 = ctx.r11.s64 + -23932;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BEC80;
	sub_822ED768(ctx, base);
	// b 0x821bec88
	goto loc_821BEC88;
loc_821BEC84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BEC88:
	// stw r3,-24692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24692, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x821BEC90;
	sub_821FD018(ctx, base);
	// lwz r11,-24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24692);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821becac
	if (cr6.eq) goto loc_821BECAC;
	// bl 0x821fd018
	ctx.lr = 0x821BECA0;
	sub_821FD018(ctx, base);
	// lwz r11,-24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24692);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821becb4
	goto loc_821BECB4;
loc_821BECAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BECB4:
	// bl 0x82170938
	ctx.lr = 0x821BECB8;
	sub_82170938(ctx, base);
	// lwz r11,-24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24692);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BECC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24692);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bed04
	if (cr6.eq) goto loc_821BED04;
	// bl 0x82170ba8
	ctx.lr = 0x821BECE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24692);
	// bne cr6,0x821bed04
	if (!cr6.eq) goto loc_821BED04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BED00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24692);
loc_821BED04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BED1C"))) PPC_WEAK_FUNC(sub_821BED1C);
PPC_FUNC_IMPL(__imp__sub_821BED1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BED20"))) PPC_WEAK_FUNC(sub_821BED20);
PPC_FUNC_IMPL(__imp__sub_821BED20) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bed74
	if (cr6.eq) goto loc_821BED74;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821bed54
	if (cr6.lt) goto loc_821BED54;
loc_821BED50:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_821BED54:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x821bed64
	if (!cr6.eq) goto loc_821BED64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BED64:
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821bed7c
	if (!cr6.lt) goto loc_821BED7C;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x821bed88
	goto loc_821BED88;
loc_821BED74:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821bed50
	goto loc_821BED50;
loc_821BED7C:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821bed88
	if (cr6.lt) goto loc_821BED88;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821BED88:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bed98
	if (cr6.eq) goto loc_821BED98;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x821beda0
	goto loc_821BEDA0;
loc_821BED98:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,16764
	ctx.r10.s64 = ctx.r11.s64 + 16764;
loc_821BEDA0:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821beee8
	ctx.lr = 0x821BEDB4;
	sub_821BEEE8(ctx, base);
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

__attribute__((alias("__imp__sub_821BEDCC"))) PPC_WEAK_FUNC(sub_821BEDCC);
PPC_FUNC_IMPL(__imp__sub_821BEDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BEDD0"))) PPC_WEAK_FUNC(sub_821BEDD0);
PPC_FUNC_IMPL(__imp__sub_821BEDD0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bne cr6,0x821bee48
	if (!cr6.eq) goto loc_821BEE48;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,16764
	ctx.r31.s64 = ctx.r11.s64 + 16764;
	// beq cr6,0x821bee0c
	if (cr6.eq) goto loc_821BEE0C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x821bee10
	goto loc_821BEE10;
loc_821BEE0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BEE10:
	// bl 0x828d1ca0
	ctx.lr = 0x821BEE14;
	sub_828D1CA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821beec8
	if (cr6.eq) goto loc_821BEEC8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bee38
	if (cr6.eq) goto loc_821BEE38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// b 0x821beecc
	goto loc_821BEECC;
loc_821BEE38:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// b 0x821beecc
	goto loc_821BEECC;
loc_821BEE48:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x821bee58
	if (!cr6.eq) goto loc_821BEE58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BEE58:
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821beec8
	if (cr6.lt) goto loc_821BEEC8;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_821BEE6C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821beea8
	if (cr6.eq) goto loc_821BEEA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_821BEE84:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821beea8
	if (!cr6.eq) goto loc_821BEEA8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bee84
	if (!cr6.eq) goto loc_821BEE84;
loc_821BEEA8:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821beecc
	if (cr6.eq) goto loc_821BEECC;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821bee6c
	if (!cr6.lt) goto loc_821BEE6C;
loc_821BEEC8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821BEECC:
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

__attribute__((alias("__imp__sub_821BEEE4"))) PPC_WEAK_FUNC(sub_821BEEE4);
PPC_FUNC_IMPL(__imp__sub_821BEEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BEEE8"))) PPC_WEAK_FUNC(sub_821BEEE8);
PPC_FUNC_IMPL(__imp__sub_821BEEE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x821BEEF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// bne cr6,0x821bef14
	if (!cr6.eq) goto loc_821BEF14;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821BEF14:
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x821BEF30;
	sub_82170408(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bef60
	if (cr6.eq) goto loc_821BEF60;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x828d5980
	ctx.lr = 0x821BEF54;
	sub_828D5980(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r28,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r28.u16);
loc_821BEF60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BEF6C"))) PPC_WEAK_FUNC(sub_821BEF6C);
PPC_FUNC_IMPL(__imp__sub_821BEF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BEF70"))) PPC_WEAK_FUNC(sub_821BEF70);
PPC_FUNC_IMPL(__imp__sub_821BEF70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f0,24848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24848);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x821befb8
	if (!cr6.eq) goto loc_821BEFB8;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// b 0x821bf02c
	goto loc_821BF02C;
loc_821BEFB8:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821beff4
	if (!cr6.eq) goto loc_821BEFF4;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f10,52(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// b 0x821bf02c
	goto loc_821BF02C;
loc_821BEFF4:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821bf02c
	if (!cr6.eq) goto loc_821BF02C;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
loc_821BF02C:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821bf060
	if (!cr6.eq) goto loc_821BF060;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_821BF060:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821bf090
	if (!cr6.eq) goto loc_821BF090;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
loc_821BF090:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BF0C0"))) PPC_WEAK_FUNC(sub_821BF0C0);
PPC_FUNC_IMPL(__imp__sub_821BF0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-23780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bf1ec
	if (!cr6.eq) goto loc_821BF1EC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BF0F0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf16c
	if (cr6.eq) goto loc_821BF16C;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// addi r7,r9,2640
	ctx.r7.s64 = ctx.r9.s64 + 2640;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-23632
	ctx.r6.s64 = ctx.r10.s64 + -23632;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,19616
	ctx.r11.s64 = ctx.r11.s64 + 19616;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// addi r9,r9,-31208
	ctx.r9.s64 = ctx.r9.s64 + -31208;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,32769
	ctx.r6.u64 = ctx.r6.u64 | 32769;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BF168;
	sub_822ED768(ctx, base);
	// b 0x821bf170
	goto loc_821BF170;
loc_821BF16C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BF170:
	// stw r3,-23780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23780, ctx.r3.u32);
	// bl 0x822b9138
	ctx.lr = 0x821BF178;
	sub_822B9138(ctx, base);
	// lwz r11,-23780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23780);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bf194
	if (cr6.eq) goto loc_821BF194;
	// bl 0x822b9138
	ctx.lr = 0x821BF188;
	sub_822B9138(ctx, base);
	// lwz r11,-23780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23780);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bf19c
	goto loc_821BF19C;
loc_821BF194:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BF19C:
	// bl 0x822b9138
	ctx.lr = 0x821BF1A0;
	sub_822B9138(ctx, base);
	// lwz r11,-23780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23780);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BF1AC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23780);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf1ec
	if (cr6.eq) goto loc_821BF1EC;
	// bl 0x82170ba8
	ctx.lr = 0x821BF1CC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23780);
	// bne cr6,0x821bf1ec
	if (!cr6.eq) goto loc_821BF1EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF1E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23780);
loc_821BF1EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BF204"))) PPC_WEAK_FUNC(sub_821BF204);
PPC_FUNC_IMPL(__imp__sub_821BF204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF208"))) PPC_WEAK_FUNC(sub_821BF208);
PPC_FUNC_IMPL(__imp__sub_821BF208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821BF210;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf254
	if (!cr6.eq) goto loc_821BF254;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF24C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821bf2b4
	if (!cr6.eq) goto loc_821BF2B4;
loc_821BF254:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf2b4
	if (cr6.eq) goto loc_821BF2B4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf288
	if (cr6.eq) goto loc_821BF288;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF288;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BF288:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r29,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r29,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_821BF2B4:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF2C4"))) PPC_WEAK_FUNC(sub_821BF2C4);
PPC_FUNC_IMPL(__imp__sub_821BF2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF2C8"))) PPC_WEAK_FUNC(sub_821BF2C8);
PPC_FUNC_IMPL(__imp__sub_821BF2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf350
	if (cr6.eq) goto loc_821BF350;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF2F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821bf350
	if (cr6.eq) goto loc_821BF350;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf324
	if (cr6.eq) goto loc_821BF324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF324;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BF324:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BF350:
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

__attribute__((alias("__imp__sub_821BF364"))) PPC_WEAK_FUNC(sub_821BF364);
PPC_FUNC_IMPL(__imp__sub_821BF364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF368"))) PPC_WEAK_FUNC(sub_821BF368);
PPC_FUNC_IMPL(__imp__sub_821BF368) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20080
	ctx.r11.s64 = ctx.r11.s64 + 20080;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BF394;
	sub_822A89B8(ctx, base);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x821e8100
	ctx.lr = 0x821BF39C;
	sub_821E8100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821BF3A4;
	sub_82191130(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf3bc
	if (cr6.eq) goto loc_821BF3BC;
	// bl 0x82170268
	ctx.lr = 0x821BF3B8;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BF3BC:
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

__attribute__((alias("__imp__sub_821BF3D4"))) PPC_WEAK_FUNC(sub_821BF3D4);
PPC_FUNC_IMPL(__imp__sub_821BF3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF3D8"))) PPC_WEAK_FUNC(sub_821BF3D8);
PPC_FUNC_IMPL(__imp__sub_821BF3D8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,23744
	ctx.r11.s64 = ctx.r11.s64 + 23744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BF400;
	sub_822A89B8(ctx, base);
	// addi r30,r31,460
	ctx.r30.s64 = ctx.r31.s64 + 460;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bf42c
	if (cr6.eq) goto loc_821BF42C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821BF42C;
	sub_82170408(ctx, base);
loc_821BF42C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821BF434;
	sub_8218C838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,20080
	ctx.r11.s64 = ctx.r11.s64 + 20080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BF448;
	sub_822A89B8(ctx, base);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x821e8100
	ctx.lr = 0x821BF450;
	sub_821E8100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821BF458;
	sub_82191130(ctx, base);
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

__attribute__((alias("__imp__sub_821BF470"))) PPC_WEAK_FUNC(sub_821BF470);
PPC_FUNC_IMPL(__imp__sub_821BF470) {
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
	// bl 0x821bf3d8
	ctx.lr = 0x821BF490;
	sub_821BF3D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf4a8
	if (cr6.eq) goto loc_821BF4A8;
	// bl 0x82170268
	ctx.lr = 0x821BF4A4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BF4A8:
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

__attribute__((alias("__imp__sub_821BF4C0"))) PPC_WEAK_FUNC(sub_821BF4C0);
PPC_FUNC_IMPL(__imp__sub_821BF4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,32116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bf5e4
	if (!cr6.eq) goto loc_821BF5E4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BF4F0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf564
	if (cr6.eq) goto loc_821BF564;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22664
	ctx.r7.s64 = ctx.r10.s64 + 22664;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-13820
	ctx.r11.s64 = ctx.r11.s64 + -13820;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r5,532
	ctx.r5.s64 = 532;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BF560;
	sub_822ED768(ctx, base);
	// b 0x821bf568
	goto loc_821BF568;
loc_821BF564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BF568:
	// stw r3,32116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32116, ctx.r3.u32);
	// bl 0x82289c60
	ctx.lr = 0x821BF570;
	sub_82289C60(ctx, base);
	// lwz r11,32116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32116);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bf58c
	if (cr6.eq) goto loc_821BF58C;
	// bl 0x82289c60
	ctx.lr = 0x821BF580;
	sub_82289C60(ctx, base);
	// lwz r11,32116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32116);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bf594
	goto loc_821BF594;
loc_821BF58C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BF594:
	// bl 0x82170938
	ctx.lr = 0x821BF598;
	sub_82170938(ctx, base);
	// lwz r11,32116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32116);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BF5A4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32116);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf5e4
	if (cr6.eq) goto loc_821BF5E4;
	// bl 0x82170ba8
	ctx.lr = 0x821BF5C4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32116);
	// bne cr6,0x821bf5e4
	if (!cr6.eq) goto loc_821BF5E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF5E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32116);
loc_821BF5E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BF5FC"))) PPC_WEAK_FUNC(sub_821BF5FC);
PPC_FUNC_IMPL(__imp__sub_821BF5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF600"))) PPC_WEAK_FUNC(sub_821BF600);
PPC_FUNC_IMPL(__imp__sub_821BF600) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20744
	ctx.r11.s64 = ctx.r11.s64 + 20744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BF62C;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf3d8
	ctx.lr = 0x821BF634;
	sub_821BF3D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf64c
	if (cr6.eq) goto loc_821BF64C;
	// bl 0x82170268
	ctx.lr = 0x821BF648;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BF64C:
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

__attribute__((alias("__imp__sub_821BF664"))) PPC_WEAK_FUNC(sub_821BF664);
PPC_FUNC_IMPL(__imp__sub_821BF664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF668"))) PPC_WEAK_FUNC(sub_821BF668);
PPC_FUNC_IMPL(__imp__sub_821BF668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32064
	ctx.r31.s64 = -2101346304;
	// lwz r3,-23800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23800);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bf78c
	if (!cr6.eq) goto loc_821BF78C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BF698;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bf70c
	if (cr6.eq) goto loc_821BF70C;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7288
	ctx.r7.s64 = ctx.r10.s64 + 7288;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,15600
	ctx.r11.s64 = ctx.r11.s64 + 15600;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BF708;
	sub_822ED768(ctx, base);
	// b 0x821bf710
	goto loc_821BF710;
loc_821BF70C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BF710:
	// stw r3,-23800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23800, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x821BF718;
	sub_821A7638(ctx, base);
	// lwz r11,-23800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23800);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bf734
	if (cr6.eq) goto loc_821BF734;
	// bl 0x821a7638
	ctx.lr = 0x821BF728;
	sub_821A7638(ctx, base);
	// lwz r11,-23800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23800);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bf73c
	goto loc_821BF73C;
loc_821BF734:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BF73C:
	// bl 0x82170938
	ctx.lr = 0x821BF740;
	sub_82170938(ctx, base);
	// lwz r11,-23800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23800);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BF74C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23800);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf78c
	if (cr6.eq) goto loc_821BF78C;
	// bl 0x82170ba8
	ctx.lr = 0x821BF76C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23800);
	// bne cr6,0x821bf78c
	if (!cr6.eq) goto loc_821BF78C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF788;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23800);
loc_821BF78C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BF7A4"))) PPC_WEAK_FUNC(sub_821BF7A4);
PPC_FUNC_IMPL(__imp__sub_821BF7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF7A8"))) PPC_WEAK_FUNC(sub_821BF7A8);
PPC_FUNC_IMPL(__imp__sub_821BF7A8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,25056
	ctx.r11.s64 = ctx.r11.s64 + 25056;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BF7D4;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821BF7DC;
	sub_82191130(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf7f4
	if (cr6.eq) goto loc_821BF7F4;
	// bl 0x82170268
	ctx.lr = 0x821BF7F0;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BF7F4:
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

__attribute__((alias("__imp__sub_821BF80C"))) PPC_WEAK_FUNC(sub_821BF80C);
PPC_FUNC_IMPL(__imp__sub_821BF80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF810"))) PPC_WEAK_FUNC(sub_821BF810);
PPC_FUNC_IMPL(__imp__sub_821BF810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x821BF818;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,21408
	ctx.r11.s64 = ctx.r11.s64 + 21408;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BF830;
	sub_822A89B8(ctx, base);
	// addi r31,r27,1176
	ctx.r31.s64 = ctx.r27.s64 + 1176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528098
	ctx.lr = 0x821BF83C;
	sub_82528098(ctx, base);
	// li r28,3
	ctx.r28.s64 = 3;
	// lis r26,-32065
	ctx.r26.s64 = -2101411840;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821BF848:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf8a0
	if (cr6.eq) goto loc_821BF8A0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bf8a0
	if (cr6.eq) goto loc_821BF8A0;
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bf880
	if (!cr6.eq) goto loc_821BF880;
	// bl 0x82216290
	ctx.lr = 0x821BF87C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
loc_821BF880:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF89C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821BF8A0:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ad68
	ctx.lr = 0x821BF8B8;
	sub_8232AD68(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bf8ec
	if (cr6.eq) goto loc_821BF8EC;
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bf8d8
	if (!cr6.eq) goto loc_821BF8D8;
	// bl 0x82216290
	ctx.lr = 0x821BF8D4;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
loc_821BF8D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF8EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BF8EC:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x821bf848
	if (!cr6.lt) goto loc_821BF848;
	// addi r3,r27,1112
	ctx.r3.s64 = ctx.r27.s64 + 1112;
	// bl 0x821e7a40
	ctx.lr = 0x821BF90C;
	sub_821E7A40(ctx, base);
	// addi r3,r27,1080
	ctx.r3.s64 = ctx.r27.s64 + 1080;
	// bl 0x82528098
	ctx.lr = 0x821BF914;
	sub_82528098(ctx, base);
	// addi r3,r27,1068
	ctx.r3.s64 = ctx.r27.s64 + 1068;
	// bl 0x82528098
	ctx.lr = 0x821BF91C;
	sub_82528098(ctx, base);
	// addi r3,r27,1056
	ctx.r3.s64 = ctx.r27.s64 + 1056;
	// bl 0x82528098
	ctx.lr = 0x821BF924;
	sub_82528098(ctx, base);
	// addi r3,r27,1044
	ctx.r3.s64 = ctx.r27.s64 + 1044;
	// bl 0x82288288
	ctx.lr = 0x821BF92C;
	sub_82288288(ctx, base);
	// addi r31,r27,1028
	ctx.r31.s64 = ctx.r27.s64 + 1028;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf954
	if (cr6.eq) goto loc_821BF954;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821BF954;
	sub_82170408(ctx, base);
loc_821BF954:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821BF95C;
	sub_8218C838(ctx, base);
	// addi r31,r27,968
	ctx.r31.s64 = ctx.r27.s64 + 968;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf984
	if (cr6.eq) goto loc_821BF984;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821BF984;
	sub_82170408(ctx, base);
loc_821BF984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821BF98C;
	sub_8218C838(ctx, base);
	// addi r31,r27,956
	ctx.r31.s64 = ctx.r27.s64 + 956;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf9b4
	if (cr6.eq) goto loc_821BF9B4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821BF9B4;
	sub_82170408(ctx, base);
loc_821BF9B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821BF9BC;
	sub_8218C838(ctx, base);
	// addi r31,r27,944
	ctx.r31.s64 = ctx.r27.s64 + 944;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bf9e4
	if (cr6.eq) goto loc_821BF9E4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821BF9E4;
	sub_82170408(ctx, base);
loc_821BF9E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821BF9EC;
	sub_8218C838(ctx, base);
	// addi r31,r27,932
	ctx.r31.s64 = ctx.r27.s64 + 932;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bfa14
	if (cr6.eq) goto loc_821BFA14;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821BFA14;
	sub_82170408(ctx, base);
loc_821BFA14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821BFA1C;
	sub_8218C838(ctx, base);
	// addi r31,r27,920
	ctx.r31.s64 = ctx.r27.s64 + 920;
	// li r28,1
	ctx.r28.s64 = 1;
loc_821BFA24:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bfa7c
	if (cr6.eq) goto loc_821BFA7C;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bfa7c
	if (cr6.eq) goto loc_821BFA7C;
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bfa5c
	if (!cr6.eq) goto loc_821BFA5C;
	// bl 0x82216290
	ctx.lr = 0x821BFA58;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
loc_821BFA5C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BFA78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821BFA7C:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ad68
	ctx.lr = 0x821BFA94;
	sub_8232AD68(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bfac8
	if (cr6.eq) goto loc_821BFAC8;
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bfab4
	if (!cr6.eq) goto loc_821BFAB4;
	// bl 0x82216290
	ctx.lr = 0x821BFAB0;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
loc_821BFAB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BFAC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BFAC8:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x821bfa24
	if (!cr6.lt) goto loc_821BFA24;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-21128
	ctx.r11.s64 = ctx.r11.s64 + -21128;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BFAF4;
	sub_822A89B8(ctx, base);
	// addi r3,r27,640
	ctx.r3.s64 = ctx.r27.s64 + 640;
	// bl 0x82288288
	ctx.lr = 0x821BFAFC;
	sub_82288288(ctx, base);
	// addi r3,r27,512
	ctx.r3.s64 = ctx.r27.s64 + 512;
	// bl 0x82288288
	ctx.lr = 0x821BFB04;
	sub_82288288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82191130
	ctx.lr = 0x821BFB0C;
	sub_82191130(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFB14"))) PPC_WEAK_FUNC(sub_821BFB14);
PPC_FUNC_IMPL(__imp__sub_821BFB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BFB18"))) PPC_WEAK_FUNC(sub_821BFB18);
PPC_FUNC_IMPL(__imp__sub_821BFB18) {
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
	// bl 0x821bf810
	ctx.lr = 0x821BFB38;
	sub_821BF810(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfb50
	if (cr6.eq) goto loc_821BFB50;
	// bl 0x82170268
	ctx.lr = 0x821BFB4C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BFB50:
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

__attribute__((alias("__imp__sub_821BFB68"))) PPC_WEAK_FUNC(sub_821BFB68);
PPC_FUNC_IMPL(__imp__sub_821BFB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,32072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32072);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bfc8c
	if (!cr6.eq) goto loc_821BFC8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BFB98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bfc0c
	if (cr6.eq) goto loc_821BFC0C;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24536
	ctx.r7.s64 = ctx.r10.s64 + 24536;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14088
	ctx.r11.s64 = ctx.r11.s64 + -14088;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,428
	ctx.r5.s64 = 428;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BFC08;
	sub_822ED768(ctx, base);
	// b 0x821bfc10
	goto loc_821BFC10;
loc_821BFC0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BFC10:
	// stw r3,32072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32072, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x821BFC18;
	sub_821A7638(ctx, base);
	// lwz r11,32072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32072);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bfc34
	if (cr6.eq) goto loc_821BFC34;
	// bl 0x821a7638
	ctx.lr = 0x821BFC28;
	sub_821A7638(ctx, base);
	// lwz r11,32072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32072);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bfc3c
	goto loc_821BFC3C;
loc_821BFC34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BFC3C:
	// bl 0x82170938
	ctx.lr = 0x821BFC40;
	sub_82170938(ctx, base);
	// lwz r11,32072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32072);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BFC4C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32072);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bfc8c
	if (cr6.eq) goto loc_821BFC8C;
	// bl 0x82170ba8
	ctx.lr = 0x821BFC6C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32072);
	// bne cr6,0x821bfc8c
	if (!cr6.eq) goto loc_821BFC8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BFC88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32072);
loc_821BFC8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BFCA4"))) PPC_WEAK_FUNC(sub_821BFCA4);
PPC_FUNC_IMPL(__imp__sub_821BFCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BFCA8"))) PPC_WEAK_FUNC(sub_821BFCA8);
PPC_FUNC_IMPL(__imp__sub_821BFCA8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27648
	ctx.r11.s64 = ctx.r11.s64 + 27648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BFCD4;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821BFCDC;
	sub_82191130(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfcf4
	if (cr6.eq) goto loc_821BFCF4;
	// bl 0x82170268
	ctx.lr = 0x821BFCF0;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BFCF4:
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

__attribute__((alias("__imp__sub_821BFD0C"))) PPC_WEAK_FUNC(sub_821BFD0C);
PPC_FUNC_IMPL(__imp__sub_821BFD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BFD10"))) PPC_WEAK_FUNC(sub_821BFD10);
PPC_FUNC_IMPL(__imp__sub_821BFD10) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BFD3C;
	sub_822A89B8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27648
	ctx.r11.s64 = ctx.r11.s64 + 27648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BFD50;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821BFD58;
	sub_82191130(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bfd70
	if (cr6.eq) goto loc_821BFD70;
	// bl 0x82170268
	ctx.lr = 0x821BFD6C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BFD70:
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

__attribute__((alias("__imp__sub_821BFD88"))) PPC_WEAK_FUNC(sub_821BFD88);
PPC_FUNC_IMPL(__imp__sub_821BFD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,32040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32040);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bfeb0
	if (!cr6.eq) goto loc_821BFEB0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821BFDB8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bfe30
	if (cr6.eq) goto loc_821BFE30;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,24600
	ctx.r6.s64 = ctx.r10.s64 + 24600;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14320
	ctx.r11.s64 = ctx.r11.s64 + -14320;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31180
	ctx.r10.s64 = ctx.r10.s64 + -31180;
	// addi r9,r9,-31196
	ctx.r9.s64 = ctx.r9.s64 + -31196;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,992
	ctx.r5.s64 = 992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821BFE2C;
	sub_822ED768(ctx, base);
	// b 0x821bfe34
	goto loc_821BFE34;
loc_821BFE30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BFE34:
	// stw r3,32040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32040, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x821BFE3C;
	sub_821A7638(ctx, base);
	// lwz r11,32040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32040);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bfe58
	if (cr6.eq) goto loc_821BFE58;
	// bl 0x821a7638
	ctx.lr = 0x821BFE4C;
	sub_821A7638(ctx, base);
	// lwz r11,32040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32040);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821bfe60
	goto loc_821BFE60;
loc_821BFE58:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821BFE60:
	// bl 0x82170938
	ctx.lr = 0x821BFE64;
	sub_82170938(ctx, base);
	// lwz r11,32040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32040);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821BFE70;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32040);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bfeb0
	if (cr6.eq) goto loc_821BFEB0;
	// bl 0x82170ba8
	ctx.lr = 0x821BFE90;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32040);
	// bne cr6,0x821bfeb0
	if (!cr6.eq) goto loc_821BFEB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BFEAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32040);
loc_821BFEB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821BFEC8"))) PPC_WEAK_FUNC(sub_821BFEC8);
PPC_FUNC_IMPL(__imp__sub_821BFEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x821BFED0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,26352
	ctx.r11.s64 = ctx.r11.s64 + 26352;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821BFEE8;
	sub_822A89B8(ctx, base);
	// addi r3,r25,980
	ctx.r3.s64 = ctx.r25.s64 + 980;
	// bl 0x82528098
	ctx.lr = 0x821BFEF0;
	sub_82528098(ctx, base);
	// addi r11,r25,936
	ctx.r11.s64 = ctx.r25.s64 + 936;
	// li r27,7
	ctx.r27.s64 = 7;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r26,-32065
	ctx.r26.s64 = -2101411840;
	// li r28,0
	ctx.r28.s64 = 0;
loc_821BFF04:
	// addi r31,r31,-56
	ctx.r31.s64 = ctx.r31.s64 + -56;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bff60
	if (cr6.eq) goto loc_821BFF60;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bff60
	if (cr6.eq) goto loc_821BFF60;
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bff40
	if (!cr6.eq) goto loc_821BFF40;
	// bl 0x82216290
	ctx.lr = 0x821BFF3C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
loc_821BFF40:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BFF5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821BFF60:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ad68
	ctx.lr = 0x821BFF78;
	sub_8232AD68(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bffac
	if (cr6.eq) goto loc_821BFFAC;
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bff98
	if (!cr6.eq) goto loc_821BFF98;
	// bl 0x82216290
	ctx.lr = 0x821BFF94;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
loc_821BFF98:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BFFAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821BFFAC:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x821bff04
	if (!cr6.lt) goto loc_821BFF04;
	// addi r31,r25,460
	ctx.r31.s64 = ctx.r25.s64 + 460;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821e82d0
	ctx.lr = 0x821BFFD8;
	sub_821E82D0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821bffe8
	if (cr6.eq) goto loc_821BFFE8;
	// bl 0x82170268
	ctx.lr = 0x821BFFE8;
	sub_82170268(ctx, base);
loc_821BFFE8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// bl 0x82191130
	ctx.lr = 0x821BFFFC;
	sub_82191130(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0004"))) PPC_WEAK_FUNC(sub_821C0004);
PPC_FUNC_IMPL(__imp__sub_821C0004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0008"))) PPC_WEAK_FUNC(sub_821C0008);
PPC_FUNC_IMPL(__imp__sub_821C0008) {
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
	// bl 0x821bfec8
	ctx.lr = 0x821C0028;
	sub_821BFEC8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0040
	if (cr6.eq) goto loc_821C0040;
	// bl 0x82170268
	ctx.lr = 0x821C003C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C0040:
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

__attribute__((alias("__imp__sub_821C0058"))) PPC_WEAK_FUNC(sub_821C0058);
PPC_FUNC_IMPL(__imp__sub_821C0058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,31952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c017c
	if (!cr6.eq) goto loc_821C017C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821C0088;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c00fc
	if (cr6.eq) goto loc_821C00FC;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27688
	ctx.r7.s64 = ctx.r10.s64 + 27688;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-15024
	ctx.r11.s64 = ctx.r11.s64 + -15024;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821C00F8;
	sub_822ED768(ctx, base);
	// b 0x821c0100
	goto loc_821C0100;
loc_821C00FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C0100:
	// stw r3,31952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31952, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x821C0108;
	sub_82170938(ctx, base);
	// lwz r11,31952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31952);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c0124
	if (cr6.eq) goto loc_821C0124;
	// bl 0x82170938
	ctx.lr = 0x821C0118;
	sub_82170938(ctx, base);
	// lwz r11,31952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31952);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821c012c
	goto loc_821C012C;
loc_821C0124:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821C012C:
	// bl 0x82170938
	ctx.lr = 0x821C0130;
	sub_82170938(ctx, base);
	// lwz r11,31952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31952);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821C013C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31952);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c017c
	if (cr6.eq) goto loc_821C017C;
	// bl 0x82170ba8
	ctx.lr = 0x821C015C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31952);
	// bne cr6,0x821c017c
	if (!cr6.eq) goto loc_821C017C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C0178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31952);
loc_821C017C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821C0194"))) PPC_WEAK_FUNC(sub_821C0194);
PPC_FUNC_IMPL(__imp__sub_821C0194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0198"))) PPC_WEAK_FUNC(sub_821C0198);
PPC_FUNC_IMPL(__imp__sub_821C0198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,31992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31992);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c02bc
	if (!cr6.eq) goto loc_821C02BC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821C01C8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c023c
	if (cr6.eq) goto loc_821C023C;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,25680
	ctx.r7.s64 = ctx.r10.s64 + 25680;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14636
	ctx.r11.s64 = ctx.r11.s64 + -14636;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821C0238;
	sub_822ED768(ctx, base);
	// b 0x821c0240
	goto loc_821C0240;
loc_821C023C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C0240:
	// stw r3,31992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31992, ctx.r3.u32);
	// bl 0x821c0058
	ctx.lr = 0x821C0248;
	sub_821C0058(ctx, base);
	// lwz r11,31992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31992);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c0264
	if (cr6.eq) goto loc_821C0264;
	// bl 0x821c0058
	ctx.lr = 0x821C0258;
	sub_821C0058(ctx, base);
	// lwz r11,31992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31992);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821c026c
	goto loc_821C026C;
loc_821C0264:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821C026C:
	// bl 0x82170938
	ctx.lr = 0x821C0270;
	sub_82170938(ctx, base);
	// lwz r11,31992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31992);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821C027C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31992);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c02bc
	if (cr6.eq) goto loc_821C02BC;
	// bl 0x82170ba8
	ctx.lr = 0x821C029C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31992);
	// bne cr6,0x821c02bc
	if (!cr6.eq) goto loc_821C02BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C02B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31992);
loc_821C02BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821C02D4"))) PPC_WEAK_FUNC(sub_821C02D4);
PPC_FUNC_IMPL(__imp__sub_821C02D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C02D8"))) PPC_WEAK_FUNC(sub_821C02D8);
PPC_FUNC_IMPL(__imp__sub_821C02D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,31972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31972);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c03fc
	if (!cr6.eq) goto loc_821C03FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821C0308;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c037c
	if (cr6.eq) goto loc_821C037C;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,26856
	ctx.r7.s64 = ctx.r10.s64 + 26856;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14844
	ctx.r11.s64 = ctx.r11.s64 + -14844;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821C0378;
	sub_822ED768(ctx, base);
	// b 0x821c0380
	goto loc_821C0380;
loc_821C037C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C0380:
	// stw r3,31972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31972, ctx.r3.u32);
	// bl 0x82292ae0
	ctx.lr = 0x821C0388;
	sub_82292AE0(ctx, base);
	// lwz r11,31972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31972);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c03a4
	if (cr6.eq) goto loc_821C03A4;
	// bl 0x82292ae0
	ctx.lr = 0x821C0398;
	sub_82292AE0(ctx, base);
	// lwz r11,31972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31972);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821c03ac
	goto loc_821C03AC;
loc_821C03A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821C03AC:
	// bl 0x82170938
	ctx.lr = 0x821C03B0;
	sub_82170938(ctx, base);
	// lwz r11,31972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31972);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821C03BC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31972);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c03fc
	if (cr6.eq) goto loc_821C03FC;
	// bl 0x82170ba8
	ctx.lr = 0x821C03DC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31972);
	// bne cr6,0x821c03fc
	if (!cr6.eq) goto loc_821C03FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C03F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31972);
loc_821C03FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821C0414"))) PPC_WEAK_FUNC(sub_821C0414);
PPC_FUNC_IMPL(__imp__sub_821C0414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0418"))) PPC_WEAK_FUNC(sub_821C0418);
PPC_FUNC_IMPL(__imp__sub_821C0418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,32032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32032);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c053c
	if (!cr6.eq) goto loc_821C053C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821C0448;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c04bc
	if (cr6.eq) goto loc_821C04BC;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24728
	ctx.r7.s64 = ctx.r10.s64 + 24728;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14372
	ctx.r11.s64 = ctx.r11.s64 + -14372;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2049
	ctx.r6.s64 = 2049;
	// li r5,652
	ctx.r5.s64 = 652;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821C04B8;
	sub_822ED768(ctx, base);
	// b 0x821c04c0
	goto loc_821C04C0;
loc_821C04BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C04C0:
	// stw r3,32032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32032, ctx.r3.u32);
	// bl 0x821a7c38
	ctx.lr = 0x821C04C8;
	sub_821A7C38(ctx, base);
	// lwz r11,32032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32032);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c04e4
	if (cr6.eq) goto loc_821C04E4;
	// bl 0x821a7c38
	ctx.lr = 0x821C04D8;
	sub_821A7C38(ctx, base);
	// lwz r11,32032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32032);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821c04ec
	goto loc_821C04EC;
loc_821C04E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821C04EC:
	// bl 0x82170938
	ctx.lr = 0x821C04F0;
	sub_82170938(ctx, base);
	// lwz r11,32032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32032);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821C04FC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32032);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c053c
	if (cr6.eq) goto loc_821C053C;
	// bl 0x82170ba8
	ctx.lr = 0x821C051C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32032);
	// bne cr6,0x821c053c
	if (!cr6.eq) goto loc_821C053C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C0538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32032);
loc_821C053C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821C0554"))) PPC_WEAK_FUNC(sub_821C0554);
PPC_FUNC_IMPL(__imp__sub_821C0554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0558"))) PPC_WEAK_FUNC(sub_821C0558);
PPC_FUNC_IMPL(__imp__sub_821C0558) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C0584;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191b48
	ctx.lr = 0x821C058C;
	sub_82191B48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c05a4
	if (cr6.eq) goto loc_821C05A4;
	// bl 0x82170268
	ctx.lr = 0x821C05A0;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C05A4:
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

__attribute__((alias("__imp__sub_821C05BC"))) PPC_WEAK_FUNC(sub_821C05BC);
PPC_FUNC_IMPL(__imp__sub_821C05BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C05C0"))) PPC_WEAK_FUNC(sub_821C05C0);
PPC_FUNC_IMPL(__imp__sub_821C05C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,31944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c06e8
	if (!cr6.eq) goto loc_821C06E8;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821C05F0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0668
	if (cr6.eq) goto loc_821C0668;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,27720
	ctx.r6.s64 = ctx.r10.s64 + 27720;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-15064
	ctx.r11.s64 = ctx.r11.s64 + -15064;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31180
	ctx.r10.s64 = ctx.r10.s64 + -31180;
	// addi r9,r9,-31196
	ctx.r9.s64 = ctx.r9.s64 + -31196;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,684
	ctx.r5.s64 = 684;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821C0664;
	sub_822ED768(ctx, base);
	// b 0x821c066c
	goto loc_821C066C;
loc_821C0668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C066C:
	// stw r3,31944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31944, ctx.r3.u32);
	// bl 0x821a7a90
	ctx.lr = 0x821C0674;
	sub_821A7A90(ctx, base);
	// lwz r11,31944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31944);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c0690
	if (cr6.eq) goto loc_821C0690;
	// bl 0x821a7a90
	ctx.lr = 0x821C0684;
	sub_821A7A90(ctx, base);
	// lwz r11,31944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31944);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821c0698
	goto loc_821C0698;
loc_821C0690:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821C0698:
	// bl 0x82170938
	ctx.lr = 0x821C069C;
	sub_82170938(ctx, base);
	// lwz r11,31944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31944);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821C06A8;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31944);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c06e8
	if (cr6.eq) goto loc_821C06E8;
	// bl 0x82170ba8
	ctx.lr = 0x821C06C8;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31944);
	// bne cr6,0x821c06e8
	if (!cr6.eq) goto loc_821C06E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C06E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31944);
loc_821C06E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821C0700"))) PPC_WEAK_FUNC(sub_821C0700);
PPC_FUNC_IMPL(__imp__sub_821C0700) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821C0708;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,30512
	ctx.r11.s64 = ctx.r11.s64 + 30512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C0720;
	sub_822A89B8(ctx, base);
	// addi r3,r31,636
	ctx.r3.s64 = ctx.r31.s64 + 636;
	// bl 0x823810d8
	ctx.lr = 0x821C0728;
	sub_823810D8(ctx, base);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x82288288
	ctx.lr = 0x821C0730;
	sub_82288288(ctx, base);
	// addi r30,r31,584
	ctx.r30.s64 = ctx.r31.s64 + 584;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c075c
	if (cr6.eq) goto loc_821C075C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821C075C;
	sub_82170408(ctx, base);
loc_821C075C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0764;
	sub_8218C838(ctx, base);
	// addi r30,r31,516
	ctx.r30.s64 = ctx.r31.s64 + 516;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c078c
	if (cr6.eq) goto loc_821C078C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821C078C;
	sub_82170408(ctx, base);
loc_821C078C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0794;
	sub_8218C838(ctx, base);
	// addi r30,r31,504
	ctx.r30.s64 = ctx.r31.s64 + 504;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c07bc
	if (cr6.eq) goto loc_821C07BC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821C07BC;
	sub_82170408(ctx, base);
loc_821C07BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C07C4;
	sub_8218C838(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x82288288
	ctx.lr = 0x821C07CC;
	sub_82288288(ctx, base);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x82288288
	ctx.lr = 0x821C07D4;
	sub_82288288(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20320
	ctx.r11.s64 = ctx.r11.s64 + -20320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C07E8;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821C07F0;
	sub_82191130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C07F8"))) PPC_WEAK_FUNC(sub_821C07F8);
PPC_FUNC_IMPL(__imp__sub_821C07F8) {
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
	// bl 0x821c0700
	ctx.lr = 0x821C0818;
	sub_821C0700(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0830
	if (cr6.eq) goto loc_821C0830;
	// bl 0x82170268
	ctx.lr = 0x821C082C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C0830:
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

__attribute__((alias("__imp__sub_821C0848"))) PPC_WEAK_FUNC(sub_821C0848);
PPC_FUNC_IMPL(__imp__sub_821C0848) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,32120
	ctx.r11.s64 = ctx.r11.s64 + 32120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C0874;
	sub_822A89B8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20320
	ctx.r11.s64 = ctx.r11.s64 + -20320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C0888;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821C0890;
	sub_82191130(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c08a8
	if (cr6.eq) goto loc_821C08A8;
	// bl 0x82170268
	ctx.lr = 0x821C08A4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C08A8:
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

__attribute__((alias("__imp__sub_821C08C0"))) PPC_WEAK_FUNC(sub_821C08C0);
PPC_FUNC_IMPL(__imp__sub_821C08C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,32064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32064);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c09e8
	if (!cr6.eq) goto loc_821C09E8;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821C08F0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0968
	if (cr6.eq) goto loc_821C0968;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,24160
	ctx.r6.s64 = ctx.r10.s64 + 24160;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14160
	ctx.r11.s64 = ctx.r11.s64 + -14160;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31180
	ctx.r10.s64 = ctx.r10.s64 + -31180;
	// addi r9,r9,-31196
	ctx.r9.s64 = ctx.r9.s64 + -31196;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2052
	ctx.r6.s64 = 2052;
	// li r5,564
	ctx.r5.s64 = 564;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821C0964;
	sub_822ED768(ctx, base);
	// b 0x821c096c
	goto loc_821C096C;
loc_821C0968:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C096C:
	// stw r3,32064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32064, ctx.r3.u32);
	// bl 0x8220fd40
	ctx.lr = 0x821C0974;
	sub_8220FD40(ctx, base);
	// lwz r11,32064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32064);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c0990
	if (cr6.eq) goto loc_821C0990;
	// bl 0x8220fd40
	ctx.lr = 0x821C0984;
	sub_8220FD40(ctx, base);
	// lwz r11,32064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32064);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821c0998
	goto loc_821C0998;
loc_821C0990:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821C0998:
	// bl 0x82170938
	ctx.lr = 0x821C099C;
	sub_82170938(ctx, base);
	// lwz r11,32064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32064);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821C09A8;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32064);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c09e8
	if (cr6.eq) goto loc_821C09E8;
	// bl 0x82170ba8
	ctx.lr = 0x821C09C8;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32064);
	// bne cr6,0x821c09e8
	if (!cr6.eq) goto loc_821C09E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C09E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32064);
loc_821C09E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821C0A00"))) PPC_WEAK_FUNC(sub_821C0A00);
PPC_FUNC_IMPL(__imp__sub_821C0A00) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821C0A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,31168
	ctx.r11.s64 = ctx.r11.s64 + 31168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C0A20;
	sub_822A89B8(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x82288288
	ctx.lr = 0x821C0A28;
	sub_82288288(ctx, base);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x82288288
	ctx.lr = 0x821C0A30;
	sub_82288288(ctx, base);
	// addi r29,r31,516
	ctx.r29.s64 = ctx.r31.s64 + 516;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0a5c
	if (cr6.eq) goto loc_821C0A5C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0A5C;
	sub_82170408(ctx, base);
loc_821C0A5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0A64;
	sub_8218C838(ctx, base);
	// addi r29,r31,500
	ctx.r29.s64 = ctx.r31.s64 + 500;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0a8c
	if (cr6.eq) goto loc_821C0A8C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0A8C;
	sub_82170408(ctx, base);
loc_821C0A8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0A94;
	sub_8218C838(ctx, base);
	// addi r29,r31,488
	ctx.r29.s64 = ctx.r31.s64 + 488;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0abc
	if (cr6.eq) goto loc_821C0ABC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0ABC;
	sub_82170408(ctx, base);
loc_821C0ABC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0AC4;
	sub_8218C838(ctx, base);
	// addi r29,r31,476
	ctx.r29.s64 = ctx.r31.s64 + 476;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0aec
	if (cr6.eq) goto loc_821C0AEC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0AEC;
	sub_82170408(ctx, base);
loc_821C0AEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0AF4;
	sub_8218C838(ctx, base);
	// addi r29,r31,464
	ctx.r29.s64 = ctx.r31.s64 + 464;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0b1c
	if (cr6.eq) goto loc_821C0B1C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0B1C;
	sub_82170408(ctx, base);
loc_821C0B1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0B24;
	sub_8218C838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,32120
	ctx.r11.s64 = ctx.r11.s64 + 32120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C0B38;
	sub_822A89B8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20320
	ctx.r11.s64 = ctx.r11.s64 + -20320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C0B4C;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821C0B54;
	sub_82191130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0B5C"))) PPC_WEAK_FUNC(sub_821C0B5C);
PPC_FUNC_IMPL(__imp__sub_821C0B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0B60"))) PPC_WEAK_FUNC(sub_821C0B60);
PPC_FUNC_IMPL(__imp__sub_821C0B60) {
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
	// bl 0x821c0a00
	ctx.lr = 0x821C0B80;
	sub_821C0A00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0b98
	if (cr6.eq) goto loc_821C0B98;
	// bl 0x82170268
	ctx.lr = 0x821C0B94;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C0B98:
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

__attribute__((alias("__imp__sub_821C0BB0"))) PPC_WEAK_FUNC(sub_821C0BB0);
PPC_FUNC_IMPL(__imp__sub_821C0BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,32056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32056);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c0cd4
	if (!cr6.eq) goto loc_821C0CD4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821C0BE0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0c54
	if (cr6.eq) goto loc_821C0C54;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24408
	ctx.r7.s64 = ctx.r10.s64 + 24408;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14236
	ctx.r11.s64 = ctx.r11.s64 + -14236;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r5,564
	ctx.r5.s64 = 564;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821C0C50;
	sub_822ED768(ctx, base);
	// b 0x821c0c58
	goto loc_821C0C58;
loc_821C0C54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C0C58:
	// stw r3,32056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32056, ctx.r3.u32);
	// bl 0x8220fd40
	ctx.lr = 0x821C0C60;
	sub_8220FD40(ctx, base);
	// lwz r11,32056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32056);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c0c7c
	if (cr6.eq) goto loc_821C0C7C;
	// bl 0x8220fd40
	ctx.lr = 0x821C0C70;
	sub_8220FD40(ctx, base);
	// lwz r11,32056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32056);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821c0c84
	goto loc_821C0C84;
loc_821C0C7C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821C0C84:
	// bl 0x82170938
	ctx.lr = 0x821C0C88;
	sub_82170938(ctx, base);
	// lwz r11,32056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32056);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821C0C94;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32056);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0cd4
	if (cr6.eq) goto loc_821C0CD4;
	// bl 0x82170ba8
	ctx.lr = 0x821C0CB4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32056);
	// bne cr6,0x821c0cd4
	if (!cr6.eq) goto loc_821C0CD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C0CD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32056);
loc_821C0CD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821C0CEC"))) PPC_WEAK_FUNC(sub_821C0CEC);
PPC_FUNC_IMPL(__imp__sub_821C0CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0CF0"))) PPC_WEAK_FUNC(sub_821C0CF0);
PPC_FUNC_IMPL(__imp__sub_821C0CF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821C0CF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,23096
	ctx.r11.s64 = ctx.r11.s64 + 23096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C0D10;
	sub_822A89B8(ctx, base);
	// addi r29,r31,544
	ctx.r29.s64 = ctx.r31.s64 + 544;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0d3c
	if (cr6.eq) goto loc_821C0D3C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0D3C;
	sub_82170408(ctx, base);
loc_821C0D3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0D44;
	sub_8218C838(ctx, base);
	// addi r29,r31,516
	ctx.r29.s64 = ctx.r31.s64 + 516;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0d6c
	if (cr6.eq) goto loc_821C0D6C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0D6C;
	sub_82170408(ctx, base);
loc_821C0D6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0D74;
	sub_8218C838(ctx, base);
	// addi r29,r31,504
	ctx.r29.s64 = ctx.r31.s64 + 504;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0d9c
	if (cr6.eq) goto loc_821C0D9C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0D9C;
	sub_82170408(ctx, base);
loc_821C0D9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0DA4;
	sub_8218C838(ctx, base);
	// addi r29,r31,492
	ctx.r29.s64 = ctx.r31.s64 + 492;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0dcc
	if (cr6.eq) goto loc_821C0DCC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0DCC;
	sub_82170408(ctx, base);
loc_821C0DCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0DD4;
	sub_8218C838(ctx, base);
	// addi r29,r31,460
	ctx.r29.s64 = ctx.r31.s64 + 460;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0dfc
	if (cr6.eq) goto loc_821C0DFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0DFC;
	sub_82170408(ctx, base);
loc_821C0DFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0E04;
	sub_8218C838(ctx, base);
	// addi r29,r31,448
	ctx.r29.s64 = ctx.r31.s64 + 448;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0e2c
	if (cr6.eq) goto loc_821C0E2C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0E2C;
	sub_82170408(ctx, base);
loc_821C0E2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0E34;
	sub_8218C838(ctx, base);
	// addi r29,r31,436
	ctx.r29.s64 = ctx.r31.s64 + 436;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c0e5c
	if (cr6.eq) goto loc_821C0E5C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x821C0E5C;
	sub_82170408(ctx, base);
loc_821C0E5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C0E64;
	sub_8218C838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,32120
	ctx.r11.s64 = ctx.r11.s64 + 32120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C0E78;
	sub_822A89B8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20320
	ctx.r11.s64 = ctx.r11.s64 + -20320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C0E8C;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821C0E94;
	sub_82191130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0E9C"))) PPC_WEAK_FUNC(sub_821C0E9C);
PPC_FUNC_IMPL(__imp__sub_821C0E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0EA0"))) PPC_WEAK_FUNC(sub_821C0EA0);
PPC_FUNC_IMPL(__imp__sub_821C0EA0) {
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
	// bl 0x821c0cf0
	ctx.lr = 0x821C0EC0;
	sub_821C0CF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0ed8
	if (cr6.eq) goto loc_821C0ED8;
	// bl 0x82170268
	ctx.lr = 0x821C0ED4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C0ED8:
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

__attribute__((alias("__imp__sub_821C0EF0"))) PPC_WEAK_FUNC(sub_821C0EF0);
PPC_FUNC_IMPL(__imp__sub_821C0EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,32144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c1014
	if (!cr6.eq) goto loc_821C1014;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821C0F20;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c0f94
	if (cr6.eq) goto loc_821C0F94;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21664
	ctx.r7.s64 = ctx.r10.s64 + 21664;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-13580
	ctx.r11.s64 = ctx.r11.s64 + -13580;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r5,444
	ctx.r5.s64 = 444;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821C0F90;
	sub_822ED768(ctx, base);
	// b 0x821c0f98
	goto loc_821C0F98;
loc_821C0F94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C0F98:
	// stw r3,32144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32144, ctx.r3.u32);
	// bl 0x8220fd40
	ctx.lr = 0x821C0FA0;
	sub_8220FD40(ctx, base);
	// lwz r11,32144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32144);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c0fbc
	if (cr6.eq) goto loc_821C0FBC;
	// bl 0x8220fd40
	ctx.lr = 0x821C0FB0;
	sub_8220FD40(ctx, base);
	// lwz r11,32144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32144);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821c0fc4
	goto loc_821C0FC4;
loc_821C0FBC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821C0FC4:
	// bl 0x82170938
	ctx.lr = 0x821C0FC8;
	sub_82170938(ctx, base);
	// lwz r11,32144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32144);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821C0FD4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32144);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c1014
	if (cr6.eq) goto loc_821C1014;
	// bl 0x82170ba8
	ctx.lr = 0x821C0FF4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32144);
	// bne cr6,0x821c1014
	if (!cr6.eq) goto loc_821C1014;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C1010;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32144);
loc_821C1014:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821C102C"))) PPC_WEAK_FUNC(sub_821C102C);
PPC_FUNC_IMPL(__imp__sub_821C102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1030"))) PPC_WEAK_FUNC(sub_821C1030);
PPC_FUNC_IMPL(__imp__sub_821C1030) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C1058;
	sub_822A89B8(ctx, base);
	// addi r30,r31,416
	ctx.r30.s64 = ctx.r31.s64 + 416;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821c1084
	if (cr6.eq) goto loc_821C1084;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821C1084;
	sub_82170408(ctx, base);
loc_821C1084:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C108C;
	sub_8218C838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,32120
	ctx.r11.s64 = ctx.r11.s64 + 32120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C10A0;
	sub_822A89B8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20320
	ctx.r11.s64 = ctx.r11.s64 + -20320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C10B4;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821C10BC;
	sub_82191130(ctx, base);
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

__attribute__((alias("__imp__sub_821C10D4"))) PPC_WEAK_FUNC(sub_821C10D4);
PPC_FUNC_IMPL(__imp__sub_821C10D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C10D8"))) PPC_WEAK_FUNC(sub_821C10D8);
PPC_FUNC_IMPL(__imp__sub_821C10D8) {
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
	// bl 0x821c1030
	ctx.lr = 0x821C10F8;
	sub_821C1030(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1110
	if (cr6.eq) goto loc_821C1110;
	// bl 0x82170268
	ctx.lr = 0x821C110C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C1110:
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

__attribute__((alias("__imp__sub_821C1128"))) PPC_WEAK_FUNC(sub_821C1128);
PPC_FUNC_IMPL(__imp__sub_821C1128) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x821C1130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27000
	ctx.r11.s64 = ctx.r11.s64 + 27000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C1148;
	sub_822A89B8(ctx, base);
	// addi r30,r31,464
	ctx.r30.s64 = ctx.r31.s64 + 464;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c1174
	if (cr6.eq) goto loc_821C1174;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821C1174;
	sub_82170408(ctx, base);
loc_821C1174:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C117C;
	sub_8218C838(ctx, base);
	// addi r30,r31,448
	ctx.r30.s64 = ctx.r31.s64 + 448;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c11a4
	if (cr6.eq) goto loc_821C11A4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821C11A4;
	sub_82170408(ctx, base);
loc_821C11A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C11AC;
	sub_8218C838(ctx, base);
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c11d4
	if (cr6.eq) goto loc_821C11D4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821C11D4;
	sub_82170408(ctx, base);
loc_821C11D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C11DC;
	sub_8218C838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x821C11E4;
	sub_82191130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C11EC"))) PPC_WEAK_FUNC(sub_821C11EC);
PPC_FUNC_IMPL(__imp__sub_821C11EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C11F0"))) PPC_WEAK_FUNC(sub_821C11F0);
PPC_FUNC_IMPL(__imp__sub_821C11F0) {
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
	// bl 0x821c1128
	ctx.lr = 0x821C1210;
	sub_821C1128(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1228
	if (cr6.eq) goto loc_821C1228;
	// bl 0x82170268
	ctx.lr = 0x821C1224;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C1228:
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

__attribute__((alias("__imp__sub_821C1240"))) PPC_WEAK_FUNC(sub_821C1240);
PPC_FUNC_IMPL(__imp__sub_821C1240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,31932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31932);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c1368
	if (!cr6.eq) goto loc_821C1368;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821C1270;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c12e8
	if (cr6.eq) goto loc_821C12E8;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,28688
	ctx.r6.s64 = ctx.r10.s64 + 28688;
	// ori r9,r9,16516
	ctx.r9.u64 = ctx.r9.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-15116
	ctx.r11.s64 = ctx.r11.s64 + -15116;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-31180
	ctx.r10.s64 = ctx.r10.s64 + -31180;
	// addi r9,r9,-31196
	ctx.r9.s64 = ctx.r9.s64 + -31196;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821C12E4;
	sub_822ED768(ctx, base);
	// b 0x821c12ec
	goto loc_821C12EC;
loc_821C12E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C12EC:
	// stw r3,31932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31932, ctx.r3.u32);
	// bl 0x822920e0
	ctx.lr = 0x821C12F4;
	sub_822920E0(ctx, base);
	// lwz r11,31932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31932);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c1310
	if (cr6.eq) goto loc_821C1310;
	// bl 0x822920e0
	ctx.lr = 0x821C1304;
	sub_822920E0(ctx, base);
	// lwz r11,31932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31932);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821c1318
	goto loc_821C1318;
loc_821C1310:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821C1318:
	// bl 0x82170938
	ctx.lr = 0x821C131C;
	sub_82170938(ctx, base);
	// lwz r11,31932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31932);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821C1328;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31932);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c1368
	if (cr6.eq) goto loc_821C1368;
	// bl 0x82170ba8
	ctx.lr = 0x821C1348;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31932);
	// bne cr6,0x821c1368
	if (!cr6.eq) goto loc_821C1368;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C1364;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31932);
loc_821C1368:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821C1380"))) PPC_WEAK_FUNC(sub_821C1380);
PPC_FUNC_IMPL(__imp__sub_821C1380) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32120
	ctx.r11.s64 = ctx.r11.s64 + -32120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C13A4;
	sub_822A89B8(ctx, base);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// bl 0x82288288
	ctx.lr = 0x821C13AC;
	sub_82288288(ctx, base);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x82288288
	ctx.lr = 0x821C13B4;
	sub_82288288(ctx, base);
	// addi r3,r31,564
	ctx.r3.s64 = ctx.r31.s64 + 564;
	// bl 0x82288288
	ctx.lr = 0x821C13BC;
	sub_82288288(ctx, base);
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x82288288
	ctx.lr = 0x821C13C4;
	sub_82288288(ctx, base);
	// addi r3,r31,540
	ctx.r3.s64 = ctx.r31.s64 + 540;
	// bl 0x82288288
	ctx.lr = 0x821C13CC;
	sub_82288288(ctx, base);
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// bl 0x82288288
	ctx.lr = 0x821C13D4;
	sub_82288288(ctx, base);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x82528098
	ctx.lr = 0x821C13DC;
	sub_82528098(ctx, base);
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// bl 0x824c5b40
	ctx.lr = 0x821C13E4;
	sub_824C5B40(ctx, base);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// bl 0x824c5b40
	ctx.lr = 0x821C13EC;
	sub_824C5B40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c1128
	ctx.lr = 0x821C13F4;
	sub_821C1128(ctx, base);
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

__attribute__((alias("__imp__sub_821C1408"))) PPC_WEAK_FUNC(sub_821C1408);
PPC_FUNC_IMPL(__imp__sub_821C1408) {
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
	// bl 0x821c1380
	ctx.lr = 0x821C1428;
	sub_821C1380(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1440
	if (cr6.eq) goto loc_821C1440;
	// bl 0x82170268
	ctx.lr = 0x821C143C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C1440:
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

__attribute__((alias("__imp__sub_821C1458"))) PPC_WEAK_FUNC(sub_821C1458);
PPC_FUNC_IMPL(__imp__sub_821C1458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// lwz r3,32020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32020);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c157c
	if (!cr6.eq) goto loc_821C157C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821C1488;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c14fc
	if (cr6.eq) goto loc_821C14FC;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24536
	ctx.r7.s64 = ctx.r10.s64 + 24536;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14452
	ctx.r11.s64 = ctx.r11.s64 + -14452;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,416
	ctx.r5.s64 = 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821C14F8;
	sub_822ED768(ctx, base);
	// b 0x821c1500
	goto loc_821C1500;
loc_821C14FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C1500:
	// stw r3,32020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32020, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x821C1508;
	sub_821A7638(ctx, base);
	// lwz r11,32020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32020);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c1524
	if (cr6.eq) goto loc_821C1524;
	// bl 0x821a7638
	ctx.lr = 0x821C1518;
	sub_821A7638(ctx, base);
	// lwz r11,32020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32020);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821c152c
	goto loc_821C152C;
loc_821C1524:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821C152C:
	// bl 0x82170938
	ctx.lr = 0x821C1530;
	sub_82170938(ctx, base);
	// lwz r11,32020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32020);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821C153C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32020);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c157c
	if (cr6.eq) goto loc_821C157C;
	// bl 0x82170ba8
	ctx.lr = 0x821C155C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32020);
	// bne cr6,0x821c157c
	if (!cr6.eq) goto loc_821C157C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C1578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32020);
loc_821C157C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821C1594"))) PPC_WEAK_FUNC(sub_821C1594);
PPC_FUNC_IMPL(__imp__sub_821C1594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1598"))) PPC_WEAK_FUNC(sub_821C1598);
PPC_FUNC_IMPL(__imp__sub_821C1598) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,22264
	ctx.r11.s64 = ctx.r11.s64 + 22264;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C15C0;
	sub_822A89B8(ctx, base);
	// addi r31,r30,732
	ctx.r31.s64 = ctx.r30.s64 + 732;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821c15ec
	if (cr6.eq) goto loc_821C15EC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x821C15EC;
	sub_82170408(ctx, base);
loc_821C15EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x821C15F4;
	sub_8218C838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191130
	ctx.lr = 0x821C15FC;
	sub_82191130(ctx, base);
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

__attribute__((alias("__imp__sub_821C1614"))) PPC_WEAK_FUNC(sub_821C1614);
PPC_FUNC_IMPL(__imp__sub_821C1614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1618"))) PPC_WEAK_FUNC(sub_821C1618);
PPC_FUNC_IMPL(__imp__sub_821C1618) {
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
	// bl 0x821c1598
	ctx.lr = 0x821C1638;
	sub_821C1598(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1650
	if (cr6.eq) goto loc_821C1650;
	// bl 0x82170268
	ctx.lr = 0x821C164C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C1650:
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

__attribute__((alias("__imp__sub_821C1668"))) PPC_WEAK_FUNC(sub_821C1668);
PPC_FUNC_IMPL(__imp__sub_821C1668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,896(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	ctx.f0.f64 = double(temp.f32);
	// li r11,61
	ctx.r11.s64 = 61;
	// lfs f13,900(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,904(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,584(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 584, temp.u32);
	// stfs f13,564(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 564, temp.u32);
	// stb r10,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r10.u8);
	// stfs f12,608(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 608, temp.u32);
	// lwz r10,448(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// rlwimi r10,r11,18,8,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0xFC0000) | (ctx.r10.u64 & 0xFFFFFFFFFF03FFFF);
	// stw r10,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C169C"))) PPC_WEAK_FUNC(sub_821C169C);
PPC_FUNC_IMPL(__imp__sub_821C169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C16A0"))) PPC_WEAK_FUNC(sub_821C16A0);
PPC_FUNC_IMPL(__imp__sub_821C16A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r9,888(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 888);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821c16e8
	if (!cr6.gt) goto loc_821C16E8;
	// lwz r10,884(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 884);
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r7,32(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
loc_821C16C0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821c16d8
	if (!cr6.eq) goto loc_821C16D8;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x821c170c
	if (cr6.eq) goto loc_821C170C;
loc_821C16D8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821c16c0
	if (cr6.lt) goto loc_821C16C0;
loc_821C16E8:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lwz r11,884(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 884);
	// lfs f0,24328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
loc_821C16F4:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_821C170C:
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lwz r10,884(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 884);
	// lfs f0,24328(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821c16f4
	goto loc_821C16F4;
}

__attribute__((alias("__imp__sub_821C172C"))) PPC_WEAK_FUNC(sub_821C172C);
PPC_FUNC_IMPL(__imp__sub_821C172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1730"))) PPC_WEAK_FUNC(sub_821C1730);
PPC_FUNC_IMPL(__imp__sub_821C1730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x821C1738;
	__savegprlr_25(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,19944
	ctx.r30.s64 = ctx.r11.s64 + 19944;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-5904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5904);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c1768
	if (!cr6.eq) goto loc_821C1768;
	// bl 0x823648e0
	ctx.lr = 0x821C1768;
	sub_823648E0(ctx, base);
loc_821C1768:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369c70
	ctx.lr = 0x821C177C;
	sub_82369C70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c1790
	if (cr6.eq) goto loc_821C1790;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_821C1790:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// addi r28,r11,-31256
	ctx.r28.s64 = ctx.r11.s64 + -31256;
	// beq cr6,0x821c17e0
	if (cr6.eq) goto loc_821C17E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82214098
	ctx.lr = 0x821C17B0;
	sub_82214098(ctx, base);
	// rlwinm r11,r3,2,18,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c17e0
	if (cr6.eq) goto loc_821C17E0;
loc_821C17C0:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d0320
	ctx.lr = 0x821C17CC;
	sub_828D0320(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c1914
	if (cr6.eq) goto loc_821C1914;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c17c0
	if (!cr6.eq) goto loc_821C17C0;
loc_821C17E0:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_821C17E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r11,836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C1808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,92(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821c193c
	if (cr6.lt) goto loc_821C193C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r30,r11,19960
	ctx.r30.s64 = ctx.r11.s64 + 19960;
	// lwz r11,-5904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5904);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c1848
	if (!cr6.eq) goto loc_821C1848;
	// bl 0x823648e0
	ctx.lr = 0x821C1848;
	sub_823648E0(ctx, base);
loc_821C1848:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369c70
	ctx.lr = 0x821C185C;
	sub_82369C70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c1870
	if (cr6.eq) goto loc_821C1870;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_821C1870:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c18b8
	if (cr6.eq) goto loc_821C18B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82214098
	ctx.lr = 0x821C1888;
	sub_82214098(ctx, base);
	// rlwinm r11,r3,2,18,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c18b8
	if (cr6.eq) goto loc_821C18B8;
loc_821C1898:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d0320
	ctx.lr = 0x821C18A4;
	sub_828D0320(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c1920
	if (cr6.eq) goto loc_821C1920;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c1898
	if (!cr6.eq) goto loc_821C1898;
loc_821C18B8:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_821C18C0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r11,836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C18E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,92(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821c192c
	if (cr6.lt) goto loc_821C192C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,109(r25)
	PPC_STORE_U8(ctx.r25.u32 + 109, ctx.r11.u8);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
loc_821C1914:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x821c17e8
	goto loc_821C17E8;
loc_821C1920:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x821c18c0
	goto loc_821C18C0;
loc_821C192C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,109(r25)
	PPC_STORE_U8(ctx.r25.u32 + 109, ctx.r11.u8);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
loc_821C193C:
	// stb r27,109(r25)
	PPC_STORE_U8(ctx.r25.u32 + 109, ctx.r27.u8);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1948"))) PPC_WEAK_FUNC(sub_821C1948);
PPC_FUNC_IMPL(__imp__sub_821C1948) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f13,912(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// stfs f0,912(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 912, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C1960"))) PPC_WEAK_FUNC(sub_821C1960);
PPC_FUNC_IMPL(__imp__sub_821C1960) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,920(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 920);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C1968"))) PPC_WEAK_FUNC(sub_821C1968);
PPC_FUNC_IMPL(__imp__sub_821C1968) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28296
	ctx.r11.s64 = ctx.r11.s64 + 28296;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C1994;
	sub_822A89B8(ctx, base);
	// addi r3,r31,884
	ctx.r3.s64 = ctx.r31.s64 + 884;
	// bl 0x821e7e88
	ctx.lr = 0x821C199C;
	sub_821E7E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c1598
	ctx.lr = 0x821C19A4;
	sub_821C1598(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c19bc
	if (cr6.eq) goto loc_821C19BC;
	// bl 0x82170268
	ctx.lr = 0x821C19B8;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C19BC:
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

__attribute__((alias("__imp__sub_821C19D4"))) PPC_WEAK_FUNC(sub_821C19D4);
PPC_FUNC_IMPL(__imp__sub_821C19D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C19D8"))) PPC_WEAK_FUNC(sub_821C19D8);
PPC_FUNC_IMPL(__imp__sub_821C19D8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31472
	ctx.r11.s64 = ctx.r11.s64 + -31472;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821C1A04;
	sub_822A89B8(ctx, base);
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// bl 0x823810d8
	ctx.lr = 0x821C1A0C;
	sub_823810D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c1598
	ctx.lr = 0x821C1A14;
	sub_821C1598(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1a2c
	if (cr6.eq) goto loc_821C1A2C;
	// bl 0x82170268
	ctx.lr = 0x821C1A28;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C1A2C:
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

