#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8228CFA0"))) PPC_WEAK_FUNC(sub_8228CFA0);
PPC_FUNC_IMPL(__imp__sub_8228CFA0) {
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
	// lwz r3,-22352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228d0c4
	if (!cr6.eq) goto loc_8228D0C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228CFD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d044
	if (cr6.eq) goto loc_8228D044;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-10752
	ctx.r7.s64 = ctx.r10.s64 + -10752;
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
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
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
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228D040;
	sub_822ED768(ctx, base);
	// b 0x8228d048
	goto loc_8228D048;
loc_8228D044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228D048:
	// stw r3,-22352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22352, ctx.r3.u32);
	// bl 0x8228d220
	ctx.lr = 0x8228D050;
	sub_8228D220(ctx, base);
	// lwz r11,-22352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22352);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228d06c
	if (cr6.eq) goto loc_8228D06C;
	// bl 0x8228d220
	ctx.lr = 0x8228D060;
	sub_8228D220(ctx, base);
	// lwz r11,-22352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22352);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228d074
	goto loc_8228D074;
loc_8228D06C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228D074:
	// bl 0x82170938
	ctx.lr = 0x8228D078;
	sub_82170938(ctx, base);
	// lwz r11,-22352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22352);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228D084;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22352);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228d0c4
	if (cr6.eq) goto loc_8228D0C4;
	// bl 0x82170ba8
	ctx.lr = 0x8228D0A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22352);
	// bne cr6,0x8228d0c4
	if (!cr6.eq) goto loc_8228D0C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D0C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22352);
loc_8228D0C4:
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

__attribute__((alias("__imp__sub_8228D0DC"))) PPC_WEAK_FUNC(sub_8228D0DC);
PPC_FUNC_IMPL(__imp__sub_8228D0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228D0E0"))) PPC_WEAK_FUNC(sub_8228D0E0);
PPC_FUNC_IMPL(__imp__sub_8228D0E0) {
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
	// lwz r3,-22384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228d204
	if (!cr6.eq) goto loc_8228D204;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228D110;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d184
	if (cr6.eq) goto loc_8228D184;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-9664
	ctx.r7.s64 = ctx.r10.s64 + -9664;
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
	// addi r11,r11,21672
	ctx.r11.s64 = ctx.r11.s64 + 21672;
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228D180;
	sub_822ED768(ctx, base);
	// b 0x8228d188
	goto loc_8228D188;
loc_8228D184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228D188:
	// stw r3,-22384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22384, ctx.r3.u32);
	// bl 0x822988a0
	ctx.lr = 0x8228D190;
	sub_822988A0(ctx, base);
	// lwz r11,-22384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22384);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228d1ac
	if (cr6.eq) goto loc_8228D1AC;
	// bl 0x822988a0
	ctx.lr = 0x8228D1A0;
	sub_822988A0(ctx, base);
	// lwz r11,-22384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22384);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228d1b4
	goto loc_8228D1B4;
loc_8228D1AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228D1B4:
	// bl 0x82170938
	ctx.lr = 0x8228D1B8;
	sub_82170938(ctx, base);
	// lwz r11,-22384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22384);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228D1C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22384);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228d204
	if (cr6.eq) goto loc_8228D204;
	// bl 0x82170ba8
	ctx.lr = 0x8228D1E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22384);
	// bne cr6,0x8228d204
	if (!cr6.eq) goto loc_8228D204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D200;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22384);
loc_8228D204:
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

__attribute__((alias("__imp__sub_8228D21C"))) PPC_WEAK_FUNC(sub_8228D21C);
PPC_FUNC_IMPL(__imp__sub_8228D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228D220"))) PPC_WEAK_FUNC(sub_8228D220);
PPC_FUNC_IMPL(__imp__sub_8228D220) {
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
	// lwz r3,-22360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228d344
	if (!cr6.eq) goto loc_8228D344;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228D250;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d2c4
	if (cr6.eq) goto loc_8228D2C4;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-10384
	ctx.r7.s64 = ctx.r10.s64 + -10384;
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
	// addi r11,r11,22020
	ctx.r11.s64 = ctx.r11.s64 + 22020;
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
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228D2C0;
	sub_822ED768(ctx, base);
	// b 0x8228d2c8
	goto loc_8228D2C8;
loc_8228D2C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228D2C8:
	// stw r3,-22360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22360, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x8228D2D0;
	sub_821A7638(ctx, base);
	// lwz r11,-22360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22360);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228d2ec
	if (cr6.eq) goto loc_8228D2EC;
	// bl 0x821a7638
	ctx.lr = 0x8228D2E0;
	sub_821A7638(ctx, base);
	// lwz r11,-22360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22360);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228d2f4
	goto loc_8228D2F4;
loc_8228D2EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228D2F4:
	// bl 0x82170938
	ctx.lr = 0x8228D2F8;
	sub_82170938(ctx, base);
	// lwz r11,-22360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22360);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228D304;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22360);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228d344
	if (cr6.eq) goto loc_8228D344;
	// bl 0x82170ba8
	ctx.lr = 0x8228D324;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22360);
	// bne cr6,0x8228d344
	if (!cr6.eq) goto loc_8228D344;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D340;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22360);
loc_8228D344:
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

__attribute__((alias("__imp__sub_8228D35C"))) PPC_WEAK_FUNC(sub_8228D35C);
PPC_FUNC_IMPL(__imp__sub_8228D35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228D360"))) PPC_WEAK_FUNC(sub_8228D360);
PPC_FUNC_IMPL(__imp__sub_8228D360) {
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
	// lwz r3,-22380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22380);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228d484
	if (!cr6.eq) goto loc_8228D484;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228D390;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d404
	if (cr6.eq) goto loc_8228D404;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-9888
	ctx.r7.s64 = ctx.r10.s64 + -9888;
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
	// addi r11,r11,21720
	ctx.r11.s64 = ctx.r11.s64 + 21720;
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
	ctx.lr = 0x8228D400;
	sub_822ED768(ctx, base);
	// b 0x8228d408
	goto loc_8228D408;
loc_8228D404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228D408:
	// stw r3,-22380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22380, ctx.r3.u32);
	// bl 0x8228d0e0
	ctx.lr = 0x8228D410;
	sub_8228D0E0(ctx, base);
	// lwz r11,-22380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22380);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228d42c
	if (cr6.eq) goto loc_8228D42C;
	// bl 0x8228d0e0
	ctx.lr = 0x8228D420;
	sub_8228D0E0(ctx, base);
	// lwz r11,-22380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22380);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228d434
	goto loc_8228D434;
loc_8228D42C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228D434:
	// bl 0x82170938
	ctx.lr = 0x8228D438;
	sub_82170938(ctx, base);
	// lwz r11,-22380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22380);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228D444;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22380);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228d484
	if (cr6.eq) goto loc_8228D484;
	// bl 0x82170ba8
	ctx.lr = 0x8228D464;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22380);
	// bne cr6,0x8228d484
	if (!cr6.eq) goto loc_8228D484;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22380);
loc_8228D484:
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

__attribute__((alias("__imp__sub_8228D49C"))) PPC_WEAK_FUNC(sub_8228D49C);
PPC_FUNC_IMPL(__imp__sub_8228D49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228D4A0"))) PPC_WEAK_FUNC(sub_8228D4A0);
PPC_FUNC_IMPL(__imp__sub_8228D4A0) {
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
	// lwz r3,-22356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228d5c4
	if (!cr6.eq) goto loc_8228D5C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228D4D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d544
	if (cr6.eq) goto loc_8228D544;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-10568
	ctx.r7.s64 = ctx.r10.s64 + -10568;
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
	// addi r11,r11,22060
	ctx.r11.s64 = ctx.r11.s64 + 22060;
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
	ctx.lr = 0x8228D540;
	sub_822ED768(ctx, base);
	// b 0x8228d548
	goto loc_8228D548;
loc_8228D544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228D548:
	// stw r3,-22356(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22356, ctx.r3.u32);
	// bl 0x8228d220
	ctx.lr = 0x8228D550;
	sub_8228D220(ctx, base);
	// lwz r11,-22356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22356);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228d56c
	if (cr6.eq) goto loc_8228D56C;
	// bl 0x8228d220
	ctx.lr = 0x8228D560;
	sub_8228D220(ctx, base);
	// lwz r11,-22356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22356);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228d574
	goto loc_8228D574;
loc_8228D56C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228D574:
	// bl 0x82170938
	ctx.lr = 0x8228D578;
	sub_82170938(ctx, base);
	// lwz r11,-22356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22356);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228D584;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22356);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228d5c4
	if (cr6.eq) goto loc_8228D5C4;
	// bl 0x82170ba8
	ctx.lr = 0x8228D5A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22356);
	// bne cr6,0x8228d5c4
	if (!cr6.eq) goto loc_8228D5C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D5C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22356);
loc_8228D5C4:
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

__attribute__((alias("__imp__sub_8228D5DC"))) PPC_WEAK_FUNC(sub_8228D5DC);
PPC_FUNC_IMPL(__imp__sub_8228D5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228D5E0"))) PPC_WEAK_FUNC(sub_8228D5E0);
PPC_FUNC_IMPL(__imp__sub_8228D5E0) {
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
	// lwz r3,-11960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11960);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228d704
	if (!cr6.eq) goto loc_8228D704;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228D610;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d684
	if (cr6.eq) goto loc_8228D684;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-28808
	ctx.r7.s64 = ctx.r10.s64 + -28808;
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
	// addi r11,r11,2920
	ctx.r11.s64 = ctx.r11.s64 + 2920;
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
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228D680;
	sub_822ED768(ctx, base);
	// b 0x8228d688
	goto loc_8228D688;
loc_8228D684:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228D688:
	// stw r3,-11960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11960, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228D690;
	sub_82170938(ctx, base);
	// lwz r11,-11960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11960);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228d6ac
	if (cr6.eq) goto loc_8228D6AC;
	// bl 0x82170938
	ctx.lr = 0x8228D6A0;
	sub_82170938(ctx, base);
	// lwz r11,-11960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11960);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228d6b4
	goto loc_8228D6B4;
loc_8228D6AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228D6B4:
	// bl 0x82170938
	ctx.lr = 0x8228D6B8;
	sub_82170938(ctx, base);
	// lwz r11,-11960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11960);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228D6C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11960);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228d704
	if (cr6.eq) goto loc_8228D704;
	// bl 0x82170ba8
	ctx.lr = 0x8228D6E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-11960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11960);
	// bne cr6,0x8228d704
	if (!cr6.eq) goto loc_8228D704;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-11960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11960);
loc_8228D704:
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

__attribute__((alias("__imp__sub_8228D71C"))) PPC_WEAK_FUNC(sub_8228D71C);
PPC_FUNC_IMPL(__imp__sub_8228D71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228D720"))) PPC_WEAK_FUNC(sub_8228D720);
PPC_FUNC_IMPL(__imp__sub_8228D720) {
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
	// lwz r3,32044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32044);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228d844
	if (!cr6.eq) goto loc_8228D844;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228D750;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d7c4
	if (cr6.eq) goto loc_8228D7C4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24224
	ctx.r7.s64 = ctx.r10.s64 + 24224;
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
	// addi r11,r11,-14308
	ctx.r11.s64 = ctx.r11.s64 + -14308;
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
	// li r5,544
	ctx.r5.s64 = 544;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228D7C0;
	sub_822ED768(ctx, base);
	// b 0x8228d7c8
	goto loc_8228D7C8;
loc_8228D7C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228D7C8:
	// stw r3,32044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32044, ctx.r3.u32);
	// bl 0x821a7a90
	ctx.lr = 0x8228D7D0;
	sub_821A7A90(ctx, base);
	// lwz r11,32044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32044);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228d7ec
	if (cr6.eq) goto loc_8228D7EC;
	// bl 0x821a7a90
	ctx.lr = 0x8228D7E0;
	sub_821A7A90(ctx, base);
	// lwz r11,32044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32044);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228d7f4
	goto loc_8228D7F4;
loc_8228D7EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228D7F4:
	// bl 0x82170938
	ctx.lr = 0x8228D7F8;
	sub_82170938(ctx, base);
	// lwz r11,32044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32044);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228D804;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32044);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228d844
	if (cr6.eq) goto loc_8228D844;
	// bl 0x82170ba8
	ctx.lr = 0x8228D824;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32044);
	// bne cr6,0x8228d844
	if (!cr6.eq) goto loc_8228D844;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32044);
loc_8228D844:
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

__attribute__((alias("__imp__sub_8228D85C"))) PPC_WEAK_FUNC(sub_8228D85C);
PPC_FUNC_IMPL(__imp__sub_8228D85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228D860"))) PPC_WEAK_FUNC(sub_8228D860);
PPC_FUNC_IMPL(__imp__sub_8228D860) {
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
	// lwz r3,32164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228d984
	if (!cr6.eq) goto loc_8228D984;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228D890;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d904
	if (cr6.eq) goto loc_8228D904;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20776
	ctx.r7.s64 = ctx.r10.s64 + 20776;
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
	// addi r11,r11,-13452
	ctx.r11.s64 = ctx.r11.s64 + -13452;
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
	// li r5,432
	ctx.r5.s64 = 432;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228D900;
	sub_822ED768(ctx, base);
	// b 0x8228d908
	goto loc_8228D908;
loc_8228D904:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228D908:
	// stw r3,32164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32164, ctx.r3.u32);
	// bl 0x821a7a90
	ctx.lr = 0x8228D910;
	sub_821A7A90(ctx, base);
	// lwz r11,32164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32164);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228d92c
	if (cr6.eq) goto loc_8228D92C;
	// bl 0x821a7a90
	ctx.lr = 0x8228D920;
	sub_821A7A90(ctx, base);
	// lwz r11,32164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32164);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228d934
	goto loc_8228D934;
loc_8228D92C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228D934:
	// bl 0x82170938
	ctx.lr = 0x8228D938;
	sub_82170938(ctx, base);
	// lwz r11,32164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32164);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228D944;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32164);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228d984
	if (cr6.eq) goto loc_8228D984;
	// bl 0x82170ba8
	ctx.lr = 0x8228D964;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32164);
	// bne cr6,0x8228d984
	if (!cr6.eq) goto loc_8228D984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D980;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32164);
loc_8228D984:
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

__attribute__((alias("__imp__sub_8228D99C"))) PPC_WEAK_FUNC(sub_8228D99C);
PPC_FUNC_IMPL(__imp__sub_8228D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228D9A0"))) PPC_WEAK_FUNC(sub_8228D9A0);
PPC_FUNC_IMPL(__imp__sub_8228D9A0) {
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
	// lwz r3,-22168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228dac4
	if (!cr6.eq) goto loc_8228DAC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228D9D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228da44
	if (cr6.eq) goto loc_8228DA44;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22912
	ctx.r7.s64 = ctx.r10.s64 + 22912;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14052
	ctx.r11.s64 = ctx.r11.s64 + -14052;
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
	// li r5,496
	ctx.r5.s64 = 496;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228DA40;
	sub_822ED768(ctx, base);
	// b 0x8228da48
	goto loc_8228DA48;
loc_8228DA44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228DA48:
	// stw r3,-22168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22168, ctx.r3.u32);
	// bl 0x82289c60
	ctx.lr = 0x8228DA50;
	sub_82289C60(ctx, base);
	// lwz r11,-22168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22168);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228da6c
	if (cr6.eq) goto loc_8228DA6C;
	// bl 0x82289c60
	ctx.lr = 0x8228DA60;
	sub_82289C60(ctx, base);
	// lwz r11,-22168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22168);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228da74
	goto loc_8228DA74;
loc_8228DA6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228DA74:
	// bl 0x82170938
	ctx.lr = 0x8228DA78;
	sub_82170938(ctx, base);
	// lwz r11,-22168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22168);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228DA84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22168);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228dac4
	if (cr6.eq) goto loc_8228DAC4;
	// bl 0x82170ba8
	ctx.lr = 0x8228DAA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22168);
	// bne cr6,0x8228dac4
	if (!cr6.eq) goto loc_8228DAC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228DAC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22168);
loc_8228DAC4:
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

__attribute__((alias("__imp__sub_8228DADC"))) PPC_WEAK_FUNC(sub_8228DADC);
PPC_FUNC_IMPL(__imp__sub_8228DADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228DAE0"))) PPC_WEAK_FUNC(sub_8228DAE0);
PPC_FUNC_IMPL(__imp__sub_8228DAE0) {
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
	// lwz r3,31968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31968);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228dc04
	if (!cr6.eq) goto loc_8228DC04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228DB10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228db84
	if (cr6.eq) goto loc_8228DB84;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27072
	ctx.r7.s64 = ctx.r10.s64 + 27072;
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
	// addi r11,r11,-14888
	ctx.r11.s64 = ctx.r11.s64 + -14888;
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
	ctx.lr = 0x8228DB80;
	sub_822ED768(ctx, base);
	// b 0x8228db88
	goto loc_8228DB88;
loc_8228DB84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228DB88:
	// stw r3,31968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31968, ctx.r3.u32);
	// bl 0x821c0058
	ctx.lr = 0x8228DB90;
	sub_821C0058(ctx, base);
	// lwz r11,31968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31968);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228dbac
	if (cr6.eq) goto loc_8228DBAC;
	// bl 0x821c0058
	ctx.lr = 0x8228DBA0;
	sub_821C0058(ctx, base);
	// lwz r11,31968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31968);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228dbb4
	goto loc_8228DBB4;
loc_8228DBAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228DBB4:
	// bl 0x82170938
	ctx.lr = 0x8228DBB8;
	sub_82170938(ctx, base);
	// lwz r11,31968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31968);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228DBC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31968);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228dc04
	if (cr6.eq) goto loc_8228DC04;
	// bl 0x82170ba8
	ctx.lr = 0x8228DBE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31968);
	// bne cr6,0x8228dc04
	if (!cr6.eq) goto loc_8228DC04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228DC00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31968);
loc_8228DC04:
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

__attribute__((alias("__imp__sub_8228DC1C"))) PPC_WEAK_FUNC(sub_8228DC1C);
PPC_FUNC_IMPL(__imp__sub_8228DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228DC20"))) PPC_WEAK_FUNC(sub_8228DC20);
PPC_FUNC_IMPL(__imp__sub_8228DC20) {
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
	// lwz r3,-24276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24276);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228dd44
	if (!cr6.eq) goto loc_8228DD44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228DC50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228dcc4
	if (cr6.eq) goto loc_8228DCC4;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,30104
	ctx.r7.s64 = ctx.r10.s64 + 30104;
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
	// addi r11,r11,29120
	ctx.r11.s64 = ctx.r11.s64 + 29120;
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
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228DCC0;
	sub_822ED768(ctx, base);
	// b 0x8228dcc8
	goto loc_8228DCC8;
loc_8228DCC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228DCC8:
	// stw r3,-24276(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24276, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228DCD0;
	sub_82170938(ctx, base);
	// lwz r11,-24276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24276);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228dcec
	if (cr6.eq) goto loc_8228DCEC;
	// bl 0x82170938
	ctx.lr = 0x8228DCE0;
	sub_82170938(ctx, base);
	// lwz r11,-24276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24276);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228dcf4
	goto loc_8228DCF4;
loc_8228DCEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228DCF4:
	// bl 0x82170938
	ctx.lr = 0x8228DCF8;
	sub_82170938(ctx, base);
	// lwz r11,-24276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24276);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228DD04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24276);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228dd44
	if (cr6.eq) goto loc_8228DD44;
	// bl 0x82170ba8
	ctx.lr = 0x8228DD24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24276);
	// bne cr6,0x8228dd44
	if (!cr6.eq) goto loc_8228DD44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228DD40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24276);
loc_8228DD44:
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

__attribute__((alias("__imp__sub_8228DD5C"))) PPC_WEAK_FUNC(sub_8228DD5C);
PPC_FUNC_IMPL(__imp__sub_8228DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228DD60"))) PPC_WEAK_FUNC(sub_8228DD60);
PPC_FUNC_IMPL(__imp__sub_8228DD60) {
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
	// lwz r3,32132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228de84
	if (!cr6.eq) goto loc_8228DE84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228DD90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228de04
	if (cr6.eq) goto loc_8228DE04;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24224
	ctx.r7.s64 = ctx.r10.s64 + 24224;
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
	// addi r11,r11,-13684
	ctx.r11.s64 = ctx.r11.s64 + -13684;
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
	// li r5,416
	ctx.r5.s64 = 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228DE00;
	sub_822ED768(ctx, base);
	// b 0x8228de08
	goto loc_8228DE08;
loc_8228DE04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228DE08:
	// stw r3,32132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32132, ctx.r3.u32);
	// bl 0x821a7a90
	ctx.lr = 0x8228DE10;
	sub_821A7A90(ctx, base);
	// lwz r11,32132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32132);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228de2c
	if (cr6.eq) goto loc_8228DE2C;
	// bl 0x821a7a90
	ctx.lr = 0x8228DE20;
	sub_821A7A90(ctx, base);
	// lwz r11,32132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32132);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228de34
	goto loc_8228DE34;
loc_8228DE2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228DE34:
	// bl 0x82170938
	ctx.lr = 0x8228DE38;
	sub_82170938(ctx, base);
	// lwz r11,32132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32132);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228DE44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32132);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228de84
	if (cr6.eq) goto loc_8228DE84;
	// bl 0x82170ba8
	ctx.lr = 0x8228DE64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32132);
	// bne cr6,0x8228de84
	if (!cr6.eq) goto loc_8228DE84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228DE80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32132);
loc_8228DE84:
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

__attribute__((alias("__imp__sub_8228DE9C"))) PPC_WEAK_FUNC(sub_8228DE9C);
PPC_FUNC_IMPL(__imp__sub_8228DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228DEA0"))) PPC_WEAK_FUNC(sub_8228DEA0);
PPC_FUNC_IMPL(__imp__sub_8228DEA0) {
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
	// lwz r3,-22172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228dfc4
	if (!cr6.eq) goto loc_8228DFC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228DED0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228df44
	if (cr6.eq) goto loc_8228DF44;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22168
	ctx.r7.s64 = ctx.r10.s64 + 22168;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14952
	ctx.r11.s64 = ctx.r11.s64 + -14952;
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
	ctx.lr = 0x8228DF40;
	sub_822ED768(ctx, base);
	// b 0x8228df48
	goto loc_8228DF48;
loc_8228DF44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228DF48:
	// stw r3,-22172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22172, ctx.r3.u32);
	// bl 0x82289c60
	ctx.lr = 0x8228DF50;
	sub_82289C60(ctx, base);
	// lwz r11,-22172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22172);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228df6c
	if (cr6.eq) goto loc_8228DF6C;
	// bl 0x82289c60
	ctx.lr = 0x8228DF60;
	sub_82289C60(ctx, base);
	// lwz r11,-22172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22172);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228df74
	goto loc_8228DF74;
loc_8228DF6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228DF74:
	// bl 0x82170938
	ctx.lr = 0x8228DF78;
	sub_82170938(ctx, base);
	// lwz r11,-22172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22172);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228DF84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22172);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228dfc4
	if (cr6.eq) goto loc_8228DFC4;
	// bl 0x82170ba8
	ctx.lr = 0x8228DFA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22172);
	// bne cr6,0x8228dfc4
	if (!cr6.eq) goto loc_8228DFC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228DFC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22172);
loc_8228DFC4:
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

__attribute__((alias("__imp__sub_8228DFDC"))) PPC_WEAK_FUNC(sub_8228DFDC);
PPC_FUNC_IMPL(__imp__sub_8228DFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228DFE0"))) PPC_WEAK_FUNC(sub_8228DFE0);
PPC_FUNC_IMPL(__imp__sub_8228DFE0) {
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
	// lwz r3,-22180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228e104
	if (!cr6.eq) goto loc_8228E104;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228E010;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e084
	if (cr6.eq) goto loc_8228E084;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,7056
	ctx.r7.s64 = ctx.r10.s64 + 7056;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-15028
	ctx.r11.s64 = ctx.r11.s64 + -15028;
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
	ctx.lr = 0x8228E080;
	sub_822ED768(ctx, base);
	// b 0x8228e088
	goto loc_8228E088;
loc_8228E084:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228E088:
	// stw r3,-22180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22180, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228E090;
	sub_82170938(ctx, base);
	// lwz r11,-22180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22180);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228e0ac
	if (cr6.eq) goto loc_8228E0AC;
	// bl 0x82170938
	ctx.lr = 0x8228E0A0;
	sub_82170938(ctx, base);
	// lwz r11,-22180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22180);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228e0b4
	goto loc_8228E0B4;
loc_8228E0AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228E0B4:
	// bl 0x82170938
	ctx.lr = 0x8228E0B8;
	sub_82170938(ctx, base);
	// lwz r11,-22180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22180);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228E0C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22180);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228e104
	if (cr6.eq) goto loc_8228E104;
	// bl 0x82170ba8
	ctx.lr = 0x8228E0E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22180);
	// bne cr6,0x8228e104
	if (!cr6.eq) goto loc_8228E104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22180);
loc_8228E104:
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

__attribute__((alias("__imp__sub_8228E11C"))) PPC_WEAK_FUNC(sub_8228E11C);
PPC_FUNC_IMPL(__imp__sub_8228E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228E120"))) PPC_WEAK_FUNC(sub_8228E120);
PPC_FUNC_IMPL(__imp__sub_8228E120) {
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
	// lwz r3,-22176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22176);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228e244
	if (!cr6.eq) goto loc_8228E244;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228E150;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e1c4
	if (cr6.eq) goto loc_8228E1C4;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22336
	ctx.r7.s64 = ctx.r10.s64 + 22336;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-14988
	ctx.r11.s64 = ctx.r11.s64 + -14988;
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
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228E1C0;
	sub_822ED768(ctx, base);
	// b 0x8228e1c8
	goto loc_8228E1C8;
loc_8228E1C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228E1C8:
	// stw r3,-22176(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22176, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228E1D0;
	sub_82170938(ctx, base);
	// lwz r11,-22176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22176);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228e1ec
	if (cr6.eq) goto loc_8228E1EC;
	// bl 0x82170938
	ctx.lr = 0x8228E1E0;
	sub_82170938(ctx, base);
	// lwz r11,-22176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22176);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228e1f4
	goto loc_8228E1F4;
loc_8228E1EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228E1F4:
	// bl 0x82170938
	ctx.lr = 0x8228E1F8;
	sub_82170938(ctx, base);
	// lwz r11,-22176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22176);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228E204;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22176);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228e244
	if (cr6.eq) goto loc_8228E244;
	// bl 0x82170ba8
	ctx.lr = 0x8228E224;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22176);
	// bne cr6,0x8228e244
	if (!cr6.eq) goto loc_8228E244;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E240;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22176);
loc_8228E244:
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

__attribute__((alias("__imp__sub_8228E25C"))) PPC_WEAK_FUNC(sub_8228E25C);
PPC_FUNC_IMPL(__imp__sub_8228E25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228E260"))) PPC_WEAK_FUNC(sub_8228E260);
PPC_FUNC_IMPL(__imp__sub_8228E260) {
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
	// lwz r3,-22340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22340);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228e384
	if (!cr6.eq) goto loc_8228E384;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228E290;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e304
	if (cr6.eq) goto loc_8228E304;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-11456
	ctx.r7.s64 = ctx.r10.s64 + -11456;
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
	// addi r11,r11,22260
	ctx.r11.s64 = ctx.r11.s64 + 22260;
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
	// li r5,448
	ctx.r5.s64 = 448;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228E300;
	sub_822ED768(ctx, base);
	// b 0x8228e308
	goto loc_8228E308;
loc_8228E304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228E308:
	// stw r3,-22340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22340, ctx.r3.u32);
	// bl 0x8228cbe0
	ctx.lr = 0x8228E310;
	sub_8228CBE0(ctx, base);
	// lwz r11,-22340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22340);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228e32c
	if (cr6.eq) goto loc_8228E32C;
	// bl 0x8228cbe0
	ctx.lr = 0x8228E320;
	sub_8228CBE0(ctx, base);
	// lwz r11,-22340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22340);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228e334
	goto loc_8228E334;
loc_8228E32C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228E334:
	// bl 0x82170938
	ctx.lr = 0x8228E338;
	sub_82170938(ctx, base);
	// lwz r11,-22340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22340);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228E344;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22340);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228e384
	if (cr6.eq) goto loc_8228E384;
	// bl 0x82170ba8
	ctx.lr = 0x8228E364;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22340);
	// bne cr6,0x8228e384
	if (!cr6.eq) goto loc_8228E384;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22340);
