#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82170000"))) PPC_WEAK_FUNC(sub_82170000);
PPC_FUNC_IMPL(__imp__sub_82170000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x82170008;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f13,12(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f31,24328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8217011c
	if (!cr6.eq) goto loc_8217011C;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8217011c
	if (cr6.gt) goto loc_8217011C;
	// lis r30,-32065
	ctx.r30.s64 = -2101411840;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,-11976(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11976);
	// lwz r11,668(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821700b4
	if (cr6.eq) goto loc_821700B4;
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821700b4
	if (cr6.eq) goto loc_821700B4;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// ld r4,-20788(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20788);
	// bl 0x822aa9b0
	ctx.lr = 0x82170094;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821700B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,-11976(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11976);
loc_821700B4:
	// lwz r11,672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82170118
	if (!cr6.gt) goto loc_82170118;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_821700C8:
	// lwz r11,668(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170104
	if (cr6.eq) goto loc_82170104;
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82170104
	if (cr6.eq) goto loc_82170104;
	// lwz r7,1040(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1040);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82170104
	if (cr6.eq) goto loc_82170104;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r7,r7,0,2,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
loc_82170104:
	// lwz r11,672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821700c8
	if (cr6.lt) goto loc_821700C8;
loc_82170118:
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
loc_8217011C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82170154
	if (!cr6.eq) goto loc_82170154;
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82170154
	if (cr6.gt) goto loc_82170154;
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,14164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170150;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r27.u32);
loc_82170154:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170184
	if (cr6.eq) goto loc_82170184;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170184
	if (cr6.eq) goto loc_82170184;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82170184:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170190"))) PPC_WEAK_FUNC(sub_82170190);
PPC_FUNC_IMPL(__imp__sub_82170190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82170198;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bne cr6,0x8217024c
	if (!cr6.eq) goto loc_8217024C;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f13,24328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8217024c
	if (cr6.gt) goto loc_8217024C;
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// lwz r11,-11976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11976);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170244
	if (cr6.eq) goto loc_82170244;
	// lwz r11,668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82170244
	if (cr6.eq) goto loc_82170244;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82170244
	if (cr6.eq) goto loc_82170244;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-20788(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20788);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822aa9b0
	ctx.lr = 0x82170228;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170244;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82170244:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8217024C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82170000
	ctx.lr = 0x82170258;
	sub_82170000(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170264"))) PPC_WEAK_FUNC(sub_82170264);
PPC_FUNC_IMPL(__imp__sub_82170264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170268"))) PPC_WEAK_FUNC(sub_82170268);
PPC_FUNC_IMPL(__imp__sub_82170268) {
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
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82170298
	if (!cr6.eq) goto loc_82170298;
	// bl 0x82216290
	ctx.lr = 0x82170294;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_82170298:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821702AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_821702C4"))) PPC_WEAK_FUNC(sub_821702C4);
PPC_FUNC_IMPL(__imp__sub_821702C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821702C8"))) PPC_WEAK_FUNC(sub_821702C8);
PPC_FUNC_IMPL(__imp__sub_821702C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821702DC"))) PPC_WEAK_FUNC(sub_821702DC);
PPC_FUNC_IMPL(__imp__sub_821702DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821702E0"))) PPC_WEAK_FUNC(sub_821702E0);
PPC_FUNC_IMPL(__imp__sub_821702E0) {
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
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82170310
	if (!cr6.eq) goto loc_82170310;
	// bl 0x82216290
	ctx.lr = 0x8217030C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_82170310:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170328;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82170340"))) PPC_WEAK_FUNC(sub_82170340);
PPC_FUNC_IMPL(__imp__sub_82170340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82170348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82170370
	if (!cr6.eq) goto loc_82170370;
	// bl 0x82216290
	ctx.lr = 0x8217036C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_82170370:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217038C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170394"))) PPC_WEAK_FUNC(sub_82170394);
PPC_FUNC_IMPL(__imp__sub_82170394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170398"))) PPC_WEAK_FUNC(sub_82170398);
PPC_FUNC_IMPL(__imp__sub_82170398) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r31,r4
	ctx.r11.u64 = ctx.r31.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// ble cr6,0x821703ec
	if (!cr6.gt) goto loc_821703EC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,8
	ctx.r5.s64 = 8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x821703EC;
	sub_82170408(ctx, base);
loc_821703EC:
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

__attribute__((alias("__imp__sub_82170404"))) PPC_WEAK_FUNC(sub_82170404);
PPC_FUNC_IMPL(__imp__sub_82170404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170408"))) PPC_WEAK_FUNC(sub_82170408);
PPC_FUNC_IMPL(__imp__sub_82170408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82170410;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82170434
	if (!cr6.eq) goto loc_82170434;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170474
	if (cr6.eq) goto loc_82170474;
loc_82170434:
	// lis r30,-32065
	ctx.r30.s64 = -2101411840;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r29,r11,r4
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r3,-11780(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82170454
	if (!cr6.eq) goto loc_82170454;
	// bl 0x82216290
	ctx.lr = 0x82170450;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11780);
loc_82170454:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170470;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82170474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217047C"))) PPC_WEAK_FUNC(sub_8217047C);
PPC_FUNC_IMPL(__imp__sub_8217047C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170480"))) PPC_WEAK_FUNC(sub_82170480);
PPC_FUNC_IMPL(__imp__sub_82170480) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x821704BC;
	sub_82170408(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821704d8
	if (cr6.eq) goto loc_821704D8;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x828d2930
	ctx.lr = 0x821704D8;
	sub_828D2930(ctx, base);
loc_821704D8:
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

__attribute__((alias("__imp__sub_821704F4"))) PPC_WEAK_FUNC(sub_821704F4);
PPC_FUNC_IMPL(__imp__sub_821704F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821704F8"))) PPC_WEAK_FUNC(sub_821704F8);
PPC_FUNC_IMPL(__imp__sub_821704F8) {
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
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170530
	if (cr6.eq) goto loc_82170530;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d05e0
	ctx.lr = 0x82170528;
	sub_828D05E0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// b 0x82170534
	goto loc_82170534;
loc_82170530:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82170534:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82170408
	ctx.lr = 0x82170554;
	sub_82170408(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170570
	if (cr6.eq) goto loc_82170570;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828d2930
	ctx.lr = 0x82170570;
	sub_828D2930(ctx, base);
loc_82170570:
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

__attribute__((alias("__imp__sub_8217058C"))) PPC_WEAK_FUNC(sub_8217058C);
PPC_FUNC_IMPL(__imp__sub_8217058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170590"))) PPC_WEAK_FUNC(sub_82170590);
PPC_FUNC_IMPL(__imp__sub_82170590) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821705e4
	if (cr6.eq) goto loc_821705E4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821705C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821705c0
	if (!cr6.eq) goto loc_821705C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x821705e8
	goto loc_821705E8;
loc_821705E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821705E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82170408
	ctx.lr = 0x82170608;
	sub_82170408(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170654
	if (cr6.eq) goto loc_82170654;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c898
	ctx.lr = 0x82170620;
	sub_8218C898(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x828d2930
	ctx.lr = 0x82170638;
	sub_828D2930(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82170654
	if (cr6.eq) goto loc_82170654;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170654
	if (cr6.eq) goto loc_82170654;
	// bl 0x82170268
	ctx.lr = 0x82170654;
	sub_82170268(ctx, base);
loc_82170654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_82170670"))) PPC_WEAK_FUNC(sub_82170670);
PPC_FUNC_IMPL(__imp__sub_82170670) {
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
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821706e4
	if (cr6.eq) goto loc_821706E4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82170408
	ctx.lr = 0x821706AC;
	sub_82170408(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821706e0
	if (cr6.eq) goto loc_821706E0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821706cc
	if (cr6.eq) goto loc_821706CC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x821706d4
	goto loc_821706D4;
loc_821706CC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r10,16764
	ctx.r4.s64 = ctx.r10.s64 + 16764;
loc_821706D4:
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x828d2930
	ctx.lr = 0x821706E0;
	sub_828D2930(ctx, base);
loc_821706E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821706E4:
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

__attribute__((alias("__imp__sub_821706FC"))) PPC_WEAK_FUNC(sub_821706FC);
PPC_FUNC_IMPL(__imp__sub_821706FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170700"))) PPC_WEAK_FUNC(sub_82170700);
PPC_FUNC_IMPL(__imp__sub_82170700) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170714
	if (cr6.eq) goto loc_82170714;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
loc_82170714:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,16764
	ctx.r3.s64 = ctx.r11.s64 + 16764;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170720"))) PPC_WEAK_FUNC(sub_82170720);
PPC_FUNC_IMPL(__imp__sub_82170720) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82170728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821707b4
	if (cr6.eq) goto loc_821707B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217078c
	if (cr6.eq) goto loc_8217078C;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// bl 0x828d05e0
	ctx.lr = 0x82170758;
	sub_828D05E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170398
	ctx.lr = 0x8217076C;
	sub_82170398(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x828d0818
	ctx.lr = 0x82170780;
	sub_828D0818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_8217078C:
	// bl 0x828d05e0
	ctx.lr = 0x82170790;
	sub_828D05E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82170398
	ctx.lr = 0x821707A8;
	sub_82170398(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x828d0818
	ctx.lr = 0x821707B4;
	sub_828D0818(ctx, base);
loc_821707B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821707C0"))) PPC_WEAK_FUNC(sub_821707C0);
PPC_FUNC_IMPL(__imp__sub_821707C0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,16764
	ctx.r11.s64 = ctx.r11.s64 + 16764;
	// beq cr6,0x821707e8
	if (cr6.eq) goto loc_821707E8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x821707ec
	goto loc_821707EC;
loc_821707E8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_821707EC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82170800
	if (cr6.eq) goto loc_82170800;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82170804
	goto loc_82170804;
loc_82170800:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82170804:
	// bl 0x828d0320
	ctx.lr = 0x82170808;
	sub_828D0320(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170820"))) PPC_WEAK_FUNC(sub_82170820);
PPC_FUNC_IMPL(__imp__sub_82170820) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,16764
	ctx.r11.s64 = ctx.r11.s64 + 16764;
	// beq cr6,0x82170848
	if (cr6.eq) goto loc_82170848;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8217084c
	goto loc_8217084C;
loc_82170848:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8217084C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82170860
	if (cr6.eq) goto loc_82170860;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82170864
	goto loc_82170864;
loc_82170860:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82170864:
	// bl 0x828d0320
	ctx.lr = 0x82170868;
	sub_828D0320(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170884"))) PPC_WEAK_FUNC(sub_82170884);
PPC_FUNC_IMPL(__imp__sub_82170884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170888"))) PPC_WEAK_FUNC(sub_82170888);
PPC_FUNC_IMPL(__imp__sub_82170888) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821708A0"))) PPC_WEAK_FUNC(sub_821708A0);
PPC_FUNC_IMPL(__imp__sub_821708A0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8217091c
	if (cr6.eq) goto loc_8217091C;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821708e4
	if (cr6.eq) goto loc_821708E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d05e0
	ctx.lr = 0x821708DC;
	sub_828D05E0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// b 0x821708e8
	goto loc_821708E8;
loc_821708E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821708E8:
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x82170900;
	sub_82170408(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217091c
	if (cr6.eq) goto loc_8217091C;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828d2930
	ctx.lr = 0x8217091C;
	sub_828D2930(ctx, base);
loc_8217091C:
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

__attribute__((alias("__imp__sub_82170938"))) PPC_WEAK_FUNC(sub_82170938);
PPC_FUNC_IMPL(__imp__sub_82170938) {
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
	// lwz r3,-11808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11808);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82170a60
	if (!cr6.eq) goto loc_82170A60;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82170968;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821709e0
	if (cr6.eq) goto loc_821709E0;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-28152
	ctx.r6.s64 = ctx.r10.s64 + -28152;
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,13600
	ctx.r11.s64 = ctx.r11.s64 + 13600;
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
	// li r6,257
	ctx.r6.s64 = 257;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821709DC;
	sub_822ED768(ctx, base);
	// b 0x821709e4
	goto loc_821709E4;
loc_821709E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821709E4:
	// stw r3,-11808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11808, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x821709EC;
	sub_82170938(ctx, base);
	// lwz r11,-11808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11808);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82170a08
	if (cr6.eq) goto loc_82170A08;
	// bl 0x82170938
	ctx.lr = 0x821709FC;
	sub_82170938(ctx, base);
	// lwz r11,-11808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11808);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82170a10
	goto loc_82170A10;
loc_82170A08:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82170A10:
	// bl 0x82170938
	ctx.lr = 0x82170A14;
	sub_82170938(ctx, base);
	// lwz r11,-11808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11808);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82170A20;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11808);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170a60
	if (cr6.eq) goto loc_82170A60;
	// bl 0x82170ba8
	ctx.lr = 0x82170A40;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-11808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11808);
	// bne cr6,0x82170a60
	if (!cr6.eq) goto loc_82170A60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170A5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-11808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11808);
loc_82170A60:
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

__attribute__((alias("__imp__sub_82170A78"))) PPC_WEAK_FUNC(sub_82170A78);
PPC_FUNC_IMPL(__imp__sub_82170A78) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rldicr r12,r12,61,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170A9C"))) PPC_WEAK_FUNC(sub_82170A9C);
PPC_FUNC_IMPL(__imp__sub_82170A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170AA0"))) PPC_WEAK_FUNC(sub_82170AA0);
PPC_FUNC_IMPL(__imp__sub_82170AA0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82170ac0
	if (cr6.eq) goto loc_82170AC0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82170AC0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170ACC"))) PPC_WEAK_FUNC(sub_82170ACC);
PPC_FUNC_IMPL(__imp__sub_82170ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170AD0"))) PPC_WEAK_FUNC(sub_82170AD0);
PPC_FUNC_IMPL(__imp__sub_82170AD0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82170af0
	if (cr6.eq) goto loc_82170AF0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82170AF0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170AFC"))) PPC_WEAK_FUNC(sub_82170AFC);
PPC_FUNC_IMPL(__imp__sub_82170AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170B00"))) PPC_WEAK_FUNC(sub_82170B00);
PPC_FUNC_IMPL(__imp__sub_82170B00) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82170b20
	if (cr6.eq) goto loc_82170B20;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82170B20:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170B2C"))) PPC_WEAK_FUNC(sub_82170B2C);
PPC_FUNC_IMPL(__imp__sub_82170B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170B30"))) PPC_WEAK_FUNC(sub_82170B30);
PPC_FUNC_IMPL(__imp__sub_82170B30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170B4C"))) PPC_WEAK_FUNC(sub_82170B4C);
PPC_FUNC_IMPL(__imp__sub_82170B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170B50"))) PPC_WEAK_FUNC(sub_82170B50);
PPC_FUNC_IMPL(__imp__sub_82170B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82170B58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82170b90
	if (cr6.lt) goto loc_82170B90;
loc_82170B74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82170B80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82170b74
	if (!cr6.lt) goto loc_82170B74;
loc_82170B90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170B98"))) PPC_WEAK_FUNC(sub_82170B98);
PPC_FUNC_IMPL(__imp__sub_82170B98) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170BA4"))) PPC_WEAK_FUNC(sub_82170BA4);
PPC_FUNC_IMPL(__imp__sub_82170BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170BA8"))) PPC_WEAK_FUNC(sub_82170BA8);
PPC_FUNC_IMPL(__imp__sub_82170BA8) {
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
	// lwz r3,31744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82170cd0
	if (!cr6.eq) goto loc_82170CD0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82170BD8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170c50
	if (cr6.eq) goto loc_82170C50;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r7,r9,-15512
	ctx.r7.s64 = ctx.r9.s64 + -15512;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-4136
	ctx.r6.s64 = ctx.r10.s64 + -4136;
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
	// addi r11,r11,-27472
	ctx.r11.s64 = ctx.r11.s64 + -27472;
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
	// li r5,376
	ctx.r5.s64 = 376;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82170C4C;
	sub_822ED768(ctx, base);
	// b 0x82170c54
	goto loc_82170C54;
loc_82170C50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82170C54:
	// stw r3,31744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31744, ctx.r3.u32);
	// bl 0x822b8ff8
	ctx.lr = 0x82170C5C;
	sub_822B8FF8(ctx, base);
	// lwz r11,31744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31744);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82170c78
	if (cr6.eq) goto loc_82170C78;
	// bl 0x822b8ff8
	ctx.lr = 0x82170C6C;
	sub_822B8FF8(ctx, base);
	// lwz r11,31744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31744);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82170c80
	goto loc_82170C80;
loc_82170C78:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82170C80:
	// bl 0x821beb18
	ctx.lr = 0x82170C84;
	sub_821BEB18(ctx, base);
	// lwz r11,31744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31744);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82170C90;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31744);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170cd0
	if (cr6.eq) goto loc_82170CD0;
	// bl 0x82170ba8
	ctx.lr = 0x82170CB0;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31744);
	// bne cr6,0x82170cd0
	if (!cr6.eq) goto loc_82170CD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170CCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31744);
loc_82170CD0:
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

__attribute__((alias("__imp__sub_82170CE8"))) PPC_WEAK_FUNC(sub_82170CE8);
PPC_FUNC_IMPL(__imp__sub_82170CE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// cmpwi cr6,r10,300
	cr6.compare<int32_t>(ctx.r10.s32, 300, ctx.xer);
	// blt cr6,0x82170d30
	if (cr6.lt) goto loc_82170D30;
	// cmpwi cr6,r10,364
	cr6.compare<int32_t>(ctx.r10.s32, 364, ctx.xer);
	// bge cr6,0x82170d30
	if (!cr6.lt) goto loc_82170D30;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170d30
	if (cr6.eq) goto loc_82170D30;
	// addi r10,r10,-300
	ctx.r10.s64 = ctx.r10.s64 + -300;
	// ld r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 36);
	// li r9,1
	ctx.r9.s64 = 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// li r3,0
	ctx.r3.s64 = 0;
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82170D30:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170D38"))) PPC_WEAK_FUNC(sub_82170D38);
PPC_FUNC_IMPL(__imp__sub_82170D38) {
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
	// lwz r3,32084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32084);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82170e60
	if (!cr6.eq) goto loc_82170E60;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82170D68;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170de0
	if (cr6.eq) goto loc_82170DE0;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,23432
	ctx.r6.s64 = ctx.r10.s64 + 23432;
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
	// addi r11,r11,-14004
	ctx.r11.s64 = ctx.r11.s64 + -14004;
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
	// li r5,1204
	ctx.r5.s64 = 1204;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82170DDC;
	sub_822ED768(ctx, base);
	// b 0x82170de4
	goto loc_82170DE4;
loc_82170DE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82170DE4:
	// stw r3,32084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32084, ctx.r3.u32);
	// bl 0x821a7778
	ctx.lr = 0x82170DEC;
	sub_821A7778(ctx, base);
	// lwz r11,32084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32084);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82170e08
	if (cr6.eq) goto loc_82170E08;
	// bl 0x821a7778
	ctx.lr = 0x82170DFC;
	sub_821A7778(ctx, base);
	// lwz r11,32084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32084);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82170e10
	goto loc_82170E10;
loc_82170E08:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82170E10:
	// bl 0x82170938
	ctx.lr = 0x82170E14;
	sub_82170938(ctx, base);
	// lwz r11,32084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32084);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82170E20;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32084);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170e60
	if (cr6.eq) goto loc_82170E60;
	// bl 0x82170ba8
	ctx.lr = 0x82170E40;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32084);
	// bne cr6,0x82170e60
	if (!cr6.eq) goto loc_82170E60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170E5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32084);
loc_82170E60:
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

__attribute__((alias("__imp__sub_82170E78"))) PPC_WEAK_FUNC(sub_82170E78);
PPC_FUNC_IMPL(__imp__sub_82170E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82170E80;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x82170670
	ctx.lr = 0x82170EA0;
	sub_82170670(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-17856(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17856);
	// bl 0x822aa9b0
	ctx.lr = 0x82170EBC;
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
	ctx.lr = 0x82170ED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170efc
	if (cr6.eq) goto loc_82170EFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x82170EFC;
	sub_82170408(ctx, base);
loc_82170EFC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x82170F04;
	sub_8218C838(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170F0C"))) PPC_WEAK_FUNC(sub_82170F0C);
PPC_FUNC_IMPL(__imp__sub_82170F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170F10"))) PPC_WEAK_FUNC(sub_82170F10);
PPC_FUNC_IMPL(__imp__sub_82170F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82170F18;
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-18792(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18792);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822aa9b0
	ctx.lr = 0x82170F48;
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
	ctx.lr = 0x82170F64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170F70"))) PPC_WEAK_FUNC(sub_82170F70);
PPC_FUNC_IMPL(__imp__sub_82170F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82170F78;
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-17944(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17944);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822aa9b0
	ctx.lr = 0x82170FA8;
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
	ctx.lr = 0x82170FC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170FD0"))) PPC_WEAK_FUNC(sub_82170FD0);
PPC_FUNC_IMPL(__imp__sub_82170FD0) {
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
	// lwz r3,-24376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24376);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821710f4
	if (!cr6.eq) goto loc_821710F4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82171000;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171074
	if (cr6.eq) goto loc_82171074;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,8928
	ctx.r7.s64 = ctx.r10.s64 + 8928;
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
	// addi r11,r11,16740
	ctx.r11.s64 = ctx.r11.s64 + 16740;
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
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82171070;
	sub_822ED768(ctx, base);
	// b 0x82171078
	goto loc_82171078;
loc_82171074:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82171078:
	// stw r3,-24376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24376, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82171080;
	sub_82170938(ctx, base);
	// lwz r11,-24376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24376);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217109c
	if (cr6.eq) goto loc_8217109C;
	// bl 0x82170938
	ctx.lr = 0x82171090;
	sub_82170938(ctx, base);
	// lwz r11,-24376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24376);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821710a4
	goto loc_821710A4;
loc_8217109C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821710A4:
	// bl 0x822989e0
	ctx.lr = 0x821710A8;
	sub_822989E0(ctx, base);
	// lwz r11,-24376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24376);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821710B4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24376);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821710f4
	if (cr6.eq) goto loc_821710F4;
	// bl 0x82170ba8
	ctx.lr = 0x821710D4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24376);
	// bne cr6,0x821710f4
	if (!cr6.eq) goto loc_821710F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821710F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24376);
loc_821710F4:
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

__attribute__((alias("__imp__sub_8217110C"))) PPC_WEAK_FUNC(sub_8217110C);
PPC_FUNC_IMPL(__imp__sub_8217110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171110"))) PPC_WEAK_FUNC(sub_82171110);
PPC_FUNC_IMPL(__imp__sub_82171110) {
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
	// lwz r3,31816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31816);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82171234
	if (!cr6.eq) goto loc_82171234;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82171140;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821711b4
	if (cr6.eq) goto loc_821711B4;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-24696
	ctx.r7.s64 = ctx.r10.s64 + -24696;
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
	// addi r11,r11,-21148
	ctx.r11.s64 = ctx.r11.s64 + -21148;
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
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821711B0;
	sub_822ED768(ctx, base);
	// b 0x821711b8
	goto loc_821711B8;
loc_821711B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821711B8:
	// stw r3,31816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31816, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x821711C0;
	sub_82170938(ctx, base);
	// lwz r11,31816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31816);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821711dc
	if (cr6.eq) goto loc_821711DC;
	// bl 0x82170938
	ctx.lr = 0x821711D0;
	sub_82170938(ctx, base);
	// lwz r11,31816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31816);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821711e4
	goto loc_821711E4;
loc_821711DC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821711E4:
	// bl 0x82170938
	ctx.lr = 0x821711E8;
	sub_82170938(ctx, base);
	// lwz r11,31816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31816);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821711F4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31816);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82171234
	if (cr6.eq) goto loc_82171234;
	// bl 0x82170ba8
	ctx.lr = 0x82171214;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31816);
	// bne cr6,0x82171234
	if (!cr6.eq) goto loc_82171234;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171230;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31816);
loc_82171234:
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

__attribute__((alias("__imp__sub_8217124C"))) PPC_WEAK_FUNC(sub_8217124C);
PPC_FUNC_IMPL(__imp__sub_8217124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171250"))) PPC_WEAK_FUNC(sub_82171250);
PPC_FUNC_IMPL(__imp__sub_82171250) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20008
	ctx.r11.s64 = ctx.r11.s64 + -20008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82171278;
	sub_822A89B8(ctx, base);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8218d2b0
	ctx.lr = 0x8217128C;
	sub_8218D2B0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217129c
	if (cr6.eq) goto loc_8217129C;
	// bl 0x82170268
	ctx.lr = 0x8217129C;
	sub_82170268(ctx, base);
loc_8217129C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x8218ccc8
	ctx.lr = 0x821712B4;
	sub_8218CCC8(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x822c8498
	ctx.lr = 0x821712BC;
	sub_822C8498(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82528098
	ctx.lr = 0x821712C4;
	sub_82528098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x821712CC;
	sub_822A8E90(ctx, base);
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

__attribute__((alias("__imp__sub_821712E4"))) PPC_WEAK_FUNC(sub_821712E4);
PPC_FUNC_IMPL(__imp__sub_821712E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821712E8"))) PPC_WEAK_FUNC(sub_821712E8);
PPC_FUNC_IMPL(__imp__sub_821712E8) {
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
	// bl 0x82171250
	ctx.lr = 0x82171308;
	sub_82171250(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171320
	if (cr6.eq) goto loc_82171320;
	// bl 0x82170268
	ctx.lr = 0x8217131C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171320:
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

__attribute__((alias("__imp__sub_82171338"))) PPC_WEAK_FUNC(sub_82171338);
PPC_FUNC_IMPL(__imp__sub_82171338) {
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
	// lwz r3,-24348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217145c
	if (!cr6.eq) goto loc_8217145C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82171368;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821713dc
	if (cr6.eq) goto loc_821713DC;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,14600
	ctx.r7.s64 = ctx.r10.s64 + 14600;
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
	// addi r11,r11,19360
	ctx.r11.s64 = ctx.r11.s64 + 19360;
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
	// li r5,140
	ctx.r5.s64 = 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821713D8;
	sub_822ED768(ctx, base);
	// b 0x821713e0
	goto loc_821713E0;
loc_821713DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821713E0:
	// stw r3,-24348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24348, ctx.r3.u32);
	// bl 0x82171110
	ctx.lr = 0x821713E8;
	sub_82171110(ctx, base);
	// lwz r11,-24348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24348);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82171404
	if (cr6.eq) goto loc_82171404;
	// bl 0x82171110
	ctx.lr = 0x821713F8;
	sub_82171110(ctx, base);
	// lwz r11,-24348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24348);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8217140c
	goto loc_8217140C;
loc_82171404:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8217140C:
	// bl 0x82170938
	ctx.lr = 0x82171410;
	sub_82170938(ctx, base);
	// lwz r11,-24348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24348);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8217141C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24348);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217145c
	if (cr6.eq) goto loc_8217145C;
	// bl 0x82170ba8
	ctx.lr = 0x8217143C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24348);
	// bne cr6,0x8217145c
	if (!cr6.eq) goto loc_8217145C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171458;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24348);
loc_8217145C:
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

__attribute__((alias("__imp__sub_82171474"))) PPC_WEAK_FUNC(sub_82171474);
PPC_FUNC_IMPL(__imp__sub_82171474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171478"))) PPC_WEAK_FUNC(sub_82171478);
PPC_FUNC_IMPL(__imp__sub_82171478) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19704
	ctx.r11.s64 = ctx.r11.s64 + -19704;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821714A4;
	sub_822A89B8(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82528098
	ctx.lr = 0x821714AC;
	sub_82528098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82171250
	ctx.lr = 0x821714B4;
	sub_82171250(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821714cc
	if (cr6.eq) goto loc_821714CC;
	// bl 0x82170268
	ctx.lr = 0x821714C8;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821714CC:
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

__attribute__((alias("__imp__sub_821714E4"))) PPC_WEAK_FUNC(sub_821714E4);
PPC_FUNC_IMPL(__imp__sub_821714E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821714E8"))) PPC_WEAK_FUNC(sub_821714E8);
PPC_FUNC_IMPL(__imp__sub_821714E8) {
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
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82171530
	if (cr6.eq) goto loc_82171530;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// beq cr6,0x82171530
	if (cr6.eq) goto loc_82171530;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x822f8978
	ctx.lr = 0x82171530;
	sub_822F8978(ctx, base);
loc_82171530:
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

__attribute__((alias("__imp__sub_82171548"))) PPC_WEAK_FUNC(sub_82171548);
PPC_FUNC_IMPL(__imp__sub_82171548) {
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
	// lwz r3,-24428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217166c
	if (!cr6.eq) goto loc_8217166C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82171578;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821715ec
	if (cr6.eq) goto loc_821715EC;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,17792
	ctx.r7.s64 = ctx.r10.s64 + 17792;
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
	// addi r11,r11,6812
	ctx.r11.s64 = ctx.r11.s64 + 6812;
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
	ctx.lr = 0x821715E8;
	sub_822ED768(ctx, base);
	// b 0x821715f0
	goto loc_821715F0;
loc_821715EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821715F0:
	// stw r3,-24428(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24428, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x821715F8;
	sub_82170938(ctx, base);
	// lwz r11,-24428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24428);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82171614
	if (cr6.eq) goto loc_82171614;
	// bl 0x82170938
	ctx.lr = 0x82171608;
	sub_82170938(ctx, base);
	// lwz r11,-24428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24428);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8217161c
	goto loc_8217161C;
loc_82171614:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8217161C:
	// bl 0x82170938
	ctx.lr = 0x82171620;
	sub_82170938(ctx, base);
	// lwz r11,-24428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24428);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8217162C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24428);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217166c
	if (cr6.eq) goto loc_8217166C;
	// bl 0x82170ba8
	ctx.lr = 0x8217164C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24428);
	// bne cr6,0x8217166c
	if (!cr6.eq) goto loc_8217166C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24428);
loc_8217166C:
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

__attribute__((alias("__imp__sub_82171684"))) PPC_WEAK_FUNC(sub_82171684);
PPC_FUNC_IMPL(__imp__sub_82171684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171688"))) PPC_WEAK_FUNC(sub_82171688);
PPC_FUNC_IMPL(__imp__sub_82171688) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19400
	ctx.r11.s64 = ctx.r11.s64 + -19400;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821716AC;
	sub_822A89B8(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8218ce28
	ctx.lr = 0x821716B4;
	sub_8218CE28(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x823810d8
	ctx.lr = 0x821716BC;
	sub_823810D8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8218cd80
	ctx.lr = 0x821716C4;
	sub_8218CD80(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x8218cd80
	ctx.lr = 0x821716CC;
	sub_8218CD80(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82288288
	ctx.lr = 0x821716D4;
	sub_82288288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x821716DC;
	sub_822A8E90(ctx, base);
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

__attribute__((alias("__imp__sub_821716F0"))) PPC_WEAK_FUNC(sub_821716F0);
PPC_FUNC_IMPL(__imp__sub_821716F0) {
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
	// bl 0x82171688
	ctx.lr = 0x82171710;
	sub_82171688(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171728
	if (cr6.eq) goto loc_82171728;
	// bl 0x82170268
	ctx.lr = 0x82171724;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171728:
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

__attribute__((alias("__imp__sub_82171740"))) PPC_WEAK_FUNC(sub_82171740);
PPC_FUNC_IMPL(__imp__sub_82171740) {
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
	// lwz r3,32216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82171864
	if (!cr6.eq) goto loc_82171864;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82171770;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821717e4
	if (cr6.eq) goto loc_821717E4;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-1688
	ctx.r7.s64 = ctx.r10.s64 + -1688;
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
	// addi r11,r11,16368
	ctx.r11.s64 = ctx.r11.s64 + 16368;
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
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821717E0;
	sub_822ED768(ctx, base);
	// b 0x821717e8
	goto loc_821717E8;
loc_821717E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821717E8:
	// stw r3,32216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32216, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x821717F0;
	sub_82170938(ctx, base);
	// lwz r11,32216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32216);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217180c
	if (cr6.eq) goto loc_8217180C;
	// bl 0x82170938
	ctx.lr = 0x82171800;
	sub_82170938(ctx, base);
	// lwz r11,32216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32216);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82171814
	goto loc_82171814;
loc_8217180C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82171814:
	// bl 0x82170938
	ctx.lr = 0x82171818;
	sub_82170938(ctx, base);
	// lwz r11,32216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32216);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82171824;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32216);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82171864
	if (cr6.eq) goto loc_82171864;
	// bl 0x82170ba8
	ctx.lr = 0x82171844;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32216);
	// bne cr6,0x82171864
	if (!cr6.eq) goto loc_82171864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171860;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32216);
loc_82171864:
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

__attribute__((alias("__imp__sub_8217187C"))) PPC_WEAK_FUNC(sub_8217187C);
PPC_FUNC_IMPL(__imp__sub_8217187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171880"))) PPC_WEAK_FUNC(sub_82171880);
PPC_FUNC_IMPL(__imp__sub_82171880) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82171888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18704
	ctx.r11.s64 = ctx.r11.s64 + -18704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821718A0;
	sub_822A89B8(ctx, base);
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821718cc
	if (cr6.eq) goto loc_821718CC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821718CC;
	sub_82170408(ctx, base);
loc_821718CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x821718D4;
	sub_8218C838(ctx, base);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821718fc
	if (cr6.eq) goto loc_821718FC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x821718FC;
	sub_82170408(ctx, base);
loc_821718FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x82171904;
	sub_8218C838(ctx, base);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217192c
	if (cr6.eq) goto loc_8217192C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x8217192C;
	sub_82170408(ctx, base);
loc_8217192C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x82171934;
	sub_8218C838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x8217193C;
	sub_822A8E90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82171944"))) PPC_WEAK_FUNC(sub_82171944);
PPC_FUNC_IMPL(__imp__sub_82171944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171948"))) PPC_WEAK_FUNC(sub_82171948);
PPC_FUNC_IMPL(__imp__sub_82171948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82171954"))) PPC_WEAK_FUNC(sub_82171954);
PPC_FUNC_IMPL(__imp__sub_82171954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171958"))) PPC_WEAK_FUNC(sub_82171958);
PPC_FUNC_IMPL(__imp__sub_82171958) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-31168
	ctx.r4.s64 = ctx.r11.s64 + -31168;
	// bl 0x821704f8
	ctx.lr = 0x82171978;
	sub_821704F8(ctx, base);
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

__attribute__((alias("__imp__sub_82171990"))) PPC_WEAK_FUNC(sub_82171990);
PPC_FUNC_IMPL(__imp__sub_82171990) {
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
	// bl 0x82171880
	ctx.lr = 0x821719B0;
	sub_82171880(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821719c8
	if (cr6.eq) goto loc_821719C8;
	// bl 0x82170268
	ctx.lr = 0x821719C4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821719C8:
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

__attribute__((alias("__imp__sub_821719E0"))) PPC_WEAK_FUNC(sub_821719E0);
PPC_FUNC_IMPL(__imp__sub_821719E0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x821719E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-18448
	ctx.r11.s64 = ctx.r11.s64 + -18448;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82171A00;
	sub_822A89B8(ctx, base);
	// addi r3,r30,172
	ctx.r3.s64 = ctx.r30.s64 + 172;
	// bl 0x8218cf48
	ctx.lr = 0x82171A08;
	sub_8218CF48(ctx, base);
	// addi r28,r30,160
	ctx.r28.s64 = ctx.r30.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8218d530
	ctx.lr = 0x82171A1C;
	sub_8218D530(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171a2c
	if (cr6.eq) goto loc_82171A2C;
	// bl 0x82170268
	ctx.lr = 0x82171A2C;
	sub_82170268(ctx, base);
loc_82171A2C:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,148
	ctx.r29.s64 = ctx.r30.s64 + 148;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8218cee0
	ctx.lr = 0x82171A50;
	sub_8218CEE0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171a60
	if (cr6.eq) goto loc_82171A60;
	// bl 0x82170268
	ctx.lr = 0x82171A60;
	sub_82170268(ctx, base);
loc_82171A60:
	// addi r28,r30,136
	ctx.r28.s64 = ctx.r30.s64 + 136;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8218d430
	ctx.lr = 0x82171A80;
	sub_8218D430(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171a90
	if (cr6.eq) goto loc_82171A90;
	// bl 0x82170268
	ctx.lr = 0x82171A90;
	sub_82170268(ctx, base);
loc_82171A90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// bl 0x82171880
	ctx.lr = 0x82171AA4;
	sub_82171880(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82171AAC"))) PPC_WEAK_FUNC(sub_82171AAC);
PPC_FUNC_IMPL(__imp__sub_82171AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171AB0"))) PPC_WEAK_FUNC(sub_82171AB0);
PPC_FUNC_IMPL(__imp__sub_82171AB0) {
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
	// bl 0x821719e0
	ctx.lr = 0x82171AD0;
	sub_821719E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171ae8
	if (cr6.eq) goto loc_82171AE8;
	// bl 0x82170268
	ctx.lr = 0x82171AE4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171AE8:
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

__attribute__((alias("__imp__sub_82171B00"))) PPC_WEAK_FUNC(sub_82171B00);
PPC_FUNC_IMPL(__imp__sub_82171B00) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18152
	ctx.r11.s64 = ctx.r11.s64 + -18152;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82171B2C;
	sub_822A89B8(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// bl 0x82288288
	ctx.lr = 0x82171B34;
	sub_82288288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821719e0
	ctx.lr = 0x82171B3C;
	sub_821719E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171b54
	if (cr6.eq) goto loc_82171B54;
	// bl 0x82170268
	ctx.lr = 0x82171B50;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171B54:
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

__attribute__((alias("__imp__sub_82171B6C"))) PPC_WEAK_FUNC(sub_82171B6C);
PPC_FUNC_IMPL(__imp__sub_82171B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171B70"))) PPC_WEAK_FUNC(sub_82171B70);
PPC_FUNC_IMPL(__imp__sub_82171B70) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82171B80"))) PPC_WEAK_FUNC(sub_82171B80);
PPC_FUNC_IMPL(__imp__sub_82171B80) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20560
	ctx.r11.s64 = ctx.r11.s64 + -20560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82171BAC;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821719e0
	ctx.lr = 0x82171BB4;
	sub_821719E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171bcc
	if (cr6.eq) goto loc_82171BCC;
	// bl 0x82170268
	ctx.lr = 0x82171BC8;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171BCC:
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

__attribute__((alias("__imp__sub_82171BE4"))) PPC_WEAK_FUNC(sub_82171BE4);
PPC_FUNC_IMPL(__imp__sub_82171BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171BE8"))) PPC_WEAK_FUNC(sub_82171BE8);
PPC_FUNC_IMPL(__imp__sub_82171BE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16464
	ctx.r11.s64 = ctx.r11.s64 + -16464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82171C14;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x82171C1C;
	sub_822A8E90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171c34
	if (cr6.eq) goto loc_82171C34;
	// bl 0x82170268
	ctx.lr = 0x82171C30;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171C34:
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

__attribute__((alias("__imp__sub_82171C4C"))) PPC_WEAK_FUNC(sub_82171C4C);
PPC_FUNC_IMPL(__imp__sub_82171C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171C50"))) PPC_WEAK_FUNC(sub_82171C50);
PPC_FUNC_IMPL(__imp__sub_82171C50) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20784
	ctx.r11.s64 = ctx.r11.s64 + -20784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82171C7C;
	sub_822A89B8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-16464
	ctx.r11.s64 = ctx.r11.s64 + -16464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82171C90;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x82171C98;
	sub_822A8E90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171cb0
	if (cr6.eq) goto loc_82171CB0;
	// bl 0x82170268
	ctx.lr = 0x82171CAC;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171CB0:
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

__attribute__((alias("__imp__sub_82171CC8"))) PPC_WEAK_FUNC(sub_82171CC8);
PPC_FUNC_IMPL(__imp__sub_82171CC8) {
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
	// lwz r3,31764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31764);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82171dec
	if (!cr6.eq) goto loc_82171DEC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82171CF8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171d6c
	if (cr6.eq) goto loc_82171D6C;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-912
	ctx.r7.s64 = ctx.r10.s64 + -912;
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
	// addi r11,r11,-25548
	ctx.r11.s64 = ctx.r11.s64 + -25548;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82171D68;
	sub_822ED768(ctx, base);
	// b 0x82171d70
	goto loc_82171D70;
loc_82171D6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82171D70:
	// stw r3,31764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31764, ctx.r3.u32);
	// bl 0x82265c60
	ctx.lr = 0x82171D78;
	sub_82265C60(ctx, base);
	// lwz r11,31764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31764);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82171d94
	if (cr6.eq) goto loc_82171D94;
	// bl 0x82265c60
	ctx.lr = 0x82171D88;
	sub_82265C60(ctx, base);
	// lwz r11,31764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31764);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82171d9c
	goto loc_82171D9C;
loc_82171D94:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82171D9C:
	// bl 0x82170fd0
	ctx.lr = 0x82171DA0;
	sub_82170FD0(ctx, base);
	// lwz r11,31764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31764);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82171DAC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31764);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82171dec
	if (cr6.eq) goto loc_82171DEC;
	// bl 0x82170ba8
	ctx.lr = 0x82171DCC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31764);
	// bne cr6,0x82171dec
	if (!cr6.eq) goto loc_82171DEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171DE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31764);
loc_82171DEC:
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

__attribute__((alias("__imp__sub_82171E04"))) PPC_WEAK_FUNC(sub_82171E04);
PPC_FUNC_IMPL(__imp__sub_82171E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171E08"))) PPC_WEAK_FUNC(sub_82171E08);
PPC_FUNC_IMPL(__imp__sub_82171E08) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82171E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20248
	ctx.r11.s64 = ctx.r11.s64 + -20248;
	// addi r10,r10,-20024
	ctx.r10.s64 = ctx.r10.s64 + -20024;
	// addi r9,r9,-20020
	ctx.r9.s64 = ctx.r9.s64 + -20020;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82171E40;
	sub_822A89B8(ctx, base);
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82170268
	ctx.lr = 0x82171E4C;
	sub_82170268(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bl 0x823f6d90
	ctx.lr = 0x82171E60;
	sub_823F6D90(ctx, base);
	// addi r29,r31,116
	ctx.r29.s64 = ctx.r31.s64 + 116;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82170268
	ctx.lr = 0x82171E6C;
	sub_82170268(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bl 0x823810d8
	ctx.lr = 0x82171E7C;
	sub_823810D8(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82528098
	ctx.lr = 0x82171E84;
	sub_82528098(ctx, base);
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82171eac
	if (cr6.eq) goto loc_82171EAC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x82171EAC;
	sub_82170408(ctx, base);
loc_82171EAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x82171EB4;
	sub_8218C838(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-3152
	ctx.r11.s64 = ctx.r11.s64 + -3152;
	// addi r10,r10,-20784
	ctx.r10.s64 = ctx.r10.s64 + -20784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82171ED4;
	sub_822A89B8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-16464
	ctx.r11.s64 = ctx.r11.s64 + -16464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82171EE8;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x82171EF0;
	sub_822A8E90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82171EF8"))) PPC_WEAK_FUNC(sub_82171EF8);
PPC_FUNC_IMPL(__imp__sub_82171EF8) {
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
	// bl 0x82171e08
	ctx.lr = 0x82171F18;
	sub_82171E08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171f30
	if (cr6.eq) goto loc_82171F30;
	// bl 0x82170268
	ctx.lr = 0x82171F2C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171F30:
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

__attribute__((alias("__imp__sub_82171F48"))) PPC_WEAK_FUNC(sub_82171F48);
PPC_FUNC_IMPL(__imp__sub_82171F48) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-20784
	ctx.r11.s64 = ctx.r11.s64 + -20784;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82171f7c
	if (!cr6.eq) goto loc_82171F7C;
	// bl 0x822aa458
	ctx.lr = 0x82171F7C;
	sub_822AA458(ctx, base);
loc_82171F7C:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r11,r31,172
	ctx.r11.s64 = ctx.r31.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,24328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r10,-22388
	ctx.r9.s64 = ctx.r10.s64 + -22388;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r8,r10,-3152
	ctx.r8.s64 = ctx.r10.s64 + -3152;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// addi r7,r10,-20248
	ctx.r7.s64 = ctx.r10.s64 + -20248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// addi r6,r10,-20024
	ctx.r6.s64 = ctx.r10.s64 + -20024;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r5,r10,-20020
	ctx.r5.s64 = ctx.r10.s64 + -20020;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stw r5,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// stw r4,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r4.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// oris r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 2147483648;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8217206C"))) PPC_WEAK_FUNC(sub_8217206C);
PPC_FUNC_IMPL(__imp__sub_8217206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172070"))) PPC_WEAK_FUNC(sub_82172070);
PPC_FUNC_IMPL(__imp__sub_82172070) {
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
	// lwz r3,31612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31612);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82172194
	if (!cr6.eq) goto loc_82172194;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821720A0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172114
	if (cr6.eq) goto loc_82172114;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-30328
	ctx.r7.s64 = ctx.r10.s64 + -30328;
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
	// addi r11,r11,25660
	ctx.r11.s64 = ctx.r11.s64 + 25660;
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
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82172110;
	sub_822ED768(ctx, base);
	// b 0x82172118
	goto loc_82172118;
loc_82172114:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82172118:
	// stw r3,31612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31612, ctx.r3.u32);
	// bl 0x822654e8
	ctx.lr = 0x82172120;
	sub_822654E8(ctx, base);
	// lwz r11,31612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31612);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217213c
	if (cr6.eq) goto loc_8217213C;
	// bl 0x822654e8
	ctx.lr = 0x82172130;
	sub_822654E8(ctx, base);
	// lwz r11,31612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31612);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82172144
	goto loc_82172144;
loc_8217213C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82172144:
	// bl 0x82170938
	ctx.lr = 0x82172148;
	sub_82170938(ctx, base);
	// lwz r11,31612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31612);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82172154;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31612);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172194
	if (cr6.eq) goto loc_82172194;
	// bl 0x82170ba8
	ctx.lr = 0x82172174;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31612);
	// bne cr6,0x82172194
	if (!cr6.eq) goto loc_82172194;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31612);
loc_82172194:
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

__attribute__((alias("__imp__sub_821721AC"))) PPC_WEAK_FUNC(sub_821721AC);
PPC_FUNC_IMPL(__imp__sub_821721AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821721B0"))) PPC_WEAK_FUNC(sub_821721B0);
PPC_FUNC_IMPL(__imp__sub_821721B0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19120
	ctx.r11.s64 = ctx.r11.s64 + -19120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821721D4;
	sub_822A89B8(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x821e7e88
	ctx.lr = 0x821721DC;
	sub_821E7E88(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82528098
	ctx.lr = 0x821721E4;
	sub_82528098(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x82288288
	ctx.lr = 0x821721EC;
	sub_82288288(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82288288
	ctx.lr = 0x821721F4;
	sub_82288288(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82288288
	ctx.lr = 0x821721FC;
	sub_82288288(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82288288
	ctx.lr = 0x82172204;
	sub_82288288(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-16464
	ctx.r11.s64 = ctx.r11.s64 + -16464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82172218;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x82172220;
	sub_822A8E90(ctx, base);
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

__attribute__((alias("__imp__sub_82172234"))) PPC_WEAK_FUNC(sub_82172234);
PPC_FUNC_IMPL(__imp__sub_82172234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172238"))) PPC_WEAK_FUNC(sub_82172238);
PPC_FUNC_IMPL(__imp__sub_82172238) {
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
	// bl 0x821721b0
	ctx.lr = 0x82172258;
	sub_821721B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172270
	if (cr6.eq) goto loc_82172270;
	// bl 0x82170268
	ctx.lr = 0x8217226C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82172270:
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

__attribute__((alias("__imp__sub_82172288"))) PPC_WEAK_FUNC(sub_82172288);
PPC_FUNC_IMPL(__imp__sub_82172288) {
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
	// lwz r3,31616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31616);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821723ac
	if (!cr6.eq) goto loc_821723AC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821722B8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217232c
	if (cr6.eq) goto loc_8217232C;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-30304
	ctx.r7.s64 = ctx.r10.s64 + -30304;
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
	// addi r11,r11,25692
	ctx.r11.s64 = ctx.r11.s64 + 25692;
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
	// li r5,592
	ctx.r5.s64 = 592;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82172328;
	sub_822ED768(ctx, base);
	// b 0x82172330
	goto loc_82172330;
loc_8217232C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82172330:
	// stw r3,31616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31616, ctx.r3.u32);
	// bl 0x82172070
	ctx.lr = 0x82172338;
	sub_82172070(ctx, base);
	// lwz r11,31616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31616);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82172354
	if (cr6.eq) goto loc_82172354;
	// bl 0x82172070
	ctx.lr = 0x82172348;
	sub_82172070(ctx, base);
	// lwz r11,31616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31616);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8217235c
	goto loc_8217235C;
loc_82172354:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8217235C:
	// bl 0x82170938
	ctx.lr = 0x82172360;
	sub_82170938(ctx, base);
	// lwz r11,31616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31616);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8217236C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31616);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821723ac
	if (cr6.eq) goto loc_821723AC;
	// bl 0x82170ba8
	ctx.lr = 0x8217238C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31616);
	// bne cr6,0x821723ac
	if (!cr6.eq) goto loc_821723AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821723A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31616);
loc_821723AC:
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

__attribute__((alias("__imp__sub_821723C4"))) PPC_WEAK_FUNC(sub_821723C4);
PPC_FUNC_IMPL(__imp__sub_821723C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821723C8"))) PPC_WEAK_FUNC(sub_821723C8);
PPC_FUNC_IMPL(__imp__sub_821723C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821723E0"))) PPC_WEAK_FUNC(sub_821723E0);
PPC_FUNC_IMPL(__imp__sub_821723E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821723E8"))) PPC_WEAK_FUNC(sub_821723E8);
PPC_FUNC_IMPL(__imp__sub_821723E8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,272
	ctx.r11.s64 = ctx.r4.s64 + 272;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82172400"))) PPC_WEAK_FUNC(sub_82172400);
PPC_FUNC_IMPL(__imp__sub_82172400) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 400);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82172418"))) PPC_WEAK_FUNC(sub_82172418);
PPC_FUNC_IMPL(__imp__sub_82172418) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82172444;
	sub_822A89B8(ctx, base);
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x82528098
	ctx.lr = 0x8217244C;
	sub_82528098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821721b0
	ctx.lr = 0x82172454;
	sub_821721B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217246c
	if (cr6.eq) goto loc_8217246C;
	// bl 0x82170268
	ctx.lr = 0x82172468;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217246C:
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

__attribute__((alias("__imp__sub_82172484"))) PPC_WEAK_FUNC(sub_82172484);
PPC_FUNC_IMPL(__imp__sub_82172484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172488"))) PPC_WEAK_FUNC(sub_82172488);
PPC_FUNC_IMPL(__imp__sub_82172488) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
	// addi r30,r31,432
	ctx.r30.s64 = ctx.r31.s64 + 432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x821724B8;
	sub_82170B98(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r10.u8);
	// stb r10,93(r30)
	PPC_STORE_U8(ctx.r30.u32 + 93, ctx.r10.u8);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821724F0"))) PPC_WEAK_FUNC(sub_821724F0);
PPC_FUNC_IMPL(__imp__sub_821724F0) {
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
	// lwz r3,31688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31688);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82172614
	if (!cr6.eq) goto loc_82172614;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82172520;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172594
	if (cr6.eq) goto loc_82172594;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-30176
	ctx.r7.s64 = ctx.r10.s64 + -30176;
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
	// addi r11,r11,26196
	ctx.r11.s64 = ctx.r11.s64 + 26196;
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
	// li r5,396
	ctx.r5.s64 = 396;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82172590;
	sub_822ED768(ctx, base);
	// b 0x82172598
	goto loc_82172598;
loc_82172594:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82172598:
	// stw r3,31688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31688, ctx.r3.u32);
	// bl 0x82172070
	ctx.lr = 0x821725A0;
	sub_82172070(ctx, base);
	// lwz r11,31688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31688);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821725bc
	if (cr6.eq) goto loc_821725BC;
	// bl 0x82172070
	ctx.lr = 0x821725B0;
	sub_82172070(ctx, base);
	// lwz r11,31688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31688);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821725c4
	goto loc_821725C4;
loc_821725BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821725C4:
	// bl 0x82170938
	ctx.lr = 0x821725C8;
	sub_82170938(ctx, base);
	// lwz r11,31688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31688);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821725D4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31688);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172614
	if (cr6.eq) goto loc_82172614;
	// bl 0x82170ba8
	ctx.lr = 0x821725F4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31688);
	// bne cr6,0x82172614
	if (!cr6.eq) goto loc_82172614;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31688);
loc_82172614:
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

__attribute__((alias("__imp__sub_8217262C"))) PPC_WEAK_FUNC(sub_8217262C);
PPC_FUNC_IMPL(__imp__sub_8217262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172630"))) PPC_WEAK_FUNC(sub_82172630);
PPC_FUNC_IMPL(__imp__sub_82172630) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16256
	ctx.r11.s64 = ctx.r11.s64 + -16256;
	// addi r10,r10,-15828
	ctx.r10.s64 = ctx.r10.s64 + -15828;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82172664;
	sub_822A89B8(ctx, base);
	// addi r30,r31,304
	ctx.r30.s64 = ctx.r31.s64 + 304;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82170268
	ctx.lr = 0x82172670;
	sub_82170268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x8218d598
	ctx.lr = 0x82172684;
	sub_8218D598(ctx, base);
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x82288288
	ctx.lr = 0x8217268C;
	sub_82288288(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82528098
	ctx.lr = 0x82172694;
	sub_82528098(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20820
	ctx.r11.s64 = ctx.r11.s64 + -20820;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// bl 0x821721b0
	ctx.lr = 0x821726A8;
	sub_821721B0(ctx, base);
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

__attribute__((alias("__imp__sub_821726C0"))) PPC_WEAK_FUNC(sub_821726C0);
PPC_FUNC_IMPL(__imp__sub_821726C0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,260
	ctx.r11.s64 = ctx.r4.s64 + 260;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821726D8"))) PPC_WEAK_FUNC(sub_821726D8);
PPC_FUNC_IMPL(__imp__sub_821726D8) {
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
	// addi r4,r4,260
	ctx.r4.s64 = ctx.r4.s64 + 260;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823647f0
	ctx.lr = 0x821726F4;
	sub_823647F0(ctx, base);
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

__attribute__((alias("__imp__sub_8217270C"))) PPC_WEAK_FUNC(sub_8217270C);
PPC_FUNC_IMPL(__imp__sub_8217270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172710"))) PPC_WEAK_FUNC(sub_82172710);
PPC_FUNC_IMPL(__imp__sub_82172710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,2,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82172724"))) PPC_WEAK_FUNC(sub_82172724);
PPC_FUNC_IMPL(__imp__sub_82172724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172728"))) PPC_WEAK_FUNC(sub_82172728);
PPC_FUNC_IMPL(__imp__sub_82172728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82172738"))) PPC_WEAK_FUNC(sub_82172738);
PPC_FUNC_IMPL(__imp__sub_82172738) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82172750
	if (!cr6.eq) goto loc_82172750;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82172754
	if (cr6.eq) goto loc_82172754;
loc_82172750:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82172754:
	// rlwimi r11,r10,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// bne cr6,0x82172774
	if (!cr6.eq) goto loc_82172774;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82172778
	if (cr6.eq) goto loc_82172778;
loc_82172774:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82172778:
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// bne cr6,0x82172798
	if (!cr6.eq) goto loc_82172798;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8217279c
	if (cr6.eq) goto loc_8217279C;
loc_82172798:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8217279C:
	// rlwimi r11,r10,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// bne cr6,0x821727bc
	if (!cr6.eq) goto loc_821727BC;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x821727c0
	if (cr6.eq) goto loc_821727C0;
loc_821727BC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_821727C0:
	// rlwimi r11,r10,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821727CC"))) PPC_WEAK_FUNC(sub_821727CC);
PPC_FUNC_IMPL(__imp__sub_821727CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821727D0"))) PPC_WEAK_FUNC(sub_821727D0);
PPC_FUNC_IMPL(__imp__sub_821727D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821727E0"))) PPC_WEAK_FUNC(sub_821727E0);
PPC_FUNC_IMPL(__imp__sub_821727E0) {
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
	// bl 0x82172630
	ctx.lr = 0x82172800;
	sub_82172630(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172818
	if (cr6.eq) goto loc_82172818;
	// bl 0x82170268
	ctx.lr = 0x82172814;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82172818:
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

__attribute__((alias("__imp__sub_82172830"))) PPC_WEAK_FUNC(sub_82172830);
PPC_FUNC_IMPL(__imp__sub_82172830) {
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
	// lwz r3,31796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31796);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82172954
	if (!cr6.eq) goto loc_82172954;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82172860;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821728d4
	if (cr6.eq) goto loc_821728D4;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7792
	ctx.r7.s64 = ctx.r10.s64 + 7792;
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
	// addi r11,r11,-23892
	ctx.r11.s64 = ctx.r11.s64 + -23892;
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
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821728D0;
	sub_822ED768(ctx, base);
	// b 0x821728d8
	goto loc_821728D8;
loc_821728D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821728D8:
	// stw r3,31796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31796, ctx.r3.u32);
	// bl 0x82269c78
	ctx.lr = 0x821728E0;
	sub_82269C78(ctx, base);
	// lwz r11,31796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31796);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821728fc
	if (cr6.eq) goto loc_821728FC;
	// bl 0x82269c78
	ctx.lr = 0x821728F0;
	sub_82269C78(ctx, base);
	// lwz r11,31796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31796);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82172904
	goto loc_82172904;
loc_821728FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82172904:
	// bl 0x82170938
	ctx.lr = 0x82172908;
	sub_82170938(ctx, base);
	// lwz r11,31796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31796);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82172914;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31796);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172954
	if (cr6.eq) goto loc_82172954;
	// bl 0x82170ba8
	ctx.lr = 0x82172934;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31796);
	// bne cr6,0x82172954
	if (!cr6.eq) goto loc_82172954;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31796);
loc_82172954:
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

__attribute__((alias("__imp__sub_8217296C"))) PPC_WEAK_FUNC(sub_8217296C);
PPC_FUNC_IMPL(__imp__sub_8217296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172970"))) PPC_WEAK_FUNC(sub_82172970);
PPC_FUNC_IMPL(__imp__sub_82172970) {
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
	// lwz r3,31792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31792);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82172a94
	if (!cr6.eq) goto loc_82172A94;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821729A0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172a14
	if (cr6.eq) goto loc_82172A14;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7952
	ctx.r7.s64 = ctx.r10.s64 + 7952;
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
	// addi r11,r11,-23928
	ctx.r11.s64 = ctx.r11.s64 + -23928;
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
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82172A10;
	sub_822ED768(ctx, base);
	// b 0x82172a18
	goto loc_82172A18;
loc_82172A14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82172A18:
	// stw r3,31792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31792, ctx.r3.u32);
	// bl 0x82269c78
	ctx.lr = 0x82172A20;
	sub_82269C78(ctx, base);
	// lwz r11,31792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31792);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82172a3c
	if (cr6.eq) goto loc_82172A3C;
	// bl 0x82269c78
	ctx.lr = 0x82172A30;
	sub_82269C78(ctx, base);
	// lwz r11,31792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31792);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82172a44
	goto loc_82172A44;
loc_82172A3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82172A44:
	// bl 0x82170938
	ctx.lr = 0x82172A48;
	sub_82170938(ctx, base);
	// lwz r11,31792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31792);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82172A54;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31792);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172a94
	if (cr6.eq) goto loc_82172A94;
	// bl 0x82170ba8
	ctx.lr = 0x82172A74;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31792);
	// bne cr6,0x82172a94
	if (!cr6.eq) goto loc_82172A94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172A90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31792);
loc_82172A94:
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

__attribute__((alias("__imp__sub_82172AAC"))) PPC_WEAK_FUNC(sub_82172AAC);
PPC_FUNC_IMPL(__imp__sub_82172AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172AB0"))) PPC_WEAK_FUNC(sub_82172AB0);
PPC_FUNC_IMPL(__imp__sub_82172AB0) {
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
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82288288
	ctx.lr = 0x82172ACC;
	sub_82288288(ctx, base);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82172af8
	if (cr6.eq) goto loc_82172AF8;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x82172AF8;
	sub_82170408(ctx, base);
loc_82172AF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82172B00;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82172B14"))) PPC_WEAK_FUNC(sub_82172B14);
PPC_FUNC_IMPL(__imp__sub_82172B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172B18"))) PPC_WEAK_FUNC(sub_82172B18);
PPC_FUNC_IMPL(__imp__sub_82172B18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15240
	ctx.r11.s64 = ctx.r11.s64 + -15240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82172B3C;
	sub_822A89B8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x823810d8
	ctx.lr = 0x82172B44;
	sub_823810D8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-16464
	ctx.r11.s64 = ctx.r11.s64 + -16464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82172B58;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x82172B60;
	sub_822A8E90(ctx, base);
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

__attribute__((alias("__imp__sub_82172B74"))) PPC_WEAK_FUNC(sub_82172B74);
PPC_FUNC_IMPL(__imp__sub_82172B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172B78"))) PPC_WEAK_FUNC(sub_82172B78);
PPC_FUNC_IMPL(__imp__sub_82172B78) {
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
	// bl 0x82172b18
	ctx.lr = 0x82172B98;
	sub_82172B18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172bb0
	if (cr6.eq) goto loc_82172BB0;
	// bl 0x82170268
	ctx.lr = 0x82172BAC;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82172BB0:
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

__attribute__((alias("__imp__sub_82172BC8"))) PPC_WEAK_FUNC(sub_82172BC8);
PPC_FUNC_IMPL(__imp__sub_82172BC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82172BD8"))) PPC_WEAK_FUNC(sub_82172BD8);
PPC_FUNC_IMPL(__imp__sub_82172BD8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,88
	ctx.r11.s64 = ctx.r4.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82172BF0"))) PPC_WEAK_FUNC(sub_82172BF0);
PPC_FUNC_IMPL(__imp__sub_82172BF0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16736
	ctx.r11.s64 = ctx.r11.s64 + -16736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82172C1C;
	sub_822A89B8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823810d8
	ctx.lr = 0x82172C24;
	sub_823810D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172b18
	ctx.lr = 0x82172C2C;
	sub_82172B18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172c44
	if (cr6.eq) goto loc_82172C44;
	// bl 0x82170268
	ctx.lr = 0x82172C40;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82172C44:
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

__attribute__((alias("__imp__sub_82172C5C"))) PPC_WEAK_FUNC(sub_82172C5C);
PPC_FUNC_IMPL(__imp__sub_82172C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172C60"))) PPC_WEAK_FUNC(sub_82172C60);
PPC_FUNC_IMPL(__imp__sub_82172C60) {
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
	// lwz r3,31440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31440);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82172d88
	if (!cr6.eq) goto loc_82172D88;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82172C90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172d08
	if (cr6.eq) goto loc_82172D08;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-18784
	ctx.r6.s64 = ctx.r10.s64 + -18784;
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,14780
	ctx.r11.s64 = ctx.r11.s64 + 14780;
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
	// li r5,156
	ctx.r5.s64 = 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82172D04;
	sub_822ED768(ctx, base);
	// b 0x82172d0c
	goto loc_82172D0C;
loc_82172D08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82172D0C:
	// stw r3,31440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31440, ctx.r3.u32);
	// bl 0x821b7b18
	ctx.lr = 0x82172D14;
	sub_821B7B18(ctx, base);
	// lwz r11,31440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31440);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82172d30
	if (cr6.eq) goto loc_82172D30;
	// bl 0x821b7b18
	ctx.lr = 0x82172D24;
	sub_821B7B18(ctx, base);
	// lwz r11,31440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31440);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82172d38
	goto loc_82172D38;
loc_82172D30:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82172D38:
	// bl 0x82170938
	ctx.lr = 0x82172D3C;
	sub_82170938(ctx, base);
	// lwz r11,31440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31440);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82172D48;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31440);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172d88
	if (cr6.eq) goto loc_82172D88;
	// bl 0x82170ba8
	ctx.lr = 0x82172D68;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31440);
	// bne cr6,0x82172d88
	if (!cr6.eq) goto loc_82172D88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172D84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31440);
loc_82172D88:
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

__attribute__((alias("__imp__sub_82172DA0"))) PPC_WEAK_FUNC(sub_82172DA0);
PPC_FUNC_IMPL(__imp__sub_82172DA0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82172DA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15000
	ctx.r11.s64 = ctx.r11.s64 + -15000;
	// addi r10,r10,-14728
	ctx.r10.s64 = ctx.r10.s64 + -14728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82172DCC;
	sub_822A89B8(ctx, base);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82170268
	ctx.lr = 0x82172DD8;
	sub_82170268(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// bl 0x821e8100
	ctx.lr = 0x82172DEC;
	sub_821E8100(ctx, base);
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8218d620
	ctx.lr = 0x82172E00;
	sub_8218D620(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172e10
	if (cr6.eq) goto loc_82172E10;
	// bl 0x82170268
	ctx.lr = 0x82172E10;
	sub_82170268(ctx, base);
loc_82172E10:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r11,r11,-16736
	ctx.r11.s64 = ctx.r11.s64 + -16736;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82172E30;
	sub_822A89B8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823810d8
	ctx.lr = 0x82172E38;
	sub_823810D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172b18
	ctx.lr = 0x82172E40;
	sub_82172B18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82172E48"))) PPC_WEAK_FUNC(sub_82172E48);
PPC_FUNC_IMPL(__imp__sub_82172E48) {
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
	// bl 0x82172da0
	ctx.lr = 0x82172E68;
	sub_82172DA0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172e80
	if (cr6.eq) goto loc_82172E80;
	// bl 0x82170268
	ctx.lr = 0x82172E7C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82172E80:
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

__attribute__((alias("__imp__sub_82172E98"))) PPC_WEAK_FUNC(sub_82172E98);
PPC_FUNC_IMPL(__imp__sub_82172E98) {
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
	// lwz r3,31580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31580);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82172fbc
	if (!cr6.eq) goto loc_82172FBC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82172EC8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172f3c
	if (cr6.eq) goto loc_82172F3C;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-17800
	ctx.r7.s64 = ctx.r10.s64 + -17800;
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
	// addi r11,r11,16832
	ctx.r11.s64 = ctx.r11.s64 + 16832;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82172F38;
	sub_822ED768(ctx, base);
	// b 0x82172f40
	goto loc_82172F40;
loc_82172F3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82172F40:
	// stw r3,31580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31580, ctx.r3.u32);
	// bl 0x821b7b18
	ctx.lr = 0x82172F48;
	sub_821B7B18(ctx, base);
	// lwz r11,31580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31580);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82172f64
	if (cr6.eq) goto loc_82172F64;
	// bl 0x821b7b18
	ctx.lr = 0x82172F58;
	sub_821B7B18(ctx, base);
	// lwz r11,31580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31580);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82172f6c
	goto loc_82172F6C;
loc_82172F64:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82172F6C:
	// bl 0x82170938
	ctx.lr = 0x82172F70;
	sub_82170938(ctx, base);
	// lwz r11,31580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31580);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82172F7C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31580);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172fbc
	if (cr6.eq) goto loc_82172FBC;
	// bl 0x82170ba8
	ctx.lr = 0x82172F9C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31580);
	// bne cr6,0x82172fbc
	if (!cr6.eq) goto loc_82172FBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172FB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31580);
loc_82172FBC:
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

__attribute__((alias("__imp__sub_82172FD4"))) PPC_WEAK_FUNC(sub_82172FD4);
PPC_FUNC_IMPL(__imp__sub_82172FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172FD8"))) PPC_WEAK_FUNC(sub_82172FD8);
PPC_FUNC_IMPL(__imp__sub_82172FD8) {
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
	// lwz r3,31604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31604);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821730fc
	if (!cr6.eq) goto loc_821730FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82173008;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217307c
	if (cr6.eq) goto loc_8217307C;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-17664
	ctx.r7.s64 = ctx.r10.s64 + -17664;
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
	// addi r11,r11,17412
	ctx.r11.s64 = ctx.r11.s64 + 17412;
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
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82173078;
	sub_822ED768(ctx, base);
	// b 0x82173080
	goto loc_82173080;
loc_8217307C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82173080:
	// stw r3,31604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31604, ctx.r3.u32);
	// bl 0x821b7b18
	ctx.lr = 0x82173088;
	sub_821B7B18(ctx, base);
	// lwz r11,31604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31604);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821730a4
	if (cr6.eq) goto loc_821730A4;
	// bl 0x821b7b18
	ctx.lr = 0x82173098;
	sub_821B7B18(ctx, base);
	// lwz r11,31604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31604);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821730ac
	goto loc_821730AC;
loc_821730A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821730AC:
	// bl 0x82170938
	ctx.lr = 0x821730B0;
	sub_82170938(ctx, base);
	// lwz r11,31604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31604);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821730BC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31604);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821730fc
	if (cr6.eq) goto loc_821730FC;
	// bl 0x82170ba8
	ctx.lr = 0x821730DC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31604);
	// bne cr6,0x821730fc
	if (!cr6.eq) goto loc_821730FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821730F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31604);
loc_821730FC:
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

__attribute__((alias("__imp__sub_82173114"))) PPC_WEAK_FUNC(sub_82173114);
PPC_FUNC_IMPL(__imp__sub_82173114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173118"))) PPC_WEAK_FUNC(sub_82173118);
PPC_FUNC_IMPL(__imp__sub_82173118) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14432
	ctx.r11.s64 = ctx.r11.s64 + -14432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8217313C;
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
	ctx.lr = 0x82173150;
	sub_822A89B8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823810d8
	ctx.lr = 0x82173158;
	sub_823810D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172b18
	ctx.lr = 0x82173160;
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

__attribute__((alias("__imp__sub_82173174"))) PPC_WEAK_FUNC(sub_82173174);
PPC_FUNC_IMPL(__imp__sub_82173174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173178"))) PPC_WEAK_FUNC(sub_82173178);
PPC_FUNC_IMPL(__imp__sub_82173178) {
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
	// bl 0x82173118
	ctx.lr = 0x82173198;
	sub_82173118(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821731b0
	if (cr6.eq) goto loc_821731B0;
	// bl 0x82170268
	ctx.lr = 0x821731AC;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821731B0:
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

__attribute__((alias("__imp__sub_821731C8"))) PPC_WEAK_FUNC(sub_821731C8);
PPC_FUNC_IMPL(__imp__sub_821731C8) {
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
	// lwz r3,31600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31600);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821732f0
	if (!cr6.eq) goto loc_821732F0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821731F8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173270
	if (cr6.eq) goto loc_82173270;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-17344
	ctx.r6.s64 = ctx.r10.s64 + -17344;
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,17320
	ctx.r11.s64 = ctx.r11.s64 + 17320;
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
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8217326C;
	sub_822ED768(ctx, base);
	// b 0x82173274
	goto loc_82173274;
loc_82173270:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82173274:
	// stw r3,31600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31600, ctx.r3.u32);
	// bl 0x8226d7c8
	ctx.lr = 0x8217327C;
	sub_8226D7C8(ctx, base);
	// lwz r11,31600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31600);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82173298
	if (cr6.eq) goto loc_82173298;
	// bl 0x8226d7c8
	ctx.lr = 0x8217328C;
	sub_8226D7C8(ctx, base);
	// lwz r11,31600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31600);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821732a0
	goto loc_821732A0;
loc_82173298:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821732A0:
	// bl 0x82170938
	ctx.lr = 0x821732A4;
	sub_82170938(ctx, base);
	// lwz r11,31600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31600);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821732B0;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31600);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821732f0
	if (cr6.eq) goto loc_821732F0;
	// bl 0x82170ba8
	ctx.lr = 0x821732D0;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31600);
	// bne cr6,0x821732f0
	if (!cr6.eq) goto loc_821732F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821732EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31600);
loc_821732F0:
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

__attribute__((alias("__imp__sub_82173308"))) PPC_WEAK_FUNC(sub_82173308);
PPC_FUNC_IMPL(__imp__sub_82173308) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14160
	ctx.r11.s64 = ctx.r11.s64 + -14160;
	// addi r10,r10,-13888
	ctx.r10.s64 = ctx.r10.s64 + -13888;
	// addi r9,r9,-13860
	ctx.r9.s64 = ctx.r9.s64 + -13860;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82173344;
	sub_822A89B8(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82288288
	ctx.lr = 0x8217334C;
	sub_82288288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82173118
	ctx.lr = 0x82173354;
	sub_82173118(ctx, base);
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

__attribute__((alias("__imp__sub_82173368"))) PPC_WEAK_FUNC(sub_82173368);
PPC_FUNC_IMPL(__imp__sub_82173368) {
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
	// bl 0x82173308
	ctx.lr = 0x82173388;
	sub_82173308(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821733a0
	if (cr6.eq) goto loc_821733A0;
	// bl 0x82170268
	ctx.lr = 0x8217339C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821733A0:
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

__attribute__((alias("__imp__sub_821733B8"))) PPC_WEAK_FUNC(sub_821733B8);
PPC_FUNC_IMPL(__imp__sub_821733B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x821733C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32064
	ctx.r9.s64 = -2101346304;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-16564(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16564);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x822aa9b0
	ctx.lr = 0x821733F8;
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
	ctx.lr = 0x82173414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173420"))) PPC_WEAK_FUNC(sub_82173420);
PPC_FUNC_IMPL(__imp__sub_82173420) {
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
	// lwz r3,31560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31560);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82173548
	if (!cr6.eq) goto loc_82173548;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82173450;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821734c8
	if (cr6.eq) goto loc_821734C8;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-17256
	ctx.r6.s64 = ctx.r10.s64 + -17256;
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,16496
	ctx.r11.s64 = ctx.r11.s64 + 16496;
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
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821734C4;
	sub_822ED768(ctx, base);
	// b 0x821734cc
	goto loc_821734CC;
loc_821734C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821734CC:
	// stw r3,31560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31560, ctx.r3.u32);
	// bl 0x8226d7c8
	ctx.lr = 0x821734D4;
	sub_8226D7C8(ctx, base);
	// lwz r11,31560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31560);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821734f0
	if (cr6.eq) goto loc_821734F0;
	// bl 0x8226d7c8
	ctx.lr = 0x821734E4;
	sub_8226D7C8(ctx, base);
	// lwz r11,31560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31560);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821734f8
	goto loc_821734F8;
loc_821734F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821734F8:
	// bl 0x82170938
	ctx.lr = 0x821734FC;
	sub_82170938(ctx, base);
	// lwz r11,31560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31560);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82173508;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31560);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82173548
	if (cr6.eq) goto loc_82173548;
	// bl 0x82170ba8
	ctx.lr = 0x82173528;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31560);
	// bne cr6,0x82173548
	if (!cr6.eq) goto loc_82173548;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31560);
loc_82173548:
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

__attribute__((alias("__imp__sub_82173560"))) PPC_WEAK_FUNC(sub_82173560);
PPC_FUNC_IMPL(__imp__sub_82173560) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13592
	ctx.r11.s64 = ctx.r11.s64 + -13592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8217358C;
	sub_822A89B8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82288288
	ctx.lr = 0x82173594;
	sub_82288288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172b18
	ctx.lr = 0x8217359C;
	sub_82172B18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821735b4
	if (cr6.eq) goto loc_821735B4;
	// bl 0x82170268
	ctx.lr = 0x821735B0;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821735B4:
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

__attribute__((alias("__imp__sub_821735CC"))) PPC_WEAK_FUNC(sub_821735CC);
PPC_FUNC_IMPL(__imp__sub_821735CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821735D0"))) PPC_WEAK_FUNC(sub_821735D0);
PPC_FUNC_IMPL(__imp__sub_821735D0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13344
	ctx.r11.s64 = ctx.r11.s64 + -13344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821735F4;
	sub_822A89B8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-13592
	ctx.r11.s64 = ctx.r11.s64 + -13592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82173608;
	sub_822A89B8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82288288
	ctx.lr = 0x82173610;
	sub_82288288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172b18
	ctx.lr = 0x82173618;
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

__attribute__((alias("__imp__sub_8217362C"))) PPC_WEAK_FUNC(sub_8217362C);
PPC_FUNC_IMPL(__imp__sub_8217362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173630"))) PPC_WEAK_FUNC(sub_82173630);
PPC_FUNC_IMPL(__imp__sub_82173630) {
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
	// bl 0x821735d0
	ctx.lr = 0x82173650;
	sub_821735D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173668
	if (cr6.eq) goto loc_82173668;
	// bl 0x82170268
	ctx.lr = 0x82173664;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82173668:
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

__attribute__((alias("__imp__sub_82173680"))) PPC_WEAK_FUNC(sub_82173680);
PPC_FUNC_IMPL(__imp__sub_82173680) {
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
	// lwz r3,31564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821737a4
	if (!cr6.eq) goto loc_821737A4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821736B0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173724
	if (cr6.eq) goto loc_82173724;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-15144
	ctx.r7.s64 = ctx.r10.s64 + -15144;
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
	// addi r11,r11,16560
	ctx.r11.s64 = ctx.r11.s64 + 16560;
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
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82173720;
	sub_822ED768(ctx, base);
	// b 0x82173728
	goto loc_82173728;
loc_82173724:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82173728:
	// stw r3,31564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31564, ctx.r3.u32);
	// bl 0x8226ecc8
	ctx.lr = 0x82173730;
	sub_8226ECC8(ctx, base);
	// lwz r11,31564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31564);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217374c
	if (cr6.eq) goto loc_8217374C;
	// bl 0x8226ecc8
	ctx.lr = 0x82173740;
	sub_8226ECC8(ctx, base);
	// lwz r11,31564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31564);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82173754
	goto loc_82173754;
loc_8217374C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82173754:
	// bl 0x82170938
	ctx.lr = 0x82173758;
	sub_82170938(ctx, base);
	// lwz r11,31564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31564);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82173764;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31564);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821737a4
	if (cr6.eq) goto loc_821737A4;
	// bl 0x82170ba8
	ctx.lr = 0x82173784;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31564);
	// bne cr6,0x821737a4
	if (!cr6.eq) goto loc_821737A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821737A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31564);
loc_821737A4:
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

__attribute__((alias("__imp__sub_821737BC"))) PPC_WEAK_FUNC(sub_821737BC);
PPC_FUNC_IMPL(__imp__sub_821737BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821737C0"))) PPC_WEAK_FUNC(sub_821737C0);
PPC_FUNC_IMPL(__imp__sub_821737C0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13840
	ctx.r11.s64 = ctx.r11.s64 + -13840;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821737EC;
	sub_822A89B8(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x821e8100
	ctx.lr = 0x821737F4;
	sub_821E8100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821735d0
	ctx.lr = 0x821737FC;
	sub_821735D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173814
	if (cr6.eq) goto loc_82173814;
	// bl 0x82170268
	ctx.lr = 0x82173810;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82173814:
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

__attribute__((alias("__imp__sub_8217382C"))) PPC_WEAK_FUNC(sub_8217382C);
PPC_FUNC_IMPL(__imp__sub_8217382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173830"))) PPC_WEAK_FUNC(sub_82173830);
PPC_FUNC_IMPL(__imp__sub_82173830) {
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
	// lwz r3,31492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31492);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82173954
	if (!cr6.eq) goto loc_82173954;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82173860;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821738d4
	if (cr6.eq) goto loc_821738D4;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-15120
	ctx.r7.s64 = ctx.r10.s64 + -15120;
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
	// addi r11,r11,15372
	ctx.r11.s64 = ctx.r11.s64 + 15372;
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
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821738D0;
	sub_822ED768(ctx, base);
	// b 0x821738d8
	goto loc_821738D8;
loc_821738D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821738D8:
	// stw r3,31492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31492, ctx.r3.u32);
	// bl 0x8226ea28
	ctx.lr = 0x821738E0;
	sub_8226EA28(ctx, base);
	// lwz r11,31492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31492);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821738fc
	if (cr6.eq) goto loc_821738FC;
	// bl 0x8226ea28
	ctx.lr = 0x821738F0;
	sub_8226EA28(ctx, base);
	// lwz r11,31492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31492);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82173904
	goto loc_82173904;
loc_821738FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82173904:
	// bl 0x82170938
	ctx.lr = 0x82173908;
	sub_82170938(ctx, base);
	// lwz r11,31492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31492);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82173914;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31492);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82173954
	if (cr6.eq) goto loc_82173954;
	// bl 0x82170ba8
	ctx.lr = 0x82173934;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31492);
	// bne cr6,0x82173954
	if (!cr6.eq) goto loc_82173954;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31492);
loc_82173954:
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

__attribute__((alias("__imp__sub_8217396C"))) PPC_WEAK_FUNC(sub_8217396C);
PPC_FUNC_IMPL(__imp__sub_8217396C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173970"))) PPC_WEAK_FUNC(sub_82173970);
PPC_FUNC_IMPL(__imp__sub_82173970) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14696
	ctx.r11.s64 = ctx.r11.s64 + -14696;
	// addi r10,r10,-14452
	ctx.r10.s64 = ctx.r10.s64 + -14452;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821739A0;
	sub_822A89B8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-13592
	ctx.r11.s64 = ctx.r11.s64 + -13592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821739B4;
	sub_822A89B8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82288288
	ctx.lr = 0x821739BC;
	sub_82288288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172b18
	ctx.lr = 0x821739C4;
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

__attribute__((alias("__imp__sub_821739D8"))) PPC_WEAK_FUNC(sub_821739D8);
PPC_FUNC_IMPL(__imp__sub_821739D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-100
	ctx.r3.s64 = ctx.r3.s64 + -100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821739E0"))) PPC_WEAK_FUNC(sub_821739E0);
PPC_FUNC_IMPL(__imp__sub_821739E0) {
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
	// bl 0x82173970
	ctx.lr = 0x82173A00;
	sub_82173970(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173a18
	if (cr6.eq) goto loc_82173A18;
	// bl 0x82170268
	ctx.lr = 0x82173A14;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82173A18:
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

__attribute__((alias("__imp__sub_82173A30"))) PPC_WEAK_FUNC(sub_82173A30);
PPC_FUNC_IMPL(__imp__sub_82173A30) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13096
	ctx.r11.s64 = ctx.r11.s64 + -13096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82173A54;
	sub_822A89B8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82173A68;
	sub_822A89B8(ctx, base);
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x82528098
	ctx.lr = 0x82173A70;
	sub_82528098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821721b0
	ctx.lr = 0x82173A78;
	sub_821721B0(ctx, base);
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

__attribute__((alias("__imp__sub_82173A8C"))) PPC_WEAK_FUNC(sub_82173A8C);
PPC_FUNC_IMPL(__imp__sub_82173A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173A90"))) PPC_WEAK_FUNC(sub_82173A90);
PPC_FUNC_IMPL(__imp__sub_82173A90) {
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
	// bl 0x82173a30
	ctx.lr = 0x82173AB0;
	sub_82173A30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173ac8
	if (cr6.eq) goto loc_82173AC8;
	// bl 0x82170268
	ctx.lr = 0x82173AC4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82173AC8:
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

__attribute__((alias("__imp__sub_82173AE0"))) PPC_WEAK_FUNC(sub_82173AE0);
PPC_FUNC_IMPL(__imp__sub_82173AE0) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82173b1c
	if (cr6.eq) goto loc_82173B1C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170408
	ctx.lr = 0x82173B1C;
	sub_82170408(ctx, base);
loc_82173B1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c838
	ctx.lr = 0x82173B24;
	sub_8218C838(ctx, base);
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

__attribute__((alias("__imp__sub_82173B38"))) PPC_WEAK_FUNC(sub_82173B38);
PPC_FUNC_IMPL(__imp__sub_82173B38) {
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
	// lwz r3,31632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31632);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82173c5c
	if (!cr6.eq) goto loc_82173C5C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82173B68;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173bdc
	if (cr6.eq) goto loc_82173BDC;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-29088
	ctx.r7.s64 = ctx.r10.s64 + -29088;
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
	// addi r11,r11,25788
	ctx.r11.s64 = ctx.r11.s64 + 25788;
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
	// li r5,688
	ctx.r5.s64 = 688;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82173BD8;
	sub_822ED768(ctx, base);
	// b 0x82173be0
	goto loc_82173BE0;
loc_82173BDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82173BE0:
	// stw r3,31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31632, ctx.r3.u32);
	// bl 0x82270680
	ctx.lr = 0x82173BE8;
	sub_82270680(ctx, base);
	// lwz r11,31632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31632);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82173c04
	if (cr6.eq) goto loc_82173C04;
	// bl 0x82270680
	ctx.lr = 0x82173BF8;
	sub_82270680(ctx, base);
	// lwz r11,31632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31632);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82173c0c
	goto loc_82173C0C;
loc_82173C04:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82173C0C:
	// bl 0x82170938
	ctx.lr = 0x82173C10;
	sub_82170938(ctx, base);
	// lwz r11,31632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31632);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82173C1C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31632);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82173c5c
	if (cr6.eq) goto loc_82173C5C;
	// bl 0x82170ba8
	ctx.lr = 0x82173C3C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31632);
	// bne cr6,0x82173c5c
	if (!cr6.eq) goto loc_82173C5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173C58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31632);
loc_82173C5C:
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

__attribute__((alias("__imp__sub_82173C74"))) PPC_WEAK_FUNC(sub_82173C74);
PPC_FUNC_IMPL(__imp__sub_82173C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173C78"))) PPC_WEAK_FUNC(sub_82173C78);
PPC_FUNC_IMPL(__imp__sub_82173C78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-12608
	ctx.r11.s64 = ctx.r11.s64 + -12608;
	// addi r10,r10,-12112
	ctx.r10.s64 = ctx.r10.s64 + -12112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82173CB0;
	sub_822A89B8(ctx, base);
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// bl 0x82173ae0
	ctx.lr = 0x82173CB8;
	sub_82173AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82173a30
	ctx.lr = 0x82173CC0;
	sub_82173A30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173cd8
	if (cr6.eq) goto loc_82173CD8;
	// bl 0x82170268
	ctx.lr = 0x82173CD4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82173CD8:
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

__attribute__((alias("__imp__sub_82173CF0"))) PPC_WEAK_FUNC(sub_82173CF0);
PPC_FUNC_IMPL(__imp__sub_82173CF0) {
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
	// bl 0x82172488
	ctx.lr = 0x82173D08;
	sub_82172488(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r11,r11,26988
	ctx.r11.s64 = ctx.r11.s64 + 26988;
	// addi r10,r10,-12608
	ctx.r10.s64 = ctx.r10.s64 + -12608;
	// addi r9,r9,-12112
	ctx.r9.s64 = ctx.r9.s64 + -12112;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r9.u32);
	// stw r8,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r8.u32);
	// stw r8,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82173D50"))) PPC_WEAK_FUNC(sub_82173D50);
PPC_FUNC_IMPL(__imp__sub_82173D50) {
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
	// lwz r3,31656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31656);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82173e74
	if (!cr6.eq) goto loc_82173E74;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82173D80;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173df4
	if (cr6.eq) goto loc_82173DF4;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-28736
	ctx.r7.s64 = ctx.r10.s64 + -28736;
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
	// addi r11,r11,25960
	ctx.r11.s64 = ctx.r11.s64 + 25960;
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
	// li r5,608
	ctx.r5.s64 = 608;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82173DF0;
	sub_822ED768(ctx, base);
	// b 0x82173df8
	goto loc_82173DF8;
loc_82173DF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82173DF8:
	// stw r3,31656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31656, ctx.r3.u32);
	// bl 0x82172288
	ctx.lr = 0x82173E00;
	sub_82172288(ctx, base);
	// lwz r11,31656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31656);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82173e1c
	if (cr6.eq) goto loc_82173E1C;
	// bl 0x82172288
	ctx.lr = 0x82173E10;
	sub_82172288(ctx, base);
	// lwz r11,31656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31656);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82173e24
	goto loc_82173E24;
loc_82173E1C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82173E24:
	// bl 0x82170938
	ctx.lr = 0x82173E28;
	sub_82170938(ctx, base);
	// lwz r11,31656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31656);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82173E34;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31656);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82173e74
	if (cr6.eq) goto loc_82173E74;
	// bl 0x82170ba8
	ctx.lr = 0x82173E54;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31656);
	// bne cr6,0x82173e74
	if (!cr6.eq) goto loc_82173E74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173E70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31656);
loc_82173E74:
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

__attribute__((alias("__imp__sub_82173E8C"))) PPC_WEAK_FUNC(sub_82173E8C);
PPC_FUNC_IMPL(__imp__sub_82173E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173E90"))) PPC_WEAK_FUNC(sub_82173E90);
PPC_FUNC_IMPL(__imp__sub_82173E90) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-12080
	ctx.r11.s64 = ctx.r11.s64 + -12080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82173EB4;
	sub_822A89B8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82173EC8;
	sub_822A89B8(ctx, base);
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x82528098
	ctx.lr = 0x82173ED0;
	sub_82528098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821721b0
	ctx.lr = 0x82173ED8;
	sub_821721B0(ctx, base);
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

__attribute__((alias("__imp__sub_82173EEC"))) PPC_WEAK_FUNC(sub_82173EEC);
PPC_FUNC_IMPL(__imp__sub_82173EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173EF0"))) PPC_WEAK_FUNC(sub_82173EF0);
PPC_FUNC_IMPL(__imp__sub_82173EF0) {
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
	// bl 0x82173e90
	ctx.lr = 0x82173F10;
	sub_82173E90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173f28
	if (cr6.eq) goto loc_82173F28;
	// bl 0x82170268
	ctx.lr = 0x82173F24;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82173F28:
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

__attribute__((alias("__imp__sub_82173F40"))) PPC_WEAK_FUNC(sub_82173F40);
PPC_FUNC_IMPL(__imp__sub_82173F40) {
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
	// lwz r3,31640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31640);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82174064
	if (!cr6.eq) goto loc_82174064;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82173F70;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173fe4
	if (cr6.eq) goto loc_82173FE4;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-27712
	ctx.r7.s64 = ctx.r10.s64 + -27712;
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
	// addi r11,r11,25868
	ctx.r11.s64 = ctx.r11.s64 + 25868;
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
	// li r5,672
	ctx.r5.s64 = 672;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82173FE0;
	sub_822ED768(ctx, base);
	// b 0x82173fe8
	goto loc_82173FE8;
loc_82173FE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82173FE8:
	// stw r3,31640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31640, ctx.r3.u32);
	// bl 0x82172288
	ctx.lr = 0x82173FF0;
	sub_82172288(ctx, base);
	// lwz r11,31640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31640);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217400c
	if (cr6.eq) goto loc_8217400C;
	// bl 0x82172288
	ctx.lr = 0x82174000;
	sub_82172288(ctx, base);
	// lwz r11,31640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31640);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82174014
	goto loc_82174014;
loc_8217400C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82174014:
	// bl 0x82170938
	ctx.lr = 0x82174018;
	sub_82170938(ctx, base);
	// lwz r11,31640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31640);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82174024;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31640);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82174064
	if (cr6.eq) goto loc_82174064;
	// bl 0x82170ba8
	ctx.lr = 0x82174044;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31640);
	// bne cr6,0x82174064
	if (!cr6.eq) goto loc_82174064;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82174060;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31640);
loc_82174064:
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

__attribute__((alias("__imp__sub_8217407C"))) PPC_WEAK_FUNC(sub_8217407C);
PPC_FUNC_IMPL(__imp__sub_8217407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174080"))) PPC_WEAK_FUNC(sub_82174080);
PPC_FUNC_IMPL(__imp__sub_82174080) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11600
	ctx.r11.s64 = ctx.r11.s64 + -11600;
	// addi r10,r10,-11116
	ctx.r10.s64 = ctx.r10.s64 + -11116;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821740B0;
	sub_822A89B8(ctx, base);
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x82173ae0
	ctx.lr = 0x821740B8;
	sub_82173AE0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821740CC;
	sub_822A89B8(ctx, base);
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x82528098
	ctx.lr = 0x821740D4;
	sub_82528098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821721b0
	ctx.lr = 0x821740DC;
	sub_821721B0(ctx, base);
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

__attribute__((alias("__imp__sub_821740F0"))) PPC_WEAK_FUNC(sub_821740F0);
PPC_FUNC_IMPL(__imp__sub_821740F0) {
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
	// bl 0x82174080
	ctx.lr = 0x82174110;
	sub_82174080(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174128
	if (cr6.eq) goto loc_82174128;
	// bl 0x82170268
	ctx.lr = 0x82174124;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82174128:
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

__attribute__((alias("__imp__sub_82174140"))) PPC_WEAK_FUNC(sub_82174140);
PPC_FUNC_IMPL(__imp__sub_82174140) {
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
	// bl 0x82172488
	ctx.lr = 0x82174158;
	sub_82172488(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r11,r11,26988
	ctx.r11.s64 = ctx.r11.s64 + 26988;
	// addi r10,r10,-11600
	ctx.r10.s64 = ctx.r10.s64 + -11600;
	// addi r9,r9,-11116
	ctx.r9.s64 = ctx.r9.s64 + -11116;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r9.u32);
	// stw r8,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r8.u32);
	// stw r8,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_821741A0"))) PPC_WEAK_FUNC(sub_821741A0);
PPC_FUNC_IMPL(__imp__sub_821741A0) {
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
	// lwz r3,31644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31644);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821742c4
	if (!cr6.eq) goto loc_821742C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821741D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174244
	if (cr6.eq) goto loc_82174244;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-27696
	ctx.r7.s64 = ctx.r10.s64 + -27696;
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
	// addi r11,r11,25888
	ctx.r11.s64 = ctx.r11.s64 + 25888;
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
	// li r5,656
	ctx.r5.s64 = 656;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82174240;
	sub_822ED768(ctx, base);
	// b 0x82174248
	goto loc_82174248;
loc_82174244:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82174248:
	// stw r3,31644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31644, ctx.r3.u32);
	// bl 0x82172288
	ctx.lr = 0x82174250;
	sub_82172288(ctx, base);
	// lwz r11,31644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31644);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217426c
	if (cr6.eq) goto loc_8217426C;
	// bl 0x82172288
	ctx.lr = 0x82174260;
	sub_82172288(ctx, base);
	// lwz r11,31644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31644);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82174274
	goto loc_82174274;
loc_8217426C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82174274:
	// bl 0x82170938
	ctx.lr = 0x82174278;
	sub_82170938(ctx, base);
	// lwz r11,31644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31644);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82174284;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31644);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821742c4
	if (cr6.eq) goto loc_821742C4;
	// bl 0x82170ba8
	ctx.lr = 0x821742A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31644);
	// bne cr6,0x821742c4
	if (!cr6.eq) goto loc_821742C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821742C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31644);
loc_821742C4:
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

__attribute__((alias("__imp__sub_821742DC"))) PPC_WEAK_FUNC(sub_821742DC);
PPC_FUNC_IMPL(__imp__sub_821742DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821742E0"))) PPC_WEAK_FUNC(sub_821742E0);
PPC_FUNC_IMPL(__imp__sub_821742E0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15792
	ctx.r11.s64 = ctx.r11.s64 + -15792;
	// addi r10,r10,-15316
	ctx.r10.s64 = ctx.r10.s64 + -15316;
	// addi r9,r9,260
	ctx.r9.s64 = ctx.r9.s64 + 260;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// stw r9,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r9.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8217431C;
	sub_822A89B8(ctx, base);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82173ae0
	ctx.lr = 0x82174324;
	sub_82173AE0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82174338;
	sub_822A89B8(ctx, base);
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x82528098
	ctx.lr = 0x82174340;
	sub_82528098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821721b0
	ctx.lr = 0x82174348;
	sub_821721B0(ctx, base);
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

__attribute__((alias("__imp__sub_8217435C"))) PPC_WEAK_FUNC(sub_8217435C);
PPC_FUNC_IMPL(__imp__sub_8217435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174360"))) PPC_WEAK_FUNC(sub_82174360);
PPC_FUNC_IMPL(__imp__sub_82174360) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-596
	ctx.r3.s64 = ctx.r3.s64 + -596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82174368"))) PPC_WEAK_FUNC(sub_82174368);
PPC_FUNC_IMPL(__imp__sub_82174368) {
	PPC_FUNC_PROLOGUE();
	// b 0x822cbab8
	sub_822CBAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217436C"))) PPC_WEAK_FUNC(sub_8217436C);
PPC_FUNC_IMPL(__imp__sub_8217436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174370"))) PPC_WEAK_FUNC(sub_82174370);
PPC_FUNC_IMPL(__imp__sub_82174370) {
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
	// bl 0x821742e0
	ctx.lr = 0x82174390;
	sub_821742E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821743a8
	if (cr6.eq) goto loc_821743A8;
	// bl 0x82170268
	ctx.lr = 0x821743A4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821743A8:
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

__attribute__((alias("__imp__sub_821743C0"))) PPC_WEAK_FUNC(sub_821743C0);
PPC_FUNC_IMPL(__imp__sub_821743C0) {
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
	// bl 0x82172488
	ctx.lr = 0x821743D8;
	sub_82172488(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r11,r11,-15292
	ctx.r11.s64 = ctx.r11.s64 + -15292;
	// addi r10,r10,-7360
	ctx.r10.s64 = ctx.r10.s64 + -7360;
	// addi r9,r9,-15792
	ctx.r9.s64 = ctx.r9.s64 + -15792;
	// addi r8,r8,-15316
	ctx.r8.s64 = ctx.r8.s64 + -15316;
	// addi r7,r7,260
	ctx.r7.s64 = ctx.r7.s64 + 260;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r8.u32);
	// stw r7,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r7.u32);
	// stw r6,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r6.u32);
	// stw r6,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82174438"))) PPC_WEAK_FUNC(sub_82174438);
PPC_FUNC_IMPL(__imp__sub_82174438) {
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
	// lwz r3,-24888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24888);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217455c
	if (!cr6.eq) goto loc_8217455C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82174468;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821744dc
	if (cr6.eq) goto loc_821744DC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-7744
	ctx.r7.s64 = ctx.r10.s64 + -7744;
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
	// addi r11,r11,-26964
	ctx.r11.s64 = ctx.r11.s64 + -26964;
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
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821744D8;
	sub_822ED768(ctx, base);
	// b 0x821744e0
	goto loc_821744E0;
loc_821744DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821744E0:
	// stw r3,-24888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24888, ctx.r3.u32);
	// bl 0x82172288
	ctx.lr = 0x821744E8;
	sub_82172288(ctx, base);
	// lwz r11,-24888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24888);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82174504
	if (cr6.eq) goto loc_82174504;
	// bl 0x82172288
	ctx.lr = 0x821744F8;
	sub_82172288(ctx, base);
	// lwz r11,-24888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24888);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8217450c
	goto loc_8217450C;
loc_82174504:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8217450C:
	// bl 0x82170938
	ctx.lr = 0x82174510;
	sub_82170938(ctx, base);
	// lwz r11,-24888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24888);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8217451C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24888);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217455c
	if (cr6.eq) goto loc_8217455C;
	// bl 0x82170ba8
	ctx.lr = 0x8217453C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24888);
	// bne cr6,0x8217455c
	if (!cr6.eq) goto loc_8217455C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82174558;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24888);
loc_8217455C:
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

__attribute__((alias("__imp__sub_82174574"))) PPC_WEAK_FUNC(sub_82174574);
PPC_FUNC_IMPL(__imp__sub_82174574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174578"))) PPC_WEAK_FUNC(sub_82174578);
PPC_FUNC_IMPL(__imp__sub_82174578) {
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
	// lwz r3,31680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31680);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217469c
	if (!cr6.eq) goto loc_8217469C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821745A8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217461c
	if (cr6.eq) goto loc_8217461C;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-27128
	ctx.r7.s64 = ctx.r10.s64 + -27128;
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
	// addi r11,r11,26140
	ctx.r11.s64 = ctx.r11.s64 + 26140;
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
	// li r5,896
	ctx.r5.s64 = 896;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82174618;
	sub_822ED768(ctx, base);
	// b 0x82174620
	goto loc_82174620;
loc_8217461C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82174620:
	// stw r3,31680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31680, ctx.r3.u32);
	// bl 0x82172288
	ctx.lr = 0x82174628;
	sub_82172288(ctx, base);
	// lwz r11,31680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31680);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82174644
	if (cr6.eq) goto loc_82174644;
	// bl 0x82172288
	ctx.lr = 0x82174638;
	sub_82172288(ctx, base);
	// lwz r11,31680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31680);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8217464c
	goto loc_8217464C;
loc_82174644:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8217464C:
	// bl 0x82170938
	ctx.lr = 0x82174650;
	sub_82170938(ctx, base);
	// lwz r11,31680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31680);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8217465C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31680);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217469c
	if (cr6.eq) goto loc_8217469C;
	// bl 0x82170ba8
	ctx.lr = 0x8217467C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31680);
	// bne cr6,0x8217469c
	if (!cr6.eq) goto loc_8217469C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82174698;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31680);
loc_8217469C:
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

__attribute__((alias("__imp__sub_821746B4"))) PPC_WEAK_FUNC(sub_821746B4);
PPC_FUNC_IMPL(__imp__sub_821746B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821746B8"))) PPC_WEAK_FUNC(sub_821746B8);
PPC_FUNC_IMPL(__imp__sub_821746B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11088
	ctx.r11.s64 = ctx.r11.s64 + -11088;
	// addi r10,r10,-10608
	ctx.r10.s64 = ctx.r10.s64 + -10608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821746E8;
	sub_822A89B8(ctx, base);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// bl 0x82173ae0
	ctx.lr = 0x821746F0;
	sub_82173AE0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82174704;
	sub_822A89B8(ctx, base);
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x82528098
	ctx.lr = 0x8217470C;
	sub_82528098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821721b0
	ctx.lr = 0x82174714;
	sub_821721B0(ctx, base);
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

__attribute__((alias("__imp__sub_82174728"))) PPC_WEAK_FUNC(sub_82174728);
PPC_FUNC_IMPL(__imp__sub_82174728) {
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
	// bl 0x821746b8
	ctx.lr = 0x82174748;
	sub_821746B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174760
	if (cr6.eq) goto loc_82174760;
	// bl 0x82170268
	ctx.lr = 0x8217475C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82174760:
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

__attribute__((alias("__imp__sub_82174778"))) PPC_WEAK_FUNC(sub_82174778);
PPC_FUNC_IMPL(__imp__sub_82174778) {
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
	// bl 0x82172488
	ctx.lr = 0x82174790;
	sub_82172488(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r11,r11,26988
	ctx.r11.s64 = ctx.r11.s64 + 26988;
	// addi r10,r10,-11088
	ctx.r10.s64 = ctx.r10.s64 + -11088;
	// addi r9,r9,-10608
	ctx.r9.s64 = ctx.r9.s64 + -10608;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r9.u32);
	// stw r8,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r8.u32);
	// stw r8,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_821747D8"))) PPC_WEAK_FUNC(sub_821747D8);
PPC_FUNC_IMPL(__imp__sub_821747D8) {
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
	// lwz r3,31800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31800);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821748fc
	if (!cr6.eq) goto loc_821748FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82174808;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217487c
	if (cr6.eq) goto loc_8217487C;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,8400
	ctx.r7.s64 = ctx.r10.s64 + 8400;
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
	// addi r11,r11,-23856
	ctx.r11.s64 = ctx.r11.s64 + -23856;
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
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82174878;
	sub_822ED768(ctx, base);
	// b 0x82174880
	goto loc_82174880;
loc_8217487C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82174880:
	// stw r3,31800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31800, ctx.r3.u32);
	// bl 0x82269c78
	ctx.lr = 0x82174888;
	sub_82269C78(ctx, base);
	// lwz r11,31800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31800);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821748a4
	if (cr6.eq) goto loc_821748A4;
	// bl 0x82269c78
	ctx.lr = 0x82174898;
	sub_82269C78(ctx, base);
	// lwz r11,31800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31800);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821748ac
	goto loc_821748AC;
loc_821748A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821748AC:
	// bl 0x82170938
	ctx.lr = 0x821748B0;
	sub_82170938(ctx, base);
	// lwz r11,31800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31800);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821748BC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31800);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821748fc
	if (cr6.eq) goto loc_821748FC;
	// bl 0x82170ba8
	ctx.lr = 0x821748DC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31800);
	// bne cr6,0x821748fc
	if (!cr6.eq) goto loc_821748FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821748F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31800);
loc_821748FC:
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

__attribute__((alias("__imp__sub_82174914"))) PPC_WEAK_FUNC(sub_82174914);
PPC_FUNC_IMPL(__imp__sub_82174914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174918"))) PPC_WEAK_FUNC(sub_82174918);
PPC_FUNC_IMPL(__imp__sub_82174918) {
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
	// lwz r3,31804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31804);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82174a3c
	if (!cr6.eq) goto loc_82174A3C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82174948;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821749bc
	if (cr6.eq) goto loc_821749BC;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,8560
	ctx.r7.s64 = ctx.r10.s64 + 8560;
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
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
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
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x821749B8;
	sub_822ED768(ctx, base);
	// b 0x821749c0
	goto loc_821749C0;
loc_821749BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821749C0:
	// stw r3,31804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31804, ctx.r3.u32);
	// bl 0x82269c78
	ctx.lr = 0x821749C8;
	sub_82269C78(ctx, base);
	// lwz r11,31804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31804);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821749e4
	if (cr6.eq) goto loc_821749E4;
	// bl 0x82269c78
	ctx.lr = 0x821749D8;
	sub_82269C78(ctx, base);
	// lwz r11,31804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31804);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821749ec
	goto loc_821749EC;
loc_821749E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821749EC:
	// bl 0x82170938
	ctx.lr = 0x821749F0;
	sub_82170938(ctx, base);
	// lwz r11,31804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31804);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821749FC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31804);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82174a3c
	if (cr6.eq) goto loc_82174A3C;
	// bl 0x82170ba8
	ctx.lr = 0x82174A1C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31804);
	// bne cr6,0x82174a3c
	if (!cr6.eq) goto loc_82174A3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82174A38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31804);
loc_82174A3C:
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

__attribute__((alias("__imp__sub_82174A54"))) PPC_WEAK_FUNC(sub_82174A54);
PPC_FUNC_IMPL(__imp__sub_82174A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174A58"))) PPC_WEAK_FUNC(sub_82174A58);
PPC_FUNC_IMPL(__imp__sub_82174A58) {
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
	// lwz r3,31808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31808);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82174b7c
	if (!cr6.eq) goto loc_82174B7C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82174A88;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174afc
	if (cr6.eq) goto loc_82174AFC;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,8720
	ctx.r7.s64 = ctx.r10.s64 + 8720;
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
	// addi r11,r11,-23788
	ctx.r11.s64 = ctx.r11.s64 + -23788;
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
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82174AF8;
	sub_822ED768(ctx, base);
	// b 0x82174b00
	goto loc_82174B00;
loc_82174AFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82174B00:
	// stw r3,31808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31808, ctx.r3.u32);
	// bl 0x82269c78
	ctx.lr = 0x82174B08;
	sub_82269C78(ctx, base);
	// lwz r11,31808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31808);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82174b24
	if (cr6.eq) goto loc_82174B24;
	// bl 0x82269c78
	ctx.lr = 0x82174B18;
	sub_82269C78(ctx, base);
	// lwz r11,31808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31808);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82174b2c
	goto loc_82174B2C;
loc_82174B24:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82174B2C:
	// bl 0x82170938
	ctx.lr = 0x82174B30;
	sub_82170938(ctx, base);
	// lwz r11,31808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31808);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82174B3C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31808);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82174b7c
	if (cr6.eq) goto loc_82174B7C;
	// bl 0x82170ba8
	ctx.lr = 0x82174B5C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31808);
	// bne cr6,0x82174b7c
	if (!cr6.eq) goto loc_82174B7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82174B78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31808);
loc_82174B7C:
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

__attribute__((alias("__imp__sub_82174B94"))) PPC_WEAK_FUNC(sub_82174B94);
PPC_FUNC_IMPL(__imp__sub_82174B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174B98"))) PPC_WEAK_FUNC(sub_82174B98);
PPC_FUNC_IMPL(__imp__sub_82174B98) {
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
	// lwz r3,-24440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24440);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82174cbc
	if (!cr6.eq) goto loc_82174CBC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82174BC8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174c3c
	if (cr6.eq) goto loc_82174C3C;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-4552
	ctx.r7.s64 = ctx.r10.s64 + -4552;
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
	// addi r11,r11,4820
	ctx.r11.s64 = ctx.r11.s64 + 4820;
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
	// li r5,156
	ctx.r5.s64 = 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82174C38;
	sub_822ED768(ctx, base);
	// b 0x82174c40
	goto loc_82174C40;
loc_82174C3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82174C40:
	// stw r3,-24440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24440, ctx.r3.u32);
	// bl 0x82274288
	ctx.lr = 0x82174C48;
	sub_82274288(ctx, base);
	// lwz r11,-24440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24440);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82174c64
	if (cr6.eq) goto loc_82174C64;
	// bl 0x82274288
	ctx.lr = 0x82174C58;
	sub_82274288(ctx, base);
	// lwz r11,-24440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24440);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82174c6c
	goto loc_82174C6C;
loc_82174C64:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82174C6C:
	// bl 0x82170938
	ctx.lr = 0x82174C70;
	sub_82170938(ctx, base);
	// lwz r11,-24440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24440);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82174C7C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24440);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82174cbc
	if (cr6.eq) goto loc_82174CBC;
	// bl 0x82170ba8
	ctx.lr = 0x82174C9C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24440);
	// bne cr6,0x82174cbc
	if (!cr6.eq) goto loc_82174CBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82174CB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24440);
loc_82174CBC:
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

__attribute__((alias("__imp__sub_82174CD4"))) PPC_WEAK_FUNC(sub_82174CD4);
PPC_FUNC_IMPL(__imp__sub_82174CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174CD8"))) PPC_WEAK_FUNC(sub_82174CD8);
PPC_FUNC_IMPL(__imp__sub_82174CD8) {
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
	// lwz r3,-24448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24448);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82174dfc
	if (!cr6.eq) goto loc_82174DFC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82174D08;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174d7c
	if (cr6.eq) goto loc_82174D7C;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-4400
	ctx.r7.s64 = ctx.r10.s64 + -4400;
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
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82174D78;
	sub_822ED768(ctx, base);
	// b 0x82174d80
	goto loc_82174D80;
loc_82174D7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82174D80:
	// stw r3,-24448(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24448, ctx.r3.u32);
	// bl 0x82274288
	ctx.lr = 0x82174D88;
	sub_82274288(ctx, base);
	// lwz r11,-24448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24448);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82174da4
	if (cr6.eq) goto loc_82174DA4;
	// bl 0x82274288
	ctx.lr = 0x82174D98;
	sub_82274288(ctx, base);
	// lwz r11,-24448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24448);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82174dac
	goto loc_82174DAC;
loc_82174DA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82174DAC:
	// bl 0x82170938
	ctx.lr = 0x82174DB0;
	sub_82170938(ctx, base);
	// lwz r11,-24448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24448);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82174DBC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24448);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82174dfc
	if (cr6.eq) goto loc_82174DFC;
	// bl 0x82170ba8
	ctx.lr = 0x82174DDC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24448);
	// bne cr6,0x82174dfc
	if (!cr6.eq) goto loc_82174DFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82174DF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24448);
loc_82174DFC:
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

__attribute__((alias("__imp__sub_82174E14"))) PPC_WEAK_FUNC(sub_82174E14);
PPC_FUNC_IMPL(__imp__sub_82174E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174E18"))) PPC_WEAK_FUNC(sub_82174E18);
PPC_FUNC_IMPL(__imp__sub_82174E18) {
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
	// lwz r3,31784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82174f3c
	if (!cr6.eq) goto loc_82174F3C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82174E48;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174ebc
	if (cr6.eq) goto loc_82174EBC;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,8880
	ctx.r7.s64 = ctx.r10.s64 + 8880;
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
	// addi r11,r11,-23972
	ctx.r11.s64 = ctx.r11.s64 + -23972;
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
	// li r5,148
	ctx.r5.s64 = 148;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82174EB8;
	sub_822ED768(ctx, base);
	// b 0x82174ec0
	goto loc_82174EC0;
loc_82174EBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82174EC0:
	// stw r3,31784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31784, ctx.r3.u32);
	// bl 0x822654e8
	ctx.lr = 0x82174EC8;
	sub_822654E8(ctx, base);
	// lwz r11,31784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82174ee4
	if (cr6.eq) goto loc_82174EE4;
	// bl 0x822654e8
	ctx.lr = 0x82174ED8;
	sub_822654E8(ctx, base);
	// lwz r11,31784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82174eec
	goto loc_82174EEC;
loc_82174EE4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82174EEC:
	// bl 0x82170938
	ctx.lr = 0x82174EF0;
	sub_82170938(ctx, base);
	// lwz r11,31784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82174EFC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82174f3c
	if (cr6.eq) goto loc_82174F3C;
	// bl 0x82170ba8
	ctx.lr = 0x82174F1C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
	// bne cr6,0x82174f3c
	if (!cr6.eq) goto loc_82174F3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82174F38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31784);
loc_82174F3C:
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

__attribute__((alias("__imp__sub_82174F54"))) PPC_WEAK_FUNC(sub_82174F54);
PPC_FUNC_IMPL(__imp__sub_82174F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174F58"))) PPC_WEAK_FUNC(sub_82174F58);
PPC_FUNC_IMPL(__imp__sub_82174F58) {
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
	// lwz r3,-25112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217507c
	if (!cr6.eq) goto loc_8217507C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82174F88;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174ffc
	if (cr6.eq) goto loc_82174FFC;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21104
	ctx.r7.s64 = ctx.r10.s64 + 21104;
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
	// addi r11,r11,21028
	ctx.r11.s64 = ctx.r11.s64 + 21028;
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
	// li r5,284
	ctx.r5.s64 = 284;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82174FF8;
	sub_822ED768(ctx, base);
	// b 0x82175000
	goto loc_82175000;
loc_82174FFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82175000:
	// stw r3,-25112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25112, ctx.r3.u32);
	// bl 0x8224ae98
	ctx.lr = 0x82175008;
	sub_8224AE98(ctx, base);
	// lwz r11,-25112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25112);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82175024
	if (cr6.eq) goto loc_82175024;
	// bl 0x8224ae98
	ctx.lr = 0x82175018;
	sub_8224AE98(ctx, base);
	// lwz r11,-25112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25112);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8217502c
	goto loc_8217502C;
loc_82175024:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8217502C:
	// bl 0x82170938
	ctx.lr = 0x82175030;
	sub_82170938(ctx, base);
	// lwz r11,-25112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25112);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8217503C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-25112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25112);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217507c
	if (cr6.eq) goto loc_8217507C;
	// bl 0x82170ba8
	ctx.lr = 0x8217505C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-25112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25112);
	// bne cr6,0x8217507c
	if (!cr6.eq) goto loc_8217507C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82175078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-25112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25112);
loc_8217507C:
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

__attribute__((alias("__imp__sub_82175094"))) PPC_WEAK_FUNC(sub_82175094);
PPC_FUNC_IMPL(__imp__sub_82175094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175098"))) PPC_WEAK_FUNC(sub_82175098);
PPC_FUNC_IMPL(__imp__sub_82175098) {
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
	// lwz r3,-25104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821751bc
	if (!cr6.eq) goto loc_821751BC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821750C8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217513c
	if (cr6.eq) goto loc_8217513C;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21616
	ctx.r7.s64 = ctx.r10.s64 + 21616;
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
	// addi r11,r11,21088
	ctx.r11.s64 = ctx.r11.s64 + 21088;
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
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82175138;
	sub_822ED768(ctx, base);
	// b 0x82175140
	goto loc_82175140;
loc_8217513C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82175140:
	// stw r3,-25104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25104, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x82175148;
	sub_821BD940(ctx, base);
	// lwz r11,-25104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25104);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82175164
	if (cr6.eq) goto loc_82175164;
	// bl 0x821bd940
	ctx.lr = 0x82175158;
	sub_821BD940(ctx, base);
	// lwz r11,-25104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25104);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8217516c
	goto loc_8217516C;
loc_82175164:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8217516C:
	// bl 0x82170938
	ctx.lr = 0x82175170;
	sub_82170938(ctx, base);
	// lwz r11,-25104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25104);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8217517C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-25104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25104);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821751bc
	if (cr6.eq) goto loc_821751BC;
	// bl 0x82170ba8
	ctx.lr = 0x8217519C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-25104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25104);
	// bne cr6,0x821751bc
	if (!cr6.eq) goto loc_821751BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821751B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-25104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25104);
loc_821751BC:
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

__attribute__((alias("__imp__sub_821751D4"))) PPC_WEAK_FUNC(sub_821751D4);
PPC_FUNC_IMPL(__imp__sub_821751D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821751D8"))) PPC_WEAK_FUNC(sub_821751D8);
PPC_FUNC_IMPL(__imp__sub_821751D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17520
	ctx.r11.s64 = ctx.r11.s64 + -17520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821751FC;
	sub_822A89B8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18152
	ctx.r11.s64 = ctx.r11.s64 + -18152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82175210;
	sub_822A89B8(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// bl 0x82288288
	ctx.lr = 0x82175218;
	sub_82288288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821719e0
	ctx.lr = 0x82175220;
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

__attribute__((alias("__imp__sub_82175234"))) PPC_WEAK_FUNC(sub_82175234);
PPC_FUNC_IMPL(__imp__sub_82175234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175238"))) PPC_WEAK_FUNC(sub_82175238);
PPC_FUNC_IMPL(__imp__sub_82175238) {
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
	// bl 0x821751d8
	ctx.lr = 0x82175258;
	sub_821751D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175270
	if (cr6.eq) goto loc_82175270;
	// bl 0x82170268
	ctx.lr = 0x8217526C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82175270:
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

__attribute__((alias("__imp__sub_82175288"))) PPC_WEAK_FUNC(sub_82175288);
PPC_FUNC_IMPL(__imp__sub_82175288) {
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
	// lwz r3,-25040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25040);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821753ac
	if (!cr6.eq) goto loc_821753AC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821752B8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217532c
	if (cr6.eq) goto loc_8217532C;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24472
	ctx.r7.s64 = ctx.r10.s64 + 24472;
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
	// addi r11,r11,21836
	ctx.r11.s64 = ctx.r11.s64 + 21836;
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
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82175328;
	sub_822ED768(ctx, base);
	// b 0x82175330
	goto loc_82175330;
loc_8217532C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82175330:
	// stw r3,-25040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25040, ctx.r3.u32);
	// bl 0x82175098
	ctx.lr = 0x82175338;
	sub_82175098(ctx, base);
	// lwz r11,-25040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25040);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82175354
	if (cr6.eq) goto loc_82175354;
	// bl 0x82175098
	ctx.lr = 0x82175348;
	sub_82175098(ctx, base);
	// lwz r11,-25040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25040);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8217535c
	goto loc_8217535C;
loc_82175354:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8217535C:
	// bl 0x82170938
	ctx.lr = 0x82175360;
	sub_82170938(ctx, base);
	// lwz r11,-25040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25040);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8217536C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-25040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25040);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821753ac
	if (cr6.eq) goto loc_821753AC;
	// bl 0x82170ba8
	ctx.lr = 0x8217538C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-25040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25040);
	// bne cr6,0x821753ac
	if (!cr6.eq) goto loc_821753AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821753A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-25040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25040);
loc_821753AC:
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

__attribute__((alias("__imp__sub_821753C4"))) PPC_WEAK_FUNC(sub_821753C4);
PPC_FUNC_IMPL(__imp__sub_821753C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821753C8"))) PPC_WEAK_FUNC(sub_821753C8);
PPC_FUNC_IMPL(__imp__sub_821753C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-10576
	ctx.r11.s64 = ctx.r11.s64 + -10576;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821753F4;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821751d8
	ctx.lr = 0x821753FC;
	sub_821751D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175414
	if (cr6.eq) goto loc_82175414;
	// bl 0x82170268
	ctx.lr = 0x82175410;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82175414:
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

__attribute__((alias("__imp__sub_8217542C"))) PPC_WEAK_FUNC(sub_8217542C);
PPC_FUNC_IMPL(__imp__sub_8217542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175430"))) PPC_WEAK_FUNC(sub_82175430);
PPC_FUNC_IMPL(__imp__sub_82175430) {
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
	// lwz r3,-25012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25012);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175554
	if (!cr6.eq) goto loc_82175554;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82175460;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821754d4
	if (cr6.eq) goto loc_821754D4;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24640
	ctx.r7.s64 = ctx.r10.s64 + 24640;
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
	// addi r11,r11,22188
	ctx.r11.s64 = ctx.r11.s64 + 22188;
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
	ctx.lr = 0x821754D0;
	sub_822ED768(ctx, base);
	// b 0x821754d8
	goto loc_821754D8;
loc_821754D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821754D8:
	// stw r3,-25012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25012, ctx.r3.u32);
	// bl 0x82175098
	ctx.lr = 0x821754E0;
	sub_82175098(ctx, base);
	// lwz r11,-25012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25012);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821754fc
	if (cr6.eq) goto loc_821754FC;
	// bl 0x82175098
	ctx.lr = 0x821754F0;
	sub_82175098(ctx, base);
	// lwz r11,-25012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25012);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82175504
	goto loc_82175504;
loc_821754FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82175504:
	// bl 0x82170938
	ctx.lr = 0x82175508;
	sub_82170938(ctx, base);
	// lwz r11,-25012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25012);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82175514;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-25012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25012);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82175554
	if (cr6.eq) goto loc_82175554;
	// bl 0x82170ba8
	ctx.lr = 0x82175534;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-25012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25012);
	// bne cr6,0x82175554
	if (!cr6.eq) goto loc_82175554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82175550;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-25012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25012);
loc_82175554:
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

__attribute__((alias("__imp__sub_8217556C"))) PPC_WEAK_FUNC(sub_8217556C);
PPC_FUNC_IMPL(__imp__sub_8217556C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175570"))) PPC_WEAK_FUNC(sub_82175570);
PPC_FUNC_IMPL(__imp__sub_82175570) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-10272
	ctx.r11.s64 = ctx.r11.s64 + -10272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8217559C;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821751d8
	ctx.lr = 0x821755A4;
	sub_821751D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821755bc
	if (cr6.eq) goto loc_821755BC;
	// bl 0x82170268
	ctx.lr = 0x821755B8;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821755BC:
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

__attribute__((alias("__imp__sub_821755D4"))) PPC_WEAK_FUNC(sub_821755D4);
PPC_FUNC_IMPL(__imp__sub_821755D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821755D8"))) PPC_WEAK_FUNC(sub_821755D8);
PPC_FUNC_IMPL(__imp__sub_821755D8) {
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
	// lwz r3,-24980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24980);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821756fc
	if (!cr6.eq) goto loc_821756FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82175608;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217567c
	if (cr6.eq) goto loc_8217567C;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27088
	ctx.r7.s64 = ctx.r10.s64 + 27088;
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
	// addi r11,r11,22652
	ctx.r11.s64 = ctx.r11.s64 + 22652;
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
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82175678;
	sub_822ED768(ctx, base);
	// b 0x82175680
	goto loc_82175680;
loc_8217567C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82175680:
	// stw r3,-24980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24980, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82175688;
	sub_821FD018(ctx, base);
	// lwz r11,-24980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24980);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821756a4
	if (cr6.eq) goto loc_821756A4;
	// bl 0x821fd018
	ctx.lr = 0x82175698;
	sub_821FD018(ctx, base);
	// lwz r11,-24980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24980);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x821756ac
	goto loc_821756AC;
loc_821756A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_821756AC:
	// bl 0x82170938
	ctx.lr = 0x821756B0;
	sub_82170938(ctx, base);
	// lwz r11,-24980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24980);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x821756BC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24980);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821756fc
	if (cr6.eq) goto loc_821756FC;
	// bl 0x82170ba8
	ctx.lr = 0x821756DC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24980);
	// bne cr6,0x821756fc
	if (!cr6.eq) goto loc_821756FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821756F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24980);
loc_821756FC:
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

__attribute__((alias("__imp__sub_82175714"))) PPC_WEAK_FUNC(sub_82175714);
PPC_FUNC_IMPL(__imp__sub_82175714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175718"))) PPC_WEAK_FUNC(sub_82175718);
PPC_FUNC_IMPL(__imp__sub_82175718) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17848
	ctx.r11.s64 = ctx.r11.s64 + -17848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82175740;
	sub_822A89B8(ctx, base);
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8217576c
	if (cr6.eq) goto loc_8217576C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x8217576C;
	sub_82170408(ctx, base);
loc_8217576C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x82175774;
	sub_8218C838(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20560
	ctx.r11.s64 = ctx.r11.s64 + -20560;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82175788;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821719e0
	ctx.lr = 0x82175790;
	sub_821719E0(ctx, base);
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

__attribute__((alias("__imp__sub_821757A8"))) PPC_WEAK_FUNC(sub_821757A8);
PPC_FUNC_IMPL(__imp__sub_821757A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-31104
	ctx.r4.s64 = ctx.r11.s64 + -31104;
	// bl 0x821704f8
	ctx.lr = 0x821757C8;
	sub_821704F8(ctx, base);
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

__attribute__((alias("__imp__sub_821757E0"))) PPC_WEAK_FUNC(sub_821757E0);
PPC_FUNC_IMPL(__imp__sub_821757E0) {
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
	// bl 0x82175718
	ctx.lr = 0x82175800;
	sub_82175718(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175818
	if (cr6.eq) goto loc_82175818;
	// bl 0x82170268
	ctx.lr = 0x82175814;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82175818:
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

__attribute__((alias("__imp__sub_82175830"))) PPC_WEAK_FUNC(sub_82175830);
PPC_FUNC_IMPL(__imp__sub_82175830) {
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
	// lwz r3,-24952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175954
	if (!cr6.eq) goto loc_82175954;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82175860;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821758d4
	if (cr6.eq) goto loc_821758D4;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27384
	ctx.r7.s64 = ctx.r10.s64 + 27384;
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
	// addi r11,r11,22908
	ctx.r11.s64 = ctx.r11.s64 + 22908;
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
	ctx.lr = 0x821758D0;
	sub_822ED768(ctx, base);
	// b 0x821758d8
	goto loc_821758D8;
loc_821758D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821758D8:
	// stw r3,-24952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24952, ctx.r3.u32);
	// bl 0x821755d8
	ctx.lr = 0x821758E0;
	sub_821755D8(ctx, base);
	// lwz r11,-24952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24952);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821758fc
	if (cr6.eq) goto loc_821758FC;
	// bl 0x821755d8
	ctx.lr = 0x821758F0;
	sub_821755D8(ctx, base);
	// lwz r11,-24952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24952);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82175904
	goto loc_82175904;
loc_821758FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82175904:
	// bl 0x82170938
	ctx.lr = 0x82175908;
	sub_82170938(ctx, base);
	// lwz r11,-24952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24952);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82175914;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24952);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82175954
	if (cr6.eq) goto loc_82175954;
	// bl 0x82170ba8
	ctx.lr = 0x82175934;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24952);
	// bne cr6,0x82175954
	if (!cr6.eq) goto loc_82175954;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82175950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24952);
loc_82175954:
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

__attribute__((alias("__imp__sub_8217596C"))) PPC_WEAK_FUNC(sub_8217596C);
PPC_FUNC_IMPL(__imp__sub_8217596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175970"))) PPC_WEAK_FUNC(sub_82175970);
PPC_FUNC_IMPL(__imp__sub_82175970) {
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
	// lwz r3,-24948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24948);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175a94
	if (!cr6.eq) goto loc_82175A94;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x821759A0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82175a14
	if (cr6.eq) goto loc_82175A14;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27384
	ctx.r7.s64 = ctx.r10.s64 + 27384;
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
	// addi r11,r11,22944
	ctx.r11.s64 = ctx.r11.s64 + 22944;
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
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82175A10;
	sub_822ED768(ctx, base);
	// b 0x82175a18
	goto loc_82175A18;
loc_82175A14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82175A18:
	// stw r3,-24948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24948, ctx.r3.u32);
	// bl 0x821755d8
	ctx.lr = 0x82175A20;
	sub_821755D8(ctx, base);
	// lwz r11,-24948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24948);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82175a3c
	if (cr6.eq) goto loc_82175A3C;
	// bl 0x821755d8
	ctx.lr = 0x82175A30;
	sub_821755D8(ctx, base);
	// lwz r11,-24948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24948);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82175a44
	goto loc_82175A44;
loc_82175A3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82175A44:
	// bl 0x82170938
	ctx.lr = 0x82175A48;
	sub_82170938(ctx, base);
	// lwz r11,-24948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24948);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82175A54;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24948);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82175a94
	if (cr6.eq) goto loc_82175A94;
	// bl 0x82170ba8
	ctx.lr = 0x82175A74;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24948);
	// bne cr6,0x82175a94
	if (!cr6.eq) goto loc_82175A94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82175A90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24948);
loc_82175A94:
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

__attribute__((alias("__imp__sub_82175AAC"))) PPC_WEAK_FUNC(sub_82175AAC);
PPC_FUNC_IMPL(__imp__sub_82175AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175AB0"))) PPC_WEAK_FUNC(sub_82175AB0);
PPC_FUNC_IMPL(__imp__sub_82175AB0) {
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
	// lwz r3,-13216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175bd8
	if (!cr6.eq) goto loc_82175BD8;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82175AE0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82175b58
	if (cr6.eq) goto loc_82175B58;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,23536
	ctx.r6.s64 = ctx.r10.s64 + 23536;
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-30952
	ctx.r11.s64 = ctx.r11.s64 + -30952;
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
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82175B54;
	sub_822ED768(ctx, base);
	// b 0x82175b5c
	goto loc_82175B5C;
loc_82175B58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82175B5C:
	// stw r3,-13216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13216, ctx.r3.u32);
	// bl 0x82171548
	ctx.lr = 0x82175B64;
	sub_82171548(ctx, base);
	// lwz r11,-13216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13216);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82175b80
	if (cr6.eq) goto loc_82175B80;
	// bl 0x82171548
	ctx.lr = 0x82175B74;
	sub_82171548(ctx, base);
	// lwz r11,-13216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13216);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82175b88
	goto loc_82175B88;
loc_82175B80:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82175B88:
	// bl 0x82170938
	ctx.lr = 0x82175B8C;
	sub_82170938(ctx, base);
	// lwz r11,-13216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13216);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82175B98;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-13216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13216);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82175bd8
	if (cr6.eq) goto loc_82175BD8;
	// bl 0x82170ba8
	ctx.lr = 0x82175BB8;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-13216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13216);
	// bne cr6,0x82175bd8
	if (!cr6.eq) goto loc_82175BD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82175BD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-13216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13216);
loc_82175BD8:
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

__attribute__((alias("__imp__sub_82175BF0"))) PPC_WEAK_FUNC(sub_82175BF0);
PPC_FUNC_IMPL(__imp__sub_82175BF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-9968
	ctx.r11.s64 = ctx.r11.s64 + -9968;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82175C08"))) PPC_WEAK_FUNC(sub_82175C08);
PPC_FUNC_IMPL(__imp__sub_82175C08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-9968
	ctx.r11.s64 = ctx.r11.s64 + -9968;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82175C34;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82171688
	ctx.lr = 0x82175C3C;
	sub_82171688(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175c54
	if (cr6.eq) goto loc_82175C54;
	// bl 0x82170268
	ctx.lr = 0x82175C50;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82175C54:
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

__attribute__((alias("__imp__sub_82175C6C"))) PPC_WEAK_FUNC(sub_82175C6C);
PPC_FUNC_IMPL(__imp__sub_82175C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175C70"))) PPC_WEAK_FUNC(sub_82175C70);
PPC_FUNC_IMPL(__imp__sub_82175C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82175C78;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x82170670
	ctx.lr = 0x82175C98;
	sub_82170670(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-20940(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20940);
	// bl 0x822aa9b0
	ctx.lr = 0x82175CB8;
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
	ctx.lr = 0x82175CD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82175cf8
	if (cr6.eq) goto loc_82175CF8;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x82175CF8;
	sub_82170408(ctx, base);
loc_82175CF8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x82175D00;
	sub_8218C838(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82175D08"))) PPC_WEAK_FUNC(sub_82175D08);
PPC_FUNC_IMPL(__imp__sub_82175D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82175D10;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x82170670
	ctx.lr = 0x82175D30;
	sub_82170670(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-19660(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -19660);
	// bl 0x822aa9b0
	ctx.lr = 0x82175D4C;
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
	ctx.lr = 0x82175D68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82175d8c
	if (cr6.eq) goto loc_82175D8C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x82175D8C;
	sub_82170408(ctx, base);
loc_82175D8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x82175D94;
	sub_8218C838(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82175D9C"))) PPC_WEAK_FUNC(sub_82175D9C);
PPC_FUNC_IMPL(__imp__sub_82175D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175DA0"))) PPC_WEAK_FUNC(sub_82175DA0);
PPC_FUNC_IMPL(__imp__sub_82175DA0) {
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
	// lwz r3,-12488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12488);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175ec8
	if (!cr6.eq) goto loc_82175EC8;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82175DD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82175e48
	if (cr6.eq) goto loc_82175E48;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-19616
	ctx.r6.s64 = ctx.r10.s64 + -19616;
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,8928
	ctx.r11.s64 = ctx.r11.s64 + 8928;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r10,-2024
	ctx.r10.s64 = ctx.r10.s64 + -2024;
	// addi r9,r9,-31040
	ctx.r9.s64 = ctx.r9.s64 + -31040;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2052
	ctx.r6.s64 = 2052;
	// li r5,2908
	ctx.r5.s64 = 2908;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82175E44;
	sub_822ED768(ctx, base);
	// b 0x82175e4c
	goto loc_82175E4C;
loc_82175E48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82175E4C:
	// stw r3,-12488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12488, ctx.r3.u32);
	// bl 0x821c2ed8
	ctx.lr = 0x82175E54;
	sub_821C2ED8(ctx, base);
	// lwz r11,-12488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12488);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82175e70
	if (cr6.eq) goto loc_82175E70;
	// bl 0x821c2ed8
	ctx.lr = 0x82175E64;
	sub_821C2ED8(ctx, base);
	// lwz r11,-12488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12488);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82175e78
	goto loc_82175E78;
loc_82175E70:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82175E78:
	// bl 0x82170938
	ctx.lr = 0x82175E7C;
	sub_82170938(ctx, base);
	// lwz r11,-12488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12488);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82175E88;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-12488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12488);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82175ec8
	if (cr6.eq) goto loc_82175EC8;
	// bl 0x82170ba8
	ctx.lr = 0x82175EA8;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-12488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12488);
	// bne cr6,0x82175ec8
	if (!cr6.eq) goto loc_82175EC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82175EC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-12488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12488);
loc_82175EC8:
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

__attribute__((alias("__imp__sub_82175EE0"))) PPC_WEAK_FUNC(sub_82175EE0);
PPC_FUNC_IMPL(__imp__sub_82175EE0) {
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
	// lwz r3,-12480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12480);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82176008
	if (!cr6.eq) goto loc_82176008;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82175F10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82175f88
	if (cr6.eq) goto loc_82175F88;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-11216
	ctx.r6.s64 = ctx.r10.s64 + -11216;
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
	// addi r11,r11,8960
	ctx.r11.s64 = ctx.r11.s64 + 8960;
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
	// li r6,2052
	ctx.r6.s64 = 2052;
	// li r5,692
	ctx.r5.s64 = 692;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82175F84;
	sub_822ED768(ctx, base);
	// b 0x82175f8c
	goto loc_82175F8C;
loc_82175F88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82175F8C:
	// stw r3,-12480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12480, ctx.r3.u32);
	// bl 0x821c08c0
	ctx.lr = 0x82175F94;
	sub_821C08C0(ctx, base);
	// lwz r11,-12480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12480);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82175fb0
	if (cr6.eq) goto loc_82175FB0;
	// bl 0x821c08c0
	ctx.lr = 0x82175FA4;
	sub_821C08C0(ctx, base);
	// lwz r11,-12480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12480);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82175fb8
	goto loc_82175FB8;
loc_82175FB0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82175FB8:
	// bl 0x82170938
	ctx.lr = 0x82175FBC;
	sub_82170938(ctx, base);
	// lwz r11,-12480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12480);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82175FC8;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-12480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12480);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82176008
	if (cr6.eq) goto loc_82176008;
	// bl 0x82170ba8
	ctx.lr = 0x82175FE8;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-12480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12480);
	// bne cr6,0x82176008
	if (!cr6.eq) goto loc_82176008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82176004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-12480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12480);
loc_82176008:
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

__attribute__((alias("__imp__sub_82176020"))) PPC_WEAK_FUNC(sub_82176020);
PPC_FUNC_IMPL(__imp__sub_82176020) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-9144
	ctx.r11.s64 = ctx.r11.s64 + -9144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176038"))) PPC_WEAK_FUNC(sub_82176038);
PPC_FUNC_IMPL(__imp__sub_82176038) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-9144
	ctx.r11.s64 = ctx.r11.s64 + -9144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82176064;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821751d8
	ctx.lr = 0x8217606C;
	sub_821751D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176084
	if (cr6.eq) goto loc_82176084;
	// bl 0x82170268
	ctx.lr = 0x82176080;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82176084:
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

__attribute__((alias("__imp__sub_8217609C"))) PPC_WEAK_FUNC(sub_8217609C);
PPC_FUNC_IMPL(__imp__sub_8217609C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821760A0"))) PPC_WEAK_FUNC(sub_821760A0);
PPC_FUNC_IMPL(__imp__sub_821760A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-8840
	ctx.r11.s64 = ctx.r11.s64 + -8840;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821760B8"))) PPC_WEAK_FUNC(sub_821760B8);
PPC_FUNC_IMPL(__imp__sub_821760B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8840
	ctx.r11.s64 = ctx.r11.s64 + -8840;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821760E4;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821751d8
	ctx.lr = 0x821760EC;
	sub_821751D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176104
	if (cr6.eq) goto loc_82176104;
	// bl 0x82170268
	ctx.lr = 0x82176100;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82176104:
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

__attribute__((alias("__imp__sub_8217611C"))) PPC_WEAK_FUNC(sub_8217611C);
PPC_FUNC_IMPL(__imp__sub_8217611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176120"))) PPC_WEAK_FUNC(sub_82176120);
PPC_FUNC_IMPL(__imp__sub_82176120) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-8536
	ctx.r11.s64 = ctx.r11.s64 + -8536;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176138"))) PPC_WEAK_FUNC(sub_82176138);
PPC_FUNC_IMPL(__imp__sub_82176138) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8536
	ctx.r11.s64 = ctx.r11.s64 + -8536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82176164;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821751d8
	ctx.lr = 0x8217616C;
	sub_821751D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176184
	if (cr6.eq) goto loc_82176184;
	// bl 0x82170268
	ctx.lr = 0x82176180;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82176184:
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

__attribute__((alias("__imp__sub_8217619C"))) PPC_WEAK_FUNC(sub_8217619C);
PPC_FUNC_IMPL(__imp__sub_8217619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821761A0"))) PPC_WEAK_FUNC(sub_821761A0);
PPC_FUNC_IMPL(__imp__sub_821761A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-8232
	ctx.r11.s64 = ctx.r11.s64 + -8232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821761B8"))) PPC_WEAK_FUNC(sub_821761B8);
PPC_FUNC_IMPL(__imp__sub_821761B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8232
	ctx.r11.s64 = ctx.r11.s64 + -8232;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821761E4;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821751d8
	ctx.lr = 0x821761EC;
	sub_821751D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176204
	if (cr6.eq) goto loc_82176204;
	// bl 0x82170268
	ctx.lr = 0x82176200;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82176204:
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

__attribute__((alias("__imp__sub_8217621C"))) PPC_WEAK_FUNC(sub_8217621C);
PPC_FUNC_IMPL(__imp__sub_8217621C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176220"))) PPC_WEAK_FUNC(sub_82176220);
PPC_FUNC_IMPL(__imp__sub_82176220) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-7928
	ctx.r11.s64 = ctx.r11.s64 + -7928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82176238"))) PPC_WEAK_FUNC(sub_82176238);
PPC_FUNC_IMPL(__imp__sub_82176238) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7928
	ctx.r11.s64 = ctx.r11.s64 + -7928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82176264;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821751d8
	ctx.lr = 0x8217626C;
	sub_821751D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176284
	if (cr6.eq) goto loc_82176284;
	// bl 0x82170268
	ctx.lr = 0x82176280;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82176284:
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

__attribute__((alias("__imp__sub_8217629C"))) PPC_WEAK_FUNC(sub_8217629C);
PPC_FUNC_IMPL(__imp__sub_8217629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821762A0"))) PPC_WEAK_FUNC(sub_821762A0);
PPC_FUNC_IMPL(__imp__sub_821762A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-7624
	ctx.r11.s64 = ctx.r11.s64 + -7624;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821762B8"))) PPC_WEAK_FUNC(sub_821762B8);
PPC_FUNC_IMPL(__imp__sub_821762B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7624
	ctx.r11.s64 = ctx.r11.s64 + -7624;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x821762E4;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821751d8
	ctx.lr = 0x821762EC;
	sub_821751D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176304
	if (cr6.eq) goto loc_82176304;
	// bl 0x82170268
	ctx.lr = 0x82176300;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82176304:
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

__attribute__((alias("__imp__sub_8217631C"))) PPC_WEAK_FUNC(sub_8217631C);
PPC_FUNC_IMPL(__imp__sub_8217631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

