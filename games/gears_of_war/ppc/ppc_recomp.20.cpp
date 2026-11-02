#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8224A15C"))) PPC_WEAK_FUNC(sub_8224A15C);
PPC_FUNC_IMPL(__imp__sub_8224A15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A160"))) PPC_WEAK_FUNC(sub_8224A160);
PPC_FUNC_IMPL(__imp__sub_8224A160) {
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
	// lwz r3,-23440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23440);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224a284
	if (!cr6.eq) goto loc_8224A284;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224A190;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224a204
	if (cr6.eq) goto loc_8224A204;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-9160
	ctx.r7.s64 = ctx.r10.s64 + -9160;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-23696
	ctx.r11.s64 = ctx.r11.s64 + -23696;
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
	ctx.lr = 0x8224A200;
	sub_822ED768(ctx, base);
	// b 0x8224a208
	goto loc_8224A208;
loc_8224A204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A208:
	// stw r3,-23440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23440, ctx.r3.u32);
	// bl 0x82249b20
	ctx.lr = 0x8224A210;
	sub_82249B20(ctx, base);
	// lwz r11,-23440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23440);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224a22c
	if (cr6.eq) goto loc_8224A22C;
	// bl 0x82249b20
	ctx.lr = 0x8224A220;
	sub_82249B20(ctx, base);
	// lwz r11,-23440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23440);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224a234
	goto loc_8224A234;
loc_8224A22C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224A234:
	// bl 0x82170938
	ctx.lr = 0x8224A238;
	sub_82170938(ctx, base);
	// lwz r11,-23440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23440);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224A244;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23440);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224a284
	if (cr6.eq) goto loc_8224A284;
	// bl 0x82170ba8
	ctx.lr = 0x8224A264;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23440);
	// bne cr6,0x8224a284
	if (!cr6.eq) goto loc_8224A284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A280;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23440);
loc_8224A284:
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

__attribute__((alias("__imp__sub_8224A29C"))) PPC_WEAK_FUNC(sub_8224A29C);
PPC_FUNC_IMPL(__imp__sub_8224A29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A2A0"))) PPC_WEAK_FUNC(sub_8224A2A0);
PPC_FUNC_IMPL(__imp__sub_8224A2A0) {
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
	// lwz r3,-23444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23444);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224a3c4
	if (!cr6.eq) goto loc_8224A3C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224A2D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224a344
	if (cr6.eq) goto loc_8224A344;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-9160
	ctx.r7.s64 = ctx.r10.s64 + -9160;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-23736
	ctx.r11.s64 = ctx.r11.s64 + -23736;
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
	ctx.lr = 0x8224A340;
	sub_822ED768(ctx, base);
	// b 0x8224a348
	goto loc_8224A348;
loc_8224A344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A348:
	// stw r3,-23444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23444, ctx.r3.u32);
	// bl 0x82249b20
	ctx.lr = 0x8224A350;
	sub_82249B20(ctx, base);
	// lwz r11,-23444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23444);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224a36c
	if (cr6.eq) goto loc_8224A36C;
	// bl 0x82249b20
	ctx.lr = 0x8224A360;
	sub_82249B20(ctx, base);
	// lwz r11,-23444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23444);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224a374
	goto loc_8224A374;
loc_8224A36C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224A374:
	// bl 0x82170938
	ctx.lr = 0x8224A378;
	sub_82170938(ctx, base);
	// lwz r11,-23444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23444);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224A384;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23444);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224a3c4
	if (cr6.eq) goto loc_8224A3C4;
	// bl 0x82170ba8
	ctx.lr = 0x8224A3A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23444);
	// bne cr6,0x8224a3c4
	if (!cr6.eq) goto loc_8224A3C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A3C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23444);
loc_8224A3C4:
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

__attribute__((alias("__imp__sub_8224A3DC"))) PPC_WEAK_FUNC(sub_8224A3DC);
PPC_FUNC_IMPL(__imp__sub_8224A3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A3E0"))) PPC_WEAK_FUNC(sub_8224A3E0);
PPC_FUNC_IMPL(__imp__sub_8224A3E0) {
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
	// lwz r3,-23436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224a504
	if (!cr6.eq) goto loc_8224A504;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224A410;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224a484
	if (cr6.eq) goto loc_8224A484;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-9160
	ctx.r7.s64 = ctx.r10.s64 + -9160;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-23652
	ctx.r11.s64 = ctx.r11.s64 + -23652;
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
	ctx.lr = 0x8224A480;
	sub_822ED768(ctx, base);
	// b 0x8224a488
	goto loc_8224A488;
loc_8224A484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A488:
	// stw r3,-23436(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23436, ctx.r3.u32);
	// bl 0x82249b20
	ctx.lr = 0x8224A490;
	sub_82249B20(ctx, base);
	// lwz r11,-23436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23436);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224a4ac
	if (cr6.eq) goto loc_8224A4AC;
	// bl 0x82249b20
	ctx.lr = 0x8224A4A0;
	sub_82249B20(ctx, base);
	// lwz r11,-23436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23436);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224a4b4
	goto loc_8224A4B4;
loc_8224A4AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224A4B4:
	// bl 0x82170938
	ctx.lr = 0x8224A4B8;
	sub_82170938(ctx, base);
	// lwz r11,-23436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23436);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224A4C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23436);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224a504
	if (cr6.eq) goto loc_8224A504;
	// bl 0x82170ba8
	ctx.lr = 0x8224A4E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23436);
	// bne cr6,0x8224a504
	if (!cr6.eq) goto loc_8224A504;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A500;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23436);
loc_8224A504:
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