loc_8228E384:
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

__attribute__((alias("__imp__sub_8228E39C"))) PPC_WEAK_FUNC(sub_8228E39C);
PPC_FUNC_IMPL(__imp__sub_8228E39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228E3A0"))) PPC_WEAK_FUNC(sub_8228E3A0);
PPC_FUNC_IMPL(__imp__sub_8228E3A0) {
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
	// lwz r3,32200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228e4c4
	if (!cr6.eq) goto loc_8228E4C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228E3D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e444
	if (cr6.eq) goto loc_8228E444;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,18992
	ctx.r7.s64 = ctx.r10.s64 + 18992;
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
	// addi r11,r11,-13192
	ctx.r11.s64 = ctx.r11.s64 + -13192;
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
	// li r5,636
	ctx.r5.s64 = 636;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228E440;
	sub_822ED768(ctx, base);
	// b 0x8228e448
	goto loc_8228E448;
loc_8228E444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228E448:
	// stw r3,32200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32200, ctx.r3.u32);
	// bl 0x821a7c38
	ctx.lr = 0x8228E450;
	sub_821A7C38(ctx, base);
	// lwz r11,32200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32200);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228e46c
	if (cr6.eq) goto loc_8228E46C;
	// bl 0x821a7c38
	ctx.lr = 0x8228E460;
	sub_821A7C38(ctx, base);
	// lwz r11,32200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32200);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228e474
	goto loc_8228E474;
loc_8228E46C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228E474:
	// bl 0x82170938
	ctx.lr = 0x8228E478;
	sub_82170938(ctx, base);
	// lwz r11,32200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32200);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228E484;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32200);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228e4c4
	if (cr6.eq) goto loc_8228E4C4;
	// bl 0x82170ba8
	ctx.lr = 0x8228E4A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32200);
	// bne cr6,0x8228e4c4
	if (!cr6.eq) goto loc_8228E4C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E4C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32200);
loc_8228E4C4:
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

__attribute__((alias("__imp__sub_8228E4DC"))) PPC_WEAK_FUNC(sub_8228E4DC);
PPC_FUNC_IMPL(__imp__sub_8228E4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228E4E0"))) PPC_WEAK_FUNC(sub_8228E4E0);
PPC_FUNC_IMPL(__imp__sub_8228E4E0) {
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
	// lwz r3,-22184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228e604
	if (!cr6.eq) goto loc_8228E604;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228E510;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e584
	if (cr6.eq) goto loc_8228E584;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21824
	ctx.r7.s64 = ctx.r10.s64 + 21824;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,21624
	ctx.r9.s64 = ctx.r9.s64 + 21624;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-15044
	ctx.r11.s64 = ctx.r11.s64 + -15044;
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
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228E580;
	sub_822ED768(ctx, base);
	// b 0x8228e588
	goto loc_8228E588;
loc_8228E584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228E588:
	// stw r3,-22184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22184, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228E590;
	sub_82170938(ctx, base);
	// lwz r11,-22184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22184);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228e5ac
	if (cr6.eq) goto loc_8228E5AC;
	// bl 0x82170938
	ctx.lr = 0x8228E5A0;
	sub_82170938(ctx, base);
	// lwz r11,-22184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22184);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228e5b4
	goto loc_8228E5B4;
loc_8228E5AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228E5B4:
	// bl 0x82170938
	ctx.lr = 0x8228E5B8;
	sub_82170938(ctx, base);
	// lwz r11,-22184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22184);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228E5C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22184);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228e604
	if (cr6.eq) goto loc_8228E604;
	// bl 0x82170ba8
	ctx.lr = 0x8228E5E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22184);
	// bne cr6,0x8228e604
	if (!cr6.eq) goto loc_8228E604;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E600;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22184);
loc_8228E604:
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

__attribute__((alias("__imp__sub_8228E61C"))) PPC_WEAK_FUNC(sub_8228E61C);
PPC_FUNC_IMPL(__imp__sub_8228E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228E620"))) PPC_WEAK_FUNC(sub_8228E620);
PPC_FUNC_IMPL(__imp__sub_8228E620) {
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
	// lwz r3,31928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31928);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228e744
	if (!cr6.eq) goto loc_8228E744;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228E650;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e6c4
	if (cr6.eq) goto loc_8228E6C4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,28752
	ctx.r7.s64 = ctx.r10.s64 + 28752;
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
	// addi r11,r11,-15140
	ctx.r11.s64 = ctx.r11.s64 + -15140;
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
	// li r5,416
	ctx.r5.s64 = 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228E6C0;
	sub_822ED768(ctx, base);
	// b 0x8228e6c8
	goto loc_8228E6C8;
loc_8228E6C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228E6C8:
	// stw r3,31928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31928, ctx.r3.u32);
	// bl 0x821c1458
	ctx.lr = 0x8228E6D0;
	sub_821C1458(ctx, base);
	// lwz r11,31928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31928);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228e6ec
	if (cr6.eq) goto loc_8228E6EC;
	// bl 0x821c1458
	ctx.lr = 0x8228E6E0;
	sub_821C1458(ctx, base);
	// lwz r11,31928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31928);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228e6f4
	goto loc_8228E6F4;
loc_8228E6EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228E6F4:
	// bl 0x82170938
	ctx.lr = 0x8228E6F8;
	sub_82170938(ctx, base);
	// lwz r11,31928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31928);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228E704;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31928);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228e744
	if (cr6.eq) goto loc_8228E744;
	// bl 0x82170ba8
	ctx.lr = 0x8228E724;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31928);
	// bne cr6,0x8228e744
	if (!cr6.eq) goto loc_8228E744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E740;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31928);
loc_8228E744:
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

__attribute__((alias("__imp__sub_8228E75C"))) PPC_WEAK_FUNC(sub_8228E75C);
PPC_FUNC_IMPL(__imp__sub_8228E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228E760"))) PPC_WEAK_FUNC(sub_8228E760);
PPC_FUNC_IMPL(__imp__sub_8228E760) {
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
	// lwz r3,31904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228e884
	if (!cr6.eq) goto loc_8228E884;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228E790;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e804
	if (cr6.eq) goto loc_8228E804;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,29720
	ctx.r7.s64 = ctx.r10.s64 + 29720;
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
	// addi r11,r11,-15336
	ctx.r11.s64 = ctx.r11.s64 + -15336;
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
	ctx.lr = 0x8228E800;
	sub_822ED768(ctx, base);
	// b 0x8228e808
	goto loc_8228E808;
loc_8228E804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228E808:
	// stw r3,31904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31904, ctx.r3.u32);
	// bl 0x8228eb20
	ctx.lr = 0x8228E810;
	sub_8228EB20(ctx, base);
	// lwz r11,31904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31904);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228e82c
	if (cr6.eq) goto loc_8228E82C;
	// bl 0x8228eb20
	ctx.lr = 0x8228E820;
	sub_8228EB20(ctx, base);
	// lwz r11,31904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31904);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228e834
	goto loc_8228E834;
loc_8228E82C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228E834:
	// bl 0x82170938
	ctx.lr = 0x8228E838;
	sub_82170938(ctx, base);
	// lwz r11,31904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31904);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228E844;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31904);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228e884
	if (cr6.eq) goto loc_8228E884;
	// bl 0x82170ba8
	ctx.lr = 0x8228E864;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31904);
	// bne cr6,0x8228e884
	if (!cr6.eq) goto loc_8228E884;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31904);
loc_8228E884:
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

__attribute__((alias("__imp__sub_8228E89C"))) PPC_WEAK_FUNC(sub_8228E89C);
PPC_FUNC_IMPL(__imp__sub_8228E89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228E8A0"))) PPC_WEAK_FUNC(sub_8228E8A0);
PPC_FUNC_IMPL(__imp__sub_8228E8A0) {
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
	// lwz r3,31900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31900);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228e9c4
	if (!cr6.eq) goto loc_8228E9C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228E8D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e944
	if (cr6.eq) goto loc_8228E944;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,30088
	ctx.r7.s64 = ctx.r10.s64 + 30088;
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
	// addi r11,r11,-15376
	ctx.r11.s64 = ctx.r11.s64 + -15376;
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
	ctx.lr = 0x8228E940;
	sub_822ED768(ctx, base);
	// b 0x8228e948
	goto loc_8228E948;
loc_8228E944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228E948:
	// stw r3,31900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31900, ctx.r3.u32);
	// bl 0x8228eb20
	ctx.lr = 0x8228E950;
	sub_8228EB20(ctx, base);
	// lwz r11,31900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31900);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228e96c
	if (cr6.eq) goto loc_8228E96C;
	// bl 0x8228eb20
	ctx.lr = 0x8228E960;
	sub_8228EB20(ctx, base);
	// lwz r11,31900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31900);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228e974
	goto loc_8228E974;
loc_8228E96C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228E974:
	// bl 0x82170938
	ctx.lr = 0x8228E978;
	sub_82170938(ctx, base);
	// lwz r11,31900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31900);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228E984;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31900);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228e9c4
	if (cr6.eq) goto loc_8228E9C4;
	// bl 0x82170ba8
	ctx.lr = 0x8228E9A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31900);
	// bne cr6,0x8228e9c4
	if (!cr6.eq) goto loc_8228E9C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E9C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31900);
loc_8228E9C4:
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

__attribute__((alias("__imp__sub_8228E9DC"))) PPC_WEAK_FUNC(sub_8228E9DC);
PPC_FUNC_IMPL(__imp__sub_8228E9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228E9E0"))) PPC_WEAK_FUNC(sub_8228E9E0);
PPC_FUNC_IMPL(__imp__sub_8228E9E0) {
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
	// lwz r3,-22188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228eb04
	if (!cr6.eq) goto loc_8228EB04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228EA10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ea84
	if (cr6.eq) goto loc_8228EA84;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,19432
	ctx.r7.s64 = ctx.r10.s64 + 19432;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-17500
	ctx.r11.s64 = ctx.r11.s64 + -17500;
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
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228EA80;
	sub_822ED768(ctx, base);
	// b 0x8228ea88
	goto loc_8228EA88;
loc_8228EA84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228EA88:
	// stw r3,-22188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22188, ctx.r3.u32);
	// bl 0x82290ce0
	ctx.lr = 0x8228EA90;
	sub_82290CE0(ctx, base);
	// lwz r11,-22188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22188);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228eaac
	if (cr6.eq) goto loc_8228EAAC;
	// bl 0x82290ce0
	ctx.lr = 0x8228EAA0;
	sub_82290CE0(ctx, base);
	// lwz r11,-22188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22188);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228eab4
	goto loc_8228EAB4;
loc_8228EAAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228EAB4:
	// bl 0x82170938
	ctx.lr = 0x8228EAB8;
	sub_82170938(ctx, base);
	// lwz r11,-22188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22188);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228EAC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22188);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228eb04
	if (cr6.eq) goto loc_8228EB04;
	// bl 0x82170ba8
	ctx.lr = 0x8228EAE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22188);
	// bne cr6,0x8228eb04
	if (!cr6.eq) goto loc_8228EB04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EB00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22188);
loc_8228EB04:
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

__attribute__((alias("__imp__sub_8228EB1C"))) PPC_WEAK_FUNC(sub_8228EB1C);
PPC_FUNC_IMPL(__imp__sub_8228EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228EB20"))) PPC_WEAK_FUNC(sub_8228EB20);
PPC_FUNC_IMPL(__imp__sub_8228EB20) {
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
	// lwz r3,31896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31896);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228ec44
	if (!cr6.eq) goto loc_8228EC44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228EB50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ebc4
	if (cr6.eq) goto loc_8228EBC4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,30336
	ctx.r7.s64 = ctx.r10.s64 + 30336;
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
	// addi r11,r11,-15400
	ctx.r11.s64 = ctx.r11.s64 + -15400;
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
	ctx.lr = 0x8228EBC0;
	sub_822ED768(ctx, base);
	// b 0x8228ebc8
	goto loc_8228EBC8;
loc_8228EBC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228EBC8:
	// stw r3,31896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31896, ctx.r3.u32);
	// bl 0x82290e20
	ctx.lr = 0x8228EBD0;
	sub_82290E20(ctx, base);
	// lwz r11,31896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31896);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228ebec
	if (cr6.eq) goto loc_8228EBEC;
	// bl 0x82290e20
	ctx.lr = 0x8228EBE0;
	sub_82290E20(ctx, base);
	// lwz r11,31896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31896);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228ebf4
	goto loc_8228EBF4;
loc_8228EBEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228EBF4:
	// bl 0x82170938
	ctx.lr = 0x8228EBF8;
	sub_82170938(ctx, base);
	// lwz r11,31896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31896);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228EC04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31896);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228ec44
	if (cr6.eq) goto loc_8228EC44;
	// bl 0x82170ba8
	ctx.lr = 0x8228EC24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31896);
	// bne cr6,0x8228ec44
	if (!cr6.eq) goto loc_8228EC44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EC40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31896);
loc_8228EC44:
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

__attribute__((alias("__imp__sub_8228EC5C"))) PPC_WEAK_FUNC(sub_8228EC5C);
PPC_FUNC_IMPL(__imp__sub_8228EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228EC60"))) PPC_WEAK_FUNC(sub_8228EC60);
PPC_FUNC_IMPL(__imp__sub_8228EC60) {
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
	// lwz r3,32016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32016);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228ed84
	if (!cr6.eq) goto loc_8228ED84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228EC90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ed04
	if (cr6.eq) goto loc_8228ED04;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,25048
	ctx.r7.s64 = ctx.r10.s64 + 25048;
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
	// addi r11,r11,-14480
	ctx.r11.s64 = ctx.r11.s64 + -14480;
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
	// li r5,636
	ctx.r5.s64 = 636;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228ED00;
	sub_822ED768(ctx, base);
	// b 0x8228ed08
	goto loc_8228ED08;
loc_8228ED04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228ED08:
	// stw r3,32016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32016, ctx.r3.u32);
	// bl 0x821a7c38
	ctx.lr = 0x8228ED10;
	sub_821A7C38(ctx, base);
	// lwz r11,32016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32016);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228ed2c
	if (cr6.eq) goto loc_8228ED2C;
	// bl 0x821a7c38
	ctx.lr = 0x8228ED20;
	sub_821A7C38(ctx, base);
	// lwz r11,32016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32016);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228ed34
	goto loc_8228ED34;
loc_8228ED2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228ED34:
	// bl 0x82170938
	ctx.lr = 0x8228ED38;
	sub_82170938(ctx, base);
	// lwz r11,32016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32016);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228ED44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32016);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228ed84
	if (cr6.eq) goto loc_8228ED84;
	// bl 0x82170ba8
	ctx.lr = 0x8228ED64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32016);
	// bne cr6,0x8228ed84
	if (!cr6.eq) goto loc_8228ED84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228ED80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32016);
loc_8228ED84:
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

__attribute__((alias("__imp__sub_8228ED9C"))) PPC_WEAK_FUNC(sub_8228ED9C);
PPC_FUNC_IMPL(__imp__sub_8228ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228EDA0"))) PPC_WEAK_FUNC(sub_8228EDA0);
PPC_FUNC_IMPL(__imp__sub_8228EDA0) {
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
	// lwz r3,-24400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228eec4
	if (!cr6.eq) goto loc_8228EEC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228EDD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ee44
	if (cr6.eq) goto loc_8228EE44;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
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
	// addi r11,r11,16696
	ctx.r11.s64 = ctx.r11.s64 + 16696;
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
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228EE40;
	sub_822ED768(ctx, base);
	// b 0x8228ee48
	goto loc_8228EE48;
loc_8228EE44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228EE48:
	// stw r3,-24400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24400, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228EE50;
	sub_82170938(ctx, base);
	// lwz r11,-24400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24400);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228ee6c
	if (cr6.eq) goto loc_8228EE6C;
	// bl 0x82170938
	ctx.lr = 0x8228EE60;
	sub_82170938(ctx, base);
	// lwz r11,-24400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24400);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228ee74
	goto loc_8228EE74;
loc_8228EE6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228EE74:
	// bl 0x82170938
	ctx.lr = 0x8228EE78;
	sub_82170938(ctx, base);
	// lwz r11,-24400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24400);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228EE84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24400);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228eec4
	if (cr6.eq) goto loc_8228EEC4;
	// bl 0x82170ba8
	ctx.lr = 0x8228EEA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24400);
	// bne cr6,0x8228eec4
	if (!cr6.eq) goto loc_8228EEC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EEC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24400);
loc_8228EEC4:
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

__attribute__((alias("__imp__sub_8228EEDC"))) PPC_WEAK_FUNC(sub_8228EEDC);
PPC_FUNC_IMPL(__imp__sub_8228EEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228EEE0"))) PPC_WEAK_FUNC(sub_8228EEE0);
PPC_FUNC_IMPL(__imp__sub_8228EEE0) {
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
	// lwz r3,-24356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228f004
	if (!cr6.eq) goto loc_8228F004;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228EF10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ef84
	if (cr6.eq) goto loc_8228EF84;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
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
	// addi r11,r11,19284
	ctx.r11.s64 = ctx.r11.s64 + 19284;
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
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228EF80;
	sub_822ED768(ctx, base);
	// b 0x8228ef88
	goto loc_8228EF88;
loc_8228EF84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228EF88:
	// stw r3,-24356(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24356, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228EF90;
	sub_82170938(ctx, base);
	// lwz r11,-24356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24356);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228efac
	if (cr6.eq) goto loc_8228EFAC;
	// bl 0x82170938
	ctx.lr = 0x8228EFA0;
	sub_82170938(ctx, base);
	// lwz r11,-24356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24356);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228efb4
	goto loc_8228EFB4;
loc_8228EFAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228EFB4:
	// bl 0x82170938
	ctx.lr = 0x8228EFB8;
	sub_82170938(ctx, base);
	// lwz r11,-24356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24356);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228EFC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24356);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228f004
	if (cr6.eq) goto loc_8228F004;
	// bl 0x82170ba8
	ctx.lr = 0x8228EFE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24356);
	// bne cr6,0x8228f004
	if (!cr6.eq) goto loc_8228F004;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24356);
loc_8228F004:
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

__attribute__((alias("__imp__sub_8228F01C"))) PPC_WEAK_FUNC(sub_8228F01C);
PPC_FUNC_IMPL(__imp__sub_8228F01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228F020"))) PPC_WEAK_FUNC(sub_8228F020);
PPC_FUNC_IMPL(__imp__sub_8228F020) {
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
	// lwz r3,-23576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23576);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228f144
	if (!cr6.eq) goto loc_8228F144;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228F050;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f0c4
	if (cr6.eq) goto loc_8228F0C4;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-28184
	ctx.r7.s64 = ctx.r10.s64 + -28184;
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
	// addi r11,r11,-32540
	ctx.r11.s64 = ctx.r11.s64 + -32540;
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
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228F0C0;
	sub_822ED768(ctx, base);
	// b 0x8228f0c8
	goto loc_8228F0C8;
loc_8228F0C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F0C8:
	// stw r3,-23576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23576, ctx.r3.u32);
	// bl 0x8228f160
	ctx.lr = 0x8228F0D0;
	sub_8228F160(ctx, base);
	// lwz r11,-23576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23576);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228f0ec
	if (cr6.eq) goto loc_8228F0EC;
	// bl 0x8228f160
	ctx.lr = 0x8228F0E0;
	sub_8228F160(ctx, base);
	// lwz r11,-23576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23576);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228f0f4
	goto loc_8228F0F4;
loc_8228F0EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228F0F4:
	// bl 0x82170938
	ctx.lr = 0x8228F0F8;
	sub_82170938(ctx, base);
	// lwz r11,-23576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23576);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228F104;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23576);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228f144
	if (cr6.eq) goto loc_8228F144;
	// bl 0x82170ba8
	ctx.lr = 0x8228F124;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23576);
	// bne cr6,0x8228f144
	if (!cr6.eq) goto loc_8228F144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F140;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23576);
loc_8228F144:
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

__attribute__((alias("__imp__sub_8228F15C"))) PPC_WEAK_FUNC(sub_8228F15C);
PPC_FUNC_IMPL(__imp__sub_8228F15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228F160"))) PPC_WEAK_FUNC(sub_8228F160);
PPC_FUNC_IMPL(__imp__sub_8228F160) {
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
	// lwz r3,-23580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23580);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228f284
	if (!cr6.eq) goto loc_8228F284;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228F190;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f204
	if (cr6.eq) goto loc_8228F204;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-27832
	ctx.r7.s64 = ctx.r10.s64 + -27832;
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
	// addi r11,r11,-32568
	ctx.r11.s64 = ctx.r11.s64 + -32568;
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
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228F200;
	sub_822ED768(ctx, base);
	// b 0x8228f208
	goto loc_8228F208;
loc_8228F204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F208:
	// stw r3,-23580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23580, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228F210;
	sub_82170938(ctx, base);
	// lwz r11,-23580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23580);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228f22c
	if (cr6.eq) goto loc_8228F22C;
	// bl 0x82170938
	ctx.lr = 0x8228F220;
	sub_82170938(ctx, base);
	// lwz r11,-23580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23580);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228f234
	goto loc_8228F234;
loc_8228F22C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228F234:
	// bl 0x82170938
	ctx.lr = 0x8228F238;
	sub_82170938(ctx, base);
	// lwz r11,-23580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23580);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228F244;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23580);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228f284
	if (cr6.eq) goto loc_8228F284;
	// bl 0x82170ba8
	ctx.lr = 0x8228F264;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23580);
	// bne cr6,0x8228f284
	if (!cr6.eq) goto loc_8228F284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F280;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23580);
loc_8228F284:
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

__attribute__((alias("__imp__sub_8228F29C"))) PPC_WEAK_FUNC(sub_8228F29C);
PPC_FUNC_IMPL(__imp__sub_8228F29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228F2A0"))) PPC_WEAK_FUNC(sub_8228F2A0);
PPC_FUNC_IMPL(__imp__sub_8228F2A0) {
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
	// lwz r3,-11956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11956);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228f3c4
	if (!cr6.eq) goto loc_8228F3C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228F2D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f344
	if (cr6.eq) goto loc_8228F344;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22336
	ctx.r7.s64 = ctx.r10.s64 + 22336;
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
	// addi r11,r11,2956
	ctx.r11.s64 = ctx.r11.s64 + 2956;
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
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228F340;
	sub_822ED768(ctx, base);
	// b 0x8228f348
	goto loc_8228F348;
loc_8228F344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F348:
	// stw r3,-11956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11956, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228F350;
	sub_82170938(ctx, base);
	// lwz r11,-11956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11956);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228f36c
	if (cr6.eq) goto loc_8228F36C;
	// bl 0x82170938
	ctx.lr = 0x8228F360;
	sub_82170938(ctx, base);
	// lwz r11,-11956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11956);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228f374
	goto loc_8228F374;
loc_8228F36C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228F374:
	// bl 0x82170938
	ctx.lr = 0x8228F378;
	sub_82170938(ctx, base);
	// lwz r11,-11956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11956);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228F384;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11956);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228f3c4
	if (cr6.eq) goto loc_8228F3C4;
	// bl 0x82170ba8
	ctx.lr = 0x8228F3A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-11956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11956);
	// bne cr6,0x8228f3c4
	if (!cr6.eq) goto loc_8228F3C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F3C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-11956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11956);
loc_8228F3C4:
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

__attribute__((alias("__imp__sub_8228F3DC"))) PPC_WEAK_FUNC(sub_8228F3DC);
PPC_FUNC_IMPL(__imp__sub_8228F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228F3E0"))) PPC_WEAK_FUNC(sub_8228F3E0);
PPC_FUNC_IMPL(__imp__sub_8228F3E0) {
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
	// lwz r3,32152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228f504
	if (!cr6.eq) goto loc_8228F504;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228F410;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f484
	if (cr6.eq) goto loc_8228F484;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21480
	ctx.r7.s64 = ctx.r10.s64 + 21480;
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
	// addi r11,r11,-13528
	ctx.r11.s64 = ctx.r11.s64 + -13528;
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
	// li r5,632
	ctx.r5.s64 = 632;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228F480;
	sub_822ED768(ctx, base);
	// b 0x8228f488
	goto loc_8228F488;
loc_8228F484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F488:
	// stw r3,32152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32152, ctx.r3.u32);
	// bl 0x821a7c38
	ctx.lr = 0x8228F490;
	sub_821A7C38(ctx, base);
	// lwz r11,32152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32152);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228f4ac
	if (cr6.eq) goto loc_8228F4AC;
	// bl 0x821a7c38
	ctx.lr = 0x8228F4A0;
	sub_821A7C38(ctx, base);
	// lwz r11,32152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32152);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228f4b4
	goto loc_8228F4B4;
loc_8228F4AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228F4B4:
	// bl 0x82170938
	ctx.lr = 0x8228F4B8;
	sub_82170938(ctx, base);
	// lwz r11,32152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32152);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228F4C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32152);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228f504
	if (cr6.eq) goto loc_8228F504;
	// bl 0x82170ba8
	ctx.lr = 0x8228F4E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32152);
	// bne cr6,0x8228f504
	if (!cr6.eq) goto loc_8228F504;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F500;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32152);
loc_8228F504:
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

__attribute__((alias("__imp__sub_8228F51C"))) PPC_WEAK_FUNC(sub_8228F51C);
PPC_FUNC_IMPL(__imp__sub_8228F51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228F520"))) PPC_WEAK_FUNC(sub_8228F520);
PPC_FUNC_IMPL(__imp__sub_8228F520) {
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
	// lwz r3,31936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31936);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228f644
	if (!cr6.eq) goto loc_8228F644;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228F550;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f5c4
	if (cr6.eq) goto loc_8228F5C4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,28416
	ctx.r7.s64 = ctx.r10.s64 + 28416;
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
	// addi r11,r11,-15100
	ctx.r11.s64 = ctx.r11.s64 + -15100;
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
	ctx.lr = 0x8228F5C0;
	sub_822ED768(ctx, base);
	// b 0x8228f5c8
	goto loc_8228F5C8;
loc_8228F5C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F5C8:
	// stw r3,31936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31936, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x8228F5D0;
	sub_821A7638(ctx, base);
	// lwz r11,31936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31936);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228f5ec
	if (cr6.eq) goto loc_8228F5EC;
	// bl 0x821a7638
	ctx.lr = 0x8228F5E0;
	sub_821A7638(ctx, base);
	// lwz r11,31936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31936);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228f5f4
	goto loc_8228F5F4;
loc_8228F5EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228F5F4:
	// bl 0x82170938
	ctx.lr = 0x8228F5F8;
	sub_82170938(ctx, base);
	// lwz r11,31936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31936);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228F604;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31936);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228f644
	if (cr6.eq) goto loc_8228F644;
	// bl 0x82170ba8
	ctx.lr = 0x8228F624;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31936);
	// bne cr6,0x8228f644
	if (!cr6.eq) goto loc_8228F644;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31936);
loc_8228F644:
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

__attribute__((alias("__imp__sub_8228F65C"))) PPC_WEAK_FUNC(sub_8228F65C);
PPC_FUNC_IMPL(__imp__sub_8228F65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228F660"))) PPC_WEAK_FUNC(sub_8228F660);
PPC_FUNC_IMPL(__imp__sub_8228F660) {
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
	// lwz r3,32088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32088);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228f784
	if (!cr6.eq) goto loc_8228F784;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228F690;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f704
	if (cr6.eq) goto loc_8228F704;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,23024
	ctx.r7.s64 = ctx.r10.s64 + 23024;
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
	// addi r11,r11,-13968
	ctx.r11.s64 = ctx.r11.s64 + -13968;
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
	// li r5,476
	ctx.r5.s64 = 476;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228F700;
	sub_822ED768(ctx, base);
	// b 0x8228f708
	goto loc_8228F708;
loc_8228F704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F708:
	// stw r3,32088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32088, ctx.r3.u32);
	// bl 0x821a7a90
	ctx.lr = 0x8228F710;
	sub_821A7A90(ctx, base);
	// lwz r11,32088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32088);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228f72c
	if (cr6.eq) goto loc_8228F72C;
	// bl 0x821a7a90
	ctx.lr = 0x8228F720;
	sub_821A7A90(ctx, base);
	// lwz r11,32088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32088);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228f734
	goto loc_8228F734;
loc_8228F72C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228F734:
	// bl 0x82170938
	ctx.lr = 0x8228F738;
	sub_82170938(ctx, base);
	// lwz r11,32088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32088);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228F744;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32088);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228f784
	if (cr6.eq) goto loc_8228F784;
	// bl 0x82170ba8
	ctx.lr = 0x8228F764;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32088);
	// bne cr6,0x8228f784
	if (!cr6.eq) goto loc_8228F784;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32088);
loc_8228F784:
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

__attribute__((alias("__imp__sub_8228F79C"))) PPC_WEAK_FUNC(sub_8228F79C);
PPC_FUNC_IMPL(__imp__sub_8228F79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228F7A0"))) PPC_WEAK_FUNC(sub_8228F7A0);
PPC_FUNC_IMPL(__imp__sub_8228F7A0) {
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
	// lwz r3,-22920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22920);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228f8c4
	if (!cr6.eq) goto loc_8228F8C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228F7D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f844
	if (cr6.eq) goto loc_8228F844;
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-25664
	ctx.r11.s64 = ctx.r11.s64 + -25664;
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
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228F840;
	sub_822ED768(ctx, base);
	// b 0x8228f848
	goto loc_8228F848;
loc_8228F844:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F848:
	// stw r3,-22920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22920, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228F850;
	sub_82170938(ctx, base);
	// lwz r11,-22920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22920);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228f86c
	if (cr6.eq) goto loc_8228F86C;
	// bl 0x82170938
	ctx.lr = 0x8228F860;
	sub_82170938(ctx, base);
	// lwz r11,-22920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22920);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228f874
	goto loc_8228F874;
loc_8228F86C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228F874:
	// bl 0x82170938
	ctx.lr = 0x8228F878;
	sub_82170938(ctx, base);
	// lwz r11,-22920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22920);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228F884;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22920);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228f8c4
	if (cr6.eq) goto loc_8228F8C4;
	// bl 0x82170ba8
	ctx.lr = 0x8228F8A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22920);
	// bne cr6,0x8228f8c4
	if (!cr6.eq) goto loc_8228F8C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F8C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22920);
loc_8228F8C4:
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

__attribute__((alias("__imp__sub_8228F8DC"))) PPC_WEAK_FUNC(sub_8228F8DC);
PPC_FUNC_IMPL(__imp__sub_8228F8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228F8E0"))) PPC_WEAK_FUNC(sub_8228F8E0);
PPC_FUNC_IMPL(__imp__sub_8228F8E0) {
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
	// lwz r3,-22232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22232);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228fa04
	if (!cr6.eq) goto loc_8228FA04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228F910;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f984
	if (cr6.eq) goto loc_8228F984;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,31504
	ctx.r7.s64 = ctx.r10.s64 + 31504;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-25732
	ctx.r11.s64 = ctx.r11.s64 + -25732;
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
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228F980;
	sub_822ED768(ctx, base);
	// b 0x8228f988
	goto loc_8228F988;
loc_8228F984:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F988:
	// stw r3,-22232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22232, ctx.r3.u32);
	// bl 0x82292c20
	ctx.lr = 0x8228F990;
	sub_82292C20(ctx, base);
	// lwz r11,-22232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22232);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228f9ac
	if (cr6.eq) goto loc_8228F9AC;
	// bl 0x82292c20
	ctx.lr = 0x8228F9A0;
	sub_82292C20(ctx, base);
	// lwz r11,-22232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22232);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228f9b4
	goto loc_8228F9B4;
loc_8228F9AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228F9B4:
	// bl 0x82170938
	ctx.lr = 0x8228F9B8;
	sub_82170938(ctx, base);
	// lwz r11,-22232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22232);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228F9C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22232);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228fa04
	if (cr6.eq) goto loc_8228FA04;
	// bl 0x82170ba8
	ctx.lr = 0x8228F9E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22232);
	// bne cr6,0x8228fa04
	if (!cr6.eq) goto loc_8228FA04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FA00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22232);
loc_8228FA04:
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

__attribute__((alias("__imp__sub_8228FA1C"))) PPC_WEAK_FUNC(sub_8228FA1C);
PPC_FUNC_IMPL(__imp__sub_8228FA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228FA20"))) PPC_WEAK_FUNC(sub_8228FA20);
PPC_FUNC_IMPL(__imp__sub_8228FA20) {
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
	// lwz r3,-22192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228fb44
	if (!cr6.eq) goto loc_8228FB44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228FA50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228fac4
	if (cr6.eq) goto loc_8228FAC4;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,3976
	ctx.r7.s64 = ctx.r10.s64 + 3976;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18196
	ctx.r11.s64 = ctx.r11.s64 + -18196;
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228FAC0;
	sub_822ED768(ctx, base);
	// b 0x8228fac8
	goto loc_8228FAC8;
loc_8228FAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228FAC8:
	// stw r3,-22192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22192, ctx.r3.u32);
	// bl 0x8228dfe0
	ctx.lr = 0x8228FAD0;
	sub_8228DFE0(ctx, base);
	// lwz r11,-22192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22192);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228faec
	if (cr6.eq) goto loc_8228FAEC;
	// bl 0x8228dfe0
	ctx.lr = 0x8228FAE0;
	sub_8228DFE0(ctx, base);
	// lwz r11,-22192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22192);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228faf4
	goto loc_8228FAF4;
loc_8228FAEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228FAF4:
	// bl 0x82170938
	ctx.lr = 0x8228FAF8;
	sub_82170938(ctx, base);
	// lwz r11,-22192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22192);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228FB04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22192);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228fb44
	if (cr6.eq) goto loc_8228FB44;
	// bl 0x82170ba8
	ctx.lr = 0x8228FB24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22192);
	// bne cr6,0x8228fb44
	if (!cr6.eq) goto loc_8228FB44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FB40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22192);
loc_8228FB44:
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

__attribute__((alias("__imp__sub_8228FB5C"))) PPC_WEAK_FUNC(sub_8228FB5C);
PPC_FUNC_IMPL(__imp__sub_8228FB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228FB60"))) PPC_WEAK_FUNC(sub_8228FB60);
PPC_FUNC_IMPL(__imp__sub_8228FB60) {
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
	// lwz r3,-22196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228fc84
	if (!cr6.eq) goto loc_8228FC84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228FB90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228fc04
	if (cr6.eq) goto loc_8228FC04;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-248
	ctx.r7.s64 = ctx.r10.s64 + -248;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18648
	ctx.r11.s64 = ctx.r11.s64 + -18648;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,656
	ctx.r5.s64 = 656;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228FC00;
	sub_822ED768(ctx, base);
	// b 0x8228fc08
	goto loc_8228FC08;
loc_8228FC04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228FC08:
	// stw r3,-22196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22196, ctx.r3.u32);
	// bl 0x821a72f0
	ctx.lr = 0x8228FC10;
	sub_821A72F0(ctx, base);
	// lwz r11,-22196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22196);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228fc2c
	if (cr6.eq) goto loc_8228FC2C;
	// bl 0x821a72f0
	ctx.lr = 0x8228FC20;
	sub_821A72F0(ctx, base);
	// lwz r11,-22196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22196);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228fc34
	goto loc_8228FC34;
loc_8228FC2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228FC34:
	// bl 0x82170938
	ctx.lr = 0x8228FC38;
	sub_82170938(ctx, base);
	// lwz r11,-22196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22196);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228FC44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22196);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228fc84
	if (cr6.eq) goto loc_8228FC84;
	// bl 0x82170ba8
	ctx.lr = 0x8228FC64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22196);
	// bne cr6,0x8228fc84
	if (!cr6.eq) goto loc_8228FC84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FC80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22196);
loc_8228FC84:
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

__attribute__((alias("__imp__sub_8228FC9C"))) PPC_WEAK_FUNC(sub_8228FC9C);
PPC_FUNC_IMPL(__imp__sub_8228FC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228FCA0"))) PPC_WEAK_FUNC(sub_8228FCA0);
PPC_FUNC_IMPL(__imp__sub_8228FCA0) {
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
	// lwz r3,-22200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228fdc4
	if (!cr6.eq) goto loc_8228FDC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228FCD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228fd44
	if (cr6.eq) goto loc_8228FD44;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-3584
	ctx.r7.s64 = ctx.r10.s64 + -3584;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,9224
	ctx.r8.s64 = ctx.r8.s64 + 9224;
	// addi r9,r9,-11624
	ctx.r9.s64 = ctx.r9.s64 + -11624;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-19084
	ctx.r11.s64 = ctx.r11.s64 + -19084;
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
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// li r5,2328
	ctx.r5.s64 = 2328;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228FD40;
	sub_822ED768(ctx, base);
	// b 0x8228fd48
	goto loc_8228FD48;
loc_8228FD44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228FD48:
	// stw r3,-22200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22200, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x8228FD50;
	sub_82170938(ctx, base);
	// lwz r11,-22200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22200);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228fd6c
	if (cr6.eq) goto loc_8228FD6C;
	// bl 0x82170938
	ctx.lr = 0x8228FD60;
	sub_82170938(ctx, base);
	// lwz r11,-22200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22200);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228fd74
	goto loc_8228FD74;
loc_8228FD6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228FD74:
	// bl 0x82170938
	ctx.lr = 0x8228FD78;
	sub_82170938(ctx, base);
	// lwz r11,-22200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22200);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228FD84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22200);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228fdc4
	if (cr6.eq) goto loc_8228FDC4;
	// bl 0x82170ba8
	ctx.lr = 0x8228FDA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22200);
	// bne cr6,0x8228fdc4
	if (!cr6.eq) goto loc_8228FDC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FDC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22200);
loc_8228FDC4:
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