__attribute__((alias("__imp__sub_8224A51C"))) PPC_WEAK_FUNC(sub_8224A51C);
PPC_FUNC_IMPL(__imp__sub_8224A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A520"))) PPC_WEAK_FUNC(sub_8224A520);
PPC_FUNC_IMPL(__imp__sub_8224A520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x8224A528;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
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
	ctx.lr = 0x8224A570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// lwz r9,-11748(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11748);
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,-11748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11748, ctx.r9.u32);
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
	ctx.lr = 0x8224A5B4;
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
	// bne cr6,0x8224a604
	if (!cr6.eq) goto loc_8224A604;
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
	ctx.lr = 0x8224A604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224A604:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224a628
	if (cr6.eq) goto loc_8224A628;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82170408
	ctx.lr = 0x8224A628;
	sub_82170408(ctx, base);
loc_8224A628:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218c838
	ctx.lr = 0x8224A630;
	sub_8218C838(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224A638"))) PPC_WEAK_FUNC(sub_8224A638);
PPC_FUNC_IMPL(__imp__sub_8224A638) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8224a68c
	if (!cr6.eq) goto loc_8224A68C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-32066
	ctx.r9.s64 = -2101477376;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r9,16832
	ctx.r9.s64 = ctx.r9.s64 + 16832;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A68C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224A68C:
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r11,-24420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224a6ac
	if (cr6.eq) goto loc_8224A6AC;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8224a6b0
	goto loc_8224A6B0;
loc_8224A6AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224A6B0:
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

__attribute__((alias("__imp__sub_8224A6C8"))) PPC_WEAK_FUNC(sub_8224A6C8);
PPC_FUNC_IMPL(__imp__sub_8224A6C8) {
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
	// lwz r3,-24856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24856);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224a7ec
	if (!cr6.eq) goto loc_8224A7EC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224A6F8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224a76c
	if (cr6.eq) goto loc_8224A76C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7424
	ctx.r7.s64 = ctx.r10.s64 + 7424;
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
	// addi r11,r11,-25580
	ctx.r11.s64 = ctx.r11.s64 + -25580;
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
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224A768;
	sub_822ED768(ctx, base);
	// b 0x8224a770
	goto loc_8224A770;
loc_8224A76C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A770:
	// stw r3,-24856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24856, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8224A778;
	sub_82170938(ctx, base);
	// lwz r11,-24856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24856);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224a794
	if (cr6.eq) goto loc_8224A794;
	// bl 0x82170938
	ctx.lr = 0x8224A788;
	sub_82170938(ctx, base);
	// lwz r11,-24856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24856);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224a79c
	goto loc_8224A79C;
loc_8224A794:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224A79C:
	// bl 0x82170938
	ctx.lr = 0x8224A7A0;
	sub_82170938(ctx, base);
	// lwz r11,-24856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24856);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224A7AC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24856);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224a7ec
	if (cr6.eq) goto loc_8224A7EC;
	// bl 0x82170ba8
	ctx.lr = 0x8224A7CC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24856);
	// bne cr6,0x8224a7ec
	if (!cr6.eq) goto loc_8224A7EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A7E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24856);
loc_8224A7EC:
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

__attribute__((alias("__imp__sub_8224A804"))) PPC_WEAK_FUNC(sub_8224A804);
PPC_FUNC_IMPL(__imp__sub_8224A804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A808"))) PPC_WEAK_FUNC(sub_8224A808);
PPC_FUNC_IMPL(__imp__sub_8224A808) {
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
	// lwz r3,-24860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24860);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224a92c
	if (!cr6.eq) goto loc_8224A92C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224A838;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224a8ac
	if (cr6.eq) goto loc_8224A8AC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7448
	ctx.r7.s64 = ctx.r10.s64 + 7448;
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
	// addi r11,r11,-25612
	ctx.r11.s64 = ctx.r11.s64 + -25612;
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
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224A8A8;
	sub_822ED768(ctx, base);
	// b 0x8224a8b0
	goto loc_8224A8B0;
loc_8224A8AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224A8B0:
	// stw r3,-24860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24860, ctx.r3.u32);
	// bl 0x8224a6c8
	ctx.lr = 0x8224A8B8;
	sub_8224A6C8(ctx, base);
	// lwz r11,-24860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24860);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224a8d4
	if (cr6.eq) goto loc_8224A8D4;
	// bl 0x8224a6c8
	ctx.lr = 0x8224A8C8;
	sub_8224A6C8(ctx, base);
	// lwz r11,-24860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24860);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224a8dc
	goto loc_8224A8DC;
loc_8224A8D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224A8DC:
	// bl 0x82170938
	ctx.lr = 0x8224A8E0;
	sub_82170938(ctx, base);
	// lwz r11,-24860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24860);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224A8EC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24860);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224a92c
	if (cr6.eq) goto loc_8224A92C;
	// bl 0x82170ba8
	ctx.lr = 0x8224A90C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24860);
	// bne cr6,0x8224a92c
	if (!cr6.eq) goto loc_8224A92C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A928;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24860);
loc_8224A92C:
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

__attribute__((alias("__imp__sub_8224A944"))) PPC_WEAK_FUNC(sub_8224A944);
PPC_FUNC_IMPL(__imp__sub_8224A944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224A948"))) PPC_WEAK_FUNC(sub_8224A948);
PPC_FUNC_IMPL(__imp__sub_8224A948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8224A950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,16832
	ctx.r30.s64 = ctx.r11.s64 + 16832;
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// lwz r10,-11748(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11748);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,-11748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11748, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	ctx.lr = 0x8224A9A8;
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
	// bne cr6,0x8224a9f8
	if (!cr6.eq) goto loc_8224A9F8;
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
	ctx.lr = 0x8224A9F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224A9F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234a110
	ctx.lr = 0x8224AA04;
	sub_8234A110(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224AA10"))) PPC_WEAK_FUNC(sub_8224AA10);
PPC_FUNC_IMPL(__imp__sub_8224AA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x8224AA18;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,16832
	ctx.r28.s64 = ctx.r11.s64 + 16832;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r30,-32065
	ctx.r30.s64 = -2101411840;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r11,-11756(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11756, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224AA70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// lwz r3,-11752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11752);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224aa98
	if (cr6.eq) goto loc_8224AA98;
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-11764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11764);
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224AA98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224AA98:
	// lwz r11,-11756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bne cr6,0x8224aaac
	if (!cr6.eq) goto loc_8224AAAC;
	// addi r27,r1,88
	ctx.r27.s64 = ctx.r1.s64 + 88;
loc_8224AAAC:
	// lis r30,-32065
	ctx.r30.s64 = -2101411840;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,-11748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11748);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,-11748(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11748, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224AAEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,-11748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11748);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,-11748(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11748, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224AB28;
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
	// bne cr6,0x8224ab78
	if (!cr6.eq) goto loc_8224AB78;
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
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224AB78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224AB78:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8234a2b8
	ctx.lr = 0x8224AB8C;
	sub_8234A2B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82288288
	ctx.lr = 0x8224AB94;
	sub_82288288(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224AB9C"))) PPC_WEAK_FUNC(sub_8224AB9C);
PPC_FUNC_IMPL(__imp__sub_8224AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224ABA0"))) PPC_WEAK_FUNC(sub_8224ABA0);
PPC_FUNC_IMPL(__imp__sub_8224ABA0) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8224abf4
	if (!cr6.eq) goto loc_8224ABF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-32066
	ctx.r9.s64 = -2101477376;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r9,16832
	ctx.r9.s64 = ctx.r9.s64 + 16832;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224ABF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224ABF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224AC08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8224AC1C"))) PPC_WEAK_FUNC(sub_8224AC1C);
PPC_FUNC_IMPL(__imp__sub_8224AC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224AC20"))) PPC_WEAK_FUNC(sub_8224AC20);
PPC_FUNC_IMPL(__imp__sub_8224AC20) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8224ac74
	if (!cr6.eq) goto loc_8224AC74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-32066
	ctx.r9.s64 = -2101477376;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r9,16832
	ctx.r9.s64 = ctx.r9.s64 + 16832;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224AC74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224AC74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224AC88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8224AC9C"))) PPC_WEAK_FUNC(sub_8224AC9C);
PPC_FUNC_IMPL(__imp__sub_8224AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224ACA0"))) PPC_WEAK_FUNC(sub_8224ACA0);
PPC_FUNC_IMPL(__imp__sub_8224ACA0) {
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
	// lwz r3,-24852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24852);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224adc4
	if (!cr6.eq) goto loc_8224ADC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224ACD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224ad44
	if (cr6.eq) goto loc_8224AD44;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7576
	ctx.r7.s64 = ctx.r10.s64 + 7576;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224AD40;
	sub_822ED768(ctx, base);
	// b 0x8224ad48
	goto loc_8224AD48;
loc_8224AD44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224AD48:
	// stw r3,-24852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24852, ctx.r3.u32);
	// bl 0x8224a6c8
	ctx.lr = 0x8224AD50;
	sub_8224A6C8(ctx, base);
	// lwz r11,-24852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24852);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224ad6c
	if (cr6.eq) goto loc_8224AD6C;
	// bl 0x8224a6c8
	ctx.lr = 0x8224AD60;
	sub_8224A6C8(ctx, base);
	// lwz r11,-24852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24852);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224ad74
	goto loc_8224AD74;
loc_8224AD6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224AD74:
	// bl 0x82170938
	ctx.lr = 0x8224AD78;
	sub_82170938(ctx, base);
	// lwz r11,-24852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24852);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224AD84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24852);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224adc4
	if (cr6.eq) goto loc_8224ADC4;
	// bl 0x82170ba8
	ctx.lr = 0x8224ADA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24852);
	// bne cr6,0x8224adc4
	if (!cr6.eq) goto loc_8224ADC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224ADC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24852);
loc_8224ADC4:
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

__attribute__((alias("__imp__sub_8224ADDC"))) PPC_WEAK_FUNC(sub_8224ADDC);
PPC_FUNC_IMPL(__imp__sub_8224ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224ADE0"))) PPC_WEAK_FUNC(sub_8224ADE0);
PPC_FUNC_IMPL(__imp__sub_8224ADE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x8224ADE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,16832
	ctx.r30.s64 = ctx.r11.s64 + 16832;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	ctx.lr = 0x8224AE2C;
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
	// bne cr6,0x8224ae7c
	if (!cr6.eq) goto loc_8224AE7C;
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
	ctx.lr = 0x8224AE7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224AE7C:
	// lwz r11,252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,252(r29)
	PPC_STORE_U32(ctx.r29.u32 + 252, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224AE94"))) PPC_WEAK_FUNC(sub_8224AE94);
PPC_FUNC_IMPL(__imp__sub_8224AE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224AE98"))) PPC_WEAK_FUNC(sub_8224AE98);
PPC_FUNC_IMPL(__imp__sub_8224AE98) {
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
	// lwz r3,-24876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24876);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224afbc
	if (!cr6.eq) goto loc_8224AFBC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224AEC8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224af3c
	if (cr6.eq) goto loc_8224AF3C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7600
	ctx.r7.s64 = ctx.r10.s64 + 7600;
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
	// addi r11,r11,-25736
	ctx.r11.s64 = ctx.r11.s64 + -25736;
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
	// li r5,268
	ctx.r5.s64 = 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224AF38;
	sub_822ED768(ctx, base);
	// b 0x8224af40
	goto loc_8224AF40;
loc_8224AF3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224AF40:
	// stw r3,-24876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24876, ctx.r3.u32);
	// bl 0x8224aca0
	ctx.lr = 0x8224AF48;
	sub_8224ACA0(ctx, base);
	// lwz r11,-24876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24876);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224af64
	if (cr6.eq) goto loc_8224AF64;
	// bl 0x8224aca0
	ctx.lr = 0x8224AF58;
	sub_8224ACA0(ctx, base);
	// lwz r11,-24876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24876);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224af6c
	goto loc_8224AF6C;
loc_8224AF64:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224AF6C:
	// bl 0x82170938
	ctx.lr = 0x8224AF70;
	sub_82170938(ctx, base);
	// lwz r11,-24876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24876);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224AF7C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24876);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224afbc
	if (cr6.eq) goto loc_8224AFBC;
	// bl 0x82170ba8
	ctx.lr = 0x8224AF9C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24876);
	// bne cr6,0x8224afbc
	if (!cr6.eq) goto loc_8224AFBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224AFB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24876);
loc_8224AFBC:
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

__attribute__((alias("__imp__sub_8224AFD4"))) PPC_WEAK_FUNC(sub_8224AFD4);
PPC_FUNC_IMPL(__imp__sub_8224AFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224AFD8"))) PPC_WEAK_FUNC(sub_8224AFD8);
PPC_FUNC_IMPL(__imp__sub_8224AFD8) {
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
	// lwz r3,-24684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24684);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224b0fc
	if (!cr6.eq) goto loc_8224B0FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224B008;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b07c
	if (cr6.eq) goto loc_8224B07C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7744
	ctx.r7.s64 = ctx.r10.s64 + 7744;
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
	// addi r11,r11,-23868
	ctx.r11.s64 = ctx.r11.s64 + -23868;
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
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224B078;
	sub_822ED768(ctx, base);
	// b 0x8224b080
	goto loc_8224B080;
loc_8224B07C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224B080:
	// stw r3,-24684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24684, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224B088;
	sub_821BD940(ctx, base);
	// lwz r11,-24684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24684);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224b0a4
	if (cr6.eq) goto loc_8224B0A4;
	// bl 0x821bd940
	ctx.lr = 0x8224B098;
	sub_821BD940(ctx, base);
	// lwz r11,-24684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24684);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224b0ac
	goto loc_8224B0AC;
loc_8224B0A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224B0AC:
	// bl 0x82170938
	ctx.lr = 0x8224B0B0;
	sub_82170938(ctx, base);
	// lwz r11,-24684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24684);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224B0BC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24684);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224b0fc
	if (cr6.eq) goto loc_8224B0FC;
	// bl 0x82170ba8
	ctx.lr = 0x8224B0DC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24684);
	// bne cr6,0x8224b0fc
	if (!cr6.eq) goto loc_8224B0FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B0F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24684);
loc_8224B0FC:
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

__attribute__((alias("__imp__sub_8224B114"))) PPC_WEAK_FUNC(sub_8224B114);
PPC_FUNC_IMPL(__imp__sub_8224B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224B118"))) PPC_WEAK_FUNC(sub_8224B118);
PPC_FUNC_IMPL(__imp__sub_8224B118) {
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
	// lwz r3,-24664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24664);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224b23c
	if (!cr6.eq) goto loc_8224B23C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224B148;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b1bc
	if (cr6.eq) goto loc_8224B1BC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7944
	ctx.r7.s64 = ctx.r10.s64 + 7944;
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
	// addi r11,r11,-23636
	ctx.r11.s64 = ctx.r11.s64 + -23636;
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
	// li r5,220
	ctx.r5.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224B1B8;
	sub_822ED768(ctx, base);
	// b 0x8224b1c0
	goto loc_8224B1C0;
loc_8224B1BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224B1C0:
	// stw r3,-24664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24664, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224B1C8;
	sub_821BD940(ctx, base);
	// lwz r11,-24664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24664);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224b1e4
	if (cr6.eq) goto loc_8224B1E4;
	// bl 0x821bd940
	ctx.lr = 0x8224B1D8;
	sub_821BD940(ctx, base);
	// lwz r11,-24664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24664);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224b1ec
	goto loc_8224B1EC;
loc_8224B1E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224B1EC:
	// bl 0x82170938
	ctx.lr = 0x8224B1F0;
	sub_82170938(ctx, base);
	// lwz r11,-24664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24664);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224B1FC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24664);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224b23c
	if (cr6.eq) goto loc_8224B23C;
	// bl 0x82170ba8
	ctx.lr = 0x8224B21C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24664);
	// bne cr6,0x8224b23c
	if (!cr6.eq) goto loc_8224B23C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B238;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24664);
loc_8224B23C:
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

__attribute__((alias("__imp__sub_8224B254"))) PPC_WEAK_FUNC(sub_8224B254);
PPC_FUNC_IMPL(__imp__sub_8224B254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224B258"))) PPC_WEAK_FUNC(sub_8224B258);
PPC_FUNC_IMPL(__imp__sub_8224B258) {
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
	// lwz r3,-24660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24660);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224b37c
	if (!cr6.eq) goto loc_8224B37C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224B288;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b2fc
	if (cr6.eq) goto loc_8224B2FC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,8144
	ctx.r7.s64 = ctx.r10.s64 + 8144;
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
	// addi r11,r11,-23588
	ctx.r11.s64 = ctx.r11.s64 + -23588;
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
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224B2F8;
	sub_822ED768(ctx, base);
	// b 0x8224b300
	goto loc_8224B300;
loc_8224B2FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224B300:
	// stw r3,-24660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24660, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224B308;
	sub_821BD940(ctx, base);
	// lwz r11,-24660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24660);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224b324
	if (cr6.eq) goto loc_8224B324;
	// bl 0x821bd940
	ctx.lr = 0x8224B318;
	sub_821BD940(ctx, base);
	// lwz r11,-24660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24660);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224b32c
	goto loc_8224B32C;
loc_8224B324:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224B32C:
	// bl 0x82170938
	ctx.lr = 0x8224B330;
	sub_82170938(ctx, base);
	// lwz r11,-24660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24660);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224B33C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24660);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224b37c
	if (cr6.eq) goto loc_8224B37C;
	// bl 0x82170ba8
	ctx.lr = 0x8224B35C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24660);
	// bne cr6,0x8224b37c
	if (!cr6.eq) goto loc_8224B37C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B378;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24660);
loc_8224B37C:
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

__attribute__((alias("__imp__sub_8224B394"))) PPC_WEAK_FUNC(sub_8224B394);
PPC_FUNC_IMPL(__imp__sub_8224B394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224B398"))) PPC_WEAK_FUNC(sub_8224B398);
PPC_FUNC_IMPL(__imp__sub_8224B398) {
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
	// lwz r3,-24652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24652);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224b4bc
	if (!cr6.eq) goto loc_8224B4BC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224B3C8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b43c
	if (cr6.eq) goto loc_8224B43C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-23504
	ctx.r11.s64 = ctx.r11.s64 + -23504;
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
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224B438;
	sub_822ED768(ctx, base);
	// b 0x8224b440
	goto loc_8224B440;
loc_8224B43C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224B440:
	// stw r3,-24652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24652, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224B448;
	sub_821BD940(ctx, base);
	// lwz r11,-24652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24652);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224b464
	if (cr6.eq) goto loc_8224B464;
	// bl 0x821bd940
	ctx.lr = 0x8224B458;
	sub_821BD940(ctx, base);
	// lwz r11,-24652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24652);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224b46c
	goto loc_8224B46C;
loc_8224B464:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224B46C:
	// bl 0x82170938
	ctx.lr = 0x8224B470;
	sub_82170938(ctx, base);
	// lwz r11,-24652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24652);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224B47C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24652);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224b4bc
	if (cr6.eq) goto loc_8224B4BC;
	// bl 0x82170ba8
	ctx.lr = 0x8224B49C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24652);
	// bne cr6,0x8224b4bc
	if (!cr6.eq) goto loc_8224B4BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B4B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24652);
loc_8224B4BC:
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

__attribute__((alias("__imp__sub_8224B4D4"))) PPC_WEAK_FUNC(sub_8224B4D4);
PPC_FUNC_IMPL(__imp__sub_8224B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224B4D8"))) PPC_WEAK_FUNC(sub_8224B4D8);
PPC_FUNC_IMPL(__imp__sub_8224B4D8) {
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
	// lwz r3,-24656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24656);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224b5fc
	if (!cr6.eq) goto loc_8224B5FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224B508;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b57c
	if (cr6.eq) goto loc_8224B57C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20936
	ctx.r7.s64 = ctx.r10.s64 + 20936;
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
	// addi r11,r11,-23544
	ctx.r11.s64 = ctx.r11.s64 + -23544;
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
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224B578;
	sub_822ED768(ctx, base);
	// b 0x8224b580
	goto loc_8224B580;
loc_8224B57C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224B580:
	// stw r3,-24656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24656, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224B588;
	sub_821BD940(ctx, base);
	// lwz r11,-24656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24656);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224b5a4
	if (cr6.eq) goto loc_8224B5A4;
	// bl 0x821bd940
	ctx.lr = 0x8224B598;
	sub_821BD940(ctx, base);
	// lwz r11,-24656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24656);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224b5ac
	goto loc_8224B5AC;
loc_8224B5A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224B5AC:
	// bl 0x82170938
	ctx.lr = 0x8224B5B0;
	sub_82170938(ctx, base);
	// lwz r11,-24656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24656);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224B5BC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24656);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224b5fc
	if (cr6.eq) goto loc_8224B5FC;
	// bl 0x82170ba8
	ctx.lr = 0x8224B5DC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24656);
	// bne cr6,0x8224b5fc
	if (!cr6.eq) goto loc_8224B5FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B5F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24656);
loc_8224B5FC:
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

__attribute__((alias("__imp__sub_8224B614"))) PPC_WEAK_FUNC(sub_8224B614);
PPC_FUNC_IMPL(__imp__sub_8224B614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224B618"))) PPC_WEAK_FUNC(sub_8224B618);
PPC_FUNC_IMPL(__imp__sub_8224B618) {
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
	// lwz r3,-24648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24648);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224b73c
	if (!cr6.eq) goto loc_8224B73C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224B648;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b6bc
	if (cr6.eq) goto loc_8224B6BC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,8600
	ctx.r7.s64 = ctx.r10.s64 + 8600;
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
	// addi r11,r11,-23460
	ctx.r11.s64 = ctx.r11.s64 + -23460;
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
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224B6B8;
	sub_822ED768(ctx, base);
	// b 0x8224b6c0
	goto loc_8224B6C0;
loc_8224B6BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224B6C0:
	// stw r3,-24648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24648, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224B6C8;
	sub_821BD940(ctx, base);
	// lwz r11,-24648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24648);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224b6e4
	if (cr6.eq) goto loc_8224B6E4;
	// bl 0x821bd940
	ctx.lr = 0x8224B6D8;
	sub_821BD940(ctx, base);
	// lwz r11,-24648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24648);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224b6ec
	goto loc_8224B6EC;
loc_8224B6E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224B6EC:
	// bl 0x82170938
	ctx.lr = 0x8224B6F0;
	sub_82170938(ctx, base);
	// lwz r11,-24648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24648);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224B6FC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24648);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224b73c
	if (cr6.eq) goto loc_8224B73C;
	// bl 0x82170ba8
	ctx.lr = 0x8224B71C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24648);
	// bne cr6,0x8224b73c
	if (!cr6.eq) goto loc_8224B73C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B738;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24648);
loc_8224B73C:
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

__attribute__((alias("__imp__sub_8224B754"))) PPC_WEAK_FUNC(sub_8224B754);
PPC_FUNC_IMPL(__imp__sub_8224B754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224B758"))) PPC_WEAK_FUNC(sub_8224B758);
PPC_FUNC_IMPL(__imp__sub_8224B758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8224B760;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lis r30,-32065
	ctx.r30.s64 = -2101411840;
	// addi r29,r11,16832
	ctx.r29.s64 = ctx.r11.s64 + 16832;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,-11756(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11756, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B7A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// lwz r3,-11752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11752);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b7d0
	if (cr6.eq) goto loc_8224B7D0;
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-11764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11764);
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B7D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224B7D0:
	// lwz r11,-11756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x8224b7e4
	if (!cr6.eq) goto loc_8224B7E4;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_8224B7E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8224b820
	if (!cr6.eq) goto loc_8224B820;
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
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224B820:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224b88c
	if (cr6.eq) goto loc_8224B88C;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8224b88c
	if (cr6.eq) goto loc_8224B88C;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8224b88c
	if (cr6.eq) goto loc_8224B88C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822a87a8
	ctx.lr = 0x8224B854;
	sub_822A87A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a87a8
	ctx.lr = 0x8224B868;
	sub_822A87A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821707c0
	ctx.lr = 0x8224B870;
	sub_821707C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fc470
	ctx.lr = 0x8224B87C;
	sub_821FC470(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821fc470
	ctx.lr = 0x8224B884;
	sub_821FC470(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8224b8a8
	if (!cr6.eq) goto loc_8224B8A8;
loc_8224B88C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824cd4c0
	ctx.lr = 0x8224B898;
	sub_824CD4C0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,220(r28)
	PPC_STORE_U32(ctx.r28.u32 + 220, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 224, ctx.r11.u32);
loc_8224B8A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224B8B0"))) PPC_WEAK_FUNC(sub_8224B8B0);
PPC_FUNC_IMPL(__imp__sub_8224B8B0) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8224b904
	if (!cr6.eq) goto loc_8224B904;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-32066
	ctx.r9.s64 = -2101477376;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r9,16832
	ctx.r9.s64 = ctx.r9.s64 + 16832;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B904;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224B904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ce010
	ctx.lr = 0x8224B90C;
	sub_824CE010(ctx, base);
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

__attribute__((alias("__imp__sub_8224B920"))) PPC_WEAK_FUNC(sub_8224B920);
PPC_FUNC_IMPL(__imp__sub_8224B920) {
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
	// lwz r3,-22908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22908);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224ba44
	if (!cr6.eq) goto loc_8224BA44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224B950;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b9c4
	if (cr6.eq) goto loc_8224B9C4;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11968
	ctx.r7.s64 = ctx.r10.s64 + -11968;
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-25524
	ctx.r11.s64 = ctx.r11.s64 + -25524;
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
	ctx.lr = 0x8224B9C0;
	sub_822ED768(ctx, base);
	// b 0x8224b9c8
	goto loc_8224B9C8;
loc_8224B9C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224B9C8:
	// stw r3,-22908(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22908, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224B9D0;
	sub_821BD940(ctx, base);
	// lwz r11,-22908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22908);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224b9ec
	if (cr6.eq) goto loc_8224B9EC;
	// bl 0x821bd940
	ctx.lr = 0x8224B9E0;
	sub_821BD940(ctx, base);
	// lwz r11,-22908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22908);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224b9f4
	goto loc_8224B9F4;
loc_8224B9EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224B9F4:
	// bl 0x82170938
	ctx.lr = 0x8224B9F8;
	sub_82170938(ctx, base);
	// lwz r11,-22908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22908);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224BA04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22908);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224ba44
	if (cr6.eq) goto loc_8224BA44;
	// bl 0x82170ba8
	ctx.lr = 0x8224BA24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22908);
	// bne cr6,0x8224ba44
	if (!cr6.eq) goto loc_8224BA44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BA40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22908);
loc_8224BA44:
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

__attribute__((alias("__imp__sub_8224BA5C"))) PPC_WEAK_FUNC(sub_8224BA5C);
PPC_FUNC_IMPL(__imp__sub_8224BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224BA60"))) PPC_WEAK_FUNC(sub_8224BA60);
PPC_FUNC_IMPL(__imp__sub_8224BA60) {
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
	// lwz r3,-24636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24636);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224bb84
	if (!cr6.eq) goto loc_8224BB84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224BA90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224bb04
	if (cr6.eq) goto loc_8224BB04;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,8856
	ctx.r7.s64 = ctx.r10.s64 + 8856;
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
	// addi r11,r11,-23344
	ctx.r11.s64 = ctx.r11.s64 + -23344;
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
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224BB00;
	sub_822ED768(ctx, base);
	// b 0x8224bb08
	goto loc_8224BB08;
loc_8224BB04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224BB08:
	// stw r3,-24636(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24636, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224BB10;
	sub_821BD940(ctx, base);
	// lwz r11,-24636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24636);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224bb2c
	if (cr6.eq) goto loc_8224BB2C;
	// bl 0x821bd940
	ctx.lr = 0x8224BB20;
	sub_821BD940(ctx, base);
	// lwz r11,-24636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24636);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224bb34
	goto loc_8224BB34;
loc_8224BB2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224BB34:
	// bl 0x82170938
	ctx.lr = 0x8224BB38;
	sub_82170938(ctx, base);
	// lwz r11,-24636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24636);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224BB44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24636);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224bb84
	if (cr6.eq) goto loc_8224BB84;
	// bl 0x82170ba8
	ctx.lr = 0x8224BB64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24636);
	// bne cr6,0x8224bb84
	if (!cr6.eq) goto loc_8224BB84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BB80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24636);
loc_8224BB84:
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

__attribute__((alias("__imp__sub_8224BB9C"))) PPC_WEAK_FUNC(sub_8224BB9C);
PPC_FUNC_IMPL(__imp__sub_8224BB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224BBA0"))) PPC_WEAK_FUNC(sub_8224BBA0);
PPC_FUNC_IMPL(__imp__sub_8224BBA0) {
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
	// lwz r3,-24624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24624);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224bcc4
	if (!cr6.eq) goto loc_8224BCC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224BBD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224bc44
	if (cr6.eq) goto loc_8224BC44;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,9056
	ctx.r7.s64 = ctx.r10.s64 + 9056;
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
	// addi r11,r11,-23164
	ctx.r11.s64 = ctx.r11.s64 + -23164;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224BC40;
	sub_822ED768(ctx, base);
	// b 0x8224bc48
	goto loc_8224BC48;
loc_8224BC44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224BC48:
	// stw r3,-24624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24624, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224BC50;
	sub_821BD940(ctx, base);
	// lwz r11,-24624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24624);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224bc6c
	if (cr6.eq) goto loc_8224BC6C;
	// bl 0x821bd940
	ctx.lr = 0x8224BC60;
	sub_821BD940(ctx, base);
	// lwz r11,-24624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24624);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224bc74
	goto loc_8224BC74;
loc_8224BC6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224BC74:
	// bl 0x82170938
	ctx.lr = 0x8224BC78;
	sub_82170938(ctx, base);
	// lwz r11,-24624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24624);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224BC84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24624);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224bcc4
	if (cr6.eq) goto loc_8224BCC4;
	// bl 0x82170ba8
	ctx.lr = 0x8224BCA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24624);
	// bne cr6,0x8224bcc4
	if (!cr6.eq) goto loc_8224BCC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BCC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24624);
loc_8224BCC4:
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

__attribute__((alias("__imp__sub_8224BCDC"))) PPC_WEAK_FUNC(sub_8224BCDC);
PPC_FUNC_IMPL(__imp__sub_8224BCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224BCE0"))) PPC_WEAK_FUNC(sub_8224BCE0);
PPC_FUNC_IMPL(__imp__sub_8224BCE0) {
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
	// lwz r3,-24620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24620);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224be04
	if (!cr6.eq) goto loc_8224BE04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224BD10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224bd84
	if (cr6.eq) goto loc_8224BD84;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,9424
	ctx.r7.s64 = ctx.r10.s64 + 9424;
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
	// addi r11,r11,-23136
	ctx.r11.s64 = ctx.r11.s64 + -23136;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224BD80;
	sub_822ED768(ctx, base);
	// b 0x8224bd88
	goto loc_8224BD88;
loc_8224BD84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224BD88:
	// stw r3,-24620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24620, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224BD90;
	sub_821BD940(ctx, base);
	// lwz r11,-24620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24620);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224bdac
	if (cr6.eq) goto loc_8224BDAC;
	// bl 0x821bd940
	ctx.lr = 0x8224BDA0;
	sub_821BD940(ctx, base);
	// lwz r11,-24620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24620);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224bdb4
	goto loc_8224BDB4;
loc_8224BDAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224BDB4:
	// bl 0x82170938
	ctx.lr = 0x8224BDB8;
	sub_82170938(ctx, base);
	// lwz r11,-24620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24620);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224BDC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24620);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224be04
	if (cr6.eq) goto loc_8224BE04;
	// bl 0x82170ba8
	ctx.lr = 0x8224BDE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24620);
	// bne cr6,0x8224be04
	if (!cr6.eq) goto loc_8224BE04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BE00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24620);
loc_8224BE04:
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

__attribute__((alias("__imp__sub_8224BE1C"))) PPC_WEAK_FUNC(sub_8224BE1C);
PPC_FUNC_IMPL(__imp__sub_8224BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224BE20"))) PPC_WEAK_FUNC(sub_8224BE20);
PPC_FUNC_IMPL(__imp__sub_8224BE20) {
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
	// lwz r3,-24616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24616);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224bf44
	if (!cr6.eq) goto loc_8224BF44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224BE50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224bec4
	if (cr6.eq) goto loc_8224BEC4;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,9624
	ctx.r7.s64 = ctx.r10.s64 + 9624;
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
	// addi r11,r11,-23096
	ctx.r11.s64 = ctx.r11.s64 + -23096;
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
	// li r5,220
	ctx.r5.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224BEC0;
	sub_822ED768(ctx, base);
	// b 0x8224bec8
	goto loc_8224BEC8;
loc_8224BEC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224BEC8:
	// stw r3,-24616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24616, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224BED0;
	sub_821BD940(ctx, base);
	// lwz r11,-24616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24616);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224beec
	if (cr6.eq) goto loc_8224BEEC;
	// bl 0x821bd940
	ctx.lr = 0x8224BEE0;
	sub_821BD940(ctx, base);
	// lwz r11,-24616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24616);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224bef4
	goto loc_8224BEF4;
loc_8224BEEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224BEF4:
	// bl 0x82170938
	ctx.lr = 0x8224BEF8;
	sub_82170938(ctx, base);
	// lwz r11,-24616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24616);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224BF04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24616);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224bf44
	if (cr6.eq) goto loc_8224BF44;
	// bl 0x82170ba8
	ctx.lr = 0x8224BF24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24616);
	// bne cr6,0x8224bf44
	if (!cr6.eq) goto loc_8224BF44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BF40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24616);
loc_8224BF44:
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

__attribute__((alias("__imp__sub_8224BF5C"))) PPC_WEAK_FUNC(sub_8224BF5C);
PPC_FUNC_IMPL(__imp__sub_8224BF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224BF60"))) PPC_WEAK_FUNC(sub_8224BF60);
PPC_FUNC_IMPL(__imp__sub_8224BF60) {
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
	// lwz r3,-24612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24612);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224c084
	if (!cr6.eq) goto loc_8224C084;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224BF90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224c004
	if (cr6.eq) goto loc_8224C004;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,9824
	ctx.r7.s64 = ctx.r10.s64 + 9824;
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
	// addi r11,r11,-23056
	ctx.r11.s64 = ctx.r11.s64 + -23056;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224C000;
	sub_822ED768(ctx, base);
	// b 0x8224c008
	goto loc_8224C008;
loc_8224C004:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224C008:
	// stw r3,-24612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24612, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224C010;
	sub_821BD940(ctx, base);
	// lwz r11,-24612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24612);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224c02c
	if (cr6.eq) goto loc_8224C02C;
	// bl 0x821bd940
	ctx.lr = 0x8224C020;
	sub_821BD940(ctx, base);
	// lwz r11,-24612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24612);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224c034
	goto loc_8224C034;
loc_8224C02C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224C034:
	// bl 0x82170938
	ctx.lr = 0x8224C038;
	sub_82170938(ctx, base);
	// lwz r11,-24612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24612);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224C044;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24612);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224c084
	if (cr6.eq) goto loc_8224C084;
	// bl 0x82170ba8
	ctx.lr = 0x8224C064;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24612);
	// bne cr6,0x8224c084
	if (!cr6.eq) goto loc_8224C084;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24612);
loc_8224C084:
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

__attribute__((alias("__imp__sub_8224C09C"))) PPC_WEAK_FUNC(sub_8224C09C);
PPC_FUNC_IMPL(__imp__sub_8224C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C0A0"))) PPC_WEAK_FUNC(sub_8224C0A0);
PPC_FUNC_IMPL(__imp__sub_8224C0A0) {
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
	// lwz r3,-24608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224c1c4
	if (!cr6.eq) goto loc_8224C1C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224C0D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224c144
	if (cr6.eq) goto loc_8224C144;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10024
	ctx.r7.s64 = ctx.r10.s64 + 10024;
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
	// addi r11,r11,-23016
	ctx.r11.s64 = ctx.r11.s64 + -23016;
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
	// li r5,220
	ctx.r5.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224C140;
	sub_822ED768(ctx, base);
	// b 0x8224c148
	goto loc_8224C148;
loc_8224C144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224C148:
	// stw r3,-24608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24608, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224C150;
	sub_821BD940(ctx, base);
	// lwz r11,-24608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24608);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224c16c
	if (cr6.eq) goto loc_8224C16C;
	// bl 0x821bd940
	ctx.lr = 0x8224C160;
	sub_821BD940(ctx, base);
	// lwz r11,-24608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24608);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224c174
	goto loc_8224C174;
loc_8224C16C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224C174:
	// bl 0x82170938
	ctx.lr = 0x8224C178;
	sub_82170938(ctx, base);
	// lwz r11,-24608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24608);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224C184;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24608);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224c1c4
	if (cr6.eq) goto loc_8224C1C4;
	// bl 0x82170ba8
	ctx.lr = 0x8224C1A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24608);
	// bne cr6,0x8224c1c4
	if (!cr6.eq) goto loc_8224C1C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C1C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24608);
loc_8224C1C4:
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

__attribute__((alias("__imp__sub_8224C1DC"))) PPC_WEAK_FUNC(sub_8224C1DC);
PPC_FUNC_IMPL(__imp__sub_8224C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C1E0"))) PPC_WEAK_FUNC(sub_8224C1E0);
PPC_FUNC_IMPL(__imp__sub_8224C1E0) {
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
	// lwz r3,-24604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24604);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224c304
	if (!cr6.eq) goto loc_8224C304;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224C210;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224c284
	if (cr6.eq) goto loc_8224C284;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10224
	ctx.r7.s64 = ctx.r10.s64 + 10224;
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
	// addi r11,r11,-22944
	ctx.r11.s64 = ctx.r11.s64 + -22944;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224C280;
	sub_822ED768(ctx, base);
	// b 0x8224c288
	goto loc_8224C288;
loc_8224C284:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224C288:
	// stw r3,-24604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24604, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224C290;
	sub_821BD940(ctx, base);
	// lwz r11,-24604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24604);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224c2ac
	if (cr6.eq) goto loc_8224C2AC;
	// bl 0x821bd940
	ctx.lr = 0x8224C2A0;
	sub_821BD940(ctx, base);
	// lwz r11,-24604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24604);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224c2b4
	goto loc_8224C2B4;
loc_8224C2AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224C2B4:
	// bl 0x82170938
	ctx.lr = 0x8224C2B8;
	sub_82170938(ctx, base);
	// lwz r11,-24604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24604);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224C2C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24604);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224c304
	if (cr6.eq) goto loc_8224C304;
	// bl 0x82170ba8
	ctx.lr = 0x8224C2E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24604);
	// bne cr6,0x8224c304
	if (!cr6.eq) goto loc_8224C304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24604);
loc_8224C304:
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

__attribute__((alias("__imp__sub_8224C31C"))) PPC_WEAK_FUNC(sub_8224C31C);
PPC_FUNC_IMPL(__imp__sub_8224C31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C320"))) PPC_WEAK_FUNC(sub_8224C320);
PPC_FUNC_IMPL(__imp__sub_8224C320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x8224C328;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,16832
	ctx.r30.s64 = ctx.r11.s64 + 16832;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	ctx.lr = 0x8224C36C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8224c3a8
	if (!cr6.eq) goto loc_8224C3A8;
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
	ctx.lr = 0x8224C3A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224C3A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C3C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224C3C8"))) PPC_WEAK_FUNC(sub_8224C3C8);
PPC_FUNC_IMPL(__imp__sub_8224C3C8) {
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
	// lwz r3,-24680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24680);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224c4ec
	if (!cr6.eq) goto loc_8224C4EC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224C3F8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224c46c
	if (cr6.eq) goto loc_8224C46C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10352
	ctx.r7.s64 = ctx.r10.s64 + 10352;
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
	// addi r11,r11,-23812
	ctx.r11.s64 = ctx.r11.s64 + -23812;
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
	// li r5,272
	ctx.r5.s64 = 272;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224C468;
	sub_822ED768(ctx, base);
	// b 0x8224c470
	goto loc_8224C470;
loc_8224C46C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224C470:
	// stw r3,-24680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24680, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x8224C478;
	sub_821FC748(ctx, base);
	// lwz r11,-24680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24680);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224c494
	if (cr6.eq) goto loc_8224C494;
	// bl 0x821fc748
	ctx.lr = 0x8224C488;
	sub_821FC748(ctx, base);
	// lwz r11,-24680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24680);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224c49c
	goto loc_8224C49C;
loc_8224C494:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224C49C:
	// bl 0x82170938
	ctx.lr = 0x8224C4A0;
	sub_82170938(ctx, base);
	// lwz r11,-24680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24680);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224C4AC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24680);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224c4ec
	if (cr6.eq) goto loc_8224C4EC;
	// bl 0x82170ba8
	ctx.lr = 0x8224C4CC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24680);
	// bne cr6,0x8224c4ec
	if (!cr6.eq) goto loc_8224C4EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C4E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24680);
loc_8224C4EC:
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

__attribute__((alias("__imp__sub_8224C504"))) PPC_WEAK_FUNC(sub_8224C504);
PPC_FUNC_IMPL(__imp__sub_8224C504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C508"))) PPC_WEAK_FUNC(sub_8224C508);
PPC_FUNC_IMPL(__imp__sub_8224C508) {
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
	// lwz r3,-24676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24676);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224c62c
	if (!cr6.eq) goto loc_8224C62C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224C538;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224c5ac
	if (cr6.eq) goto loc_8224C5AC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10688
	ctx.r7.s64 = ctx.r10.s64 + 10688;
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
	// addi r11,r11,-23768
	ctx.r11.s64 = ctx.r11.s64 + -23768;
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
	// li r5,272
	ctx.r5.s64 = 272;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224C5A8;
	sub_822ED768(ctx, base);
	// b 0x8224c5b0
	goto loc_8224C5B0;
loc_8224C5AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224C5B0:
	// stw r3,-24676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24676, ctx.r3.u32);
	// bl 0x8224c3c8
	ctx.lr = 0x8224C5B8;
	sub_8224C3C8(ctx, base);
	// lwz r11,-24676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24676);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224c5d4
	if (cr6.eq) goto loc_8224C5D4;
	// bl 0x8224c3c8
	ctx.lr = 0x8224C5C8;
	sub_8224C3C8(ctx, base);
	// lwz r11,-24676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24676);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224c5dc
	goto loc_8224C5DC;
loc_8224C5D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224C5DC:
	// bl 0x82170938
	ctx.lr = 0x8224C5E0;
	sub_82170938(ctx, base);
	// lwz r11,-24676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24676);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224C5EC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24676);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224c62c
	if (cr6.eq) goto loc_8224C62C;
	// bl 0x82170ba8
	ctx.lr = 0x8224C60C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24676);
	// bne cr6,0x8224c62c
	if (!cr6.eq) goto loc_8224C62C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C628;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24676);
loc_8224C62C:
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

__attribute__((alias("__imp__sub_8224C644"))) PPC_WEAK_FUNC(sub_8224C644);
PPC_FUNC_IMPL(__imp__sub_8224C644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C648"))) PPC_WEAK_FUNC(sub_8224C648);
PPC_FUNC_IMPL(__imp__sub_8224C648) {
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
	// lwz r3,-24672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24672);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224c76c
	if (!cr6.eq) goto loc_8224C76C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224C678;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224c6ec
	if (cr6.eq) goto loc_8224C6EC;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-8008
	ctx.r7.s64 = ctx.r10.s64 + -8008;
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
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
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
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224C6E8;
	sub_822ED768(ctx, base);
	// b 0x8224c6f0
	goto loc_8224C6F0;
loc_8224C6EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224C6F0:
	// stw r3,-24672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24672, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x8224C6F8;
	sub_821FC748(ctx, base);
	// lwz r11,-24672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24672);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224c714
	if (cr6.eq) goto loc_8224C714;
	// bl 0x821fc748
	ctx.lr = 0x8224C708;
	sub_821FC748(ctx, base);
	// lwz r11,-24672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24672);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224c71c
	goto loc_8224C71C;
loc_8224C714:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224C71C:
	// bl 0x82170938
	ctx.lr = 0x8224C720;
	sub_82170938(ctx, base);
	// lwz r11,-24672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24672);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224C72C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24672);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224c76c
	if (cr6.eq) goto loc_8224C76C;
	// bl 0x82170ba8
	ctx.lr = 0x8224C74C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24672);
	// bne cr6,0x8224c76c
	if (!cr6.eq) goto loc_8224C76C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C768;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24672);
loc_8224C76C:
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

__attribute__((alias("__imp__sub_8224C784"))) PPC_WEAK_FUNC(sub_8224C784);
PPC_FUNC_IMPL(__imp__sub_8224C784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C788"))) PPC_WEAK_FUNC(sub_8224C788);
PPC_FUNC_IMPL(__imp__sub_8224C788) {
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
	// lwz r3,-24644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24644);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224c8ac
	if (!cr6.eq) goto loc_8224C8AC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224C7B8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224c82c
	if (cr6.eq) goto loc_8224C82C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10792
	ctx.r7.s64 = ctx.r10.s64 + 10792;
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
	// addi r11,r11,-23412
	ctx.r11.s64 = ctx.r11.s64 + -23412;
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
	// li r5,248
	ctx.r5.s64 = 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224C828;
	sub_822ED768(ctx, base);
	// b 0x8224c830
	goto loc_8224C830;
loc_8224C82C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224C830:
	// stw r3,-24644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24644, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x8224C838;
	sub_821FC748(ctx, base);
	// lwz r11,-24644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24644);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224c854
	if (cr6.eq) goto loc_8224C854;
	// bl 0x821fc748
	ctx.lr = 0x8224C848;
	sub_821FC748(ctx, base);
	// lwz r11,-24644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24644);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224c85c
	goto loc_8224C85C;
loc_8224C854:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224C85C:
	// bl 0x82170938
	ctx.lr = 0x8224C860;
	sub_82170938(ctx, base);
	// lwz r11,-24644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24644);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224C86C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24644);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224c8ac
	if (cr6.eq) goto loc_8224C8AC;
	// bl 0x82170ba8
	ctx.lr = 0x8224C88C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24644);
	// bne cr6,0x8224c8ac
	if (!cr6.eq) goto loc_8224C8AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C8A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24644);
loc_8224C8AC:
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

__attribute__((alias("__imp__sub_8224C8C4"))) PPC_WEAK_FUNC(sub_8224C8C4);
PPC_FUNC_IMPL(__imp__sub_8224C8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224C8C8"))) PPC_WEAK_FUNC(sub_8224C8C8);
PPC_FUNC_IMPL(__imp__sub_8224C8C8) {
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
	// lwz r3,-24640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24640);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224c9ec
	if (!cr6.eq) goto loc_8224C9EC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224C8F8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224c96c
	if (cr6.eq) goto loc_8224C96C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10920
	ctx.r7.s64 = ctx.r10.s64 + 10920;
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
	// addi r11,r11,-23384
	ctx.r11.s64 = ctx.r11.s64 + -23384;
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
	ctx.lr = 0x8224C968;
	sub_822ED768(ctx, base);
	// b 0x8224c970
	goto loc_8224C970;
loc_8224C96C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224C970:
	// stw r3,-24640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24640, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x8224C978;
	sub_821FC748(ctx, base);
	// lwz r11,-24640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24640);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224c994
	if (cr6.eq) goto loc_8224C994;
	// bl 0x821fc748
	ctx.lr = 0x8224C988;
	sub_821FC748(ctx, base);
	// lwz r11,-24640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24640);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224c99c
	goto loc_8224C99C;
loc_8224C994:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224C99C:
	// bl 0x82170938
	ctx.lr = 0x8224C9A0;
	sub_82170938(ctx, base);
	// lwz r11,-24640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24640);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224C9AC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24640);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224c9ec
	if (cr6.eq) goto loc_8224C9EC;
	// bl 0x82170ba8
	ctx.lr = 0x8224C9CC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24640);
	// bne cr6,0x8224c9ec
	if (!cr6.eq) goto loc_8224C9EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C9E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24640);
loc_8224C9EC:
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

__attribute__((alias("__imp__sub_8224CA04"))) PPC_WEAK_FUNC(sub_8224CA04);
PPC_FUNC_IMPL(__imp__sub_8224CA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CA08"))) PPC_WEAK_FUNC(sub_8224CA08);
PPC_FUNC_IMPL(__imp__sub_8224CA08) {
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
	// lwz r3,-24632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24632);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224cb2c
	if (!cr6.eq) goto loc_8224CB2C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224CA38;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224caac
	if (cr6.eq) goto loc_8224CAAC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12040
	ctx.r7.s64 = ctx.r10.s64 + 12040;
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
	// addi r11,r11,-23296
	ctx.r11.s64 = ctx.r11.s64 + -23296;
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
	ctx.lr = 0x8224CAA8;
	sub_822ED768(ctx, base);
	// b 0x8224cab0
	goto loc_8224CAB0;
loc_8224CAAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224CAB0:
	// stw r3,-24632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24632, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x8224CAB8;
	sub_821FC748(ctx, base);
	// lwz r11,-24632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24632);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224cad4
	if (cr6.eq) goto loc_8224CAD4;
	// bl 0x821fc748
	ctx.lr = 0x8224CAC8;
	sub_821FC748(ctx, base);
	// lwz r11,-24632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24632);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224cadc
	goto loc_8224CADC;
loc_8224CAD4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224CADC:
	// bl 0x82170938
	ctx.lr = 0x8224CAE0;
	sub_82170938(ctx, base);
	// lwz r11,-24632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24632);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224CAEC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24632);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224cb2c
	if (cr6.eq) goto loc_8224CB2C;
	// bl 0x82170ba8
	ctx.lr = 0x8224CB0C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24632);
	// bne cr6,0x8224cb2c
	if (!cr6.eq) goto loc_8224CB2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CB28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24632);
loc_8224CB2C:
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

__attribute__((alias("__imp__sub_8224CB44"))) PPC_WEAK_FUNC(sub_8224CB44);
PPC_FUNC_IMPL(__imp__sub_8224CB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CB48"))) PPC_WEAK_FUNC(sub_8224CB48);
PPC_FUNC_IMPL(__imp__sub_8224CB48) {
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
	// lwz r3,-24628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24628);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224cc6c
	if (!cr6.eq) goto loc_8224CC6C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224CB78;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224cbec
	if (cr6.eq) goto loc_8224CBEC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12168
	ctx.r7.s64 = ctx.r10.s64 + 12168;
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
	// addi r11,r11,-23232
	ctx.r11.s64 = ctx.r11.s64 + -23232;
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
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224CBE8;
	sub_822ED768(ctx, base);
	// b 0x8224cbf0
	goto loc_8224CBF0;
loc_8224CBEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224CBF0:
	// stw r3,-24628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24628, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x8224CBF8;
	sub_821FC748(ctx, base);
	// lwz r11,-24628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24628);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224cc14
	if (cr6.eq) goto loc_8224CC14;
	// bl 0x821fc748
	ctx.lr = 0x8224CC08;
	sub_821FC748(ctx, base);
	// lwz r11,-24628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24628);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224cc1c
	goto loc_8224CC1C;
loc_8224CC14:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224CC1C:
	// bl 0x82170938
	ctx.lr = 0x8224CC20;
	sub_82170938(ctx, base);
	// lwz r11,-24628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24628);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224CC2C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24628);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224cc6c
	if (cr6.eq) goto loc_8224CC6C;
	// bl 0x82170ba8
	ctx.lr = 0x8224CC4C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24628);
	// bne cr6,0x8224cc6c
	if (!cr6.eq) goto loc_8224CC6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CC68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24628);
loc_8224CC6C:
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

__attribute__((alias("__imp__sub_8224CC84"))) PPC_WEAK_FUNC(sub_8224CC84);
PPC_FUNC_IMPL(__imp__sub_8224CC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CC88"))) PPC_WEAK_FUNC(sub_8224CC88);
PPC_FUNC_IMPL(__imp__sub_8224CC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x8224CC90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,16832
	ctx.r30.s64 = ctx.r11.s64 + 16832;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	ctx.lr = 0x8224CCD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// lwz r9,-11748(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11748);
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,-11748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11748, ctx.r9.u32);
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
	ctx.lr = 0x8224CD1C;
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
	// bne cr6,0x8224cd6c
	if (!cr6.eq) goto loc_8224CD6C;
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
	ctx.lr = 0x8224CD6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224CD6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82407610
	ctx.lr = 0x8224CD7C;
	sub_82407610(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224CD84"))) PPC_WEAK_FUNC(sub_8224CD84);
PPC_FUNC_IMPL(__imp__sub_8224CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CD88"))) PPC_WEAK_FUNC(sub_8224CD88);
PPC_FUNC_IMPL(__imp__sub_8224CD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x8224CD90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,16832
	ctx.r30.s64 = ctx.r11.s64 + 16832;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	ctx.lr = 0x8224CDD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8224ce10
	if (!cr6.eq) goto loc_8224CE10;
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
	ctx.lr = 0x8224CE10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8224CE10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824070b0
	ctx.lr = 0x8224CE1C;
	sub_824070B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224CE24"))) PPC_WEAK_FUNC(sub_8224CE24);
PPC_FUNC_IMPL(__imp__sub_8224CE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CE28"))) PPC_WEAK_FUNC(sub_8224CE28);
PPC_FUNC_IMPL(__imp__sub_8224CE28) {
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
	// lwz r3,-24020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24020);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224cf4c
	if (!cr6.eq) goto loc_8224CF4C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224CE58;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224cecc
	if (cr6.eq) goto loc_8224CECC;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12264
	ctx.r7.s64 = ctx.r10.s64 + 12264;
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
	// addi r11,r11,-13604
	ctx.r11.s64 = ctx.r11.s64 + -13604;
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
	// li r5,296
	ctx.r5.s64 = 296;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224CEC8;
	sub_822ED768(ctx, base);
	// b 0x8224ced0
	goto loc_8224CED0;
loc_8224CECC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224CED0:
	// stw r3,-24020(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24020, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x8224CED8;
	sub_821FC748(ctx, base);
	// lwz r11,-24020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24020);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224cef4
	if (cr6.eq) goto loc_8224CEF4;
	// bl 0x821fc748
	ctx.lr = 0x8224CEE8;
	sub_821FC748(ctx, base);
	// lwz r11,-24020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24020);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224cefc
	goto loc_8224CEFC;
loc_8224CEF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224CEFC:
	// bl 0x82170938
	ctx.lr = 0x8224CF00;
	sub_82170938(ctx, base);
	// lwz r11,-24020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24020);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224CF0C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24020);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224cf4c
	if (cr6.eq) goto loc_8224CF4C;
	// bl 0x82170ba8
	ctx.lr = 0x8224CF2C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24020);
	// bne cr6,0x8224cf4c
	if (!cr6.eq) goto loc_8224CF4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CF48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24020);
loc_8224CF4C:
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

__attribute__((alias("__imp__sub_8224CF64"))) PPC_WEAK_FUNC(sub_8224CF64);
PPC_FUNC_IMPL(__imp__sub_8224CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224CF68"))) PPC_WEAK_FUNC(sub_8224CF68);
PPC_FUNC_IMPL(__imp__sub_8224CF68) {
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
	// lwz r3,-24592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24592);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224d08c
	if (!cr6.eq) goto loc_8224D08C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224CF98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224d00c
	if (cr6.eq) goto loc_8224D00C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12312
	ctx.r7.s64 = ctx.r10.s64 + 12312;
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
	// addi r11,r11,-22816
	ctx.r11.s64 = ctx.r11.s64 + -22816;
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
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224D008;
	sub_822ED768(ctx, base);
	// b 0x8224d010
	goto loc_8224D010;
loc_8224D00C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224D010:
	// stw r3,-24592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24592, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x8224D018;
	sub_821FC748(ctx, base);
	// lwz r11,-24592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24592);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224d034
	if (cr6.eq) goto loc_8224D034;
	// bl 0x821fc748
	ctx.lr = 0x8224D028;
	sub_821FC748(ctx, base);
	// lwz r11,-24592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24592);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224d03c
	goto loc_8224D03C;
loc_8224D034:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224D03C:
	// bl 0x82170938
	ctx.lr = 0x8224D040;
	sub_82170938(ctx, base);
	// lwz r11,-24592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24592);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224D04C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24592);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224d08c
	if (cr6.eq) goto loc_8224D08C;
	// bl 0x82170ba8
	ctx.lr = 0x8224D06C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24592);
	// bne cr6,0x8224d08c
	if (!cr6.eq) goto loc_8224D08C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D088;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24592);
loc_8224D08C:
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

__attribute__((alias("__imp__sub_8224D0A4"))) PPC_WEAK_FUNC(sub_8224D0A4);
PPC_FUNC_IMPL(__imp__sub_8224D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D0A8"))) PPC_WEAK_FUNC(sub_8224D0A8);
PPC_FUNC_IMPL(__imp__sub_8224D0A8) {
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
	// lwz r3,-24528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224d1cc
	if (!cr6.eq) goto loc_8224D1CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224D0D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224d14c
	if (cr6.eq) goto loc_8224D14C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,13072
	ctx.r7.s64 = ctx.r10.s64 + 13072;
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
	// addi r11,r11,-22112
	ctx.r11.s64 = ctx.r11.s64 + -22112;
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
	// li r5,316
	ctx.r5.s64 = 316;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224D148;
	sub_822ED768(ctx, base);
	// b 0x8224d150
	goto loc_8224D150;
loc_8224D14C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224D150:
	// stw r3,-24528(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24528, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x8224D158;
	sub_821FC748(ctx, base);
	// lwz r11,-24528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224d174
	if (cr6.eq) goto loc_8224D174;
	// bl 0x821fc748
	ctx.lr = 0x8224D168;
	sub_821FC748(ctx, base);
	// lwz r11,-24528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224d17c
	goto loc_8224D17C;
loc_8224D174:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224D17C:
	// bl 0x82170938
	ctx.lr = 0x8224D180;
	sub_82170938(ctx, base);
	// lwz r11,-24528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224D18C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224d1cc
	if (cr6.eq) goto loc_8224D1CC;
	// bl 0x82170ba8
	ctx.lr = 0x8224D1AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
	// bne cr6,0x8224d1cc
	if (!cr6.eq) goto loc_8224D1CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D1C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24528);
loc_8224D1CC:
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

__attribute__((alias("__imp__sub_8224D1E4"))) PPC_WEAK_FUNC(sub_8224D1E4);
PPC_FUNC_IMPL(__imp__sub_8224D1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D1E8"))) PPC_WEAK_FUNC(sub_8224D1E8);
PPC_FUNC_IMPL(__imp__sub_8224D1E8) {
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
	// lwz r3,-24524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24524);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224d30c
	if (!cr6.eq) goto loc_8224D30C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224D218;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224d28c
	if (cr6.eq) goto loc_8224D28C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,13200
	ctx.r7.s64 = ctx.r10.s64 + 13200;
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
	// addi r11,r11,-22068
	ctx.r11.s64 = ctx.r11.s64 + -22068;
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
	ctx.lr = 0x8224D288;
	sub_822ED768(ctx, base);
	// b 0x8224d290
	goto loc_8224D290;
loc_8224D28C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224D290:
	// stw r3,-24524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24524, ctx.r3.u32);
	// bl 0x821fc748
	ctx.lr = 0x8224D298;
	sub_821FC748(ctx, base);
	// lwz r11,-24524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24524);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224d2b4
	if (cr6.eq) goto loc_8224D2B4;
	// bl 0x821fc748
	ctx.lr = 0x8224D2A8;
	sub_821FC748(ctx, base);
	// lwz r11,-24524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24524);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224d2bc
	goto loc_8224D2BC;
loc_8224D2B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224D2BC:
	// bl 0x82170938
	ctx.lr = 0x8224D2C0;
	sub_82170938(ctx, base);
	// lwz r11,-24524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24524);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224D2CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24524);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224d30c
	if (cr6.eq) goto loc_8224D30C;
	// bl 0x82170ba8
	ctx.lr = 0x8224D2EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24524);
	// bne cr6,0x8224d30c
	if (!cr6.eq) goto loc_8224D30C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24524);
loc_8224D30C:
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

__attribute__((alias("__imp__sub_8224D324"))) PPC_WEAK_FUNC(sub_8224D324);
PPC_FUNC_IMPL(__imp__sub_8224D324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D328"))) PPC_WEAK_FUNC(sub_8224D328);
PPC_FUNC_IMPL(__imp__sub_8224D328) {
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
	// lwz r3,-24584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24584);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224d44c
	if (!cr6.eq) goto loc_8224D44C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224D358;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224d3cc
	if (cr6.eq) goto loc_8224D3CC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,13560
	ctx.r7.s64 = ctx.r10.s64 + 13560;
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
	// addi r11,r11,-22712
	ctx.r11.s64 = ctx.r11.s64 + -22712;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224D3C8;
	sub_822ED768(ctx, base);
	// b 0x8224d3d0
	goto loc_8224D3D0;
loc_8224D3CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224D3D0:
	// stw r3,-24584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24584, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224D3D8;
	sub_821BD940(ctx, base);
	// lwz r11,-24584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24584);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224d3f4
	if (cr6.eq) goto loc_8224D3F4;
	// bl 0x821bd940
	ctx.lr = 0x8224D3E8;
	sub_821BD940(ctx, base);
	// lwz r11,-24584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24584);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224d3fc
	goto loc_8224D3FC;
loc_8224D3F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224D3FC:
	// bl 0x82170938
	ctx.lr = 0x8224D400;
	sub_82170938(ctx, base);
	// lwz r11,-24584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24584);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224D40C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24584);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224d44c
	if (cr6.eq) goto loc_8224D44C;
	// bl 0x82170ba8
	ctx.lr = 0x8224D42C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24584);
	// bne cr6,0x8224d44c
	if (!cr6.eq) goto loc_8224D44C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24584);
loc_8224D44C:
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

__attribute__((alias("__imp__sub_8224D464"))) PPC_WEAK_FUNC(sub_8224D464);
PPC_FUNC_IMPL(__imp__sub_8224D464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D468"))) PPC_WEAK_FUNC(sub_8224D468);
PPC_FUNC_IMPL(__imp__sub_8224D468) {
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
	// lwz r3,-24668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24668);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224d58c
	if (!cr6.eq) goto loc_8224D58C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224D498;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224d50c
	if (cr6.eq) goto loc_8224D50C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,13760
	ctx.r7.s64 = ctx.r10.s64 + 13760;
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
	// addi r11,r11,-23676
	ctx.r11.s64 = ctx.r11.s64 + -23676;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224D508;
	sub_822ED768(ctx, base);
	// b 0x8224d510
	goto loc_8224D510;
loc_8224D50C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224D510:
	// stw r3,-24668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24668, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224D518;
	sub_821BD940(ctx, base);
	// lwz r11,-24668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24668);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224d534
	if (cr6.eq) goto loc_8224D534;
	// bl 0x821bd940
	ctx.lr = 0x8224D528;
	sub_821BD940(ctx, base);
	// lwz r11,-24668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24668);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224d53c
	goto loc_8224D53C;
loc_8224D534:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224D53C:
	// bl 0x82170938
	ctx.lr = 0x8224D540;
	sub_82170938(ctx, base);
	// lwz r11,-24668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24668);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224D54C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24668);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224d58c
	if (cr6.eq) goto loc_8224D58C;
	// bl 0x82170ba8
	ctx.lr = 0x8224D56C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24668);
	// bne cr6,0x8224d58c
	if (!cr6.eq) goto loc_8224D58C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24668);
loc_8224D58C:
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

__attribute__((alias("__imp__sub_8224D5A4"))) PPC_WEAK_FUNC(sub_8224D5A4);
PPC_FUNC_IMPL(__imp__sub_8224D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D5A8"))) PPC_WEAK_FUNC(sub_8224D5A8);
PPC_FUNC_IMPL(__imp__sub_8224D5A8) {
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
	// lwz r3,-24572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24572);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224d6cc
	if (!cr6.eq) goto loc_8224D6CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224D5D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224d64c
	if (cr6.eq) goto loc_8224D64C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,13960
	ctx.r7.s64 = ctx.r10.s64 + 13960;
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
	// addi r11,r11,-22580
	ctx.r11.s64 = ctx.r11.s64 + -22580;
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
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224D648;
	sub_822ED768(ctx, base);
	// b 0x8224d650
	goto loc_8224D650;
loc_8224D64C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224D650:
	// stw r3,-24572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24572, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224D658;
	sub_821BD940(ctx, base);
	// lwz r11,-24572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24572);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224d674
	if (cr6.eq) goto loc_8224D674;
	// bl 0x821bd940
	ctx.lr = 0x8224D668;
	sub_821BD940(ctx, base);
	// lwz r11,-24572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24572);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224d67c
	goto loc_8224D67C;
loc_8224D674:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224D67C:
	// bl 0x82170938
	ctx.lr = 0x8224D680;
	sub_82170938(ctx, base);
	// lwz r11,-24572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24572);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224D68C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24572);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224d6cc
	if (cr6.eq) goto loc_8224D6CC;
	// bl 0x82170ba8
	ctx.lr = 0x8224D6AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24572);
	// bne cr6,0x8224d6cc
	if (!cr6.eq) goto loc_8224D6CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D6C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24572);
loc_8224D6CC:
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

__attribute__((alias("__imp__sub_8224D6E4"))) PPC_WEAK_FUNC(sub_8224D6E4);
PPC_FUNC_IMPL(__imp__sub_8224D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D6E8"))) PPC_WEAK_FUNC(sub_8224D6E8);
PPC_FUNC_IMPL(__imp__sub_8224D6E8) {
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
	// lwz r3,-24568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24568);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224d80c
	if (!cr6.eq) goto loc_8224D80C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224D718;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224d78c
	if (cr6.eq) goto loc_8224D78C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,14240
	ctx.r7.s64 = ctx.r10.s64 + 14240;
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
	// addi r11,r11,-22552
	ctx.r11.s64 = ctx.r11.s64 + -22552;
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
	ctx.lr = 0x8224D788;
	sub_822ED768(ctx, base);
	// b 0x8224d790
	goto loc_8224D790;
loc_8224D78C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224D790:
	// stw r3,-24568(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24568, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224D798;
	sub_821BD940(ctx, base);
	// lwz r11,-24568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24568);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224d7b4
	if (cr6.eq) goto loc_8224D7B4;
	// bl 0x821bd940
	ctx.lr = 0x8224D7A8;
	sub_821BD940(ctx, base);
	// lwz r11,-24568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24568);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224d7bc
	goto loc_8224D7BC;
loc_8224D7B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224D7BC:
	// bl 0x82170938
	ctx.lr = 0x8224D7C0;
	sub_82170938(ctx, base);
	// lwz r11,-24568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24568);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224D7CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24568);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224d80c
	if (cr6.eq) goto loc_8224D80C;
	// bl 0x82170ba8
	ctx.lr = 0x8224D7EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24568);
	// bne cr6,0x8224d80c
	if (!cr6.eq) goto loc_8224D80C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24568);
loc_8224D80C:
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

__attribute__((alias("__imp__sub_8224D824"))) PPC_WEAK_FUNC(sub_8224D824);
PPC_FUNC_IMPL(__imp__sub_8224D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D828"))) PPC_WEAK_FUNC(sub_8224D828);
PPC_FUNC_IMPL(__imp__sub_8224D828) {
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
	// lwz r3,-24560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24560);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224d94c
	if (!cr6.eq) goto loc_8224D94C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224D858;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224d8cc
	if (cr6.eq) goto loc_8224D8CC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,14440
	ctx.r7.s64 = ctx.r10.s64 + 14440;
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
	// addi r11,r11,-22468
	ctx.r11.s64 = ctx.r11.s64 + -22468;
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
	// li r5,220
	ctx.r5.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224D8C8;
	sub_822ED768(ctx, base);
	// b 0x8224d8d0
	goto loc_8224D8D0;
loc_8224D8CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224D8D0:
	// stw r3,-24560(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24560, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224D8D8;
	sub_821BD940(ctx, base);
	// lwz r11,-24560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24560);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224d8f4
	if (cr6.eq) goto loc_8224D8F4;
	// bl 0x821bd940
	ctx.lr = 0x8224D8E8;
	sub_821BD940(ctx, base);
	// lwz r11,-24560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24560);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224d8fc
	goto loc_8224D8FC;
loc_8224D8F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224D8FC:
	// bl 0x82170938
	ctx.lr = 0x8224D900;
	sub_82170938(ctx, base);
	// lwz r11,-24560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24560);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224D90C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24560);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224d94c
	if (cr6.eq) goto loc_8224D94C;
	// bl 0x82170ba8
	ctx.lr = 0x8224D92C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24560);
	// bne cr6,0x8224d94c
	if (!cr6.eq) goto loc_8224D94C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24560);
loc_8224D94C:
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

__attribute__((alias("__imp__sub_8224D964"))) PPC_WEAK_FUNC(sub_8224D964);
PPC_FUNC_IMPL(__imp__sub_8224D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224D968"))) PPC_WEAK_FUNC(sub_8224D968);
PPC_FUNC_IMPL(__imp__sub_8224D968) {
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
	// lwz r3,-24548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24548);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224da8c
	if (!cr6.eq) goto loc_8224DA8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224D998;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224da0c
	if (cr6.eq) goto loc_8224DA0C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,14648
	ctx.r7.s64 = ctx.r10.s64 + 14648;
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
	// addi r11,r11,-22340
	ctx.r11.s64 = ctx.r11.s64 + -22340;
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
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224DA08;
	sub_822ED768(ctx, base);
	// b 0x8224da10
	goto loc_8224DA10;
loc_8224DA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224DA10:
	// stw r3,-24548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24548, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224DA18;
	sub_821BD940(ctx, base);
	// lwz r11,-24548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24548);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224da34
	if (cr6.eq) goto loc_8224DA34;
	// bl 0x821bd940
	ctx.lr = 0x8224DA28;
	sub_821BD940(ctx, base);
	// lwz r11,-24548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24548);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224da3c
	goto loc_8224DA3C;
loc_8224DA34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224DA3C:
	// bl 0x82170938
	ctx.lr = 0x8224DA40;
	sub_82170938(ctx, base);
	// lwz r11,-24548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24548);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224DA4C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24548);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224da8c
	if (cr6.eq) goto loc_8224DA8C;
	// bl 0x82170ba8
	ctx.lr = 0x8224DA6C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24548);
	// bne cr6,0x8224da8c
	if (!cr6.eq) goto loc_8224DA8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224DA88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24548);
loc_8224DA8C:
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

__attribute__((alias("__imp__sub_8224DAA4"))) PPC_WEAK_FUNC(sub_8224DAA4);
PPC_FUNC_IMPL(__imp__sub_8224DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224DAA8"))) PPC_WEAK_FUNC(sub_8224DAA8);
PPC_FUNC_IMPL(__imp__sub_8224DAA8) {
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
	// lwz r3,-24544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24544);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224dbcc
	if (!cr6.eq) goto loc_8224DBCC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224DAD8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224db4c
	if (cr6.eq) goto loc_8224DB4C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20936
	ctx.r7.s64 = ctx.r10.s64 + 20936;
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
	// addi r11,r11,-22300
	ctx.r11.s64 = ctx.r11.s64 + -22300;
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
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224DB48;
	sub_822ED768(ctx, base);
	// b 0x8224db50
	goto loc_8224DB50;
loc_8224DB4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224DB50:
	// stw r3,-24544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24544, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224DB58;
	sub_821BD940(ctx, base);
	// lwz r11,-24544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24544);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224db74
	if (cr6.eq) goto loc_8224DB74;
	// bl 0x821bd940
	ctx.lr = 0x8224DB68;
	sub_821BD940(ctx, base);
	// lwz r11,-24544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24544);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224db7c
	goto loc_8224DB7C;
loc_8224DB74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224DB7C:
	// bl 0x82170938
	ctx.lr = 0x8224DB80;
	sub_82170938(ctx, base);
	// lwz r11,-24544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24544);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224DB8C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24544);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224dbcc
	if (cr6.eq) goto loc_8224DBCC;
	// bl 0x82170ba8
	ctx.lr = 0x8224DBAC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24544);
	// bne cr6,0x8224dbcc
	if (!cr6.eq) goto loc_8224DBCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224DBC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24544);
loc_8224DBCC:
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

__attribute__((alias("__imp__sub_8224DBE4"))) PPC_WEAK_FUNC(sub_8224DBE4);
PPC_FUNC_IMPL(__imp__sub_8224DBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224DBE8"))) PPC_WEAK_FUNC(sub_8224DBE8);
PPC_FUNC_IMPL(__imp__sub_8224DBE8) {
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
	// lwz r3,-24540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24540);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224dd0c
	if (!cr6.eq) goto loc_8224DD0C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224DC18;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224dc8c
	if (cr6.eq) goto loc_8224DC8C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,15928
	ctx.r7.s64 = ctx.r10.s64 + 15928;
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
	// addi r11,r11,-22248
	ctx.r11.s64 = ctx.r11.s64 + -22248;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224DC88;
	sub_822ED768(ctx, base);
	// b 0x8224dc90
	goto loc_8224DC90;
loc_8224DC8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224DC90:
	// stw r3,-24540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24540, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224DC98;
	sub_821BD940(ctx, base);
	// lwz r11,-24540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24540);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224dcb4
	if (cr6.eq) goto loc_8224DCB4;
	// bl 0x821bd940
	ctx.lr = 0x8224DCA8;
	sub_821BD940(ctx, base);
	// lwz r11,-24540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24540);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224dcbc
	goto loc_8224DCBC;
loc_8224DCB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224DCBC:
	// bl 0x82170938
	ctx.lr = 0x8224DCC0;
	sub_82170938(ctx, base);
	// lwz r11,-24540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24540);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224DCCC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24540);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224dd0c
	if (cr6.eq) goto loc_8224DD0C;
	// bl 0x82170ba8
	ctx.lr = 0x8224DCEC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24540);
	// bne cr6,0x8224dd0c
	if (!cr6.eq) goto loc_8224DD0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224DD08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24540);
loc_8224DD0C:
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

__attribute__((alias("__imp__sub_8224DD24"))) PPC_WEAK_FUNC(sub_8224DD24);
PPC_FUNC_IMPL(__imp__sub_8224DD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224DD28"))) PPC_WEAK_FUNC(sub_8224DD28);
PPC_FUNC_IMPL(__imp__sub_8224DD28) {
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
	// lwz r3,-24512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24512);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224de4c
	if (!cr6.eq) goto loc_8224DE4C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224DD58;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224ddcc
	if (cr6.eq) goto loc_8224DDCC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,16128
	ctx.r7.s64 = ctx.r10.s64 + 16128;
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
	// addi r11,r11,-21944
	ctx.r11.s64 = ctx.r11.s64 + -21944;
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
	// li r5,220
	ctx.r5.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224DDC8;
	sub_822ED768(ctx, base);
	// b 0x8224ddd0
	goto loc_8224DDD0;
loc_8224DDCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224DDD0:
	// stw r3,-24512(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24512, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224DDD8;
	sub_821BD940(ctx, base);
	// lwz r11,-24512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24512);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224ddf4
	if (cr6.eq) goto loc_8224DDF4;
	// bl 0x821bd940
	ctx.lr = 0x8224DDE8;
	sub_821BD940(ctx, base);
	// lwz r11,-24512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24512);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224ddfc
	goto loc_8224DDFC;
loc_8224DDF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224DDFC:
	// bl 0x82170938
	ctx.lr = 0x8224DE00;
	sub_82170938(ctx, base);
	// lwz r11,-24512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24512);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224DE0C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24512);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224de4c
	if (cr6.eq) goto loc_8224DE4C;
	// bl 0x82170ba8
	ctx.lr = 0x8224DE2C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24512);
	// bne cr6,0x8224de4c
	if (!cr6.eq) goto loc_8224DE4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224DE48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24512);
loc_8224DE4C:
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

__attribute__((alias("__imp__sub_8224DE64"))) PPC_WEAK_FUNC(sub_8224DE64);
PPC_FUNC_IMPL(__imp__sub_8224DE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224DE68"))) PPC_WEAK_FUNC(sub_8224DE68);
PPC_FUNC_IMPL(__imp__sub_8224DE68) {
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
	// lwz r3,-24508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24508);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224df8c
	if (!cr6.eq) goto loc_8224DF8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224DE98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224df0c
	if (cr6.eq) goto loc_8224DF0C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,16328
	ctx.r7.s64 = ctx.r10.s64 + 16328;
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
	// addi r11,r11,-21904
	ctx.r11.s64 = ctx.r11.s64 + -21904;
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
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224DF08;
	sub_822ED768(ctx, base);
	// b 0x8224df10
	goto loc_8224DF10;
loc_8224DF0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224DF10:
	// stw r3,-24508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24508, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224DF18;
	sub_821BD940(ctx, base);
	// lwz r11,-24508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24508);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224df34
	if (cr6.eq) goto loc_8224DF34;
	// bl 0x821bd940
	ctx.lr = 0x8224DF28;
	sub_821BD940(ctx, base);
	// lwz r11,-24508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24508);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224df3c
	goto loc_8224DF3C;
loc_8224DF34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224DF3C:
	// bl 0x82170938
	ctx.lr = 0x8224DF40;
	sub_82170938(ctx, base);
	// lwz r11,-24508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24508);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224DF4C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24508);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224df8c
	if (cr6.eq) goto loc_8224DF8C;
	// bl 0x82170ba8
	ctx.lr = 0x8224DF6C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24508);
	// bne cr6,0x8224df8c
	if (!cr6.eq) goto loc_8224DF8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224DF88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24508);
loc_8224DF8C:
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

__attribute__((alias("__imp__sub_8224DFA4"))) PPC_WEAK_FUNC(sub_8224DFA4);
PPC_FUNC_IMPL(__imp__sub_8224DFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224DFA8"))) PPC_WEAK_FUNC(sub_8224DFA8);
PPC_FUNC_IMPL(__imp__sub_8224DFA8) {
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
	// lwz r3,-24504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24504);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224e0cc
	if (!cr6.eq) goto loc_8224E0CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224DFD8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224e04c
	if (cr6.eq) goto loc_8224E04C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,16528
	ctx.r7.s64 = ctx.r10.s64 + 16528;
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
	// addi r11,r11,-21844
	ctx.r11.s64 = ctx.r11.s64 + -21844;
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
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224E048;
	sub_822ED768(ctx, base);
	// b 0x8224e050
	goto loc_8224E050;
loc_8224E04C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224E050:
	// stw r3,-24504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24504, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224E058;
	sub_821BD940(ctx, base);
	// lwz r11,-24504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24504);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224e074
	if (cr6.eq) goto loc_8224E074;
	// bl 0x821bd940
	ctx.lr = 0x8224E068;
	sub_821BD940(ctx, base);
	// lwz r11,-24504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24504);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224e07c
	goto loc_8224E07C;
loc_8224E074:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224E07C:
	// bl 0x82170938
	ctx.lr = 0x8224E080;
	sub_82170938(ctx, base);
	// lwz r11,-24504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24504);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224E08C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24504);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224e0cc
	if (cr6.eq) goto loc_8224E0CC;
	// bl 0x82170ba8
	ctx.lr = 0x8224E0AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24504);
	// bne cr6,0x8224e0cc
	if (!cr6.eq) goto loc_8224E0CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E0C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24504);
loc_8224E0CC:
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

__attribute__((alias("__imp__sub_8224E0E4"))) PPC_WEAK_FUNC(sub_8224E0E4);
PPC_FUNC_IMPL(__imp__sub_8224E0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E0E8"))) PPC_WEAK_FUNC(sub_8224E0E8);
PPC_FUNC_IMPL(__imp__sub_8224E0E8) {
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
	// lwz r3,-24500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24500);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224e20c
	if (!cr6.eq) goto loc_8224E20C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224E118;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224e18c
	if (cr6.eq) goto loc_8224E18C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,16728
	ctx.r7.s64 = ctx.r10.s64 + 16728;
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
	// addi r11,r11,-21788
	ctx.r11.s64 = ctx.r11.s64 + -21788;
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
	ctx.lr = 0x8224E188;
	sub_822ED768(ctx, base);
	// b 0x8224e190
	goto loc_8224E190;
loc_8224E18C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224E190:
	// stw r3,-24500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24500, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224E198;
	sub_821BD940(ctx, base);
	// lwz r11,-24500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24500);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224e1b4
	if (cr6.eq) goto loc_8224E1B4;
	// bl 0x821bd940
	ctx.lr = 0x8224E1A8;
	sub_821BD940(ctx, base);
	// lwz r11,-24500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24500);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224e1bc
	goto loc_8224E1BC;
loc_8224E1B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224E1BC:
	// bl 0x82170938
	ctx.lr = 0x8224E1C0;
	sub_82170938(ctx, base);
	// lwz r11,-24500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24500);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224E1CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24500);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224e20c
	if (cr6.eq) goto loc_8224E20C;
	// bl 0x82170ba8
	ctx.lr = 0x8224E1EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24500);
	// bne cr6,0x8224e20c
	if (!cr6.eq) goto loc_8224E20C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E208;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24500);
loc_8224E20C:
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

__attribute__((alias("__imp__sub_8224E224"))) PPC_WEAK_FUNC(sub_8224E224);
PPC_FUNC_IMPL(__imp__sub_8224E224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E228"))) PPC_WEAK_FUNC(sub_8224E228);
PPC_FUNC_IMPL(__imp__sub_8224E228) {
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
	// lwz r3,-24016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24016);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224e34c
	if (!cr6.eq) goto loc_8224E34C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224E258;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224e2cc
	if (cr6.eq) goto loc_8224E2CC;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12496
	ctx.r7.s64 = ctx.r10.s64 + 12496;
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
	// addi r11,r11,-13572
	ctx.r11.s64 = ctx.r11.s64 + -13572;
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
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224E2C8;
	sub_822ED768(ctx, base);
	// b 0x8224e2d0
	goto loc_8224E2D0;
loc_8224E2CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224E2D0:
	// stw r3,-24016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24016, ctx.r3.u32);
	// bl 0x821b56a0
	ctx.lr = 0x8224E2D8;
	sub_821B56A0(ctx, base);
	// lwz r11,-24016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24016);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224e2f4
	if (cr6.eq) goto loc_8224E2F4;
	// bl 0x821b56a0
	ctx.lr = 0x8224E2E8;
	sub_821B56A0(ctx, base);
	// lwz r11,-24016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24016);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224e2fc
	goto loc_8224E2FC;
loc_8224E2F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224E2FC:
	// bl 0x82170938
	ctx.lr = 0x8224E300;
	sub_82170938(ctx, base);
	// lwz r11,-24016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24016);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224E30C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24016);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224e34c
	if (cr6.eq) goto loc_8224E34C;
	// bl 0x82170ba8
	ctx.lr = 0x8224E32C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24016);
	// bne cr6,0x8224e34c
	if (!cr6.eq) goto loc_8224E34C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E348;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24016);
loc_8224E34C:
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

__attribute__((alias("__imp__sub_8224E364"))) PPC_WEAK_FUNC(sub_8224E364);
PPC_FUNC_IMPL(__imp__sub_8224E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E368"))) PPC_WEAK_FUNC(sub_8224E368);
PPC_FUNC_IMPL(__imp__sub_8224E368) {
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
	// lwz r3,-24844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24844);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224e48c
	if (!cr6.eq) goto loc_8224E48C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224E398;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224e40c
	if (cr6.eq) goto loc_8224E40C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,16856
	ctx.r7.s64 = ctx.r10.s64 + 16856;
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
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
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
	ctx.lr = 0x8224E408;
	sub_822ED768(ctx, base);
	// b 0x8224e410
	goto loc_8224E410;
loc_8224E40C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224E410:
	// stw r3,-24844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24844, ctx.r3.u32);
	// bl 0x821b56a0
	ctx.lr = 0x8224E418;
	sub_821B56A0(ctx, base);
	// lwz r11,-24844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24844);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224e434
	if (cr6.eq) goto loc_8224E434;
	// bl 0x821b56a0
	ctx.lr = 0x8224E428;
	sub_821B56A0(ctx, base);
	// lwz r11,-24844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24844);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224e43c
	goto loc_8224E43C;
loc_8224E434:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224E43C:
	// bl 0x82170938
	ctx.lr = 0x8224E440;
	sub_82170938(ctx, base);
	// lwz r11,-24844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24844);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224E44C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24844);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224e48c
	if (cr6.eq) goto loc_8224E48C;
	// bl 0x82170ba8
	ctx.lr = 0x8224E46C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24844);
	// bne cr6,0x8224e48c
	if (!cr6.eq) goto loc_8224E48C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E488;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24844);
loc_8224E48C:
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

__attribute__((alias("__imp__sub_8224E4A4"))) PPC_WEAK_FUNC(sub_8224E4A4);
PPC_FUNC_IMPL(__imp__sub_8224E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E4A8"))) PPC_WEAK_FUNC(sub_8224E4A8);
PPC_FUNC_IMPL(__imp__sub_8224E4A8) {
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
	// lwz r3,-24840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24840);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224e5cc
	if (!cr6.eq) goto loc_8224E5CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224E4D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224e54c
	if (cr6.eq) goto loc_8224E54C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,17344
	ctx.r7.s64 = ctx.r10.s64 + 17344;
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
	// addi r11,r11,-25460
	ctx.r11.s64 = ctx.r11.s64 + -25460;
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
	ctx.lr = 0x8224E548;
	sub_822ED768(ctx, base);
	// b 0x8224e550
	goto loc_8224E550;
loc_8224E54C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224E550:
	// stw r3,-24840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24840, ctx.r3.u32);
	// bl 0x821b56a0
	ctx.lr = 0x8224E558;
	sub_821B56A0(ctx, base);
	// lwz r11,-24840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24840);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224e574
	if (cr6.eq) goto loc_8224E574;
	// bl 0x821b56a0
	ctx.lr = 0x8224E568;
	sub_821B56A0(ctx, base);
	// lwz r11,-24840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24840);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224e57c
	goto loc_8224E57C;
loc_8224E574:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224E57C:
	// bl 0x82170938
	ctx.lr = 0x8224E580;
	sub_82170938(ctx, base);
	// lwz r11,-24840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24840);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224E58C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24840);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224e5cc
	if (cr6.eq) goto loc_8224E5CC;
	// bl 0x82170ba8
	ctx.lr = 0x8224E5AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24840);
	// bne cr6,0x8224e5cc
	if (!cr6.eq) goto loc_8224E5CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E5C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24840);
loc_8224E5CC:
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

__attribute__((alias("__imp__sub_8224E5E4"))) PPC_WEAK_FUNC(sub_8224E5E4);
PPC_FUNC_IMPL(__imp__sub_8224E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E5E8"))) PPC_WEAK_FUNC(sub_8224E5E8);
PPC_FUNC_IMPL(__imp__sub_8224E5E8) {
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
	// lwz r3,-24836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24836);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224e70c
	if (!cr6.eq) goto loc_8224E70C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224E618;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224e68c
	if (cr6.eq) goto loc_8224E68C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,17448
	ctx.r7.s64 = ctx.r10.s64 + 17448;
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
	// addi r11,r11,-25424
	ctx.r11.s64 = ctx.r11.s64 + -25424;
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
	ctx.lr = 0x8224E688;
	sub_822ED768(ctx, base);
	// b 0x8224e690
	goto loc_8224E690;
loc_8224E68C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224E690:
	// stw r3,-24836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24836, ctx.r3.u32);
	// bl 0x821b56a0
	ctx.lr = 0x8224E698;
	sub_821B56A0(ctx, base);
	// lwz r11,-24836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24836);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224e6b4
	if (cr6.eq) goto loc_8224E6B4;
	// bl 0x821b56a0
	ctx.lr = 0x8224E6A8;
	sub_821B56A0(ctx, base);
	// lwz r11,-24836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24836);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224e6bc
	goto loc_8224E6BC;
loc_8224E6B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224E6BC:
	// bl 0x82170938
	ctx.lr = 0x8224E6C0;
	sub_82170938(ctx, base);
	// lwz r11,-24836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24836);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224E6CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24836);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224e70c
	if (cr6.eq) goto loc_8224E70C;
	// bl 0x82170ba8
	ctx.lr = 0x8224E6EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24836);
	// bne cr6,0x8224e70c
	if (!cr6.eq) goto loc_8224E70C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24836);
loc_8224E70C:
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

__attribute__((alias("__imp__sub_8224E724"))) PPC_WEAK_FUNC(sub_8224E724);
PPC_FUNC_IMPL(__imp__sub_8224E724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E728"))) PPC_WEAK_FUNC(sub_8224E728);
PPC_FUNC_IMPL(__imp__sub_8224E728) {
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
	// lwz r3,-24808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24808);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224e84c
	if (!cr6.eq) goto loc_8224E84C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224E758;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224e7cc
	if (cr6.eq) goto loc_8224E7CC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,18000
	ctx.r7.s64 = ctx.r10.s64 + 18000;
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
	// addi r11,r11,-25196
	ctx.r11.s64 = ctx.r11.s64 + -25196;
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
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224E7C8;
	sub_822ED768(ctx, base);
	// b 0x8224e7d0
	goto loc_8224E7D0;
loc_8224E7CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224E7D0:
	// stw r3,-24808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24808, ctx.r3.u32);
	// bl 0x8224e5e8
	ctx.lr = 0x8224E7D8;
	sub_8224E5E8(ctx, base);
	// lwz r11,-24808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24808);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224e7f4
	if (cr6.eq) goto loc_8224E7F4;
	// bl 0x8224e5e8
	ctx.lr = 0x8224E7E8;
	sub_8224E5E8(ctx, base);
	// lwz r11,-24808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24808);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224e7fc
	goto loc_8224E7FC;
loc_8224E7F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224E7FC:
	// bl 0x82170938
	ctx.lr = 0x8224E800;
	sub_82170938(ctx, base);
	// lwz r11,-24808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24808);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224E80C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24808);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224e84c
	if (cr6.eq) goto loc_8224E84C;
	// bl 0x82170ba8
	ctx.lr = 0x8224E82C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24808);
	// bne cr6,0x8224e84c
	if (!cr6.eq) goto loc_8224E84C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24808);
loc_8224E84C:
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

__attribute__((alias("__imp__sub_8224E864"))) PPC_WEAK_FUNC(sub_8224E864);
PPC_FUNC_IMPL(__imp__sub_8224E864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E868"))) PPC_WEAK_FUNC(sub_8224E868);
PPC_FUNC_IMPL(__imp__sub_8224E868) {
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
	// lwz r3,-24832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224e98c
	if (!cr6.eq) goto loc_8224E98C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224E898;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224e90c
	if (cr6.eq) goto loc_8224E90C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,18304
	ctx.r7.s64 = ctx.r10.s64 + 18304;
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
	// addi r11,r11,-25396
	ctx.r11.s64 = ctx.r11.s64 + -25396;
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
	ctx.lr = 0x8224E908;
	sub_822ED768(ctx, base);
	// b 0x8224e910
	goto loc_8224E910;
loc_8224E90C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224E910:
	// stw r3,-24832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24832, ctx.r3.u32);
	// bl 0x821b56a0
	ctx.lr = 0x8224E918;
	sub_821B56A0(ctx, base);
	// lwz r11,-24832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24832);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224e934
	if (cr6.eq) goto loc_8224E934;
	// bl 0x821b56a0
	ctx.lr = 0x8224E928;
	sub_821B56A0(ctx, base);
	// lwz r11,-24832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24832);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224e93c
	goto loc_8224E93C;
loc_8224E934:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224E93C:
	// bl 0x82170938
	ctx.lr = 0x8224E940;
	sub_82170938(ctx, base);
	// lwz r11,-24832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24832);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224E94C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24832);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224e98c
	if (cr6.eq) goto loc_8224E98C;
	// bl 0x82170ba8
	ctx.lr = 0x8224E96C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24832);
	// bne cr6,0x8224e98c
	if (!cr6.eq) goto loc_8224E98C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E988;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24832);
loc_8224E98C:
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

__attribute__((alias("__imp__sub_8224E9A4"))) PPC_WEAK_FUNC(sub_8224E9A4);
PPC_FUNC_IMPL(__imp__sub_8224E9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E9A8"))) PPC_WEAK_FUNC(sub_8224E9A8);
PPC_FUNC_IMPL(__imp__sub_8224E9A8) {
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
	// lwz r3,-24804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24804);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224eacc
	if (!cr6.eq) goto loc_8224EACC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224E9D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224ea4c
	if (cr6.eq) goto loc_8224EA4C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,18848
	ctx.r7.s64 = ctx.r10.s64 + 18848;
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
	// addi r11,r11,-25156
	ctx.r11.s64 = ctx.r11.s64 + -25156;
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
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224EA48;
	sub_822ED768(ctx, base);
	// b 0x8224ea50
	goto loc_8224EA50;
loc_8224EA4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224EA50:
	// stw r3,-24804(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24804, ctx.r3.u32);
	// bl 0x8224e868
	ctx.lr = 0x8224EA58;
	sub_8224E868(ctx, base);
	// lwz r11,-24804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24804);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224ea74
	if (cr6.eq) goto loc_8224EA74;
	// bl 0x8224e868
	ctx.lr = 0x8224EA68;
	sub_8224E868(ctx, base);
	// lwz r11,-24804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24804);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224ea7c
	goto loc_8224EA7C;
loc_8224EA74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224EA7C:
	// bl 0x82170938
	ctx.lr = 0x8224EA80;
	sub_82170938(ctx, base);
	// lwz r11,-24804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24804);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224EA8C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24804);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224eacc
	if (cr6.eq) goto loc_8224EACC;
	// bl 0x82170ba8
	ctx.lr = 0x8224EAAC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24804);
	// bne cr6,0x8224eacc
	if (!cr6.eq) goto loc_8224EACC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EAC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24804);
loc_8224EACC:
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

__attribute__((alias("__imp__sub_8224EAE4"))) PPC_WEAK_FUNC(sub_8224EAE4);
PPC_FUNC_IMPL(__imp__sub_8224EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224EAE8"))) PPC_WEAK_FUNC(sub_8224EAE8);
PPC_FUNC_IMPL(__imp__sub_8224EAE8) {
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
	// lwz r3,-24828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24828);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224ec0c
	if (!cr6.eq) goto loc_8224EC0C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224EB18;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224eb8c
	if (cr6.eq) goto loc_8224EB8C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,19136
	ctx.r7.s64 = ctx.r10.s64 + 19136;
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
	// addi r11,r11,-25372
	ctx.r11.s64 = ctx.r11.s64 + -25372;
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
	ctx.lr = 0x8224EB88;
	sub_822ED768(ctx, base);
	// b 0x8224eb90
	goto loc_8224EB90;
loc_8224EB8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224EB90:
	// stw r3,-24828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24828, ctx.r3.u32);
	// bl 0x821b56a0
	ctx.lr = 0x8224EB98;
	sub_821B56A0(ctx, base);
	// lwz r11,-24828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24828);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224ebb4
	if (cr6.eq) goto loc_8224EBB4;
	// bl 0x821b56a0
	ctx.lr = 0x8224EBA8;
	sub_821B56A0(ctx, base);
	// lwz r11,-24828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24828);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224ebbc
	goto loc_8224EBBC;
loc_8224EBB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224EBBC:
	// bl 0x82170938
	ctx.lr = 0x8224EBC0;
	sub_82170938(ctx, base);
	// lwz r11,-24828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24828);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224EBCC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24828);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224ec0c
	if (cr6.eq) goto loc_8224EC0C;
	// bl 0x82170ba8
	ctx.lr = 0x8224EBEC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24828);
	// bne cr6,0x8224ec0c
	if (!cr6.eq) goto loc_8224EC0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EC08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24828);
loc_8224EC0C:
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

__attribute__((alias("__imp__sub_8224EC24"))) PPC_WEAK_FUNC(sub_8224EC24);
PPC_FUNC_IMPL(__imp__sub_8224EC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224EC28"))) PPC_WEAK_FUNC(sub_8224EC28);
PPC_FUNC_IMPL(__imp__sub_8224EC28) {
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
	// lwz r3,-22916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224ed4c
	if (!cr6.eq) goto loc_8224ED4C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224EC58;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224eccc
	if (cr6.eq) goto loc_8224ECCC;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11760
	ctx.r7.s64 = ctx.r10.s64 + -11760;
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-25612
	ctx.r11.s64 = ctx.r11.s64 + -25612;
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
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224ECC8;
	sub_822ED768(ctx, base);
	// b 0x8224ecd0
	goto loc_8224ECD0;
loc_8224ECCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224ECD0:
	// stw r3,-22916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22916, ctx.r3.u32);
	// bl 0x821fcae8
	ctx.lr = 0x8224ECD8;
	sub_821FCAE8(ctx, base);
	// lwz r11,-22916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224ecf4
	if (cr6.eq) goto loc_8224ECF4;
	// bl 0x821fcae8
	ctx.lr = 0x8224ECE8;
	sub_821FCAE8(ctx, base);
	// lwz r11,-22916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224ecfc
	goto loc_8224ECFC;
loc_8224ECF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224ECFC:
	// bl 0x82170938
	ctx.lr = 0x8224ED00;
	sub_82170938(ctx, base);
	// lwz r11,-22916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224ED0C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224ed4c
	if (cr6.eq) goto loc_8224ED4C;
	// bl 0x82170ba8
	ctx.lr = 0x8224ED2C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
	// bne cr6,0x8224ed4c
	if (!cr6.eq) goto loc_8224ED4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224ED48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
loc_8224ED4C:
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

__attribute__((alias("__imp__sub_8224ED64"))) PPC_WEAK_FUNC(sub_8224ED64);
PPC_FUNC_IMPL(__imp__sub_8224ED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224ED68"))) PPC_WEAK_FUNC(sub_8224ED68);
PPC_FUNC_IMPL(__imp__sub_8224ED68) {
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
	// lwz r3,-22912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22912);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224ee8c
	if (!cr6.eq) goto loc_8224EE8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224ED98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224ee0c
	if (cr6.eq) goto loc_8224EE0C;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11544
	ctx.r7.s64 = ctx.r10.s64 + -11544;
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-25572
	ctx.r11.s64 = ctx.r11.s64 + -25572;
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
	ctx.lr = 0x8224EE08;
	sub_822ED768(ctx, base);
	// b 0x8224ee10
	goto loc_8224EE10;
loc_8224EE0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224EE10:
	// stw r3,-22912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22912, ctx.r3.u32);
	// bl 0x821fcae8
	ctx.lr = 0x8224EE18;
	sub_821FCAE8(ctx, base);
	// lwz r11,-22912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22912);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224ee34
	if (cr6.eq) goto loc_8224EE34;
	// bl 0x821fcae8
	ctx.lr = 0x8224EE28;
	sub_821FCAE8(ctx, base);
	// lwz r11,-22912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22912);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224ee3c
	goto loc_8224EE3C;
loc_8224EE34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224EE3C:
	// bl 0x82170938
	ctx.lr = 0x8224EE40;
	sub_82170938(ctx, base);
	// lwz r11,-22912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22912);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224EE4C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22912);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224ee8c
	if (cr6.eq) goto loc_8224EE8C;
	// bl 0x82170ba8
	ctx.lr = 0x8224EE6C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22912);
	// bne cr6,0x8224ee8c
	if (!cr6.eq) goto loc_8224EE8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EE88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22912);
loc_8224EE8C:
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

__attribute__((alias("__imp__sub_8224EEA4"))) PPC_WEAK_FUNC(sub_8224EEA4);
PPC_FUNC_IMPL(__imp__sub_8224EEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224EEA8"))) PPC_WEAK_FUNC(sub_8224EEA8);
PPC_FUNC_IMPL(__imp__sub_8224EEA8) {
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
	// lwz r3,-24820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24820);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224efcc
	if (!cr6.eq) goto loc_8224EFCC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224EED8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224ef4c
	if (cr6.eq) goto loc_8224EF4C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,19416
	ctx.r7.s64 = ctx.r10.s64 + 19416;
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
	// addi r11,r11,-25312
	ctx.r11.s64 = ctx.r11.s64 + -25312;
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
	ctx.lr = 0x8224EF48;
	sub_822ED768(ctx, base);
	// b 0x8224ef50
	goto loc_8224EF50;
loc_8224EF4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224EF50:
	// stw r3,-24820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24820, ctx.r3.u32);
	// bl 0x821fcae8
	ctx.lr = 0x8224EF58;
	sub_821FCAE8(ctx, base);
	// lwz r11,-24820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24820);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224ef74
	if (cr6.eq) goto loc_8224EF74;
	// bl 0x821fcae8
	ctx.lr = 0x8224EF68;
	sub_821FCAE8(ctx, base);
	// lwz r11,-24820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24820);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224ef7c
	goto loc_8224EF7C;
loc_8224EF74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224EF7C:
	// bl 0x82170938
	ctx.lr = 0x8224EF80;
	sub_82170938(ctx, base);
	// lwz r11,-24820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24820);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224EF8C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24820);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224efcc
	if (cr6.eq) goto loc_8224EFCC;
	// bl 0x82170ba8
	ctx.lr = 0x8224EFAC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24820);
	// bne cr6,0x8224efcc
	if (!cr6.eq) goto loc_8224EFCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EFC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24820);
loc_8224EFCC:
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

__attribute__((alias("__imp__sub_8224EFE4"))) PPC_WEAK_FUNC(sub_8224EFE4);
PPC_FUNC_IMPL(__imp__sub_8224EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224EFE8"))) PPC_WEAK_FUNC(sub_8224EFE8);
PPC_FUNC_IMPL(__imp__sub_8224EFE8) {
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
	// lwz r3,-24816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24816);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224f10c
	if (!cr6.eq) goto loc_8224F10C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224F018;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224f08c
	if (cr6.eq) goto loc_8224F08C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,19640
	ctx.r7.s64 = ctx.r10.s64 + 19640;
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
	// addi r11,r11,-25272
	ctx.r11.s64 = ctx.r11.s64 + -25272;
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
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224F088;
	sub_822ED768(ctx, base);
	// b 0x8224f090
	goto loc_8224F090;
loc_8224F08C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224F090:
	// stw r3,-24816(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24816, ctx.r3.u32);
	// bl 0x821fcae8
	ctx.lr = 0x8224F098;
	sub_821FCAE8(ctx, base);
	// lwz r11,-24816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24816);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224f0b4
	if (cr6.eq) goto loc_8224F0B4;
	// bl 0x821fcae8
	ctx.lr = 0x8224F0A8;
	sub_821FCAE8(ctx, base);
	// lwz r11,-24816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24816);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224f0bc
	goto loc_8224F0BC;
loc_8224F0B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224F0BC:
	// bl 0x82170938
	ctx.lr = 0x8224F0C0;
	sub_82170938(ctx, base);
	// lwz r11,-24816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24816);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224F0CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24816);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224f10c
	if (cr6.eq) goto loc_8224F10C;
	// bl 0x82170ba8
	ctx.lr = 0x8224F0EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24816);
	// bne cr6,0x8224f10c
	if (!cr6.eq) goto loc_8224F10C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F108;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24816);
loc_8224F10C:
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

__attribute__((alias("__imp__sub_8224F124"))) PPC_WEAK_FUNC(sub_8224F124);
PPC_FUNC_IMPL(__imp__sub_8224F124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F128"))) PPC_WEAK_FUNC(sub_8224F128);
PPC_FUNC_IMPL(__imp__sub_8224F128) {
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
	// lwz r3,-24812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24812);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224f24c
	if (!cr6.eq) goto loc_8224F24C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224F158;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224f1cc
	if (cr6.eq) goto loc_8224F1CC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,19856
	ctx.r7.s64 = ctx.r10.s64 + 19856;
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
	// addi r11,r11,-25228
	ctx.r11.s64 = ctx.r11.s64 + -25228;
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
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224F1C8;
	sub_822ED768(ctx, base);
	// b 0x8224f1d0
	goto loc_8224F1D0;
loc_8224F1CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224F1D0:
	// stw r3,-24812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24812, ctx.r3.u32);
	// bl 0x821fcae8
	ctx.lr = 0x8224F1D8;
	sub_821FCAE8(ctx, base);
	// lwz r11,-24812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24812);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224f1f4
	if (cr6.eq) goto loc_8224F1F4;
	// bl 0x821fcae8
	ctx.lr = 0x8224F1E8;
	sub_821FCAE8(ctx, base);
	// lwz r11,-24812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24812);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224f1fc
	goto loc_8224F1FC;
loc_8224F1F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224F1FC:
	// bl 0x82170938
	ctx.lr = 0x8224F200;
	sub_82170938(ctx, base);
	// lwz r11,-24812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24812);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224F20C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24812);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224f24c
	if (cr6.eq) goto loc_8224F24C;
	// bl 0x82170ba8
	ctx.lr = 0x8224F22C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24812);
	// bne cr6,0x8224f24c
	if (!cr6.eq) goto loc_8224F24C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F248;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24812);
loc_8224F24C:
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

__attribute__((alias("__imp__sub_8224F264"))) PPC_WEAK_FUNC(sub_8224F264);
PPC_FUNC_IMPL(__imp__sub_8224F264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F268"))) PPC_WEAK_FUNC(sub_8224F268);
PPC_FUNC_IMPL(__imp__sub_8224F268) {
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
	// lwz r3,-24800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24800);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224f38c
	if (!cr6.eq) goto loc_8224F38C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224F298;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224f30c
	if (cr6.eq) goto loc_8224F30C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20200
	ctx.r7.s64 = ctx.r10.s64 + 20200;
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
	// addi r11,r11,-25120
	ctx.r11.s64 = ctx.r11.s64 + -25120;
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
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224F308;
	sub_822ED768(ctx, base);
	// b 0x8224f310
	goto loc_8224F310;
loc_8224F30C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224F310:
	// stw r3,-24800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24800, ctx.r3.u32);
	// bl 0x821b56a0
	ctx.lr = 0x8224F318;
	sub_821B56A0(ctx, base);
	// lwz r11,-24800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24800);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224f334
	if (cr6.eq) goto loc_8224F334;
	// bl 0x821b56a0
	ctx.lr = 0x8224F328;
	sub_821B56A0(ctx, base);
	// lwz r11,-24800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24800);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224f33c
	goto loc_8224F33C;
loc_8224F334:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224F33C:
	// bl 0x82170938
	ctx.lr = 0x8224F340;
	sub_82170938(ctx, base);
	// lwz r11,-24800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24800);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224F34C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24800);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224f38c
	if (cr6.eq) goto loc_8224F38C;
	// bl 0x82170ba8
	ctx.lr = 0x8224F36C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24800);
	// bne cr6,0x8224f38c
	if (!cr6.eq) goto loc_8224F38C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24800);
loc_8224F38C:
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

__attribute__((alias("__imp__sub_8224F3A4"))) PPC_WEAK_FUNC(sub_8224F3A4);
PPC_FUNC_IMPL(__imp__sub_8224F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F3A8"))) PPC_WEAK_FUNC(sub_8224F3A8);
PPC_FUNC_IMPL(__imp__sub_8224F3A8) {
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
	// lwz r3,-24792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24792);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224f4cc
	if (!cr6.eq) goto loc_8224F4CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224F3D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224f44c
	if (cr6.eq) goto loc_8224F44C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20624
	ctx.r7.s64 = ctx.r10.s64 + 20624;
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
	// addi r11,r11,-25056
	ctx.r11.s64 = ctx.r11.s64 + -25056;
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
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224F448;
	sub_822ED768(ctx, base);
	// b 0x8224f450
	goto loc_8224F450;
loc_8224F44C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224F450:
	// stw r3,-24792(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24792, ctx.r3.u32);
	// bl 0x821b56a0
	ctx.lr = 0x8224F458;
	sub_821B56A0(ctx, base);
	// lwz r11,-24792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24792);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224f474
	if (cr6.eq) goto loc_8224F474;
	// bl 0x821b56a0
	ctx.lr = 0x8224F468;
	sub_821B56A0(ctx, base);
	// lwz r11,-24792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24792);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224f47c
	goto loc_8224F47C;
loc_8224F474:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224F47C:
	// bl 0x82170938
	ctx.lr = 0x8224F480;
	sub_82170938(ctx, base);
	// lwz r11,-24792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24792);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224F48C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24792);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224f4cc
	if (cr6.eq) goto loc_8224F4CC;
	// bl 0x82170ba8
	ctx.lr = 0x8224F4AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24792);
	// bne cr6,0x8224f4cc
	if (!cr6.eq) goto loc_8224F4CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F4C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24792);
loc_8224F4CC:
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

__attribute__((alias("__imp__sub_8224F4E4"))) PPC_WEAK_FUNC(sub_8224F4E4);
PPC_FUNC_IMPL(__imp__sub_8224F4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F4E8"))) PPC_WEAK_FUNC(sub_8224F4E8);
PPC_FUNC_IMPL(__imp__sub_8224F4E8) {
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
	// lwz r3,-24796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24796);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224f60c
	if (!cr6.eq) goto loc_8224F60C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224F518;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224f58c
	if (cr6.eq) goto loc_8224F58C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20728
	ctx.r7.s64 = ctx.r10.s64 + 20728;
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
	// addi r11,r11,-25088
	ctx.r11.s64 = ctx.r11.s64 + -25088;
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
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224F588;
	sub_822ED768(ctx, base);
	// b 0x8224f590
	goto loc_8224F590;
loc_8224F58C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224F590:
	// stw r3,-24796(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24796, ctx.r3.u32);
	// bl 0x821b56a0
	ctx.lr = 0x8224F598;
	sub_821B56A0(ctx, base);
	// lwz r11,-24796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24796);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224f5b4
	if (cr6.eq) goto loc_8224F5B4;
	// bl 0x821b56a0
	ctx.lr = 0x8224F5A8;
	sub_821B56A0(ctx, base);
	// lwz r11,-24796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24796);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224f5bc
	goto loc_8224F5BC;
loc_8224F5B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224F5BC:
	// bl 0x82170938
	ctx.lr = 0x8224F5C0;
	sub_82170938(ctx, base);
	// lwz r11,-24796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24796);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224F5CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24796);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224f60c
	if (cr6.eq) goto loc_8224F60C;
	// bl 0x82170ba8
	ctx.lr = 0x8224F5EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24796);
	// bne cr6,0x8224f60c
	if (!cr6.eq) goto loc_8224F60C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F608;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24796);
loc_8224F60C:
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

__attribute__((alias("__imp__sub_8224F624"))) PPC_WEAK_FUNC(sub_8224F624);
PPC_FUNC_IMPL(__imp__sub_8224F624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F628"))) PPC_WEAK_FUNC(sub_8224F628);
PPC_FUNC_IMPL(__imp__sub_8224F628) {
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
	// lwz r3,-22904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224f74c
	if (!cr6.eq) goto loc_8224F74C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224F658;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224f6cc
	if (cr6.eq) goto loc_8224F6CC;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11344
	ctx.r7.s64 = ctx.r10.s64 + -11344;
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-25464
	ctx.r11.s64 = ctx.r11.s64 + -25464;
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
	// li r5,220
	ctx.r5.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224F6C8;
	sub_822ED768(ctx, base);
	// b 0x8224f6d0
	goto loc_8224F6D0;
loc_8224F6CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224F6D0:
	// stw r3,-22904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22904, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224F6D8;
	sub_821BD940(ctx, base);
	// lwz r11,-22904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22904);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224f6f4
	if (cr6.eq) goto loc_8224F6F4;
	// bl 0x821bd940
	ctx.lr = 0x8224F6E8;
	sub_821BD940(ctx, base);
	// lwz r11,-22904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22904);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224f6fc
	goto loc_8224F6FC;
loc_8224F6F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224F6FC:
	// bl 0x82170938
	ctx.lr = 0x8224F700;
	sub_82170938(ctx, base);
	// lwz r11,-22904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22904);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224F70C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22904);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224f74c
	if (cr6.eq) goto loc_8224F74C;
	// bl 0x82170ba8
	ctx.lr = 0x8224F72C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22904);
	// bne cr6,0x8224f74c
	if (!cr6.eq) goto loc_8224F74C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22904);
loc_8224F74C:
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

__attribute__((alias("__imp__sub_8224F764"))) PPC_WEAK_FUNC(sub_8224F764);
PPC_FUNC_IMPL(__imp__sub_8224F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F768"))) PPC_WEAK_FUNC(sub_8224F768);
PPC_FUNC_IMPL(__imp__sub_8224F768) {
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
	// lwz r3,-24492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24492);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224f88c
	if (!cr6.eq) goto loc_8224F88C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224F798;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224f80c
	if (cr6.eq) goto loc_8224F80C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20936
	ctx.r7.s64 = ctx.r10.s64 + 20936;
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
	// addi r11,r11,-21692
	ctx.r11.s64 = ctx.r11.s64 + -21692;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224F808;
	sub_822ED768(ctx, base);
	// b 0x8224f810
	goto loc_8224F810;
loc_8224F80C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224F810:
	// stw r3,-24492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24492, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224F818;
	sub_821BD940(ctx, base);
	// lwz r11,-24492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24492);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224f834
	if (cr6.eq) goto loc_8224F834;
	// bl 0x821bd940
	ctx.lr = 0x8224F828;
	sub_821BD940(ctx, base);
	// lwz r11,-24492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24492);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224f83c
	goto loc_8224F83C;
loc_8224F834:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224F83C:
	// bl 0x82170938
	ctx.lr = 0x8224F840;
	sub_82170938(ctx, base);
	// lwz r11,-24492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24492);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224F84C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24492);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224f88c
	if (cr6.eq) goto loc_8224F88C;
	// bl 0x82170ba8
	ctx.lr = 0x8224F86C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24492);
	// bne cr6,0x8224f88c
	if (!cr6.eq) goto loc_8224F88C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F888;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24492);
loc_8224F88C:
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

__attribute__((alias("__imp__sub_8224F8A4"))) PPC_WEAK_FUNC(sub_8224F8A4);
PPC_FUNC_IMPL(__imp__sub_8224F8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F8A8"))) PPC_WEAK_FUNC(sub_8224F8A8);
PPC_FUNC_IMPL(__imp__sub_8224F8A8) {
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
	// lwz r3,-24488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24488);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224f9cc
	if (!cr6.eq) goto loc_8224F9CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224F8D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224f94c
	if (cr6.eq) goto loc_8224F94C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20936
	ctx.r7.s64 = ctx.r10.s64 + 20936;
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
	// addi r11,r11,-21648
	ctx.r11.s64 = ctx.r11.s64 + -21648;
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
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224F948;
	sub_822ED768(ctx, base);
	// b 0x8224f950
	goto loc_8224F950;
loc_8224F94C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224F950:
	// stw r3,-24488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24488, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224F958;
	sub_821BD940(ctx, base);
	// lwz r11,-24488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24488);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224f974
	if (cr6.eq) goto loc_8224F974;
	// bl 0x821bd940
	ctx.lr = 0x8224F968;
	sub_821BD940(ctx, base);
	// lwz r11,-24488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24488);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224f97c
	goto loc_8224F97C;
loc_8224F974:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224F97C:
	// bl 0x82170938
	ctx.lr = 0x8224F980;
	sub_82170938(ctx, base);
	// lwz r11,-24488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24488);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224F98C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24488);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224f9cc
	if (cr6.eq) goto loc_8224F9CC;
	// bl 0x82170ba8
	ctx.lr = 0x8224F9AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24488);
	// bne cr6,0x8224f9cc
	if (!cr6.eq) goto loc_8224F9CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F9C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24488);
loc_8224F9CC:
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

__attribute__((alias("__imp__sub_8224F9E4"))) PPC_WEAK_FUNC(sub_8224F9E4);
PPC_FUNC_IMPL(__imp__sub_8224F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F9E8"))) PPC_WEAK_FUNC(sub_8224F9E8);
PPC_FUNC_IMPL(__imp__sub_8224F9E8) {
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
	// lwz r3,-24536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224fb0c
	if (!cr6.eq) goto loc_8224FB0C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224FA18;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224fa8c
	if (cr6.eq) goto loc_8224FA8C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20936
	ctx.r7.s64 = ctx.r10.s64 + 20936;
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
	// addi r11,r11,-22200
	ctx.r11.s64 = ctx.r11.s64 + -22200;
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
	ctx.lr = 0x8224FA88;
	sub_822ED768(ctx, base);
	// b 0x8224fa90
	goto loc_8224FA90;
loc_8224FA8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224FA90:
	// stw r3,-24536(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24536, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x8224FA98;
	sub_821BD940(ctx, base);
	// lwz r11,-24536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24536);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224fab4
	if (cr6.eq) goto loc_8224FAB4;
	// bl 0x821bd940
	ctx.lr = 0x8224FAA8;
	sub_821BD940(ctx, base);
	// lwz r11,-24536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24536);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224fabc
	goto loc_8224FABC;
loc_8224FAB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224FABC:
	// bl 0x82170938
	ctx.lr = 0x8224FAC0;
	sub_82170938(ctx, base);
	// lwz r11,-24536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24536);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224FACC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24536);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224fb0c
	if (cr6.eq) goto loc_8224FB0C;
	// bl 0x82170ba8
	ctx.lr = 0x8224FAEC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24536);
	// bne cr6,0x8224fb0c
	if (!cr6.eq) goto loc_8224FB0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224FB08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24536);
loc_8224FB0C:
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

__attribute__((alias("__imp__sub_8224FB24"))) PPC_WEAK_FUNC(sub_8224FB24);
PPC_FUNC_IMPL(__imp__sub_8224FB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FB28"))) PPC_WEAK_FUNC(sub_8224FB28);
PPC_FUNC_IMPL(__imp__sub_8224FB28) {
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
	// lwz r3,-24580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24580);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224fc4c
	if (!cr6.eq) goto loc_8224FC4C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224FB58;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224fbcc
	if (cr6.eq) goto loc_8224FBCC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20960
	ctx.r7.s64 = ctx.r10.s64 + 20960;
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
	// addi r11,r11,-22688
	ctx.r11.s64 = ctx.r11.s64 + -22688;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224FBC8;
	sub_822ED768(ctx, base);
	// b 0x8224fbd0
	goto loc_8224FBD0;
loc_8224FBCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224FBD0:
	// stw r3,-24580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24580, ctx.r3.u32);
	// bl 0x8224f9e8
	ctx.lr = 0x8224FBD8;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24580);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224fbf4
	if (cr6.eq) goto loc_8224FBF4;
	// bl 0x8224f9e8
	ctx.lr = 0x8224FBE8;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24580);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224fbfc
	goto loc_8224FBFC;
loc_8224FBF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224FBFC:
	// bl 0x82170938
	ctx.lr = 0x8224FC00;
	sub_82170938(ctx, base);
	// lwz r11,-24580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24580);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224FC0C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24580);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224fc4c
	if (cr6.eq) goto loc_8224FC4C;
	// bl 0x82170ba8
	ctx.lr = 0x8224FC2C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24580);
	// bne cr6,0x8224fc4c
	if (!cr6.eq) goto loc_8224FC4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224FC48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24580);
loc_8224FC4C:
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

__attribute__((alias("__imp__sub_8224FC64"))) PPC_WEAK_FUNC(sub_8224FC64);
PPC_FUNC_IMPL(__imp__sub_8224FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FC68"))) PPC_WEAK_FUNC(sub_8224FC68);
PPC_FUNC_IMPL(__imp__sub_8224FC68) {
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
	// lwz r3,-24532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24532);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224fd8c
	if (!cr6.eq) goto loc_8224FD8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224FC98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224fd0c
	if (cr6.eq) goto loc_8224FD0C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21088
	ctx.r7.s64 = ctx.r10.s64 + 21088;
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
	// addi r11,r11,-22144
	ctx.r11.s64 = ctx.r11.s64 + -22144;
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
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224FD08;
	sub_822ED768(ctx, base);
	// b 0x8224fd10
	goto loc_8224FD10;
loc_8224FD0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224FD10:
	// stw r3,-24532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24532, ctx.r3.u32);
	// bl 0x8224f9e8
	ctx.lr = 0x8224FD18;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24532);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224fd34
	if (cr6.eq) goto loc_8224FD34;
	// bl 0x8224f9e8
	ctx.lr = 0x8224FD28;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24532);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224fd3c
	goto loc_8224FD3C;
loc_8224FD34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224FD3C:
	// bl 0x82170938
	ctx.lr = 0x8224FD40;
	sub_82170938(ctx, base);
	// lwz r11,-24532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24532);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224FD4C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24532);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224fd8c
	if (cr6.eq) goto loc_8224FD8C;
	// bl 0x82170ba8
	ctx.lr = 0x8224FD6C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24532);
	// bne cr6,0x8224fd8c
	if (!cr6.eq) goto loc_8224FD8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224FD88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24532);
loc_8224FD8C:
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

__attribute__((alias("__imp__sub_8224FDA4"))) PPC_WEAK_FUNC(sub_8224FDA4);
PPC_FUNC_IMPL(__imp__sub_8224FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FDA8"))) PPC_WEAK_FUNC(sub_8224FDA8);
PPC_FUNC_IMPL(__imp__sub_8224FDA8) {
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
	// lwz r3,-24520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8224fecc
	if (!cr6.eq) goto loc_8224FECC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224FDD8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224fe4c
	if (cr6.eq) goto loc_8224FE4C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21216
	ctx.r7.s64 = ctx.r10.s64 + 21216;
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
	// addi r11,r11,-22012
	ctx.r11.s64 = ctx.r11.s64 + -22012;
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
	// li r5,220
	ctx.r5.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224FE48;
	sub_822ED768(ctx, base);
	// b 0x8224fe50
	goto loc_8224FE50;
loc_8224FE4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224FE50:
	// stw r3,-24520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24520, ctx.r3.u32);
	// bl 0x8224f9e8
	ctx.lr = 0x8224FE58;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224fe74
	if (cr6.eq) goto loc_8224FE74;
	// bl 0x8224f9e8
	ctx.lr = 0x8224FE68;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224fe7c
	goto loc_8224FE7C;
loc_8224FE74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224FE7C:
	// bl 0x82170938
	ctx.lr = 0x8224FE80;
	sub_82170938(ctx, base);
	// lwz r11,-24520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224FE8C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224fecc
	if (cr6.eq) goto loc_8224FECC;
	// bl 0x82170ba8
	ctx.lr = 0x8224FEAC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
	// bne cr6,0x8224fecc
	if (!cr6.eq) goto loc_8224FECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224FEC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
loc_8224FECC:
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

__attribute__((alias("__imp__sub_8224FEE4"))) PPC_WEAK_FUNC(sub_8224FEE4);
PPC_FUNC_IMPL(__imp__sub_8224FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FEE8"))) PPC_WEAK_FUNC(sub_8224FEE8);
PPC_FUNC_IMPL(__imp__sub_8224FEE8) {
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
	// lwz r3,-24516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24516);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225000c
	if (!cr6.eq) goto loc_8225000C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8224FF18;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224ff8c
	if (cr6.eq) goto loc_8224FF8C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21360
	ctx.r7.s64 = ctx.r10.s64 + 21360;
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
	// addi r11,r11,-21976
	ctx.r11.s64 = ctx.r11.s64 + -21976;
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
	// li r5,220
	ctx.r5.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8224FF88;
	sub_822ED768(ctx, base);
	// b 0x8224ff90
	goto loc_8224FF90;
loc_8224FF8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224FF90:
	// stw r3,-24516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24516, ctx.r3.u32);
	// bl 0x8224f9e8
	ctx.lr = 0x8224FF98;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24516);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224ffb4
	if (cr6.eq) goto loc_8224FFB4;
	// bl 0x8224f9e8
	ctx.lr = 0x8224FFA8;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24516);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8224ffbc
	goto loc_8224FFBC;
loc_8224FFB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8224FFBC:
	// bl 0x82170938
	ctx.lr = 0x8224FFC0;
	sub_82170938(ctx, base);
	// lwz r11,-24516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24516);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8224FFCC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24516);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225000c
	if (cr6.eq) goto loc_8225000C;
	// bl 0x82170ba8
	ctx.lr = 0x8224FFEC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24516);
	// bne cr6,0x8225000c
	if (!cr6.eq) goto loc_8225000C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24516);
loc_8225000C:
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

__attribute__((alias("__imp__sub_82250024"))) PPC_WEAK_FUNC(sub_82250024);
PPC_FUNC_IMPL(__imp__sub_82250024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250028"))) PPC_WEAK_FUNC(sub_82250028);
PPC_FUNC_IMPL(__imp__sub_82250028) {
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
	// lwz r3,-24496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225014c
	if (!cr6.eq) goto loc_8225014C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250058;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822500cc
	if (cr6.eq) goto loc_822500CC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21504
	ctx.r7.s64 = ctx.r10.s64 + 21504;
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
	// addi r11,r11,-21728
	ctx.r11.s64 = ctx.r11.s64 + -21728;
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
	// li r5,220
	ctx.r5.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822500C8;
	sub_822ED768(ctx, base);
	// b 0x822500d0
	goto loc_822500D0;
loc_822500CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822500D0:
	// stw r3,-24496(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24496, ctx.r3.u32);
	// bl 0x8224f9e8
	ctx.lr = 0x822500D8;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24496);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822500f4
	if (cr6.eq) goto loc_822500F4;
	// bl 0x8224f9e8
	ctx.lr = 0x822500E8;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24496);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822500fc
	goto loc_822500FC;
loc_822500F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822500FC:
	// bl 0x82170938
	ctx.lr = 0x82250100;
	sub_82170938(ctx, base);
	// lwz r11,-24496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24496);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225010C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24496);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225014c
	if (cr6.eq) goto loc_8225014C;
	// bl 0x82170ba8
	ctx.lr = 0x8225012C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24496);
	// bne cr6,0x8225014c
	if (!cr6.eq) goto loc_8225014C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24496);
loc_8225014C:
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

__attribute__((alias("__imp__sub_82250164"))) PPC_WEAK_FUNC(sub_82250164);
PPC_FUNC_IMPL(__imp__sub_82250164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250168"))) PPC_WEAK_FUNC(sub_82250168);
PPC_FUNC_IMPL(__imp__sub_82250168) {
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
	// lwz r3,-24484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24484);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225028c
	if (!cr6.eq) goto loc_8225028C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250198;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225020c
	if (cr6.eq) goto loc_8225020C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21784
	ctx.r7.s64 = ctx.r10.s64 + 21784;
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
	// addi r11,r11,-21576
	ctx.r11.s64 = ctx.r11.s64 + -21576;
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
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250208;
	sub_822ED768(ctx, base);
	// b 0x82250210
	goto loc_82250210;
loc_8225020C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250210:
	// stw r3,-24484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24484, ctx.r3.u32);
	// bl 0x8224f9e8
	ctx.lr = 0x82250218;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24484);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82250234
	if (cr6.eq) goto loc_82250234;
	// bl 0x8224f9e8
	ctx.lr = 0x82250228;
	sub_8224F9E8(ctx, base);
	// lwz r11,-24484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24484);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225023c
	goto loc_8225023C;
loc_82250234:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225023C:
	// bl 0x82170938
	ctx.lr = 0x82250240;
	sub_82170938(ctx, base);
	// lwz r11,-24484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24484);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225024C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24484);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225028c
	if (cr6.eq) goto loc_8225028C;
	// bl 0x82170ba8
	ctx.lr = 0x8225026C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24484);
	// bne cr6,0x8225028c
	if (!cr6.eq) goto loc_8225028C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250288;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24484);
loc_8225028C:
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

__attribute__((alias("__imp__sub_822502A4"))) PPC_WEAK_FUNC(sub_822502A4);
PPC_FUNC_IMPL(__imp__sub_822502A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822502A8"))) PPC_WEAK_FUNC(sub_822502A8);
PPC_FUNC_IMPL(__imp__sub_822502A8) {
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
	// lwz r3,-24480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24480);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822503cc
	if (!cr6.eq) goto loc_822503CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822502D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225034c
	if (cr6.eq) goto loc_8225034C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22008
	ctx.r7.s64 = ctx.r10.s64 + 22008;
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
	// addi r11,r11,-21540
	ctx.r11.s64 = ctx.r11.s64 + -21540;
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
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250348;
	sub_822ED768(ctx, base);
	// b 0x82250350
	goto loc_82250350;
loc_8225034C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250350:
	// stw r3,-24480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24480, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x82250358;
	sub_821BD940(ctx, base);
	// lwz r11,-24480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24480);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82250374
	if (cr6.eq) goto loc_82250374;
	// bl 0x821bd940
	ctx.lr = 0x82250368;
	sub_821BD940(ctx, base);
	// lwz r11,-24480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24480);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225037c
	goto loc_8225037C;
loc_82250374:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225037C:
	// bl 0x82170938
	ctx.lr = 0x82250380;
	sub_82170938(ctx, base);
	// lwz r11,-24480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24480);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225038C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24480);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822503cc
	if (cr6.eq) goto loc_822503CC;
	// bl 0x82170ba8
	ctx.lr = 0x822503AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24480);
	// bne cr6,0x822503cc
	if (!cr6.eq) goto loc_822503CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822503C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24480);
loc_822503CC:
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

__attribute__((alias("__imp__sub_822503E4"))) PPC_WEAK_FUNC(sub_822503E4);
PPC_FUNC_IMPL(__imp__sub_822503E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822503E8"))) PPC_WEAK_FUNC(sub_822503E8);
PPC_FUNC_IMPL(__imp__sub_822503E8) {
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
	// lwz r3,-24552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24552);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225050c
	if (!cr6.eq) goto loc_8225050C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250418;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225048c
	if (cr6.eq) goto loc_8225048C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,23080
	ctx.r7.s64 = ctx.r10.s64 + 23080;
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
	// addi r11,r11,-22384
	ctx.r11.s64 = ctx.r11.s64 + -22384;
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
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250488;
	sub_822ED768(ctx, base);
	// b 0x82250490
	goto loc_82250490;
loc_8225048C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250490:
	// stw r3,-24552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24552, ctx.r3.u32);
	// bl 0x822502a8
	ctx.lr = 0x82250498;
	sub_822502A8(ctx, base);
	// lwz r11,-24552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24552);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822504b4
	if (cr6.eq) goto loc_822504B4;
	// bl 0x822502a8
	ctx.lr = 0x822504A8;
	sub_822502A8(ctx, base);
	// lwz r11,-24552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24552);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822504bc
	goto loc_822504BC;
loc_822504B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822504BC:
	// bl 0x82170938
	ctx.lr = 0x822504C0;
	sub_82170938(ctx, base);
	// lwz r11,-24552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24552);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822504CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24552);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225050c
	if (cr6.eq) goto loc_8225050C;
	// bl 0x82170ba8
	ctx.lr = 0x822504EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24552);
	// bne cr6,0x8225050c
	if (!cr6.eq) goto loc_8225050C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24552);
loc_8225050C:
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

__attribute__((alias("__imp__sub_82250524"))) PPC_WEAK_FUNC(sub_82250524);
PPC_FUNC_IMPL(__imp__sub_82250524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250528"))) PPC_WEAK_FUNC(sub_82250528);
PPC_FUNC_IMPL(__imp__sub_82250528) {
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
	// lwz r3,-24476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24476);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225064c
	if (!cr6.eq) goto loc_8225064C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250558;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822505cc
	if (cr6.eq) goto loc_822505CC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,23680
	ctx.r7.s64 = ctx.r10.s64 + 23680;
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
	// addi r11,r11,-21508
	ctx.r11.s64 = ctx.r11.s64 + -21508;
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
	// li r5,220
	ctx.r5.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822505C8;
	sub_822ED768(ctx, base);
	// b 0x822505d0
	goto loc_822505D0;
loc_822505CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822505D0:
	// stw r3,-24476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24476, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x822505D8;
	sub_821BD940(ctx, base);
	// lwz r11,-24476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24476);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822505f4
	if (cr6.eq) goto loc_822505F4;
	// bl 0x821bd940
	ctx.lr = 0x822505E8;
	sub_821BD940(ctx, base);
	// lwz r11,-24476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24476);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822505fc
	goto loc_822505FC;
loc_822505F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822505FC:
	// bl 0x82170938
	ctx.lr = 0x82250600;
	sub_82170938(ctx, base);
	// lwz r11,-24476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24476);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225060C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24476);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225064c
	if (cr6.eq) goto loc_8225064C;
	// bl 0x82170ba8
	ctx.lr = 0x8225062C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24476);
	// bne cr6,0x8225064c
	if (!cr6.eq) goto loc_8225064C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250648;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24476);
loc_8225064C:
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

__attribute__((alias("__imp__sub_82250664"))) PPC_WEAK_FUNC(sub_82250664);
PPC_FUNC_IMPL(__imp__sub_82250664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250668"))) PPC_WEAK_FUNC(sub_82250668);
PPC_FUNC_IMPL(__imp__sub_82250668) {
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
	// lwz r3,-24472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225078c
	if (!cr6.eq) goto loc_8225078C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250698;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225070c
	if (cr6.eq) goto loc_8225070C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24120
	ctx.r7.s64 = ctx.r10.s64 + 24120;
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
	// addi r11,r11,-21480
	ctx.r11.s64 = ctx.r11.s64 + -21480;
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
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250708;
	sub_822ED768(ctx, base);
	// b 0x82250710
	goto loc_82250710;
loc_8225070C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250710:
	// stw r3,-24472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24472, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x82250718;
	sub_821BD940(ctx, base);
	// lwz r11,-24472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24472);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82250734
	if (cr6.eq) goto loc_82250734;
	// bl 0x821bd940
	ctx.lr = 0x82250728;
	sub_821BD940(ctx, base);
	// lwz r11,-24472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24472);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225073c
	goto loc_8225073C;
loc_82250734:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225073C:
	// bl 0x82170938
	ctx.lr = 0x82250740;
	sub_82170938(ctx, base);
	// lwz r11,-24472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24472);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225074C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24472);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225078c
	if (cr6.eq) goto loc_8225078C;
	// bl 0x82170ba8
	ctx.lr = 0x8225076C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24472);
	// bne cr6,0x8225078c
	if (!cr6.eq) goto loc_8225078C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250788;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24472);
loc_8225078C:
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

__attribute__((alias("__imp__sub_822507A4"))) PPC_WEAK_FUNC(sub_822507A4);
PPC_FUNC_IMPL(__imp__sub_822507A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822507A8"))) PPC_WEAK_FUNC(sub_822507A8);
PPC_FUNC_IMPL(__imp__sub_822507A8) {
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
	// lwz r3,-24468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24468);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822508cc
	if (!cr6.eq) goto loc_822508CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822507D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225084c
	if (cr6.eq) goto loc_8225084C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24320
	ctx.r7.s64 = ctx.r10.s64 + 24320;
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
	// addi r11,r11,-21448
	ctx.r11.s64 = ctx.r11.s64 + -21448;
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
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250848;
	sub_822ED768(ctx, base);
	// b 0x82250850
	goto loc_82250850;
loc_8225084C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250850:
	// stw r3,-24468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24468, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x82250858;
	sub_821BD940(ctx, base);
	// lwz r11,-24468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24468);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82250874
	if (cr6.eq) goto loc_82250874;
	// bl 0x821bd940
	ctx.lr = 0x82250868;
	sub_821BD940(ctx, base);
	// lwz r11,-24468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24468);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225087c
	goto loc_8225087C;
loc_82250874:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225087C:
	// bl 0x82170938
	ctx.lr = 0x82250880;
	sub_82170938(ctx, base);
	// lwz r11,-24468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24468);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225088C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24468);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822508cc
	if (cr6.eq) goto loc_822508CC;
	// bl 0x82170ba8
	ctx.lr = 0x822508AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24468);
	// bne cr6,0x822508cc
	if (!cr6.eq) goto loc_822508CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822508C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24468);
loc_822508CC:
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

__attribute__((alias("__imp__sub_822508E4"))) PPC_WEAK_FUNC(sub_822508E4);
PPC_FUNC_IMPL(__imp__sub_822508E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822508E8"))) PPC_WEAK_FUNC(sub_822508E8);
PPC_FUNC_IMPL(__imp__sub_822508E8) {
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
	// lwz r3,-24464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24464);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82250a0c
	if (!cr6.eq) goto loc_82250A0C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250918;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225098c
	if (cr6.eq) goto loc_8225098C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24520
	ctx.r7.s64 = ctx.r10.s64 + 24520;
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
	// addi r11,r11,-21388
	ctx.r11.s64 = ctx.r11.s64 + -21388;
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
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250988;
	sub_822ED768(ctx, base);
	// b 0x82250990
	goto loc_82250990;
loc_8225098C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250990:
	// stw r3,-24464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24464, ctx.r3.u32);
	// bl 0x821bd940
	ctx.lr = 0x82250998;
	sub_821BD940(ctx, base);
	// lwz r11,-24464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24464);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822509b4
	if (cr6.eq) goto loc_822509B4;
	// bl 0x821bd940
	ctx.lr = 0x822509A8;
	sub_821BD940(ctx, base);
	// lwz r11,-24464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24464);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822509bc
	goto loc_822509BC;
loc_822509B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822509BC:
	// bl 0x82170938
	ctx.lr = 0x822509C0;
	sub_82170938(ctx, base);
	// lwz r11,-24464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24464);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822509CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24464);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82250a0c
	if (cr6.eq) goto loc_82250A0C;
	// bl 0x82170ba8
	ctx.lr = 0x822509EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24464);
	// bne cr6,0x82250a0c
	if (!cr6.eq) goto loc_82250A0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250A08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24464);
loc_82250A0C:
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

__attribute__((alias("__imp__sub_82250A24"))) PPC_WEAK_FUNC(sub_82250A24);
PPC_FUNC_IMPL(__imp__sub_82250A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250A28"))) PPC_WEAK_FUNC(sub_82250A28);
PPC_FUNC_IMPL(__imp__sub_82250A28) {
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
	// lwz r3,-24788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24788);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82250b4c
	if (!cr6.eq) goto loc_82250B4C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250A58;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82250acc
	if (cr6.eq) goto loc_82250ACC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24648
	ctx.r7.s64 = ctx.r10.s64 + 24648;
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
	// addi r11,r11,-25028
	ctx.r11.s64 = ctx.r11.s64 + -25028;
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
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250AC8;
	sub_822ED768(ctx, base);
	// b 0x82250ad0
	goto loc_82250AD0;
loc_82250ACC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250AD0:
	// stw r3,-24788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24788, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x82250AD8;
	sub_821FCE70(ctx, base);
	// lwz r11,-24788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24788);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82250af4
	if (cr6.eq) goto loc_82250AF4;
	// bl 0x821fce70
	ctx.lr = 0x82250AE8;
	sub_821FCE70(ctx, base);
	// lwz r11,-24788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24788);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82250afc
	goto loc_82250AFC;
loc_82250AF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82250AFC:
	// bl 0x82170938
	ctx.lr = 0x82250B00;
	sub_82170938(ctx, base);
	// lwz r11,-24788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24788);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82250B0C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24788);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82250b4c
	if (cr6.eq) goto loc_82250B4C;
	// bl 0x82170ba8
	ctx.lr = 0x82250B2C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24788);
	// bne cr6,0x82250b4c
	if (!cr6.eq) goto loc_82250B4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250B48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24788);
loc_82250B4C:
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

__attribute__((alias("__imp__sub_82250B64"))) PPC_WEAK_FUNC(sub_82250B64);
PPC_FUNC_IMPL(__imp__sub_82250B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250B68"))) PPC_WEAK_FUNC(sub_82250B68);
PPC_FUNC_IMPL(__imp__sub_82250B68) {
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
	// lwz r3,-24784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24784);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82250c8c
	if (!cr6.eq) goto loc_82250C8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250B98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82250c0c
	if (cr6.eq) goto loc_82250C0C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24792
	ctx.r7.s64 = ctx.r10.s64 + 24792;
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
	// addi r11,r11,-24984
	ctx.r11.s64 = ctx.r11.s64 + -24984;
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
	// li r5,196
	ctx.r5.s64 = 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250C08;
	sub_822ED768(ctx, base);
	// b 0x82250c10
	goto loc_82250C10;
loc_82250C0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250C10:
	// stw r3,-24784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24784, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x82250C18;
	sub_821FCE70(ctx, base);
	// lwz r11,-24784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24784);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82250c34
	if (cr6.eq) goto loc_82250C34;
	// bl 0x821fce70
	ctx.lr = 0x82250C28;
	sub_821FCE70(ctx, base);
	// lwz r11,-24784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24784);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82250c3c
	goto loc_82250C3C;
loc_82250C34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82250C3C:
	// bl 0x82170938
	ctx.lr = 0x82250C40;
	sub_82170938(ctx, base);
	// lwz r11,-24784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24784);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82250C4C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24784);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82250c8c
	if (cr6.eq) goto loc_82250C8C;
	// bl 0x82170ba8
	ctx.lr = 0x82250C6C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24784);
	// bne cr6,0x82250c8c
	if (!cr6.eq) goto loc_82250C8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250C88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24784);
loc_82250C8C:
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

__attribute__((alias("__imp__sub_82250CA4"))) PPC_WEAK_FUNC(sub_82250CA4);
PPC_FUNC_IMPL(__imp__sub_82250CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250CA8"))) PPC_WEAK_FUNC(sub_82250CA8);
PPC_FUNC_IMPL(__imp__sub_82250CA8) {
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
	// lwz r3,-24780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82250dcc
	if (!cr6.eq) goto loc_82250DCC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250CD8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82250d4c
	if (cr6.eq) goto loc_82250D4C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,25104
	ctx.r7.s64 = ctx.r10.s64 + 25104;
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
	// addi r11,r11,-24940
	ctx.r11.s64 = ctx.r11.s64 + -24940;
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
	// li r5,196
	ctx.r5.s64 = 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250D48;
	sub_822ED768(ctx, base);
	// b 0x82250d50
	goto loc_82250D50;
loc_82250D4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250D50:
	// stw r3,-24780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24780, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x82250D58;
	sub_821FCE70(ctx, base);
	// lwz r11,-24780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24780);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82250d74
	if (cr6.eq) goto loc_82250D74;
	// bl 0x821fce70
	ctx.lr = 0x82250D68;
	sub_821FCE70(ctx, base);
	// lwz r11,-24780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24780);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82250d7c
	goto loc_82250D7C;
loc_82250D74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82250D7C:
	// bl 0x82170938
	ctx.lr = 0x82250D80;
	sub_82170938(ctx, base);
	// lwz r11,-24780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24780);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82250D8C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24780);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82250dcc
	if (cr6.eq) goto loc_82250DCC;
	// bl 0x82170ba8
	ctx.lr = 0x82250DAC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24780);
	// bne cr6,0x82250dcc
	if (!cr6.eq) goto loc_82250DCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250DC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24780);
loc_82250DCC:
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

__attribute__((alias("__imp__sub_82250DE4"))) PPC_WEAK_FUNC(sub_82250DE4);
PPC_FUNC_IMPL(__imp__sub_82250DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250DE8"))) PPC_WEAK_FUNC(sub_82250DE8);
PPC_FUNC_IMPL(__imp__sub_82250DE8) {
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
	// lwz r3,-24776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24776);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82250f0c
	if (!cr6.eq) goto loc_82250F0C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250E18;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82250e8c
	if (cr6.eq) goto loc_82250E8C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,25416
	ctx.r7.s64 = ctx.r10.s64 + 25416;
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
	// addi r11,r11,-24900
	ctx.r11.s64 = ctx.r11.s64 + -24900;
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
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250E88;
	sub_822ED768(ctx, base);
	// b 0x82250e90
	goto loc_82250E90;
loc_82250E8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250E90:
	// stw r3,-24776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24776, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x82250E98;
	sub_821FCE70(ctx, base);
	// lwz r11,-24776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24776);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82250eb4
	if (cr6.eq) goto loc_82250EB4;
	// bl 0x821fce70
	ctx.lr = 0x82250EA8;
	sub_821FCE70(ctx, base);
	// lwz r11,-24776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24776);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82250ebc
	goto loc_82250EBC;
loc_82250EB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82250EBC:
	// bl 0x82170938
	ctx.lr = 0x82250EC0;
	sub_82170938(ctx, base);
	// lwz r11,-24776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24776);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82250ECC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24776);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82250f0c
	if (cr6.eq) goto loc_82250F0C;
	// bl 0x82170ba8
	ctx.lr = 0x82250EEC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24776);
	// bne cr6,0x82250f0c
	if (!cr6.eq) goto loc_82250F0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250F08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24776);
loc_82250F0C:
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

__attribute__((alias("__imp__sub_82250F24"))) PPC_WEAK_FUNC(sub_82250F24);
PPC_FUNC_IMPL(__imp__sub_82250F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250F28"))) PPC_WEAK_FUNC(sub_82250F28);
PPC_FUNC_IMPL(__imp__sub_82250F28) {
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
	// lwz r3,-24772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24772);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225104c
	if (!cr6.eq) goto loc_8225104C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82250F58;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82250fcc
	if (cr6.eq) goto loc_82250FCC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,25560
	ctx.r7.s64 = ctx.r10.s64 + 25560;
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
	// addi r11,r11,-24852
	ctx.r11.s64 = ctx.r11.s64 + -24852;
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
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82250FC8;
	sub_822ED768(ctx, base);
	// b 0x82250fd0
	goto loc_82250FD0;
loc_82250FCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250FD0:
	// stw r3,-24772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24772, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x82250FD8;
	sub_821FCE70(ctx, base);
	// lwz r11,-24772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24772);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82250ff4
	if (cr6.eq) goto loc_82250FF4;
	// bl 0x821fce70
	ctx.lr = 0x82250FE8;
	sub_821FCE70(ctx, base);
	// lwz r11,-24772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24772);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82250ffc
	goto loc_82250FFC;
loc_82250FF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82250FFC:
	// bl 0x82170938
	ctx.lr = 0x82251000;
	sub_82170938(ctx, base);
	// lwz r11,-24772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24772);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225100C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24772);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225104c
	if (cr6.eq) goto loc_8225104C;
	// bl 0x82170ba8
	ctx.lr = 0x8225102C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24772);
	// bne cr6,0x8225104c
	if (!cr6.eq) goto loc_8225104C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24772);
loc_8225104C:
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

__attribute__((alias("__imp__sub_82251064"))) PPC_WEAK_FUNC(sub_82251064);
PPC_FUNC_IMPL(__imp__sub_82251064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251068"))) PPC_WEAK_FUNC(sub_82251068);
PPC_FUNC_IMPL(__imp__sub_82251068) {
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
	// lwz r3,-24768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24768);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225118c
	if (!cr6.eq) goto loc_8225118C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251098;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225110c
	if (cr6.eq) goto loc_8225110C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,25704
	ctx.r7.s64 = ctx.r10.s64 + 25704;
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
	// addi r11,r11,-24804
	ctx.r11.s64 = ctx.r11.s64 + -24804;
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
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82251108;
	sub_822ED768(ctx, base);
	// b 0x82251110
	goto loc_82251110;
loc_8225110C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251110:
	// stw r3,-24768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24768, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x82251118;
	sub_821FCE70(ctx, base);
	// lwz r11,-24768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24768);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82251134
	if (cr6.eq) goto loc_82251134;
	// bl 0x821fce70
	ctx.lr = 0x82251128;
	sub_821FCE70(ctx, base);
	// lwz r11,-24768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24768);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225113c
	goto loc_8225113C;
loc_82251134:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225113C:
	// bl 0x82170938
	ctx.lr = 0x82251140;
	sub_82170938(ctx, base);
	// lwz r11,-24768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24768);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225114C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24768);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225118c
	if (cr6.eq) goto loc_8225118C;
	// bl 0x82170ba8
	ctx.lr = 0x8225116C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24768);
	// bne cr6,0x8225118c
	if (!cr6.eq) goto loc_8225118C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24768);
loc_8225118C:
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

__attribute__((alias("__imp__sub_822511A4"))) PPC_WEAK_FUNC(sub_822511A4);
PPC_FUNC_IMPL(__imp__sub_822511A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822511A8"))) PPC_WEAK_FUNC(sub_822511A8);
PPC_FUNC_IMPL(__imp__sub_822511A8) {
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
	// lwz r3,-24764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24764);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822512cc
	if (!cr6.eq) goto loc_822512CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822511D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225124c
	if (cr6.eq) goto loc_8225124C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,26024
	ctx.r7.s64 = ctx.r10.s64 + 26024;
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
	// addi r11,r11,-24764
	ctx.r11.s64 = ctx.r11.s64 + -24764;
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
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82251248;
	sub_822ED768(ctx, base);
	// b 0x82251250
	goto loc_82251250;
loc_8225124C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251250:
	// stw r3,-24764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24764, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x82251258;
	sub_821FCE70(ctx, base);
	// lwz r11,-24764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24764);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82251274
	if (cr6.eq) goto loc_82251274;
	// bl 0x821fce70
	ctx.lr = 0x82251268;
	sub_821FCE70(ctx, base);
	// lwz r11,-24764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24764);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225127c
	goto loc_8225127C;
loc_82251274:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225127C:
	// bl 0x82170938
	ctx.lr = 0x82251280;
	sub_82170938(ctx, base);
	// lwz r11,-24764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24764);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225128C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24764);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822512cc
	if (cr6.eq) goto loc_822512CC;
	// bl 0x82170ba8
	ctx.lr = 0x822512AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24764);
	// bne cr6,0x822512cc
	if (!cr6.eq) goto loc_822512CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822512C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24764);
loc_822512CC:
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

__attribute__((alias("__imp__sub_822512E4"))) PPC_WEAK_FUNC(sub_822512E4);
PPC_FUNC_IMPL(__imp__sub_822512E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822512E8"))) PPC_WEAK_FUNC(sub_822512E8);
PPC_FUNC_IMPL(__imp__sub_822512E8) {
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
	// lwz r3,-24752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24752);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225140c
	if (!cr6.eq) goto loc_8225140C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251318;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225138c
	if (cr6.eq) goto loc_8225138C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,26344
	ctx.r7.s64 = ctx.r10.s64 + 26344;
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
	// addi r11,r11,-24632
	ctx.r11.s64 = ctx.r11.s64 + -24632;
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
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82251388;
	sub_822ED768(ctx, base);
	// b 0x82251390
	goto loc_82251390;
loc_8225138C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251390:
	// stw r3,-24752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24752, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x82251398;
	sub_821FCE70(ctx, base);
	// lwz r11,-24752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24752);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822513b4
	if (cr6.eq) goto loc_822513B4;
	// bl 0x821fce70
	ctx.lr = 0x822513A8;
	sub_821FCE70(ctx, base);
	// lwz r11,-24752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24752);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822513bc
	goto loc_822513BC;
loc_822513B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822513BC:
	// bl 0x82170938
	ctx.lr = 0x822513C0;
	sub_82170938(ctx, base);
	// lwz r11,-24752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24752);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822513CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24752);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225140c
	if (cr6.eq) goto loc_8225140C;
	// bl 0x82170ba8
	ctx.lr = 0x822513EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24752);
	// bne cr6,0x8225140c
	if (!cr6.eq) goto loc_8225140C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24752);
loc_8225140C:
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

__attribute__((alias("__imp__sub_82251424"))) PPC_WEAK_FUNC(sub_82251424);
PPC_FUNC_IMPL(__imp__sub_82251424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251428"))) PPC_WEAK_FUNC(sub_82251428);
PPC_FUNC_IMPL(__imp__sub_82251428) {
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
	// lwz r3,-24748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24748);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225154c
	if (!cr6.eq) goto loc_8225154C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251458;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822514cc
	if (cr6.eq) goto loc_822514CC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,26488
	ctx.r7.s64 = ctx.r10.s64 + 26488;
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
	// addi r11,r11,-24592
	ctx.r11.s64 = ctx.r11.s64 + -24592;
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
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822514C8;
	sub_822ED768(ctx, base);
	// b 0x822514d0
	goto loc_822514D0;
loc_822514CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822514D0:
	// stw r3,-24748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24748, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x822514D8;
	sub_821FCE70(ctx, base);
	// lwz r11,-24748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24748);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822514f4
	if (cr6.eq) goto loc_822514F4;
	// bl 0x821fce70
	ctx.lr = 0x822514E8;
	sub_821FCE70(ctx, base);
	// lwz r11,-24748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24748);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822514fc
	goto loc_822514FC;
loc_822514F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822514FC:
	// bl 0x82170938
	ctx.lr = 0x82251500;
	sub_82170938(ctx, base);
	// lwz r11,-24748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24748);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225150C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24748);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225154c
	if (cr6.eq) goto loc_8225154C;
	// bl 0x82170ba8
	ctx.lr = 0x8225152C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24748);
	// bne cr6,0x8225154c
	if (!cr6.eq) goto loc_8225154C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24748);
loc_8225154C:
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

__attribute__((alias("__imp__sub_82251564"))) PPC_WEAK_FUNC(sub_82251564);
PPC_FUNC_IMPL(__imp__sub_82251564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251568"))) PPC_WEAK_FUNC(sub_82251568);
PPC_FUNC_IMPL(__imp__sub_82251568) {
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
	// lwz r3,-24760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24760);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225168c
	if (!cr6.eq) goto loc_8225168C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251598;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225160c
	if (cr6.eq) goto loc_8225160C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,26768
	ctx.r7.s64 = ctx.r10.s64 + 26768;
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
	// addi r11,r11,-24716
	ctx.r11.s64 = ctx.r11.s64 + -24716;
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
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82251608;
	sub_822ED768(ctx, base);
	// b 0x82251610
	goto loc_82251610;
loc_8225160C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251610:
	// stw r3,-24760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24760, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x82251618;
	sub_821FCE70(ctx, base);
	// lwz r11,-24760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24760);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82251634
	if (cr6.eq) goto loc_82251634;
	// bl 0x821fce70
	ctx.lr = 0x82251628;
	sub_821FCE70(ctx, base);
	// lwz r11,-24760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24760);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225163c
	goto loc_8225163C;
loc_82251634:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225163C:
	// bl 0x82170938
	ctx.lr = 0x82251640;
	sub_82170938(ctx, base);
	// lwz r11,-24760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24760);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225164C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24760);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225168c
	if (cr6.eq) goto loc_8225168C;
	// bl 0x82170ba8
	ctx.lr = 0x8225166C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24760);
	// bne cr6,0x8225168c
	if (!cr6.eq) goto loc_8225168C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251688;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24760);
loc_8225168C:
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

__attribute__((alias("__imp__sub_822516A4"))) PPC_WEAK_FUNC(sub_822516A4);
PPC_FUNC_IMPL(__imp__sub_822516A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822516A8"))) PPC_WEAK_FUNC(sub_822516A8);
PPC_FUNC_IMPL(__imp__sub_822516A8) {
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
	// lwz r3,-24756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24756);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822517cc
	if (!cr6.eq) goto loc_822517CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822516D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225174c
	if (cr6.eq) goto loc_8225174C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27008
	ctx.r7.s64 = ctx.r10.s64 + 27008;
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
	// addi r11,r11,-24676
	ctx.r11.s64 = ctx.r11.s64 + -24676;
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
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82251748;
	sub_822ED768(ctx, base);
	// b 0x82251750
	goto loc_82251750;
loc_8225174C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251750:
	// stw r3,-24756(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24756, ctx.r3.u32);
	// bl 0x821fce70
	ctx.lr = 0x82251758;
	sub_821FCE70(ctx, base);
	// lwz r11,-24756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24756);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82251774
	if (cr6.eq) goto loc_82251774;
	// bl 0x821fce70
	ctx.lr = 0x82251768;
	sub_821FCE70(ctx, base);
	// lwz r11,-24756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24756);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225177c
	goto loc_8225177C;
loc_82251774:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225177C:
	// bl 0x82170938
	ctx.lr = 0x82251780;
	sub_82170938(ctx, base);
	// lwz r11,-24756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24756);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225178C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24756);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822517cc
	if (cr6.eq) goto loc_822517CC;
	// bl 0x82170ba8
	ctx.lr = 0x822517AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24756);
	// bne cr6,0x822517cc
	if (!cr6.eq) goto loc_822517CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822517C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24756);
loc_822517CC:
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

__attribute__((alias("__imp__sub_822517E4"))) PPC_WEAK_FUNC(sub_822517E4);
PPC_FUNC_IMPL(__imp__sub_822517E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822517E8"))) PPC_WEAK_FUNC(sub_822517E8);
PPC_FUNC_IMPL(__imp__sub_822517E8) {
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
	// lwz r3,-24744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225190c
	if (!cr6.eq) goto loc_8225190C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251818;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225188c
	if (cr6.eq) goto loc_8225188C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27136
	ctx.r7.s64 = ctx.r10.s64 + 27136;
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
	// addi r11,r11,-24552
	ctx.r11.s64 = ctx.r11.s64 + -24552;
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
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82251888;
	sub_822ED768(ctx, base);
	// b 0x82251890
	goto loc_82251890;
loc_8225188C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251890:
	// stw r3,-24744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24744, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82251898;
	sub_821FD018(ctx, base);
	// lwz r11,-24744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24744);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822518b4
	if (cr6.eq) goto loc_822518B4;
	// bl 0x821fd018
	ctx.lr = 0x822518A8;
	sub_821FD018(ctx, base);
	// lwz r11,-24744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24744);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822518bc
	goto loc_822518BC;
loc_822518B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822518BC:
	// bl 0x82170938
	ctx.lr = 0x822518C0;
	sub_82170938(ctx, base);
	// lwz r11,-24744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24744);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822518CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24744);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225190c
	if (cr6.eq) goto loc_8225190C;
	// bl 0x82170ba8
	ctx.lr = 0x822518EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24744);
	// bne cr6,0x8225190c
	if (!cr6.eq) goto loc_8225190C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24744);
loc_8225190C:
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

__attribute__((alias("__imp__sub_82251924"))) PPC_WEAK_FUNC(sub_82251924);
PPC_FUNC_IMPL(__imp__sub_82251924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251928"))) PPC_WEAK_FUNC(sub_82251928);
PPC_FUNC_IMPL(__imp__sub_82251928) {
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
	// lwz r3,-24740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24740);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82251a4c
	if (!cr6.eq) goto loc_82251A4C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251958;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822519cc
	if (cr6.eq) goto loc_822519CC;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11080
	ctx.r7.s64 = ctx.r10.s64 + -11080;
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
	// addi r11,r11,-24508
	ctx.r11.s64 = ctx.r11.s64 + -24508;
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
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822519C8;
	sub_822ED768(ctx, base);
	// b 0x822519d0
	goto loc_822519D0;
loc_822519CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822519D0:
	// stw r3,-24740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24740, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x822519D8;
	sub_821FD018(ctx, base);
	// lwz r11,-24740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24740);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822519f4
	if (cr6.eq) goto loc_822519F4;
	// bl 0x821fd018
	ctx.lr = 0x822519E8;
	sub_821FD018(ctx, base);
	// lwz r11,-24740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24740);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822519fc
	goto loc_822519FC;
loc_822519F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822519FC:
	// bl 0x82170938
	ctx.lr = 0x82251A00;
	sub_82170938(ctx, base);
	// lwz r11,-24740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24740);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82251A0C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24740);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82251a4c
	if (cr6.eq) goto loc_82251A4C;
	// bl 0x82170ba8
	ctx.lr = 0x82251A2C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24740);
	// bne cr6,0x82251a4c
	if (!cr6.eq) goto loc_82251A4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251A48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24740);
loc_82251A4C:
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

__attribute__((alias("__imp__sub_82251A64"))) PPC_WEAK_FUNC(sub_82251A64);
PPC_FUNC_IMPL(__imp__sub_82251A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251A68"))) PPC_WEAK_FUNC(sub_82251A68);
PPC_FUNC_IMPL(__imp__sub_82251A68) {
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
	// lwz r3,-24736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24736);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82251b8c
	if (!cr6.eq) goto loc_82251B8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251A98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82251b0c
	if (cr6.eq) goto loc_82251B0C;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11080
	ctx.r7.s64 = ctx.r10.s64 + -11080;
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
	// addi r11,r11,-24452
	ctx.r11.s64 = ctx.r11.s64 + -24452;
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
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82251B08;
	sub_822ED768(ctx, base);
	// b 0x82251b10
	goto loc_82251B10;
loc_82251B0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251B10:
	// stw r3,-24736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24736, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82251B18;
	sub_821FD018(ctx, base);
	// lwz r11,-24736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24736);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82251b34
	if (cr6.eq) goto loc_82251B34;
	// bl 0x821fd018
	ctx.lr = 0x82251B28;
	sub_821FD018(ctx, base);
	// lwz r11,-24736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24736);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82251b3c
	goto loc_82251B3C;
loc_82251B34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82251B3C:
	// bl 0x82170938
	ctx.lr = 0x82251B40;
	sub_82170938(ctx, base);
	// lwz r11,-24736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24736);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82251B4C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24736);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82251b8c
	if (cr6.eq) goto loc_82251B8C;
	// bl 0x82170ba8
	ctx.lr = 0x82251B6C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24736);
	// bne cr6,0x82251b8c
	if (!cr6.eq) goto loc_82251B8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251B88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24736);
loc_82251B8C:
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

__attribute__((alias("__imp__sub_82251BA4"))) PPC_WEAK_FUNC(sub_82251BA4);
PPC_FUNC_IMPL(__imp__sub_82251BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251BA8"))) PPC_WEAK_FUNC(sub_82251BA8);
PPC_FUNC_IMPL(__imp__sub_82251BA8) {
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
	// lwz r3,-24732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24732);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82251ccc
	if (!cr6.eq) goto loc_82251CCC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251BD8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82251c4c
	if (cr6.eq) goto loc_82251C4C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27392
	ctx.r7.s64 = ctx.r10.s64 + 27392;
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
	// addi r11,r11,-24412
	ctx.r11.s64 = ctx.r11.s64 + -24412;
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
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82251C48;
	sub_822ED768(ctx, base);
	// b 0x82251c50
	goto loc_82251C50;
loc_82251C4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251C50:
	// stw r3,-24732(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24732, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82251C58;
	sub_821FD018(ctx, base);
	// lwz r11,-24732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24732);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82251c74
	if (cr6.eq) goto loc_82251C74;
	// bl 0x821fd018
	ctx.lr = 0x82251C68;
	sub_821FD018(ctx, base);
	// lwz r11,-24732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24732);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82251c7c
	goto loc_82251C7C;
loc_82251C74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82251C7C:
	// bl 0x82170938
	ctx.lr = 0x82251C80;
	sub_82170938(ctx, base);
	// lwz r11,-24732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24732);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82251C8C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24732);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82251ccc
	if (cr6.eq) goto loc_82251CCC;
	// bl 0x82170ba8
	ctx.lr = 0x82251CAC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24732);
	// bne cr6,0x82251ccc
	if (!cr6.eq) goto loc_82251CCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251CC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24732);
loc_82251CCC:
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

__attribute__((alias("__imp__sub_82251CE4"))) PPC_WEAK_FUNC(sub_82251CE4);
PPC_FUNC_IMPL(__imp__sub_82251CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251CE8"))) PPC_WEAK_FUNC(sub_82251CE8);
PPC_FUNC_IMPL(__imp__sub_82251CE8) {
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
	// lwz r3,-24720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24720);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82251e0c
	if (!cr6.eq) goto loc_82251E0C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251D18;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82251d8c
	if (cr6.eq) goto loc_82251D8C;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11080
	ctx.r7.s64 = ctx.r10.s64 + -11080;
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
	// addi r11,r11,-24272
	ctx.r11.s64 = ctx.r11.s64 + -24272;
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
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82251D88;
	sub_822ED768(ctx, base);
	// b 0x82251d90
	goto loc_82251D90;
loc_82251D8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251D90:
	// stw r3,-24720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24720, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82251D98;
	sub_821FD018(ctx, base);
	// lwz r11,-24720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24720);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82251db4
	if (cr6.eq) goto loc_82251DB4;
	// bl 0x821fd018
	ctx.lr = 0x82251DA8;
	sub_821FD018(ctx, base);
	// lwz r11,-24720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24720);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82251dbc
	goto loc_82251DBC;
loc_82251DB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82251DBC:
	// bl 0x82170938
	ctx.lr = 0x82251DC0;
	sub_82170938(ctx, base);
	// lwz r11,-24720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24720);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82251DCC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24720);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82251e0c
	if (cr6.eq) goto loc_82251E0C;
	// bl 0x82170ba8
	ctx.lr = 0x82251DEC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24720);
	// bne cr6,0x82251e0c
	if (!cr6.eq) goto loc_82251E0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251E08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24720);
loc_82251E0C:
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

__attribute__((alias("__imp__sub_82251E24"))) PPC_WEAK_FUNC(sub_82251E24);
PPC_FUNC_IMPL(__imp__sub_82251E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251E28"))) PPC_WEAK_FUNC(sub_82251E28);
PPC_FUNC_IMPL(__imp__sub_82251E28) {
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
	// lwz r3,-24728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82251f4c
	if (!cr6.eq) goto loc_82251F4C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251E58;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82251ecc
	if (cr6.eq) goto loc_82251ECC;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11080
	ctx.r7.s64 = ctx.r10.s64 + -11080;
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
	// addi r11,r11,-24364
	ctx.r11.s64 = ctx.r11.s64 + -24364;
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
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82251EC8;
	sub_822ED768(ctx, base);
	// b 0x82251ed0
	goto loc_82251ED0;
loc_82251ECC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251ED0:
	// stw r3,-24728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24728, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82251ED8;
	sub_821FD018(ctx, base);
	// lwz r11,-24728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24728);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82251ef4
	if (cr6.eq) goto loc_82251EF4;
	// bl 0x821fd018
	ctx.lr = 0x82251EE8;
	sub_821FD018(ctx, base);
	// lwz r11,-24728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24728);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82251efc
	goto loc_82251EFC;
loc_82251EF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82251EFC:
	// bl 0x82170938
	ctx.lr = 0x82251F00;
	sub_82170938(ctx, base);
	// lwz r11,-24728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24728);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82251F0C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24728);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82251f4c
	if (cr6.eq) goto loc_82251F4C;
	// bl 0x82170ba8
	ctx.lr = 0x82251F2C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24728);
	// bne cr6,0x82251f4c
	if (!cr6.eq) goto loc_82251F4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251F48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24728);
loc_82251F4C:
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

__attribute__((alias("__imp__sub_82251F64"))) PPC_WEAK_FUNC(sub_82251F64);
PPC_FUNC_IMPL(__imp__sub_82251F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251F68"))) PPC_WEAK_FUNC(sub_82251F68);
PPC_FUNC_IMPL(__imp__sub_82251F68) {
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
	// lwz r3,-24724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24724);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225208c
	if (!cr6.eq) goto loc_8225208C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82251F98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225200c
	if (cr6.eq) goto loc_8225200C;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11080
	ctx.r7.s64 = ctx.r10.s64 + -11080;
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
	// addi r11,r11,-24320
	ctx.r11.s64 = ctx.r11.s64 + -24320;
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
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82252008;
	sub_822ED768(ctx, base);
	// b 0x82252010
	goto loc_82252010;
loc_8225200C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252010:
	// stw r3,-24724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24724, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82252018;
	sub_821FD018(ctx, base);
	// lwz r11,-24724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24724);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82252034
	if (cr6.eq) goto loc_82252034;
	// bl 0x821fd018
	ctx.lr = 0x82252028;
	sub_821FD018(ctx, base);
	// lwz r11,-24724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24724);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225203c
	goto loc_8225203C;
loc_82252034:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225203C:
	// bl 0x82170938
	ctx.lr = 0x82252040;
	sub_82170938(ctx, base);
	// lwz r11,-24724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24724);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225204C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24724);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225208c
	if (cr6.eq) goto loc_8225208C;
	// bl 0x82170ba8
	ctx.lr = 0x8225206C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24724);
	// bne cr6,0x8225208c
	if (!cr6.eq) goto loc_8225208C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252088;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24724);
loc_8225208C:
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

__attribute__((alias("__imp__sub_822520A4"))) PPC_WEAK_FUNC(sub_822520A4);
PPC_FUNC_IMPL(__imp__sub_822520A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822520A8"))) PPC_WEAK_FUNC(sub_822520A8);
PPC_FUNC_IMPL(__imp__sub_822520A8) {
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
	// lwz r3,-24716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24716);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822521cc
	if (!cr6.eq) goto loc_822521CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822520D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225214c
	if (cr6.eq) goto loc_8225214C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27536
	ctx.r7.s64 = ctx.r10.s64 + 27536;
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
	// addi r11,r11,-24220
	ctx.r11.s64 = ctx.r11.s64 + -24220;
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
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82252148;
	sub_822ED768(ctx, base);
	// b 0x82252150
	goto loc_82252150;
loc_8225214C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252150:
	// stw r3,-24716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24716, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82252158;
	sub_821FD018(ctx, base);
	// lwz r11,-24716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24716);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82252174
	if (cr6.eq) goto loc_82252174;
	// bl 0x821fd018
	ctx.lr = 0x82252168;
	sub_821FD018(ctx, base);
	// lwz r11,-24716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24716);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225217c
	goto loc_8225217C;
loc_82252174:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225217C:
	// bl 0x82170938
	ctx.lr = 0x82252180;
	sub_82170938(ctx, base);
	// lwz r11,-24716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24716);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225218C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24716);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822521cc
	if (cr6.eq) goto loc_822521CC;
	// bl 0x82170ba8
	ctx.lr = 0x822521AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24716);
	// bne cr6,0x822521cc
	if (!cr6.eq) goto loc_822521CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822521C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24716);
loc_822521CC:
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

__attribute__((alias("__imp__sub_822521E4"))) PPC_WEAK_FUNC(sub_822521E4);
PPC_FUNC_IMPL(__imp__sub_822521E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822521E8"))) PPC_WEAK_FUNC(sub_822521E8);
PPC_FUNC_IMPL(__imp__sub_822521E8) {
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
	// lwz r3,-24712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24712);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225230c
	if (!cr6.eq) goto loc_8225230C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252218;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225228c
	if (cr6.eq) goto loc_8225228C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27680
	ctx.r7.s64 = ctx.r10.s64 + 27680;
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
	// addi r11,r11,-24188
	ctx.r11.s64 = ctx.r11.s64 + -24188;
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
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82252288;
	sub_822ED768(ctx, base);
	// b 0x82252290
	goto loc_82252290;
loc_8225228C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252290:
	// stw r3,-24712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24712, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82252298;
	sub_821FD018(ctx, base);
	// lwz r11,-24712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24712);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822522b4
	if (cr6.eq) goto loc_822522B4;
	// bl 0x821fd018
	ctx.lr = 0x822522A8;
	sub_821FD018(ctx, base);
	// lwz r11,-24712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24712);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822522bc
	goto loc_822522BC;
loc_822522B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822522BC:
	// bl 0x82170938
	ctx.lr = 0x822522C0;
	sub_82170938(ctx, base);
	// lwz r11,-24712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24712);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822522CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24712);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225230c
	if (cr6.eq) goto loc_8225230C;
	// bl 0x82170ba8
	ctx.lr = 0x822522EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24712);
	// bne cr6,0x8225230c
	if (!cr6.eq) goto loc_8225230C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24712);
loc_8225230C:
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

__attribute__((alias("__imp__sub_82252324"))) PPC_WEAK_FUNC(sub_82252324);
PPC_FUNC_IMPL(__imp__sub_82252324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252328"))) PPC_WEAK_FUNC(sub_82252328);
PPC_FUNC_IMPL(__imp__sub_82252328) {
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
	// lwz r3,-24708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24708);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225244c
	if (!cr6.eq) goto loc_8225244C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252358;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822523cc
	if (cr6.eq) goto loc_822523CC;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11080
	ctx.r7.s64 = ctx.r10.s64 + -11080;
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
	// addi r11,r11,-24132
	ctx.r11.s64 = ctx.r11.s64 + -24132;
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
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822523C8;
	sub_822ED768(ctx, base);
	// b 0x822523d0
	goto loc_822523D0;
loc_822523CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822523D0:
	// stw r3,-24708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24708, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x822523D8;
	sub_821FD018(ctx, base);
	// lwz r11,-24708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24708);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822523f4
	if (cr6.eq) goto loc_822523F4;
	// bl 0x821fd018
	ctx.lr = 0x822523E8;
	sub_821FD018(ctx, base);
	// lwz r11,-24708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24708);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822523fc
	goto loc_822523FC;
loc_822523F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822523FC:
	// bl 0x82170938
	ctx.lr = 0x82252400;
	sub_82170938(ctx, base);
	// lwz r11,-24708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24708);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225240C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24708);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225244c
	if (cr6.eq) goto loc_8225244C;
	// bl 0x82170ba8
	ctx.lr = 0x8225242C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24708);
	// bne cr6,0x8225244c
	if (!cr6.eq) goto loc_8225244C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24708);
loc_8225244C:
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

__attribute__((alias("__imp__sub_82252464"))) PPC_WEAK_FUNC(sub_82252464);
PPC_FUNC_IMPL(__imp__sub_82252464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252468"))) PPC_WEAK_FUNC(sub_82252468);
PPC_FUNC_IMPL(__imp__sub_82252468) {
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
	// lwz r3,-24704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24704);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225258c
	if (!cr6.eq) goto loc_8225258C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252498;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225250c
	if (cr6.eq) goto loc_8225250C;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11080
	ctx.r7.s64 = ctx.r10.s64 + -11080;
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
	// addi r11,r11,-24088
	ctx.r11.s64 = ctx.r11.s64 + -24088;
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
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82252508;
	sub_822ED768(ctx, base);
	// b 0x82252510
	goto loc_82252510;
loc_8225250C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252510:
	// stw r3,-24704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24704, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82252518;
	sub_821FD018(ctx, base);
	// lwz r11,-24704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24704);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82252534
	if (cr6.eq) goto loc_82252534;
	// bl 0x821fd018
	ctx.lr = 0x82252528;
	sub_821FD018(ctx, base);
	// lwz r11,-24704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24704);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225253c
	goto loc_8225253C;
loc_82252534:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225253C:
	// bl 0x82170938
	ctx.lr = 0x82252540;
	sub_82170938(ctx, base);
	// lwz r11,-24704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24704);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225254C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24704);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225258c
	if (cr6.eq) goto loc_8225258C;
	// bl 0x82170ba8
	ctx.lr = 0x8225256C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24704);
	// bne cr6,0x8225258c
	if (!cr6.eq) goto loc_8225258C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24704);
loc_8225258C:
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

__attribute__((alias("__imp__sub_822525A4"))) PPC_WEAK_FUNC(sub_822525A4);
PPC_FUNC_IMPL(__imp__sub_822525A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822525A8"))) PPC_WEAK_FUNC(sub_822525A8);
PPC_FUNC_IMPL(__imp__sub_822525A8) {
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
	// lwz r3,-24700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24700);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822526cc
	if (!cr6.eq) goto loc_822526CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822525D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225264c
	if (cr6.eq) goto loc_8225264C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27824
	ctx.r7.s64 = ctx.r10.s64 + 27824;
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
	// addi r11,r11,-24028
	ctx.r11.s64 = ctx.r11.s64 + -24028;
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
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82252648;
	sub_822ED768(ctx, base);
	// b 0x82252650
	goto loc_82252650;
loc_8225264C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252650:
	// stw r3,-24700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24700, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82252658;
	sub_821FD018(ctx, base);
	// lwz r11,-24700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24700);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82252674
	if (cr6.eq) goto loc_82252674;
	// bl 0x821fd018
	ctx.lr = 0x82252668;
	sub_821FD018(ctx, base);
	// lwz r11,-24700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24700);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225267c
	goto loc_8225267C;
loc_82252674:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225267C:
	// bl 0x82170938
	ctx.lr = 0x82252680;
	sub_82170938(ctx, base);
	// lwz r11,-24700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24700);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225268C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24700);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822526cc
	if (cr6.eq) goto loc_822526CC;
	// bl 0x82170ba8
	ctx.lr = 0x822526AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24700);
	// bne cr6,0x822526cc
	if (!cr6.eq) goto loc_822526CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822526C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24700);
loc_822526CC:
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

__attribute__((alias("__imp__sub_822526E4"))) PPC_WEAK_FUNC(sub_822526E4);
PPC_FUNC_IMPL(__imp__sub_822526E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822526E8"))) PPC_WEAK_FUNC(sub_822526E8);
PPC_FUNC_IMPL(__imp__sub_822526E8) {
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
	// lwz r3,-24696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24696);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225280c
	if (!cr6.eq) goto loc_8225280C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252718;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225278c
	if (cr6.eq) goto loc_8225278C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,28112
	ctx.r7.s64 = ctx.r10.s64 + 28112;
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
	// addi r11,r11,-23988
	ctx.r11.s64 = ctx.r11.s64 + -23988;
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
	ctx.lr = 0x82252788;
	sub_822ED768(ctx, base);
	// b 0x82252790
	goto loc_82252790;
loc_8225278C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252790:
	// stw r3,-24696(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24696, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x82252798;
	sub_821FD018(ctx, base);
	// lwz r11,-24696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24696);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822527b4
	if (cr6.eq) goto loc_822527B4;
	// bl 0x821fd018
	ctx.lr = 0x822527A8;
	sub_821FD018(ctx, base);
	// lwz r11,-24696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24696);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822527bc
	goto loc_822527BC;
loc_822527B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822527BC:
	// bl 0x82170938
	ctx.lr = 0x822527C0;
	sub_82170938(ctx, base);
	// lwz r11,-24696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24696);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822527CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24696);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225280c
	if (cr6.eq) goto loc_8225280C;
	// bl 0x82170ba8
	ctx.lr = 0x822527EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24696);
	// bne cr6,0x8225280c
	if (!cr6.eq) goto loc_8225280C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24696);
loc_8225280C:
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

__attribute__((alias("__imp__sub_82252824"))) PPC_WEAK_FUNC(sub_82252824);
PPC_FUNC_IMPL(__imp__sub_82252824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252828"))) PPC_WEAK_FUNC(sub_82252828);
PPC_FUNC_IMPL(__imp__sub_82252828) {
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
	// lwz r3,-24688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24688);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225294c
	if (!cr6.eq) goto loc_8225294C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252858;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822528cc
	if (cr6.eq) goto loc_822528CC;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,28384
	ctx.r7.s64 = ctx.r10.s64 + 28384;
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
	// addi r11,r11,-23900
	ctx.r11.s64 = ctx.r11.s64 + -23900;
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
	ctx.lr = 0x822528C8;
	sub_822ED768(ctx, base);
	// b 0x822528d0
	goto loc_822528D0;
loc_822528CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822528D0:
	// stw r3,-24688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24688, ctx.r3.u32);
	// bl 0x821fd018
	ctx.lr = 0x822528D8;
	sub_821FD018(ctx, base);
	// lwz r11,-24688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24688);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822528f4
	if (cr6.eq) goto loc_822528F4;
	// bl 0x821fd018
	ctx.lr = 0x822528E8;
	sub_821FD018(ctx, base);
	// lwz r11,-24688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24688);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822528fc
	goto loc_822528FC;
loc_822528F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822528FC:
	// bl 0x82170938
	ctx.lr = 0x82252900;
	sub_82170938(ctx, base);
	// lwz r11,-24688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24688);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225290C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24688);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225294c
	if (cr6.eq) goto loc_8225294C;
	// bl 0x82170ba8
	ctx.lr = 0x8225292C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24688);
	// bne cr6,0x8225294c
	if (!cr6.eq) goto loc_8225294C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24688);
loc_8225294C:
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

__attribute__((alias("__imp__sub_82252964"))) PPC_WEAK_FUNC(sub_82252964);
PPC_FUNC_IMPL(__imp__sub_82252964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252968"))) PPC_WEAK_FUNC(sub_82252968);
PPC_FUNC_IMPL(__imp__sub_82252968) {
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
	// lwz r3,31704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31704);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82252a8c
	if (!cr6.eq) goto loc_82252A8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252998;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82252a0c
	if (cr6.eq) goto loc_82252A0C;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,13952
	ctx.r7.s64 = ctx.r10.s64 + 13952;
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
	// addi r11,r11,-32228
	ctx.r11.s64 = ctx.r11.s64 + -32228;
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
	// li r5,424
	ctx.r5.s64 = 424;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82252A08;
	sub_822ED768(ctx, base);
	// b 0x82252a10
	goto loc_82252A10;
loc_82252A0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252A10:
	// stw r3,31704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31704, ctx.r3.u32);
	// bl 0x821c1458
	ctx.lr = 0x82252A18;
	sub_821C1458(ctx, base);
	// lwz r11,31704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31704);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82252a34
	if (cr6.eq) goto loc_82252A34;
	// bl 0x821c1458
	ctx.lr = 0x82252A28;
	sub_821C1458(ctx, base);
	// lwz r11,31704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31704);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82252a3c
	goto loc_82252A3C;
loc_82252A34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82252A3C:
	// bl 0x82170938
	ctx.lr = 0x82252A40;
	sub_82170938(ctx, base);
	// lwz r11,31704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31704);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82252A4C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31704);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82252a8c
	if (cr6.eq) goto loc_82252A8C;
	// bl 0x82170ba8
	ctx.lr = 0x82252A6C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31704);
	// bne cr6,0x82252a8c
	if (!cr6.eq) goto loc_82252A8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252A88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31704);
loc_82252A8C:
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

__attribute__((alias("__imp__sub_82252AA4"))) PPC_WEAK_FUNC(sub_82252AA4);
PPC_FUNC_IMPL(__imp__sub_82252AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252AA8"))) PPC_WEAK_FUNC(sub_82252AA8);
PPC_FUNC_IMPL(__imp__sub_82252AA8) {
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
	// lwz r3,31720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31720);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82252bcc
	if (!cr6.eq) goto loc_82252BCC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252AD8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82252b4c
	if (cr6.eq) goto loc_82252B4C;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,14240
	ctx.r7.s64 = ctx.r10.s64 + 14240;
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
	// addi r11,r11,-30916
	ctx.r11.s64 = ctx.r11.s64 + -30916;
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
	// li r5,436
	ctx.r5.s64 = 436;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82252B48;
	sub_822ED768(ctx, base);
	// b 0x82252b50
	goto loc_82252B50;
loc_82252B4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252B50:
	// stw r3,31720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31720, ctx.r3.u32);
	// bl 0x82252968
	ctx.lr = 0x82252B58;
	sub_82252968(ctx, base);
	// lwz r11,31720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31720);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82252b74
	if (cr6.eq) goto loc_82252B74;
	// bl 0x82252968
	ctx.lr = 0x82252B68;
	sub_82252968(ctx, base);
	// lwz r11,31720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31720);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82252b7c
	goto loc_82252B7C;
loc_82252B74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82252B7C:
	// bl 0x82170938
	ctx.lr = 0x82252B80;
	sub_82170938(ctx, base);
	// lwz r11,31720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31720);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82252B8C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31720);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82252bcc
	if (cr6.eq) goto loc_82252BCC;
	// bl 0x82170ba8
	ctx.lr = 0x82252BAC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31720);
	// bne cr6,0x82252bcc
	if (!cr6.eq) goto loc_82252BCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252BC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31720);
loc_82252BCC:
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

__attribute__((alias("__imp__sub_82252BE4"))) PPC_WEAK_FUNC(sub_82252BE4);
PPC_FUNC_IMPL(__imp__sub_82252BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252BE8"))) PPC_WEAK_FUNC(sub_82252BE8);
PPC_FUNC_IMPL(__imp__sub_82252BE8) {
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
	// lwz r3,31716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31716);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82252d0c
	if (!cr6.eq) goto loc_82252D0C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252C18;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82252c8c
	if (cr6.eq) goto loc_82252C8C;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,14384
	ctx.r7.s64 = ctx.r10.s64 + 14384;
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
	// addi r11,r11,-31408
	ctx.r11.s64 = ctx.r11.s64 + -31408;
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
	// li r5,436
	ctx.r5.s64 = 436;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82252C88;
	sub_822ED768(ctx, base);
	// b 0x82252c90
	goto loc_82252C90;
loc_82252C8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252C90:
	// stw r3,31716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31716, ctx.r3.u32);
	// bl 0x82252aa8
	ctx.lr = 0x82252C98;
	sub_82252AA8(ctx, base);
	// lwz r11,31716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31716);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82252cb4
	if (cr6.eq) goto loc_82252CB4;
	// bl 0x82252aa8
	ctx.lr = 0x82252CA8;
	sub_82252AA8(ctx, base);
	// lwz r11,31716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31716);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82252cbc
	goto loc_82252CBC;
loc_82252CB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82252CBC:
	// bl 0x82170938
	ctx.lr = 0x82252CC0;
	sub_82170938(ctx, base);
	// lwz r11,31716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31716);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82252CCC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31716);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82252d0c
	if (cr6.eq) goto loc_82252D0C;
	// bl 0x82170ba8
	ctx.lr = 0x82252CEC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31716);
	// bne cr6,0x82252d0c
	if (!cr6.eq) goto loc_82252D0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252D08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31716);
loc_82252D0C:
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

__attribute__((alias("__imp__sub_82252D24"))) PPC_WEAK_FUNC(sub_82252D24);
PPC_FUNC_IMPL(__imp__sub_82252D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252D28"))) PPC_WEAK_FUNC(sub_82252D28);
PPC_FUNC_IMPL(__imp__sub_82252D28) {
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
	// lwz r3,-23356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82252e4c
	if (!cr6.eq) goto loc_82252E4C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252D58;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82252dcc
	if (cr6.eq) goto loc_82252DCC;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-10720
	ctx.r7.s64 = ctx.r10.s64 + -10720;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18696
	ctx.r11.s64 = ctx.r11.s64 + -18696;
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
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82252DC8;
	sub_822ED768(ctx, base);
	// b 0x82252dd0
	goto loc_82252DD0;
loc_82252DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252DD0:
	// stw r3,-23356(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23356, ctx.r3.u32);
	// bl 0x82295060
	ctx.lr = 0x82252DD8;
	sub_82295060(ctx, base);
	// lwz r11,-23356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23356);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82252df4
	if (cr6.eq) goto loc_82252DF4;
	// bl 0x82295060
	ctx.lr = 0x82252DE8;
	sub_82295060(ctx, base);
	// lwz r11,-23356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23356);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82252dfc
	goto loc_82252DFC;
loc_82252DF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82252DFC:
	// bl 0x82170938
	ctx.lr = 0x82252E00;
	sub_82170938(ctx, base);
	// lwz r11,-23356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23356);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82252E0C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23356);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82252e4c
	if (cr6.eq) goto loc_82252E4C;
	// bl 0x82170ba8
	ctx.lr = 0x82252E2C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23356);
	// bne cr6,0x82252e4c
	if (!cr6.eq) goto loc_82252E4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252E48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23356);
loc_82252E4C:
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

__attribute__((alias("__imp__sub_82252E64"))) PPC_WEAK_FUNC(sub_82252E64);
PPC_FUNC_IMPL(__imp__sub_82252E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252E68"))) PPC_WEAK_FUNC(sub_82252E68);
PPC_FUNC_IMPL(__imp__sub_82252E68) {
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
	// lwz r3,-23404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23404);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82252f8c
	if (!cr6.eq) goto loc_82252F8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252E98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82252f0c
	if (cr6.eq) goto loc_82252F0C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-10448
	ctx.r7.s64 = ctx.r10.s64 + -10448;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-19184
	ctx.r11.s64 = ctx.r11.s64 + -19184;
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
	ctx.lr = 0x82252F08;
	sub_822ED768(ctx, base);
	// b 0x82252f10
	goto loc_82252F10;
loc_82252F0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82252F10:
	// stw r3,-23404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23404, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x82252F18;
	sub_8228BA60(ctx, base);
	// lwz r11,-23404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23404);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82252f34
	if (cr6.eq) goto loc_82252F34;
	// bl 0x8228ba60
	ctx.lr = 0x82252F28;
	sub_8228BA60(ctx, base);
	// lwz r11,-23404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23404);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82252f3c
	goto loc_82252F3C;
loc_82252F34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82252F3C:
	// bl 0x82170938
	ctx.lr = 0x82252F40;
	sub_82170938(ctx, base);
	// lwz r11,-23404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23404);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82252F4C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23404);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82252f8c
	if (cr6.eq) goto loc_82252F8C;
	// bl 0x82170ba8
	ctx.lr = 0x82252F6C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23404);
	// bne cr6,0x82252f8c
	if (!cr6.eq) goto loc_82252F8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252F88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23404);
loc_82252F8C:
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

__attribute__((alias("__imp__sub_82252FA4"))) PPC_WEAK_FUNC(sub_82252FA4);
PPC_FUNC_IMPL(__imp__sub_82252FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252FA8"))) PPC_WEAK_FUNC(sub_82252FA8);
PPC_FUNC_IMPL(__imp__sub_82252FA8) {
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
	// lwz r3,-23384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822530cc
	if (!cr6.eq) goto loc_822530CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82252FD8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225304c
	if (cr6.eq) goto loc_8225304C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-10216
	ctx.r7.s64 = ctx.r10.s64 + -10216;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18960
	ctx.r11.s64 = ctx.r11.s64 + -18960;
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
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82253048;
	sub_822ED768(ctx, base);
	// b 0x82253050
	goto loc_82253050;
loc_8225304C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253050:
	// stw r3,-23384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23384, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x82253058;
	sub_8228BA60(ctx, base);
	// lwz r11,-23384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23384);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82253074
	if (cr6.eq) goto loc_82253074;
	// bl 0x8228ba60
	ctx.lr = 0x82253068;
	sub_8228BA60(ctx, base);
	// lwz r11,-23384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23384);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225307c
	goto loc_8225307C;
loc_82253074:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225307C:
	// bl 0x82170938
	ctx.lr = 0x82253080;
	sub_82170938(ctx, base);
	// lwz r11,-23384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23384);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225308C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23384);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822530cc
	if (cr6.eq) goto loc_822530CC;
	// bl 0x82170ba8
	ctx.lr = 0x822530AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23384);
	// bne cr6,0x822530cc
	if (!cr6.eq) goto loc_822530CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822530C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23384);
loc_822530CC:
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

__attribute__((alias("__imp__sub_822530E4"))) PPC_WEAK_FUNC(sub_822530E4);
PPC_FUNC_IMPL(__imp__sub_822530E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822530E8"))) PPC_WEAK_FUNC(sub_822530E8);
PPC_FUNC_IMPL(__imp__sub_822530E8) {
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
	// lwz r3,-23380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23380);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225320c
	if (!cr6.eq) goto loc_8225320C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82253118;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225318c
	if (cr6.eq) goto loc_8225318C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-10040
	ctx.r7.s64 = ctx.r10.s64 + -10040;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18924
	ctx.r11.s64 = ctx.r11.s64 + -18924;
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
	ctx.lr = 0x82253188;
	sub_822ED768(ctx, base);
	// b 0x82253190
	goto loc_82253190;
loc_8225318C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253190:
	// stw r3,-23380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23380, ctx.r3.u32);
	// bl 0x82252fa8
	ctx.lr = 0x82253198;
	sub_82252FA8(ctx, base);
	// lwz r11,-23380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23380);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822531b4
	if (cr6.eq) goto loc_822531B4;
	// bl 0x82252fa8
	ctx.lr = 0x822531A8;
	sub_82252FA8(ctx, base);
	// lwz r11,-23380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23380);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822531bc
	goto loc_822531BC;
loc_822531B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822531BC:
	// bl 0x82170938
	ctx.lr = 0x822531C0;
	sub_82170938(ctx, base);
	// lwz r11,-23380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23380);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822531CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23380);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225320c
	if (cr6.eq) goto loc_8225320C;
	// bl 0x82170ba8
	ctx.lr = 0x822531EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23380);
	// bne cr6,0x8225320c
	if (!cr6.eq) goto loc_8225320C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253208;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23380);
loc_8225320C:
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

__attribute__((alias("__imp__sub_82253224"))) PPC_WEAK_FUNC(sub_82253224);
PPC_FUNC_IMPL(__imp__sub_82253224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253228"))) PPC_WEAK_FUNC(sub_82253228);
PPC_FUNC_IMPL(__imp__sub_82253228) {
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
	// lwz r3,-23364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225334c
	if (!cr6.eq) goto loc_8225334C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82253258;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822532cc
	if (cr6.eq) goto loc_822532CC;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-9792
	ctx.r7.s64 = ctx.r10.s64 + -9792;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18764
	ctx.r11.s64 = ctx.r11.s64 + -18764;
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822532C8;
	sub_822ED768(ctx, base);
	// b 0x822532d0
	goto loc_822532D0;
loc_822532CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822532D0:
	// stw r3,-23364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23364, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x822532D8;
	sub_8228BA60(ctx, base);
	// lwz r11,-23364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23364);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822532f4
	if (cr6.eq) goto loc_822532F4;
	// bl 0x8228ba60
	ctx.lr = 0x822532E8;
	sub_8228BA60(ctx, base);
	// lwz r11,-23364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23364);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822532fc
	goto loc_822532FC;
loc_822532F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822532FC:
	// bl 0x82170938
	ctx.lr = 0x82253300;
	sub_82170938(ctx, base);
	// lwz r11,-23364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23364);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225330C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23364);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225334c
	if (cr6.eq) goto loc_8225334C;
	// bl 0x82170ba8
	ctx.lr = 0x8225332C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23364);
	// bne cr6,0x8225334c
	if (!cr6.eq) goto loc_8225334C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253348;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23364);
loc_8225334C:
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

__attribute__((alias("__imp__sub_82253364"))) PPC_WEAK_FUNC(sub_82253364);
PPC_FUNC_IMPL(__imp__sub_82253364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253368"))) PPC_WEAK_FUNC(sub_82253368);
PPC_FUNC_IMPL(__imp__sub_82253368) {
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
	// lwz r3,-23368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23368);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225348c
	if (!cr6.eq) goto loc_8225348C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82253398;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225340c
	if (cr6.eq) goto loc_8225340C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-9584
	ctx.r7.s64 = ctx.r10.s64 + -9584;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18796
	ctx.r11.s64 = ctx.r11.s64 + -18796;
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
	ctx.lr = 0x82253408;
	sub_822ED768(ctx, base);
	// b 0x82253410
	goto loc_82253410;
loc_8225340C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253410:
	// stw r3,-23368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23368, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x82253418;
	sub_8228BA60(ctx, base);
	// lwz r11,-23368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23368);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82253434
	if (cr6.eq) goto loc_82253434;
	// bl 0x8228ba60
	ctx.lr = 0x82253428;
	sub_8228BA60(ctx, base);
	// lwz r11,-23368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23368);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225343c
	goto loc_8225343C;
loc_82253434:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225343C:
	// bl 0x82170938
	ctx.lr = 0x82253440;
	sub_82170938(ctx, base);
	// lwz r11,-23368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23368);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225344C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23368);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225348c
	if (cr6.eq) goto loc_8225348C;
	// bl 0x82170ba8
	ctx.lr = 0x8225346C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23368);
	// bne cr6,0x8225348c
	if (!cr6.eq) goto loc_8225348C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253488;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23368);
loc_8225348C:
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

__attribute__((alias("__imp__sub_822534A4"))) PPC_WEAK_FUNC(sub_822534A4);
PPC_FUNC_IMPL(__imp__sub_822534A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822534A8"))) PPC_WEAK_FUNC(sub_822534A8);
PPC_FUNC_IMPL(__imp__sub_822534A8) {
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
	// lwz r3,-23412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23412);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822535cc
	if (!cr6.eq) goto loc_822535CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822534D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225354c
	if (cr6.eq) goto loc_8225354C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-9328
	ctx.r7.s64 = ctx.r10.s64 + -9328;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-19444
	ctx.r11.s64 = ctx.r11.s64 + -19444;
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82253548;
	sub_822ED768(ctx, base);
	// b 0x82253550
	goto loc_82253550;
loc_8225354C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253550:
	// stw r3,-23412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23412, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x82253558;
	sub_8228BA60(ctx, base);
	// lwz r11,-23412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23412);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82253574
	if (cr6.eq) goto loc_82253574;
	// bl 0x8228ba60
	ctx.lr = 0x82253568;
	sub_8228BA60(ctx, base);
	// lwz r11,-23412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23412);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225357c
	goto loc_8225357C;
loc_82253574:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225357C:
	// bl 0x82170938
	ctx.lr = 0x82253580;
	sub_82170938(ctx, base);
	// lwz r11,-23412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23412);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225358C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23412);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822535cc
	if (cr6.eq) goto loc_822535CC;
	// bl 0x82170ba8
	ctx.lr = 0x822535AC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23412);
	// bne cr6,0x822535cc
	if (!cr6.eq) goto loc_822535CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822535C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23412);
loc_822535CC:
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

__attribute__((alias("__imp__sub_822535E4"))) PPC_WEAK_FUNC(sub_822535E4);
PPC_FUNC_IMPL(__imp__sub_822535E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822535E8"))) PPC_WEAK_FUNC(sub_822535E8);
PPC_FUNC_IMPL(__imp__sub_822535E8) {
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
	// lwz r3,-23400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225370c
	if (!cr6.eq) goto loc_8225370C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82253618;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225368c
	if (cr6.eq) goto loc_8225368C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-9120
	ctx.r7.s64 = ctx.r10.s64 + -9120;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-19140
	ctx.r11.s64 = ctx.r11.s64 + -19140;
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
	ctx.lr = 0x82253688;
	sub_822ED768(ctx, base);
	// b 0x82253690
	goto loc_82253690;
loc_8225368C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253690:
	// stw r3,-23400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23400, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x82253698;
	sub_8228BA60(ctx, base);
	// lwz r11,-23400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23400);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822536b4
	if (cr6.eq) goto loc_822536B4;
	// bl 0x8228ba60
	ctx.lr = 0x822536A8;
	sub_8228BA60(ctx, base);
	// lwz r11,-23400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23400);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822536bc
	goto loc_822536BC;
loc_822536B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822536BC:
	// bl 0x82170938
	ctx.lr = 0x822536C0;
	sub_82170938(ctx, base);
	// lwz r11,-23400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23400);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822536CC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23400);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225370c
	if (cr6.eq) goto loc_8225370C;
	// bl 0x82170ba8
	ctx.lr = 0x822536EC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23400);
	// bne cr6,0x8225370c
	if (!cr6.eq) goto loc_8225370C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23400);
loc_8225370C:
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

__attribute__((alias("__imp__sub_82253724"))) PPC_WEAK_FUNC(sub_82253724);
PPC_FUNC_IMPL(__imp__sub_82253724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253728"))) PPC_WEAK_FUNC(sub_82253728);
PPC_FUNC_IMPL(__imp__sub_82253728) {
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
	// lwz r3,-23352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225384c
	if (!cr6.eq) goto loc_8225384C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82253758;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822537cc
	if (cr6.eq) goto loc_822537CC;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-8896
	ctx.r7.s64 = ctx.r10.s64 + -8896;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18628
	ctx.r11.s64 = ctx.r11.s64 + -18628;
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822537C8;
	sub_822ED768(ctx, base);
	// b 0x822537d0
	goto loc_822537D0;
loc_822537CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822537D0:
	// stw r3,-23352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23352, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x822537D8;
	sub_8228BA60(ctx, base);
	// lwz r11,-23352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23352);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822537f4
	if (cr6.eq) goto loc_822537F4;
	// bl 0x8228ba60
	ctx.lr = 0x822537E8;
	sub_8228BA60(ctx, base);
	// lwz r11,-23352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23352);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822537fc
	goto loc_822537FC;
loc_822537F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822537FC:
	// bl 0x82170938
	ctx.lr = 0x82253800;
	sub_82170938(ctx, base);
	// lwz r11,-23352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23352);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225380C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23352);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225384c
	if (cr6.eq) goto loc_8225384C;
	// bl 0x82170ba8
	ctx.lr = 0x8225382C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23352);
	// bne cr6,0x8225384c
	if (!cr6.eq) goto loc_8225384C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23352);
loc_8225384C:
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

__attribute__((alias("__imp__sub_82253864"))) PPC_WEAK_FUNC(sub_82253864);
PPC_FUNC_IMPL(__imp__sub_82253864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253868"))) PPC_WEAK_FUNC(sub_82253868);
PPC_FUNC_IMPL(__imp__sub_82253868) {
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
	// lwz r3,-23416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225398c
	if (!cr6.eq) goto loc_8225398C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82253898;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225390c
	if (cr6.eq) goto loc_8225390C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-8688
	ctx.r7.s64 = ctx.r10.s64 + -8688;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-19476
	ctx.r11.s64 = ctx.r11.s64 + -19476;
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82253908;
	sub_822ED768(ctx, base);
	// b 0x82253910
	goto loc_82253910;
loc_8225390C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253910:
	// stw r3,-23416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23416, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x82253918;
	sub_8228BA60(ctx, base);
	// lwz r11,-23416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23416);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82253934
	if (cr6.eq) goto loc_82253934;
	// bl 0x8228ba60
	ctx.lr = 0x82253928;
	sub_8228BA60(ctx, base);
	// lwz r11,-23416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23416);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8225393c
	goto loc_8225393C;
loc_82253934:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8225393C:
	// bl 0x82170938
	ctx.lr = 0x82253940;
	sub_82170938(ctx, base);
	// lwz r11,-23416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23416);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8225394C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23416);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225398c
	if (cr6.eq) goto loc_8225398C;
	// bl 0x82170ba8
	ctx.lr = 0x8225396C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23416);
	// bne cr6,0x8225398c
	if (!cr6.eq) goto loc_8225398C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253988;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23416);
loc_8225398C:
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

__attribute__((alias("__imp__sub_822539A4"))) PPC_WEAK_FUNC(sub_822539A4);
PPC_FUNC_IMPL(__imp__sub_822539A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822539A8"))) PPC_WEAK_FUNC(sub_822539A8);
PPC_FUNC_IMPL(__imp__sub_822539A8) {
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
	// lwz r3,-23392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23392);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82253acc
	if (!cr6.eq) goto loc_82253ACC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822539D8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82253a4c
	if (cr6.eq) goto loc_82253A4C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-8472
	ctx.r7.s64 = ctx.r10.s64 + -8472;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-19060
	ctx.r11.s64 = ctx.r11.s64 + -19060;
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
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82253A48;
	sub_822ED768(ctx, base);
	// b 0x82253a50
	goto loc_82253A50;
loc_82253A4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253A50:
	// stw r3,-23392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23392, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x82253A58;
	sub_8228BA60(ctx, base);
	// lwz r11,-23392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23392);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82253a74
	if (cr6.eq) goto loc_82253A74;
	// bl 0x8228ba60
	ctx.lr = 0x82253A68;
	sub_8228BA60(ctx, base);
	// lwz r11,-23392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23392);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82253a7c
	goto loc_82253A7C;
loc_82253A74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82253A7C:
	// bl 0x82170938
	ctx.lr = 0x82253A80;
	sub_82170938(ctx, base);
	// lwz r11,-23392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23392);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82253A8C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23392);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82253acc
	if (cr6.eq) goto loc_82253ACC;
	// bl 0x82170ba8
	ctx.lr = 0x82253AAC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23392);
	// bne cr6,0x82253acc
	if (!cr6.eq) goto loc_82253ACC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23392);
loc_82253ACC:
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

__attribute__((alias("__imp__sub_82253AE4"))) PPC_WEAK_FUNC(sub_82253AE4);
PPC_FUNC_IMPL(__imp__sub_82253AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253AE8"))) PPC_WEAK_FUNC(sub_82253AE8);
PPC_FUNC_IMPL(__imp__sub_82253AE8) {
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
	// lwz r3,-23388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82253c0c
	if (!cr6.eq) goto loc_82253C0C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82253B18;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82253b8c
	if (cr6.eq) goto loc_82253B8C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-8256
	ctx.r7.s64 = ctx.r10.s64 + -8256;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-19020
	ctx.r11.s64 = ctx.r11.s64 + -19020;
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
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82253B88;
	sub_822ED768(ctx, base);
	// b 0x82253b90
	goto loc_82253B90;
loc_82253B8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253B90:
	// stw r3,-23388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23388, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x82253B98;
	sub_8228BA60(ctx, base);
	// lwz r11,-23388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23388);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82253bb4
	if (cr6.eq) goto loc_82253BB4;
	// bl 0x8228ba60
	ctx.lr = 0x82253BA8;
	sub_8228BA60(ctx, base);
	// lwz r11,-23388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23388);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82253bbc
	goto loc_82253BBC;
loc_82253BB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82253BBC:
	// bl 0x82170938
	ctx.lr = 0x82253BC0;
	sub_82170938(ctx, base);
	// lwz r11,-23388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23388);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82253BCC;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23388);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82253c0c
	if (cr6.eq) goto loc_82253C0C;
	// bl 0x82170ba8
	ctx.lr = 0x82253BEC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23388);
	// bne cr6,0x82253c0c
	if (!cr6.eq) goto loc_82253C0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253C08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23388);
loc_82253C0C:
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

__attribute__((alias("__imp__sub_82253C24"))) PPC_WEAK_FUNC(sub_82253C24);
PPC_FUNC_IMPL(__imp__sub_82253C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253C28"))) PPC_WEAK_FUNC(sub_82253C28);
PPC_FUNC_IMPL(__imp__sub_82253C28) {
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
	// lwz r3,-23396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23396);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82253d4c
	if (!cr6.eq) goto loc_82253D4C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82253C58;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82253ccc
	if (cr6.eq) goto loc_82253CCC;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-8024
	ctx.r7.s64 = ctx.r10.s64 + -8024;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-19104
	ctx.r11.s64 = ctx.r11.s64 + -19104;
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
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82253CC8;
	sub_822ED768(ctx, base);
	// b 0x82253cd0
	goto loc_82253CD0;
loc_82253CCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253CD0:
	// stw r3,-23396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23396, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x82253CD8;
	sub_8228BA60(ctx, base);
	// lwz r11,-23396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23396);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82253cf4
	if (cr6.eq) goto loc_82253CF4;
	// bl 0x8228ba60
	ctx.lr = 0x82253CE8;
	sub_8228BA60(ctx, base);
	// lwz r11,-23396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23396);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82253cfc
	goto loc_82253CFC;
loc_82253CF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82253CFC:
	// bl 0x82170938
	ctx.lr = 0x82253D00;
	sub_82170938(ctx, base);
	// lwz r11,-23396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23396);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82253D0C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23396);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82253d4c
	if (cr6.eq) goto loc_82253D4C;
	// bl 0x82170ba8
	ctx.lr = 0x82253D2C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23396);
	// bne cr6,0x82253d4c
	if (!cr6.eq) goto loc_82253D4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23396);
loc_82253D4C:
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

__attribute__((alias("__imp__sub_82253D64"))) PPC_WEAK_FUNC(sub_82253D64);
PPC_FUNC_IMPL(__imp__sub_82253D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253D68"))) PPC_WEAK_FUNC(sub_82253D68);
PPC_FUNC_IMPL(__imp__sub_82253D68) {
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
	// lwz r3,-23372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23372);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82253e8c
	if (!cr6.eq) goto loc_82253E8C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82253D98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82253e0c
	if (cr6.eq) goto loc_82253E0C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-7808
	ctx.r7.s64 = ctx.r10.s64 + -7808;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18832
	ctx.r11.s64 = ctx.r11.s64 + -18832;
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
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82253E08;
	sub_822ED768(ctx, base);
	// b 0x82253e10
	goto loc_82253E10;
loc_82253E0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253E10:
	// stw r3,-23372(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23372, ctx.r3.u32);
	// bl 0x8228ba60
	ctx.lr = 0x82253E18;
	sub_8228BA60(ctx, base);
	// lwz r11,-23372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23372);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82253e34
	if (cr6.eq) goto loc_82253E34;
	// bl 0x8228ba60
	ctx.lr = 0x82253E28;
	sub_8228BA60(ctx, base);
	// lwz r11,-23372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23372);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82253e3c
	goto loc_82253E3C;
loc_82253E34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82253E3C:
	// bl 0x82170938
	ctx.lr = 0x82253E40;
	sub_82170938(ctx, base);
	// lwz r11,-23372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23372);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82253E4C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23372);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82253e8c
	if (cr6.eq) goto loc_82253E8C;
	// bl 0x82170ba8
	ctx.lr = 0x82253E6C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23372);
	// bne cr6,0x82253e8c
	if (!cr6.eq) goto loc_82253E8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253E88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23372);
loc_82253E8C:
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

__attribute__((alias("__imp__sub_82253EA4"))) PPC_WEAK_FUNC(sub_82253EA4);
PPC_FUNC_IMPL(__imp__sub_82253EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253EA8"))) PPC_WEAK_FUNC(sub_82253EA8);
PPC_FUNC_IMPL(__imp__sub_82253EA8) {
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
	// lwz r3,-24012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24012);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82253fcc
	if (!cr6.eq) goto loc_82253FCC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82253ED8;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82253f4c
	if (cr6.eq) goto loc_82253F4C;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12600
	ctx.r7.s64 = ctx.r10.s64 + 12600;
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
	// addi r11,r11,-13548
	ctx.r11.s64 = ctx.r11.s64 + -13548;
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
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82253F48;
	sub_822ED768(ctx, base);
	// b 0x82253f50
	goto loc_82253F50;
loc_82253F4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253F50:
	// stw r3,-24012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24012, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82253F58;
	sub_82170938(ctx, base);
	// lwz r11,-24012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24012);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82253f74
	if (cr6.eq) goto loc_82253F74;
	// bl 0x82170938
	ctx.lr = 0x82253F68;
	sub_82170938(ctx, base);
	// lwz r11,-24012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24012);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82253f7c
	goto loc_82253F7C;
loc_82253F74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82253F7C:
	// bl 0x82170938
	ctx.lr = 0x82253F80;
	sub_82170938(ctx, base);
	// lwz r11,-24012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24012);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82253F8C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24012);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82253fcc
	if (cr6.eq) goto loc_82253FCC;
	// bl 0x82170ba8
	ctx.lr = 0x82253FAC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24012);
	// bne cr6,0x82253fcc
	if (!cr6.eq) goto loc_82253FCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253FC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24012);
loc_82253FCC:
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