__attribute__((alias("__imp__sub_8228FDDC"))) PPC_WEAK_FUNC(sub_8228FDDC);
PPC_FUNC_IMPL(__imp__sub_8228FDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228FDE0"))) PPC_WEAK_FUNC(sub_8228FDE0);
PPC_FUNC_IMPL(__imp__sub_8228FDE0) {
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
	// lwz r3,-24272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228ff04
	if (!cr6.eq) goto loc_8228FF04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228FE10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228fe84
	if (cr6.eq) goto loc_8228FE84;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,30080
	ctx.r7.s64 = ctx.r10.s64 + 30080;
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
	// addi r11,r11,29176
	ctx.r11.s64 = ctx.r11.s64 + 29176;
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
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228FE80;
	sub_822ED768(ctx, base);
	// b 0x8228fe88
	goto loc_8228FE88;
loc_8228FE84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228FE88:
	// stw r3,-24272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24272, ctx.r3.u32);
	// bl 0x8228dc20
	ctx.lr = 0x8228FE90;
	sub_8228DC20(ctx, base);
	// lwz r11,-24272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228feac
	if (cr6.eq) goto loc_8228FEAC;
	// bl 0x8228dc20
	ctx.lr = 0x8228FEA0;
	sub_8228DC20(ctx, base);
	// lwz r11,-24272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228feb4
	goto loc_8228FEB4;
loc_8228FEAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228FEB4:
	// bl 0x82170938
	ctx.lr = 0x8228FEB8;
	sub_82170938(ctx, base);
	// lwz r11,-24272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8228FEC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228ff04
	if (cr6.eq) goto loc_8228FF04;
	// bl 0x82170ba8
	ctx.lr = 0x8228FEE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
	// bne cr6,0x8228ff04
	if (!cr6.eq) goto loc_8228FF04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FF00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24272);
loc_8228FF04:
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

__attribute__((alias("__imp__sub_8228FF1C"))) PPC_WEAK_FUNC(sub_8228FF1C);
PPC_FUNC_IMPL(__imp__sub_8228FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228FF20"))) PPC_WEAK_FUNC(sub_8228FF20);
PPC_FUNC_IMPL(__imp__sub_8228FF20) {
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
	// lwz r3,-24024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24024);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290044
	if (!cr6.eq) goto loc_82290044;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8228FF50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ffc4
	if (cr6.eq) goto loc_8228FFC4;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-240
	ctx.r7.s64 = ctx.r10.s64 + -240;
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
	// addi r11,r11,-13632
	ctx.r11.s64 = ctx.r11.s64 + -13632;
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
	// li r5,432
	ctx.r5.s64 = 432;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x8228FFC0;
	sub_822ED768(ctx, base);
	// b 0x8228ffc8
	goto loc_8228FFC8;
loc_8228FFC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228FFC8:
	// stw r3,-24024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24024, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x8228FFD0;
	sub_821A7638(ctx, base);
	// lwz r11,-24024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24024);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228ffec
	if (cr6.eq) goto loc_8228FFEC;
	// bl 0x821a7638
	ctx.lr = 0x8228FFE0;
	sub_821A7638(ctx, base);
	// lwz r11,-24024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24024);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8228fff4
	goto loc_8228FFF4;
loc_8228FFEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228FFF4:
	// bl 0x82170938
	ctx.lr = 0x8228FFF8;
	sub_82170938(ctx, base);
	// lwz r11,-24024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24024);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290004;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24024);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290044
	if (cr6.eq) goto loc_82290044;
	// bl 0x82170ba8
	ctx.lr = 0x82290024;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24024);
	// bne cr6,0x82290044
	if (!cr6.eq) goto loc_82290044;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290040;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24024);
loc_82290044:
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

__attribute__((alias("__imp__sub_8229005C"))) PPC_WEAK_FUNC(sub_8229005C);
PPC_FUNC_IMPL(__imp__sub_8229005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82290060"))) PPC_WEAK_FUNC(sub_82290060);
PPC_FUNC_IMPL(__imp__sub_82290060) {
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
	// lwz r3,-22388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290184
	if (!cr6.eq) goto loc_82290184;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290090;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82290104
	if (cr6.eq) goto loc_82290104;
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,15548
	ctx.r11.s64 = ctx.r11.s64 + 15548;
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
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82290100;
	sub_822ED768(ctx, base);
	// b 0x82290108
	goto loc_82290108;
loc_82290104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82290108:
	// stw r3,-22388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22388, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x82290110;
	sub_821A7638(ctx, base);
	// lwz r11,-22388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22388);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229012c
	if (cr6.eq) goto loc_8229012C;
	// bl 0x821a7638
	ctx.lr = 0x82290120;
	sub_821A7638(ctx, base);
	// lwz r11,-22388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22388);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82290134
	goto loc_82290134;
loc_8229012C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82290134:
	// bl 0x82170938
	ctx.lr = 0x82290138;
	sub_82170938(ctx, base);
	// lwz r11,-22388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22388);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290144;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22388);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290184
	if (cr6.eq) goto loc_82290184;
	// bl 0x82170ba8
	ctx.lr = 0x82290164;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22388);
	// bne cr6,0x82290184
	if (!cr6.eq) goto loc_82290184;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22388);
loc_82290184:
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

__attribute__((alias("__imp__sub_8229019C"))) PPC_WEAK_FUNC(sub_8229019C);
PPC_FUNC_IMPL(__imp__sub_8229019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822901A0"))) PPC_WEAK_FUNC(sub_822901A0);
PPC_FUNC_IMPL(__imp__sub_822901A0) {
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
	// lwz r3,-22392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22392);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822902c4
	if (!cr6.eq) goto loc_822902C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822901D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82290244
	if (cr6.eq) goto loc_82290244;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-22456
	ctx.r7.s64 = ctx.r10.s64 + -22456;
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
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
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
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82290240;
	sub_822ED768(ctx, base);
	// b 0x82290248
	goto loc_82290248;
loc_82290244:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82290248:
	// stw r3,-22392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22392, ctx.r3.u32);
	// bl 0x8228ade0
	ctx.lr = 0x82290250;
	sub_8228ADE0(ctx, base);
	// lwz r11,-22392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22392);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229026c
	if (cr6.eq) goto loc_8229026C;
	// bl 0x8228ade0
	ctx.lr = 0x82290260;
	sub_8228ADE0(ctx, base);
	// lwz r11,-22392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22392);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82290274
	goto loc_82290274;
loc_8229026C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82290274:
	// bl 0x82170938
	ctx.lr = 0x82290278;
	sub_82170938(ctx, base);
	// lwz r11,-22392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22392);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290284;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22392);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822902c4
	if (cr6.eq) goto loc_822902C4;
	// bl 0x82170ba8
	ctx.lr = 0x822902A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22392);
	// bne cr6,0x822902c4
	if (!cr6.eq) goto loc_822902C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822902C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22392);
loc_822902C4:
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

__attribute__((alias("__imp__sub_822902DC"))) PPC_WEAK_FUNC(sub_822902DC);
PPC_FUNC_IMPL(__imp__sub_822902DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822902E0"))) PPC_WEAK_FUNC(sub_822902E0);
PPC_FUNC_IMPL(__imp__sub_822902E0) {
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
	// lwz r3,-23204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290404
	if (!cr6.eq) goto loc_82290404;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290310;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82290384
	if (cr6.eq) goto loc_82290384;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-28448
	ctx.r7.s64 = ctx.r10.s64 + -28448;
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
	// addi r11,r11,11596
	ctx.r11.s64 = ctx.r11.s64 + 11596;
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82290380;
	sub_822ED768(ctx, base);
	// b 0x82290388
	goto loc_82290388;
loc_82290384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82290388:
	// stw r3,-23204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23204, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82290390;
	sub_82170938(ctx, base);
	// lwz r11,-23204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23204);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822903ac
	if (cr6.eq) goto loc_822903AC;
	// bl 0x82170938
	ctx.lr = 0x822903A0;
	sub_82170938(ctx, base);
	// lwz r11,-23204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23204);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822903b4
	goto loc_822903B4;
loc_822903AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822903B4:
	// bl 0x82290560
	ctx.lr = 0x822903B8;
	sub_82290560(ctx, base);
	// lwz r11,-23204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23204);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822903C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23204);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290404
	if (cr6.eq) goto loc_82290404;
	// bl 0x82170ba8
	ctx.lr = 0x822903E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23204);
	// bne cr6,0x82290404
	if (!cr6.eq) goto loc_82290404;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290400;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23204);
loc_82290404:
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

__attribute__((alias("__imp__sub_8229041C"))) PPC_WEAK_FUNC(sub_8229041C);
PPC_FUNC_IMPL(__imp__sub_8229041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82290420"))) PPC_WEAK_FUNC(sub_82290420);
PPC_FUNC_IMPL(__imp__sub_82290420) {
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
	// lwz r3,-22204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290544
	if (!cr6.eq) goto loc_82290544;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290450;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822904c4
	if (cr6.eq) goto loc_822904C4;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-15544
	ctx.r7.s64 = ctx.r10.s64 + -15544;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-19336
	ctx.r11.s64 = ctx.r11.s64 + -19336;
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
	ctx.lr = 0x822904C0;
	sub_822ED768(ctx, base);
	// b 0x822904c8
	goto loc_822904C8;
loc_822904C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822904C8:
	// stw r3,-22204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22204, ctx.r3.u32);
	// bl 0x8228dfe0
	ctx.lr = 0x822904D0;
	sub_8228DFE0(ctx, base);
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822904ec
	if (cr6.eq) goto loc_822904EC;
	// bl 0x8228dfe0
	ctx.lr = 0x822904E0;
	sub_8228DFE0(ctx, base);
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822904f4
	goto loc_822904F4;
loc_822904EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822904F4:
	// bl 0x82170938
	ctx.lr = 0x822904F8;
	sub_82170938(ctx, base);
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290504;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290544
	if (cr6.eq) goto loc_82290544;
	// bl 0x82170ba8
	ctx.lr = 0x82290524;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
	// bne cr6,0x82290544
	if (!cr6.eq) goto loc_82290544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
loc_82290544:
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

__attribute__((alias("__imp__sub_8229055C"))) PPC_WEAK_FUNC(sub_8229055C);
PPC_FUNC_IMPL(__imp__sub_8229055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82290560"))) PPC_WEAK_FUNC(sub_82290560);
PPC_FUNC_IMPL(__imp__sub_82290560) {
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
	// lwz r3,-22208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290684
	if (!cr6.eq) goto loc_82290684;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290590;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82290604
	if (cr6.eq) goto loc_82290604;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-16416
	ctx.r7.s64 = ctx.r10.s64 + -16416;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-19372
	ctx.r11.s64 = ctx.r11.s64 + -19372;
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
	ctx.lr = 0x82290600;
	sub_822ED768(ctx, base);
	// b 0x82290608
	goto loc_82290608;
loc_82290604:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82290608:
	// stw r3,-22208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22208, ctx.r3.u32);
	// bl 0x822901a0
	ctx.lr = 0x82290610;
	sub_822901A0(ctx, base);
	// lwz r11,-22208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229062c
	if (cr6.eq) goto loc_8229062C;
	// bl 0x822901a0
	ctx.lr = 0x82290620;
	sub_822901A0(ctx, base);
	// lwz r11,-22208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82290634
	goto loc_82290634;
loc_8229062C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82290634:
	// bl 0x82170938
	ctx.lr = 0x82290638;
	sub_82170938(ctx, base);
	// lwz r11,-22208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290644;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290684
	if (cr6.eq) goto loc_82290684;
	// bl 0x82170ba8
	ctx.lr = 0x82290664;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// bne cr6,0x82290684
	if (!cr6.eq) goto loc_82290684;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
loc_82290684:
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

__attribute__((alias("__imp__sub_8229069C"))) PPC_WEAK_FUNC(sub_8229069C);
PPC_FUNC_IMPL(__imp__sub_8229069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822906A0"))) PPC_WEAK_FUNC(sub_822906A0);
PPC_FUNC_IMPL(__imp__sub_822906A0) {
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
	// lwz r3,-23700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23700);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822907c4
	if (!cr6.eq) goto loc_822907C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822906D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82290744
	if (cr6.eq) goto loc_82290744;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,13080
	ctx.r7.s64 = ctx.r10.s64 + 13080;
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
	// addi r11,r11,26856
	ctx.r11.s64 = ctx.r11.s64 + 26856;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82290740;
	sub_822ED768(ctx, base);
	// b 0x82290748
	goto loc_82290748;
loc_82290744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82290748:
	// stw r3,-23700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23700, ctx.r3.u32);
	// bl 0x821a72f0
	ctx.lr = 0x82290750;
	sub_821A72F0(ctx, base);
	// lwz r11,-23700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23700);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229076c
	if (cr6.eq) goto loc_8229076C;
	// bl 0x821a72f0
	ctx.lr = 0x82290760;
	sub_821A72F0(ctx, base);
	// lwz r11,-23700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23700);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82290774
	goto loc_82290774;
loc_8229076C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82290774:
	// bl 0x82170938
	ctx.lr = 0x82290778;
	sub_82170938(ctx, base);
	// lwz r11,-23700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23700);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290784;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23700);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822907c4
	if (cr6.eq) goto loc_822907C4;
	// bl 0x82170ba8
	ctx.lr = 0x822907A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23700);
	// bne cr6,0x822907c4
	if (!cr6.eq) goto loc_822907C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822907C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23700);
loc_822907C4:
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

__attribute__((alias("__imp__sub_822907DC"))) PPC_WEAK_FUNC(sub_822907DC);
PPC_FUNC_IMPL(__imp__sub_822907DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822907E0"))) PPC_WEAK_FUNC(sub_822907E0);
PPC_FUNC_IMPL(__imp__sub_822907E0) {
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
	// lwz r3,-22212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290904
	if (!cr6.eq) goto loc_82290904;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290810;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82290884
	if (cr6.eq) goto loc_82290884;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-21920
	ctx.r7.s64 = ctx.r10.s64 + -21920;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-20064
	ctx.r11.s64 = ctx.r11.s64 + -20064;
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
	// li r5,476
	ctx.r5.s64 = 476;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82290880;
	sub_822ED768(ctx, base);
	// b 0x82290888
	goto loc_82290888;
loc_82290884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82290888:
	// stw r3,-22212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22212, ctx.r3.u32);
	// bl 0x82289c60
	ctx.lr = 0x82290890;
	sub_82289C60(ctx, base);
	// lwz r11,-22212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22212);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822908ac
	if (cr6.eq) goto loc_822908AC;
	// bl 0x82289c60
	ctx.lr = 0x822908A0;
	sub_82289C60(ctx, base);
	// lwz r11,-22212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22212);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822908b4
	goto loc_822908B4;
loc_822908AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822908B4:
	// bl 0x82170938
	ctx.lr = 0x822908B8;
	sub_82170938(ctx, base);
	// lwz r11,-22212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22212);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822908C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22212);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290904
	if (cr6.eq) goto loc_82290904;
	// bl 0x82170ba8
	ctx.lr = 0x822908E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22212);
	// bne cr6,0x82290904
	if (!cr6.eq) goto loc_82290904;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22212);
loc_82290904:
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

__attribute__((alias("__imp__sub_8229091C"))) PPC_WEAK_FUNC(sub_8229091C);
PPC_FUNC_IMPL(__imp__sub_8229091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82290920"))) PPC_WEAK_FUNC(sub_82290920);
PPC_FUNC_IMPL(__imp__sub_82290920) {
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
	// lwz r3,-22216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290a44
	if (!cr6.eq) goto loc_82290A44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290950;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822909c4
	if (cr6.eq) goto loc_822909C4;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-25752
	ctx.r7.s64 = ctx.r10.s64 + -25752;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,-31624
	ctx.r8.s64 = ctx.r8.s64 + -31624;
	// addi r9,r9,9224
	ctx.r9.s64 = ctx.r9.s64 + 9224;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-24536
	ctx.r11.s64 = ctx.r11.s64 + -24536;
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
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// li r5,244
	ctx.r5.s64 = 244;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822909C0;
	sub_822ED768(ctx, base);
	// b 0x822909c8
	goto loc_822909C8;
loc_822909C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822909C8:
	// stw r3,-22216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22216, ctx.r3.u32);
	// bl 0x8228a7a0
	ctx.lr = 0x822909D0;
	sub_8228A7A0(ctx, base);
	// lwz r11,-22216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22216);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822909ec
	if (cr6.eq) goto loc_822909EC;
	// bl 0x8228a7a0
	ctx.lr = 0x822909E0;
	sub_8228A7A0(ctx, base);
	// lwz r11,-22216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22216);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822909f4
	goto loc_822909F4;
loc_822909EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822909F4:
	// bl 0x82170938
	ctx.lr = 0x822909F8;
	sub_82170938(ctx, base);
	// lwz r11,-22216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22216);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290A04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22216);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290a44
	if (cr6.eq) goto loc_82290A44;
	// bl 0x82170ba8
	ctx.lr = 0x82290A24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22216);
	// bne cr6,0x82290a44
	if (!cr6.eq) goto loc_82290A44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290A40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22216);
loc_82290A44:
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

__attribute__((alias("__imp__sub_82290A5C"))) PPC_WEAK_FUNC(sub_82290A5C);
PPC_FUNC_IMPL(__imp__sub_82290A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82290A60"))) PPC_WEAK_FUNC(sub_82290A60);
PPC_FUNC_IMPL(__imp__sub_82290A60) {
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
	// lwz r3,-22328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290b84
	if (!cr6.eq) goto loc_82290B84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290A90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82290b04
	if (cr6.eq) goto loc_82290B04;
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,27884
	ctx.r11.s64 = ctx.r11.s64 + 27884;
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
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82290B00;
	sub_822ED768(ctx, base);
	// b 0x82290b08
	goto loc_82290B08;
loc_82290B04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82290B08:
	// stw r3,-22328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22328, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82290B10;
	sub_82170938(ctx, base);
	// lwz r11,-22328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22328);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82290b2c
	if (cr6.eq) goto loc_82290B2C;
	// bl 0x82170938
	ctx.lr = 0x82290B20;
	sub_82170938(ctx, base);
	// lwz r11,-22328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22328);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82290b34
	goto loc_82290B34;
loc_82290B2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82290B34:
	// bl 0x82170938
	ctx.lr = 0x82290B38;
	sub_82170938(ctx, base);
	// lwz r11,-22328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22328);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290B44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22328);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290b84
	if (cr6.eq) goto loc_82290B84;
	// bl 0x82170ba8
	ctx.lr = 0x82290B64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22328);
	// bne cr6,0x82290b84
	if (!cr6.eq) goto loc_82290B84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290B80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22328);
loc_82290B84:
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

__attribute__((alias("__imp__sub_82290B9C"))) PPC_WEAK_FUNC(sub_82290B9C);
PPC_FUNC_IMPL(__imp__sub_82290B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82290BA0"))) PPC_WEAK_FUNC(sub_82290BA0);
PPC_FUNC_IMPL(__imp__sub_82290BA0) {
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
	// lwz r3,-24288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290cc4
	if (!cr6.eq) goto loc_82290CC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290BD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82290c44
	if (cr6.eq) goto loc_82290C44;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,13688
	ctx.r7.s64 = ctx.r10.s64 + 13688;
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
	// addi r11,r11,28944
	ctx.r11.s64 = ctx.r11.s64 + 28944;
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
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82290C40;
	sub_822ED768(ctx, base);
	// b 0x82290c48
	goto loc_82290C48;
loc_82290C44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82290C48:
	// stw r3,-24288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24288, ctx.r3.u32);
	// bl 0x822988a0
	ctx.lr = 0x82290C50;
	sub_822988A0(ctx, base);
	// lwz r11,-24288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24288);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82290c6c
	if (cr6.eq) goto loc_82290C6C;
	// bl 0x822988a0
	ctx.lr = 0x82290C60;
	sub_822988A0(ctx, base);
	// lwz r11,-24288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24288);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82290c74
	goto loc_82290C74;
loc_82290C6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82290C74:
	// bl 0x82170938
	ctx.lr = 0x82290C78;
	sub_82170938(ctx, base);
	// lwz r11,-24288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24288);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290C84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24288);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290cc4
	if (cr6.eq) goto loc_82290CC4;
	// bl 0x82170ba8
	ctx.lr = 0x82290CA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24288);
	// bne cr6,0x82290cc4
	if (!cr6.eq) goto loc_82290CC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290CC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24288);
loc_82290CC4:
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

__attribute__((alias("__imp__sub_82290CDC"))) PPC_WEAK_FUNC(sub_82290CDC);
PPC_FUNC_IMPL(__imp__sub_82290CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82290CE0"))) PPC_WEAK_FUNC(sub_82290CE0);
PPC_FUNC_IMPL(__imp__sub_82290CE0) {
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
	// lwz r3,-22332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22332);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290e04
	if (!cr6.eq) goto loc_82290E04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290D10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82290d84
	if (cr6.eq) goto loc_82290D84;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-1664
	ctx.r7.s64 = ctx.r10.s64 + -1664;
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
	// addi r11,r11,27852
	ctx.r11.s64 = ctx.r11.s64 + 27852;
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
	// li r6,257
	ctx.r6.s64 = 257;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82290D80;
	sub_822ED768(ctx, base);
	// b 0x82290d88
	goto loc_82290D88;
loc_82290D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82290D88:
	// stw r3,-22332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22332, ctx.r3.u32);
	// bl 0x822988a0
	ctx.lr = 0x82290D90;
	sub_822988A0(ctx, base);
	// lwz r11,-22332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22332);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82290dac
	if (cr6.eq) goto loc_82290DAC;
	// bl 0x822988a0
	ctx.lr = 0x82290DA0;
	sub_822988A0(ctx, base);
	// lwz r11,-22332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22332);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82290db4
	goto loc_82290DB4;
loc_82290DAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82290DB4:
	// bl 0x82170938
	ctx.lr = 0x82290DB8;
	sub_82170938(ctx, base);
	// lwz r11,-22332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22332);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290DC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22332);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290e04
	if (cr6.eq) goto loc_82290E04;
	// bl 0x82170ba8
	ctx.lr = 0x82290DE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22332);
	// bne cr6,0x82290e04
	if (!cr6.eq) goto loc_82290E04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290E00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22332);
loc_82290E04:
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

__attribute__((alias("__imp__sub_82290E1C"))) PPC_WEAK_FUNC(sub_82290E1C);
PPC_FUNC_IMPL(__imp__sub_82290E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82290E20"))) PPC_WEAK_FUNC(sub_82290E20);
PPC_FUNC_IMPL(__imp__sub_82290E20) {
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
	// lwz r3,31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31884);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82290f44
	if (!cr6.eq) goto loc_82290F44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290E50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82290ec4
	if (cr6.eq) goto loc_82290EC4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,30832
	ctx.r7.s64 = ctx.r10.s64 + 30832;
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
	// addi r11,r11,-15508
	ctx.r11.s64 = ctx.r11.s64 + -15508;
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
	ctx.lr = 0x82290EC0;
	sub_822ED768(ctx, base);
	// b 0x82290ec8
	goto loc_82290EC8;
loc_82290EC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82290EC8:
	// stw r3,31884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31884, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x82290ED0;
	sub_821A7638(ctx, base);
	// lwz r11,31884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31884);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82290eec
	if (cr6.eq) goto loc_82290EEC;
	// bl 0x821a7638
	ctx.lr = 0x82290EE0;
	sub_821A7638(ctx, base);
	// lwz r11,31884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31884);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82290ef4
	goto loc_82290EF4;
loc_82290EEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82290EF4:
	// bl 0x82170938
	ctx.lr = 0x82290EF8;
	sub_82170938(ctx, base);
	// lwz r11,31884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31884);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82290F04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31884);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290f44
	if (cr6.eq) goto loc_82290F44;
	// bl 0x82170ba8
	ctx.lr = 0x82290F24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31884);
	// bne cr6,0x82290f44
	if (!cr6.eq) goto loc_82290F44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290F40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31884);
loc_82290F44:
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

__attribute__((alias("__imp__sub_82290F5C"))) PPC_WEAK_FUNC(sub_82290F5C);
PPC_FUNC_IMPL(__imp__sub_82290F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82290F60"))) PPC_WEAK_FUNC(sub_82290F60);
PPC_FUNC_IMPL(__imp__sub_82290F60) {
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
	// lwz r3,32172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291084
	if (!cr6.eq) goto loc_82291084;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82290F90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291004
	if (cr6.eq) goto loc_82291004;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20408
	ctx.r7.s64 = ctx.r10.s64 + 20408;
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
	// addi r11,r11,-13412
	ctx.r11.s64 = ctx.r11.s64 + -13412;
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
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82291000;
	sub_822ED768(ctx, base);
	// b 0x82291008
	goto loc_82291008;
loc_82291004:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291008:
	// stw r3,32172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32172, ctx.r3.u32);
	// bl 0x821a7c38
	ctx.lr = 0x82291010;
	sub_821A7C38(ctx, base);
	// lwz r11,32172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32172);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229102c
	if (cr6.eq) goto loc_8229102C;
	// bl 0x821a7c38
	ctx.lr = 0x82291020;
	sub_821A7C38(ctx, base);
	// lwz r11,32172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32172);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82291034
	goto loc_82291034;
loc_8229102C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82291034:
	// bl 0x82170938
	ctx.lr = 0x82291038;
	sub_82170938(ctx, base);
	// lwz r11,32172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32172);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291044;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32172);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291084
	if (cr6.eq) goto loc_82291084;
	// bl 0x82170ba8
	ctx.lr = 0x82291064;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32172);
	// bne cr6,0x82291084
	if (!cr6.eq) goto loc_82291084;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32172);
loc_82291084:
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

__attribute__((alias("__imp__sub_8229109C"))) PPC_WEAK_FUNC(sub_8229109C);
PPC_FUNC_IMPL(__imp__sub_8229109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822910A0"))) PPC_WEAK_FUNC(sub_822910A0);
PPC_FUNC_IMPL(__imp__sub_822910A0) {
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
	// lwz r3,32168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822911c4
	if (!cr6.eq) goto loc_822911C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822910D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291144
	if (cr6.eq) goto loc_82291144;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20592
	ctx.r7.s64 = ctx.r10.s64 + 20592;
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
	// addi r11,r11,-13436
	ctx.r11.s64 = ctx.r11.s64 + -13436;
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
	// li r5,664
	ctx.r5.s64 = 664;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82291140;
	sub_822ED768(ctx, base);
	// b 0x82291148
	goto loc_82291148;
loc_82291144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291148:
	// stw r3,32168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32168, ctx.r3.u32);
	// bl 0x821a7c38
	ctx.lr = 0x82291150;
	sub_821A7C38(ctx, base);
	// lwz r11,32168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32168);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229116c
	if (cr6.eq) goto loc_8229116C;
	// bl 0x821a7c38
	ctx.lr = 0x82291160;
	sub_821A7C38(ctx, base);
	// lwz r11,32168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32168);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82291174
	goto loc_82291174;
loc_8229116C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82291174:
	// bl 0x82170938
	ctx.lr = 0x82291178;
	sub_82170938(ctx, base);
	// lwz r11,32168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32168);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291184;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32168);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822911c4
	if (cr6.eq) goto loc_822911C4;
	// bl 0x82170ba8
	ctx.lr = 0x822911A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32168);
	// bne cr6,0x822911c4
	if (!cr6.eq) goto loc_822911C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822911C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32168);
loc_822911C4:
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

__attribute__((alias("__imp__sub_822911DC"))) PPC_WEAK_FUNC(sub_822911DC);
PPC_FUNC_IMPL(__imp__sub_822911DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822911E0"))) PPC_WEAK_FUNC(sub_822911E0);
PPC_FUNC_IMPL(__imp__sub_822911E0) {
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
	// lwz r3,32068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32068);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291304
	if (!cr6.eq) goto loc_82291304;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291210;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291284
	if (cr6.eq) goto loc_82291284;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,23592
	ctx.r7.s64 = ctx.r10.s64 + 23592;
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
	// addi r11,r11,-14116
	ctx.r11.s64 = ctx.r11.s64 + -14116;
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
	ctx.lr = 0x82291280;
	sub_822ED768(ctx, base);
	// b 0x82291288
	goto loc_82291288;
loc_82291284:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291288:
	// stw r3,32068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32068, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82291290;
	sub_82170938(ctx, base);
	// lwz r11,32068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32068);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822912ac
	if (cr6.eq) goto loc_822912AC;
	// bl 0x82170938
	ctx.lr = 0x822912A0;
	sub_82170938(ctx, base);
	// lwz r11,32068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32068);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822912b4
	goto loc_822912B4;
loc_822912AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822912B4:
	// bl 0x82170938
	ctx.lr = 0x822912B8;
	sub_82170938(ctx, base);
	// lwz r11,32068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32068);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822912C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32068);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291304
	if (cr6.eq) goto loc_82291304;
	// bl 0x82170ba8
	ctx.lr = 0x822912E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32068);
	// bne cr6,0x82291304
	if (!cr6.eq) goto loc_82291304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32068);
loc_82291304:
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

__attribute__((alias("__imp__sub_8229131C"))) PPC_WEAK_FUNC(sub_8229131C);
PPC_FUNC_IMPL(__imp__sub_8229131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82291320"))) PPC_WEAK_FUNC(sub_82291320);
PPC_FUNC_IMPL(__imp__sub_82291320) {
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
	// lwz r3,32208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291444
	if (!cr6.eq) goto loc_82291444;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291350;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822913c4
	if (cr6.eq) goto loc_822913C4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,18560
	ctx.r7.s64 = ctx.r10.s64 + 18560;
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
	// addi r11,r11,-13124
	ctx.r11.s64 = ctx.r11.s64 + -13124;
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
	// li r5,496
	ctx.r5.s64 = 496;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822913C0;
	sub_822ED768(ctx, base);
	// b 0x822913c8
	goto loc_822913C8;
loc_822913C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822913C8:
	// stw r3,32208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32208, ctx.r3.u32);
	// bl 0x82289c60
	ctx.lr = 0x822913D0;
	sub_82289C60(ctx, base);
	// lwz r11,32208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32208);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822913ec
	if (cr6.eq) goto loc_822913EC;
	// bl 0x82289c60
	ctx.lr = 0x822913E0;
	sub_82289C60(ctx, base);
	// lwz r11,32208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32208);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822913f4
	goto loc_822913F4;
loc_822913EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822913F4:
	// bl 0x82170938
	ctx.lr = 0x822913F8;
	sub_82170938(ctx, base);
	// lwz r11,32208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32208);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291404;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32208);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291444
	if (cr6.eq) goto loc_82291444;
	// bl 0x82170ba8
	ctx.lr = 0x82291424;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32208);
	// bne cr6,0x82291444
	if (!cr6.eq) goto loc_82291444;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291440;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32208);
loc_82291444:
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

__attribute__((alias("__imp__sub_8229145C"))) PPC_WEAK_FUNC(sub_8229145C);
PPC_FUNC_IMPL(__imp__sub_8229145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82291460"))) PPC_WEAK_FUNC(sub_82291460);
PPC_FUNC_IMPL(__imp__sub_82291460) {
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
	// lwz r3,-24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291584
	if (!cr6.eq) goto loc_82291584;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291490;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291504
	if (cr6.eq) goto loc_82291504;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-25784
	ctx.r7.s64 = ctx.r10.s64 + -25784;
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
	// addi r11,r11,15468
	ctx.r11.s64 = ctx.r11.s64 + 15468;
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
	ctx.lr = 0x82291500;
	sub_822ED768(ctx, base);
	// b 0x82291508
	goto loc_82291508;
loc_82291504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291508:
	// stw r3,-24408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24408, ctx.r3.u32);
	// bl 0x822915a0
	ctx.lr = 0x82291510;
	sub_822915A0(ctx, base);
	// lwz r11,-24408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24408);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229152c
	if (cr6.eq) goto loc_8229152C;
	// bl 0x822915a0
	ctx.lr = 0x82291520;
	sub_822915A0(ctx, base);
	// lwz r11,-24408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24408);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82291534
	goto loc_82291534;
loc_8229152C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82291534:
	// bl 0x82170938
	ctx.lr = 0x82291538;
	sub_82170938(ctx, base);
	// lwz r11,-24408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24408);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291544;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24408);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291584
	if (cr6.eq) goto loc_82291584;
	// bl 0x82170ba8
	ctx.lr = 0x82291564;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24408);
	// bne cr6,0x82291584
	if (!cr6.eq) goto loc_82291584;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24408);
loc_82291584:
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

__attribute__((alias("__imp__sub_8229159C"))) PPC_WEAK_FUNC(sub_8229159C);
PPC_FUNC_IMPL(__imp__sub_8229159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822915A0"))) PPC_WEAK_FUNC(sub_822915A0);
PPC_FUNC_IMPL(__imp__sub_822915A0) {
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
	// lwz r3,-24416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822916c4
	if (!cr6.eq) goto loc_822916C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822915D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291644
	if (cr6.eq) goto loc_82291644;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-25384
	ctx.r7.s64 = ctx.r10.s64 + -25384;
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
	// addi r11,r11,15392
	ctx.r11.s64 = ctx.r11.s64 + 15392;
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
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82291640;
	sub_822ED768(ctx, base);
	// b 0x82291648
	goto loc_82291648;
loc_82291644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291648:
	// stw r3,-24416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24416, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82291650;
	sub_82170938(ctx, base);
	// lwz r11,-24416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24416);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229166c
	if (cr6.eq) goto loc_8229166C;
	// bl 0x82170938
	ctx.lr = 0x82291660;
	sub_82170938(ctx, base);
	// lwz r11,-24416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24416);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82291674
	goto loc_82291674;
loc_8229166C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82291674:
	// bl 0x82170938
	ctx.lr = 0x82291678;
	sub_82170938(ctx, base);
	// lwz r11,-24416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24416);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291684;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24416);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822916c4
	if (cr6.eq) goto loc_822916C4;
	// bl 0x82170ba8
	ctx.lr = 0x822916A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24416);
	// bne cr6,0x822916c4
	if (!cr6.eq) goto loc_822916C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822916C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24416);
loc_822916C4:
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

__attribute__((alias("__imp__sub_822916DC"))) PPC_WEAK_FUNC(sub_822916DC);
PPC_FUNC_IMPL(__imp__sub_822916DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822916E0"))) PPC_WEAK_FUNC(sub_822916E0);
PPC_FUNC_IMPL(__imp__sub_822916E0) {
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
	// lwz r3,-23696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23696);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291808
	if (!cr6.eq) goto loc_82291808;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291710;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291788
	if (cr6.eq) goto loc_82291788;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12944
	ctx.r7.s64 = ctx.r10.s64 + 12944;
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
	// addi r9,r9,-4968
	ctx.r9.s64 = ctx.r9.s64 + -4968;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r11,r11,26896
	ctx.r11.s64 = ctx.r11.s64 + 26896;
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
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82291784;
	sub_822ED768(ctx, base);
	// b 0x8229178c
	goto loc_8229178C;
loc_82291788:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229178C:
	// stw r3,-23696(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23696, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82291794;
	sub_82170938(ctx, base);
	// lwz r11,-23696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23696);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822917b0
	if (cr6.eq) goto loc_822917B0;
	// bl 0x82170938
	ctx.lr = 0x822917A4;
	sub_82170938(ctx, base);
	// lwz r11,-23696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23696);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822917b8
	goto loc_822917B8;
loc_822917B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822917B8:
	// bl 0x82170938
	ctx.lr = 0x822917BC;
	sub_82170938(ctx, base);
	// lwz r11,-23696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23696);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822917C8;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23696);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291808
	if (cr6.eq) goto loc_82291808;
	// bl 0x82170ba8
	ctx.lr = 0x822917E8;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23696);
	// bne cr6,0x82291808
	if (!cr6.eq) goto loc_82291808;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23696);
loc_82291808:
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

__attribute__((alias("__imp__sub_82291820"))) PPC_WEAK_FUNC(sub_82291820);
PPC_FUNC_IMPL(__imp__sub_82291820) {
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
	// lwz r3,-23692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291944
	if (!cr6.eq) goto loc_82291944;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291850;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822918c4
	if (cr6.eq) goto loc_822918C4;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12640
	ctx.r7.s64 = ctx.r10.s64 + 12640;
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
	// addi r9,r9,-4472
	ctx.r9.s64 = ctx.r9.s64 + -4472;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,26920
	ctx.r11.s64 = ctx.r11.s64 + 26920;
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
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// li r5,408
	ctx.r5.s64 = 408;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822918C0;
	sub_822ED768(ctx, base);
	// b 0x822918c8
	goto loc_822918C8;
loc_822918C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822918C8:
	// stw r3,-23692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23692, ctx.r3.u32);
	// bl 0x822916e0
	ctx.lr = 0x822918D0;
	sub_822916E0(ctx, base);
	// lwz r11,-23692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23692);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822918ec
	if (cr6.eq) goto loc_822918EC;
	// bl 0x822916e0
	ctx.lr = 0x822918E0;
	sub_822916E0(ctx, base);
	// lwz r11,-23692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23692);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822918f4
	goto loc_822918F4;
loc_822918EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822918F4:
	// bl 0x82170938
	ctx.lr = 0x822918F8;
	sub_82170938(ctx, base);
	// lwz r11,-23692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23692);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291904;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23692);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291944
	if (cr6.eq) goto loc_82291944;
	// bl 0x82170ba8
	ctx.lr = 0x82291924;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23692);
	// bne cr6,0x82291944
	if (!cr6.eq) goto loc_82291944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291940;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23692);
loc_82291944:
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

__attribute__((alias("__imp__sub_8229195C"))) PPC_WEAK_FUNC(sub_8229195C);
PPC_FUNC_IMPL(__imp__sub_8229195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82291960"))) PPC_WEAK_FUNC(sub_82291960);
PPC_FUNC_IMPL(__imp__sub_82291960) {
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
	// lwz r3,32128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291a84
	if (!cr6.eq) goto loc_82291A84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291990;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291a04
	if (cr6.eq) goto loc_82291A04;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22096
	ctx.r7.s64 = ctx.r10.s64 + 22096;
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
	// addi r11,r11,-13712
	ctx.r11.s64 = ctx.r11.s64 + -13712;
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
	// li r5,596
	ctx.r5.s64 = 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82291A00;
	sub_822ED768(ctx, base);
	// b 0x82291a08
	goto loc_82291A08;
loc_82291A04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291A08:
	// stw r3,32128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32128, ctx.r3.u32);
	// bl 0x821bf4c0
	ctx.lr = 0x82291A10;
	sub_821BF4C0(ctx, base);
	// lwz r11,32128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32128);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82291a2c
	if (cr6.eq) goto loc_82291A2C;
	// bl 0x821bf4c0
	ctx.lr = 0x82291A20;
	sub_821BF4C0(ctx, base);
	// lwz r11,32128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32128);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82291a34
	goto loc_82291A34;
loc_82291A2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82291A34:
	// bl 0x82170938
	ctx.lr = 0x82291A38;
	sub_82170938(ctx, base);
	// lwz r11,32128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32128);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291A44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32128);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291a84
	if (cr6.eq) goto loc_82291A84;
	// bl 0x82170ba8
	ctx.lr = 0x82291A64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32128);
	// bne cr6,0x82291a84
	if (!cr6.eq) goto loc_82291A84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291A80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32128);
loc_82291A84:
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

__attribute__((alias("__imp__sub_82291A9C"))) PPC_WEAK_FUNC(sub_82291A9C);
PPC_FUNC_IMPL(__imp__sub_82291A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82291AA0"))) PPC_WEAK_FUNC(sub_82291AA0);
PPC_FUNC_IMPL(__imp__sub_82291AA0) {
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
	// lwz r3,31964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31964);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291bc4
	if (!cr6.eq) goto loc_82291BC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291AD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291b44
	if (cr6.eq) goto loc_82291B44;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27264
	ctx.r7.s64 = ctx.r10.s64 + 27264;
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
	// addi r11,r11,-14924
	ctx.r11.s64 = ctx.r11.s64 + -14924;
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
	ctx.lr = 0x82291B40;
	sub_822ED768(ctx, base);
	// b 0x82291b48
	goto loc_82291B48;
loc_82291B44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291B48:
	// stw r3,31964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31964, ctx.r3.u32);
	// bl 0x821c0058
	ctx.lr = 0x82291B50;
	sub_821C0058(ctx, base);
	// lwz r11,31964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31964);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82291b6c
	if (cr6.eq) goto loc_82291B6C;
	// bl 0x821c0058
	ctx.lr = 0x82291B60;
	sub_821C0058(ctx, base);
	// lwz r11,31964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31964);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82291b74
	goto loc_82291B74;
loc_82291B6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82291B74:
	// bl 0x82170938
	ctx.lr = 0x82291B78;
	sub_82170938(ctx, base);
	// lwz r11,31964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31964);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291B84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31964);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291bc4
	if (cr6.eq) goto loc_82291BC4;
	// bl 0x82170ba8
	ctx.lr = 0x82291BA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31964);
	// bne cr6,0x82291bc4
	if (!cr6.eq) goto loc_82291BC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291BC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31964);
loc_82291BC4:
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

__attribute__((alias("__imp__sub_82291BDC"))) PPC_WEAK_FUNC(sub_82291BDC);
PPC_FUNC_IMPL(__imp__sub_82291BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82291BE0"))) PPC_WEAK_FUNC(sub_82291BE0);
PPC_FUNC_IMPL(__imp__sub_82291BE0) {
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
	// lwz r3,32096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32096);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291d04
	if (!cr6.eq) goto loc_82291D04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291C10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291c84
	if (cr6.eq) goto loc_82291C84;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22880
	ctx.r7.s64 = ctx.r10.s64 + 22880;
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
	// addi r11,r11,-13928
	ctx.r11.s64 = ctx.r11.s64 + -13928;
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
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82291C80;
	sub_822ED768(ctx, base);
	// b 0x82291c88
	goto loc_82291C88;
loc_82291C84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291C88:
	// stw r3,32096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32096, ctx.r3.u32);
	// bl 0x821a7c38
	ctx.lr = 0x82291C90;
	sub_821A7C38(ctx, base);
	// lwz r11,32096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32096);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82291cac
	if (cr6.eq) goto loc_82291CAC;
	// bl 0x821a7c38
	ctx.lr = 0x82291CA0;
	sub_821A7C38(ctx, base);
	// lwz r11,32096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32096);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82291cb4
	goto loc_82291CB4;
loc_82291CAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82291CB4:
	// bl 0x82170938
	ctx.lr = 0x82291CB8;
	sub_82170938(ctx, base);
	// lwz r11,32096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32096);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291CC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32096);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291d04
	if (cr6.eq) goto loc_82291D04;
	// bl 0x82170ba8
	ctx.lr = 0x82291CE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32096);
	// bne cr6,0x82291d04
	if (!cr6.eq) goto loc_82291D04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291D00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32096);
loc_82291D04:
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

__attribute__((alias("__imp__sub_82291D1C"))) PPC_WEAK_FUNC(sub_82291D1C);
PPC_FUNC_IMPL(__imp__sub_82291D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82291D20"))) PPC_WEAK_FUNC(sub_82291D20);
PPC_FUNC_IMPL(__imp__sub_82291D20) {
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
	// lwz r3,-24264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291e44
	if (!cr6.eq) goto loc_82291E44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291D50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291dc4
	if (cr6.eq) goto loc_82291DC4;
	// lis r10,-32196
	ctx.r10.s64 = -2109997056;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-9904
	ctx.r7.s64 = ctx.r10.s64 + -9904;
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
	// addi r11,r11,31016
	ctx.r11.s64 = ctx.r11.s64 + 31016;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82291DC0;
	sub_822ED768(ctx, base);
	// b 0x82291dc8
	goto loc_82291DC8;
loc_82291DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291DC8:
	// stw r3,-24264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24264, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82291DD0;
	sub_82170938(ctx, base);
	// lwz r11,-24264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82291dec
	if (cr6.eq) goto loc_82291DEC;
	// bl 0x82170938
	ctx.lr = 0x82291DE0;
	sub_82170938(ctx, base);
	// lwz r11,-24264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82291df4
	goto loc_82291DF4;
loc_82291DEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82291DF4:
	// bl 0x82170938
	ctx.lr = 0x82291DF8;
	sub_82170938(ctx, base);
	// lwz r11,-24264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291E04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291e44
	if (cr6.eq) goto loc_82291E44;
	// bl 0x82170ba8
	ctx.lr = 0x82291E24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
	// bne cr6,0x82291e44
	if (!cr6.eq) goto loc_82291E44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291E40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24264);
loc_82291E44:
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

__attribute__((alias("__imp__sub_82291E5C"))) PPC_WEAK_FUNC(sub_82291E5C);
PPC_FUNC_IMPL(__imp__sub_82291E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82291E60"))) PPC_WEAK_FUNC(sub_82291E60);
PPC_FUNC_IMPL(__imp__sub_82291E60) {
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
	// lwz r3,32104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82291f84
	if (!cr6.eq) goto loc_82291F84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291E90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82291f04
	if (cr6.eq) goto loc_82291F04;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,16552
	ctx.r7.s64 = ctx.r10.s64 + 16552;
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
	// addi r11,r11,-13888
	ctx.r11.s64 = ctx.r11.s64 + -13888;
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
	// li r5,140
	ctx.r5.s64 = 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82291F00;
	sub_822ED768(ctx, base);
	// b 0x82291f08
	goto loc_82291F08;
loc_82291F04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82291F08:
	// stw r3,32104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32104, ctx.r3.u32);
	// bl 0x821c2228
	ctx.lr = 0x82291F10;
	sub_821C2228(ctx, base);
	// lwz r11,32104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32104);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82291f2c
	if (cr6.eq) goto loc_82291F2C;
	// bl 0x821c2228
	ctx.lr = 0x82291F20;
	sub_821C2228(ctx, base);
	// lwz r11,32104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32104);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82291f34
	goto loc_82291F34;
loc_82291F2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82291F34:
	// bl 0x82170938
	ctx.lr = 0x82291F38;
	sub_82170938(ctx, base);
	// lwz r11,32104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32104);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82291F44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32104);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291f84
	if (cr6.eq) goto loc_82291F84;
	// bl 0x82170ba8
	ctx.lr = 0x82291F64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32104);
	// bne cr6,0x82291f84
	if (!cr6.eq) goto loc_82291F84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82291F80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32104);
loc_82291F84:
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

__attribute__((alias("__imp__sub_82291F9C"))) PPC_WEAK_FUNC(sub_82291F9C);
PPC_FUNC_IMPL(__imp__sub_82291F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82291FA0"))) PPC_WEAK_FUNC(sub_82291FA0);
PPC_FUNC_IMPL(__imp__sub_82291FA0) {
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
	// lwz r3,32028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32028);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822920c4
	if (!cr6.eq) goto loc_822920C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82291FD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292044
	if (cr6.eq) goto loc_82292044;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24808
	ctx.r7.s64 = ctx.r10.s64 + 24808;
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
	// addi r11,r11,-14408
	ctx.r11.s64 = ctx.r11.s64 + -14408;
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
	// li r5,444
	ctx.r5.s64 = 444;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82292040;
	sub_822ED768(ctx, base);
	// b 0x82292048
	goto loc_82292048;
loc_82292044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292048:
	// stw r3,32028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32028, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x82292050;
	sub_821A7638(ctx, base);
	// lwz r11,32028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32028);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229206c
	if (cr6.eq) goto loc_8229206C;
	// bl 0x821a7638
	ctx.lr = 0x82292060;
	sub_821A7638(ctx, base);
	// lwz r11,32028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32028);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82292074
	goto loc_82292074;
loc_8229206C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82292074:
	// bl 0x82170938
	ctx.lr = 0x82292078;
	sub_82170938(ctx, base);
	// lwz r11,32028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32028);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292084;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32028);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822920c4
	if (cr6.eq) goto loc_822920C4;
	// bl 0x82170ba8
	ctx.lr = 0x822920A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32028);
	// bne cr6,0x822920c4
	if (!cr6.eq) goto loc_822920C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822920C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32028);
loc_822920C4:
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

__attribute__((alias("__imp__sub_822920DC"))) PPC_WEAK_FUNC(sub_822920DC);
PPC_FUNC_IMPL(__imp__sub_822920DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822920E0"))) PPC_WEAK_FUNC(sub_822920E0);
PPC_FUNC_IMPL(__imp__sub_822920E0) {
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
	// lwz r3,32024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32024);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292204
	if (!cr6.eq) goto loc_82292204;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82292110;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292184
	if (cr6.eq) goto loc_82292184;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24984
	ctx.r7.s64 = ctx.r10.s64 + 24984;
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
	// addi r11,r11,-14432
	ctx.r11.s64 = ctx.r11.s64 + -14432;
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
	// li r5,488
	ctx.r5.s64 = 488;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82292180;
	sub_822ED768(ctx, base);
	// b 0x82292188
	goto loc_82292188;
loc_82292184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292188:
	// stw r3,32024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32024, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x82292190;
	sub_821A7638(ctx, base);
	// lwz r11,32024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32024);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822921ac
	if (cr6.eq) goto loc_822921AC;
	// bl 0x821a7638
	ctx.lr = 0x822921A0;
	sub_821A7638(ctx, base);
	// lwz r11,32024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32024);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822921b4
	goto loc_822921B4;
loc_822921AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822921B4:
	// bl 0x82170938
	ctx.lr = 0x822921B8;
	sub_82170938(ctx, base);
	// lwz r11,32024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32024);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822921C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32024);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292204
	if (cr6.eq) goto loc_82292204;
	// bl 0x82170ba8
	ctx.lr = 0x822921E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32024);
	// bne cr6,0x82292204
	if (!cr6.eq) goto loc_82292204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292200;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32024);
loc_82292204:
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

__attribute__((alias("__imp__sub_8229221C"))) PPC_WEAK_FUNC(sub_8229221C);
PPC_FUNC_IMPL(__imp__sub_8229221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82292220"))) PPC_WEAK_FUNC(sub_82292220);
PPC_FUNC_IMPL(__imp__sub_82292220) {
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
	// lwz r3,-23996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23996);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292344
	if (!cr6.eq) goto loc_82292344;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82292250;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822922c4
	if (cr6.eq) goto loc_822922C4;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-288
	ctx.r7.s64 = ctx.r10.s64 + -288;
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
	// addi r11,r11,-13388
	ctx.r11.s64 = ctx.r11.s64 + -13388;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822922C0;
	sub_822ED768(ctx, base);
	// b 0x822922c8
	goto loc_822922C8;
loc_822922C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822922C8:
	// stw r3,-23996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23996, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x822922D0;
	sub_82170938(ctx, base);
	// lwz r11,-23996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23996);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822922ec
	if (cr6.eq) goto loc_822922EC;
	// bl 0x82170938
	ctx.lr = 0x822922E0;
	sub_82170938(ctx, base);
	// lwz r11,-23996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23996);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822922f4
	goto loc_822922F4;
loc_822922EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822922F4:
	// bl 0x82170938
	ctx.lr = 0x822922F8;
	sub_82170938(ctx, base);
	// lwz r11,-23996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23996);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292304;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23996);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292344
	if (cr6.eq) goto loc_82292344;
	// bl 0x82170ba8
	ctx.lr = 0x82292324;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23996);
	// bne cr6,0x82292344
	if (!cr6.eq) goto loc_82292344;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292340;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23996);
loc_82292344:
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

__attribute__((alias("__imp__sub_8229235C"))) PPC_WEAK_FUNC(sub_8229235C);
PPC_FUNC_IMPL(__imp__sub_8229235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82292360"))) PPC_WEAK_FUNC(sub_82292360);
PPC_FUNC_IMPL(__imp__sub_82292360) {
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
	// lwz r3,-22220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292484
	if (!cr6.eq) goto loc_82292484;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82292390;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292404
	if (cr6.eq) goto loc_82292404;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-30256
	ctx.r7.s64 = ctx.r10.s64 + -30256;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-24776
	ctx.r11.s64 = ctx.r11.s64 + -24776;
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
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82292400;
	sub_822ED768(ctx, base);
	// b 0x82292408
	goto loc_82292408;
loc_82292404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292408:
	// stw r3,-22220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22220, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82292410;
	sub_82170938(ctx, base);
	// lwz r11,-22220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22220);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229242c
	if (cr6.eq) goto loc_8229242C;
	// bl 0x82170938
	ctx.lr = 0x82292420;
	sub_82170938(ctx, base);
	// lwz r11,-22220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22220);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82292434
	goto loc_82292434;
loc_8229242C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82292434:
	// bl 0x82170938
	ctx.lr = 0x82292438;
	sub_82170938(ctx, base);
	// lwz r11,-22220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22220);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292444;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22220);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292484
	if (cr6.eq) goto loc_82292484;
	// bl 0x82170ba8
	ctx.lr = 0x82292464;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22220);
	// bne cr6,0x82292484
	if (!cr6.eq) goto loc_82292484;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22220);
loc_82292484:
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

__attribute__((alias("__imp__sub_8229249C"))) PPC_WEAK_FUNC(sub_8229249C);
PPC_FUNC_IMPL(__imp__sub_8229249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822924A0"))) PPC_WEAK_FUNC(sub_822924A0);
PPC_FUNC_IMPL(__imp__sub_822924A0) {
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
	// lwz r3,32060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32060);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822925c4
	if (!cr6.eq) goto loc_822925C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822924D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292544
	if (cr6.eq) goto loc_82292544;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,24224
	ctx.r7.s64 = ctx.r10.s64 + 24224;
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
	// addi r11,r11,-14188
	ctx.r11.s64 = ctx.r11.s64 + -14188;
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
	// li r5,416
	ctx.r5.s64 = 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82292540;
	sub_822ED768(ctx, base);
	// b 0x82292548
	goto loc_82292548;
loc_82292544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292548:
	// stw r3,32060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32060, ctx.r3.u32);
	// bl 0x821a7a90
	ctx.lr = 0x82292550;
	sub_821A7A90(ctx, base);
	// lwz r11,32060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32060);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229256c
	if (cr6.eq) goto loc_8229256C;
	// bl 0x821a7a90
	ctx.lr = 0x82292560;
	sub_821A7A90(ctx, base);
	// lwz r11,32060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32060);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82292574
	goto loc_82292574;
loc_8229256C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82292574:
	// bl 0x82170938
	ctx.lr = 0x82292578;
	sub_82170938(ctx, base);
	// lwz r11,32060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32060);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292584;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32060);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822925c4
	if (cr6.eq) goto loc_822925C4;
	// bl 0x82170ba8
	ctx.lr = 0x822925A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32060);
	// bne cr6,0x822925c4
	if (!cr6.eq) goto loc_822925C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822925C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32060);
loc_822925C4:
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

__attribute__((alias("__imp__sub_822925DC"))) PPC_WEAK_FUNC(sub_822925DC);
PPC_FUNC_IMPL(__imp__sub_822925DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822925E0"))) PPC_WEAK_FUNC(sub_822925E0);
PPC_FUNC_IMPL(__imp__sub_822925E0) {
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
	// lwz r3,-22396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22396);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292704
	if (!cr6.eq) goto loc_82292704;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82292610;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292684
	if (cr6.eq) goto loc_82292684;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,6792
	ctx.r7.s64 = ctx.r10.s64 + 6792;
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
	// addi r11,r11,15216
	ctx.r11.s64 = ctx.r11.s64 + 15216;
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82292680;
	sub_822ED768(ctx, base);
	// b 0x82292688
	goto loc_82292688;
loc_82292684:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292688:
	// stw r3,-22396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22396, ctx.r3.u32);
	// bl 0x822988a0
	ctx.lr = 0x82292690;
	sub_822988A0(ctx, base);
	// lwz r11,-22396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22396);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822926ac
	if (cr6.eq) goto loc_822926AC;
	// bl 0x822988a0
	ctx.lr = 0x822926A0;
	sub_822988A0(ctx, base);
	// lwz r11,-22396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22396);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822926b4
	goto loc_822926B4;
loc_822926AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822926B4:
	// bl 0x82170938
	ctx.lr = 0x822926B8;
	sub_82170938(ctx, base);
	// lwz r11,-22396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22396);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822926C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22396);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292704
	if (cr6.eq) goto loc_82292704;
	// bl 0x82170ba8
	ctx.lr = 0x822926E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22396);
	// bne cr6,0x82292704
	if (!cr6.eq) goto loc_82292704;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22396);
loc_82292704:
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

__attribute__((alias("__imp__sub_8229271C"))) PPC_WEAK_FUNC(sub_8229271C);
PPC_FUNC_IMPL(__imp__sub_8229271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82292720"))) PPC_WEAK_FUNC(sub_82292720);
PPC_FUNC_IMPL(__imp__sub_82292720) {
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
	// lwz r3,32120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292844
	if (!cr6.eq) goto loc_82292844;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82292750;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822927c4
	if (cr6.eq) goto loc_822927C4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22472
	ctx.r7.s64 = ctx.r10.s64 + 22472;
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
	// addi r11,r11,-13788
	ctx.r11.s64 = ctx.r11.s64 + -13788;
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
	// li r5,536
	ctx.r5.s64 = 536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822927C0;
	sub_822ED768(ctx, base);
	// b 0x822927c8
	goto loc_822927C8;
loc_822927C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822927C8:
	// stw r3,32120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32120, ctx.r3.u32);
	// bl 0x821bf4c0
	ctx.lr = 0x822927D0;
	sub_821BF4C0(ctx, base);
	// lwz r11,32120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32120);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822927ec
	if (cr6.eq) goto loc_822927EC;
	// bl 0x821bf4c0
	ctx.lr = 0x822927E0;
	sub_821BF4C0(ctx, base);
	// lwz r11,32120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32120);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822927f4
	goto loc_822927F4;
loc_822927EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822927F4:
	// bl 0x82170938
	ctx.lr = 0x822927F8;
	sub_82170938(ctx, base);
	// lwz r11,32120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32120);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292804;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32120);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292844
	if (cr6.eq) goto loc_82292844;
	// bl 0x82170ba8
	ctx.lr = 0x82292824;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32120);
	// bne cr6,0x82292844
	if (!cr6.eq) goto loc_82292844;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32120);
loc_82292844:
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

__attribute__((alias("__imp__sub_8229285C"))) PPC_WEAK_FUNC(sub_8229285C);
PPC_FUNC_IMPL(__imp__sub_8229285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82292860"))) PPC_WEAK_FUNC(sub_82292860);
PPC_FUNC_IMPL(__imp__sub_82292860) {
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
	// lwz r3,-22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292984
	if (!cr6.eq) goto loc_82292984;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82292890;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292904
	if (cr6.eq) goto loc_82292904;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,32168
	ctx.r7.s64 = ctx.r10.s64 + 32168;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-25284
	ctx.r11.s64 = ctx.r11.s64 + -25284;
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
	// li r6,320
	ctx.r6.s64 = 320;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82292900;
	sub_822ED768(ctx, base);
	// b 0x82292908
	goto loc_82292908;
loc_82292904:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292908:
	// stw r3,-22228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22228, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82292910;
	sub_82170938(ctx, base);
	// lwz r11,-22228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22228);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229292c
	if (cr6.eq) goto loc_8229292C;
	// bl 0x82170938
	ctx.lr = 0x82292920;
	sub_82170938(ctx, base);
	// lwz r11,-22228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22228);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82292934
	goto loc_82292934;
loc_8229292C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82292934:
	// bl 0x82170938
	ctx.lr = 0x82292938;
	sub_82170938(ctx, base);
	// lwz r11,-22228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22228);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292944;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22228);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292984
	if (cr6.eq) goto loc_82292984;
	// bl 0x82170ba8
	ctx.lr = 0x82292964;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22228);
	// bne cr6,0x82292984
	if (!cr6.eq) goto loc_82292984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292980;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22228);
loc_82292984:
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

__attribute__((alias("__imp__sub_8229299C"))) PPC_WEAK_FUNC(sub_8229299C);
PPC_FUNC_IMPL(__imp__sub_8229299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822929A0"))) PPC_WEAK_FUNC(sub_822929A0);
PPC_FUNC_IMPL(__imp__sub_822929A0) {
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
	// lwz r3,-22224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292ac4
	if (!cr6.eq) goto loc_82292AC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822929D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292a44
	if (cr6.eq) goto loc_82292A44;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,32040
	ctx.r7.s64 = ctx.r10.s64 + 32040;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-25236
	ctx.r11.s64 = ctx.r11.s64 + -25236;
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
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82292A40;
	sub_822ED768(ctx, base);
	// b 0x82292a48
	goto loc_82292A48;
loc_82292A44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292A48:
	// stw r3,-22224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22224, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82292A50;
	sub_82170938(ctx, base);
	// lwz r11,-22224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22224);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82292a6c
	if (cr6.eq) goto loc_82292A6C;
	// bl 0x82170938
	ctx.lr = 0x82292A60;
	sub_82170938(ctx, base);
	// lwz r11,-22224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22224);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82292a74
	goto loc_82292A74;
loc_82292A6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82292A74:
	// bl 0x82170d38
	ctx.lr = 0x82292A78;
	sub_82170D38(ctx, base);
	// lwz r11,-22224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22224);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292A84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22224);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292ac4
	if (cr6.eq) goto loc_82292AC4;
	// bl 0x82170ba8
	ctx.lr = 0x82292AA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22224);
	// bne cr6,0x82292ac4
	if (!cr6.eq) goto loc_82292AC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292AC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22224);
loc_82292AC4:
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

__attribute__((alias("__imp__sub_82292ADC"))) PPC_WEAK_FUNC(sub_82292ADC);
PPC_FUNC_IMPL(__imp__sub_82292ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82292AE0"))) PPC_WEAK_FUNC(sub_82292AE0);
PPC_FUNC_IMPL(__imp__sub_82292AE0) {
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
	// lwz r3,31956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31956);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292c04
	if (!cr6.eq) goto loc_82292C04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82292B10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292b84
	if (cr6.eq) goto loc_82292B84;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27656
	ctx.r7.s64 = ctx.r10.s64 + 27656;
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
	// addi r11,r11,-15000
	ctx.r11.s64 = ctx.r11.s64 + -15000;
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
	ctx.lr = 0x82292B80;
	sub_822ED768(ctx, base);
	// b 0x82292b88
	goto loc_82292B88;
loc_82292B84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292B88:
	// stw r3,31956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31956, ctx.r3.u32);
	// bl 0x821c0058
	ctx.lr = 0x82292B90;
	sub_821C0058(ctx, base);
	// lwz r11,31956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31956);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82292bac
	if (cr6.eq) goto loc_82292BAC;
	// bl 0x821c0058
	ctx.lr = 0x82292BA0;
	sub_821C0058(ctx, base);
	// lwz r11,31956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31956);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82292bb4
	goto loc_82292BB4;
loc_82292BAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82292BB4:
	// bl 0x82170938
	ctx.lr = 0x82292BB8;
	sub_82170938(ctx, base);
	// lwz r11,31956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31956);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292BC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31956);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292c04
	if (cr6.eq) goto loc_82292C04;
	// bl 0x82170ba8
	ctx.lr = 0x82292BE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31956);
	// bne cr6,0x82292c04
	if (!cr6.eq) goto loc_82292C04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292C00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31956);
loc_82292C04:
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

__attribute__((alias("__imp__sub_82292C1C"))) PPC_WEAK_FUNC(sub_82292C1C);
PPC_FUNC_IMPL(__imp__sub_82292C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82292C20"))) PPC_WEAK_FUNC(sub_82292C20);
PPC_FUNC_IMPL(__imp__sub_82292C20) {
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
	// lwz r3,-22236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292d44
	if (!cr6.eq) goto loc_82292D44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82292C50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292cc4
	if (cr6.eq) goto loc_82292CC4;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,31872
	ctx.r7.s64 = ctx.r10.s64 + 31872;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-25744
	ctx.r11.s64 = ctx.r11.s64 + -25744;
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
	ctx.lr = 0x82292CC0;
	sub_822ED768(ctx, base);
	// b 0x82292cc8
	goto loc_82292CC8;
loc_82292CC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292CC8:
	// stw r3,-22236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22236, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82292CD0;
	sub_82170938(ctx, base);
	// lwz r11,-22236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22236);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82292cec
	if (cr6.eq) goto loc_82292CEC;
	// bl 0x82170938
	ctx.lr = 0x82292CE0;
	sub_82170938(ctx, base);
	// lwz r11,-22236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22236);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82292cf4
	goto loc_82292CF4;
loc_82292CEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82292CF4:
	// bl 0x82170938
	ctx.lr = 0x82292CF8;
	sub_82170938(ctx, base);
	// lwz r11,-22236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22236);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292D04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22236);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292d44
	if (cr6.eq) goto loc_82292D44;
	// bl 0x82170ba8
	ctx.lr = 0x82292D24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22236);
	// bne cr6,0x82292d44
	if (!cr6.eq) goto loc_82292D44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292D40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22236);
loc_82292D44:
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

__attribute__((alias("__imp__sub_82292D5C"))) PPC_WEAK_FUNC(sub_82292D5C);
PPC_FUNC_IMPL(__imp__sub_82292D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82292D60"))) PPC_WEAK_FUNC(sub_82292D60);
PPC_FUNC_IMPL(__imp__sub_82292D60) {
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
	// lwz r3,-22404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22404);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292e84
	if (!cr6.eq) goto loc_82292E84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82292D90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292e04
	if (cr6.eq) goto loc_82292E04;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,6384
	ctx.r7.s64 = ctx.r10.s64 + 6384;
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
	// addi r11,r11,13872
	ctx.r11.s64 = ctx.r11.s64 + 13872;
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
	ctx.lr = 0x82292E00;
	sub_822ED768(ctx, base);
	// b 0x82292e08
	goto loc_82292E08;
loc_82292E04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292E08:
	// stw r3,-22404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22404, ctx.r3.u32);
	// bl 0x821a7a90
	ctx.lr = 0x82292E10;
	sub_821A7A90(ctx, base);
	// lwz r11,-22404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22404);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82292e2c
	if (cr6.eq) goto loc_82292E2C;
	// bl 0x821a7a90
	ctx.lr = 0x82292E20;
	sub_821A7A90(ctx, base);
	// lwz r11,-22404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22404);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82292e34
	goto loc_82292E34;
loc_82292E2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82292E34:
	// bl 0x82170938
	ctx.lr = 0x82292E38;
	sub_82170938(ctx, base);
	// lwz r11,-22404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22404);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292E44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22404);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292e84
	if (cr6.eq) goto loc_82292E84;
	// bl 0x82170ba8
	ctx.lr = 0x82292E64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22404);
	// bne cr6,0x82292e84
	if (!cr6.eq) goto loc_82292E84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292E80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22404);
loc_82292E84:
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

__attribute__((alias("__imp__sub_82292E9C"))) PPC_WEAK_FUNC(sub_82292E9C);
PPC_FUNC_IMPL(__imp__sub_82292E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82292EA0"))) PPC_WEAK_FUNC(sub_82292EA0);
PPC_FUNC_IMPL(__imp__sub_82292EA0) {
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
	// lwz r3,-22400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82292fc4
	if (!cr6.eq) goto loc_82292FC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82292ED0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292f44
	if (cr6.eq) goto loc_82292F44;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,5992
	ctx.r7.s64 = ctx.r10.s64 + 5992;
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
	// addi r11,r11,13896
	ctx.r11.s64 = ctx.r11.s64 + 13896;
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
	ctx.lr = 0x82292F40;
	sub_822ED768(ctx, base);
	// b 0x82292f48
	goto loc_82292F48;
loc_82292F44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292F48:
	// stw r3,-22400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22400, ctx.r3.u32);
	// bl 0x82292d60
	ctx.lr = 0x82292F50;
	sub_82292D60(ctx, base);
	// lwz r11,-22400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22400);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82292f6c
	if (cr6.eq) goto loc_82292F6C;
	// bl 0x82292d60
	ctx.lr = 0x82292F60;
	sub_82292D60(ctx, base);
	// lwz r11,-22400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22400);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82292f74
	goto loc_82292F74;
loc_82292F6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82292F74:
	// bl 0x82170938
	ctx.lr = 0x82292F78;
	sub_82170938(ctx, base);
	// lwz r11,-22400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22400);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82292F84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22400);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82292fc4
	if (cr6.eq) goto loc_82292FC4;
	// bl 0x82170ba8
	ctx.lr = 0x82292FA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22400);
	// bne cr6,0x82292fc4
	if (!cr6.eq) goto loc_82292FC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292FC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22400);
loc_82292FC4:
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

__attribute__((alias("__imp__sub_82292FDC"))) PPC_WEAK_FUNC(sub_82292FDC);
PPC_FUNC_IMPL(__imp__sub_82292FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82292FE0"))) PPC_WEAK_FUNC(sub_82292FE0);
PPC_FUNC_IMPL(__imp__sub_82292FE0) {
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
	// lwz r3,-22408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293104
	if (!cr6.eq) goto loc_82293104;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293010;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293084
	if (cr6.eq) goto loc_82293084;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,5656
	ctx.r7.s64 = ctx.r10.s64 + 5656;
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
	// addi r11,r11,13324
	ctx.r11.s64 = ctx.r11.s64 + 13324;
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
	ctx.lr = 0x82293080;
	sub_822ED768(ctx, base);
	// b 0x82293088
	goto loc_82293088;
loc_82293084:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293088:
	// stw r3,-22408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22408, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82293090;
	sub_82170938(ctx, base);
	// lwz r11,-22408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22408);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822930ac
	if (cr6.eq) goto loc_822930AC;
	// bl 0x82170938
	ctx.lr = 0x822930A0;
	sub_82170938(ctx, base);
	// lwz r11,-22408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22408);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822930b4
	goto loc_822930B4;
loc_822930AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822930B4:
	// bl 0x82170938
	ctx.lr = 0x822930B8;
	sub_82170938(ctx, base);
	// lwz r11,-22408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22408);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822930C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22408);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293104
	if (cr6.eq) goto loc_82293104;
	// bl 0x82170ba8
	ctx.lr = 0x822930E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22408);
	// bne cr6,0x82293104
	if (!cr6.eq) goto loc_82293104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22408);
loc_82293104:
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

__attribute__((alias("__imp__sub_8229311C"))) PPC_WEAK_FUNC(sub_8229311C);
PPC_FUNC_IMPL(__imp__sub_8229311C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82293120"))) PPC_WEAK_FUNC(sub_82293120);
PPC_FUNC_IMPL(__imp__sub_82293120) {
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
	// lwz r3,-22240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293244
	if (!cr6.eq) goto loc_82293244;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293150;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822931c4
	if (cr6.eq) goto loc_822931C4;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27224
	ctx.r7.s64 = ctx.r10.s64 + 27224;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-26208
	ctx.r11.s64 = ctx.r11.s64 + -26208;
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
	ctx.lr = 0x822931C0;
	sub_822ED768(ctx, base);
	// b 0x822931c8
	goto loc_822931C8;
loc_822931C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822931C8:
	// stw r3,-22240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22240, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x822931D0;
	sub_82170938(ctx, base);
	// lwz r11,-22240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22240);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822931ec
	if (cr6.eq) goto loc_822931EC;
	// bl 0x82170938
	ctx.lr = 0x822931E0;
	sub_82170938(ctx, base);
	// lwz r11,-22240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22240);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822931f4
	goto loc_822931F4;
loc_822931EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822931F4:
	// bl 0x82170938
	ctx.lr = 0x822931F8;
	sub_82170938(ctx, base);
	// lwz r11,-22240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22240);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293204;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22240);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293244
	if (cr6.eq) goto loc_82293244;
	// bl 0x82170ba8
	ctx.lr = 0x82293224;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22240);
	// bne cr6,0x82293244
	if (!cr6.eq) goto loc_82293244;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293240;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22240);
loc_82293244:
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

__attribute__((alias("__imp__sub_8229325C"))) PPC_WEAK_FUNC(sub_8229325C);
PPC_FUNC_IMPL(__imp__sub_8229325C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82293260"))) PPC_WEAK_FUNC(sub_82293260);
PPC_FUNC_IMPL(__imp__sub_82293260) {
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
	// lwz r3,32160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293384
	if (!cr6.eq) goto loc_82293384;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293290;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293304
	if (cr6.eq) goto loc_82293304;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21016
	ctx.r7.s64 = ctx.r10.s64 + 21016;
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
	// addi r11,r11,-13472
	ctx.r11.s64 = ctx.r11.s64 + -13472;
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
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82293300;
	sub_822ED768(ctx, base);
	// b 0x82293308
	goto loc_82293308;
loc_82293304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293308:
	// stw r3,32160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32160, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82293310;
	sub_82170938(ctx, base);
	// lwz r11,32160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32160);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229332c
	if (cr6.eq) goto loc_8229332C;
	// bl 0x82170938
	ctx.lr = 0x82293320;
	sub_82170938(ctx, base);
	// lwz r11,32160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32160);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82293334
	goto loc_82293334;
loc_8229332C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82293334:
	// bl 0x82170938
	ctx.lr = 0x82293338;
	sub_82170938(ctx, base);
	// lwz r11,32160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32160);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293344;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32160);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293384
	if (cr6.eq) goto loc_82293384;
	// bl 0x82170ba8
	ctx.lr = 0x82293364;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32160);
	// bne cr6,0x82293384
	if (!cr6.eq) goto loc_82293384;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32160);
loc_82293384:
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

__attribute__((alias("__imp__sub_8229339C"))) PPC_WEAK_FUNC(sub_8229339C);
PPC_FUNC_IMPL(__imp__sub_8229339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822933A0"))) PPC_WEAK_FUNC(sub_822933A0);
PPC_FUNC_IMPL(__imp__sub_822933A0) {
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
	// lwz r3,32156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822934c4
	if (!cr6.eq) goto loc_822934C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822933D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293444
	if (cr6.eq) goto loc_82293444;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21248
	ctx.r7.s64 = ctx.r10.s64 + 21248;
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
	// addi r11,r11,-13504
	ctx.r11.s64 = ctx.r11.s64 + -13504;
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
	ctx.lr = 0x82293440;
	sub_822ED768(ctx, base);
	// b 0x82293448
	goto loc_82293448;
loc_82293444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293448:
	// stw r3,32156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32156, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82293450;
	sub_82170938(ctx, base);
	// lwz r11,32156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32156);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229346c
	if (cr6.eq) goto loc_8229346C;
	// bl 0x82170938
	ctx.lr = 0x82293460;
	sub_82170938(ctx, base);
	// lwz r11,32156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32156);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82293474
	goto loc_82293474;
loc_8229346C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82293474:
	// bl 0x82170938
	ctx.lr = 0x82293478;
	sub_82170938(ctx, base);
	// lwz r11,32156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32156);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293484;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32156);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822934c4
	if (cr6.eq) goto loc_822934C4;
	// bl 0x82170ba8
	ctx.lr = 0x822934A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32156);
	// bne cr6,0x822934c4
	if (!cr6.eq) goto loc_822934C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822934C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32156);
loc_822934C4:
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

__attribute__((alias("__imp__sub_822934DC"))) PPC_WEAK_FUNC(sub_822934DC);
PPC_FUNC_IMPL(__imp__sub_822934DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822934E0"))) PPC_WEAK_FUNC(sub_822934E0);
PPC_FUNC_IMPL(__imp__sub_822934E0) {
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
	// lwz r3,32192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293604
	if (!cr6.eq) goto loc_82293604;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293510;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293584
	if (cr6.eq) goto loc_82293584;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,19528
	ctx.r7.s64 = ctx.r10.s64 + 19528;
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
	// addi r11,r11,-13284
	ctx.r11.s64 = ctx.r11.s64 + -13284;
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
	// li r5,476
	ctx.r5.s64 = 476;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82293580;
	sub_822ED768(ctx, base);
	// b 0x82293588
	goto loc_82293588;
loc_82293584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293588:
	// stw r3,32192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32192, ctx.r3.u32);
	// bl 0x82289ee0
	ctx.lr = 0x82293590;
	sub_82289EE0(ctx, base);
	// lwz r11,32192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32192);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822935ac
	if (cr6.eq) goto loc_822935AC;
	// bl 0x82289ee0
	ctx.lr = 0x822935A0;
	sub_82289EE0(ctx, base);
	// lwz r11,32192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32192);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822935b4
	goto loc_822935B4;
loc_822935AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822935B4:
	// bl 0x82170938
	ctx.lr = 0x822935B8;
	sub_82170938(ctx, base);
	// lwz r11,32192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32192);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822935C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32192);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293604
	if (cr6.eq) goto loc_82293604;
	// bl 0x82170ba8
	ctx.lr = 0x822935E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32192);
	// bne cr6,0x82293604
	if (!cr6.eq) goto loc_82293604;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293600;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32192);
loc_82293604:
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

__attribute__((alias("__imp__sub_8229361C"))) PPC_WEAK_FUNC(sub_8229361C);
PPC_FUNC_IMPL(__imp__sub_8229361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82293620"))) PPC_WEAK_FUNC(sub_82293620);
PPC_FUNC_IMPL(__imp__sub_82293620) {
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
	// lwz r3,-23504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23504);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293744
	if (!cr6.eq) goto loc_82293744;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293650;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822936c4
	if (cr6.eq) goto loc_822936C4;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-32328
	ctx.r7.s64 = ctx.r10.s64 + -32328;
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
	// addi r11,r11,-29100
	ctx.r11.s64 = ctx.r11.s64 + -29100;
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
	// li r5,436
	ctx.r5.s64 = 436;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822936C0;
	sub_822ED768(ctx, base);
	// b 0x822936c8
	goto loc_822936C8;
loc_822936C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822936C8:
	// stw r3,-23504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23504, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x822936D0;
	sub_821A7638(ctx, base);
	// lwz r11,-23504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23504);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822936ec
	if (cr6.eq) goto loc_822936EC;
	// bl 0x821a7638
	ctx.lr = 0x822936E0;
	sub_821A7638(ctx, base);
	// lwz r11,-23504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23504);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822936f4
	goto loc_822936F4;
loc_822936EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822936F4:
	// bl 0x82170938
	ctx.lr = 0x822936F8;
	sub_82170938(ctx, base);
	// lwz r11,-23504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23504);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293704;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23504);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293744
	if (cr6.eq) goto loc_82293744;
	// bl 0x82170ba8
	ctx.lr = 0x82293724;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23504);
	// bne cr6,0x82293744
	if (!cr6.eq) goto loc_82293744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293740;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23504);
loc_82293744:
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

__attribute__((alias("__imp__sub_8229375C"))) PPC_WEAK_FUNC(sub_8229375C);
PPC_FUNC_IMPL(__imp__sub_8229375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82293760"))) PPC_WEAK_FUNC(sub_82293760);
PPC_FUNC_IMPL(__imp__sub_82293760) {
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
	// lwz r3,-22248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293884
	if (!cr6.eq) goto loc_82293884;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293790;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293804
	if (cr6.eq) goto loc_82293804;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,27000
	ctx.r7.s64 = ctx.r10.s64 + 27000;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-26536
	ctx.r11.s64 = ctx.r11.s64 + -26536;
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
	ctx.lr = 0x82293800;
	sub_822ED768(ctx, base);
	// b 0x82293808
	goto loc_82293808;
loc_82293804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293808:
	// stw r3,-22248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22248, ctx.r3.u32);
	// bl 0x82290ba0
	ctx.lr = 0x82293810;
	sub_82290BA0(ctx, base);
	// lwz r11,-22248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22248);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229382c
	if (cr6.eq) goto loc_8229382C;
	// bl 0x82290ba0
	ctx.lr = 0x82293820;
	sub_82290BA0(ctx, base);
	// lwz r11,-22248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22248);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82293834
	goto loc_82293834;
loc_8229382C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82293834:
	// bl 0x82170938
	ctx.lr = 0x82293838;
	sub_82170938(ctx, base);
	// lwz r11,-22248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22248);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293844;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22248);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293884
	if (cr6.eq) goto loc_82293884;
	// bl 0x82170ba8
	ctx.lr = 0x82293864;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22248);
	// bne cr6,0x82293884
	if (!cr6.eq) goto loc_82293884;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22248);
loc_82293884:
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

__attribute__((alias("__imp__sub_8229389C"))) PPC_WEAK_FUNC(sub_8229389C);
PPC_FUNC_IMPL(__imp__sub_8229389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822938A0"))) PPC_WEAK_FUNC(sub_822938A0);
PPC_FUNC_IMPL(__imp__sub_822938A0) {
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
	// lwz r3,32196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822939c4
	if (!cr6.eq) goto loc_822939C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822938D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293944
	if (cr6.eq) goto loc_82293944;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,19176
	ctx.r7.s64 = ctx.r10.s64 + 19176;
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
	// addi r11,r11,-13240
	ctx.r11.s64 = ctx.r11.s64 + -13240;
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
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82293940;
	sub_822ED768(ctx, base);
	// b 0x82293948
	goto loc_82293948;
loc_82293944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293948:
	// stw r3,32196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32196, ctx.r3.u32);
	// bl 0x82296d20
	ctx.lr = 0x82293950;
	sub_82296D20(ctx, base);
	// lwz r11,32196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32196);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229396c
	if (cr6.eq) goto loc_8229396C;
	// bl 0x82296d20
	ctx.lr = 0x82293960;
	sub_82296D20(ctx, base);
	// lwz r11,32196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32196);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82293974
	goto loc_82293974;
loc_8229396C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82293974:
	// bl 0x82170938
	ctx.lr = 0x82293978;
	sub_82170938(ctx, base);
	// lwz r11,32196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32196);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293984;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32196);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822939c4
	if (cr6.eq) goto loc_822939C4;
	// bl 0x82170ba8
	ctx.lr = 0x822939A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32196);
	// bne cr6,0x822939c4
	if (!cr6.eq) goto loc_822939C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822939C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32196);
loc_822939C4:
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

__attribute__((alias("__imp__sub_822939DC"))) PPC_WEAK_FUNC(sub_822939DC);
PPC_FUNC_IMPL(__imp__sub_822939DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822939E0"))) PPC_WEAK_FUNC(sub_822939E0);
PPC_FUNC_IMPL(__imp__sub_822939E0) {
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
	// lwz r3,-23812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23812);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293b04
	if (!cr6.eq) goto loc_82293B04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293A10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293a84
	if (cr6.eq) goto loc_82293A84;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,5392
	ctx.r7.s64 = ctx.r10.s64 + 5392;
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
	// addi r11,r11,14792
	ctx.r11.s64 = ctx.r11.s64 + 14792;
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
	// li r5,636
	ctx.r5.s64 = 636;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82293A80;
	sub_822ED768(ctx, base);
	// b 0x82293a88
	goto loc_82293A88;
loc_82293A84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293A88:
	// stw r3,-23812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23812, ctx.r3.u32);
	// bl 0x821a7c38
	ctx.lr = 0x82293A90;
	sub_821A7C38(ctx, base);
	// lwz r11,-23812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23812);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82293aac
	if (cr6.eq) goto loc_82293AAC;
	// bl 0x821a7c38
	ctx.lr = 0x82293AA0;
	sub_821A7C38(ctx, base);
	// lwz r11,-23812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23812);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82293ab4
	goto loc_82293AB4;
loc_82293AAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82293AB4:
	// bl 0x82170938
	ctx.lr = 0x82293AB8;
	sub_82170938(ctx, base);
	// lwz r11,-23812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23812);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293AC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23812);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293b04
	if (cr6.eq) goto loc_82293B04;
	// bl 0x82170ba8
	ctx.lr = 0x82293AE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23812);
	// bne cr6,0x82293b04
	if (!cr6.eq) goto loc_82293B04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293B00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23812);
loc_82293B04:
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

__attribute__((alias("__imp__sub_82293B1C"))) PPC_WEAK_FUNC(sub_82293B1C);
PPC_FUNC_IMPL(__imp__sub_82293B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82293B20"))) PPC_WEAK_FUNC(sub_82293B20);
PPC_FUNC_IMPL(__imp__sub_82293B20) {
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
	// lwz r3,-24048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24048);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293c44
	if (!cr6.eq) goto loc_82293C44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293B50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293bc4
	if (cr6.eq) goto loc_82293BC4;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10672
	ctx.r7.s64 = ctx.r10.s64 + 10672;
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
	// addi r11,r11,-17348
	ctx.r11.s64 = ctx.r11.s64 + -17348;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82293BC0;
	sub_822ED768(ctx, base);
	// b 0x82293bc8
	goto loc_82293BC8;
loc_82293BC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293BC8:
	// stw r3,-24048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24048, ctx.r3.u32);
	// bl 0x821a72f0
	ctx.lr = 0x82293BD0;
	sub_821A72F0(ctx, base);
	// lwz r11,-24048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24048);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82293bec
	if (cr6.eq) goto loc_82293BEC;
	// bl 0x821a72f0
	ctx.lr = 0x82293BE0;
	sub_821A72F0(ctx, base);
	// lwz r11,-24048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24048);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82293bf4
	goto loc_82293BF4;
loc_82293BEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82293BF4:
	// bl 0x82170938
	ctx.lr = 0x82293BF8;
	sub_82170938(ctx, base);
	// lwz r11,-24048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24048);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293C04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24048);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293c44
	if (cr6.eq) goto loc_82293C44;
	// bl 0x82170ba8
	ctx.lr = 0x82293C24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24048);
	// bne cr6,0x82293c44
	if (!cr6.eq) goto loc_82293C44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293C40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24048);
loc_82293C44:
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

__attribute__((alias("__imp__sub_82293C5C"))) PPC_WEAK_FUNC(sub_82293C5C);
PPC_FUNC_IMPL(__imp__sub_82293C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82293C60"))) PPC_WEAK_FUNC(sub_82293C60);
PPC_FUNC_IMPL(__imp__sub_82293C60) {
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
	// lwz r3,31724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31724);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293d84
	if (!cr6.eq) goto loc_82293D84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293C90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293d04
	if (cr6.eq) goto loc_82293D04;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-31504
	ctx.r7.s64 = ctx.r10.s64 + -31504;
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
	// addi r11,r11,-30876
	ctx.r11.s64 = ctx.r11.s64 + -30876;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82293D00;
	sub_822ED768(ctx, base);
	// b 0x82293d08
	goto loc_82293D08;
loc_82293D04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293D08:
	// stw r3,31724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31724, ctx.r3.u32);
	// bl 0x82293b20
	ctx.lr = 0x82293D10;
	sub_82293B20(ctx, base);
	// lwz r11,31724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31724);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82293d2c
	if (cr6.eq) goto loc_82293D2C;
	// bl 0x82293b20
	ctx.lr = 0x82293D20;
	sub_82293B20(ctx, base);
	// lwz r11,31724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31724);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82293d34
	goto loc_82293D34;
loc_82293D2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82293D34:
	// bl 0x82170938
	ctx.lr = 0x82293D38;
	sub_82170938(ctx, base);
	// lwz r11,31724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31724);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293D44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31724);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293d84
	if (cr6.eq) goto loc_82293D84;
	// bl 0x82170ba8
	ctx.lr = 0x82293D64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31724);
	// bne cr6,0x82293d84
	if (!cr6.eq) goto loc_82293D84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293D80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31724);
loc_82293D84:
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

__attribute__((alias("__imp__sub_82293D9C"))) PPC_WEAK_FUNC(sub_82293D9C);
PPC_FUNC_IMPL(__imp__sub_82293D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82293DA0"))) PPC_WEAK_FUNC(sub_82293DA0);
PPC_FUNC_IMPL(__imp__sub_82293DA0) {
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
	// lwz r3,-24032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24032);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82293ec4
	if (!cr6.eq) goto loc_82293EC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293DD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293e44
	if (cr6.eq) goto loc_82293E44;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,9984
	ctx.r7.s64 = ctx.r10.s64 + 9984;
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
	// addi r11,r11,-17172
	ctx.r11.s64 = ctx.r11.s64 + -17172;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,624
	ctx.r5.s64 = 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82293E40;
	sub_822ED768(ctx, base);
	// b 0x82293e48
	goto loc_82293E48;
loc_82293E44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293E48:
	// stw r3,-24032(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24032, ctx.r3.u32);
	// bl 0x821a72f0
	ctx.lr = 0x82293E50;
	sub_821A72F0(ctx, base);
	// lwz r11,-24032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24032);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82293e6c
	if (cr6.eq) goto loc_82293E6C;
	// bl 0x821a72f0
	ctx.lr = 0x82293E60;
	sub_821A72F0(ctx, base);
	// lwz r11,-24032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24032);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82293e74
	goto loc_82293E74;
loc_82293E6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82293E74:
	// bl 0x82170938
	ctx.lr = 0x82293E78;
	sub_82170938(ctx, base);
	// lwz r11,-24032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24032);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293E84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24032);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293ec4
	if (cr6.eq) goto loc_82293EC4;
	// bl 0x82170ba8
	ctx.lr = 0x82293EA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24032);
	// bne cr6,0x82293ec4
	if (!cr6.eq) goto loc_82293EC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293EC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24032);
loc_82293EC4:
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

__attribute__((alias("__imp__sub_82293EDC"))) PPC_WEAK_FUNC(sub_82293EDC);
PPC_FUNC_IMPL(__imp__sub_82293EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82293EE0"))) PPC_WEAK_FUNC(sub_82293EE0);
PPC_FUNC_IMPL(__imp__sub_82293EE0) {
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
	// lwz r3,-22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294004
	if (!cr6.eq) goto loc_82294004;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82293F10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82293f84
	if (cr6.eq) goto loc_82293F84;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,13672
	ctx.r7.s64 = ctx.r10.s64 + 13672;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-27068
	ctx.r11.s64 = ctx.r11.s64 + -27068;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82293F80;
	sub_822ED768(ctx, base);
	// b 0x82293f88
	goto loc_82293F88;
loc_82293F84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82293F88:
	// stw r3,-22252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22252, ctx.r3.u32);
	// bl 0x82293b20
	ctx.lr = 0x82293F90;
	sub_82293B20(ctx, base);
	// lwz r11,-22252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22252);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82293fac
	if (cr6.eq) goto loc_82293FAC;
	// bl 0x82293b20
	ctx.lr = 0x82293FA0;
	sub_82293B20(ctx, base);
	// lwz r11,-22252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22252);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82293fb4
	goto loc_82293FB4;
loc_82293FAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82293FB4:
	// bl 0x82170938
	ctx.lr = 0x82293FB8;
	sub_82170938(ctx, base);
	// lwz r11,-22252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22252);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82293FC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22252);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294004
	if (cr6.eq) goto loc_82294004;
	// bl 0x82170ba8
	ctx.lr = 0x82293FE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22252);
	// bne cr6,0x82294004
	if (!cr6.eq) goto loc_82294004;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22252);
loc_82294004:
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

__attribute__((alias("__imp__sub_8229401C"))) PPC_WEAK_FUNC(sub_8229401C);
PPC_FUNC_IMPL(__imp__sub_8229401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82294020"))) PPC_WEAK_FUNC(sub_82294020);
PPC_FUNC_IMPL(__imp__sub_82294020) {
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
	// lwz r3,-24040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24040);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294144
	if (!cr6.eq) goto loc_82294144;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294050;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822940c4
	if (cr6.eq) goto loc_822940C4;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10320
	ctx.r7.s64 = ctx.r10.s64 + 10320;
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
	// addi r11,r11,-17264
	ctx.r11.s64 = ctx.r11.s64 + -17264;
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
	// li r5,624
	ctx.r5.s64 = 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822940C0;
	sub_822ED768(ctx, base);
	// b 0x822940c8
	goto loc_822940C8;
loc_822940C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822940C8:
	// stw r3,-24040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24040, ctx.r3.u32);
	// bl 0x822942a0
	ctx.lr = 0x822940D0;
	sub_822942A0(ctx, base);
	// lwz r11,-24040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24040);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822940ec
	if (cr6.eq) goto loc_822940EC;
	// bl 0x822942a0
	ctx.lr = 0x822940E0;
	sub_822942A0(ctx, base);
	// lwz r11,-24040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24040);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822940f4
	goto loc_822940F4;
loc_822940EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822940F4:
	// bl 0x82170938
	ctx.lr = 0x822940F8;
	sub_82170938(ctx, base);
	// lwz r11,-24040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24040);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82294104;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24040);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294144
	if (cr6.eq) goto loc_82294144;
	// bl 0x82170ba8
	ctx.lr = 0x82294124;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24040);
	// bne cr6,0x82294144
	if (!cr6.eq) goto loc_82294144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294140;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24040);
loc_82294144:
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

__attribute__((alias("__imp__sub_8229415C"))) PPC_WEAK_FUNC(sub_8229415C);
PPC_FUNC_IMPL(__imp__sub_8229415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82294160"))) PPC_WEAK_FUNC(sub_82294160);
PPC_FUNC_IMPL(__imp__sub_82294160) {
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
	// lwz r3,-22256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22256);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294284
	if (!cr6.eq) goto loc_82294284;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294190;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294204
	if (cr6.eq) goto loc_82294204;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,12848
	ctx.r7.s64 = ctx.r10.s64 + 12848;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-27588
	ctx.r11.s64 = ctx.r11.s64 + -27588;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82294200;
	sub_822ED768(ctx, base);
	// b 0x82294208
	goto loc_82294208;
loc_82294204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294208:
	// stw r3,-22256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22256, ctx.r3.u32);
	// bl 0x821a72f0
	ctx.lr = 0x82294210;
	sub_821A72F0(ctx, base);
	// lwz r11,-22256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22256);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229422c
	if (cr6.eq) goto loc_8229422C;
	// bl 0x821a72f0
	ctx.lr = 0x82294220;
	sub_821A72F0(ctx, base);
	// lwz r11,-22256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22256);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82294234
	goto loc_82294234;
loc_8229422C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82294234:
	// bl 0x82170938
	ctx.lr = 0x82294238;
	sub_82170938(ctx, base);
	// lwz r11,-22256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22256);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82294244;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22256);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294284
	if (cr6.eq) goto loc_82294284;
	// bl 0x82170ba8
	ctx.lr = 0x82294264;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22256);
	// bne cr6,0x82294284
	if (!cr6.eq) goto loc_82294284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294280;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22256);
loc_82294284:
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

__attribute__((alias("__imp__sub_8229429C"))) PPC_WEAK_FUNC(sub_8229429C);
PPC_FUNC_IMPL(__imp__sub_8229429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822942A0"))) PPC_WEAK_FUNC(sub_822942A0);
PPC_FUNC_IMPL(__imp__sub_822942A0) {
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
	// lwz r3,-24044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24044);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822943c4
	if (!cr6.eq) goto loc_822943C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822942D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294344
	if (cr6.eq) goto loc_82294344;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10608
	ctx.r7.s64 = ctx.r10.s64 + 10608;
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
	// addi r11,r11,-17304
	ctx.r11.s64 = ctx.r11.s64 + -17304;
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
	// li r5,624
	ctx.r5.s64 = 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82294340;
	sub_822ED768(ctx, base);
	// b 0x82294348
	goto loc_82294348;
loc_82294344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294348:
	// stw r3,-24044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24044, ctx.r3.u32);
	// bl 0x821a72f0
	ctx.lr = 0x82294350;
	sub_821A72F0(ctx, base);
	// lwz r11,-24044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24044);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229436c
	if (cr6.eq) goto loc_8229436C;
	// bl 0x821a72f0
	ctx.lr = 0x82294360;
	sub_821A72F0(ctx, base);
	// lwz r11,-24044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24044);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82294374
	goto loc_82294374;
loc_8229436C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82294374:
	// bl 0x82170938
	ctx.lr = 0x82294378;
	sub_82170938(ctx, base);
	// lwz r11,-24044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24044);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82294384;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24044);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822943c4
	if (cr6.eq) goto loc_822943C4;
	// bl 0x82170ba8
	ctx.lr = 0x822943A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24044);
	// bne cr6,0x822943c4
	if (!cr6.eq) goto loc_822943C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822943C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24044);
loc_822943C4:
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

__attribute__((alias("__imp__sub_822943DC"))) PPC_WEAK_FUNC(sub_822943DC);
PPC_FUNC_IMPL(__imp__sub_822943DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822943E0"))) PPC_WEAK_FUNC(sub_822943E0);
PPC_FUNC_IMPL(__imp__sub_822943E0) {
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
	// lwz r3,32188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294504
	if (!cr6.eq) goto loc_82294504;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294410;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294484
	if (cr6.eq) goto loc_82294484;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,19816
	ctx.r7.s64 = ctx.r10.s64 + 19816;
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
	// addi r11,r11,-13308
	ctx.r11.s64 = ctx.r11.s64 + -13308;
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
	// li r5,648
	ctx.r5.s64 = 648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82294480;
	sub_822ED768(ctx, base);
	// b 0x82294488
	goto loc_82294488;
loc_82294484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294488:
	// stw r3,32188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32188, ctx.r3.u32);
	// bl 0x821a7c38
	ctx.lr = 0x82294490;
	sub_821A7C38(ctx, base);
	// lwz r11,32188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32188);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822944ac
	if (cr6.eq) goto loc_822944AC;
	// bl 0x821a7c38
	ctx.lr = 0x822944A0;
	sub_821A7C38(ctx, base);
	// lwz r11,32188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32188);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822944b4
	goto loc_822944B4;
loc_822944AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822944B4:
	// bl 0x82170938
	ctx.lr = 0x822944B8;
	sub_82170938(ctx, base);
	// lwz r11,32188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32188);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822944C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32188);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294504
	if (cr6.eq) goto loc_82294504;
	// bl 0x82170ba8
	ctx.lr = 0x822944E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32188);
	// bne cr6,0x82294504
	if (!cr6.eq) goto loc_82294504;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294500;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32188);
loc_82294504:
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

__attribute__((alias("__imp__sub_8229451C"))) PPC_WEAK_FUNC(sub_8229451C);
PPC_FUNC_IMPL(__imp__sub_8229451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82294520"))) PPC_WEAK_FUNC(sub_82294520);
PPC_FUNC_IMPL(__imp__sub_82294520) {
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
	// lwz r3,-22260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22260);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294644
	if (!cr6.eq) goto loc_82294644;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294550;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822945c4
	if (cr6.eq) goto loc_822945C4;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10048
	ctx.r7.s64 = ctx.r10.s64 + 10048;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-28148
	ctx.r11.s64 = ctx.r11.s64 + -28148;
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
	ctx.lr = 0x822945C0;
	sub_822ED768(ctx, base);
	// b 0x822945c8
	goto loc_822945C8;
loc_822945C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822945C8:
	// stw r3,-22260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22260, ctx.r3.u32);
	// bl 0x8228dfe0
	ctx.lr = 0x822945D0;
	sub_8228DFE0(ctx, base);
	// lwz r11,-22260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22260);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822945ec
	if (cr6.eq) goto loc_822945EC;
	// bl 0x8228dfe0
	ctx.lr = 0x822945E0;
	sub_8228DFE0(ctx, base);
	// lwz r11,-22260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22260);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822945f4
	goto loc_822945F4;
loc_822945EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822945F4:
	// bl 0x82170938
	ctx.lr = 0x822945F8;
	sub_82170938(ctx, base);
	// lwz r11,-22260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22260);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82294604;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22260);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294644
	if (cr6.eq) goto loc_82294644;
	// bl 0x82170ba8
	ctx.lr = 0x82294624;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22260);
	// bne cr6,0x82294644
	if (!cr6.eq) goto loc_82294644;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22260);
loc_82294644:
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

__attribute__((alias("__imp__sub_8229465C"))) PPC_WEAK_FUNC(sub_8229465C);
PPC_FUNC_IMPL(__imp__sub_8229465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82294660"))) PPC_WEAK_FUNC(sub_82294660);
PPC_FUNC_IMPL(__imp__sub_82294660) {
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
	// lwz r3,-22264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294784
	if (!cr6.eq) goto loc_82294784;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294690;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294704
	if (cr6.eq) goto loc_82294704;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,4992
	ctx.r7.s64 = ctx.r10.s64 + 4992;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-29416
	ctx.r11.s64 = ctx.r11.s64 + -29416;
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
	ctx.lr = 0x82294700;
	sub_822ED768(ctx, base);
	// b 0x82294708
	goto loc_82294708;
loc_82294704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294708:
	// stw r3,-22264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22264, ctx.r3.u32);
	// bl 0x82294520
	ctx.lr = 0x82294710;
	sub_82294520(ctx, base);
	// lwz r11,-22264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22264);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229472c
	if (cr6.eq) goto loc_8229472C;
	// bl 0x82294520
	ctx.lr = 0x82294720;
	sub_82294520(ctx, base);
	// lwz r11,-22264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22264);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82294734
	goto loc_82294734;
loc_8229472C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82294734:
	// bl 0x82170938
	ctx.lr = 0x82294738;
	sub_82170938(ctx, base);
	// lwz r11,-22264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22264);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82294744;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22264);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294784
	if (cr6.eq) goto loc_82294784;
	// bl 0x82170ba8
	ctx.lr = 0x82294764;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22264);
	// bne cr6,0x82294784
	if (!cr6.eq) goto loc_82294784;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22264);
loc_82294784:
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

__attribute__((alias("__imp__sub_8229479C"))) PPC_WEAK_FUNC(sub_8229479C);
PPC_FUNC_IMPL(__imp__sub_8229479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822947A0"))) PPC_WEAK_FUNC(sub_822947A0);
PPC_FUNC_IMPL(__imp__sub_822947A0) {
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
	// lwz r3,-22272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822948c4
	if (!cr6.eq) goto loc_822948C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822947D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294844
	if (cr6.eq) goto loc_82294844;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-1576
	ctx.r7.s64 = ctx.r10.s64 + -1576;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-31256
	ctx.r11.s64 = ctx.r11.s64 + -31256;
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
	ctx.lr = 0x82294840;
	sub_822ED768(ctx, base);
	// b 0x82294848
	goto loc_82294848;
loc_82294844:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294848:
	// stw r3,-22272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22272, ctx.r3.u32);
	// bl 0x822882e8
	ctx.lr = 0x82294850;
	sub_822882E8(ctx, base);
	// lwz r11,-22272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22272);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229486c
	if (cr6.eq) goto loc_8229486C;
	// bl 0x822882e8
	ctx.lr = 0x82294860;
	sub_822882E8(ctx, base);
	// lwz r11,-22272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22272);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82294874
	goto loc_82294874;
loc_8229486C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82294874:
	// bl 0x82170938
	ctx.lr = 0x82294878;
	sub_82170938(ctx, base);
	// lwz r11,-22272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22272);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82294884;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22272);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822948c4
	if (cr6.eq) goto loc_822948C4;
	// bl 0x82170ba8
	ctx.lr = 0x822948A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22272);
	// bne cr6,0x822948c4
	if (!cr6.eq) goto loc_822948C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822948C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22272);
loc_822948C4:
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

__attribute__((alias("__imp__sub_822948DC"))) PPC_WEAK_FUNC(sub_822948DC);
PPC_FUNC_IMPL(__imp__sub_822948DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822948E0"))) PPC_WEAK_FUNC(sub_822948E0);
PPC_FUNC_IMPL(__imp__sub_822948E0) {
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
	// lwz r3,-22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22276);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294a04
	if (!cr6.eq) goto loc_82294A04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294910;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294984
	if (cr6.eq) goto loc_82294984;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-1408
	ctx.r7.s64 = ctx.r10.s64 + -1408;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-31316
	ctx.r11.s64 = ctx.r11.s64 + -31316;
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
	ctx.lr = 0x82294980;
	sub_822ED768(ctx, base);
	// b 0x82294988
	goto loc_82294988;
loc_82294984:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294988:
	// stw r3,-22276(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22276, ctx.r3.u32);
	// bl 0x822882e8
	ctx.lr = 0x82294990;
	sub_822882E8(ctx, base);
	// lwz r11,-22276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22276);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822949ac
	if (cr6.eq) goto loc_822949AC;
	// bl 0x822882e8
	ctx.lr = 0x822949A0;
	sub_822882E8(ctx, base);
	// lwz r11,-22276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22276);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822949b4
	goto loc_822949B4;
loc_822949AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822949B4:
	// bl 0x82170938
	ctx.lr = 0x822949B8;
	sub_82170938(ctx, base);
	// lwz r11,-22276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22276);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822949C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22276);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294a04
	if (cr6.eq) goto loc_82294A04;
	// bl 0x82170ba8
	ctx.lr = 0x822949E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22276);
	// bne cr6,0x82294a04
	if (!cr6.eq) goto loc_82294A04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294A00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22276);
loc_82294A04:
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

__attribute__((alias("__imp__sub_82294A1C"))) PPC_WEAK_FUNC(sub_82294A1C);
PPC_FUNC_IMPL(__imp__sub_82294A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82294A20"))) PPC_WEAK_FUNC(sub_82294A20);
PPC_FUNC_IMPL(__imp__sub_82294A20) {
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
	// lwz r3,-22268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294b44
	if (!cr6.eq) goto loc_82294B44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294A50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294ac4
	if (cr6.eq) goto loc_82294AC4;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-1624
	ctx.r7.s64 = ctx.r10.s64 + -1624;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-31192
	ctx.r11.s64 = ctx.r11.s64 + -31192;
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
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82294AC0;
	sub_822ED768(ctx, base);
	// b 0x82294ac8
	goto loc_82294AC8;
loc_82294AC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294AC8:
	// stw r3,-22268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22268, ctx.r3.u32);
	// bl 0x82294ca0
	ctx.lr = 0x82294AD0;
	sub_82294CA0(ctx, base);
	// lwz r11,-22268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22268);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82294aec
	if (cr6.eq) goto loc_82294AEC;
	// bl 0x82294ca0
	ctx.lr = 0x82294AE0;
	sub_82294CA0(ctx, base);
	// lwz r11,-22268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22268);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82294af4
	goto loc_82294AF4;
loc_82294AEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82294AF4:
	// bl 0x82170938
	ctx.lr = 0x82294AF8;
	sub_82170938(ctx, base);
	// lwz r11,-22268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22268);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82294B04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22268);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294b44
	if (cr6.eq) goto loc_82294B44;
	// bl 0x82170ba8
	ctx.lr = 0x82294B24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22268);
	// bne cr6,0x82294b44
	if (!cr6.eq) goto loc_82294B44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294B40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22268);
loc_82294B44:
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

__attribute__((alias("__imp__sub_82294B5C"))) PPC_WEAK_FUNC(sub_82294B5C);
PPC_FUNC_IMPL(__imp__sub_82294B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82294B60"))) PPC_WEAK_FUNC(sub_82294B60);
PPC_FUNC_IMPL(__imp__sub_82294B60) {
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
	// lwz r3,-22280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294c84
	if (!cr6.eq) goto loc_82294C84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294B90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294c04
	if (cr6.eq) goto loc_82294C04;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-1248
	ctx.r7.s64 = ctx.r10.s64 + -1248;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-31384
	ctx.r11.s64 = ctx.r11.s64 + -31384;
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
	ctx.lr = 0x82294C00;
	sub_822ED768(ctx, base);
	// b 0x82294c08
	goto loc_82294C08;
loc_82294C04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294C08:
	// stw r3,-22280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22280, ctx.r3.u32);
	// bl 0x822882e8
	ctx.lr = 0x82294C10;
	sub_822882E8(ctx, base);
	// lwz r11,-22280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22280);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82294c2c
	if (cr6.eq) goto loc_82294C2C;
	// bl 0x822882e8
	ctx.lr = 0x82294C20;
	sub_822882E8(ctx, base);
	// lwz r11,-22280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22280);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82294c34
	goto loc_82294C34;
loc_82294C2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82294C34:
	// bl 0x82170938
	ctx.lr = 0x82294C38;
	sub_82170938(ctx, base);
	// lwz r11,-22280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22280);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82294C44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22280);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294c84
	if (cr6.eq) goto loc_82294C84;
	// bl 0x82170ba8
	ctx.lr = 0x82294C64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22280);
	// bne cr6,0x82294c84
	if (!cr6.eq) goto loc_82294C84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294C80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22280);
loc_82294C84:
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

__attribute__((alias("__imp__sub_82294C9C"))) PPC_WEAK_FUNC(sub_82294C9C);
PPC_FUNC_IMPL(__imp__sub_82294C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82294CA0"))) PPC_WEAK_FUNC(sub_82294CA0);
PPC_FUNC_IMPL(__imp__sub_82294CA0) {
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
	// lwz r3,-22284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294dc4
	if (!cr6.eq) goto loc_82294DC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294CD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294d44
	if (cr6.eq) goto loc_82294D44;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-1080
	ctx.r7.s64 = ctx.r10.s64 + -1080;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
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
	ctx.lr = 0x82294D40;
	sub_822ED768(ctx, base);
	// b 0x82294d48
	goto loc_82294D48;
loc_82294D44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294D48:
	// stw r3,-22284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22284, ctx.r3.u32);
	// bl 0x822882e8
	ctx.lr = 0x82294D50;
	sub_822882E8(ctx, base);
	// lwz r11,-22284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22284);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82294d6c
	if (cr6.eq) goto loc_82294D6C;
	// bl 0x822882e8
	ctx.lr = 0x82294D60;
	sub_822882E8(ctx, base);
	// lwz r11,-22284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22284);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82294d74
	goto loc_82294D74;
loc_82294D6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82294D74:
	// bl 0x82170938
	ctx.lr = 0x82294D78;
	sub_82170938(ctx, base);
	// lwz r11,-22284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22284);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82294D84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22284);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294dc4
	if (cr6.eq) goto loc_82294DC4;
	// bl 0x82170ba8
	ctx.lr = 0x82294DA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22284);
	// bne cr6,0x82294dc4
	if (!cr6.eq) goto loc_82294DC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294DC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22284);
loc_82294DC4:
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

__attribute__((alias("__imp__sub_82294DDC"))) PPC_WEAK_FUNC(sub_82294DDC);
PPC_FUNC_IMPL(__imp__sub_82294DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82294DE0"))) PPC_WEAK_FUNC(sub_82294DE0);
PPC_FUNC_IMPL(__imp__sub_82294DE0) {
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
	// lwz r3,-22292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294f04
	if (!cr6.eq) goto loc_82294F04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294E10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294e84
	if (cr6.eq) goto loc_82294E84;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-984
	ctx.r7.s64 = ctx.r10.s64 + -984;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-31572
	ctx.r11.s64 = ctx.r11.s64 + -31572;
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
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82294E80;
	sub_822ED768(ctx, base);
	// b 0x82294e88
	goto loc_82294E88;
loc_82294E84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294E88:
	// stw r3,-22292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22292, ctx.r3.u32);
	// bl 0x82288428
	ctx.lr = 0x82294E90;
	sub_82288428(ctx, base);
	// lwz r11,-22292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22292);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82294eac
	if (cr6.eq) goto loc_82294EAC;
	// bl 0x82288428
	ctx.lr = 0x82294EA0;
	sub_82288428(ctx, base);
	// lwz r11,-22292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22292);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82294eb4
	goto loc_82294EB4;
loc_82294EAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82294EB4:
	// bl 0x82170938
	ctx.lr = 0x82294EB8;
	sub_82170938(ctx, base);
	// lwz r11,-22292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22292);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82294EC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22292);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294f04
	if (cr6.eq) goto loc_82294F04;
	// bl 0x82170ba8
	ctx.lr = 0x82294EE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22292);
	// bne cr6,0x82294f04
	if (!cr6.eq) goto loc_82294F04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294F00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22292);
loc_82294F04:
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

__attribute__((alias("__imp__sub_82294F1C"))) PPC_WEAK_FUNC(sub_82294F1C);
PPC_FUNC_IMPL(__imp__sub_82294F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82294F20"))) PPC_WEAK_FUNC(sub_82294F20);
PPC_FUNC_IMPL(__imp__sub_82294F20) {
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
	// lwz r3,-22296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295044
	if (!cr6.eq) goto loc_82295044;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82294F50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294fc4
	if (cr6.eq) goto loc_82294FC4;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-816
	ctx.r7.s64 = ctx.r10.s64 + -816;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-31624
	ctx.r11.s64 = ctx.r11.s64 + -31624;
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
	ctx.lr = 0x82294FC0;
	sub_822ED768(ctx, base);
	// b 0x82294fc8
	goto loc_82294FC8;
loc_82294FC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82294FC8:
	// stw r3,-22296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22296, ctx.r3.u32);
	// bl 0x82288428
	ctx.lr = 0x82294FD0;
	sub_82288428(ctx, base);
	// lwz r11,-22296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22296);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82294fec
	if (cr6.eq) goto loc_82294FEC;
	// bl 0x82288428
	ctx.lr = 0x82294FE0;
	sub_82288428(ctx, base);
	// lwz r11,-22296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22296);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82294ff4
	goto loc_82294FF4;
loc_82294FEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82294FF4:
	// bl 0x82170938
	ctx.lr = 0x82294FF8;
	sub_82170938(ctx, base);
	// lwz r11,-22296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22296);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295004;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22296);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295044
	if (cr6.eq) goto loc_82295044;
	// bl 0x82170ba8
	ctx.lr = 0x82295024;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22296);
	// bne cr6,0x82295044
	if (!cr6.eq) goto loc_82295044;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295040;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22296);
loc_82295044:
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

__attribute__((alias("__imp__sub_8229505C"))) PPC_WEAK_FUNC(sub_8229505C);
PPC_FUNC_IMPL(__imp__sub_8229505C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82295060"))) PPC_WEAK_FUNC(sub_82295060);
PPC_FUNC_IMPL(__imp__sub_82295060) {
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
	// lwz r3,-22288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295184
	if (!cr6.eq) goto loc_82295184;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295090;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295104
	if (cr6.eq) goto loc_82295104;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-1032
	ctx.r7.s64 = ctx.r10.s64 + -1032;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-31504
	ctx.r11.s64 = ctx.r11.s64 + -31504;
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
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82295100;
	sub_822ED768(ctx, base);
	// b 0x82295108
	goto loc_82295108;
loc_82295104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82295108:
	// stw r3,-22288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22288, ctx.r3.u32);
	// bl 0x822952e0
	ctx.lr = 0x82295110;
	sub_822952E0(ctx, base);
	// lwz r11,-22288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22288);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229512c
	if (cr6.eq) goto loc_8229512C;
	// bl 0x822952e0
	ctx.lr = 0x82295120;
	sub_822952E0(ctx, base);
	// lwz r11,-22288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22288);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82295134
	goto loc_82295134;
loc_8229512C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82295134:
	// bl 0x82170938
	ctx.lr = 0x82295138;
	sub_82170938(ctx, base);
	// lwz r11,-22288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22288);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295144;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22288);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295184
	if (cr6.eq) goto loc_82295184;
	// bl 0x82170ba8
	ctx.lr = 0x82295164;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22288);
	// bne cr6,0x82295184
	if (!cr6.eq) goto loc_82295184;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22288);
loc_82295184:
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

__attribute__((alias("__imp__sub_8229519C"))) PPC_WEAK_FUNC(sub_8229519C);
PPC_FUNC_IMPL(__imp__sub_8229519C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822951A0"))) PPC_WEAK_FUNC(sub_822951A0);
PPC_FUNC_IMPL(__imp__sub_822951A0) {
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
	// lwz r3,-22300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22300);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822952c4
	if (!cr6.eq) goto loc_822952C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822951D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295244
	if (cr6.eq) goto loc_82295244;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-656
	ctx.r7.s64 = ctx.r10.s64 + -656;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-31688
	ctx.r11.s64 = ctx.r11.s64 + -31688;
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
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82295240;
	sub_822ED768(ctx, base);
	// b 0x82295248
	goto loc_82295248;
loc_82295244:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82295248:
	// stw r3,-22300(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22300, ctx.r3.u32);
	// bl 0x82288428
	ctx.lr = 0x82295250;
	sub_82288428(ctx, base);
	// lwz r11,-22300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22300);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229526c
	if (cr6.eq) goto loc_8229526C;
	// bl 0x82288428
	ctx.lr = 0x82295260;
	sub_82288428(ctx, base);
	// lwz r11,-22300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22300);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82295274
	goto loc_82295274;
loc_8229526C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82295274:
	// bl 0x82170938
	ctx.lr = 0x82295278;
	sub_82170938(ctx, base);
	// lwz r11,-22300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22300);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295284;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22300);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822952c4
	if (cr6.eq) goto loc_822952C4;
	// bl 0x82170ba8
	ctx.lr = 0x822952A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22300);
	// bne cr6,0x822952c4
	if (!cr6.eq) goto loc_822952C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822952C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22300);
loc_822952C4:
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

__attribute__((alias("__imp__sub_822952DC"))) PPC_WEAK_FUNC(sub_822952DC);
PPC_FUNC_IMPL(__imp__sub_822952DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822952E0"))) PPC_WEAK_FUNC(sub_822952E0);
PPC_FUNC_IMPL(__imp__sub_822952E0) {
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
	// lwz r3,-22304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295404
	if (!cr6.eq) goto loc_82295404;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295310;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295384
	if (cr6.eq) goto loc_82295384;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-488
	ctx.r7.s64 = ctx.r10.s64 + -488;
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-31748
	ctx.r11.s64 = ctx.r11.s64 + -31748;
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
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82295380;
	sub_822ED768(ctx, base);
	// b 0x82295388
	goto loc_82295388;
loc_82295384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82295388:
	// stw r3,-22304(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22304, ctx.r3.u32);
	// bl 0x82288428
	ctx.lr = 0x82295390;
	sub_82288428(ctx, base);
	// lwz r11,-22304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22304);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822953ac
	if (cr6.eq) goto loc_822953AC;
	// bl 0x82288428
	ctx.lr = 0x822953A0;
	sub_82288428(ctx, base);
	// lwz r11,-22304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22304);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822953b4
	goto loc_822953B4;
loc_822953AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822953B4:
	// bl 0x82170938
	ctx.lr = 0x822953B8;
	sub_82170938(ctx, base);
	// lwz r11,-22304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22304);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822953C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22304);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295404
	if (cr6.eq) goto loc_82295404;
	// bl 0x82170ba8
	ctx.lr = 0x822953E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22304);
	// bne cr6,0x82295404
	if (!cr6.eq) goto loc_82295404;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295400;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22304);
loc_82295404:
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

__attribute__((alias("__imp__sub_8229541C"))) PPC_WEAK_FUNC(sub_8229541C);
PPC_FUNC_IMPL(__imp__sub_8229541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82295420"))) PPC_WEAK_FUNC(sub_82295420);
PPC_FUNC_IMPL(__imp__sub_82295420) {
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
	// lwz r3,31892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31892);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295544
	if (!cr6.eq) goto loc_82295544;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295450;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822954c4
	if (cr6.eq) goto loc_822954C4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,30400
	ctx.r7.s64 = ctx.r10.s64 + 30400;
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
	// addi r11,r11,-15456
	ctx.r11.s64 = ctx.r11.s64 + -15456;
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
	ctx.lr = 0x822954C0;
	sub_822ED768(ctx, base);
	// b 0x822954c8
	goto loc_822954C8;
loc_822954C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822954C8:
	// stw r3,31892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31892, ctx.r3.u32);
	// bl 0x822956a0
	ctx.lr = 0x822954D0;
	sub_822956A0(ctx, base);
	// lwz r11,31892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31892);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822954ec
	if (cr6.eq) goto loc_822954EC;
	// bl 0x822956a0
	ctx.lr = 0x822954E0;
	sub_822956A0(ctx, base);
	// lwz r11,31892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31892);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822954f4
	goto loc_822954F4;
loc_822954EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822954F4:
	// bl 0x82170938
	ctx.lr = 0x822954F8;
	sub_82170938(ctx, base);
	// lwz r11,31892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31892);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295504;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31892);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295544
	if (cr6.eq) goto loc_82295544;
	// bl 0x82170ba8
	ctx.lr = 0x82295524;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31892);
	// bne cr6,0x82295544
	if (!cr6.eq) goto loc_82295544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31892);
loc_82295544:
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

__attribute__((alias("__imp__sub_8229555C"))) PPC_WEAK_FUNC(sub_8229555C);
PPC_FUNC_IMPL(__imp__sub_8229555C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82295560"))) PPC_WEAK_FUNC(sub_82295560);
PPC_FUNC_IMPL(__imp__sub_82295560) {
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
	// lwz r3,-22308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295684
	if (!cr6.eq) goto loc_82295684;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295590;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295604
	if (cr6.eq) goto loc_82295604;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-20184
	ctx.r7.s64 = ctx.r10.s64 + -20184;
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
	// addi r11,r11,30108
	ctx.r11.s64 = ctx.r11.s64 + 30108;
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
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82295600;
	sub_822ED768(ctx, base);
	// b 0x82295608
	goto loc_82295608;
loc_82295604:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82295608:
	// stw r3,-22308(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22308, ctx.r3.u32);
	// bl 0x82290ce0
	ctx.lr = 0x82295610;
	sub_82290CE0(ctx, base);
	// lwz r11,-22308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22308);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229562c
	if (cr6.eq) goto loc_8229562C;
	// bl 0x82290ce0
	ctx.lr = 0x82295620;
	sub_82290CE0(ctx, base);
	// lwz r11,-22308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22308);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82295634
	goto loc_82295634;
loc_8229562C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82295634:
	// bl 0x82170938
	ctx.lr = 0x82295638;
	sub_82170938(ctx, base);
	// lwz r11,-22308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22308);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295644;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22308);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295684
	if (cr6.eq) goto loc_82295684;
	// bl 0x82170ba8
	ctx.lr = 0x82295664;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22308);
	// bne cr6,0x82295684
	if (!cr6.eq) goto loc_82295684;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22308);
loc_82295684:
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

__attribute__((alias("__imp__sub_8229569C"))) PPC_WEAK_FUNC(sub_8229569C);
PPC_FUNC_IMPL(__imp__sub_8229569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822956A0"))) PPC_WEAK_FUNC(sub_822956A0);
PPC_FUNC_IMPL(__imp__sub_822956A0) {
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
	// lwz r3,31888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31888);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822957c4
	if (!cr6.eq) goto loc_822957C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822956D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295744
	if (cr6.eq) goto loc_82295744;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,30768
	ctx.r7.s64 = ctx.r10.s64 + 30768;
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
	// addi r11,r11,-15492
	ctx.r11.s64 = ctx.r11.s64 + -15492;
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
	ctx.lr = 0x82295740;
	sub_822ED768(ctx, base);
	// b 0x82295748
	goto loc_82295748;
loc_82295744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82295748:
	// stw r3,31888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31888, ctx.r3.u32);
	// bl 0x82290e20
	ctx.lr = 0x82295750;
	sub_82290E20(ctx, base);
	// lwz r11,31888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31888);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229576c
	if (cr6.eq) goto loc_8229576C;
	// bl 0x82290e20
	ctx.lr = 0x82295760;
	sub_82290E20(ctx, base);
	// lwz r11,31888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31888);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82295774
	goto loc_82295774;
loc_8229576C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82295774:
	// bl 0x82170938
	ctx.lr = 0x82295778;
	sub_82170938(ctx, base);
	// lwz r11,31888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31888);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295784;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31888);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822957c4
	if (cr6.eq) goto loc_822957C4;
	// bl 0x82170ba8
	ctx.lr = 0x822957A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31888);
	// bne cr6,0x822957c4
	if (!cr6.eq) goto loc_822957C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822957C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31888);
loc_822957C4:
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

__attribute__((alias("__imp__sub_822957DC"))) PPC_WEAK_FUNC(sub_822957DC);
PPC_FUNC_IMPL(__imp__sub_822957DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822957E0"))) PPC_WEAK_FUNC(sub_822957E0);
PPC_FUNC_IMPL(__imp__sub_822957E0) {
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
	// lwz r3,32124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295904
	if (!cr6.eq) goto loc_82295904;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295810;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295884
	if (cr6.eq) goto loc_82295884;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22288
	ctx.r7.s64 = ctx.r10.s64 + 22288;
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
	// addi r11,r11,-13756
	ctx.r11.s64 = ctx.r11.s64 + -13756;
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
	// li r5,532
	ctx.r5.s64 = 532;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82295880;
	sub_822ED768(ctx, base);
	// b 0x82295888
	goto loc_82295888;
loc_82295884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82295888:
	// stw r3,32124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32124, ctx.r3.u32);
	// bl 0x821bf4c0
	ctx.lr = 0x82295890;
	sub_821BF4C0(ctx, base);
	// lwz r11,32124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32124);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822958ac
	if (cr6.eq) goto loc_822958AC;
	// bl 0x821bf4c0
	ctx.lr = 0x822958A0;
	sub_821BF4C0(ctx, base);
	// lwz r11,32124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32124);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822958b4
	goto loc_822958B4;
loc_822958AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822958B4:
	// bl 0x82170938
	ctx.lr = 0x822958B8;
	sub_82170938(ctx, base);
	// lwz r11,32124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32124);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822958C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32124);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295904
	if (cr6.eq) goto loc_82295904;
	// bl 0x82170ba8
	ctx.lr = 0x822958E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32124);
	// bne cr6,0x82295904
	if (!cr6.eq) goto loc_82295904;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32124);
loc_82295904:
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

__attribute__((alias("__imp__sub_8229591C"))) PPC_WEAK_FUNC(sub_8229591C);
PPC_FUNC_IMPL(__imp__sub_8229591C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82295920"))) PPC_WEAK_FUNC(sub_82295920);
PPC_FUNC_IMPL(__imp__sub_82295920) {
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
	// lwz r3,-11964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11964);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295a44
	if (!cr6.eq) goto loc_82295A44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295950;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822959c4
	if (cr6.eq) goto loc_822959C4;
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,2892
	ctx.r11.s64 = ctx.r11.s64 + 2892;
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
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822959C0;
	sub_822ED768(ctx, base);
	// b 0x822959c8
	goto loc_822959C8;
loc_822959C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822959C8:
	// stw r3,-11964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11964, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x822959D0;
	sub_82170938(ctx, base);
	// lwz r11,-11964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11964);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822959ec
	if (cr6.eq) goto loc_822959EC;
	// bl 0x82170938
	ctx.lr = 0x822959E0;
	sub_82170938(ctx, base);
	// lwz r11,-11964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11964);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822959f4
	goto loc_822959F4;
loc_822959EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822959F4:
	// bl 0x82170938
	ctx.lr = 0x822959F8;
	sub_82170938(ctx, base);
	// lwz r11,-11964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11964);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295A04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11964);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295a44
	if (cr6.eq) goto loc_82295A44;
	// bl 0x82170ba8
	ctx.lr = 0x82295A24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-11964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11964);
	// bne cr6,0x82295a44
	if (!cr6.eq) goto loc_82295A44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295A40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-11964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11964);
loc_82295A44:
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

__attribute__((alias("__imp__sub_82295A5C"))) PPC_WEAK_FUNC(sub_82295A5C);
PPC_FUNC_IMPL(__imp__sub_82295A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82295A60"))) PPC_WEAK_FUNC(sub_82295A60);
PPC_FUNC_IMPL(__imp__sub_82295A60) {
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
	// lwz r3,-24056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295b84
	if (!cr6.eq) goto loc_82295B84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295A90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295b04
	if (cr6.eq) goto loc_82295B04;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10904
	ctx.r7.s64 = ctx.r10.s64 + 10904;
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
	// addi r11,r11,-17420
	ctx.r11.s64 = ctx.r11.s64 + -17420;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,624
	ctx.r5.s64 = 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82295B00;
	sub_822ED768(ctx, base);
	// b 0x82295b08
	goto loc_82295B08;
loc_82295B04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82295B08:
	// stw r3,-24056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24056, ctx.r3.u32);
	// bl 0x821a72f0
	ctx.lr = 0x82295B10;
	sub_821A72F0(ctx, base);
	// lwz r11,-24056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82295b2c
	if (cr6.eq) goto loc_82295B2C;
	// bl 0x821a72f0
	ctx.lr = 0x82295B20;
	sub_821A72F0(ctx, base);
	// lwz r11,-24056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82295b34
	goto loc_82295B34;
loc_82295B2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82295B34:
	// bl 0x82170938
	ctx.lr = 0x82295B38;
	sub_82170938(ctx, base);
	// lwz r11,-24056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295B44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295b84
	if (cr6.eq) goto loc_82295B84;
	// bl 0x82170ba8
	ctx.lr = 0x82295B64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
	// bne cr6,0x82295b84
	if (!cr6.eq) goto loc_82295B84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295B80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24056);
loc_82295B84:
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

__attribute__((alias("__imp__sub_82295B9C"))) PPC_WEAK_FUNC(sub_82295B9C);
PPC_FUNC_IMPL(__imp__sub_82295B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82295BA0"))) PPC_WEAK_FUNC(sub_82295BA0);
PPC_FUNC_IMPL(__imp__sub_82295BA0) {
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
	// lwz r3,-22312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295cc4
	if (!cr6.eq) goto loc_82295CC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295BD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295c44
	if (cr6.eq) goto loc_82295C44;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,17888
	ctx.r7.s64 = ctx.r10.s64 + 17888;
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
	// addi r11,r11,29676
	ctx.r11.s64 = ctx.r11.s64 + 29676;
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
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82295C40;
	sub_822ED768(ctx, base);
	// b 0x82295c48
	goto loc_82295C48;
loc_82295C44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82295C48:
	// stw r3,-22312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22312, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82295C50;
	sub_82170938(ctx, base);
	// lwz r11,-22312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22312);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82295c6c
	if (cr6.eq) goto loc_82295C6C;
	// bl 0x82170938
	ctx.lr = 0x82295C60;
	sub_82170938(ctx, base);
	// lwz r11,-22312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22312);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82295c74
	goto loc_82295C74;
loc_82295C6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82295C74:
	// bl 0x82170938
	ctx.lr = 0x82295C78;
	sub_82170938(ctx, base);
	// lwz r11,-22312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22312);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295C84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22312);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295cc4
	if (cr6.eq) goto loc_82295CC4;
	// bl 0x82170ba8
	ctx.lr = 0x82295CA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22312);
	// bne cr6,0x82295cc4
	if (!cr6.eq) goto loc_82295CC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295CC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22312);
loc_82295CC4:
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

__attribute__((alias("__imp__sub_82295CDC"))) PPC_WEAK_FUNC(sub_82295CDC);
PPC_FUNC_IMPL(__imp__sub_82295CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82295CE0"))) PPC_WEAK_FUNC(sub_82295CE0);
PPC_FUNC_IMPL(__imp__sub_82295CE0) {
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
	// lwz r3,31980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31980);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295e04
	if (!cr6.eq) goto loc_82295E04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295D10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295d84
	if (cr6.eq) goto loc_82295D84;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,26424
	ctx.r7.s64 = ctx.r10.s64 + 26424;
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
	// addi r11,r11,-14768
	ctx.r11.s64 = ctx.r11.s64 + -14768;
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
	ctx.lr = 0x82295D80;
	sub_822ED768(ctx, base);
	// b 0x82295d88
	goto loc_82295D88;
loc_82295D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82295D88:
	// stw r3,31980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31980, ctx.r3.u32);
	// bl 0x82292ae0
	ctx.lr = 0x82295D90;
	sub_82292AE0(ctx, base);
	// lwz r11,31980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31980);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82295dac
	if (cr6.eq) goto loc_82295DAC;
	// bl 0x82292ae0
	ctx.lr = 0x82295DA0;
	sub_82292AE0(ctx, base);
	// lwz r11,31980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31980);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82295db4
	goto loc_82295DB4;
loc_82295DAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82295DB4:
	// bl 0x82170938
	ctx.lr = 0x82295DB8;
	sub_82170938(ctx, base);
	// lwz r11,31980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31980);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295DC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31980);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295e04
	if (cr6.eq) goto loc_82295E04;
	// bl 0x82170ba8
	ctx.lr = 0x82295DE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31980);
	// bne cr6,0x82295e04
	if (!cr6.eq) goto loc_82295E04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295E00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31980);
loc_82295E04:
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

__attribute__((alias("__imp__sub_82295E1C"))) PPC_WEAK_FUNC(sub_82295E1C);
PPC_FUNC_IMPL(__imp__sub_82295E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82295E20"))) PPC_WEAK_FUNC(sub_82295E20);
PPC_FUNC_IMPL(__imp__sub_82295E20) {
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
	// lwz r3,-24316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24316);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82295f44
	if (!cr6.eq) goto loc_82295F44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295E50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295ec4
	if (cr6.eq) goto loc_82295EC4;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,488
	ctx.r7.s64 = ctx.r10.s64 + 488;
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
	// addi r11,r11,22160
	ctx.r11.s64 = ctx.r11.s64 + 22160;
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
	// li r5,632
	ctx.r5.s64 = 632;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82295EC0;
	sub_822ED768(ctx, base);
	// b 0x82295ec8
	goto loc_82295EC8;
loc_82295EC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82295EC8:
	// stw r3,-24316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24316, ctx.r3.u32);
	// bl 0x82191fd0
	ctx.lr = 0x82295ED0;
	sub_82191FD0(ctx, base);
	// lwz r11,-24316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24316);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82295eec
	if (cr6.eq) goto loc_82295EEC;
	// bl 0x82191fd0
	ctx.lr = 0x82295EE0;
	sub_82191FD0(ctx, base);
	// lwz r11,-24316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24316);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82295ef4
	goto loc_82295EF4;
loc_82295EEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82295EF4:
	// bl 0x82170938
	ctx.lr = 0x82295EF8;
	sub_82170938(ctx, base);
	// lwz r11,-24316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24316);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82295F04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24316);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295f44
	if (cr6.eq) goto loc_82295F44;
	// bl 0x82170ba8
	ctx.lr = 0x82295F24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24316);
	// bne cr6,0x82295f44
	if (!cr6.eq) goto loc_82295F44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295F40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24316);
loc_82295F44:
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

__attribute__((alias("__imp__sub_82295F5C"))) PPC_WEAK_FUNC(sub_82295F5C);
PPC_FUNC_IMPL(__imp__sub_82295F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82295F60"))) PPC_WEAK_FUNC(sub_82295F60);
PPC_FUNC_IMPL(__imp__sub_82295F60) {
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
	// lwz r3,-24308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296084
	if (!cr6.eq) goto loc_82296084;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82295F90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296004
	if (cr6.eq) goto loc_82296004;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,160
	ctx.r7.s64 = ctx.r10.s64 + 160;
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
	// addi r11,r11,22208
	ctx.r11.s64 = ctx.r11.s64 + 22208;
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
	// li r5,448
	ctx.r5.s64 = 448;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82296000;
	sub_822ED768(ctx, base);
	// b 0x82296008
	goto loc_82296008;
loc_82296004:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296008:
	// stw r3,-24308(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24308, ctx.r3.u32);
	// bl 0x821a7a90
	ctx.lr = 0x82296010;
	sub_821A7A90(ctx, base);
	// lwz r11,-24308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24308);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229602c
	if (cr6.eq) goto loc_8229602C;
	// bl 0x821a7a90
	ctx.lr = 0x82296020;
	sub_821A7A90(ctx, base);
	// lwz r11,-24308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24308);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82296034
	goto loc_82296034;
loc_8229602C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82296034:
	// bl 0x82170938
	ctx.lr = 0x82296038;
	sub_82170938(ctx, base);
	// lwz r11,-24308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24308);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296044;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24308);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296084
	if (cr6.eq) goto loc_82296084;
	// bl 0x82170ba8
	ctx.lr = 0x82296064;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24308);
	// bne cr6,0x82296084
	if (!cr6.eq) goto loc_82296084;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24308);
loc_82296084:
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

__attribute__((alias("__imp__sub_8229609C"))) PPC_WEAK_FUNC(sub_8229609C);
PPC_FUNC_IMPL(__imp__sub_8229609C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822960A0"))) PPC_WEAK_FUNC(sub_822960A0);
PPC_FUNC_IMPL(__imp__sub_822960A0) {
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
	// lwz r3,-22420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22420);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822961c4
	if (!cr6.eq) goto loc_822961C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822960D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296144
	if (cr6.eq) goto loc_82296144;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-776
	ctx.r7.s64 = ctx.r10.s64 + -776;
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
	// addi r11,r11,12224
	ctx.r11.s64 = ctx.r11.s64 + 12224;
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
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82296140;
	sub_822ED768(ctx, base);
	// b 0x82296148
	goto loc_82296148;
loc_82296144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296148:
	// stw r3,-22420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22420, ctx.r3.u32);
	// bl 0x822961e0
	ctx.lr = 0x82296150;
	sub_822961E0(ctx, base);
	// lwz r11,-22420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22420);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229616c
	if (cr6.eq) goto loc_8229616C;
	// bl 0x822961e0
	ctx.lr = 0x82296160;
	sub_822961E0(ctx, base);
	// lwz r11,-22420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22420);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82296174
	goto loc_82296174;
loc_8229616C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82296174:
	// bl 0x82170938
	ctx.lr = 0x82296178;
	sub_82170938(ctx, base);
	// lwz r11,-22420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22420);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296184;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22420);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822961c4
	if (cr6.eq) goto loc_822961C4;
	// bl 0x82170ba8
	ctx.lr = 0x822961A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22420);
	// bne cr6,0x822961c4
	if (!cr6.eq) goto loc_822961C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822961C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22420);
loc_822961C4:
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

__attribute__((alias("__imp__sub_822961DC"))) PPC_WEAK_FUNC(sub_822961DC);
PPC_FUNC_IMPL(__imp__sub_822961DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822961E0"))) PPC_WEAK_FUNC(sub_822961E0);
PPC_FUNC_IMPL(__imp__sub_822961E0) {
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
	// lwz r3,-22424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296304
	if (!cr6.eq) goto loc_82296304;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296210;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296284
	if (cr6.eq) goto loc_82296284;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-632
	ctx.r7.s64 = ctx.r10.s64 + -632;
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
	// addi r11,r11,12200
	ctx.r11.s64 = ctx.r11.s64 + 12200;
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
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82296280;
	sub_822ED768(ctx, base);
	// b 0x82296288
	goto loc_82296288;
loc_82296284:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296288:
	// stw r3,-22424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22424, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82296290;
	sub_82170938(ctx, base);
	// lwz r11,-22424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22424);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822962ac
	if (cr6.eq) goto loc_822962AC;
	// bl 0x82170938
	ctx.lr = 0x822962A0;
	sub_82170938(ctx, base);
	// lwz r11,-22424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22424);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822962b4
	goto loc_822962B4;
loc_822962AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822962B4:
	// bl 0x82170938
	ctx.lr = 0x822962B8;
	sub_82170938(ctx, base);
	// lwz r11,-22424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22424);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822962C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22424);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296304
	if (cr6.eq) goto loc_82296304;
	// bl 0x82170ba8
	ctx.lr = 0x822962E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22424);
	// bne cr6,0x82296304
	if (!cr6.eq) goto loc_82296304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22424);
loc_82296304:
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

__attribute__((alias("__imp__sub_8229631C"))) PPC_WEAK_FUNC(sub_8229631C);
PPC_FUNC_IMPL(__imp__sub_8229631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82296320"))) PPC_WEAK_FUNC(sub_82296320);
PPC_FUNC_IMPL(__imp__sub_82296320) {
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
	// lwz r3,31924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31924);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296444
	if (!cr6.eq) goto loc_82296444;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296350;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822963c4
	if (cr6.eq) goto loc_822963C4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,28752
	ctx.r7.s64 = ctx.r10.s64 + 28752;
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
	// addi r11,r11,-15164
	ctx.r11.s64 = ctx.r11.s64 + -15164;
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
	// li r5,416
	ctx.r5.s64 = 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822963C0;
	sub_822ED768(ctx, base);
	// b 0x822963c8
	goto loc_822963C8;
loc_822963C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822963C8:
	// stw r3,31924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31924, ctx.r3.u32);
	// bl 0x821c1458
	ctx.lr = 0x822963D0;
	sub_821C1458(ctx, base);
	// lwz r11,31924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31924);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822963ec
	if (cr6.eq) goto loc_822963EC;
	// bl 0x821c1458
	ctx.lr = 0x822963E0;
	sub_821C1458(ctx, base);
	// lwz r11,31924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31924);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822963f4
	goto loc_822963F4;
loc_822963EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822963F4:
	// bl 0x82170938
	ctx.lr = 0x822963F8;
	sub_82170938(ctx, base);
	// lwz r11,31924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31924);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296404;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31924);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296444
	if (cr6.eq) goto loc_82296444;
	// bl 0x82170ba8
	ctx.lr = 0x82296424;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31924);
	// bne cr6,0x82296444
	if (!cr6.eq) goto loc_82296444;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296440;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31924);
loc_82296444:
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

__attribute__((alias("__imp__sub_8229645C"))) PPC_WEAK_FUNC(sub_8229645C);
PPC_FUNC_IMPL(__imp__sub_8229645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82296460"))) PPC_WEAK_FUNC(sub_82296460);
PPC_FUNC_IMPL(__imp__sub_82296460) {
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
	// lwz r3,-23224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296588
	if (!cr6.eq) goto loc_82296588;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296490;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296508
	if (cr6.eq) goto loc_82296508;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,19736
	ctx.r7.s64 = ctx.r10.s64 + 19736;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r8,r8,18808
	ctx.r8.s64 = ctx.r8.s64 + 18808;
	// addi r9,r9,18400
	ctx.r9.s64 = ctx.r9.s64 + 18400;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r11,r11,9336
	ctx.r11.s64 = ctx.r11.s64 + 9336;
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
	// ori r6,r6,5
	ctx.r6.u64 = ctx.r6.u64 | 5;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82296504;
	sub_822ED768(ctx, base);
	// b 0x8229650c
	goto loc_8229650C;
loc_82296508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229650C:
	// stw r3,-23224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23224, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82296514;
	sub_82170938(ctx, base);
	// lwz r11,-23224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23224);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82296530
	if (cr6.eq) goto loc_82296530;
	// bl 0x82170938
	ctx.lr = 0x82296524;
	sub_82170938(ctx, base);
	// lwz r11,-23224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23224);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82296538
	goto loc_82296538;
loc_82296530:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82296538:
	// bl 0x82170938
	ctx.lr = 0x8229653C;
	sub_82170938(ctx, base);
	// lwz r11,-23224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23224);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296548;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23224);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296588
	if (cr6.eq) goto loc_82296588;
	// bl 0x82170ba8
	ctx.lr = 0x82296568;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23224);
	// bne cr6,0x82296588
	if (!cr6.eq) goto loc_82296588;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296584;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23224);
loc_82296588:
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

__attribute__((alias("__imp__sub_822965A0"))) PPC_WEAK_FUNC(sub_822965A0);
PPC_FUNC_IMPL(__imp__sub_822965A0) {
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
	// lwz r3,32148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822966c4
	if (!cr6.eq) goto loc_822966C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822965D0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296644
	if (cr6.eq) goto loc_82296644;
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
	// addi r11,r11,-13560
	ctx.r11.s64 = ctx.r11.s64 + -13560;
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
	// li r5,424
	ctx.r5.s64 = 424;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82296640;
	sub_822ED768(ctx, base);
	// b 0x82296648
	goto loc_82296648;
loc_82296644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296648:
	// stw r3,32148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32148, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x82296650;
	sub_821A7638(ctx, base);
	// lwz r11,32148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32148);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229666c
	if (cr6.eq) goto loc_8229666C;
	// bl 0x821a7638
	ctx.lr = 0x82296660;
	sub_821A7638(ctx, base);
	// lwz r11,32148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32148);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82296674
	goto loc_82296674;
loc_8229666C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82296674:
	// bl 0x82170938
	ctx.lr = 0x82296678;
	sub_82170938(ctx, base);
	// lwz r11,32148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32148);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296684;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32148);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822966c4
	if (cr6.eq) goto loc_822966C4;
	// bl 0x82170ba8
	ctx.lr = 0x822966A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32148);
	// bne cr6,0x822966c4
	if (!cr6.eq) goto loc_822966C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822966C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32148);
loc_822966C4:
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

__attribute__((alias("__imp__sub_822966DC"))) PPC_WEAK_FUNC(sub_822966DC);
PPC_FUNC_IMPL(__imp__sub_822966DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822966E0"))) PPC_WEAK_FUNC(sub_822966E0);
PPC_FUNC_IMPL(__imp__sub_822966E0) {
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
	// lwz r3,-24036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24036);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296804
	if (!cr6.eq) goto loc_82296804;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296710;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296784
	if (cr6.eq) goto loc_82296784;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,10152
	ctx.r7.s64 = ctx.r10.s64 + 10152;
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
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,608
	ctx.r5.s64 = 608;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82296780;
	sub_822ED768(ctx, base);
	// b 0x82296788
	goto loc_82296788;
loc_82296784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296788:
	// stw r3,-24036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24036, ctx.r3.u32);
	// bl 0x821a72f0
	ctx.lr = 0x82296790;
	sub_821A72F0(ctx, base);
	// lwz r11,-24036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24036);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822967ac
	if (cr6.eq) goto loc_822967AC;
	// bl 0x821a72f0
	ctx.lr = 0x822967A0;
	sub_821A72F0(ctx, base);
	// lwz r11,-24036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24036);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822967b4
	goto loc_822967B4;
loc_822967AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822967B4:
	// bl 0x82170938
	ctx.lr = 0x822967B8;
	sub_82170938(ctx, base);
	// lwz r11,-24036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24036);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822967C4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-24036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24036);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296804
	if (cr6.eq) goto loc_82296804;
	// bl 0x82170ba8
	ctx.lr = 0x822967E4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-24036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24036);
	// bne cr6,0x82296804
	if (!cr6.eq) goto loc_82296804;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296800;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-24036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24036);
loc_82296804:
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

__attribute__((alias("__imp__sub_8229681C"))) PPC_WEAK_FUNC(sub_8229681C);
PPC_FUNC_IMPL(__imp__sub_8229681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82296820"))) PPC_WEAK_FUNC(sub_82296820);
PPC_FUNC_IMPL(__imp__sub_82296820) {
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
	// lwz r3,-22316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22316);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296944
	if (!cr6.eq) goto loc_82296944;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296850;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822968c4
	if (cr6.eq) goto loc_822968C4;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,17592
	ctx.r7.s64 = ctx.r10.s64 + 17592;
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
	// addi r11,r11,29084
	ctx.r11.s64 = ctx.r11.s64 + 29084;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,688
	ctx.r5.s64 = 688;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822968C0;
	sub_822ED768(ctx, base);
	// b 0x822968c8
	goto loc_822968C8;
loc_822968C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822968C8:
	// stw r3,-22316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22316, ctx.r3.u32);
	// bl 0x821a72f0
	ctx.lr = 0x822968D0;
	sub_821A72F0(ctx, base);
	// lwz r11,-22316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22316);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822968ec
	if (cr6.eq) goto loc_822968EC;
	// bl 0x821a72f0
	ctx.lr = 0x822968E0;
	sub_821A72F0(ctx, base);
	// lwz r11,-22316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22316);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822968f4
	goto loc_822968F4;
loc_822968EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822968F4:
	// bl 0x82170938
	ctx.lr = 0x822968F8;
	sub_82170938(ctx, base);
	// lwz r11,-22316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22316);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296904;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22316);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296944
	if (cr6.eq) goto loc_82296944;
	// bl 0x82170ba8
	ctx.lr = 0x82296924;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22316);
	// bne cr6,0x82296944
	if (!cr6.eq) goto loc_82296944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296940;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22316);
loc_82296944:
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

__attribute__((alias("__imp__sub_8229695C"))) PPC_WEAK_FUNC(sub_8229695C);
PPC_FUNC_IMPL(__imp__sub_8229695C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82296960"))) PPC_WEAK_FUNC(sub_82296960);
PPC_FUNC_IMPL(__imp__sub_82296960) {
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
	// lwz r3,32108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296a84
	if (!cr6.eq) goto loc_82296A84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296990;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296a04
	if (cr6.eq) goto loc_82296A04;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22792
	ctx.r7.s64 = ctx.r10.s64 + 22792;
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
	// addi r11,r11,-13852
	ctx.r11.s64 = ctx.r11.s64 + -13852;
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
	// li r5,452
	ctx.r5.s64 = 452;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82296A00;
	sub_822ED768(ctx, base);
	// b 0x82296a08
	goto loc_82296A08;
loc_82296A04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296A08:
	// stw r3,32108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32108, ctx.r3.u32);
	// bl 0x821a7638
	ctx.lr = 0x82296A10;
	sub_821A7638(ctx, base);
	// lwz r11,32108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32108);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82296a2c
	if (cr6.eq) goto loc_82296A2C;
	// bl 0x821a7638
	ctx.lr = 0x82296A20;
	sub_821A7638(ctx, base);
	// lwz r11,32108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32108);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82296a34
	goto loc_82296A34;
loc_82296A2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82296A34:
	// bl 0x82170938
	ctx.lr = 0x82296A38;
	sub_82170938(ctx, base);
	// lwz r11,32108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32108);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296A44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32108);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296a84
	if (cr6.eq) goto loc_82296A84;
	// bl 0x82170ba8
	ctx.lr = 0x82296A64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32108);
	// bne cr6,0x82296a84
	if (!cr6.eq) goto loc_82296A84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296A80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32108);
loc_82296A84:
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

__attribute__((alias("__imp__sub_82296A9C"))) PPC_WEAK_FUNC(sub_82296A9C);
PPC_FUNC_IMPL(__imp__sub_82296A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82296AA0"))) PPC_WEAK_FUNC(sub_82296AA0);
PPC_FUNC_IMPL(__imp__sub_82296AA0) {
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
	// lwz r3,32176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32176);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296bc4
	if (!cr6.eq) goto loc_82296BC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296AD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296b44
	if (cr6.eq) goto loc_82296B44;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,20264
	ctx.r7.s64 = ctx.r10.s64 + 20264;
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
	// addi r11,r11,-13392
	ctx.r11.s64 = ctx.r11.s64 + -13392;
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
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82296B40;
	sub_822ED768(ctx, base);
	// b 0x82296b48
	goto loc_82296B48;
loc_82296B44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296B48:
	// stw r3,32176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32176, ctx.r3.u32);
	// bl 0x82170938
	ctx.lr = 0x82296B50;
	sub_82170938(ctx, base);
	// lwz r11,32176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32176);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82296b6c
	if (cr6.eq) goto loc_82296B6C;
	// bl 0x82170938
	ctx.lr = 0x82296B60;
	sub_82170938(ctx, base);
	// lwz r11,32176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32176);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82296b74
	goto loc_82296B74;
loc_82296B6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82296B74:
	// bl 0x82170938
	ctx.lr = 0x82296B78;
	sub_82170938(ctx, base);
	// lwz r11,32176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32176);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296B84;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32176);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296bc4
	if (cr6.eq) goto loc_82296BC4;
	// bl 0x82170ba8
	ctx.lr = 0x82296BA4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32176);
	// bne cr6,0x82296bc4
	if (!cr6.eq) goto loc_82296BC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296BC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32176);
loc_82296BC4:
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

__attribute__((alias("__imp__sub_82296BDC"))) PPC_WEAK_FUNC(sub_82296BDC);
PPC_FUNC_IMPL(__imp__sub_82296BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82296BE0"))) PPC_WEAK_FUNC(sub_82296BE0);
PPC_FUNC_IMPL(__imp__sub_82296BE0) {
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
	// lwz r3,-22320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22320);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296d04
	if (!cr6.eq) goto loc_82296D04;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296C10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296c84
	if (cr6.eq) goto loc_82296C84;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,9472
	ctx.r7.s64 = ctx.r10.s64 + 9472;
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
	// addi r11,r11,28468
	ctx.r11.s64 = ctx.r11.s64 + 28468;
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
	ctx.lr = 0x82296C80;
	sub_822ED768(ctx, base);
	// b 0x82296c88
	goto loc_82296C88;
loc_82296C84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296C88:
	// stw r3,-22320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22320, ctx.r3.u32);
	// bl 0x8228dfe0
	ctx.lr = 0x82296C90;
	sub_8228DFE0(ctx, base);
	// lwz r11,-22320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22320);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82296cac
	if (cr6.eq) goto loc_82296CAC;
	// bl 0x8228dfe0
	ctx.lr = 0x82296CA0;
	sub_8228DFE0(ctx, base);
	// lwz r11,-22320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22320);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82296cb4
	goto loc_82296CB4;
loc_82296CAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82296CB4:
	// bl 0x82170938
	ctx.lr = 0x82296CB8;
	sub_82170938(ctx, base);
	// lwz r11,-22320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22320);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296CC4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22320);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296d04
	if (cr6.eq) goto loc_82296D04;
	// bl 0x82170ba8
	ctx.lr = 0x82296CE4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-22320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22320);
	// bne cr6,0x82296d04
	if (!cr6.eq) goto loc_82296D04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296D00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-22320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22320);
loc_82296D04:
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

__attribute__((alias("__imp__sub_82296D1C"))) PPC_WEAK_FUNC(sub_82296D1C);
PPC_FUNC_IMPL(__imp__sub_82296D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82296D20"))) PPC_WEAK_FUNC(sub_82296D20);
PPC_FUNC_IMPL(__imp__sub_82296D20) {
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
	// lwz r3,32136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296e44
	if (!cr6.eq) goto loc_82296E44;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296D50;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296dc4
	if (cr6.eq) goto loc_82296DC4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,22032
	ctx.r7.s64 = ctx.r10.s64 + 22032;
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
	// addi r11,r11,-13636
	ctx.r11.s64 = ctx.r11.s64 + -13636;
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
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82296DC0;
	sub_822ED768(ctx, base);
	// b 0x82296dc8
	goto loc_82296DC8;
loc_82296DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296DC8:
	// stw r3,32136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32136, ctx.r3.u32);
	// bl 0x82289c60
	ctx.lr = 0x82296DD0;
	sub_82289C60(ctx, base);
	// lwz r11,32136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32136);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82296dec
	if (cr6.eq) goto loc_82296DEC;
	// bl 0x82289c60
	ctx.lr = 0x82296DE0;
	sub_82289C60(ctx, base);
	// lwz r11,32136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32136);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82296df4
	goto loc_82296DF4;
loc_82296DEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82296DF4:
	// bl 0x82170938
	ctx.lr = 0x82296DF8;
	sub_82170938(ctx, base);
	// lwz r11,32136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32136);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296E04;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32136);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296e44
	if (cr6.eq) goto loc_82296E44;
	// bl 0x82170ba8
	ctx.lr = 0x82296E24;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32136);
	// bne cr6,0x82296e44
	if (!cr6.eq) goto loc_82296E44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296E40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32136);
loc_82296E44:
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

__attribute__((alias("__imp__sub_82296E5C"))) PPC_WEAK_FUNC(sub_82296E5C);
PPC_FUNC_IMPL(__imp__sub_82296E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82296E60"))) PPC_WEAK_FUNC(sub_82296E60);
PPC_FUNC_IMPL(__imp__sub_82296E60) {
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
	// lwz r3,32140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82296f84
	if (!cr6.eq) goto loc_82296F84;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296E90;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82296f04
	if (cr6.eq) goto loc_82296F04;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,21728
	ctx.r7.s64 = ctx.r10.s64 + 21728;
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
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82296F00;
	sub_822ED768(ctx, base);
	// b 0x82296f08
	goto loc_82296F08;
loc_82296F04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82296F08:
	// stw r3,32140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32140, ctx.r3.u32);
	// bl 0x82291be0
	ctx.lr = 0x82296F10;
	sub_82291BE0(ctx, base);
	// lwz r11,32140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32140);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82296f2c
	if (cr6.eq) goto loc_82296F2C;
	// bl 0x82291be0
	ctx.lr = 0x82296F20;
	sub_82291BE0(ctx, base);
	// lwz r11,32140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32140);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82296f34
	goto loc_82296F34;
loc_82296F2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82296F34:
	// bl 0x82170938
	ctx.lr = 0x82296F38;
	sub_82170938(ctx, base);
	// lwz r11,32140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32140);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82296F44;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32140);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82296f84
	if (cr6.eq) goto loc_82296F84;
	// bl 0x82170ba8
	ctx.lr = 0x82296F64;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32140);
	// bne cr6,0x82296f84
	if (!cr6.eq) goto loc_82296F84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82296F80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32140);
loc_82296F84:
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

__attribute__((alias("__imp__sub_82296F9C"))) PPC_WEAK_FUNC(sub_82296F9C);
PPC_FUNC_IMPL(__imp__sub_82296F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82296FA0"))) PPC_WEAK_FUNC(sub_82296FA0);
PPC_FUNC_IMPL(__imp__sub_82296FA0) {
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
	// lwz r3,31708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31708);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822970c4
	if (!cr6.eq) goto loc_822970C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82296FD0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82297044
	if (cr6.eq) goto loc_82297044;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-31216
	ctx.r7.s64 = ctx.r10.s64 + -31216;
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
	// addi r11,r11,-32184
	ctx.r11.s64 = ctx.r11.s64 + -32184;
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
	// li r6,268
	ctx.r6.s64 = 268;
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82297040;
	sub_822ED768(ctx, base);
	// b 0x82297048
	goto loc_82297048;
loc_82297044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82297048:
	// stw r3,31708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31708, ctx.r3.u32);
	// bl 0x822890c0
	ctx.lr = 0x82297050;
	sub_822890C0(ctx, base);
	// lwz r11,31708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31708);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229706c
	if (cr6.eq) goto loc_8229706C;
	// bl 0x822890c0
	ctx.lr = 0x82297060;
	sub_822890C0(ctx, base);
	// lwz r11,31708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31708);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82297074
	goto loc_82297074;
loc_8229706C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82297074:
	// bl 0x82170938
	ctx.lr = 0x82297078;
	sub_82170938(ctx, base);
	// lwz r11,31708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31708);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82297084;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,31708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31708);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822970c4
	if (cr6.eq) goto loc_822970C4;
	// bl 0x82170ba8
	ctx.lr = 0x822970A4;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,31708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31708);
	// bne cr6,0x822970c4
	if (!cr6.eq) goto loc_822970C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822970C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,31708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31708);
loc_822970C4:
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

__attribute__((alias("__imp__sub_822970DC"))) PPC_WEAK_FUNC(sub_822970DC);
PPC_FUNC_IMPL(__imp__sub_822970DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

