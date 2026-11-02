#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8220B5A4"))) PPC_WEAK_FUNC(sub_8220B5A4);
PPC_FUNC_IMPL(__imp__sub_8220B5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B5A8"))) PPC_WEAK_FUNC(sub_8220B5A8);
PPC_FUNC_IMPL(__imp__sub_8220B5A8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29680
	ctx.r11.s64 = ctx.r11.s64 + -29680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220B5D4;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220b540
	ctx.lr = 0x8220B5DC;
	sub_8220B540(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b5f4
	if (cr6.eq) goto loc_8220B5F4;
	// bl 0x82170268
	ctx.lr = 0x8220B5F0;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220B5F4:
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

__attribute__((alias("__imp__sub_8220B60C"))) PPC_WEAK_FUNC(sub_8220B60C);
PPC_FUNC_IMPL(__imp__sub_8220B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B610"))) PPC_WEAK_FUNC(sub_8220B610);
PPC_FUNC_IMPL(__imp__sub_8220B610) {
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
	// beq cr6,0x8220b64c
	if (cr6.eq) goto loc_8220B64C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x8220B640;
	sub_82170B98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-29888
	ctx.r11.s64 = ctx.r11.s64 + -29888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220B64C:
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

__attribute__((alias("__imp__sub_8220B660"))) PPC_WEAK_FUNC(sub_8220B660);
PPC_FUNC_IMPL(__imp__sub_8220B660) {
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
	// beq cr6,0x8220b69c
	if (cr6.eq) goto loc_8220B69C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x8220B690;
	sub_82170B98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-30512
	ctx.r11.s64 = ctx.r11.s64 + -30512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220B69C:
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

__attribute__((alias("__imp__sub_8220B6B0"))) PPC_WEAK_FUNC(sub_8220B6B0);
PPC_FUNC_IMPL(__imp__sub_8220B6B0) {
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
	// bl 0x8220b700
	ctx.lr = 0x8220B6D0;
	sub_8220B700(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b6e8
	if (cr6.eq) goto loc_8220B6E8;
	// bl 0x82170268
	ctx.lr = 0x8220B6E4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220B6E8:
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

__attribute__((alias("__imp__sub_8220B700"))) PPC_WEAK_FUNC(sub_8220B700);
PPC_FUNC_IMPL(__imp__sub_8220B700) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30512
	ctx.r11.s64 = ctx.r11.s64 + -30512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220B724;
	sub_822A89B8(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82528098
	ctx.lr = 0x8220B72C;
	sub_82528098(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220B740;
	sub_822A89B8(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x821e7e88
	ctx.lr = 0x8220B748;
	sub_821E7E88(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x821c7120
	ctx.lr = 0x8220B750;
	sub_821C7120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x8220B758;
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

__attribute__((alias("__imp__sub_8220B76C"))) PPC_WEAK_FUNC(sub_8220B76C);
PPC_FUNC_IMPL(__imp__sub_8220B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B770"))) PPC_WEAK_FUNC(sub_8220B770);
PPC_FUNC_IMPL(__imp__sub_8220B770) {
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
	// beq cr6,0x8220b7ac
	if (cr6.eq) goto loc_8220B7AC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x8220B7A0;
	sub_82170B98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-30304
	ctx.r11.s64 = ctx.r11.s64 + -30304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220B7AC:
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

__attribute__((alias("__imp__sub_8220B7C0"))) PPC_WEAK_FUNC(sub_8220B7C0);
PPC_FUNC_IMPL(__imp__sub_8220B7C0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30304
	ctx.r11.s64 = ctx.r11.s64 + -30304;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220B7EC;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220b700
	ctx.lr = 0x8220B7F4;
	sub_8220B700(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b80c
	if (cr6.eq) goto loc_8220B80C;
	// bl 0x82170268
	ctx.lr = 0x8220B808;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220B80C:
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

__attribute__((alias("__imp__sub_8220B824"))) PPC_WEAK_FUNC(sub_8220B824);
PPC_FUNC_IMPL(__imp__sub_8220B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B828"))) PPC_WEAK_FUNC(sub_8220B828);
PPC_FUNC_IMPL(__imp__sub_8220B828) {
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
	// beq cr6,0x8220b864
	if (cr6.eq) goto loc_8220B864;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x8220B858;
	sub_82170B98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-31344
	ctx.r11.s64 = ctx.r11.s64 + -31344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220B864:
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

__attribute__((alias("__imp__sub_8220B878"))) PPC_WEAK_FUNC(sub_8220B878);
PPC_FUNC_IMPL(__imp__sub_8220B878) {
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
	// bl 0x8220b8c8
	ctx.lr = 0x8220B898;
	sub_8220B8C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b8b0
	if (cr6.eq) goto loc_8220B8B0;
	// bl 0x82170268
	ctx.lr = 0x8220B8AC;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220B8B0:
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

__attribute__((alias("__imp__sub_8220B8C8"))) PPC_WEAK_FUNC(sub_8220B8C8);
PPC_FUNC_IMPL(__imp__sub_8220B8C8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31344
	ctx.r11.s64 = ctx.r11.s64 + -31344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220B8EC;
	sub_822A89B8(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82528098
	ctx.lr = 0x8220B8F4;
	sub_82528098(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220B908;
	sub_822A89B8(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x821e7e88
	ctx.lr = 0x8220B910;
	sub_821E7E88(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x821c7120
	ctx.lr = 0x8220B918;
	sub_821C7120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x8220B920;
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

__attribute__((alias("__imp__sub_8220B934"))) PPC_WEAK_FUNC(sub_8220B934);
PPC_FUNC_IMPL(__imp__sub_8220B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B938"))) PPC_WEAK_FUNC(sub_8220B938);
PPC_FUNC_IMPL(__imp__sub_8220B938) {
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
	// beq cr6,0x8220b974
	if (cr6.eq) goto loc_8220B974;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x8220B968;
	sub_82170B98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-31552
	ctx.r11.s64 = ctx.r11.s64 + -31552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220B974:
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

__attribute__((alias("__imp__sub_8220B988"))) PPC_WEAK_FUNC(sub_8220B988);
PPC_FUNC_IMPL(__imp__sub_8220B988) {
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
	// bl 0x8220b9d8
	ctx.lr = 0x8220B9A8;
	sub_8220B9D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b9c0
	if (cr6.eq) goto loc_8220B9C0;
	// bl 0x82170268
	ctx.lr = 0x8220B9BC;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220B9C0:
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

__attribute__((alias("__imp__sub_8220B9D8"))) PPC_WEAK_FUNC(sub_8220B9D8);
PPC_FUNC_IMPL(__imp__sub_8220B9D8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31552
	ctx.r11.s64 = ctx.r11.s64 + -31552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220B9FC;
	sub_822A89B8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220BA10;
	sub_822A89B8(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x821e7e88
	ctx.lr = 0x8220BA18;
	sub_821E7E88(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x821c7120
	ctx.lr = 0x8220BA20;
	sub_821C7120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x8220BA28;
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

__attribute__((alias("__imp__sub_8220BA3C"))) PPC_WEAK_FUNC(sub_8220BA3C);
PPC_FUNC_IMPL(__imp__sub_8220BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BA40"))) PPC_WEAK_FUNC(sub_8220BA40);
PPC_FUNC_IMPL(__imp__sub_8220BA40) {
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
	// beq cr6,0x8220ba7c
	if (cr6.eq) goto loc_8220BA7C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x8220BA70;
	sub_82170B98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-30928
	ctx.r11.s64 = ctx.r11.s64 + -30928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220BA7C:
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

__attribute__((alias("__imp__sub_8220BA90"))) PPC_WEAK_FUNC(sub_8220BA90);
PPC_FUNC_IMPL(__imp__sub_8220BA90) {
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
	// bl 0x8220bae0
	ctx.lr = 0x8220BAB0;
	sub_8220BAE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220bac8
	if (cr6.eq) goto loc_8220BAC8;
	// bl 0x82170268
	ctx.lr = 0x8220BAC4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220BAC8:
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

__attribute__((alias("__imp__sub_8220BAE0"))) PPC_WEAK_FUNC(sub_8220BAE0);
PPC_FUNC_IMPL(__imp__sub_8220BAE0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30928
	ctx.r11.s64 = ctx.r11.s64 + -30928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220BB04;
	sub_822A89B8(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x82288288
	ctx.lr = 0x8220BB0C;
	sub_82288288(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220BB20;
	sub_822A89B8(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x821e7e88
	ctx.lr = 0x8220BB28;
	sub_821E7E88(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x821c7120
	ctx.lr = 0x8220BB30;
	sub_821C7120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x8220BB38;
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

__attribute__((alias("__imp__sub_8220BB4C"))) PPC_WEAK_FUNC(sub_8220BB4C);
PPC_FUNC_IMPL(__imp__sub_8220BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BB50"))) PPC_WEAK_FUNC(sub_8220BB50);
PPC_FUNC_IMPL(__imp__sub_8220BB50) {
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
	// beq cr6,0x8220bb8c
	if (cr6.eq) goto loc_8220BB8C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x8220BB80;
	sub_82170B98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-30096
	ctx.r11.s64 = ctx.r11.s64 + -30096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220BB8C:
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

__attribute__((alias("__imp__sub_8220BBA0"))) PPC_WEAK_FUNC(sub_8220BBA0);
PPC_FUNC_IMPL(__imp__sub_8220BBA0) {
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
	// bl 0x8220bbf0
	ctx.lr = 0x8220BBC0;
	sub_8220BBF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220bbd8
	if (cr6.eq) goto loc_8220BBD8;
	// bl 0x82170268
	ctx.lr = 0x8220BBD4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220BBD8:
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

__attribute__((alias("__imp__sub_8220BBF0"))) PPC_WEAK_FUNC(sub_8220BBF0);
PPC_FUNC_IMPL(__imp__sub_8220BBF0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30096
	ctx.r11.s64 = ctx.r11.s64 + -30096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220BC14;
	sub_822A89B8(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82528098
	ctx.lr = 0x8220BC1C;
	sub_82528098(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82528098
	ctx.lr = 0x8220BC24;
	sub_82528098(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82528098
	ctx.lr = 0x8220BC2C;
	sub_82528098(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x82528098
	ctx.lr = 0x8220BC34;
	sub_82528098(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82528098
	ctx.lr = 0x8220BC3C;
	sub_82528098(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220BC50;
	sub_822A89B8(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x821e7e88
	ctx.lr = 0x8220BC58;
	sub_821E7E88(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x821c7120
	ctx.lr = 0x8220BC60;
	sub_821C7120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x8220BC68;
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

__attribute__((alias("__imp__sub_8220BC7C"))) PPC_WEAK_FUNC(sub_8220BC7C);
PPC_FUNC_IMPL(__imp__sub_8220BC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BC80"))) PPC_WEAK_FUNC(sub_8220BC80);
PPC_FUNC_IMPL(__imp__sub_8220BC80) {
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
	// beq cr6,0x8220bcbc
	if (cr6.eq) goto loc_8220BCBC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x8220BCB0;
	sub_82170B98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-30720
	ctx.r11.s64 = ctx.r11.s64 + -30720;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220BCBC:
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

__attribute__((alias("__imp__sub_8220BCD0"))) PPC_WEAK_FUNC(sub_8220BCD0);
PPC_FUNC_IMPL(__imp__sub_8220BCD0) {
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
	// bl 0x8220bd20
	ctx.lr = 0x8220BCF0;
	sub_8220BD20(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220bd08
	if (cr6.eq) goto loc_8220BD08;
	// bl 0x82170268
	ctx.lr = 0x8220BD04;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220BD08:
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

__attribute__((alias("__imp__sub_8220BD20"))) PPC_WEAK_FUNC(sub_8220BD20);
PPC_FUNC_IMPL(__imp__sub_8220BD20) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30720
	ctx.r11.s64 = ctx.r11.s64 + -30720;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220BD44;
	sub_822A89B8(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82528098
	ctx.lr = 0x8220BD4C;
	sub_82528098(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x82528098
	ctx.lr = 0x8220BD54;
	sub_82528098(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82528098
	ctx.lr = 0x8220BD5C;
	sub_82528098(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220BD70;
	sub_822A89B8(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x821e7e88
	ctx.lr = 0x8220BD78;
	sub_821E7E88(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x821c7120
	ctx.lr = 0x8220BD80;
	sub_821C7120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x8220BD88;
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

__attribute__((alias("__imp__sub_8220BD9C"))) PPC_WEAK_FUNC(sub_8220BD9C);
PPC_FUNC_IMPL(__imp__sub_8220BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BDA0"))) PPC_WEAK_FUNC(sub_8220BDA0);
PPC_FUNC_IMPL(__imp__sub_8220BDA0) {
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
	// beq cr6,0x8220bddc
	if (cr6.eq) goto loc_8220BDDC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x8220BDD0;
	sub_82170B98(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,32712
	ctx.r11.s64 = ctx.r11.s64 + 32712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220BDDC:
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

__attribute__((alias("__imp__sub_8220BDF0"))) PPC_WEAK_FUNC(sub_8220BDF0);
PPC_FUNC_IMPL(__imp__sub_8220BDF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// addi r10,r10,32504
	ctx.r10.s64 = ctx.r10.s64 + 32504;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82170b98
	sub_82170B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220BE10"))) PPC_WEAK_FUNC(sub_8220BE10);
PPC_FUNC_IMPL(__imp__sub_8220BE10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BE14"))) PPC_WEAK_FUNC(sub_8220BE14);
PPC_FUNC_IMPL(__imp__sub_8220BE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BE18"))) PPC_WEAK_FUNC(sub_8220BE18);
PPC_FUNC_IMPL(__imp__sub_8220BE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x8220BE20;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x8231a588
	ctx.lr = 0x8220BE38;
	sub_8231A588(ctx, base);
	// lwz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d3a0
	if (cr6.eq) goto loc_8220D3A0;
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// lis r31,-32063
	ctx.r31.s64 = -2101280768;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220bec0
	if (cr6.eq) goto loc_8220BEC0;
	// lwz r11,1928(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1928);
	// lwz r10,1928(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1928);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// beq cr6,0x8220c5e0
	if (cr6.eq) goto loc_8220C5E0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220beb8
	if (!cr6.eq) goto loc_8220BEB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220BE90;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220BE98;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29472
	ctx.r5.s64 = ctx.r11.s64 + -29472;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220BEAC;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11504(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11504, ctx.r3.u32);
	// b 0x8220c5d4
	goto loc_8220C5D4;
loc_8220BEB8:
	// lwz r3,11504(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11504);
	// b 0x8220c5d4
	goto loc_8220C5D4;
loc_8220BEC0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,1524(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1524);
	// lwz r29,1524(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1524);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BEE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220bef4
	if (cr6.eq) goto loc_8220BEF4;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220bf04
	goto loc_8220BF04;
loc_8220BEF4:
	// lwz r10,140(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r10.u32);
loc_8220BF04:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220bf68
	if (cr6.eq) goto loc_8220BF68;
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220bf58
	if (!cr6.eq) goto loc_8220BF58;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220BF34;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220BF3C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29424
	ctx.r5.s64 = ctx.r11.s64 + -29424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220BF50;
	sub_822ADCF0(ctx, base);
	// stw r3,11500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11500, ctx.r3.u32);
	// b 0x8220bf5c
	goto loc_8220BF5C;
loc_8220BF58:
	// lwz r3,11500(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11500);
loc_8220BF5C:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220BF68:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,1528(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1528);
	// lwz r29,1528(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1528);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BF88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220bf9c
	if (cr6.eq) goto loc_8220BF9C;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220bfac
	goto loc_8220BFAC;
loc_8220BF9C:
	// lwz r10,140(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r10.u32);
loc_8220BFAC:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220c010
	if (cr6.eq) goto loc_8220C010;
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c000
	if (!cr6.eq) goto loc_8220C000;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220BFDC;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220BFE4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29380
	ctx.r5.s64 = ctx.r11.s64 + -29380;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220BFF8;
	sub_822ADCF0(ctx, base);
	// stw r3,11496(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11496, ctx.r3.u32);
	// b 0x8220c004
	goto loc_8220C004;
loc_8220C000:
	// lwz r3,11496(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11496);
loc_8220C004:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C010:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,1532(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1532);
	// lwz r29,1532(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1532);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C030;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220c044
	if (cr6.eq) goto loc_8220C044;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220c054
	goto loc_8220C054;
loc_8220C044:
	// lwz r10,140(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r10.u32);
loc_8220C054:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220c0b8
	if (cr6.eq) goto loc_8220C0B8;
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c0a8
	if (!cr6.eq) goto loc_8220C0A8;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C084;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C08C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29332
	ctx.r5.s64 = ctx.r11.s64 + -29332;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C0A0;
	sub_822ADCF0(ctx, base);
	// stw r3,11492(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11492, ctx.r3.u32);
	// b 0x8220c0ac
	goto loc_8220C0AC;
loc_8220C0A8:
	// lwz r3,11492(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11492);
loc_8220C0AC:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C0B8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,1536(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1536);
	// lwz r29,1536(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1536);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C0D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220c0ec
	if (cr6.eq) goto loc_8220C0EC;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220c0fc
	goto loc_8220C0FC;
loc_8220C0EC:
	// lwz r10,140(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r10.u32);
loc_8220C0FC:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220c160
	if (cr6.eq) goto loc_8220C160;
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c150
	if (!cr6.eq) goto loc_8220C150;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C12C;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C134;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29288
	ctx.r5.s64 = ctx.r11.s64 + -29288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C148;
	sub_822ADCF0(ctx, base);
	// stw r3,11488(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11488, ctx.r3.u32);
	// b 0x8220c154
	goto loc_8220C154;
loc_8220C150:
	// lwz r3,11488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11488);
loc_8220C154:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C160:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,1540(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1540);
	// lwz r29,1540(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1540);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220c194
	if (cr6.eq) goto loc_8220C194;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220c1a4
	goto loc_8220C1A4;
loc_8220C194:
	// lwz r10,140(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r10.u32);
loc_8220C1A4:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// beq cr6,0x8220c20c
	if (cr6.eq) goto loc_8220C20C;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c1fc
	if (!cr6.eq) goto loc_8220C1FC;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C1D4;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C1DC;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29228
	ctx.r5.s64 = ctx.r11.s64 + -29228;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C1F0;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11484(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11484, ctx.r3.u32);
	// b 0x8220c200
	goto loc_8220C200;
loc_8220C1FC:
	// lwz r3,11484(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11484);
loc_8220C200:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C20C:
	// lbz r10,939(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 939);
	// lbz r9,939(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 939);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220c270
	if (cr6.eq) goto loc_8220C270;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c260
	if (!cr6.eq) goto loc_8220C260;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C238;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C240;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29168
	ctx.r5.s64 = ctx.r11.s64 + -29168;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C254;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11480, ctx.r3.u32);
	// b 0x8220c264
	goto loc_8220C264;
loc_8220C260:
	// lwz r3,11480(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11480);
loc_8220C264:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C270:
	// lbz r10,940(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 940);
	// lbz r9,940(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 940);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220c2d4
	if (cr6.eq) goto loc_8220C2D4;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c2c4
	if (!cr6.eq) goto loc_8220C2C4;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C29C;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C2A4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29148
	ctx.r5.s64 = ctx.r11.s64 + -29148;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C2B8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11476, ctx.r3.u32);
	// b 0x8220c2c8
	goto loc_8220C2C8;
loc_8220C2C4:
	// lwz r3,11476(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11476);
loc_8220C2C8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C2D4:
	// lbz r10,938(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 938);
	// lbz r9,938(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 938);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220c338
	if (cr6.eq) goto loc_8220C338;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c328
	if (!cr6.eq) goto loc_8220C328;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C300;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C308;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29124
	ctx.r5.s64 = ctx.r11.s64 + -29124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C31C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11472, ctx.r3.u32);
	// b 0x8220c32c
	goto loc_8220C32C;
loc_8220C328:
	// lwz r3,11472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11472);
loc_8220C32C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C338:
	// lwz r10,1040(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1040);
	// lwz r9,1040(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1040);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8220c378
	if (!cr6.eq) goto loc_8220C378;
	// lwz r10,1044(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1044);
	// lwz r9,1044(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1044);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8220c378
	if (!cr6.eq) goto loc_8220C378;
	// lwz r10,1048(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1048);
	// lwz r9,1048(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1048);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8220c378
	if (!cr6.eq) goto loc_8220C378;
	// lfs f0,1052(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1052);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1052(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1052);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8220c3cc
	if (cr6.eq) goto loc_8220C3CC;
loc_8220C378:
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c3bc
	if (!cr6.eq) goto loc_8220C3BC;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C394;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C39C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29080
	ctx.r5.s64 = ctx.r11.s64 + -29080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C3B0;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11468, ctx.r3.u32);
	// b 0x8220c3c0
	goto loc_8220C3C0;
loc_8220C3BC:
	// lwz r3,11468(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11468);
loc_8220C3C0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C3CC:
	// lwz r10,1092(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1092);
	// lwz r9,1092(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1092);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c438
	if (cr6.eq) goto loc_8220C438;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c428
	if (!cr6.eq) goto loc_8220C428;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C400;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C408;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29044
	ctx.r5.s64 = ctx.r11.s64 + -29044;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C41C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11464(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11464, ctx.r3.u32);
	// b 0x8220c42c
	goto loc_8220C42C;
loc_8220C428:
	// lwz r3,11464(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11464);
loc_8220C42C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C438:
	// lwz r10,1092(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1092);
	// lwz r9,1092(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1092);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c4a4
	if (cr6.eq) goto loc_8220C4A4;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c494
	if (!cr6.eq) goto loc_8220C494;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C46C;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C474;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29004
	ctx.r5.s64 = ctx.r11.s64 + -29004;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C488;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11460, ctx.r3.u32);
	// b 0x8220c498
	goto loc_8220C498;
loc_8220C494:
	// lwz r3,11460(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11460);
loc_8220C498:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C4A4:
	// lwz r10,1096(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1096);
	// lwz r9,1096(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c510
	if (cr6.eq) goto loc_8220C510;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c500
	if (!cr6.eq) goto loc_8220C500;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C4D8;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C4E0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28976
	ctx.r5.s64 = ctx.r11.s64 + -28976;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C4F4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11456, ctx.r3.u32);
	// b 0x8220c504
	goto loc_8220C504;
loc_8220C500:
	// lwz r3,11456(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
loc_8220C504:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C510:
	// lwz r10,1744(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1744);
	// lwz r9,1744(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1744);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220c574
	if (cr6.eq) goto loc_8220C574;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c564
	if (!cr6.eq) goto loc_8220C564;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C53C;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C544;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28932
	ctx.r5.s64 = ctx.r11.s64 + -28932;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C558;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11452(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11452, ctx.r3.u32);
	// b 0x8220c568
	goto loc_8220C568;
loc_8220C564:
	// lwz r3,11452(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11452);
loc_8220C568:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C574:
	// lwz r10,1092(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1092);
	// lwz r9,1092(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1092);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c5e0
	if (cr6.eq) goto loc_8220C5E0;
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c5d0
	if (!cr6.eq) goto loc_8220C5D0;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C5A8;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C5B0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28884
	ctx.r5.s64 = ctx.r11.s64 + -28884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C5C4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11448(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11448, ctx.r3.u32);
	// b 0x8220c5d4
	goto loc_8220C5D4;
loc_8220C5D0:
	// lwz r3,11448(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11448);
loc_8220C5D4:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C5E0:
	// lwz r10,1092(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1092);
	// lwz r9,1092(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1092);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c64c
	if (cr6.eq) goto loc_8220C64C;
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c63c
	if (!cr6.eq) goto loc_8220C63C;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C614;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C61C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28860
	ctx.r5.s64 = ctx.r11.s64 + -28860;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C630;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11444(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11444, ctx.r3.u32);
	// b 0x8220c640
	goto loc_8220C640;
loc_8220C63C:
	// lwz r3,11444(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11444);
loc_8220C640:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C64C:
	// lwz r10,1092(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1092);
	// lwz r9,1092(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1092);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c6b4
	if (cr6.eq) goto loc_8220C6B4;
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c6a4
	if (!cr6.eq) goto loc_8220C6A4;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C680;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C688;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28832
	ctx.r5.s64 = ctx.r11.s64 + -28832;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C69C;
	sub_822ADCF0(ctx, base);
	// stw r3,11440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11440, ctx.r3.u32);
	// b 0x8220c6a8
	goto loc_8220C6A8;
loc_8220C6A4:
	// lwz r3,11440(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11440);
loc_8220C6A8:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C6B4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,1204(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1204);
	// lwz r29,1204(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1204);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C6D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220c6e8
	if (cr6.eq) goto loc_8220C6E8;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220c6f8
	goto loc_8220C6F8;
loc_8220C6E8:
	// lwz r10,140(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r10.u32);
loc_8220C6F8:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// beq cr6,0x8220c760
	if (cr6.eq) goto loc_8220C760;
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c750
	if (!cr6.eq) goto loc_8220C750;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C728;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C730;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28804
	ctx.r5.s64 = ctx.r11.s64 + -28804;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C744;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11436, ctx.r3.u32);
	// b 0x8220c754
	goto loc_8220C754;
loc_8220C750:
	// lwz r3,11436(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11436);
loc_8220C754:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C760:
	// lbz r10,1452(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1452);
	// lbz r9,1452(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1452);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220c7c4
	if (cr6.eq) goto loc_8220C7C4;
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c7b4
	if (!cr6.eq) goto loc_8220C7B4;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C78C;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C794;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28776
	ctx.r5.s64 = ctx.r11.s64 + -28776;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C7A8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11432(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11432, ctx.r3.u32);
	// b 0x8220c7b8
	goto loc_8220C7B8;
loc_8220C7B4:
	// lwz r3,11432(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11432);
loc_8220C7B8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C7C4:
	// lbz r10,944(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 944);
	// lbz r9,944(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 944);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220c828
	if (cr6.eq) goto loc_8220C828;
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c818
	if (!cr6.eq) goto loc_8220C818;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C7F0;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C7F8;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28728
	ctx.r5.s64 = ctx.r11.s64 + -28728;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C80C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11428, ctx.r3.u32);
	// b 0x8220c81c
	goto loc_8220C81C;
loc_8220C818:
	// lwz r3,11428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11428);
loc_8220C81C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C828:
	// lwz r10,1096(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1096);
	// lwz r9,1096(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c894
	if (cr6.eq) goto loc_8220C894;
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c884
	if (!cr6.eq) goto loc_8220C884;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C85C;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C864;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28692
	ctx.r5.s64 = ctx.r11.s64 + -28692;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C878;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11424(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11424, ctx.r3.u32);
	// b 0x8220c888
	goto loc_8220C888;
loc_8220C884:
	// lwz r3,11424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11424);
loc_8220C888:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C894:
	// lwz r10,1096(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// lwz r9,1096(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1096);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c900
	if (cr6.eq) goto loc_8220C900;
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c8f0
	if (!cr6.eq) goto loc_8220C8F0;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C8C8;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C8D0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28656
	ctx.r5.s64 = ctx.r11.s64 + -28656;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C8E4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11420, ctx.r3.u32);
	// b 0x8220c8f4
	goto loc_8220C8F4;
loc_8220C8F0:
	// lwz r3,11420(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11420);
loc_8220C8F4:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C900:
	// lwz r10,996(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 996);
	// lwz r9,996(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 996);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8220c930
	if (!cr6.eq) goto loc_8220C930;
	// lwz r10,1000(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1000);
	// lwz r9,1000(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1000);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8220c930
	if (!cr6.eq) goto loc_8220C930;
	// lwz r10,1004(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1004);
	// lwz r9,1004(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1004);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220c984
	if (cr6.eq) goto loc_8220C984;
loc_8220C930:
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c974
	if (!cr6.eq) goto loc_8220C974;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C94C;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C954;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28636
	ctx.r5.s64 = ctx.r11.s64 + -28636;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C968;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11416, ctx.r3.u32);
	// b 0x8220c978
	goto loc_8220C978;
loc_8220C974:
	// lwz r3,11416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11416);
loc_8220C978:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C984:
	// lwz r10,1096(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// lwz r9,1096(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1096);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c9f0
	if (cr6.eq) goto loc_8220C9F0;
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c9e0
	if (!cr6.eq) goto loc_8220C9E0;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220C9B8;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220C9C0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28596
	ctx.r5.s64 = ctx.r11.s64 + -28596;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220C9D4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11412, ctx.r3.u32);
	// b 0x8220c9e4
	goto loc_8220C9E4;
loc_8220C9E0:
	// lwz r3,11412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11412);
loc_8220C9E4:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220C9F0:
	// lwz r10,1096(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// lwz r9,1096(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1096);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ca5c
	if (cr6.eq) goto loc_8220CA5C;
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ca4c
	if (!cr6.eq) goto loc_8220CA4C;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CA24;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CA2C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28544
	ctx.r5.s64 = ctx.r11.s64 + -28544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CA40;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11408, ctx.r3.u32);
	// b 0x8220ca50
	goto loc_8220CA50;
loc_8220CA4C:
	// lwz r3,11408(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11408);
loc_8220CA50:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CA5C:
	// lwz r10,1096(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// lwz r9,1096(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1096);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220cac8
	if (cr6.eq) goto loc_8220CAC8;
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cab8
	if (!cr6.eq) goto loc_8220CAB8;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CA90;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CA98;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28516
	ctx.r5.s64 = ctx.r11.s64 + -28516;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CAAC;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11404, ctx.r3.u32);
	// b 0x8220cabc
	goto loc_8220CABC;
loc_8220CAB8:
	// lwz r3,11404(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11404);
loc_8220CABC:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CAC8:
	// lwz r10,2284(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2284);
	// lwz r9,2284(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2284);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220cb2c
	if (cr6.eq) goto loc_8220CB2C;
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cb1c
	if (!cr6.eq) goto loc_8220CB1C;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CAF4;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CAFC;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28464
	ctx.r5.s64 = ctx.r11.s64 + -28464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CB10;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11400(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11400, ctx.r3.u32);
	// b 0x8220cb20
	goto loc_8220CB20;
loc_8220CB1C:
	// lwz r3,11400(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11400);
loc_8220CB20:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CB2C:
	// lfs f0,2236(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2236(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 2236);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8220cb90
	if (cr6.eq) goto loc_8220CB90;
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cb80
	if (!cr6.eq) goto loc_8220CB80;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CB58;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CB60;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28436
	ctx.r5.s64 = ctx.r11.s64 + -28436;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CB74;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11396, ctx.r3.u32);
	// b 0x8220cb84
	goto loc_8220CB84;
loc_8220CB80:
	// lwz r3,11396(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11396);
loc_8220CB84:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CB90:
	// lwz r10,1096(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// lwz r9,1096(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1096);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220cbfc
	if (cr6.eq) goto loc_8220CBFC;
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cbec
	if (!cr6.eq) goto loc_8220CBEC;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CBC4;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CBCC;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28404
	ctx.r5.s64 = ctx.r11.s64 + -28404;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CBE0;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11392, ctx.r3.u32);
	// b 0x8220cbf0
	goto loc_8220CBF0;
loc_8220CBEC:
	// lwz r3,11392(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11392);
loc_8220CBF0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CBFC:
	// lhz r10,1096(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 1096);
	// lhz r9,1096(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 1096);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220cc68
	if (cr6.eq) goto loc_8220CC68;
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cc58
	if (!cr6.eq) goto loc_8220CC58;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CC30;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CC38;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28352
	ctx.r5.s64 = ctx.r11.s64 + -28352;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CC4C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11388, ctx.r3.u32);
	// b 0x8220cc5c
	goto loc_8220CC5C;
loc_8220CC58:
	// lwz r3,11388(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11388);
loc_8220CC5C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CC68:
	// lwz r10,1096(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// lwz r9,1096(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1096);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ccd4
	if (cr6.eq) goto loc_8220CCD4;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ccc4
	if (!cr6.eq) goto loc_8220CCC4;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CC9C;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CCA4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28288
	ctx.r5.s64 = ctx.r11.s64 + -28288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CCB8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11508);
	// stw r3,11384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11384, ctx.r3.u32);
	// b 0x8220ccc8
	goto loc_8220CCC8;
loc_8220CCC4:
	// lwz r3,11384(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11384);
loc_8220CCC8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CCD4:
	// lwz r10,1096(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// lwz r9,1096(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1096);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220cd3c
	if (cr6.eq) goto loc_8220CD3C;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cd2c
	if (!cr6.eq) goto loc_8220CD2C;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CD08;
	sub_82190108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CD10;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28244
	ctx.r5.s64 = ctx.r11.s64 + -28244;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CD24;
	sub_822ADCF0(ctx, base);
	// stw r3,11380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11380, ctx.r3.u32);
	// b 0x8220cd30
	goto loc_8220CD30;
loc_8220CD2C:
	// lwz r3,11380(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11380);
loc_8220CD30:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CD3C:
	// lwz r11,1096(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// lis r31,-32063
	ctx.r31.s64 = -2101280768;
	// lwz r10,1096(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1096);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// beq cr6,0x8220cdb0
	if (cr6.eq) goto loc_8220CDB0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cda0
	if (!cr6.eq) goto loc_8220CDA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CD78;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CD80;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28212
	ctx.r5.s64 = ctx.r11.s64 + -28212;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CD94;
	sub_822ADCF0(ctx, base);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// stw r3,11372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11372, ctx.r3.u32);
	// b 0x8220cda4
	goto loc_8220CDA4;
loc_8220CDA0:
	// lwz r3,11372(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11372);
loc_8220CDA4:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CDB0:
	// lwz r10,2136(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2136);
	// lwz r9,2136(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2136);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8220ce20
	if (!cr6.eq) goto loc_8220CE20;
	// lwz r10,2140(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2140);
	// lwz r9,2140(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2140);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220ce20
	if (!cr6.eq) goto loc_8220CE20;
	// lbz r10,2168(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2168);
	// lbz r9,2168(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 2168);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220ce20
	if (!cr6.eq) goto loc_8220CE20;
	// lbz r10,2160(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2160);
	// lbz r9,2160(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 2160);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220ce20
	if (!cr6.eq) goto loc_8220CE20;
	// lwz r10,2156(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2156);
	// lwz r9,2156(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2156);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ce20
	if (!cr6.eq) goto loc_8220CE20;
	// lwz r10,2164(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2164);
	// lwz r9,2164(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2164);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ce74
	if (cr6.eq) goto loc_8220CE74;
loc_8220CE20:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ce64
	if (!cr6.eq) goto loc_8220CE64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CE3C;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CE44;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28172
	ctx.r5.s64 = ctx.r11.s64 + -28172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CE58;
	sub_822ADCF0(ctx, base);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// stw r3,11368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11368, ctx.r3.u32);
	// b 0x8220ce68
	goto loc_8220CE68;
loc_8220CE64:
	// lwz r3,11368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11368);
loc_8220CE68:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CE74:
	// lwz r10,920(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 920);
	// lwz r9,920(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 920);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220cee0
	if (cr6.eq) goto loc_8220CEE0;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ced0
	if (!cr6.eq) goto loc_8220CED0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CEA8;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CEB0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28124
	ctx.r5.s64 = ctx.r11.s64 + -28124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CEC4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// stw r3,11364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11364, ctx.r3.u32);
	// b 0x8220ced4
	goto loc_8220CED4;
loc_8220CED0:
	// lwz r3,11364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11364);
loc_8220CED4:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CEE0:
	// lbz r10,920(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 920);
	// lbz r9,920(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 920);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220cf48
	if (cr6.eq) goto loc_8220CF48;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cf38
	if (!cr6.eq) goto loc_8220CF38;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CF14;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CF1C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28088
	ctx.r5.s64 = ctx.r11.s64 + -28088;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CF30;
	sub_822ADCF0(ctx, base);
	// stw r3,11360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11360, ctx.r3.u32);
	// b 0x8220cf3c
	goto loc_8220CF3C;
loc_8220CF38:
	// lwz r3,11360(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11360);
loc_8220CF3C:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CF48:
	// addi r4,r26,908
	ctx.r4.s64 = ctx.r26.s64 + 908;
	// addi r3,r27,908
	ctx.r3.s64 = ctx.r27.s64 + 908;
	// bl 0x82170820
	ctx.lr = 0x8220CF54;
	sub_82170820(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220cfb0
	if (cr6.eq) goto loc_8220CFB0;
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220cfa0
	if (!cr6.eq) goto loc_8220CFA0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220CF7C;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220CF84;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28060
	ctx.r5.s64 = ctx.r11.s64 + -28060;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220CF98;
	sub_822ADCF0(ctx, base);
	// stw r3,11356(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11356, ctx.r3.u32);
	// b 0x8220cfa4
	goto loc_8220CFA4;
loc_8220CFA0:
	// lwz r3,11356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11356);
loc_8220CFA4:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220CFB0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,2348(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2348);
	// lwz r29,2348(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2348);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220CFD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220cfe4
	if (cr6.eq) goto loc_8220CFE4;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220cff4
	goto loc_8220CFF4;
loc_8220CFE4:
	// lwz r10,140(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r10.u32);
loc_8220CFF4:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220d058
	if (cr6.eq) goto loc_8220D058;
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d048
	if (!cr6.eq) goto loc_8220D048;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220D024;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D02C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28036
	ctx.r5.s64 = ctx.r11.s64 + -28036;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D040;
	sub_822ADCF0(ctx, base);
	// stw r3,11352(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11352, ctx.r3.u32);
	// b 0x8220d04c
	goto loc_8220D04C;
loc_8220D048:
	// lwz r3,11352(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11352);
loc_8220D04C:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220D058:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,2352(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2352);
	// lwz r29,2352(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2352);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d08c
	if (cr6.eq) goto loc_8220D08C;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220d09c
	goto loc_8220D09C;
loc_8220D08C:
	// lwz r10,140(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r10.u32);
loc_8220D09C:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// beq cr6,0x8220d104
	if (cr6.eq) goto loc_8220D104;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d0f4
	if (!cr6.eq) goto loc_8220D0F4;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220D0CC;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D0D4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28008
	ctx.r5.s64 = ctx.r11.s64 + -28008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D0E8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// stw r3,11348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11348, ctx.r3.u32);
	// b 0x8220d0f8
	goto loc_8220D0F8;
loc_8220D0F4:
	// lwz r3,11348(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11348);
loc_8220D0F8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220D104:
	// lwz r10,920(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 920);
	// lwz r9,920(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 920);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d170
	if (cr6.eq) goto loc_8220D170;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d160
	if (!cr6.eq) goto loc_8220D160;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220D138;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D140;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27980
	ctx.r5.s64 = ctx.r11.s64 + -27980;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D154;
	sub_822ADCF0(ctx, base);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// stw r3,11344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11344, ctx.r3.u32);
	// b 0x8220d164
	goto loc_8220D164;
loc_8220D160:
	// lwz r3,11344(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11344);
loc_8220D164:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220D170:
	// lwz r10,112(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// rlwinm r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d2ac
	if (cr6.eq) goto loc_8220D2AC;
	// lbz r10,942(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 942);
	// lbz r9,942(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 942);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220d1e4
	if (cr6.eq) goto loc_8220D1E4;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d1d4
	if (!cr6.eq) goto loc_8220D1D4;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220D1AC;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D1B4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27936
	ctx.r5.s64 = ctx.r11.s64 + -27936;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D1C8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// stw r3,11340(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11340, ctx.r3.u32);
	// b 0x8220d1d8
	goto loc_8220D1D8;
loc_8220D1D4:
	// lwz r3,11340(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
loc_8220D1D8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220D1E4:
	// lwz r10,1164(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1164);
	// lwz r9,1164(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1164);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220d248
	if (cr6.eq) goto loc_8220D248;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d238
	if (!cr6.eq) goto loc_8220D238;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220D210;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D218;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27912
	ctx.r5.s64 = ctx.r11.s64 + -27912;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D22C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// stw r3,11336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11336, ctx.r3.u32);
	// b 0x8220d23c
	goto loc_8220D23C;
loc_8220D238:
	// lwz r3,11336(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11336);
loc_8220D23C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220D248:
	// lwz r10,1168(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1168);
	// lwz r9,1168(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1168);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220d2ac
	if (cr6.eq) goto loc_8220D2AC;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d29c
	if (!cr6.eq) goto loc_8220D29C;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220D274;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D27C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27884
	ctx.r5.s64 = ctx.r11.s64 + -27884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D290;
	sub_822ADCF0(ctx, base);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// stw r3,11332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11332, ctx.r3.u32);
	// b 0x8220d2a0
	goto loc_8220D2A0;
loc_8220D29C:
	// lwz r3,11332(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11332);
loc_8220D2A0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220D2AC:
	// lwz r10,108(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// rlwinm r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d3a0
	if (cr6.eq) goto loc_8220D3A0;
	// lwz r10,2496(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2496);
	// lwz r9,2496(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2496);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220d320
	if (cr6.eq) goto loc_8220D320;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d310
	if (!cr6.eq) goto loc_8220D310;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220D2E8;
	sub_82190108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D2F0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27840
	ctx.r5.s64 = ctx.r11.s64 + -27840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D304;
	sub_822ADCF0(ctx, base);
	// lwz r11,11376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11376);
	// stw r3,11328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11328, ctx.r3.u32);
	// b 0x8220d314
	goto loc_8220D314;
loc_8220D310:
	// lwz r3,11328(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11328);
loc_8220D314:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8220D320:
	// lhz r10,1092(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 1092);
	// lhz r9,1092(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 1092);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d3a0
	if (cr6.eq) goto loc_8220D3A0;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d388
	if (!cr6.eq) goto loc_8220D388;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r11.u32);
	// bl 0x82190108
	ctx.lr = 0x8220D354;
	sub_82190108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D35C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27756
	ctx.r5.s64 = ctx.r11.s64 + -27756;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D370;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,11324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11324, ctx.r3.u32);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8220D388:
	// lwz r3,11324(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11324);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8220D3A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D3AC"))) PPC_WEAK_FUNC(sub_8220D3AC);
PPC_FUNC_IMPL(__imp__sub_8220D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D3B0"))) PPC_WEAK_FUNC(sub_8220D3B0);
PPC_FUNC_IMPL(__imp__sub_8220D3B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x8220D3B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8220be18
	ctx.lr = 0x8220D3C8;
	sub_8220BE18(ctx, base);
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d52c
	if (cr6.eq) goto loc_8220D52C;
	// lis r31,-32063
	ctx.r31.s64 = -2101280768;
	// lbz r11,2540(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2540);
	// lbz r10,2540(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2540);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,11764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11764);
	// beq cr6,0x8220d448
	if (cr6.eq) goto loc_8220D448;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d438
	if (!cr6.eq) goto loc_8220D438;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11764, ctx.r11.u32);
	// bl 0x821c6300
	ctx.lr = 0x8220D410;
	sub_821C6300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D418;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27696
	ctx.r5.s64 = ctx.r11.s64 + -27696;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D42C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11764);
	// stw r3,11760(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11760, ctx.r3.u32);
	// b 0x8220d43c
	goto loc_8220D43C;
loc_8220D438:
	// lwz r3,11760(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11760);
loc_8220D43C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220D448:
	// lbz r10,2541(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2541);
	// lbz r9,2541(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2541);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220d4ac
	if (cr6.eq) goto loc_8220D4AC;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d49c
	if (!cr6.eq) goto loc_8220D49C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11764, ctx.r11.u32);
	// bl 0x821c6300
	ctx.lr = 0x8220D474;
	sub_821C6300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D47C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27668
	ctx.r5.s64 = ctx.r11.s64 + -27668;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D490;
	sub_822ADCF0(ctx, base);
	// lwz r11,11764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11764);
	// stw r3,11756(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11756, ctx.r3.u32);
	// b 0x8220d4a0
	goto loc_8220D4A0;
loc_8220D49C:
	// lwz r3,11756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11756);
loc_8220D4A0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220D4AC:
	// lwz r10,2548(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2548);
	// lwz r9,2548(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2548);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d52c
	if (cr6.eq) goto loc_8220D52C;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d514
	if (!cr6.eq) goto loc_8220D514;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,11764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11764, ctx.r11.u32);
	// bl 0x821c6300
	ctx.lr = 0x8220D4E0;
	sub_821C6300(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D4E8;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27640
	ctx.r5.s64 = ctx.r11.s64 + -27640;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D4FC;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,11752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11752, ctx.r3.u32);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_8220D514:
	// lwz r3,11752(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11752);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_8220D52C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D538"))) PPC_WEAK_FUNC(sub_8220D538);
PPC_FUNC_IMPL(__imp__sub_8220D538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x8220D540;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x8231b720
	ctx.lr = 0x8220D558;
	sub_8231B720(ctx, base);
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d754
	if (cr6.eq) goto loc_8220D754;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220d754
	if (cr6.eq) goto loc_8220D754;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,1952(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1952);
	// lwz r30,1952(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1952);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D59C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d5b0
	if (cr6.eq) goto loc_8220D5B0;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220d5c0
	goto loc_8220D5C0;
loc_8220D5B0:
	// lwz r10,140(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r10.u32);
loc_8220D5C0:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lis r31,-32063
	ctx.r31.s64 = -2101280768;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11748);
	// beq cr6,0x8220d62c
	if (cr6.eq) goto loc_8220D62C;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d61c
	if (!cr6.eq) goto loc_8220D61C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11748, ctx.r11.u32);
	// bl 0x82175da0
	ctx.lr = 0x8220D5F4;
	sub_82175DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D5FC;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27612
	ctx.r5.s64 = ctx.r11.s64 + -27612;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D610;
	sub_822ADCF0(ctx, base);
	// lwz r11,11748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11748);
	// stw r3,11744(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11744, ctx.r3.u32);
	// b 0x8220d620
	goto loc_8220D620;
loc_8220D61C:
	// lwz r3,11744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11744);
loc_8220D620:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_8220D62C:
	// lwz r10,1232(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1232);
	// lwz r9,1232(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1232);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8220d694
	if (cr6.eq) goto loc_8220D694;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d684
	if (!cr6.eq) goto loc_8220D684;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11748, ctx.r11.u32);
	// bl 0x82175da0
	ctx.lr = 0x8220D660;
	sub_82175DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D668;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27576
	ctx.r5.s64 = ctx.r11.s64 + -27576;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D67C;
	sub_822ADCF0(ctx, base);
	// stw r3,11740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11740, ctx.r3.u32);
	// b 0x8220d688
	goto loc_8220D688;
loc_8220D684:
	// lwz r3,11740(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11740);
loc_8220D688:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_8220D694:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,2784(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2784);
	// lwz r29,2784(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2784);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D6B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d6c8
	if (cr6.eq) goto loc_8220D6C8;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220d6d8
	goto loc_8220D6D8;
loc_8220D6C8:
	// lwz r10,140(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r10.u32);
loc_8220D6D8:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220d754
	if (cr6.eq) goto loc_8220D754;
	// lwz r11,11748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11748);
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d73c
	if (!cr6.eq) goto loc_8220D73C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,11748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11748, ctx.r11.u32);
	// bl 0x82175da0
	ctx.lr = 0x8220D708;
	sub_82175DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D710;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27540
	ctx.r5.s64 = ctx.r11.s64 + -27540;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D724;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,11736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11736, ctx.r3.u32);
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8220D73C:
	// lwz r3,11736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11736);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8220D754:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D760"))) PPC_WEAK_FUNC(sub_8220D760);
PPC_FUNC_IMPL(__imp__sub_8220D760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x8220D768;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8231be68
	ctx.lr = 0x8220D780;
	sub_8231BE68(ctx, base);
	// lwz r11,116(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220dfd4
	if (cr6.eq) goto loc_8220DFD4;
	// lis r31,-32063
	ctx.r31.s64 = -2101280768;
	// lbz r11,564(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 564);
	// lbz r10,564(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 564);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// beq cr6,0x8220d800
	if (cr6.eq) goto loc_8220D800;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d7f0
	if (!cr6.eq) goto loc_8220D7F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220D7C8;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D7D0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27512
	ctx.r5.s64 = ctx.r11.s64 + -27512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D7E4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11728(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11728, ctx.r3.u32);
	// b 0x8220d7f4
	goto loc_8220D7F4;
loc_8220D7F0:
	// lwz r3,11728(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11728);
loc_8220D7F4:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220D800:
	// lbz r10,565(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 565);
	// lbz r9,565(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 565);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220d864
	if (cr6.eq) goto loc_8220D864;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d854
	if (!cr6.eq) goto loc_8220D854;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220D82C;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D834;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27484
	ctx.r5.s64 = ctx.r11.s64 + -27484;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D848;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11724, ctx.r3.u32);
	// b 0x8220d858
	goto loc_8220D858;
loc_8220D854:
	// lwz r3,11724(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11724);
loc_8220D858:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220D864:
	// lwz r10,572(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 572);
	// lwz r9,572(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 572);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d8d0
	if (cr6.eq) goto loc_8220D8D0;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d8c0
	if (!cr6.eq) goto loc_8220D8C0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220D898;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D8A0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27436
	ctx.r5.s64 = ctx.r11.s64 + -27436;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D8B4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11720(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11720, ctx.r3.u32);
	// b 0x8220d8c4
	goto loc_8220D8C4;
loc_8220D8C0:
	// lwz r3,11720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11720);
loc_8220D8C4:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220D8D0:
	// lwz r10,572(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 572);
	// lwz r9,572(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 572);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220d938
	if (cr6.eq) goto loc_8220D938;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d928
	if (!cr6.eq) goto loc_8220D928;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220D904;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D90C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27420
	ctx.r5.s64 = ctx.r11.s64 + -27420;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D920;
	sub_822ADCF0(ctx, base);
	// stw r3,11716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11716, ctx.r3.u32);
	// b 0x8220d92c
	goto loc_8220D92C;
loc_8220D928:
	// lwz r3,11716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11716);
loc_8220D92C:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220D938:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,680(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 680);
	// lwz r29,680(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 680);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d96c
	if (cr6.eq) goto loc_8220D96C;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220d97c
	goto loc_8220D97C;
loc_8220D96C:
	// lwz r10,140(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r10.u32);
loc_8220D97C:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// beq cr6,0x8220d9e4
	if (cr6.eq) goto loc_8220D9E4;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220d9d4
	if (!cr6.eq) goto loc_8220D9D4;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220D9AC;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220D9B4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27400
	ctx.r5.s64 = ctx.r11.s64 + -27400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220D9C8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11712, ctx.r3.u32);
	// b 0x8220d9d8
	goto loc_8220D9D8;
loc_8220D9D4:
	// lwz r3,11712(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11712);
loc_8220D9D8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220D9E4:
	// lwz r10,576(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 576);
	// lwz r9,576(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 576);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220da48
	if (cr6.eq) goto loc_8220DA48;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220da38
	if (!cr6.eq) goto loc_8220DA38;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DA10;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DA18;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27380
	ctx.r5.s64 = ctx.r11.s64 + -27380;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DA2C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11708(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11708, ctx.r3.u32);
	// b 0x8220da3c
	goto loc_8220DA3C;
loc_8220DA38:
	// lwz r3,11708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11708);
loc_8220DA3C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DA48:
	// lwz r10,580(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 580);
	// lwz r9,580(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 580);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220daac
	if (cr6.eq) goto loc_8220DAAC;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220da9c
	if (!cr6.eq) goto loc_8220DA9C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DA74;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DA7C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27348
	ctx.r5.s64 = ctx.r11.s64 + -27348;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DA90;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11704(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11704, ctx.r3.u32);
	// b 0x8220daa0
	goto loc_8220DAA0;
loc_8220DA9C:
	// lwz r3,11704(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11704);
loc_8220DAA0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DAAC:
	// lwz r10,584(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 584);
	// lwz r9,584(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 584);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220db10
	if (cr6.eq) goto loc_8220DB10;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220db00
	if (!cr6.eq) goto loc_8220DB00;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DAD8;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DAE0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27324
	ctx.r5.s64 = ctx.r11.s64 + -27324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DAF4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11700, ctx.r3.u32);
	// b 0x8220db04
	goto loc_8220DB04;
loc_8220DB00:
	// lwz r3,11700(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11700);
loc_8220DB04:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DB10:
	// lwz r10,588(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 588);
	// lwz r9,588(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 588);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220db74
	if (cr6.eq) goto loc_8220DB74;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220db64
	if (!cr6.eq) goto loc_8220DB64;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DB3C;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DB44;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27292
	ctx.r5.s64 = ctx.r11.s64 + -27292;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DB58;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11696(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11696, ctx.r3.u32);
	// b 0x8220db68
	goto loc_8220DB68;
loc_8220DB64:
	// lwz r3,11696(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11696);
loc_8220DB68:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DB74:
	// lwz r10,592(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 592);
	// lwz r9,592(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 592);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220dbd8
	if (cr6.eq) goto loc_8220DBD8;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220dbc8
	if (!cr6.eq) goto loc_8220DBC8;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DBA0;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DBA8;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27260
	ctx.r5.s64 = ctx.r11.s64 + -27260;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DBBC;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11692(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11692, ctx.r3.u32);
	// b 0x8220dbcc
	goto loc_8220DBCC;
loc_8220DBC8:
	// lwz r3,11692(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11692);
loc_8220DBCC:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DBD8:
	// lwz r10,596(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 596);
	// lwz r9,596(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 596);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220dc3c
	if (cr6.eq) goto loc_8220DC3C;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220dc2c
	if (!cr6.eq) goto loc_8220DC2C;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DC04;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DC0C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27224
	ctx.r5.s64 = ctx.r11.s64 + -27224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DC20;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11688(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11688, ctx.r3.u32);
	// b 0x8220dc30
	goto loc_8220DC30;
loc_8220DC2C:
	// lwz r3,11688(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11688);
loc_8220DC30:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DC3C:
	// lwz r10,604(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 604);
	// lwz r9,604(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 604);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220dca0
	if (cr6.eq) goto loc_8220DCA0;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220dc90
	if (!cr6.eq) goto loc_8220DC90;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DC68;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DC70;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27188
	ctx.r5.s64 = ctx.r11.s64 + -27188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DC84;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11684(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11684, ctx.r3.u32);
	// b 0x8220dc94
	goto loc_8220DC94;
loc_8220DC90:
	// lwz r3,11684(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11684);
loc_8220DC94:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DCA0:
	// lwz r10,616(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 616);
	// lwz r9,616(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 616);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220dd04
	if (cr6.eq) goto loc_8220DD04;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220dcf4
	if (!cr6.eq) goto loc_8220DCF4;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DCCC;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DCD4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27160
	ctx.r5.s64 = ctx.r11.s64 + -27160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DCE8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11680(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11680, ctx.r3.u32);
	// b 0x8220dcf8
	goto loc_8220DCF8;
loc_8220DCF4:
	// lwz r3,11680(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11680);
loc_8220DCF8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DD04:
	// lwz r10,620(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 620);
	// lwz r9,620(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 620);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220dd68
	if (cr6.eq) goto loc_8220DD68;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220dd58
	if (!cr6.eq) goto loc_8220DD58;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DD30;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DD38;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27120
	ctx.r5.s64 = ctx.r11.s64 + -27120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DD4C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11676(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11676, ctx.r3.u32);
	// b 0x8220dd5c
	goto loc_8220DD5C;
loc_8220DD58:
	// lwz r3,11676(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11676);
loc_8220DD5C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DD68:
	// lwz r10,624(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 624);
	// lwz r9,624(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 624);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220ddcc
	if (cr6.eq) goto loc_8220DDCC;
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ddbc
	if (!cr6.eq) goto loc_8220DDBC;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DD94;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DD9C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27096
	ctx.r5.s64 = ctx.r11.s64 + -27096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DDB0;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11672(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11672, ctx.r3.u32);
	// b 0x8220ddc0
	goto loc_8220DDC0;
loc_8220DDBC:
	// lwz r3,11672(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11672);
loc_8220DDC0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DDCC:
	// lwz r10,628(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 628);
	// lwz r9,628(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 628);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220de30
	if (cr6.eq) goto loc_8220DE30;
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220de20
	if (!cr6.eq) goto loc_8220DE20;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DDF8;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DE00;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27060
	ctx.r5.s64 = ctx.r11.s64 + -27060;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DE14;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11668(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11668, ctx.r3.u32);
	// b 0x8220de24
	goto loc_8220DE24;
loc_8220DE20:
	// lwz r3,11668(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11668);
loc_8220DE24:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DE30:
	// lwz r10,632(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 632);
	// lwz r9,632(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 632);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220de94
	if (cr6.eq) goto loc_8220DE94;
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220de84
	if (!cr6.eq) goto loc_8220DE84;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DE5C;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DE64;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27020
	ctx.r5.s64 = ctx.r11.s64 + -27020;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DE78;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11664(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11664, ctx.r3.u32);
	// b 0x8220de88
	goto loc_8220DE88;
loc_8220DE84:
	// lwz r3,11664(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11664);
loc_8220DE88:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DE94:
	// lwz r10,636(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 636);
	// lwz r9,636(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 636);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220def8
	if (cr6.eq) goto loc_8220DEF8;
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220dee8
	if (!cr6.eq) goto loc_8220DEE8;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DEC0;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DEC8;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26984
	ctx.r5.s64 = ctx.r11.s64 + -26984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DEDC;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11660(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11660, ctx.r3.u32);
	// b 0x8220deec
	goto loc_8220DEEC;
loc_8220DEE8:
	// lwz r3,11660(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11660);
loc_8220DEEC:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DEF8:
	// lwz r10,640(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 640);
	// lwz r9,640(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 640);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220df5c
	if (cr6.eq) goto loc_8220DF5C;
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220df4c
	if (!cr6.eq) goto loc_8220DF4C;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DF24;
	sub_821CD4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DF2C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26940
	ctx.r5.s64 = ctx.r11.s64 + -26940;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DF40;
	sub_822ADCF0(ctx, base);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r3,11656(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11656, ctx.r3.u32);
	// b 0x8220df50
	goto loc_8220DF50;
loc_8220DF4C:
	// lwz r3,11656(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11656);
loc_8220DF50:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220DF5C:
	// lwz r10,644(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 644);
	// lwz r9,644(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 644);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220dfd4
	if (cr6.eq) goto loc_8220DFD4;
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220dfbc
	if (!cr6.eq) goto loc_8220DFBC;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bl 0x821cd4c0
	ctx.lr = 0x8220DF88;
	sub_821CD4C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220DF90;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26904
	ctx.r5.s64 = ctx.r11.s64 + -26904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220DFA4;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,11652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11652, ctx.r3.u32);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8220DFBC:
	// lwz r3,11652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11652);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8220DFD4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220DFE0"))) PPC_WEAK_FUNC(sub_8220DFE0);
PPC_FUNC_IMPL(__imp__sub_8220DFE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x8220DFE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x8231d810
	ctx.lr = 0x8220DFF8;
	sub_8231D810(ctx, base);
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e48c
	if (cr6.eq) goto loc_8220E48C;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// lis r31,-32063
	ctx.r31.s64 = -2101280768;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e36c
	if (cr6.eq) goto loc_8220E36C;
	// lwz r11,1168(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1168);
	// lwz r10,1168(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1168);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// beq cr6,0x8220e088
	if (cr6.eq) goto loc_8220E088;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e078
	if (!cr6.eq) goto loc_8220E078;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x82196b90
	ctx.lr = 0x8220E050;
	sub_82196B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E058;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26868
	ctx.r5.s64 = ctx.r11.s64 + -26868;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E06C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// stw r3,11316(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11316, ctx.r3.u32);
	// b 0x8220e07c
	goto loc_8220E07C;
loc_8220E078:
	// lwz r3,11316(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11316);
loc_8220E07C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_8220E088:
	// lwz r10,1176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1176);
	// lwz r9,1176(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1176);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e0ec
	if (cr6.eq) goto loc_8220E0EC;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e0dc
	if (!cr6.eq) goto loc_8220E0DC;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x82196b90
	ctx.lr = 0x8220E0B4;
	sub_82196B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E0BC;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26840
	ctx.r5.s64 = ctx.r11.s64 + -26840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E0D0;
	sub_822ADCF0(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// stw r3,11312(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11312, ctx.r3.u32);
	// b 0x8220e0e0
	goto loc_8220E0E0;
loc_8220E0DC:
	// lwz r3,11312(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11312);
loc_8220E0E0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_8220E0EC:
	// lbz r10,735(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 735);
	// lbz r9,735(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 735);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220e150
	if (cr6.eq) goto loc_8220E150;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e140
	if (!cr6.eq) goto loc_8220E140;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x82196b90
	ctx.lr = 0x8220E118;
	sub_82196B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E120;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26808
	ctx.r5.s64 = ctx.r11.s64 + -26808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E134;
	sub_822ADCF0(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// stw r3,11308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11308, ctx.r3.u32);
	// b 0x8220e144
	goto loc_8220E144;
loc_8220E140:
	// lwz r3,11308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11308);
loc_8220E144:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_8220E150:
	// lwz r10,740(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 740);
	// lwz r9,740(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 740);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e1bc
	if (cr6.eq) goto loc_8220E1BC;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e1ac
	if (!cr6.eq) goto loc_8220E1AC;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x82196b90
	ctx.lr = 0x8220E184;
	sub_82196B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E18C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26780
	ctx.r5.s64 = ctx.r11.s64 + -26780;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E1A0;
	sub_822ADCF0(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// stw r3,11304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11304, ctx.r3.u32);
	// b 0x8220e1b0
	goto loc_8220E1B0;
loc_8220E1AC:
	// lwz r3,11304(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11304);
loc_8220E1B0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_8220E1BC:
	// lwz r10,1440(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1440);
	// lwz r9,1440(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1440);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e220
	if (cr6.eq) goto loc_8220E220;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e210
	if (!cr6.eq) goto loc_8220E210;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x82196b90
	ctx.lr = 0x8220E1E8;
	sub_82196B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E1F0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26740
	ctx.r5.s64 = ctx.r11.s64 + -26740;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E204;
	sub_822ADCF0(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// stw r3,11300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11300, ctx.r3.u32);
	// b 0x8220e214
	goto loc_8220E214;
loc_8220E210:
	// lwz r3,11300(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11300);
loc_8220E214:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_8220E220:
	// lwz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// rlwinm r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e370
	if (cr6.eq) goto loc_8220E370;
	// lwz r10,1180(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1180);
	// lwz r9,1180(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1180);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e294
	if (cr6.eq) goto loc_8220E294;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e284
	if (!cr6.eq) goto loc_8220E284;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x82196b90
	ctx.lr = 0x8220E25C;
	sub_82196B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E264;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26684
	ctx.r5.s64 = ctx.r11.s64 + -26684;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E278;
	sub_822ADCF0(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// stw r3,11296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11296, ctx.r3.u32);
	// b 0x8220e288
	goto loc_8220E288;
loc_8220E284:
	// lwz r3,11296(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11296);
loc_8220E288:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_8220E294:
	// lwz r10,996(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 996);
	// lwz r9,996(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 996);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e2f8
	if (cr6.eq) goto loc_8220E2F8;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e2e8
	if (!cr6.eq) goto loc_8220E2E8;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x82196b90
	ctx.lr = 0x8220E2C0;
	sub_82196B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E2C8;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26648
	ctx.r5.s64 = ctx.r11.s64 + -26648;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E2DC;
	sub_822ADCF0(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// stw r3,11292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11292, ctx.r3.u32);
	// b 0x8220e2ec
	goto loc_8220E2EC;
loc_8220E2E8:
	// lwz r3,11292(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11292);
loc_8220E2EC:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_8220E2F8:
	// lwz r10,1000(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// lwz r9,1000(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1000);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e370
	if (cr6.eq) goto loc_8220E370;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e358
	if (!cr6.eq) goto loc_8220E358;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x82196b90
	ctx.lr = 0x8220E324;
	sub_82196B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E32C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26632
	ctx.r5.s64 = ctx.r11.s64 + -26632;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E340;
	sub_822ADCF0(ctx, base);
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// stw r3,11288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11288, ctx.r3.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x8220e370
	goto loc_8220E370;
loc_8220E358:
	// lwz r3,11288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11288);
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x8220e370
	goto loc_8220E370;
loc_8220E36C:
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
loc_8220E370:
	// lwz r10,1792(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1792);
	// lwz r9,1792(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1792);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8220e3a0
	if (!cr6.eq) goto loc_8220E3A0;
	// lwz r10,1796(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1796);
	// lwz r9,1796(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1796);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8220e3a0
	if (!cr6.eq) goto loc_8220E3A0;
	// lwz r10,1800(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1800);
	// lwz r9,1800(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1800);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e3f4
	if (cr6.eq) goto loc_8220E3F4;
loc_8220E3A0:
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e3e4
	if (!cr6.eq) goto loc_8220E3E4;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x82196b90
	ctx.lr = 0x8220E3BC;
	sub_82196B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E3C4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26604
	ctx.r5.s64 = ctx.r11.s64 + -26604;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E3D8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// stw r3,11284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11284, ctx.r3.u32);
	// b 0x8220e3e8
	goto loc_8220E3E8;
loc_8220E3E4:
	// lwz r3,11284(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11284);
loc_8220E3E8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_8220E3F4:
	// lwz r10,1804(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1804);
	// lwz r9,1804(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1804);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8220e424
	if (!cr6.eq) goto loc_8220E424;
	// lwz r10,1808(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1808);
	// lwz r9,1808(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1808);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8220e424
	if (!cr6.eq) goto loc_8220E424;
	// lwz r10,1812(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1812);
	// lwz r9,1812(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1812);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e48c
	if (cr6.eq) goto loc_8220E48C;
loc_8220E424:
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e474
	if (!cr6.eq) goto loc_8220E474;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x82196b90
	ctx.lr = 0x8220E440;
	sub_82196B90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E448;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26568
	ctx.r5.s64 = ctx.r11.s64 + -26568;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E45C;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,11280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11280, ctx.r3.u32);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_8220E474:
	// lwz r3,11280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11280);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_8220E48C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E498"))) PPC_WEAK_FUNC(sub_8220E498);
PPC_FUNC_IMPL(__imp__sub_8220E498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x8220E4A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8231c910
	ctx.lr = 0x8220E4B8;
	sub_8231C910(ctx, base);
	// lwz r11,116(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ecb0
	if (cr6.eq) goto loc_8220ECB0;
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// lis r31,-32063
	ctx.r31.s64 = -2101280768;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e6d4
	if (cr6.eq) goto loc_8220E6D4;
	// lwz r11,580(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 580);
	// lwz r10,580(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 580);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// beq cr6,0x8220e548
	if (cr6.eq) goto loc_8220E548;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e538
	if (!cr6.eq) goto loc_8220E538;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E510;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E518;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26536
	ctx.r5.s64 = ctx.r11.s64 + -26536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E52C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11644(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11644, ctx.r3.u32);
	// b 0x8220e53c
	goto loc_8220E53C;
loc_8220E538:
	// lwz r3,11644(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11644);
loc_8220E53C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E548:
	// lwz r10,604(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 604);
	// lwz r9,604(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 604);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e5ac
	if (cr6.eq) goto loc_8220E5AC;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e59c
	if (!cr6.eq) goto loc_8220E59C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E574;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E57C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26504
	ctx.r5.s64 = ctx.r11.s64 + -26504;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E590;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11640(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11640, ctx.r3.u32);
	// b 0x8220e5a0
	goto loc_8220E5A0;
loc_8220E59C:
	// lwz r3,11640(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11640);
loc_8220E5A0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E5AC:
	// lwz r10,588(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 588);
	// lwz r9,588(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 588);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e610
	if (cr6.eq) goto loc_8220E610;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e600
	if (!cr6.eq) goto loc_8220E600;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E5D8;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E5E0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26476
	ctx.r5.s64 = ctx.r11.s64 + -26476;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E5F4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11636(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11636, ctx.r3.u32);
	// b 0x8220e604
	goto loc_8220E604;
loc_8220E600:
	// lwz r3,11636(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11636);
loc_8220E604:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E610:
	// lwz r10,592(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 592);
	// lwz r9,592(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 592);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e674
	if (cr6.eq) goto loc_8220E674;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e664
	if (!cr6.eq) goto loc_8220E664;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E63C;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E644;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26444
	ctx.r5.s64 = ctx.r11.s64 + -26444;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E658;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11632, ctx.r3.u32);
	// b 0x8220e668
	goto loc_8220E668;
loc_8220E664:
	// lwz r3,11632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11632);
loc_8220E668:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E674:
	// lwz r10,632(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 632);
	// lwz r9,632(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 632);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e6d4
	if (cr6.eq) goto loc_8220E6D4;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e6c4
	if (!cr6.eq) goto loc_8220E6C4;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E6A0;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E6A8;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26412
	ctx.r5.s64 = ctx.r11.s64 + -26412;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E6BC;
	sub_822ADCF0(ctx, base);
	// stw r3,11628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11628, ctx.r3.u32);
	// b 0x8220e6c8
	goto loc_8220E6C8;
loc_8220E6C4:
	// lwz r3,11628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11628);
loc_8220E6C8:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E6D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,628(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 628);
	// lwz r29,628(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 628);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E6F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220e708
	if (cr6.eq) goto loc_8220E708;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220e718
	goto loc_8220E718;
loc_8220E708:
	// lwz r10,140(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r10.u32);
loc_8220E718:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// beq cr6,0x8220e780
	if (cr6.eq) goto loc_8220E780;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e770
	if (!cr6.eq) goto loc_8220E770;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E748;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E750;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26372
	ctx.r5.s64 = ctx.r11.s64 + -26372;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E764;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11624, ctx.r3.u32);
	// b 0x8220e774
	goto loc_8220E774;
loc_8220E770:
	// lwz r3,11624(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11624);
loc_8220E774:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E780:
	// lbz r10,564(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 564);
	// lbz r9,564(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 564);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220e7e4
	if (cr6.eq) goto loc_8220E7E4;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e7d4
	if (!cr6.eq) goto loc_8220E7D4;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E7AC;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E7B4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26340
	ctx.r5.s64 = ctx.r11.s64 + -26340;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E7C8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11620, ctx.r3.u32);
	// b 0x8220e7d8
	goto loc_8220E7D8;
loc_8220E7D4:
	// lwz r3,11620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11620);
loc_8220E7D8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E7E4:
	// lwz r10,600(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 600);
	// lwz r9,600(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 600);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e848
	if (cr6.eq) goto loc_8220E848;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e838
	if (!cr6.eq) goto loc_8220E838;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E810;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E818;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26316
	ctx.r5.s64 = ctx.r11.s64 + -26316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E82C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11616, ctx.r3.u32);
	// b 0x8220e83c
	goto loc_8220E83C;
loc_8220E838:
	// lwz r3,11616(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11616);
loc_8220E83C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E848:
	// lwz r10,596(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 596);
	// lwz r9,596(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 596);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220e8ac
	if (cr6.eq) goto loc_8220E8AC;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e89c
	if (!cr6.eq) goto loc_8220E89C;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E874;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E87C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26328
	ctx.r5.s64 = ctx.r11.s64 + -26328;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E890;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11612, ctx.r3.u32);
	// b 0x8220e8a0
	goto loc_8220E8A0;
loc_8220E89C:
	// lwz r3,11612(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11612);
loc_8220E8A0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E8AC:
	// lwz r10,608(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 608);
	// lwz r9,608(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 608);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e918
	if (cr6.eq) goto loc_8220E918;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e908
	if (!cr6.eq) goto loc_8220E908;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E8E0;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E8E8;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26292
	ctx.r5.s64 = ctx.r11.s64 + -26292;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E8FC;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11608, ctx.r3.u32);
	// b 0x8220e90c
	goto loc_8220E90C;
loc_8220E908:
	// lwz r3,11608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11608);
loc_8220E90C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E918:
	// lwz r10,608(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 608);
	// lwz r9,608(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 608);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e980
	if (cr6.eq) goto loc_8220E980;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220e970
	if (!cr6.eq) goto loc_8220E970;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E94C;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E954;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26276
	ctx.r5.s64 = ctx.r11.s64 + -26276;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220E968;
	sub_822ADCF0(ctx, base);
	// stw r3,11604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11604, ctx.r3.u32);
	// b 0x8220e974
	goto loc_8220E974;
loc_8220E970:
	// lwz r3,11604(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11604);
loc_8220E974:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220E980:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,636(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 636);
	// lwz r29,636(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 636);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E9A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220e9b4
	if (cr6.eq) goto loc_8220E9B4;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220e9c4
	goto loc_8220E9C4;
loc_8220E9B4:
	// lwz r10,140(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r10.u32);
loc_8220E9C4:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// beq cr6,0x8220ea2c
	if (cr6.eq) goto loc_8220EA2C;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ea1c
	if (!cr6.eq) goto loc_8220EA1C;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220E9F4;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220E9FC;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26240
	ctx.r5.s64 = ctx.r11.s64 + -26240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EA10;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11600, ctx.r3.u32);
	// b 0x8220ea20
	goto loc_8220EA20;
loc_8220EA1C:
	// lwz r3,11600(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11600);
loc_8220EA20:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220EA2C:
	// lwz r10,640(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 640);
	// lwz r9,640(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 640);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220ea90
	if (cr6.eq) goto loc_8220EA90;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ea80
	if (!cr6.eq) goto loc_8220EA80;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220EA58;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220EA60;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26216
	ctx.r5.s64 = ctx.r11.s64 + -26216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EA74;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11596, ctx.r3.u32);
	// b 0x8220ea84
	goto loc_8220EA84;
loc_8220EA80:
	// lwz r3,11596(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11596);
loc_8220EA84:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220EA90:
	// lwz r10,688(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 688);
	// lwz r9,688(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 688);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220eaf0
	if (cr6.eq) goto loc_8220EAF0;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220eae0
	if (!cr6.eq) goto loc_8220EAE0;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220EABC;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220EAC4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26164
	ctx.r5.s64 = ctx.r11.s64 + -26164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EAD8;
	sub_822ADCF0(ctx, base);
	// stw r3,11592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11592, ctx.r3.u32);
	// b 0x8220eae4
	goto loc_8220EAE4;
loc_8220EAE0:
	// lwz r3,11592(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11592);
loc_8220EAE4:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220EAF0:
	// addi r4,r24,664
	ctx.r4.s64 = ctx.r24.s64 + 664;
	// addi r3,r25,664
	ctx.r3.s64 = ctx.r25.s64 + 664;
	// bl 0x82170820
	ctx.lr = 0x8220EAFC;
	sub_82170820(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220eb58
	if (cr6.eq) goto loc_8220EB58;
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220eb48
	if (!cr6.eq) goto loc_8220EB48;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220EB24;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220EB2C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26112
	ctx.r5.s64 = ctx.r11.s64 + -26112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EB40;
	sub_822ADCF0(ctx, base);
	// stw r3,11588(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11588, ctx.r3.u32);
	// b 0x8220eb4c
	goto loc_8220EB4C;
loc_8220EB48:
	// lwz r3,11588(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11588);
loc_8220EB4C:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220EB58:
	// addi r4,r24,676
	ctx.r4.s64 = ctx.r24.s64 + 676;
	// addi r3,r25,676
	ctx.r3.s64 = ctx.r25.s64 + 676;
	// bl 0x82170820
	ctx.lr = 0x8220EB64;
	sub_82170820(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220ebc4
	if (cr6.eq) goto loc_8220EBC4;
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ebb4
	if (!cr6.eq) goto loc_8220EBB4;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220EB8C;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220EB94;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26068
	ctx.r5.s64 = ctx.r11.s64 + -26068;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EBA8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11584(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11584, ctx.r3.u32);
	// b 0x8220ebb8
	goto loc_8220EBB8;
loc_8220EBB4:
	// lwz r3,11584(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11584);
loc_8220EBB8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220EBC4:
	// lwz r10,608(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 608);
	// lwz r9,608(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 608);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ec30
	if (cr6.eq) goto loc_8220EC30;
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ec20
	if (!cr6.eq) goto loc_8220EC20;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220EBF8;
	sub_82175EE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220EC00;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26016
	ctx.r5.s64 = ctx.r11.s64 + -26016;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EC14;
	sub_822ADCF0(ctx, base);
	// lwz r11,11648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11648);
	// stw r3,11580(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11580, ctx.r3.u32);
	// b 0x8220ec24
	goto loc_8220EC24;
loc_8220EC20:
	// lwz r3,11580(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11580);
loc_8220EC24:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8220EC30:
	// lwz r10,608(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 608);
	// lwz r9,608(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 608);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220ecb0
	if (cr6.eq) goto loc_8220ECB0;
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ec98
	if (!cr6.eq) goto loc_8220EC98;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// stw r11,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r11.u32);
	// bl 0x82175ee0
	ctx.lr = 0x8220EC64;
	sub_82175EE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220EC6C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25976
	ctx.r5.s64 = ctx.r11.s64 + -25976;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EC80;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,11576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11576, ctx.r3.u32);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8220EC98:
	// lwz r3,11576(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11576);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8220ECB0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220ECBC"))) PPC_WEAK_FUNC(sub_8220ECBC);
PPC_FUNC_IMPL(__imp__sub_8220ECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220ECC0"))) PPC_WEAK_FUNC(sub_8220ECC0);
PPC_FUNC_IMPL(__imp__sub_8220ECC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x8220ECC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x823190d8
	ctx.lr = 0x8220ECE0;
	sub_823190D8(ctx, base);
	// lwz r11,116(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220f324
	if (cr6.eq) goto loc_8220F324;
	// lwz r11,416(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 416);
	// lis r31,-32063
	ctx.r31.s64 = -2101280768;
	// lwz r10,416(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 416);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ed64
	if (cr6.eq) goto loc_8220ED64;
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ed54
	if (!cr6.eq) goto loc_8220ED54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220ED30;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220ED38;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25936
	ctx.r5.s64 = ctx.r11.s64 + -25936;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220ED4C;
	sub_822ADCF0(ctx, base);
	// stw r3,11004(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11004, ctx.r3.u32);
	// b 0x8220ed58
	goto loc_8220ED58;
loc_8220ED54:
	// lwz r3,11004(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11004);
loc_8220ED58:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220ED64:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,448(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 448);
	// lwz r29,448(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 448);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220ED84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220ed98
	if (cr6.eq) goto loc_8220ED98;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220eda8
	goto loc_8220EDA8;
loc_8220ED98:
	// lwz r10,140(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r10.u32);
loc_8220EDA8:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// beq cr6,0x8220ee10
	if (cr6.eq) goto loc_8220EE10;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ee00
	if (!cr6.eq) goto loc_8220EE00;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220EDD8;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220EDE0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25916
	ctx.r5.s64 = ctx.r11.s64 + -25916;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EDF4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// stw r3,11000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11000, ctx.r3.u32);
	// b 0x8220ee04
	goto loc_8220EE04;
loc_8220EE00:
	// lwz r3,11000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11000);
loc_8220EE04:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220EE10:
	// lwz r10,432(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 432);
	// lwz r9,432(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220ee70
	if (cr6.eq) goto loc_8220EE70;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ee60
	if (!cr6.eq) goto loc_8220EE60;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220EE3C;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220EE44;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25884
	ctx.r5.s64 = ctx.r11.s64 + -25884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EE58;
	sub_822ADCF0(ctx, base);
	// stw r3,10996(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10996, ctx.r3.u32);
	// b 0x8220ee64
	goto loc_8220EE64;
loc_8220EE60:
	// lwz r3,10996(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10996);
loc_8220EE64:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220EE70:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,488(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// lwz r29,488(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 488);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220EE90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220eea4
	if (cr6.eq) goto loc_8220EEA4;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220eeb4
	goto loc_8220EEB4;
loc_8220EEA4:
	// lwz r10,140(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r10.u32);
loc_8220EEB4:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220ef18
	if (cr6.eq) goto loc_8220EF18;
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220ef08
	if (!cr6.eq) goto loc_8220EF08;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220EEE4;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220EEEC;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25856
	ctx.r5.s64 = ctx.r11.s64 + -25856;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EF00;
	sub_822ADCF0(ctx, base);
	// stw r3,10992(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10992, ctx.r3.u32);
	// b 0x8220ef0c
	goto loc_8220EF0C;
loc_8220EF08:
	// lwz r3,10992(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10992);
loc_8220EF0C:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220EF18:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,492(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 492);
	// lwz r29,492(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 492);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220EF38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220ef4c
	if (cr6.eq) goto loc_8220EF4C;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x8220ef5c
	goto loc_8220EF5C;
loc_8220EF4C:
	// lwz r10,140(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r10.u32);
loc_8220EF5C:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220efc0
	if (cr6.eq) goto loc_8220EFC0;
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220efb0
	if (!cr6.eq) goto loc_8220EFB0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220EF8C;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220EF94;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25828
	ctx.r5.s64 = ctx.r11.s64 + -25828;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220EFA8;
	sub_822ADCF0(ctx, base);
	// stw r3,10988(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10988, ctx.r3.u32);
	// b 0x8220efb4
	goto loc_8220EFB4;
loc_8220EFB0:
	// lwz r3,10988(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10988);
loc_8220EFB4:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220EFC0:
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220f324
	if (cr6.eq) goto loc_8220F324;
	// addi r4,r24,420
	ctx.r4.s64 = ctx.r24.s64 + 420;
	// addi r3,r26,420
	ctx.r3.s64 = ctx.r26.s64 + 420;
	// bl 0x82170820
	ctx.lr = 0x8220EFDC;
	sub_82170820(ctx, base);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220f03c
	if (cr6.eq) goto loc_8220F03C;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f02c
	if (!cr6.eq) goto loc_8220F02C;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220F004;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220F00C;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28060
	ctx.r5.s64 = ctx.r11.s64 + -28060;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220F020;
	sub_822ADCF0(ctx, base);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// stw r3,10984(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10984, ctx.r3.u32);
	// b 0x8220f030
	goto loc_8220F030;
loc_8220F02C:
	// lwz r3,10984(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10984);
loc_8220F030:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220F03C:
	// lwz r10,416(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 416);
	// lwz r9,416(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 416);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220f0a8
	if (cr6.eq) goto loc_8220F0A8;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f098
	if (!cr6.eq) goto loc_8220F098;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220F070;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220F078;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25800
	ctx.r5.s64 = ctx.r11.s64 + -25800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220F08C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// stw r3,10980(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10980, ctx.r3.u32);
	// b 0x8220f09c
	goto loc_8220F09C;
loc_8220F098:
	// lwz r3,10980(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10980);
loc_8220F09C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220F0A8:
	// lwz r10,480(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 480);
	// lwz r9,480(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 480);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220f10c
	if (cr6.eq) goto loc_8220F10C;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f0fc
	if (!cr6.eq) goto loc_8220F0FC;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220F0D4;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220F0DC;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25776
	ctx.r5.s64 = ctx.r11.s64 + -25776;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220F0F0;
	sub_822ADCF0(ctx, base);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// stw r3,10976(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10976, ctx.r3.u32);
	// b 0x8220f100
	goto loc_8220F100;
loc_8220F0FC:
	// lwz r3,10976(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10976);
loc_8220F100:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220F10C:
	// lwz r10,484(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 484);
	// lwz r9,484(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 484);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220f170
	if (cr6.eq) goto loc_8220F170;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f160
	if (!cr6.eq) goto loc_8220F160;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220F138;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220F140;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25752
	ctx.r5.s64 = ctx.r11.s64 + -25752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220F154;
	sub_822ADCF0(ctx, base);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// stw r3,10972(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10972, ctx.r3.u32);
	// b 0x8220f164
	goto loc_8220F164;
loc_8220F160:
	// lwz r3,10972(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10972);
loc_8220F164:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220F170:
	// lwz r10,416(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 416);
	// lwz r9,416(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 416);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220f1dc
	if (cr6.eq) goto loc_8220F1DC;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f1cc
	if (!cr6.eq) goto loc_8220F1CC;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220F1A4;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220F1AC;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25732
	ctx.r5.s64 = ctx.r11.s64 + -25732;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220F1C0;
	sub_822ADCF0(ctx, base);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// stw r3,10968(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10968, ctx.r3.u32);
	// b 0x8220f1d0
	goto loc_8220F1D0;
loc_8220F1CC:
	// lwz r3,10968(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10968);
loc_8220F1D0:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220F1DC:
	// lwz r10,436(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 436);
	// lwz r9,436(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 436);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220f240
	if (cr6.eq) goto loc_8220F240;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f230
	if (!cr6.eq) goto loc_8220F230;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220F208;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220F210;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25700
	ctx.r5.s64 = ctx.r11.s64 + -25700;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220F224;
	sub_822ADCF0(ctx, base);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// stw r3,10964(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10964, ctx.r3.u32);
	// b 0x8220f234
	goto loc_8220F234;
loc_8220F230:
	// lwz r3,10964(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10964);
loc_8220F234:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220F240:
	// lwz r10,440(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// lwz r9,440(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 440);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220f2a4
	if (cr6.eq) goto loc_8220F2A4;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f294
	if (!cr6.eq) goto loc_8220F294;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220F26C;
	sub_821CE630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220F274;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25664
	ctx.r5.s64 = ctx.r11.s64 + -25664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220F288;
	sub_822ADCF0(ctx, base);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// stw r3,10960(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10960, ctx.r3.u32);
	// b 0x8220f298
	goto loc_8220F298;
loc_8220F294:
	// lwz r3,10960(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10960);
loc_8220F298:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8220F2A4:
	// lwz r10,416(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 416);
	// lwz r9,416(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 416);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220f324
	if (cr6.eq) goto loc_8220F324;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f30c
	if (!cr6.eq) goto loc_8220F30C;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// bl 0x821ce630
	ctx.lr = 0x8220F2D8;
	sub_821CE630(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220F2E0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25632
	ctx.r5.s64 = ctx.r11.s64 + -25632;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220F2F4;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,10956(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10956, ctx.r3.u32);
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8220F30C:
	// lwz r3,10956(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10956);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8220F324:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220F330"))) PPC_WEAK_FUNC(sub_8220F330);
PPC_FUNC_IMPL(__imp__sub_8220F330) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x8220F338;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823190d8
	ctx.lr = 0x8220F348;
	sub_823190D8(ctx, base);
	// addi r11,r30,536
	ctx.r11.s64 = ctx.r30.s64 + 536;
	// addi r10,r31,536
	ctx.r10.s64 = ctx.r31.s64 + 536;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f0,f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-3116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8220f3e4
	if (cr6.gt) goto loc_8220F3E4;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,25184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220f454
	if (!cr6.gt) goto loc_8220F454;
loc_8220F3E4:
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// lwz r11,10952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10952);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220f43c
	if (!cr6.eq) goto loc_8220F43C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,10952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10952, ctx.r11.u32);
	// bl 0x821cb538
	ctx.lr = 0x8220F408;
	sub_821CB538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x8220F410;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25576
	ctx.r5.s64 = ctx.r11.s64 + -25576;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8220F424;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,10948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10948, ctx.r3.u32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_8220F43C:
	// lwz r3,10948(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10948);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_8220F454:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220F460"))) PPC_WEAK_FUNC(sub_8220F460);
PPC_FUNC_IMPL(__imp__sub_8220F460) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r31,60(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x821e58f0
	ctx.lr = 0x8220F47C;
	sub_821E58F0(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220F4A0"))) PPC_WEAK_FUNC(sub_8220F4A0);
PPC_FUNC_IMPL(__imp__sub_8220F4A0) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r31,60(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8220fd40
	ctx.lr = 0x8220F4BC;
	sub_8220FD40(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220F4E0"))) PPC_WEAK_FUNC(sub_8220F4E0);
PPC_FUNC_IMPL(__imp__sub_8220F4E0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8220F4E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82190cc0
	ctx.lr = 0x8220F500;
	sub_82190CC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8220f580
	if (cr6.eq) goto loc_8220F580;
	// lwz r11,2132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220f580
	if (cr6.eq) goto loc_8220F580;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r11,732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220f540
	if (cr6.eq) goto loc_8220F540;
	// bl 0x821cd9d0
	ctx.lr = 0x8220F52C;
	sub_821CD9D0(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r11,732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// lwz r11,416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8220f56c
	if (!cr6.eq) goto loc_8220F56C;
loc_8220F540:
	// lwz r3,428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f558
	if (cr6.eq) goto loc_8220F558;
	// bl 0x8220fce8
	ctx.lr = 0x8220F550;
	sub_8220FCE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220f56c
	if (!cr6.eq) goto loc_8220F56C;
loc_8220F558:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2132);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822ec498
	ctx.lr = 0x8220F568;
	sub_822EC498(ctx, base);
	// b 0x8220f5a8
	goto loc_8220F5A8;
loc_8220F56C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2132);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x822ec498
	ctx.lr = 0x8220F57C;
	sub_822EC498(ctx, base);
	// b 0x8220f5a8
	goto loc_8220F5A8;
loc_8220F580:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208848
	ctx.lr = 0x8220F588;
	sub_82208848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f5f8
	if (cr6.eq) goto loc_8220F5F8;
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f5f8
	if (cr6.eq) goto loc_8220F5F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ec498
	ctx.lr = 0x8220F5A4;
	sub_822EC498(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8220F5A8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f5f8
	if (cr6.eq) goto loc_8220F5F8;
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8220f5ec
	if (cr6.eq) goto loc_8220F5EC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8220f5fc
	if (cr0.gt) goto loc_8220F5FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_8220F5EC:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8220f5fc
	if (cr6.gt) goto loc_8220F5FC;
loc_8220F5F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220F5FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220F604"))) PPC_WEAK_FUNC(sub_8220F604);
PPC_FUNC_IMPL(__imp__sub_8220F604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220F608"))) PPC_WEAK_FUNC(sub_8220F608);
PPC_FUNC_IMPL(__imp__sub_8220F608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x8220F610;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lbz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 8);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r21,432(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 432);
	// lbz r14,433(r11)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r11.u32 + 433);
	// lbz r19,434(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 434);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lbz r18,435(r11)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r11.u32 + 435);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// beq cr6,0x8220f688
	if (cr6.eq) goto loc_8220F688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c7780
	ctx.lr = 0x8220F684;
	sub_822C7780(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8220F688:
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x8220f6a0
	if (cr6.eq) goto loc_8220F6A0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c7780
	ctx.lr = 0x8220F69C;
	sub_822C7780(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8220F6A0:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8220f6b8
	if (cr6.eq) goto loc_8220F6B8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c7780
	ctx.lr = 0x8220F6B4;
	sub_822C7780(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8220F6B8:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8220f6d0
	if (cr6.eq) goto loc_8220F6D0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c7780
	ctx.lr = 0x8220F6CC;
	sub_822C7780(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8220F6D0:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// stw r20,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r20.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8220fa5c
	if (!cr6.gt) goto loc_8220FA5C;
	// lis r16,-32064
	ctx.r16.s64 = -2101346304;
	// lis r15,-32065
	ctx.r15.s64 = -2101411840;
loc_8220F6E8:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220f760
	if (!cr6.eq) goto loc_8220F760;
	// bl 0x828d0a58
	ctx.lr = 0x8220F6F8;
	sub_828D0A58(ctx, base);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r10,r3,r30
	ctx.r10.s32 = ctx.r3.s32 / ctx.r30.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// subf r22,r10,r3
	ctx.r22.s64 = ctx.r3.s64 - ctx.r10.s64;
	// twlgei r11,-1
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r30,0
	// lwzx r25,r11,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r25,r21
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8220f768
	if (!cr6.eq) goto loc_8220F768;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8220fa34
	if (cr6.eq) goto loc_8220FA34;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8220f4e0
	ctx.lr = 0x8220F748;
	sub_8220F4E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220fa34
	if (cr6.eq) goto loc_8220FA34;
loc_8220F750:
	// stw r31,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r31.u32);
loc_8220F754:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220fa5c
	if (cr6.eq) goto loc_8220FA5C;
loc_8220F760:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// b 0x8220fa60
	goto loc_8220FA60;
loc_8220F768:
	// cmplw cr6,r25,r14
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x8220f798
	if (!cr6.eq) goto loc_8220F798;
	// lwz r31,4(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8220fa34
	if (cr6.eq) goto loc_8220FA34;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8220f4e0
	ctx.lr = 0x8220F78C;
	sub_8220F4E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220f750
	if (!cr6.eq) goto loc_8220F750;
	// b 0x8220fa34
	goto loc_8220FA34;
loc_8220F798:
	// lwz r11,-11976(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + -11976);
	// lwz r10,672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8220fa34
	if (!cr6.gt) goto loc_8220FA34;
	// lwz r11,668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220fa34
	if (cr6.eq) goto loc_8220FA34;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220fa34
	if (cr6.eq) goto loc_8220FA34;
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220fa34
	if (cr6.eq) goto loc_8220FA34;
	// lwz r11,-24420(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + -24420);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,808(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 808);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220f910
	if (cr6.eq) goto loc_8220F910;
	// addi r27,r10,204
	ctx.r27.s64 = ctx.r10.s64 + 204;
loc_8220F7F0:
	// lwz r3,776(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 776);
	// bl 0x82208948
	ctx.lr = 0x8220F7F8;
	sub_82208948(ctx, base);
	// lfs f10,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f9,212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4832(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4832);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmadds f13,f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8220f83c
	if (cr6.lt) goto loc_8220F83C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220f900
	if (!cr6.eq) goto loc_8220F900;
loc_8220F83C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220f900
	if (cr6.eq) goto loc_8220F900;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220f900
	if (cr6.eq) goto loc_8220F900;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f900
	if (!cr6.eq) goto loc_8220F900;
	// lwz r10,648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8220f900
	if (!cr6.gt) goto loc_8220F900;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220f900
	if (!cr6.eq) goto loc_8220F900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82190cc0
	ctx.lr = 0x8220F884;
	sub_82190CC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8220f900
	if (cr6.eq) goto loc_8220F900;
	// lwz r11,1096(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1096);
	// rlwinm r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220f900
	if (!cr6.eq) goto loc_8220F900;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x821fc270
	ctx.lr = 0x8220F8A8;
	sub_821FC270(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// beq cr6,0x8220f8c4
	if (cr6.eq) goto loc_8220F8C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fc270
	ctx.lr = 0x8220F8BC;
	sub_821FC270(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x8220f8c8
	goto loc_8220F8C8;
loc_8220F8C4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8220F8C8:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220f8e8
	if (cr6.eq) goto loc_8220F8E8;
	// cmplw cr6,r25,r19
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8220f8f0
	if (cr6.eq) goto loc_8220F8F0;
	// b 0x8220f900
	goto loc_8220F900;
loc_8220F8E8:
	// cmplw cr6,r25,r18
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8220f900
	if (!cr6.eq) goto loc_8220F900;
loc_8220F8F0:
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c7780
	ctx.lr = 0x8220F900;
	sub_822C7780(ctx, base);
loc_8220F900:
	// lwz r30,432(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8220f7f0
	if (!cr6.eq) goto loc_8220F7F0;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_8220F910:
	// lwz r11,140(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// lwz r3,776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// bl 0x82208948
	ctx.lr = 0x8220F91C;
	sub_82208948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220f9b4
	if (cr6.eq) goto loc_8220F9B4;
	// lwz r31,916(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8220f9b4
	if (cr6.eq) goto loc_8220F9B4;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220f9b4
	if (cr6.eq) goto loc_8220F9B4;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f95c
	if (cr6.eq) goto loc_8220F95C;
	// bl 0x821fc270
	ctx.lr = 0x8220F954;
	sub_821FC270(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// b 0x8220f960
	goto loc_8220F960;
loc_8220F95C:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8220F960:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8220f970
	if (cr6.eq) goto loc_8220F970;
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// b 0x8220f974
	goto loc_8220F974;
loc_8220F970:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8220F974:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220f994
	if (cr6.eq) goto loc_8220F994;
	// cmplw cr6,r25,r19
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8220f99c
	if (cr6.eq) goto loc_8220F99C;
	// b 0x8220f9b4
	goto loc_8220F9B4;
loc_8220F994:
	// cmplw cr6,r25,r18
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8220f9b4
	if (!cr6.eq) goto loc_8220F9B4;
loc_8220F99C:
	// lwz r11,916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x822c7780
	ctx.lr = 0x8220F9B0;
	sub_822C7780(ctx, base);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_8220F9B4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8220fa34
	if (!cr6.gt) goto loc_8220FA34;
loc_8220F9BC:
	// bl 0x828d0a58
	ctx.lr = 0x8220F9C0;
	sub_828D0A58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// divw r9,r11,r29
	ctx.r9.s32 = ctx.r11.s32 / ctx.r29.s32;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// subf r31,r9,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// twllei r29,0
	// andc r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8220f4e0
	ctx.lr = 0x8220FA00;
	sub_8220F4E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220fa30
	if (!cr6.eq) goto loc_8220FA30;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232ad68
	ctx.lr = 0x8220FA20;
	sub_8232AD68(ctx, base);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x8220f9bc
	if (cr6.gt) goto loc_8220F9BC;
	// b 0x8220fa34
	goto loc_8220FA34;
loc_8220FA30:
	// stw r30,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r30.u32);
loc_8220FA34:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8232ad68
	ctx.lr = 0x8220FA4C;
	sub_8232AD68(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x8220f6e8
	if (cr6.gt) goto loc_8220F6E8;
	// b 0x8220f754
	goto loc_8220F754;
loc_8220FA5C:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_8220FA60:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232ad68
	ctx.lr = 0x8220FA78;
	sub_8232AD68(ctx, base);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r31,-32065
	ctx.r31.s64 = -2101411840;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8220fab0
	if (cr6.eq) goto loc_8220FAB0;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220fa9c
	if (!cr6.eq) goto loc_8220FA9C;
	// bl 0x82216290
	ctx.lr = 0x8220FA98;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_8220FA9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220FAB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8220FAB0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8232ad68
	ctx.lr = 0x8220FAC8;
	sub_8232AD68(ctx, base);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220fafc
	if (cr6.eq) goto loc_8220FAFC;
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220fae8
	if (!cr6.eq) goto loc_8220FAE8;
	// bl 0x82216290
	ctx.lr = 0x8220FAE4;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11780);
loc_8220FAE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220FAFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8220FAFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220FB08"))) PPC_WEAK_FUNC(sub_8220FB08);
PPC_FUNC_IMPL(__imp__sub_8220FB08) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2800
	ctx.lr = 0x8220FB10;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// std r5,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x8220f608
	ctx.lr = 0x8220FB3C;
	sub_8220F608(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r23,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
	// beq cr6,0x8220fce0
	if (cr6.eq) goto loc_8220FCE0;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8220fce0
	if (cr6.eq) goto loc_8220FCE0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82190cc0
	ctx.lr = 0x8220FB64;
	sub_82190CC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8220fbd0
	if (cr6.eq) goto loc_8220FBD0;
	// lwz r3,2132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fbd0
	if (cr6.eq) goto loc_8220FBD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ec498
	ctx.lr = 0x8220FB84;
	sub_822EC498(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220fbb0
	if (cr6.eq) goto loc_8220FBB0;
	// bl 0x821cd9d0
	ctx.lr = 0x8220FB9C;
	sub_821CD9D0(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// lwz r11,416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8220fbc8
	if (!cr6.eq) goto loc_8220FBC8;
loc_8220FBB0:
	// lwz r3,428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fbf8
	if (cr6.eq) goto loc_8220FBF8;
	// bl 0x8220fce8
	ctx.lr = 0x8220FBC0;
	sub_8220FCE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220fbf8
	if (cr6.eq) goto loc_8220FBF8;
loc_8220FBC8:
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8220fbfc
	goto loc_8220FBFC;
loc_8220FBD0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82208848
	ctx.lr = 0x8220FBD8;
	sub_82208848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fce0
	if (cr6.eq) goto loc_8220FCE0;
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fce0
	if (cr6.eq) goto loc_8220FCE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ec498
	ctx.lr = 0x8220FBF4;
	sub_822EC498(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8220FBF8:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_8220FBFC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8220fce0
	if (cr6.eq) goto loc_8220FCE0;
	// addi r11,r27,3
	ctx.r11.s64 = ctx.r27.s64 + 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220fc2c
	if (cr6.eq) goto loc_8220FC2C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8220fc30
	if (!cr6.eq) goto loc_8220FC30;
loc_8220FC2C:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
loc_8220FC30:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8220fce0
	if (!cr6.gt) goto loc_8220FCE0;
	// bl 0x828d0a58
	ctx.lr = 0x8220FC40;
	sub_828D0A58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// twllei r31,0
	// divw r7,r11,r31
	ctx.r7.s32 = ctx.r11.s32 / ctx.r31.s32;
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// twlgei r9,-1
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170670
	ctx.lr = 0x8220FC90;
	sub_82170670(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// stb r27,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r27.u8);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220fcd8
	if (cr6.eq) goto loc_8220FCD8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8220fcc8
	if (cr6.eq) goto loc_8220FCC8;
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2850
	__restgprlr_22(ctx, base);
	return;
loc_8220FCC8:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2850
	__restgprlr_22(ctx, base);
	return;
loc_8220FCD8:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_8220FCE0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2850
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220FCE8"))) PPC_WEAK_FUNC(sub_8220FCE8);
PPC_FUNC_IMPL(__imp__sub_8220FCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8220FCF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-18504(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18504);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822aa9b0
	ctx.lr = 0x8220FD18;
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
	ctx.lr = 0x8220FD34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220FD40"))) PPC_WEAK_FUNC(sub_8220FD40);
PPC_FUNC_IMPL(__imp__sub_8220FD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,32052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32052);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220fe64
	if (!cr6.eq) goto loc_8220FE64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x8220FD70;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fde4
	if (cr6.eq) goto loc_8220FDE4;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
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
	// addi r11,r11,-14272
	ctx.r11.s64 = ctx.r11.s64 + -14272;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
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
	ctx.lr = 0x8220FDE0;
	sub_822ED768(ctx, base);
	// b 0x8220fde8
	goto loc_8220FDE8;
loc_8220FDE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220FDE8:
	// stw r3,32052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32052, ctx.r3.u32);
	// bl 0x821a7a90
	ctx.lr = 0x8220FDF0;
	sub_821A7A90(ctx, base);
	// lwz r11,32052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32052);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220fe0c
	if (cr6.eq) goto loc_8220FE0C;
	// bl 0x821a7a90
	ctx.lr = 0x8220FE00;
	sub_821A7A90(ctx, base);
	// lwz r11,32052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32052);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x8220fe14
	goto loc_8220FE14;
loc_8220FE0C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8220FE14:
	// bl 0x82170938
	ctx.lr = 0x8220FE18;
	sub_82170938(ctx, base);
	// lwz r11,32052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32052);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8220FE24;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32052);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220fe64
	if (cr6.eq) goto loc_8220FE64;
	// bl 0x82170ba8
	ctx.lr = 0x8220FE44;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,32052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32052);
	// bne cr6,0x8220fe64
	if (!cr6.eq) goto loc_8220FE64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220FE60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32052);
loc_8220FE64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220FE7C"))) PPC_WEAK_FUNC(sub_8220FE7C);
PPC_FUNC_IMPL(__imp__sub_8220FE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220FE80"))) PPC_WEAK_FUNC(sub_8220FE80);
PPC_FUNC_IMPL(__imp__sub_8220FE80) {
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
	// beq cr6,0x8220feac
	if (cr6.eq) goto loc_8220FEAC;
	// bl 0x82191870
	ctx.lr = 0x8220FEA0;
	sub_82191870(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-23152
	ctx.r11.s64 = ctx.r11.s64 + -23152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220FEAC:
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

__attribute__((alias("__imp__sub_8220FEC0"))) PPC_WEAK_FUNC(sub_8220FEC0);
PPC_FUNC_IMPL(__imp__sub_8220FEC0) {
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
	// bl 0x8220ff10
	ctx.lr = 0x8220FEE0;
	sub_8220FF10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220fef8
	if (cr6.eq) goto loc_8220FEF8;
	// bl 0x82170268
	ctx.lr = 0x8220FEF4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220FEF8:
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

__attribute__((alias("__imp__sub_8220FF10"))) PPC_WEAK_FUNC(sub_8220FF10);
PPC_FUNC_IMPL(__imp__sub_8220FF10) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23152
	ctx.r11.s64 = ctx.r11.s64 + -23152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8220FF38;
	sub_822A89B8(ctx, base);
	// addi r30,r31,440
	ctx.r30.s64 = ctx.r31.s64 + 440;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8220ff64
	if (cr6.eq) goto loc_8220FF64;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x8220FF64;
	sub_82170408(ctx, base);
loc_8220FF64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x8220FF6C;
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
	ctx.lr = 0x8220FF80;
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
	ctx.lr = 0x8220FF94;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x8220FF9C;
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

__attribute__((alias("__imp__sub_8220FFB4"))) PPC_WEAK_FUNC(sub_8220FFB4);
PPC_FUNC_IMPL(__imp__sub_8220FFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220FFB8"))) PPC_WEAK_FUNC(sub_8220FFB8);
PPC_FUNC_IMPL(__imp__sub_8220FFB8) {
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
	// beq cr6,0x8220ffe4
	if (cr6.eq) goto loc_8220FFE4;
	// bl 0x82191870
	ctx.lr = 0x8220FFD8;
	sub_82191870(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-24648
	ctx.r11.s64 = ctx.r11.s64 + -24648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220FFE4:
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

__attribute__((alias("__imp__sub_8220FFF8"))) PPC_WEAK_FUNC(sub_8220FFF8);
PPC_FUNC_IMPL(__imp__sub_8220FFF8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24648
	ctx.r11.s64 = ctx.r11.s64 + -24648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82210024;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ff10
	ctx.lr = 0x8221002C;
	sub_8220FF10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210044
	if (cr6.eq) goto loc_82210044;
	// bl 0x82170268
	ctx.lr = 0x82210040;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82210044:
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

__attribute__((alias("__imp__sub_8221005C"))) PPC_WEAK_FUNC(sub_8221005C);
PPC_FUNC_IMPL(__imp__sub_8221005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210060"))) PPC_WEAK_FUNC(sub_82210060);
PPC_FUNC_IMPL(__imp__sub_82210060) {
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
	// beq cr6,0x8221008c
	if (cr6.eq) goto loc_8221008C;
	// bl 0x82191870
	ctx.lr = 0x82210080;
	sub_82191870(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-24000
	ctx.r11.s64 = ctx.r11.s64 + -24000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8221008C:
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

__attribute__((alias("__imp__sub_822100A0"))) PPC_WEAK_FUNC(sub_822100A0);
PPC_FUNC_IMPL(__imp__sub_822100A0) {
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
	// bl 0x822100f0
	ctx.lr = 0x822100C0;
	sub_822100F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822100d8
	if (cr6.eq) goto loc_822100D8;
	// bl 0x82170268
	ctx.lr = 0x822100D4;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822100D8:
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

__attribute__((alias("__imp__sub_822100F0"))) PPC_WEAK_FUNC(sub_822100F0);
PPC_FUNC_IMPL(__imp__sub_822100F0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24000
	ctx.r11.s64 = ctx.r11.s64 + -24000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82210118;
	sub_822A89B8(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x82210158
	ctx.lr = 0x82210120;
	sub_82210158(ctx, base);
	// addi r30,r31,416
	ctx.r30.s64 = ctx.r31.s64 + 416;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82288288
	ctx.lr = 0x8221012C;
	sub_82288288(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82288288
	ctx.lr = 0x82210134;
	sub_82288288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82191130
	ctx.lr = 0x8221013C;
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

__attribute__((alias("__imp__sub_82210154"))) PPC_WEAK_FUNC(sub_82210154);
PPC_FUNC_IMPL(__imp__sub_82210154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210158"))) PPC_WEAK_FUNC(sub_82210158);
PPC_FUNC_IMPL(__imp__sub_82210158) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x82210160;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822101d0
	if (!cr6.gt) goto loc_822101D0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82210180:
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
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x822101A4;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822101b4
	if (cr6.eq) goto loc_822101B4;
	// bl 0x82170268
	ctx.lr = 0x822101B4;
	sub_82170268(ctx, base);
loc_822101B4:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82210180
	if (!cr6.eq) goto loc_82210180;
loc_822101D0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232ad68
	ctx.lr = 0x822101E8;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822101f8
	if (cr6.eq) goto loc_822101F8;
	// bl 0x82170268
	ctx.lr = 0x822101F8;
	sub_82170268(ctx, base);
loc_822101F8:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221020C"))) PPC_WEAK_FUNC(sub_8221020C);
PPC_FUNC_IMPL(__imp__sub_8221020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210210"))) PPC_WEAK_FUNC(sub_82210210);
PPC_FUNC_IMPL(__imp__sub_82210210) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-23352
	ctx.r11.s64 = ctx.r11.s64 + -23352;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210228"))) PPC_WEAK_FUNC(sub_82210228);
PPC_FUNC_IMPL(__imp__sub_82210228) {
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
	// bl 0x82210278
	ctx.lr = 0x82210248;
	sub_82210278(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210260
	if (cr6.eq) goto loc_82210260;
	// bl 0x82170268
	ctx.lr = 0x8221025C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82210260:
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

__attribute__((alias("__imp__sub_82210278"))) PPC_WEAK_FUNC(sub_82210278);
PPC_FUNC_IMPL(__imp__sub_82210278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x82210280;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,-23352
	ctx.r11.s64 = ctx.r11.s64 + -23352;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82210298;
	sub_822A89B8(ctx, base);
	// addi r31,r25,4032
	ctx.r31.s64 = ctx.r25.s64 + 4032;
	// li r26,164
	ctx.r26.s64 = 164;
	// lis r27,-32065
	ctx.r27.s64 = -2101411840;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822102A8:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8232ad68
	ctx.lr = 0x822102C8;
	sub_8232AD68(ctx, base);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822102fc
	if (cr6.eq) goto loc_822102FC;
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822102e8
	if (!cr6.eq) goto loc_822102E8;
	// bl 0x82216290
	ctx.lr = 0x822102E4;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
loc_822102E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822102FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822102FC:
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82210320;
	sub_8232AD68(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82210354
	if (cr6.eq) goto loc_82210354;
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82210340
	if (!cr6.eq) goto loc_82210340;
	// bl 0x82216290
	ctx.lr = 0x8221033C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
loc_82210340:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210354;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82210354:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x822102a8
	if (!cr6.lt) goto loc_822102A8;
	// addi r31,r25,60
	ctx.r31.s64 = ctx.r25.s64 + 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221c8d8
	ctx.lr = 0x82210380;
	sub_8221C8D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82210390
	if (cr6.eq) goto loc_82210390;
	// bl 0x82170268
	ctx.lr = 0x82210390;
	sub_82170268(ctx, base);
loc_82210390:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x822a8e90
	ctx.lr = 0x822103A4;
	sub_822A8E90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822103AC"))) PPC_WEAK_FUNC(sub_822103AC);
PPC_FUNC_IMPL(__imp__sub_822103AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822103B0"))) PPC_WEAK_FUNC(sub_822103B0);
PPC_FUNC_IMPL(__imp__sub_822103B0) {
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
	// beq cr6,0x822103dc
	if (cr6.eq) goto loc_822103DC;
	// bl 0x82191870
	ctx.lr = 0x822103D0;
	sub_82191870(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-25304
	ctx.r11.s64 = ctx.r11.s64 + -25304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822103DC:
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

__attribute__((alias("__imp__sub_822103F0"))) PPC_WEAK_FUNC(sub_822103F0);
PPC_FUNC_IMPL(__imp__sub_822103F0) {
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
	// bl 0x82210440
	ctx.lr = 0x82210410;
	sub_82210440(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210428
	if (cr6.eq) goto loc_82210428;
	// bl 0x82170268
	ctx.lr = 0x82210424;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82210428:
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

__attribute__((alias("__imp__sub_82210440"))) PPC_WEAK_FUNC(sub_82210440);
PPC_FUNC_IMPL(__imp__sub_82210440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x82210448;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-25304
	ctx.r11.s64 = ctx.r11.s64 + -25304;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82210460;
	sub_822A89B8(ctx, base);
	// addi r3,r30,4816
	ctx.r3.s64 = ctx.r30.s64 + 4816;
	// bl 0x821e8100
	ctx.lr = 0x82210468;
	sub_821E8100(ctx, base);
	// addi r11,r30,4816
	ctx.r11.s64 = ctx.r30.s64 + 4816;
	// li r29,99
	ctx.r29.s64 = 99;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lis r26,-32065
	ctx.r26.s64 = -2101411840;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8221047C:
	// addi r31,r31,-44
	ctx.r31.s64 = ctx.r31.s64 + -44;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82210498;
	sub_8232AD68(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822104cc
	if (cr6.eq) goto loc_822104CC;
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822104b8
	if (!cr6.eq) goto loc_822104B8;
	// bl 0x82216290
	ctx.lr = 0x822104B4;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11780);
loc_822104B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822104CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822104CC:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8221047c
	if (!cr6.lt) goto loc_8221047C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191130
	ctx.lr = 0x822104EC;
	sub_82191130(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822104F4"))) PPC_WEAK_FUNC(sub_822104F4);
PPC_FUNC_IMPL(__imp__sub_822104F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822104F8"))) PPC_WEAK_FUNC(sub_822104F8);
PPC_FUNC_IMPL(__imp__sub_822104F8) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r31,60(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82213be0
	ctx.lr = 0x82210514;
	sub_82213BE0(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210538"))) PPC_WEAK_FUNC(sub_82210538);
PPC_FUNC_IMPL(__imp__sub_82210538) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r31,60(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x821e47c8
	ctx.lr = 0x82210554;
	sub_821E47C8(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210578"))) PPC_WEAK_FUNC(sub_82210578);
PPC_FUNC_IMPL(__imp__sub_82210578) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r31,60(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82213280
	ctx.lr = 0x82210594;
	sub_82213280(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822105B8"))) PPC_WEAK_FUNC(sub_822105B8);
PPC_FUNC_IMPL(__imp__sub_822105B8) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r31,60(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82196b90
	ctx.lr = 0x822105D4;
	sub_82196B90(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822105F8"))) PPC_WEAK_FUNC(sub_822105F8);
PPC_FUNC_IMPL(__imp__sub_822105F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82210600;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82210628
	if (!cr6.eq) goto loc_82210628;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,-7956
	ctx.r4.s64 = ctx.r11.s64 + -7956;
	// bl 0x821704f8
	ctx.lr = 0x82210624;
	sub_821704F8(ctx, base);
	// b 0x8221064c
	goto loc_8221064C;
loc_82210628:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82210644
	if (!cr6.eq) goto loc_82210644;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,26968
	ctx.r4.s64 = ctx.r11.s64 + 26968;
	// bl 0x821704f8
	ctx.lr = 0x82210640;
	sub_821704F8(ctx, base);
	// b 0x8221064c
	goto loc_8221064C;
loc_82210644:
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x823647f0
	ctx.lr = 0x8221064C;
	sub_823647F0(ctx, base);
loc_8221064C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82210660
	if (cr6.eq) goto loc_82210660;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82210668
	goto loc_82210668;
loc_82210660:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16764
	ctx.r4.s64 = ctx.r11.s64 + 16764;
loc_82210668:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364678
	ctx.lr = 0x8221067C;
	sub_82364678(ctx, base);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r1,88
	ctx.r27.s64 = ctx.r1.s64 + 88;
	// ld r4,-20208(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20208);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x822aa9b0
	ctx.lr = 0x822106AC;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822106C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821fc470
	ctx.lr = 0x822106D0;
	sub_821FC470(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247b068
	ctx.lr = 0x822106DC;
	sub_8247B068(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822106E4"))) PPC_WEAK_FUNC(sub_822106E4);
PPC_FUNC_IMPL(__imp__sub_822106E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822106E8"))) PPC_WEAK_FUNC(sub_822106E8);
PPC_FUNC_IMPL(__imp__sub_822106E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x822106F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x821947e8
	ctx.lr = 0x8221071C;
	sub_821947E8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822107a8
	if (cr6.lt) goto loc_822107A8;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822107a8
	if (!cr6.lt) goto loc_822107A8;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// mulli r10,r30,240
	ctx.r10.s64 = ctx.r30.s64 * 240;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ld r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// bl 0x82212808
	ctx.lr = 0x82210748;
	sub_82212808(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822107a8
	if (cr6.eq) goto loc_822107A8;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// beq cr6,0x82210790
	if (cr6.eq) goto loc_82210790;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210784;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_82210790:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221079C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_822107A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822107B4"))) PPC_WEAK_FUNC(sub_822107B4);
PPC_FUNC_IMPL(__imp__sub_822107B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822107B8"))) PPC_WEAK_FUNC(sub_822107B8);
PPC_FUNC_IMPL(__imp__sub_822107B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x822107C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// blt cr6,0x82210878
	if (cr6.lt) goto loc_82210878;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82210878
	if (!cr6.lt) goto loc_82210878;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// mulli r10,r5,240
	ctx.r10.s64 = ctx.r5.s64 * 240;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ld r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// bl 0x82212808
	ctx.lr = 0x82210818;
	sub_82212808(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82210878
	if (cr6.eq) goto loc_82210878;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// beq cr6,0x82210860
	if (cr6.eq) goto loc_82210860;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210854;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_82210860:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221086C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82210878:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210884"))) PPC_WEAK_FUNC(sub_82210884);
PPC_FUNC_IMPL(__imp__sub_82210884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210888"))) PPC_WEAK_FUNC(sub_82210888);
PPC_FUNC_IMPL(__imp__sub_82210888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// blt cr6,0x82210938
	if (cr6.lt) goto loc_82210938;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82210938
	if (!cr6.lt) goto loc_82210938;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// mulli r10,r4,240
	ctx.r10.s64 = ctx.r4.s64 * 240;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ld r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// bl 0x822128f8
	ctx.lr = 0x822108DC;
	sub_822128F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82210934
	if (cr6.eq) goto loc_82210934;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// beq cr6,0x8221091c
	if (cr6.eq) goto loc_8221091C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210918;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82210934
	goto loc_82210934;
loc_8221091C:
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210928;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82210934:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82210938:
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

__attribute__((alias("__imp__sub_82210950"))) PPC_WEAK_FUNC(sub_82210950);
PPC_FUNC_IMPL(__imp__sub_82210950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// blt cr6,0x82210a00
	if (cr6.lt) goto loc_82210A00;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82210a00
	if (!cr6.lt) goto loc_82210A00;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// mulli r10,r4,240
	ctx.r10.s64 = ctx.r4.s64 * 240;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ld r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// bl 0x822129e8
	ctx.lr = 0x822109A4;
	sub_822129E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822109fc
	if (cr6.eq) goto loc_822109FC;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// beq cr6,0x822109e4
	if (cr6.eq) goto loc_822109E4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822109E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822109fc
	goto loc_822109FC;
loc_822109E4:
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822109F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_822109FC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82210A00:
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

__attribute__((alias("__imp__sub_82210A18"))) PPC_WEAK_FUNC(sub_82210A18);
PPC_FUNC_IMPL(__imp__sub_82210A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x82210A20;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// std r4,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r5.u64);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// lfs f8,24328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82210d08
	if (!cr6.gt) goto loc_82210D08;
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82210ce8
	if (!cr6.gt) goto loc_82210CE8;
	// lfs f11,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f11.f64 = double(temp.f32);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lfs f10,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f9.f64 = double(temp.f32);
loc_82210A80:
	// lwz r29,808(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,624(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ble cr6,0x82210b7c
	if (!cr6.gt) goto loc_82210B7C;
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_82210AB8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82210ad0
	if (!cr6.eq) goto loc_82210AD0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82210ae8
	if (cr6.eq) goto loc_82210AE8;
loc_82210AD0:
	// lwz r10,1448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82210ab8
	if (cr6.lt) goto loc_82210AB8;
	// b 0x82210b7c
	goto loc_82210B7C;
loc_82210AE8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82210b7c
	if (cr6.lt) goto loc_82210B7C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82210b00
	if (!cr6.eq) goto loc_82210B00;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82210b20
	if (cr6.eq) goto loc_82210B20;
loc_82210B00:
	// lwz r3,624(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82210b20
	if (cr6.eq) goto loc_82210B20;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82473c70
	ctx.lr = 0x82210B14;
	sub_82473C70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82210b30
	if (!cr6.eq) goto loc_82210B30;
loc_82210B20:
	// fmr f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f8.f64;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
	// b 0x82210b48
	goto loc_82210B48;
loc_82210B30:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f14c8
	ctx.lr = 0x82210B3C;
	sub_823F14C8(ctx, base);
	// lfs f12,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
loc_82210B48:
	// fsubs f13,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmadds f0,f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// blt cr6,0x82210b74
	if (cr6.lt) goto loc_82210B74;
	// fcmpu cr6,f0,f7
	cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x82210b7c
	if (!cr6.lt) goto loc_82210B7C;
loc_82210B74:
	// fmr f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f0.f64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_82210B7C:
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82210a80
	if (cr6.lt) goto loc_82210A80;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82210ce8
	if (cr6.lt) goto loc_82210CE8;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82210ce8
	if (!cr6.gt) goto loc_82210CE8;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r28,-32064
	ctx.r28.s64 = -2101346304;
	// lfd f31,25016(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 25016);
loc_82210BB4:
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// mulli r30,r26,56
	ctx.r30.s64 = ctx.r26.s64 * 56;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82210c40
	if (!cr6.gt) goto loc_82210C40;
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x82210be4
	if (cr6.gt) goto loc_82210BE4;
	// subf r25,r10,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r10.s64;
	// stw r24,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r24.u32);
	// b 0x82210bf4
	goto loc_82210BF4;
loc_82210BE4:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_82210BF4:
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82210c40
	if (cr6.gt) goto loc_82210C40;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-20260(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + -20260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa9b0
	ctx.lr = 0x82210C24;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210C40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82210C40:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x822ec498
	ctx.lr = 0x82210C4C;
	sub_822EC498(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,1444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,228(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsub f0,f31,f0
	ctx.f0.f64 = ctx.f31.f64 - ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82210CB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82210cd0
	if (!cr6.eq) goto loc_82210CD0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82210ce8
	if (cr6.eq) goto loc_82210CE8;
loc_82210CD0:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82210ce8
	if (cr6.eq) goto loc_82210CE8;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bgt cr6,0x82210bb4
	if (cr6.gt) goto loc_82210BB4;
loc_82210CE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210CFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r11.u32);
loc_82210D08:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210D14"))) PPC_WEAK_FUNC(sub_82210D14);
PPC_FUNC_IMPL(__imp__sub_82210D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210D18"))) PPC_WEAK_FUNC(sub_82210D18);
PPC_FUNC_IMPL(__imp__sub_82210D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x82210D20;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r11,1460(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1460);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211198
	if (cr6.eq) goto loc_82211198;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,52(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// bl 0x822ec498
	ctx.lr = 0x82210D90;
	sub_822EC498(ctx, base);
	// bl 0x821a7008
	ctx.lr = 0x82210D94;
	sub_821A7008(ctx, base);
	// lwz r11,1448(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1448);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r14,-32065
	ctx.r14.s64 = -2101411840;
	// ble cr6,0x8221103c
	if (!cr6.gt) goto loc_8221103C;
loc_82210DAC:
	// lwz r31,1444(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1444);
	// li r15,0
	ctx.r15.s64 = 0;
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82211008
	if (!cr6.gt) goto loc_82211008;
	// li r22,0
	ctx.r22.s64 = 0;
loc_82210DC8:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82210e24
	if (cr6.eq) goto loc_82210E24;
	// add r30,r27,r31
	ctx.r30.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x82212640
	ctx.lr = 0x82210DE8;
	sub_82212640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82210e24
	if (cr6.eq) goto loc_82210E24;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u32);
	// lwz r10,1444(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1444);
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u32);
	// b 0x82210fec
	goto loc_82210FEC;
loc_82210E24:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r19
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r19.s32, ctx.xer);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// add r28,r11,r22
	ctx.r28.u64 = ctx.r11.u64 + ctx.r22.u64;
	// ble cr6,0x82210eac
	if (!cr6.gt) goto loc_82210EAC;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r19,r11,32
	ctx.r19.s64 = ctx.r11.s64 + 32;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// bne cr6,0x82210e70
	if (!cr6.eq) goto loc_82210E70;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x82210eac
	if (cr6.eq) goto loc_82210EAC;
loc_82210E70:
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
	// rlwinm r31,r19,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82210e88
	if (!cr6.eq) goto loc_82210E88;
	// bl 0x82216290
	ctx.lr = 0x82210E84;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
loc_82210E88:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210EA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_82210EAC:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210ecc
	if (cr6.eq) goto loc_82210ECC;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82210ECC:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// lwz r11,1444(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1444);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
	// cmpw cr6,r21,r17
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x82210f44
	if (!cr6.gt) goto loc_82210F44;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r17,r11,32
	ctx.r17.s64 = ctx.r11.s64 + 32;
	// bne cr6,0x82210f0c
	if (!cr6.eq) goto loc_82210F0C;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82210f44
	if (cr6.eq) goto loc_82210F44;
loc_82210F0C:
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
	// rlwinm r31,r17,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82210f24
	if (!cr6.eq) goto loc_82210F24;
	// bl 0x82216290
	ctx.lr = 0x82210F20;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
loc_82210F24:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210F40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82210F44:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210f5c
	if (cr6.eq) goto loc_82210F5C;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82210F5C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r11,1444(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1444);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
	// cmpw cr6,r23,r18
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x82210fd4
	if (!cr6.gt) goto loc_82210FD4;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r18,r11,32
	ctx.r18.s64 = ctx.r11.s64 + 32;
	// bne cr6,0x82210f9c
	if (!cr6.eq) goto loc_82210F9C;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82210fd4
	if (cr6.eq) goto loc_82210FD4;
loc_82210F9C:
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
	// rlwinm r31,r18,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82210fb4
	if (!cr6.eq) goto loc_82210FB4;
	// bl 0x82216290
	ctx.lr = 0x82210FB0;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
loc_82210FB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210FD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82210FD4:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210fec
	if (cr6.eq) goto loc_82210FEC;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82210FEC:
	// lwz r31,1444(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1444);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r15,r11
	cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82210dc8
	if (cr6.lt) goto loc_82210DC8;
loc_82211008:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r27,56
	ctx.r27.s64 = ctx.r27.s64 + 56;
	// lwz r11,1448(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1448);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x82210dac
	if (cr6.lt) goto loc_82210DAC;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
loc_8221103C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x822110b4
	if (!cr6.gt) goto loc_822110B4;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// subf r28,r26,r25
	ctx.r28.s64 = ctx.r25.s64 - ctx.r26.s64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lfd f31,25016(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 25016);
loc_82211058:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r3,1460(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1460);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsub f0,f31,f0
	ctx.f0.f64 = ctx.f31.f64 - ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8241bc88
	ctx.lr = 0x822110A0;
	sub_8241BC88(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82211058
	if (!cr6.eq) goto loc_82211058;
loc_822110B4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8232ad68
	ctx.lr = 0x822110CC;
	sub_8232AD68(ctx, base);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82211100
	if (cr6.eq) goto loc_82211100;
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822110ec
	if (!cr6.eq) goto loc_822110EC;
	// bl 0x82216290
	ctx.lr = 0x822110E8;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
loc_822110EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82211100:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8232ad68
	ctx.lr = 0x82211118;
	sub_8232AD68(ctx, base);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221114c
	if (cr6.eq) goto loc_8221114C;
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82211138
	if (!cr6.eq) goto loc_82211138;
	// bl 0x82216290
	ctx.lr = 0x82211134;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
loc_82211138:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221114C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8221114C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8232ad68
	ctx.lr = 0x82211164;
	sub_8232AD68(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82211198
	if (cr6.eq) goto loc_82211198;
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82211184
	if (!cr6.eq) goto loc_82211184;
	// bl 0x82216290
	ctx.lr = 0x82211180;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -11780);
loc_82211184:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211198;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82211198:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822111A4"))) PPC_WEAK_FUNC(sub_822111A4);
PPC_FUNC_IMPL(__imp__sub_822111A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822111A8"))) PPC_WEAK_FUNC(sub_822111A8);
PPC_FUNC_IMPL(__imp__sub_822111A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x822111B0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x823caf40
	ctx.lr = 0x822111CC;
	sub_823CAF40(ctx, base);
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822112d8
	if (cr6.eq) goto loc_822112D8;
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221170c
	if (cr6.eq) goto loc_8221170C;
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221170c
	if (!cr6.gt) goto loc_8221170C;
	// lfs f0,1648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f13,1668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,-31680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31680);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,1668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1668, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x822112a4
	if (!cr6.lt) goto loc_822112A4;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// ble cr6,0x8221170c
	if (!cr6.gt) goto loc_8221170C;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f30,24984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24984);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,27200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	ctx.f29.f64 = double(temp.f32);
loc_82211238:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221127c
	if (cr6.eq) goto loc_8221127C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f1,1668(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f1.f64 = double(temp.f32);
	// ld r4,1672(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1672);
	// bl 0x8241bc88
	ctx.lr = 0x82211258;
	sub_8241BC88(ctx, base);
	// lfs f0,1668(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8221127c
	if (!cr6.gt) goto loc_8221127C;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// ld r4,1680(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1680);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x8241bc88
	ctx.lr = 0x8221127C;
	sub_8241BC88(ctx, base);
loc_8221127C:
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82211238
	if (cr6.lt) goto loc_82211238;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_822112A4:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// bl 0x823b5dc8
	ctx.lr = 0x822112C4;
	sub_823B5DC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_822112D8:
	// lbz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822115e8
	if (!cr6.eq) goto loc_822115E8;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r11,512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// rlwinm r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f29,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x8221135c
	if (cr6.eq) goto loc_8221135C;
	// lfs f0,1384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8221135c
	if (!cr6.gt) goto loc_8221135C;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-20404(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20404);
	// bl 0x822aa9b0
	ctx.lr = 0x82211330;
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
	ctx.lr = 0x8221134C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221170c
	if (!cr6.eq) goto loc_8221170C;
loc_8221135C:
	// lwz r11,1028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822114d8
	if (cr6.eq) goto loc_822114D8;
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822114d8
	if (cr6.eq) goto loc_822114D8;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,1256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f31,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822113c4
	if (!cr6.gt) goto loc_822113C4;
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822113c4
	if (cr6.eq) goto loc_822113C4;
	// lwz r3,1688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822113c4
	if (cr6.eq) goto loc_822113C4;
	// bl 0x822e5258
	ctx.lr = 0x822113B8;
	sub_822E5258(ctx, base);
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r11.u32);
loc_822113C4:
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// rlwinm r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221147c
	if (cr6.eq) goto loc_8221147C;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,1256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,-2492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2492);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221147c
	if (!cr6.gt) goto loc_8221147C;
	// lfs f0,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,1260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// lfs f13,10812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10812);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82211470
	if (!cr6.gt) goto loc_82211470;
	// lwz r11,884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211428
	if (cr6.eq) goto loc_82211428;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213140
	ctx.lr = 0x82211428;
	sub_82213140(ctx, base);
loc_82211428:
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221146c
	if (!cr6.gt) goto loc_8221146C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8221143C:
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82211458
	if (cr6.eq) goto loc_82211458;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82213140
	ctx.lr = 0x82211458;
	sub_82213140(ctx, base);
loc_82211458:
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,240
	ctx.r29.s64 = ctx.r29.s64 + 240;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221143c
	if (cr6.lt) goto loc_8221143C;
loc_8221146C:
	// stfs f29,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
loc_82211470:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
loc_8221147C:
	// lfs f0,1464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82211578
	if (!cr6.gt) goto loc_82211578;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// ld r4,-20568(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20568);
	// bl 0x822aa9b0
	ctx.lr = 0x822114A8;
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
	ctx.lr = 0x822114C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221170c
	if (!cr6.eq) goto loc_8221170C;
	// b 0x82211578
	goto loc_82211578;
loc_822114D8:
	// lwz r3,1688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82211574
	if (cr6.eq) goto loc_82211574;
	// rlwinm r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211554
	if (cr6.eq) goto loc_82211554;
	// lfs f13,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,27196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82211554
	if (!cr6.gt) goto loc_82211554;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,1116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82211554
	if (!cr6.gt) goto loc_82211554;
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211574
	if (!cr6.eq) goto loc_82211574;
	// bl 0x822e5148
	ctx.lr = 0x82211548;
	sub_822E5148(ctx, base);
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// b 0x82211570
	goto loc_82211570;
loc_82211554:
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211574
	if (cr6.eq) goto loc_82211574;
	// bl 0x822e5258
	ctx.lr = 0x82211568;
	sub_822E5258(ctx, base);
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_82211570:
	// stw r11,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r11.u32);
loc_82211574:
	// stfs f29,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
loc_82211578:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822115e8
	if (!cr6.eq) goto loc_822115E8;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,1348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1348);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x822115e8
	if (!cr6.lt) goto loc_822115E8;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822115e8
	if (cr6.lt) goto loc_822115E8;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-19612(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -19612);
	// bl 0x822aa9b0
	ctx.lr = 0x822115BC;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822115D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221170c
	if (!cr6.eq) goto loc_8221170C;
loc_822115E8:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221163c
	if (cr6.eq) goto loc_8221163C;
	// lbz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82211610
	if (cr6.eq) goto loc_82211610;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238d080
	ctx.lr = 0x82211608;
	sub_8238D080(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221163c
	if (cr6.eq) goto loc_8221163C;
loc_82211610:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// lwz r10,924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 924);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r6,r9,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221163C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8221163C:
	// lbz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8221170c
	if (cr6.eq) goto loc_8221170C;
	// lhz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1252);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822116b4
	if (cr6.eq) goto loc_822116B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x822ec498
	ctx.lr = 0x82211664;
	sub_822EC498(ctx, base);
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// lwz r10,648(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822116b4
	if (!cr6.lt) goto loc_822116B4;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-20876(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20876);
	// bl 0x822aa9b0
	ctx.lr = 0x8221168C;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822116A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r11,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r11.u32);
loc_822116B4:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lwz r10,648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82211704
	if (!cr6.lt) goto loc_82211704;
	// lis r9,-32064
	ctx.r9.s64 = -2101346304;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// ld r4,-20912(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + -20912);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822aa9b0
	ctx.lr = 0x822116E8;
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
	ctx.lr = 0x82211704;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82211704:
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
loc_8221170C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211720"))) PPC_WEAK_FUNC(sub_82211720);
PPC_FUNC_IMPL(__imp__sub_82211720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82211728;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r27.u64);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82211868
	if (!cr6.lt) goto loc_82211868;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822117b8
	if (!cr6.eq) goto loc_822117B8;
	// lwz r30,860(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822117b8
	if (cr6.eq) goto loc_822117B8;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822117b8
	if (!cr6.eq) goto loc_822117B8;
	// bl 0x821ce4f0
	ctx.lr = 0x82211774;
	sub_821CE4F0(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211794
	if (cr6.eq) goto loc_82211794;
loc_82211780:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822117a4
	if (cr6.eq) goto loc_822117A4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211780
	if (!cr6.eq) goto loc_82211780;
loc_82211794:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822117ac
	if (cr6.eq) goto loc_822117AC;
loc_822117A4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x822117b0
	goto loc_822117B0;
loc_822117AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822117B0:
	// lwz r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_822117B8:
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// mulli r30,r29,240
	ctx.r30.s64 = ctx.r29.s64 * 240;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211868
	if (cr6.eq) goto loc_82211868;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// lwz r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82211808
	if (cr6.eq) goto loc_82211808;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rldicr r7,r28,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 888);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82211808:
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82211868
	if (!cr6.gt) goto loc_82211868;
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_8221182C:
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221184c
	if (cr6.eq) goto loc_8221184C;
	// addi r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 + 220;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_8221184C:
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8221182c
	if (cr6.lt) goto loc_8221182C;
loc_82211868:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211870"))) PPC_WEAK_FUNC(sub_82211870);
PPC_FUNC_IMPL(__imp__sub_82211870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82211878;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822118A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// mulli r10,r30,240
	ctx.r10.s64 = ctx.r30.s64 * 240;
	// lwz r4,808(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x822118f4
	if (cr6.eq) goto loc_822118F4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822118f4
	if (!cr6.gt) goto loc_822118F4;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822118d0
	if (cr6.lt) goto loc_822118D0;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
loc_822118D0:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ldx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x823f3eb0
	ctx.lr = 0x822118E8;
	sub_823F3EB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_822118F4:
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221191C"))) PPC_WEAK_FUNC(sub_8221191C);
PPC_FUNC_IMPL(__imp__sub_8221191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211920"))) PPC_WEAK_FUNC(sub_82211920);
PPC_FUNC_IMPL(__imp__sub_82211920) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r10,1408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// mulli r11,r4,240
	ctx.r11.s64 = ctx.r4.s64 * 240;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82211970
	if (cr6.lt) goto loc_82211970;
	// ble cr6,0x82211970
	if (!cr6.gt) goto loc_82211970;
	// lwz r10,1408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twllei r9,0
	// subf r3,r8,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	// twlgei r11,-1
	// blr 
	return;
loc_82211970:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211978"))) PPC_WEAK_FUNC(sub_82211978);
PPC_FUNC_IMPL(__imp__sub_82211978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822119A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822119B0"))) PPC_WEAK_FUNC(sub_822119B0);
PPC_FUNC_IMPL(__imp__sub_822119B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1140(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1140);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822119B8"))) PPC_WEAK_FUNC(sub_822119B8);
PPC_FUNC_IMPL(__imp__sub_822119B8) {
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
	// stfs f0,924(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 924, temp.u32);
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822119D4"))) PPC_WEAK_FUNC(sub_822119D4);
PPC_FUNC_IMPL(__imp__sub_822119D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822119D8"))) PPC_WEAK_FUNC(sub_822119D8);
PPC_FUNC_IMPL(__imp__sub_822119D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x822119E0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x828d4228
	ctx.lr = 0x822119E8;
	__savefpr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lfs f29,24328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x822126a8
	ctx.lr = 0x82211A34;
	sub_822126A8(ctx, base);
	// lfs f0,156(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,184(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82211a64
	if (!cr6.lt) goto loc_82211A64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82211a70
	goto loc_82211A70;
loc_82211A64:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82211a70
	if (cr6.lt) goto loc_82211A70;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82211A70:
	// lwz r11,224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// fadds f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,184(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 184, temp.u32);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f28,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82211a98
	if (cr6.eq) goto loc_82211A98;
	// stfs f29,924(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 924, temp.u32);
	// stfs f28,1120(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1120, temp.u32);
loc_82211A98:
	// addi r31,r29,236
	ctx.r31.s64 = ctx.r29.s64 + 236;
	// addi r6,r29,220
	ctx.r6.s64 = ctx.r29.s64 + 220;
	// addi r5,r1,340
	ctx.r5.s64 = ctx.r1.s64 + 340;
	// addi r4,r30,924
	ctx.r4.s64 = ctx.r30.s64 + 924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238ce10
	ctx.lr = 0x82211AB0;
	sub_8238CE10(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,1120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,168(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 192;
	// lfs f1,1140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1140);
	ctx.f1.f64 = double(temp.f32);
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f24,f0,f13
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x822126a8
	ctx.lr = 0x82211AD8;
	sub_822126A8(ctx, base);
	// lfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,1140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1140);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f27,f31,f1
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// lfs f0,572(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82211b34
	if (!cr6.gt) goto loc_82211B34;
	// addi r4,r30,216
	ctx.r4.s64 = ctx.r30.s64 + 216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238b058
	ctx.lr = 0x82211AFC;
	sub_8238B058(ctx, base);
	// lfs f13,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82211b34
	if (!cr6.gt) goto loc_82211B34;
	// lfs f24,168(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	ctx.f24.f64 = double(temp.f32);
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// b 0x82211b54
	goto loc_82211B54;
loc_82211B34:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bne cr6,0x82211b54
	if (!cr6.eq) goto loc_82211B54;
	// fabs f0,f30
	ctx.f0.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lfs f13,172(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82211b54
	if (!cr6.gt) goto loc_82211B54;
	// lfs f0,164(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f27,f0,f30,f27
	ctx.f27.f64 = double(float(-(ctx.f0.f64 * ctx.f30.f64 - ctx.f27.f64)));
loc_82211B54:
	// addi r4,r30,216
	ctx.r4.s64 = ctx.r30.s64 + 216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8218fcc8
	ctx.lr = 0x82211B60;
	sub_8218FCC8(ctx, base);
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,176(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f29,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82211b84
	if (!cr6.lt) goto loc_82211B84;
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
loc_82211B84:
	// lfs f0,216(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// fmr f25,f29
	ctx.f25.f64 = ctx.f29.f64;
	// li r26,0
	ctx.r26.s64 = 0;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82211be0
	if (!cr6.gt) goto loc_82211BE0;
	// lwz r11,996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82211be0
	if (!cr6.gt) goto loc_82211BE0;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
loc_82211BB0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,88(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lfs f0,172(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fadds f25,f0,f25
	ctx.f25.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// rlwinm r9,r7,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82211bd0
	if (cr6.eq) goto loc_82211BD0;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82211BD0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82211bb0
	if (cr6.lt) goto loc_82211BB0;
loc_82211BE0:
	// lwz r11,996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82211d54
	if (!cr6.gt) goto loc_82211D54;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f31,16280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16280);
	ctx.f31.f64 = double(temp.f32);
	// lfs f26,24848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24848);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,24324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24324);
	ctx.f30.f64 = double(temp.f32);
loc_82211C0C:
	// lwz r11,992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// lwzx r31,r27,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211d30
	if (cr6.eq) goto loc_82211D30;
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfs f0,240(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 240, temp.u32);
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f11,f0,f24
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// blt cr6,0x82211c84
	if (cr6.lt) goto loc_82211C84;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 / ctx.f13.f64));
	// b 0x82211c88
	goto loc_82211C88;
loc_82211C84:
	// fdivs f13,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
loc_82211C88:
	// fdivs f0,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
	// lfs f12,216(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// ble cr6,0x82211cd4
	if (!cr6.gt) goto loc_82211CD4;
	// fcmpu cr6,f25,f30
	cr6.compare(ctx.f25.f64, ctx.f30.f64);
	// ble cr6,0x82211cc4
	if (!cr6.gt) goto loc_82211CC4;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82211cc4
	if (!cr6.eq) goto loc_82211CC4;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f0,f13,f12,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// b 0x82211cd8
	goto loc_82211CD8;
loc_82211CC4:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f0,f13,f12,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// b 0x82211cd8
	goto loc_82211CD8;
loc_82211CD4:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82211CD8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// fmuls f13,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f13,240(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211d10
	if (cr6.eq) goto loc_82211D10;
	// lfs f13,140(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// b 0x82211d14
	goto loc_82211D14;
loc_82211D10:
	// stfs f29,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_82211D14:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211D30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82211D30:
	// lfs f0,184(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82211c0c
	if (cr6.lt) goto loc_82211C0C;
loc_82211D54:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x828d4274
	ctx.lr = 0x82211D60;
	__restfpr_24(ctx, base);
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211D64"))) PPC_WEAK_FUNC(sub_82211D64);
PPC_FUNC_IMPL(__imp__sub_82211D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211D68"))) PPC_WEAK_FUNC(sub_82211D68);
PPC_FUNC_IMPL(__imp__sub_82211D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82211D70;
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82211e54
	if (cr6.eq) goto loc_82211E54;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,26256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82211e54
	if (!cr6.gt) goto loc_82211E54;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82211e54
	if (!cr6.gt) goto loc_82211E54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211DD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10812);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82211e54
	if (!cr6.lt) goto loc_82211E54;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// ld r4,-20708(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20708);
	// bl 0x822aa9b0
	ctx.lr = 0x82211E20;
	sub_822AA9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211E3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_82211E54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211E64"))) PPC_WEAK_FUNC(sub_82211E64);
PPC_FUNC_IMPL(__imp__sub_82211E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211E68"))) PPC_WEAK_FUNC(sub_82211E68);
PPC_FUNC_IMPL(__imp__sub_82211E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f1,24336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24336);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211E74"))) PPC_WEAK_FUNC(sub_82211E74);
PPC_FUNC_IMPL(__imp__sub_82211E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211E78"))) PPC_WEAK_FUNC(sub_82211E78);
PPC_FUNC_IMPL(__imp__sub_82211E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1256);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211E80"))) PPC_WEAK_FUNC(sub_82211E80);
PPC_FUNC_IMPL(__imp__sub_82211E80) {
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
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82211eec
	if (cr6.eq) goto loc_82211EEC;
	// lwz r11,1256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211eec
	if (cr6.eq) goto loc_82211EEC;
	// bl 0x8218ded8
	ctx.lr = 0x82211EB0;
	sub_8218DED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82211ec0
	if (cr6.eq) goto loc_82211EC0;
	// addi r11,r3,216
	ctx.r11.s64 = ctx.r3.s64 + 216;
	// b 0x82211ec8
	goto loc_82211EC8;
loc_82211EC0:
	// lwz r11,1256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
loc_82211EC8:
	// lwz r3,1256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r4,1260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211EEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82211EEC:
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

__attribute__((alias("__imp__sub_82211F00"))) PPC_WEAK_FUNC(sub_82211F00);
PPC_FUNC_IMPL(__imp__sub_82211F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x82211F08;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x8220dfe0
	ctx.lr = 0x82211F20;
	sub_8220DFE0(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221205c
	if (cr6.eq) goto loc_8221205C;
	// lwz r11,2128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2128);
	// lis r28,-32063
	ctx.r28.s64 = -2101280768;
	// lwz r10,2128(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2128);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82211f9c
	if (cr6.eq) goto loc_82211F9C;
	// lwz r11,11572(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11572);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82211f8c
	if (!cr6.eq) goto loc_82211F8C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11572(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11572, ctx.r11.u32);
	// bl 0x821ce4f0
	ctx.lr = 0x82211F68;
	sub_821CE4F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x82211F70;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22344
	ctx.r5.s64 = ctx.r11.s64 + -22344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x82211F84;
	sub_822ADCF0(ctx, base);
	// stw r3,11568(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11568, ctx.r3.u32);
	// b 0x82211f90
	goto loc_82211F90;
loc_82211F8C:
	// lwz r3,11568(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11568);
loc_82211F90:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_82211F9C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r31,2132(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2132);
	// lwz r30,2132(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2132);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211FBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82211fd0
	if (cr6.eq) goto loc_82211FD0;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x82211fe0
	goto loc_82211FE0;
loc_82211FD0:
	// lwz r10,140(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r10.u32);
loc_82211FE0:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221205c
	if (cr6.eq) goto loc_8221205C;
	// lwz r11,11572(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11572);
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82212044
	if (!cr6.eq) goto loc_82212044;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11572(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11572, ctx.r11.u32);
	// bl 0x821ce4f0
	ctx.lr = 0x82212010;
	sub_821CE4F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x82212018;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22324
	ctx.r5.s64 = ctx.r11.s64 + -22324;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8221202C;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,11564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11564, ctx.r3.u32);
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_82212044:
	// lwz r3,11564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11564);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8221205C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212068"))) PPC_WEAK_FUNC(sub_82212068);
PPC_FUNC_IMPL(__imp__sub_82212068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x82212070;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x8231b490
	ctx.lr = 0x82212088;
	sub_8231B490(ctx, base);
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221226c
	if (cr6.eq) goto loc_8221226C;
	// lwz r11,1260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1260);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// lwz r10,1260(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1260);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82212104
	if (cr6.eq) goto loc_82212104;
	// lwz r11,11560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11560);
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822120f4
	if (!cr6.eq) goto loc_822120F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11560(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11560, ctx.r11.u32);
	// bl 0x821b2710
	ctx.lr = 0x822120D0;
	sub_821B2710(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x822120D8;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22304
	ctx.r5.s64 = ctx.r11.s64 + -22304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x822120EC;
	sub_822ADCF0(ctx, base);
	// stw r3,11556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11556, ctx.r3.u32);
	// b 0x822120f8
	goto loc_822120F8;
loc_822120F4:
	// lwz r3,11556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11556);
loc_822120F8:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_82212104:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,1256(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1256);
	// lwz r30,1256(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1256);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212124;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82212138
	if (cr6.eq) goto loc_82212138;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x82212148
	goto loc_82212148;
loc_82212138:
	// lwz r10,140(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r10.u32);
loc_82212148:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822121ac
	if (cr6.eq) goto loc_822121AC;
	// lwz r11,11560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11560);
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221219c
	if (!cr6.eq) goto loc_8221219C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11560(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11560, ctx.r11.u32);
	// bl 0x821b2710
	ctx.lr = 0x82212178;
	sub_821B2710(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x82212180;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22324
	ctx.r5.s64 = ctx.r11.s64 + -22324;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x82212194;
	sub_822ADCF0(ctx, base);
	// stw r3,11552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11552, ctx.r3.u32);
	// b 0x822121a0
	goto loc_822121A0;
loc_8221219C:
	// lwz r3,11552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11552);
loc_822121A0:
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_822121AC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,1252(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1252);
	// lwz r30,1252(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1252);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822121CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822121e0
	if (cr6.eq) goto loc_822121E0;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x822121f0
	goto loc_822121F0;
loc_822121E0:
	// lwz r10,140(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r10.u32);
loc_822121F0:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221226c
	if (cr6.eq) goto loc_8221226C;
	// lwz r11,11560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11560);
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82212254
	if (!cr6.eq) goto loc_82212254;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,11560(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11560, ctx.r11.u32);
	// bl 0x821b2710
	ctx.lr = 0x82212220;
	sub_821B2710(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x82212228;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22280
	ctx.r5.s64 = ctx.r11.s64 + -22280;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8221223C;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,11548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11548, ctx.r3.u32);
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_82212254:
	// lwz r3,11548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11548);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8221226C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212278"))) PPC_WEAK_FUNC(sub_82212278);
PPC_FUNC_IMPL(__imp__sub_82212278) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82212290
	if (cr6.eq) goto loc_82212290;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82212290:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82212298"))) PPC_WEAK_FUNC(sub_82212298);
PPC_FUNC_IMPL(__imp__sub_82212298) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x822122A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8231b490
	ctx.lr = 0x822122B0;
	sub_8231B490(ctx, base);
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212600
	if (cr6.eq) goto loc_82212600;
	// lwz r11,1396(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1396);
	// lis r31,-32063
	ctx.r31.s64 = -2101280768;
	// lwz r10,1396(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1396);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822122f8
	if (!cr6.eq) goto loc_822122F8;
	// lwz r11,1400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1400);
	// lwz r10,1400(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1400);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822122f8
	if (!cr6.eq) goto loc_822122F8;
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// lwz r10,1404(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1404);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82212360
	if (cr6.eq) goto loc_82212360;
loc_822122F8:
	// lwz r11,11544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11544);
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221234c
	if (!cr6.eq) goto loc_8221234C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,11544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11544, ctx.r11.u32);
	// bl 0x82198b90
	ctx.lr = 0x82212318;
	sub_82198B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x82212320;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22248
	ctx.r5.s64 = ctx.r11.s64 + -22248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x82212334;
	sub_822ADCF0(ctx, base);
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// lwz r11,11544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11544);
	// stw r3,11540(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11540, ctx.r3.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x82212364
	goto loc_82212364;
loc_8221234C:
	// lwz r3,11540(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11540);
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x82212364
	goto loc_82212364;
loc_82212360:
	// lwz r11,11544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11544);
loc_82212364:
	// lwz r10,1252(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1252);
	// lwz r9,1252(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1252);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822123d0
	if (cr6.eq) goto loc_822123D0;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822123c0
	if (!cr6.eq) goto loc_822123C0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,11544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11544, ctx.r11.u32);
	// bl 0x82198b90
	ctx.lr = 0x82212398;
	sub_82198B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x822123A0;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22216
	ctx.r5.s64 = ctx.r11.s64 + -22216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x822123B4;
	sub_822ADCF0(ctx, base);
	// lwz r11,11544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11544);
	// stw r3,11536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11536, ctx.r3.u32);
	// b 0x822123c4
	goto loc_822123C4;
loc_822123C0:
	// lwz r3,11536(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11536);
loc_822123C4:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_822123D0:
	// lbz r10,1264(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1264);
	// lbz r9,1264(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1264);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82212434
	if (cr6.eq) goto loc_82212434;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82212424
	if (!cr6.eq) goto loc_82212424;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,11544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11544, ctx.r11.u32);
	// bl 0x82198b90
	ctx.lr = 0x822123FC;
	sub_82198B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x82212404;
	sub_821BF0C0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14816
	ctx.r5.s64 = ctx.r11.s64 + 14816;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x82212418;
	sub_822ADCF0(ctx, base);
	// lwz r11,11544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11544);
	// stw r3,11532(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11532, ctx.r3.u32);
	// b 0x82212428
	goto loc_82212428;
loc_82212424:
	// lwz r3,11532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11532);
loc_82212428:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_82212434:
	// lbz r10,1265(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1265);
	// lbz r9,1265(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1265);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82212498
	if (cr6.eq) goto loc_82212498;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82212488
	if (!cr6.eq) goto loc_82212488;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,11544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11544, ctx.r11.u32);
	// bl 0x82198b90
	ctx.lr = 0x82212460;
	sub_82198B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x82212468;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22192
	ctx.r5.s64 = ctx.r11.s64 + -22192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x8221247C;
	sub_822ADCF0(ctx, base);
	// lwz r11,11544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11544);
	// stw r3,11528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11528, ctx.r3.u32);
	// b 0x8221248c
	goto loc_8221248C;
loc_82212488:
	// lwz r3,11528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11528);
loc_8221248C:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_82212498:
	// lwz r10,1252(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1252);
	// lwz r9,1252(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1252);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82212504
	if (cr6.eq) goto loc_82212504;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822124f4
	if (!cr6.eq) goto loc_822124F4;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,11544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11544, ctx.r11.u32);
	// bl 0x82198b90
	ctx.lr = 0x822124CC;
	sub_82198B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x822124D4;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22156
	ctx.r5.s64 = ctx.r11.s64 + -22156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x822124E8;
	sub_822ADCF0(ctx, base);
	// lwz r11,11544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11544);
	// stw r3,11524(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11524, ctx.r3.u32);
	// b 0x822124f8
	goto loc_822124F8;
loc_822124F4:
	// lwz r3,11524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11524);
loc_822124F8:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_82212504:
	// lwz r10,1252(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1252);
	// lwz r9,1252(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1252);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82212570
	if (cr6.eq) goto loc_82212570;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lis r29,-32063
	ctx.r29.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82212560
	if (!cr6.eq) goto loc_82212560;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,11544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11544, ctx.r11.u32);
	// bl 0x82198b90
	ctx.lr = 0x82212538;
	sub_82198B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x82212540;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22128
	ctx.r5.s64 = ctx.r11.s64 + -22128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822adcf0
	ctx.lr = 0x82212554;
	sub_822ADCF0(ctx, base);
	// lwz r11,11544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11544);
	// stw r3,11520(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11520, ctx.r3.u32);
	// b 0x82212564
	goto loc_82212564;
loc_82212560:
	// lwz r3,11520(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11520);
loc_82212564:
	// lhz r10,94(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_82212570:
	// lwz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// rlwinm r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82212600
	if (cr6.eq) goto loc_82212600;
	// lhz r10,1252(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1252);
	// lhz r9,1252(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 1252);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82212600
	if (cr6.eq) goto loc_82212600;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lis r30,-32063
	ctx.r30.s64 = -2101280768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822125e8
	if (!cr6.eq) goto loc_822125E8;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,11544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11544, ctx.r11.u32);
	// bl 0x82198b90
	ctx.lr = 0x822125B4;
	sub_82198B90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821bf0c0
	ctx.lr = 0x822125BC;
	sub_821BF0C0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-22088
	ctx.r5.s64 = ctx.r11.s64 + -22088;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822adcf0
	ctx.lr = 0x822125D0;
	sub_822ADCF0(ctx, base);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// stw r3,11516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11516, ctx.r3.u32);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_822125E8:
	// lwz r3,11516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11516);
	// lhz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_82212600:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221260C"))) PPC_WEAK_FUNC(sub_8221260C);
PPC_FUNC_IMPL(__imp__sub_8221260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212610"))) PPC_WEAK_FUNC(sub_82212610);
PPC_FUNC_IMPL(__imp__sub_82212610) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lwz r11,-24420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24420);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x8247a2d0
	sub_8247A2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212638"))) PPC_WEAK_FUNC(sub_82212638);
PPC_FUNC_IMPL(__imp__sub_82212638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221263C"))) PPC_WEAK_FUNC(sub_8221263C);
PPC_FUNC_IMPL(__imp__sub_8221263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212640"))) PPC_WEAK_FUNC(sub_82212640);
PPC_FUNC_IMPL(__imp__sub_82212640) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82212698
	if (!cr6.gt) goto loc_82212698;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8221265C:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82212684
	if (!cr6.eq) goto loc_82212684;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x822126a0
	if (cr6.eq) goto loc_822126A0;
loc_82212684:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8221265c
	if (cr6.lt) goto loc_8221265C;
loc_82212698:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822126A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822126A8"))) PPC_WEAK_FUNC(sub_822126A8);
PPC_FUNC_IMPL(__imp__sub_822126A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822126bc
	if (!cr6.eq) goto loc_822126BC;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_822126BC:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x822127fc
	if (cr6.lt) goto loc_822127FC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822127fc
	if (!cr6.gt) goto loc_822127FC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,-20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x822126f8
	if (cr6.lt) goto loc_822126F8;
loc_822126F0:
	// lfs f1,-16(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_822126F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x822126f0
	if (!cr6.gt) goto loc_822126F0;
	// addi r9,r8,20
	ctx.r9.s64 = ctx.r8.s64 + 20;
loc_82212708:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8221272c
	if (cr6.lt) goto loc_8221272C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82212708
	if (cr6.lt) goto loc_82212708;
	// lfs f1,-16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8221272C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f12,24328(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24328);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x822127f4
	if (!cr6.gt) goto loc_822127F4;
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x822127f4
	if (cr6.eq) goto loc_822127F4;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bne cr6,0x8221278c
	if (!cr6.eq) goto loc_8221278C;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f1,f13,f12,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// blr 
	return;
loc_8221278C:
	// fmuls f0,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfs f10,16280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16280);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f11,10812(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10812);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24912);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fnmsubs f4,f0,f11,f13
	ctx.f4.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// fmsubs f11,f13,f11,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f10.f64));
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,24344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fadds f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmadds f0,f12,f7,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f0,f13,f6,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fmadds f1,f3,f5,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f0.f64));
	// blr 
	return;
loc_822127F4:
	// lfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_822127FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82212808"))) PPC_WEAK_FUNC(sub_82212808);
PPC_FUNC_IMPL(__imp__sub_82212808) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82212810;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x8221282c
	if (cr6.eq) goto loc_8221282C;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x82212830
	goto loc_82212830;
loc_8221282C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82212830:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82212b28
	ctx.lr = 0x8221283C;
	sub_82212B28(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822128dc
	if (cr6.eq) goto loc_822128DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r30,r11,26968
	ctx.r30.s64 = ctx.r11.s64 + 26968;
loc_82212864:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82212878
	if (cr6.eq) goto loc_82212878;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x82212894
	goto loc_82212894;
loc_82212878:
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
	ctx.lr = 0x82212890;
	sub_82364678(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82212894:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x822128b4
	if (!cr6.eq) goto loc_822128B4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x822128e8
	if (cr6.eq) goto loc_822128E8;
loc_822128B4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82212b28
	ctx.lr = 0x822128C4;
	sub_82212B28(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82212864
	if (!cr6.eq) goto loc_82212864;
loc_822128DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_822128E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822128F4"))) PPC_WEAK_FUNC(sub_822128F4);
PPC_FUNC_IMPL(__imp__sub_822128F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822128F8"))) PPC_WEAK_FUNC(sub_822128F8);
PPC_FUNC_IMPL(__imp__sub_822128F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82212900;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x8221291c
	if (cr6.eq) goto loc_8221291C;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x82212920
	goto loc_82212920;
loc_8221291C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82212920:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82212be8
	ctx.lr = 0x8221292C;
	sub_82212BE8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822129cc
	if (cr6.eq) goto loc_822129CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r30,r11,26968
	ctx.r30.s64 = ctx.r11.s64 + 26968;
loc_82212954:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82212968
	if (cr6.eq) goto loc_82212968;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x82212984
	goto loc_82212984;
loc_82212968:
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
	ctx.lr = 0x82212980;
	sub_82364678(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82212984:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x822129a4
	if (!cr6.eq) goto loc_822129A4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x822129d8
	if (cr6.eq) goto loc_822129D8;
loc_822129A4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82212be8
	ctx.lr = 0x822129B4;
	sub_82212BE8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82212954
	if (!cr6.eq) goto loc_82212954;
loc_822129CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_822129D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822129E4"))) PPC_WEAK_FUNC(sub_822129E4);
PPC_FUNC_IMPL(__imp__sub_822129E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822129E8"))) PPC_WEAK_FUNC(sub_822129E8);
PPC_FUNC_IMPL(__imp__sub_822129E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x822129F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82212a0c
	if (cr6.eq) goto loc_82212A0C;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x82212a10
	goto loc_82212A10;
loc_82212A0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82212A10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82212ca8
	ctx.lr = 0x82212A1C;
	sub_82212CA8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82212abc
	if (cr6.eq) goto loc_82212ABC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r30,r11,26968
	ctx.r30.s64 = ctx.r11.s64 + 26968;
loc_82212A44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82212a58
	if (cr6.eq) goto loc_82212A58;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// b 0x82212a74
	goto loc_82212A74;
loc_82212A58:
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
	ctx.lr = 0x82212A70;
	sub_82364678(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82212A74:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82212a94
	if (!cr6.eq) goto loc_82212A94;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82212ac8
	if (cr6.eq) goto loc_82212AC8;
loc_82212A94:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82212ca8
	ctx.lr = 0x82212AA4;
	sub_82212CA8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82212a44
	if (!cr6.eq) goto loc_82212A44;
loc_82212ABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_82212AC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212AD4"))) PPC_WEAK_FUNC(sub_82212AD4);
PPC_FUNC_IMPL(__imp__sub_82212AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212AD8"))) PPC_WEAK_FUNC(sub_82212AD8);
PPC_FUNC_IMPL(__imp__sub_82212AD8) {
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
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// beq cr6,0x82212b00
	if (cr6.eq) goto loc_82212B00;
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// b 0x82212b04
	goto loc_82212B04;
loc_82212B00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82212B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82212b28
	ctx.lr = 0x82212B10;
	sub_82212B28(ctx, base);
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

__attribute__((alias("__imp__sub_82212B28"))) PPC_WEAK_FUNC(sub_82212B28);
PPC_FUNC_IMPL(__imp__sub_82212B28) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212bd4
	if (cr6.eq) goto loc_82212BD4;
loc_82212B48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212ba0
	if (cr6.eq) goto loc_82212BA0;
loc_82212B54:
	// bl 0x82212ff8
	ctx.lr = 0x82212B58;
	sub_82212FF8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212b7c
	if (cr6.eq) goto loc_82212B7C;
loc_82212B68:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82212bd4
	if (cr6.eq) goto loc_82212BD4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212b68
	if (!cr6.eq) goto loc_82212B68;
loc_82212B7C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82212bd4
	if (!cr6.eq) goto loc_82212BD4;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212b54
	if (!cr6.eq) goto loc_82212B54;
loc_82212BA0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212BB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82212bc8
	if (cr6.eq) goto loc_82212BC8;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82212BC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212b48
	if (!cr6.eq) goto loc_82212B48;
loc_82212BD4:
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

__attribute__((alias("__imp__sub_82212BE8"))) PPC_WEAK_FUNC(sub_82212BE8);
PPC_FUNC_IMPL(__imp__sub_82212BE8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212c94
	if (cr6.eq) goto loc_82212C94;
loc_82212C08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212c60
	if (cr6.eq) goto loc_82212C60;
loc_82212C14:
	// bl 0x82212eb0
	ctx.lr = 0x82212C18;
	sub_82212EB0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212c3c
	if (cr6.eq) goto loc_82212C3C;
loc_82212C28:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82212c94
	if (cr6.eq) goto loc_82212C94;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212c28
	if (!cr6.eq) goto loc_82212C28;
loc_82212C3C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82212c94
	if (!cr6.eq) goto loc_82212C94;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212c14
	if (!cr6.eq) goto loc_82212C14;
loc_82212C60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82212c88
	if (cr6.eq) goto loc_82212C88;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82212C88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212c08
	if (!cr6.eq) goto loc_82212C08;
loc_82212C94:
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

__attribute__((alias("__imp__sub_82212CA8"))) PPC_WEAK_FUNC(sub_82212CA8);
PPC_FUNC_IMPL(__imp__sub_82212CA8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212d54
	if (cr6.eq) goto loc_82212D54;
loc_82212CC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212d20
	if (cr6.eq) goto loc_82212D20;
loc_82212CD4:
	// bl 0x82212d68
	ctx.lr = 0x82212CD8;
	sub_82212D68(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212cfc
	if (cr6.eq) goto loc_82212CFC;
loc_82212CE8:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82212d54
	if (cr6.eq) goto loc_82212D54;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212ce8
	if (!cr6.eq) goto loc_82212CE8;
loc_82212CFC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82212d54
	if (!cr6.eq) goto loc_82212D54;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212cd4
	if (!cr6.eq) goto loc_82212CD4;
loc_82212D20:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212D34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82212d48
	if (cr6.eq) goto loc_82212D48;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82212D48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212cc8
	if (!cr6.eq) goto loc_82212CC8;
loc_82212D54:
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

__attribute__((alias("__imp__sub_82212D68"))) PPC_WEAK_FUNC(sub_82212D68);
PPC_FUNC_IMPL(__imp__sub_82212D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,-23776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23776);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82212e94
	if (!cr6.eq) goto loc_82212E94;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82212D98;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82212e14
	if (cr6.eq) goto loc_82212E14;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// addi r7,r9,26208
	ctx.r7.s64 = ctx.r9.s64 + 26208;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-23864
	ctx.r6.s64 = ctx.r10.s64 + -23864;
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
	// addi r11,r11,19668
	ctx.r11.s64 = ctx.r11.s64 + 19668;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
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
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82212E10;
	sub_822ED768(ctx, base);
	// b 0x82212e18
	goto loc_82212E18;
loc_82212E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82212E18:
	// stw r3,-23776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23776, ctx.r3.u32);
	// bl 0x821bf0c0
	ctx.lr = 0x82212E20;
	sub_821BF0C0(ctx, base);
	// lwz r11,-23776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23776);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82212e3c
	if (cr6.eq) goto loc_82212E3C;
	// bl 0x821bf0c0
	ctx.lr = 0x82212E30;
	sub_821BF0C0(ctx, base);
	// lwz r11,-23776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23776);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82212e44
	goto loc_82212E44;
loc_82212E3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82212E44:
	// bl 0x822b9138
	ctx.lr = 0x82212E48;
	sub_822B9138(ctx, base);
	// lwz r11,-23776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23776);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82212E54;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23776);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82212e94
	if (cr6.eq) goto loc_82212E94;
	// bl 0x82170ba8
	ctx.lr = 0x82212E74;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23776);
	// bne cr6,0x82212e94
	if (!cr6.eq) goto loc_82212E94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212E90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23776);
loc_82212E94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82212EAC"))) PPC_WEAK_FUNC(sub_82212EAC);
PPC_FUNC_IMPL(__imp__sub_82212EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212EB0"))) PPC_WEAK_FUNC(sub_82212EB0);
PPC_FUNC_IMPL(__imp__sub_82212EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,-23772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23772);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82212fdc
	if (!cr6.eq) goto loc_82212FDC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82212EE0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82212f5c
	if (cr6.eq) goto loc_82212F5C;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// addi r7,r9,2640
	ctx.r7.s64 = ctx.r9.s64 + 2640;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-23912
	ctx.r6.s64 = ctx.r10.s64 + -23912;
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
	// addi r11,r11,19704
	ctx.r11.s64 = ctx.r11.s64 + 19704;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
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
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82212F58;
	sub_822ED768(ctx, base);
	// b 0x82212f60
	goto loc_82212F60;
loc_82212F5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82212F60:
	// stw r3,-23772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23772, ctx.r3.u32);
	// bl 0x821bf0c0
	ctx.lr = 0x82212F68;
	sub_821BF0C0(ctx, base);
	// lwz r11,-23772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23772);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82212f84
	if (cr6.eq) goto loc_82212F84;
	// bl 0x821bf0c0
	ctx.lr = 0x82212F78;
	sub_821BF0C0(ctx, base);
	// lwz r11,-23772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23772);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82212f8c
	goto loc_82212F8C;
loc_82212F84:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82212F8C:
	// bl 0x822b9138
	ctx.lr = 0x82212F90;
	sub_822B9138(ctx, base);
	// lwz r11,-23772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23772);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82212F9C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23772);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82212fdc
	if (cr6.eq) goto loc_82212FDC;
	// bl 0x82170ba8
	ctx.lr = 0x82212FBC;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23772);
	// bne cr6,0x82212fdc
	if (!cr6.eq) goto loc_82212FDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23772);
loc_82212FDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82212FF4"))) PPC_WEAK_FUNC(sub_82212FF4);
PPC_FUNC_IMPL(__imp__sub_82212FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212FF8"))) PPC_WEAK_FUNC(sub_82212FF8);
PPC_FUNC_IMPL(__imp__sub_82212FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,-23724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23724);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82213124
	if (!cr6.eq) goto loc_82213124;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82213028;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822130a4
	if (cr6.eq) goto loc_822130A4;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// addi r7,r9,26208
	ctx.r7.s64 = ctx.r9.s64 + 26208;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-25824
	ctx.r6.s64 = ctx.r10.s64 + -25824;
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
	// addi r11,r11,22128
	ctx.r11.s64 = ctx.r11.s64 + 22128;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r6,4112
	ctx.r6.s64 = 269484032;
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
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822130A0;
	sub_822ED768(ctx, base);
	// b 0x822130a8
	goto loc_822130A8;
loc_822130A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822130A8:
	// stw r3,-23724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23724, ctx.r3.u32);
	// bl 0x821bf0c0
	ctx.lr = 0x822130B0;
	sub_821BF0C0(ctx, base);
	// lwz r11,-23724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23724);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822130cc
	if (cr6.eq) goto loc_822130CC;
	// bl 0x821bf0c0
	ctx.lr = 0x822130C0;
	sub_821BF0C0(ctx, base);
	// lwz r11,-23724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23724);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822130d4
	goto loc_822130D4;
loc_822130CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822130D4:
	// bl 0x822b9138
	ctx.lr = 0x822130D8;
	sub_822B9138(ctx, base);
	// lwz r11,-23724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23724);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x822130E4;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23724);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82213124
	if (cr6.eq) goto loc_82213124;
	// bl 0x82170ba8
	ctx.lr = 0x82213104;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23724);
	// bne cr6,0x82213124
	if (!cr6.eq) goto loc_82213124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23724);
loc_82213124:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221313C"))) PPC_WEAK_FUNC(sub_8221313C);
PPC_FUNC_IMPL(__imp__sub_8221313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213140"))) PPC_WEAK_FUNC(sub_82213140);
PPC_FUNC_IMPL(__imp__sub_82213140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82213148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-18864(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18864);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822aa9b0
	ctx.lr = 0x82213178;
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
	ctx.lr = 0x82213194;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822131A0"))) PPC_WEAK_FUNC(sub_822131A0);
PPC_FUNC_IMPL(__imp__sub_822131A0) {
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
	// beq cr6,0x822131f0
	if (cr6.eq) goto loc_822131F0;
	// bl 0x82191870
	ctx.lr = 0x822131C0;
	sub_82191870(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,1804
	ctx.r3.s64 = ctx.r31.s64 + 1804;
	// addi r11,r11,-24312
	ctx.r11.s64 = ctx.r11.s64 + -24312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x822131D4;
	sub_82170B98(ctx, base);
	// addi r3,r31,1896
	ctx.r3.s64 = ctx.r31.s64 + 1896;
	// bl 0x82170b98
	ctx.lr = 0x822131DC;
	sub_82170B98(ctx, base);
	// addi r3,r31,2008
	ctx.r3.s64 = ctx.r31.s64 + 2008;
	// bl 0x82170b98
	ctx.lr = 0x822131E4;
	sub_82170B98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-20600
	ctx.r11.s64 = ctx.r11.s64 + -20600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822131F0:
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

__attribute__((alias("__imp__sub_82213204"))) PPC_WEAK_FUNC(sub_82213204);
PPC_FUNC_IMPL(__imp__sub_82213204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213208"))) PPC_WEAK_FUNC(sub_82213208);
PPC_FUNC_IMPL(__imp__sub_82213208) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20600
	ctx.r11.s64 = ctx.r11.s64 + -20600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82213234;
	sub_822A89B8(ctx, base);
	// addi r3,r31,2148
	ctx.r3.s64 = ctx.r31.s64 + 2148;
	// bl 0x82528098
	ctx.lr = 0x8221323C;
	sub_82528098(ctx, base);
	// addi r3,r31,2136
	ctx.r3.s64 = ctx.r31.s64 + 2136;
	// bl 0x82528098
	ctx.lr = 0x82213244;
	sub_82528098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ce370
	ctx.lr = 0x8221324C;
	sub_821CE370(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213264
	if (cr6.eq) goto loc_82213264;
	// bl 0x82170268
	ctx.lr = 0x82213260;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213264:
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

__attribute__((alias("__imp__sub_8221327C"))) PPC_WEAK_FUNC(sub_8221327C);
PPC_FUNC_IMPL(__imp__sub_8221327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213280"))) PPC_WEAK_FUNC(sub_82213280);
PPC_FUNC_IMPL(__imp__sub_82213280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,-23320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23320);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822133a4
	if (!cr6.eq) goto loc_822133A4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x822132B0;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213324
	if (cr6.eq) goto loc_82213324;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// addi r7,r10,-18640
	ctx.r7.s64 = ctx.r10.s64 + -18640;
	// ori r6,r6,16516
	ctx.r6.u64 = ctx.r6.u64 | 16516;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r8,-32184
	ctx.r8.s64 = -2109210624;
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r9,-32184
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
	// addi r11,r11,-11008
	ctx.r11.s64 = ctx.r11.s64 + -11008;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r10,r10,-31196
	ctx.r10.s64 = ctx.r10.s64 + -31196;
	// stw r8,108(r1)
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
	ctx.lr = 0x82213320;
	sub_822ED768(ctx, base);
	// b 0x82213328
	goto loc_82213328;
loc_82213324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213328:
	// stw r3,-23320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23320, ctx.r3.u32);
	// bl 0x82246948
	ctx.lr = 0x82213330;
	sub_82246948(ctx, base);
	// lwz r11,-23320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23320);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221334c
	if (cr6.eq) goto loc_8221334C;
	// bl 0x82246948
	ctx.lr = 0x82213340;
	sub_82246948(ctx, base);
	// lwz r11,-23320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23320);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82213354
	goto loc_82213354;
loc_8221334C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82213354:
	// bl 0x82170938
	ctx.lr = 0x82213358;
	sub_82170938(ctx, base);
	// lwz r11,-23320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23320);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82213364;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23320);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822133a4
	if (cr6.eq) goto loc_822133A4;
	// bl 0x82170ba8
	ctx.lr = 0x82213384;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23320);
	// bne cr6,0x822133a4
	if (!cr6.eq) goto loc_822133A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822133A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23320);
loc_822133A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822133BC"))) PPC_WEAK_FUNC(sub_822133BC);
PPC_FUNC_IMPL(__imp__sub_822133BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822133C0"))) PPC_WEAK_FUNC(sub_822133C0);
PPC_FUNC_IMPL(__imp__sub_822133C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-19016
	ctx.r11.s64 = ctx.r11.s64 + -19016;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822133D8"))) PPC_WEAK_FUNC(sub_822133D8);
PPC_FUNC_IMPL(__imp__sub_822133D8) {
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
	// bl 0x82213428
	ctx.lr = 0x822133F8;
	sub_82213428(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213410
	if (cr6.eq) goto loc_82213410;
	// bl 0x82170268
	ctx.lr = 0x8221340C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213410:
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

__attribute__((alias("__imp__sub_82213428"))) PPC_WEAK_FUNC(sub_82213428);
PPC_FUNC_IMPL(__imp__sub_82213428) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21144
	ctx.r11.s64 = ctx.r11.s64 + -21144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8221344C;
	sub_822A89B8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21384
	ctx.r11.s64 = ctx.r11.s64 + -21384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82213460;
	sub_822A89B8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22016
	ctx.r11.s64 = ctx.r11.s64 + -22016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82213474;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8e90
	ctx.lr = 0x8221347C;
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

__attribute__((alias("__imp__sub_82213490"))) PPC_WEAK_FUNC(sub_82213490);
PPC_FUNC_IMPL(__imp__sub_82213490) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20872
	ctx.r11.s64 = ctx.r11.s64 + -20872;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x822134BC;
	sub_822A89B8(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x821e7e88
	ctx.lr = 0x822134C4;
	sub_821E7E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213428
	ctx.lr = 0x822134CC;
	sub_82213428(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822134e4
	if (cr6.eq) goto loc_822134E4;
	// bl 0x82170268
	ctx.lr = 0x822134E0;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822134E4:
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

__attribute__((alias("__imp__sub_822134FC"))) PPC_WEAK_FUNC(sub_822134FC);
PPC_FUNC_IMPL(__imp__sub_822134FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213500"))) PPC_WEAK_FUNC(sub_82213500);
PPC_FUNC_IMPL(__imp__sub_82213500) {
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
	// bl 0x82213550
	ctx.lr = 0x82213520;
	sub_82213550(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213538
	if (cr6.eq) goto loc_82213538;
	// bl 0x82170268
	ctx.lr = 0x82213534;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213538:
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

__attribute__((alias("__imp__sub_82213550"))) PPC_WEAK_FUNC(sub_82213550);
PPC_FUNC_IMPL(__imp__sub_82213550) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19016
	ctx.r11.s64 = ctx.r11.s64 + -19016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82213574;
	sub_822A89B8(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x821e7e88
	ctx.lr = 0x8221357C;
	sub_821E7E88(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x821e7e88
	ctx.lr = 0x82213584;
	sub_821E7E88(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20872
	ctx.r11.s64 = ctx.r11.s64 + -20872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82213598;
	sub_822A89B8(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x821e7e88
	ctx.lr = 0x822135A0;
	sub_821E7E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213428
	ctx.lr = 0x822135A8;
	sub_82213428(ctx, base);
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

__attribute__((alias("__imp__sub_822135BC"))) PPC_WEAK_FUNC(sub_822135BC);
PPC_FUNC_IMPL(__imp__sub_822135BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822135C0"))) PPC_WEAK_FUNC(sub_822135C0);
PPC_FUNC_IMPL(__imp__sub_822135C0) {
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
	// beq cr6,0x822135ec
	if (cr6.eq) goto loc_822135EC;
	// bl 0x82191870
	ctx.lr = 0x822135E0;
	sub_82191870(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-17856
	ctx.r11.s64 = ctx.r11.s64 + -17856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822135EC:
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

__attribute__((alias("__imp__sub_82213600"))) PPC_WEAK_FUNC(sub_82213600);
PPC_FUNC_IMPL(__imp__sub_82213600) {
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
	// bl 0x82213650
	ctx.lr = 0x82213620;
	sub_82213650(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213638
	if (cr6.eq) goto loc_82213638;
	// bl 0x82170268
	ctx.lr = 0x82213634;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213638:
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

__attribute__((alias("__imp__sub_82213650"))) PPC_WEAK_FUNC(sub_82213650);
PPC_FUNC_IMPL(__imp__sub_82213650) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22032
	ctx.r11.s64 = ctx.r11.s64 + -22032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82213674;
	sub_822A89B8(ctx, base);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// bl 0x82288288
	ctx.lr = 0x8221367C;
	sub_82288288(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-31472
	ctx.r11.s64 = ctx.r11.s64 + -31472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82213690;
	sub_822A89B8(ctx, base);
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// bl 0x823810d8
	ctx.lr = 0x82213698;
	sub_823810D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c1598
	ctx.lr = 0x822136A0;
	sub_821C1598(ctx, base);
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

__attribute__((alias("__imp__sub_822136B4"))) PPC_WEAK_FUNC(sub_822136B4);
PPC_FUNC_IMPL(__imp__sub_822136B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822136B8"))) PPC_WEAK_FUNC(sub_822136B8);
PPC_FUNC_IMPL(__imp__sub_822136B8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18744
	ctx.r11.s64 = ctx.r11.s64 + -18744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x822136E4;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213650
	ctx.lr = 0x822136EC;
	sub_82213650(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213704
	if (cr6.eq) goto loc_82213704;
	// bl 0x82170268
	ctx.lr = 0x82213700;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213704:
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

__attribute__((alias("__imp__sub_8221371C"))) PPC_WEAK_FUNC(sub_8221371C);
PPC_FUNC_IMPL(__imp__sub_8221371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213720"))) PPC_WEAK_FUNC(sub_82213720);
PPC_FUNC_IMPL(__imp__sub_82213720) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17856
	ctx.r11.s64 = ctx.r11.s64 + -17856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x8221374C;
	sub_822A89B8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18744
	ctx.r11.s64 = ctx.r11.s64 + -18744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82213760;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213650
	ctx.lr = 0x82213768;
	sub_82213650(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213780
	if (cr6.eq) goto loc_82213780;
	// bl 0x82170268
	ctx.lr = 0x8221377C;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213780:
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

__attribute__((alias("__imp__sub_82213798"))) PPC_WEAK_FUNC(sub_82213798);
PPC_FUNC_IMPL(__imp__sub_82213798) {
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
	// beq cr6,0x822137cc
	if (cr6.eq) goto loc_822137CC;
	// bl 0x82191870
	ctx.lr = 0x822137B8;
	sub_82191870(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r31,1396
	ctx.r3.s64 = ctx.r31.s64 + 1396;
	// addi r11,r11,-19944
	ctx.r11.s64 = ctx.r11.s64 + -19944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82170b98
	ctx.lr = 0x822137CC;
	sub_82170B98(ctx, base);
loc_822137CC:
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

__attribute__((alias("__imp__sub_822137E0"))) PPC_WEAK_FUNC(sub_822137E0);
PPC_FUNC_IMPL(__imp__sub_822137E0) {
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
	// bl 0x82213830
	ctx.lr = 0x82213800;
	sub_82213830(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213818
	if (cr6.eq) goto loc_82213818;
	// bl 0x82170268
	ctx.lr = 0x82213814;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213818:
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

__attribute__((alias("__imp__sub_82213830"))) PPC_WEAK_FUNC(sub_82213830);
PPC_FUNC_IMPL(__imp__sub_82213830) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82213838;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19944
	ctx.r11.s64 = ctx.r11.s64 + -19944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82213850;
	sub_822A89B8(ctx, base);
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// bl 0x821c7120
	ctx.lr = 0x82213858;
	sub_821C7120(ctx, base);
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// bl 0x821e8100
	ctx.lr = 0x82213860;
	sub_821E8100(ctx, base);
	// addi r3,r31,1636
	ctx.r3.s64 = ctx.r31.s64 + 1636;
	// bl 0x82288288
	ctx.lr = 0x82213868;
	sub_82288288(ctx, base);
	// addi r3,r31,1444
	ctx.r3.s64 = ctx.r31.s64 + 1444;
	// bl 0x82213b28
	ctx.lr = 0x82213870;
	sub_82213B28(ctx, base);
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x82213a70
	ctx.lr = 0x82213878;
	sub_82213A70(ctx, base);
	// addi r3,r31,1420
	ctx.r3.s64 = ctx.r31.s64 + 1420;
	// bl 0x8257efe8
	ctx.lr = 0x82213880;
	sub_8257EFE8(ctx, base);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x82213918
	ctx.lr = 0x82213888;
	sub_82213918(ctx, base);
	// addi r30,r31,1364
	ctx.r30.s64 = ctx.r31.s64 + 1364;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822138b4
	if (cr6.eq) goto loc_822138B4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x822138B4;
	sub_82170408(ctx, base);
loc_822138B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x822138BC;
	sub_8218C838(ctx, base);
	// addi r30,r31,1352
	ctx.r30.s64 = ctx.r31.s64 + 1352;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822138e4
	if (cr6.eq) goto loc_822138E4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x822138E4;
	sub_82170408(ctx, base);
loc_822138E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x822138EC;
	sub_8218C838(ctx, base);
	// addi r3,r31,1300
	ctx.r3.s64 = ctx.r31.s64 + 1300;
	// bl 0x82288288
	ctx.lr = 0x822138F4;
	sub_82288288(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18744
	ctx.r11.s64 = ctx.r11.s64 + -18744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a89b8
	ctx.lr = 0x82213908;
	sub_822A89B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213650
	ctx.lr = 0x82213910;
	sub_82213650(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213918"))) PPC_WEAK_FUNC(sub_82213918);
PPC_FUNC_IMPL(__imp__sub_82213918) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82213920;
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
	// ble cr6,0x8221395c
	if (!cr6.gt) goto loc_8221395C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82213940:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82213998
	ctx.lr = 0x8221394C;
	sub_82213998(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,240
	ctx.r30.s64 = ctx.r30.s64 + 240;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82213940
	if (!cr6.eq) goto loc_82213940;
loc_8221395C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232ad68
	ctx.lr = 0x82213974;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213984
	if (cr6.eq) goto loc_82213984;
	// bl 0x82170268
	ctx.lr = 0x82213984;
	sub_82170268(ctx, base);
loc_82213984:
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

__attribute__((alias("__imp__sub_82213998"))) PPC_WEAK_FUNC(sub_82213998);
PPC_FUNC_IMPL(__imp__sub_82213998) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x822139A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r29,r28,112
	ctx.r29.s64 = ctx.r28.s64 + 112;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x822139C4;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822139d4
	if (cr6.eq) goto loc_822139D4;
	// bl 0x82170268
	ctx.lr = 0x822139D4;
	sub_82170268(ctx, base);
loc_822139D4:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82213A00;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213a10
	if (cr6.eq) goto loc_82213A10;
	// bl 0x82170268
	ctx.lr = 0x82213A10;
	sub_82170268(ctx, base);
loc_82213A10:
	// addi r3,r28,88
	ctx.r3.s64 = ctx.r28.s64 + 88;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x82528098
	ctx.lr = 0x82213A24;
	sub_82528098(ctx, base);
	// addi r30,r28,44
	ctx.r30.s64 = ctx.r28.s64 + 44;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82213a4c
	if (cr6.eq) goto loc_82213A4C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x82213A4C;
	sub_82170408(ctx, base);
loc_82213A4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x82213A54;
	sub_8218C838(ctx, base);
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x82528098
	ctx.lr = 0x82213A5C;
	sub_82528098(ctx, base);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82528098
	ctx.lr = 0x82213A64;
	sub_82528098(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213A6C"))) PPC_WEAK_FUNC(sub_82213A6C);
PPC_FUNC_IMPL(__imp__sub_82213A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213A70"))) PPC_WEAK_FUNC(sub_82213A70);
PPC_FUNC_IMPL(__imp__sub_82213A70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x82213A78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82213ae8
	if (!cr6.gt) goto loc_82213AE8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82213A98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82213ABC;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213acc
	if (cr6.eq) goto loc_82213ACC;
	// bl 0x82170268
	ctx.lr = 0x82213ACC;
	sub_82170268(ctx, base);
loc_82213ACC:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82213a98
	if (!cr6.eq) goto loc_82213A98;
loc_82213AE8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232ad68
	ctx.lr = 0x82213B00;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213b10
	if (cr6.eq) goto loc_82213B10;
	// bl 0x82170268
	ctx.lr = 0x82213B10;
	sub_82170268(ctx, base);
loc_82213B10:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213B24"))) PPC_WEAK_FUNC(sub_82213B24);
PPC_FUNC_IMPL(__imp__sub_82213B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213B28"))) PPC_WEAK_FUNC(sub_82213B28);
PPC_FUNC_IMPL(__imp__sub_82213B28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x82213B30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82213ba0
	if (!cr6.gt) goto loc_82213BA0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82213B50:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,44
	ctx.r31.s64 = ctx.r11.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82213B74;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213b84
	if (cr6.eq) goto loc_82213B84;
	// bl 0x82170268
	ctx.lr = 0x82213B84;
	sub_82170268(ctx, base);
loc_82213B84:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82213b50
	if (!cr6.eq) goto loc_82213B50;
loc_82213BA0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,56
	ctx.r6.s64 = 56;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232ad68
	ctx.lr = 0x82213BB8;
	sub_8232AD68(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213bc8
	if (cr6.eq) goto loc_82213BC8;
	// bl 0x82170268
	ctx.lr = 0x82213BC8;
	sub_82170268(ctx, base);
loc_82213BC8:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213BDC"))) PPC_WEAK_FUNC(sub_82213BDC);
PPC_FUNC_IMPL(__imp__sub_82213BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213BE0"))) PPC_WEAK_FUNC(sub_82213BE0);
PPC_FUNC_IMPL(__imp__sub_82213BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,-23332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23332);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82213d08
	if (!cr6.eq) goto loc_82213D08;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82213C10;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213c88
	if (cr6.eq) goto loc_82213C88;
	// lis r9,-32184
	ctx.r9.s64 = -2109210624;
	// lis r10,-32184
	ctx.r10.s64 = -2109210624;
	// addi r7,r9,9224
	ctx.r7.s64 = ctx.r9.s64 + 9224;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-30656
	ctx.r6.s64 = ctx.r10.s64 + -30656;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-11440
	ctx.r11.s64 = ctx.r11.s64 + -11440;
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
	// li r6,2053
	ctx.r6.s64 = 2053;
	// li r5,1252
	ctx.r5.s64 = 1252;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x82213C84;
	sub_822ED768(ctx, base);
	// b 0x82213c8c
	goto loc_82213C8C;
loc_82213C88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213C8C:
	// stw r3,-23332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23332, ctx.r3.u32);
	// bl 0x8218ffc8
	ctx.lr = 0x82213C94;
	sub_8218FFC8(ctx, base);
	// lwz r11,-23332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23332);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213cb0
	if (cr6.eq) goto loc_82213CB0;
	// bl 0x8218ffc8
	ctx.lr = 0x82213CA4;
	sub_8218FFC8(ctx, base);
	// lwz r11,-23332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23332);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82213cb8
	goto loc_82213CB8;
loc_82213CB0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82213CB8:
	// bl 0x82170938
	ctx.lr = 0x82213CBC;
	sub_82170938(ctx, base);
	// lwz r11,-23332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23332);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x82213CC8;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23332);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82213d08
	if (cr6.eq) goto loc_82213D08;
	// bl 0x82170ba8
	ctx.lr = 0x82213CE8;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23332);
	// bne cr6,0x82213d08
	if (!cr6.eq) goto loc_82213D08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213D04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23332);
loc_82213D08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213D20"))) PPC_WEAK_FUNC(sub_82213D20);
PPC_FUNC_IMPL(__imp__sub_82213D20) {
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
	// beq cr6,0x82213d4c
	if (cr6.eq) goto loc_82213D4C;
	// bl 0x82191870
	ctx.lr = 0x82213D40;
	sub_82191870(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-18744
	ctx.r11.s64 = ctx.r11.s64 + -18744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82213D4C:
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

__attribute__((alias("__imp__sub_82213D60"))) PPC_WEAK_FUNC(sub_82213D60);
PPC_FUNC_IMPL(__imp__sub_82213D60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,118
	ctx.r8.s64 = 118;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r6,r11,-15592
	ctx.r6.s64 = ctx.r11.s64 + -15592;
loc_82213D74:
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82213db4
	if (cr6.eq) goto loc_82213DB4;
	// bge cr6,0x82213da0
	if (!cr6.lt) goto loc_82213DA0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// b 0x82213da4
	goto loc_82213DA4;
loc_82213DA0:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_82213DA4:
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82213d74
	if (!cr6.gt) goto loc_82213D74;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82213DB4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// lbzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213DC4"))) PPC_WEAK_FUNC(sub_82213DC4);
PPC_FUNC_IMPL(__imp__sub_82213DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213DC8"))) PPC_WEAK_FUNC(sub_82213DC8);
PPC_FUNC_IMPL(__imp__sub_82213DC8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,118
	ctx.r8.s64 = 118;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r6,r11,-15592
	ctx.r6.s64 = ctx.r11.s64 + -15592;
loc_82213DDC:
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82213e1c
	if (cr6.eq) goto loc_82213E1C;
	// bge cr6,0x82213e08
	if (!cr6.lt) goto loc_82213E08;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// b 0x82213e0c
	goto loc_82213E0C;
loc_82213E08:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_82213E0C:
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82213ddc
	if (!cr6.gt) goto loc_82213DDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82213E1C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r6,3
	ctx.r10.s64 = ctx.r6.s64 + 3;
	// lbzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213E2C"))) PPC_WEAK_FUNC(sub_82213E2C);
PPC_FUNC_IMPL(__imp__sub_82213E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213E30"))) PPC_WEAK_FUNC(sub_82213E30);
PPC_FUNC_IMPL(__imp__sub_82213E30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4352
	cr6.compare<uint32_t>(ctx.r11.u32, 4352, ctx.xer);
	// blt cr6,0x82213e44
	if (cr6.lt) goto loc_82213E44;
	// cmplwi cr6,r11,4607
	cr6.compare<uint32_t>(ctx.r11.u32, 4607, ctx.xer);
	// ble cr6,0x82213e74
	if (!cr6.gt) goto loc_82213E74;
loc_82213E44:
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(ctx.r11.u32, 12288, ctx.xer);
	// blt cr6,0x82213e54
	if (cr6.lt) goto loc_82213E54;
	// cmplwi cr6,r11,55215
	cr6.compare<uint32_t>(ctx.r11.u32, 55215, ctx.xer);
	// ble cr6,0x82213e74
	if (!cr6.gt) goto loc_82213E74;
loc_82213E54:
	// cmplwi cr6,r11,63744
	cr6.compare<uint32_t>(ctx.r11.u32, 63744, ctx.xer);
	// blt cr6,0x82213e64
	if (cr6.lt) goto loc_82213E64;
	// cmplwi cr6,r11,64255
	cr6.compare<uint32_t>(ctx.r11.u32, 64255, ctx.xer);
	// ble cr6,0x82213e74
	if (!cr6.gt) goto loc_82213E74;
loc_82213E64:
	// cmplwi cr6,r11,65280
	cr6.compare<uint32_t>(ctx.r11.u32, 65280, ctx.xer);
	// blt cr6,0x82213e80
	if (cr6.lt) goto loc_82213E80;
	// cmplwi cr6,r11,65500
	cr6.compare<uint32_t>(ctx.r11.u32, 65500, ctx.xer);
	// bgt cr6,0x82213e80
	if (cr6.gt) goto loc_82213E80;
loc_82213E74:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82213E80:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213E8C"))) PPC_WEAK_FUNC(sub_82213E8C);
PPC_FUNC_IMPL(__imp__sub_82213E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213E90"))) PPC_WEAK_FUNC(sub_82213E90);
PPC_FUNC_IMPL(__imp__sub_82213E90) {
	PPC_FUNC_PROLOGUE();
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,3(0)
	PPC_STORE_U32(3, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213E9C"))) PPC_WEAK_FUNC(sub_82213E9C);
PPC_FUNC_IMPL(__imp__sub_82213E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213EA0"))) PPC_WEAK_FUNC(sub_82213EA0);
PPC_FUNC_IMPL(__imp__sub_82213EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-156
	ctx.r10.s64 = ctx.r11.s64 + -156;
	// cmplwi cr6,r10,99
	cr6.compare<uint32_t>(ctx.r10.u32, 99, ctx.xer);
	// bgt cr6,0x82214068
	if (cr6.gt) goto loc_82214068;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// addi r12,r12,16072
	ctx.r12.s64 = ctx.r12.s64 + 16072;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82214060;
	case 1:
		goto loc_82214068;
	case 2:
		goto loc_82214068;
	case 3:
		goto loc_82214068;
	case 4:
		goto loc_82214068;
	case 5:
		goto loc_82214068;
	case 6:
		goto loc_82214068;
	case 7:
		goto loc_82214068;
	case 8:
		goto loc_82214068;
	case 9:
		goto loc_82214068;
	case 10:
		goto loc_82214068;
	case 11:
		goto loc_82214068;
	case 12:
		goto loc_82214068;
	case 13:
		goto loc_82214068;
	case 14:
		goto loc_82214068;
	case 15:
		goto loc_82214068;
	case 16:
		goto loc_82214068;
	case 17:
		goto loc_82214068;
	case 18:
		goto loc_82214068;
	case 19:
		goto loc_82214068;
	case 20:
		goto loc_82214068;
	case 21:
		goto loc_82214068;
	case 22:
		goto loc_82214068;
	case 23:
		goto loc_82214068;
	case 24:
		goto loc_82214068;
	case 25:
		goto loc_82214068;
	case 26:
		goto loc_82214068;
	case 27:
		goto loc_82214068;
	case 28:
		goto loc_82214068;
	case 29:
		goto loc_82214068;
	case 30:
		goto loc_82214068;
	case 31:
		goto loc_82214068;
	case 32:
		goto loc_82214068;
	case 33:
		goto loc_82214068;
	case 34:
		goto loc_82214068;
	case 35:
		goto loc_82214068;
	case 36:
		goto loc_82214068;
	case 37:
		goto loc_82214068;
	case 38:
		goto loc_82214068;
	case 39:
		goto loc_82214068;
	case 40:
		goto loc_82214068;
	case 41:
		goto loc_82214068;
	case 42:
		goto loc_82214068;
	case 43:
		goto loc_82214068;
	case 44:
		goto loc_82214068;
	case 45:
		goto loc_82214068;
	case 46:
		goto loc_82214068;
	case 47:
		goto loc_82214068;
	case 48:
		goto loc_82214068;
	case 49:
		goto loc_82214068;
	case 50:
		goto loc_82214068;
	case 51:
		goto loc_82214068;
	case 52:
		goto loc_82214094;
	case 53:
		goto loc_82214068;
	case 54:
		goto loc_82214068;
	case 55:
		goto loc_82214068;
	case 56:
		goto loc_82214068;
	case 57:
		goto loc_82214068;
	case 58:
		goto loc_82214068;
	case 59:
		goto loc_82214068;
	case 60:
		goto loc_82214068;
	case 61:
		goto loc_82214068;
	case 62:
		goto loc_82214068;
	case 63:
		goto loc_82214068;
	case 64:
		goto loc_82214068;
	case 65:
		goto loc_82214068;
	case 66:
		goto loc_82214068;
	case 67:
		goto loc_82214094;
	case 68:
		goto loc_82214068;
	case 69:
		goto loc_82214068;
	case 70:
		goto loc_82214068;
	case 71:
		goto loc_82214068;
	case 72:
		goto loc_82214068;
	case 73:
		goto loc_82214068;
	case 74:
		goto loc_82214068;
	case 75:
		goto loc_82214068;
	case 76:
		goto loc_82214068;
	case 77:
		goto loc_82214068;
	case 78:
		goto loc_82214068;
	case 79:
		goto loc_82214068;
	case 80:
		goto loc_82214068;
	case 81:
		goto loc_82214068;
	case 82:
		goto loc_82214068;
	case 83:
		goto loc_82214068;
	case 84:
		goto loc_82214094;
	case 85:
		goto loc_82214068;
	case 86:
		goto loc_82214068;
	case 87:
		goto loc_82214068;
	case 88:
		goto loc_82214068;
	case 89:
		goto loc_82214068;
	case 90:
		goto loc_82214068;
	case 91:
		goto loc_82214094;
	case 92:
		goto loc_82214068;
	case 93:
		goto loc_82214068;
	case 94:
		goto loc_82214068;
	case 95:
		goto loc_82214068;
	case 96:
		goto loc_82214068;
	case 97:
		goto loc_82214068;
	case 98:
		goto loc_82214068;
	case 99:
		goto loc_82214058;
	default:
		__builtin_unreachable();
	}
	// lwz r17,16480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16480);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16532(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16532);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16532(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16532);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16532(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16532);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16532(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16532);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16488);
	// lwz r17,16472(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16472);
loc_82214058:
	// li r3,159
	ctx.r3.s64 = 159;
	// blr 
	return;
loc_82214060:
	// li r3,140
	ctx.r3.s64 = 140;
	// blr 
	return;
loc_82214068:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x82214078
	if (cr6.lt) goto loc_82214078;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// ble cr6,0x82214088
	if (!cr6.gt) goto loc_82214088;
loc_82214078:
	// cmplwi cr6,r11,223
	cr6.compare<uint32_t>(ctx.r11.u32, 223, ctx.xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_82214088:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
loc_82214094:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214098"))) PPC_WEAK_FUNC(sub_82214098);
PPC_FUNC_IMPL(__imp__sub_82214098) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x822140A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221410c
	if (cr6.eq) goto loc_8221410C;
	// lis r10,-32065
	ctx.r10.s64 = -2101411840;
	// addi r29,r10,-32280
	ctx.r29.s64 = ctx.r10.s64 + -32280;
loc_822140C0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82213ea0
	ctx.lr = 0x822140C8;
	sub_82213EA0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r30,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
	// xor r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// rlwinm r8,r3,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// xor r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// xor r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// bne cr6,0x822140c0
	if (!cr6.eq) goto loc_822140C0;
loc_8221410C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214118"))) PPC_WEAK_FUNC(sub_82214118);
PPC_FUNC_IMPL(__imp__sub_82214118) {
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
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82214140
	if (cr6.eq) goto loc_82214140;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82214148
	goto loc_82214148;
loc_82214140:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r8,r11,16764
	ctx.r8.s64 = ctx.r11.s64 + 16764;
loc_82214148:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x8221415c
	if (!cr6.eq) goto loc_8221415C;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x82214164
	if (cr6.eq) goto loc_82214164;
loc_8221415C:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x82214168
	goto loc_82214168;
loc_82214164:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82214168:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82214178
	if (!cr6.lt) goto loc_82214178;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82214184
	goto loc_82214184;
loc_82214178:
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82214184
	if (!cr6.lt) goto loc_82214184;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82214184:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x821704f8
	ctx.lr = 0x82214198;
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

__attribute__((alias("__imp__sub_822141B0"))) PPC_WEAK_FUNC(sub_822141B0);
PPC_FUNC_IMPL(__imp__sub_822141B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x822141B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x82170888
	ctx.lr = 0x822141D4;
	sub_82170888(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8221420c
	if (!cr6.gt) goto loc_8221420C;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_822141E0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x822141f4
	if (cr6.eq) goto loc_822141F4;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8221420c
	if (!cr6.eq) goto loc_8221420C;
loc_822141F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bl 0x82170888
	ctx.lr = 0x82214204;
	sub_82170888(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822141e0
	if (cr6.lt) goto loc_822141E0;
loc_8221420C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82214220
	if (!cr6.eq) goto loc_82214220;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82214220:
	// subf r5,r29,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214118
	ctx.lr = 0x82214230;
	sub_82214118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170670
	ctx.lr = 0x8221423C;
	sub_82170670(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82214260
	if (cr6.eq) goto loc_82214260;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82170408
	ctx.lr = 0x82214260;
	sub_82170408(ctx, base);
loc_82214260:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c838
	ctx.lr = 0x82214268;
	sub_8218C838(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82170480
	ctx.lr = 0x82214274;
	sub_82170480(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214280"))) PPC_WEAK_FUNC(sub_82214280);
PPC_FUNC_IMPL(__imp__sub_82214280) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15676
	ctx.r11.s64 = ctx.r11.s64 + -15676;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822142b4
	if (cr6.eq) goto loc_822142B4;
	// bl 0x82170268
	ctx.lr = 0x822142B0;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822142B4:
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

__attribute__((alias("__imp__sub_822142C8"))) PPC_WEAK_FUNC(sub_822142C8);
PPC_FUNC_IMPL(__imp__sub_822142C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x822142D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-15720
	ctx.r11.s64 = ctx.r11.s64 + -15720;
	// addi r31,r26,592
	ctx.r31.s64 = ctx.r26.s64 + 592;
	// li r30,48
	ctx.r30.s64 = 48;
	// lis r27,-32065
	ctx.r27.s64 = -2101411840;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_822142F4:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8232ad68
	ctx.lr = 0x82214310;
	sub_8232AD68(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82214344
	if (cr6.eq) goto loc_82214344;
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82214330
	if (!cr6.eq) goto loc_82214330;
	// bl 0x82216290
	ctx.lr = 0x8221432C;
	sub_82216290(ctx, base);
	// lwz r3,-11780(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11780);
loc_82214330:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214344;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82214344:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x822142f4
	if (!cr6.lt) goto loc_822142F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-20820
	ctx.r11.s64 = ctx.r11.s64 + -20820;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214370"))) PPC_WEAK_FUNC(sub_82214370);
PPC_FUNC_IMPL(__imp__sub_82214370) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170398
	ctx.lr = 0x822143B4;
	sub_82170398(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822143cc
	if (cr6.eq) goto loc_822143CC;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_822143CC:
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

__attribute__((alias("__imp__sub_822143E4"))) PPC_WEAK_FUNC(sub_822143E4);
PPC_FUNC_IMPL(__imp__sub_822143E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822143E8"))) PPC_WEAK_FUNC(sub_822143E8);
PPC_FUNC_IMPL(__imp__sub_822143E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8233d930
	ctx.lr = 0x82214418;
	sub_8233D930(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214428"))) PPC_WEAK_FUNC(sub_82214428);
PPC_FUNC_IMPL(__imp__sub_82214428) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r31,49
	ctx.r31.s64 = 49;
loc_82214448:
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d930
	ctx.lr = 0x82214454;
	sub_8233D930(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82214448
	if (!cr6.eq) goto loc_82214448;
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

__attribute__((alias("__imp__sub_8221447C"))) PPC_WEAK_FUNC(sub_8221447C);
PPC_FUNC_IMPL(__imp__sub_8221447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214480"))) PPC_WEAK_FUNC(sub_82214480);
PPC_FUNC_IMPL(__imp__sub_82214480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82214488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822144e4
	if (!cr6.gt) goto loc_822144E4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822144B4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822144D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822144b4
	if (cr6.lt) goto loc_822144B4;
loc_822144E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822144EC"))) PPC_WEAK_FUNC(sub_822144EC);
PPC_FUNC_IMPL(__imp__sub_822144EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822144F0"))) PPC_WEAK_FUNC(sub_822144F0);
PPC_FUNC_IMPL(__imp__sub_822144F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x822144F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221455c
	if (!cr6.gt) goto loc_8221455C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82214528:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82214528
	if (cr6.lt) goto loc_82214528;
loc_8221455C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214564"))) PPC_WEAK_FUNC(sub_82214564);
PPC_FUNC_IMPL(__imp__sub_82214564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214568"))) PPC_WEAK_FUNC(sub_82214568);
PPC_FUNC_IMPL(__imp__sub_82214568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82214570;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822145d4
	if (!cr6.gt) goto loc_822145D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822145A0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822145C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822145a0
	if (cr6.lt) goto loc_822145A0;
loc_822145D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822145DC"))) PPC_WEAK_FUNC(sub_822145DC);
PPC_FUNC_IMPL(__imp__sub_822145DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822145E0"))) PPC_WEAK_FUNC(sub_822145E0);
PPC_FUNC_IMPL(__imp__sub_822145E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x822145E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221464c
	if (!cr6.gt) goto loc_8221464C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82214618:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214638;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82214618
	if (cr6.lt) goto loc_82214618;
loc_8221464C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214654"))) PPC_WEAK_FUNC(sub_82214654);
PPC_FUNC_IMPL(__imp__sub_82214654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214658"))) PPC_WEAK_FUNC(sub_82214658);
PPC_FUNC_IMPL(__imp__sub_82214658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82214660;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822146c4
	if (!cr6.gt) goto loc_822146C4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82214690:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822146B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82214690
	if (cr6.lt) goto loc_82214690;
loc_822146C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822146CC"))) PPC_WEAK_FUNC(sub_822146CC);
PPC_FUNC_IMPL(__imp__sub_822146CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822146D0"))) PPC_WEAK_FUNC(sub_822146D0);
PPC_FUNC_IMPL(__imp__sub_822146D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x822146D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82214744
	if (!cr6.gt) goto loc_82214744;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221470C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214730;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221470c
	if (cr6.lt) goto loc_8221470C;
loc_82214744:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221474C"))) PPC_WEAK_FUNC(sub_8221474C);
PPC_FUNC_IMPL(__imp__sub_8221474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214750"))) PPC_WEAK_FUNC(sub_82214750);
PPC_FUNC_IMPL(__imp__sub_82214750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x82214758;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822147c4
	if (!cr6.gt) goto loc_822147C4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221478C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822147B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221478c
	if (cr6.lt) goto loc_8221478C;
loc_822147C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822147CC"))) PPC_WEAK_FUNC(sub_822147CC);
PPC_FUNC_IMPL(__imp__sub_822147CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822147D0"))) PPC_WEAK_FUNC(sub_822147D0);
PPC_FUNC_IMPL(__imp__sub_822147D0) {
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
	// bl 0x822142c8
	ctx.lr = 0x822147F0;
	sub_822142C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214808
	if (cr6.eq) goto loc_82214808;
	// bl 0x82170268
	ctx.lr = 0x82214804;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82214808:
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

__attribute__((alias("__imp__sub_82214820"))) PPC_WEAK_FUNC(sub_82214820);
PPC_FUNC_IMPL(__imp__sub_82214820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,-23260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23260);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221494c
	if (!cr6.eq) goto loc_8221494C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x821702e0
	ctx.lr = 0x82214850;
	sub_821702E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822148cc
	if (cr6.eq) goto loc_822148CC;
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r7,r9,19888
	ctx.r7.s64 = ctx.r9.s64 + 19888;
	// lis r9,1032
	ctx.r9.s64 = 67633152;
	// addi r6,r10,-22192
	ctx.r6.s64 = ctx.r10.s64 + -22192;
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,3516
	ctx.r11.s64 = ctx.r11.s64 + 3516;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
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
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
	// li r5,1436
	ctx.r5.s64 = 1436;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ed768
	ctx.lr = 0x822148C8;
	sub_822ED768(ctx, base);
	// b 0x822148d0
	goto loc_822148D0;
loc_822148CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822148D0:
	// stw r3,-23260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23260, ctx.r3.u32);
	// bl 0x824125e0
	ctx.lr = 0x822148D8;
	sub_824125E0(ctx, base);
	// lwz r11,-23260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23260);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822148f4
	if (cr6.eq) goto loc_822148F4;
	// bl 0x824125e0
	ctx.lr = 0x822148E8;
	sub_824125E0(ctx, base);
	// lwz r11,-23260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23260);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x822148fc
	goto loc_822148FC;
loc_822148F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822148FC:
	// bl 0x82170938
	ctx.lr = 0x82214900;
	sub_82170938(ctx, base);
	// lwz r11,-23260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23260);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x82170ba8
	ctx.lr = 0x8221490C;
	sub_82170BA8(ctx, base);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23260);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11944);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221494c
	if (cr6.eq) goto loc_8221494C;
	// bl 0x82170ba8
	ctx.lr = 0x8221492C;
	sub_82170BA8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// lwz r3,-23260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23260);
	// bne cr6,0x8221494c
	if (!cr6.eq) goto loc_8221494C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-23260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23260);
loc_8221494C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214964"))) PPC_WEAK_FUNC(sub_82214964);
PPC_FUNC_IMPL(__imp__sub_82214964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214968"))) PPC_WEAK_FUNC(sub_82214968);
PPC_FUNC_IMPL(__imp__sub_82214968) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82214970;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8218ca30
	ctx.lr = 0x8221498C;
	sub_8218CA30(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221499c
	if (cr6.eq) goto loc_8221499C;
	// bl 0x82170268
	ctx.lr = 0x8221499C;
	sub_82170268(ctx, base);
loc_8221499C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8218ca30
	ctx.lr = 0x822149C0;
	sub_8218CA30(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822149d0
	if (cr6.eq) goto loc_822149D0;
	// bl 0x82170268
	ctx.lr = 0x822149D0;
	sub_82170268(ctx, base);
loc_822149D0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r11,r11,14196
	ctx.r11.s64 = ctx.r11.s64 + 14196;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822149F0"))) PPC_WEAK_FUNC(sub_822149F0);
PPC_FUNC_IMPL(__imp__sub_822149F0) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82288288
	ctx.lr = 0x82214A14;
	sub_82288288(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-5960
	ctx.r11.s64 = ctx.r11.s64 + -5960;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82214a38
	if (cr6.eq) goto loc_82214A38;
	// bl 0x82170268
	ctx.lr = 0x82214A34;
	sub_82170268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82214A38:
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

__attribute__((alias("__imp__sub_82214A50"))) PPC_WEAK_FUNC(sub_82214A50);
PPC_FUNC_IMPL(__imp__sub_82214A50) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82214A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,52
	ctx.r30.s64 = ctx.r29.s64 + 52;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82214a8c
	if (cr6.eq) goto loc_82214A8C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x82214A8C;
	sub_82170408(ctx, base);
loc_82214A8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x82214A94;
	sub_8218C838(ctx, base);
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8218ca30
	ctx.lr = 0x82214AA8;
	sub_8218CA30(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82214ab8
	if (cr6.eq) goto loc_82214AB8;
	// bl 0x82170268
	ctx.lr = 0x82214AB8;
	sub_82170268(ctx, base);
loc_82214AB8:
	// addi r28,r29,28
	ctx.r28.s64 = ctx.r29.s64 + 28;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82214aec
	if (cr6.eq) goto loc_82214AEC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82170408
	ctx.lr = 0x82214AEC;
	sub_82170408(ctx, base);
loc_82214AEC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218c838
	ctx.lr = 0x82214AF4;
	sub_8218C838(ctx, base);
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82214b1c
	if (cr6.eq) goto loc_82214B1C;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170408
	ctx.lr = 0x82214B1C;
	sub_82170408(ctx, base);
loc_82214B1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218c838
	ctx.lr = 0x82214B24;
	sub_8218C838(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82214b48
	if (cr6.eq) goto loc_82214B48;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82170408
	ctx.lr = 0x82214B48;
	sub_82170408(ctx, base);
loc_82214B48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c838
	ctx.lr = 0x82214B50;
	sub_8218C838(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214B58"))) PPC_WEAK_FUNC(sub_82214B58);
PPC_FUNC_IMPL(__imp__sub_82214B58) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82214B60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwzx r31,r3,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214b94
	if (cr6.eq) goto loc_82214B94;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82214B94:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x82214c1c
	if (cr6.eq) goto loc_82214C1C;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826126c0
	ctx.lr = 0x82214BC8;
	sub_826126C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82214c38
	if (cr6.eq) goto loc_82214C38;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82214bf8
	if (!cr6.eq) goto loc_82214BF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,516
	ctx.r5.s64 = 516;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82612748
	ctx.lr = 0x82214BF4;
	sub_82612748(ctx, base);
	// b 0x82214c38
	goto loc_82214C38;
loc_82214BF8:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82214c38
	if (!cr6.eq) goto loc_82214C38;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82612748
	ctx.lr = 0x82214C18;
	sub_82612748(ctx, base);
	// b 0x82214c38
	goto loc_82214C38;
loc_82214C1C:
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82612770
	ctx.lr = 0x82214C34;
	sub_82612770(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82214C38:
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r27.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r11,r8,0,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r11,r9,0,31,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFFFF9) | (ctx.r11.u64 & 0x6);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214C70"))) PPC_WEAK_FUNC(sub_82214C70);
PPC_FUNC_IMPL(__imp__sub_82214C70) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x82214ca0
	if (cr6.eq) goto loc_82214CA0;
	// bl 0x82612758
	ctx.lr = 0x82214C9C;
	sub_82612758(ctx, base);
	// b 0x82214cb0
	goto loc_82214CB0;
loc_82214CA0:
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// bl 0x82612658
	ctx.lr = 0x82214CB0;
	sub_82612658(ctx, base);
loc_82214CB0:
	// addis r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 196608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214cdc
	if (cr6.eq) goto loc_82214CDC;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_82214CDC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82214D04"))) PPC_WEAK_FUNC(sub_82214D04);
PPC_FUNC_IMPL(__imp__sub_82214D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214D08"))) PPC_WEAK_FUNC(sub_82214D08);
PPC_FUNC_IMPL(__imp__sub_82214D08) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82214D1C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82214d58
	if (cr6.eq) goto loc_82214D58;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82214d4c
	if (cr6.eq) goto loc_82214D4C;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x82214d58
	goto loc_82214D58;
loc_82214D4C:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82214D58:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82214d94
	if (cr6.eq) goto loc_82214D94;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// beq cr6,0x82214d88
	if (cr6.eq) goto loc_82214D88;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x82214d94
	goto loc_82214D94;
loc_82214D88:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82214D94:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82214dd0
	if (cr6.eq) goto loc_82214DD0;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// beq cr6,0x82214dc4
	if (cr6.eq) goto loc_82214DC4;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x82214dd0
	goto loc_82214DD0;
loc_82214DC4:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82214DD0:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82214e0c
	if (cr6.eq) goto loc_82214E0C;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// beq cr6,0x82214e00
	if (cr6.eq) goto loc_82214E00;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x82214e0c
	goto loc_82214E0C;
loc_82214E00:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82214E0C:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82214d1c
	if (!cr6.eq) goto loc_82214D1C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214E20"))) PPC_WEAK_FUNC(sub_82214E20);
PPC_FUNC_IMPL(__imp__sub_82214E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// lwz r11,-5952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5952);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82214e7c
	if (!cr6.eq) goto loc_82214E7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,-5952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5952, ctx.r11.u32);
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r5,-32332(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32332);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82214E7C:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,3(0)
	PPC_STORE_U32(3, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214E94"))) PPC_WEAK_FUNC(sub_82214E94);
PPC_FUNC_IMPL(__imp__sub_82214E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214E98"))) PPC_WEAK_FUNC(sub_82214E98);
PPC_FUNC_IMPL(__imp__sub_82214E98) {
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
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// addi r11,r11,4448
	ctx.r11.s64 = ctx.r11.s64 + 4448;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214ed8
	if (cr6.eq) goto loc_82214ED8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82214ED8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82612770
	ctx.lr = 0x82214F04;
	sub_82612770(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rotlwi r31,r3,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82214f30
	if (!cr6.eq) goto loc_82214F30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82214e20
	ctx.lr = 0x82214F30;
	sub_82214E20(ctx, base);
loc_82214F30:
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

__attribute__((alias("__imp__sub_82214F4C"))) PPC_WEAK_FUNC(sub_82214F4C);
PPC_FUNC_IMPL(__imp__sub_82214F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214F50"))) PPC_WEAK_FUNC(sub_82214F50);
PPC_FUNC_IMPL(__imp__sub_82214F50) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x82214F58;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,32769
	cr6.compare<uint32_t>(ctx.r30.u32, 32769, ctx.xer);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// bge cr6,0x82215158
	if (!cr6.lt) goto loc_82215158;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,37220
	ctx.r8.u64 = ctx.r10.u64 | 37220;
	// ori r11,r11,32769
	ctx.r11.u64 = ctx.r11.u64 | 32769;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ori r10,r10,37224
	ctx.r10.u64 = ctx.r10.u64 | 37224;
	// blt cr6,0x82214f94
	if (cr6.lt) goto loc_82214F94;
	// addi r29,r31,3364
	ctx.r29.s64 = ctx.r31.s64 + 3364;
	// b 0x82214fe4
	goto loc_82214FE4;
loc_82214F94:
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,1102
	ctx.r11.s64 = ctx.r30.s64 + 1102;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// beq cr6,0x82214fd0
	if (cr6.eq) goto loc_82214FD0;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mulli r9,r9,42
	ctx.r9.s64 = ctx.r9.s64 * 42;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// b 0x82214fe4
	goto loc_82214FE4;
loc_82214FD0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,2524
	ctx.r29.s64 = ctx.r11.s64 + 2524;
loc_82214FE4:
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// addi r23,r29,12
	ctx.r23.s64 = ctx.r29.s64 + 12;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822150c4
	if (!cr6.eq) goto loc_822150C4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// lwzx r7,r31,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// divwu r25,r9,r11
	ctx.r25.u32 = ctx.r9.u32 / ctx.r11.u32;
	// lwzx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mullw r26,r11,r25
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// addi r3,r3,4448
	ctx.r3.s64 = ctx.r3.s64 + 4448;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// twllei r11,0
	// bl 0x82214b58
	ctx.lr = 0x82215028;
	sub_82214B58(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82215040
	if (!cr6.eq) goto loc_82215040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82214e20
	ctx.lr = 0x82215040;
	sub_82214E20(ctx, base);
loc_82215040:
	// rlwinm r11,r30,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// addi r11,r11,846
	ctx.r11.s64 = ctx.r11.s64 + 846;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215064
	if (!cr6.eq) goto loc_82215064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82214e98
	ctx.lr = 0x82215060;
	sub_82214E98(ctx, base);
	// stwx r3,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r3.u32);
loc_82215064:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r30,21,19,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1FE0;
	// lwzx r9,r27,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x82215084
	if (cr6.eq) goto loc_82215084;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
loc_82215084:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addis r9,r26,1
	ctx.r9.s64 = ctx.r26.s64 + 65536;
	// stw r28,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_822150C4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822151ec
	if (!cr6.eq) goto loc_822151EC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bne cr6,0x822151ec
	if (!cr6.eq) goto loc_822151EC;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82215124
	if (cr6.eq) goto loc_82215124;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r8.u32);
loc_82215124:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82215140
	if (cr6.eq) goto loc_82215140;
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
loc_82215140:
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r23,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r23.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
loc_82215158:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r10,r10,37220
	ctx.r10.u64 = ctx.r10.u64 | 37220;
	// ori r11,r11,37224
	ctx.r11.u64 = ctx.r11.u64 | 37224;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r5,r31,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r3,4448
	ctx.r3.s64 = ctx.r3.s64 + 4448;
	// rlwinm r26,r9,0,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// bl 0x82214b58
	ctx.lr = 0x8221518C;
	sub_82214B58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822151a4
	if (!cr6.eq) goto loc_822151A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82214e20
	ctx.lr = 0x822151A4;
	sub_82214E20(ctx, base);
loc_822151A4:
	// rlwinm r11,r29,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// addi r11,r11,846
	ctx.r11.s64 = ctx.r11.s64 + 846;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822151c8
	if (!cr6.eq) goto loc_822151C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82214e98
	ctx.lr = 0x822151C4;
	sub_82214E98(ctx, base);
	// stwx r3,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r3.u32);
loc_822151C8:
	// lwzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r11,r29,21,19,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 21) & 0x1FE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r31,3364
	ctx.r10.s64 = ctx.r31.s64 + 3364;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
loc_822151EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822151F4"))) PPC_WEAK_FUNC(sub_822151F4);
PPC_FUNC_IMPL(__imp__sub_822151F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822151F8"))) PPC_WEAK_FUNC(sub_822151F8);
PPC_FUNC_IMPL(__imp__sub_822151F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82215200;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822153ac
	if (cr6.eq) goto loc_822153AC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822153cc
	if (cr6.eq) goto loc_822153CC;
	// rlwinm r11,r29,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r29,21,19,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 21) & 0x1FE0;
	// addi r10,r11,846
	ctx.r10.s64 = ctx.r11.s64 + 846;
	// addi r11,r31,3364
	ctx.r11.s64 = ctx.r31.s64 + 3364;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82215320
	if (cr6.eq) goto loc_82215320;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x822152c0
	if (cr6.gt) goto loc_822152C0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,32769
	ctx.r9.u64 = ctx.r9.u64 | 32769;
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822152b8
	if (!cr6.lt) goto loc_822152B8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,1102
	ctx.r11.s64 = ctx.r30.s64 + 1102;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// beq cr6,0x822152a4
	if (cr6.eq) goto loc_822152A4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r9,42
	ctx.r9.s64 = ctx.r9.s64 * 42;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x822152b8
	goto loc_822152B8;
loc_822152A4:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,2524
	ctx.r11.s64 = ctx.r11.s64 + 2524;
loc_822152B8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82215344
	if (cr6.eq) goto loc_82215344;
loc_822152C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822152D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x828d2930
	ctx.lr = 0x822152FC;
	sub_828D2930(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215314;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_82215320:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82215350
	if (cr6.gt) goto loc_82215350;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82215350
	if (cr6.lt) goto loc_82215350;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_82215344:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_82215350:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x828d2930
	ctx.lr = 0x82215388;
	sub_828D2930(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822153A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_822153AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822153C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_822153CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822153E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822153F0"))) PPC_WEAK_FUNC(sub_822153F0);
PPC_FUNC_IMPL(__imp__sub_822153F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r4,21,19,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x1FE0;
	// addi r11,r11,846
	ctx.r11.s64 = ctx.r11.s64 + 846;
	// addi r9,r7,3364
	ctx.r9.s64 = ctx.r7.s64 + 3364;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822154d8
	if (cr6.eq) goto loc_822154D8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221547c
	if (!cr6.eq) goto loc_8221547C;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82215448
	if (cr6.eq) goto loc_82215448;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
loc_82215448:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221546c
	if (cr6.eq) goto loc_8221546C;
	// stw r9,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r9.u32);
loc_8221546C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8221547C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822154b4
	if (cr6.eq) goto loc_822154B4;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
loc_822154B4:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addis r3,r7,2
	ctx.r3.s64 = ctx.r7.s64 + 131072;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r3,r3,4448
	ctx.r3.s64 = ctx.r3.s64 + 4448;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82214c70
	sub_82214C70(ctx, base);
	return;
loc_822154D8:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addis r3,r7,2
	ctx.r3.s64 = ctx.r7.s64 + 131072;
	// ori r10,r10,37220
	ctx.r10.u64 = ctx.r10.u64 | 37220;
	// addi r3,r3,4448
	ctx.r3.s64 = ctx.r3.s64 + 4448;
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// b 0x82214c70
	sub_82214C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822154F4"))) PPC_WEAK_FUNC(sub_822154F4);
PPC_FUNC_IMPL(__imp__sub_822154F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822154F8"))) PPC_WEAK_FUNC(sub_822154F8);
PPC_FUNC_IMPL(__imp__sub_822154F8) {
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
	// addis r31,r3,5
	ctx.r31.s64 = ctx.r3.s64 + 327680;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r30,r3,5
	ctx.r30.s64 = ctx.r3.s64 + 327680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r31,r31,-28316
	ctx.r31.s64 = ctx.r31.s64 + -28316;
	// addi r30,r30,-28312
	ctx.r30.s64 = ctx.r30.s64 + -28312;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82215540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82215564"))) PPC_WEAK_FUNC(sub_82215564);
PPC_FUNC_IMPL(__imp__sub_82215564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215568"))) PPC_WEAK_FUNC(sub_82215568);
PPC_FUNC_IMPL(__imp__sub_82215568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addis r31,r3,5
	ctx.r31.s64 = ctx.r3.s64 + 327680;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r31,-28316
	ctx.r31.s64 = ctx.r31.s64 + -28316;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215598;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_822155B4"))) PPC_WEAK_FUNC(sub_822155B4);
PPC_FUNC_IMPL(__imp__sub_822155B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822155B8"))) PPC_WEAK_FUNC(sub_822155B8);
PPC_FUNC_IMPL(__imp__sub_822155B8) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 131072;
	// addi r3,r3,4448
	ctx.r3.s64 = ctx.r3.s64 + 4448;
	// b 0x82214d08
	sub_82214D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822155C4"))) PPC_WEAK_FUNC(sub_822155C4);
PPC_FUNC_IMPL(__imp__sub_822155C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822155C8"))) PPC_WEAK_FUNC(sub_822155C8);
PPC_FUNC_IMPL(__imp__sub_822155C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r6,4
	ctx.r6.s64 = 4;
loc_822155D0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,42
	ctx.r7.s64 = 42;
loc_822155D8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r9,-8
	ctx.r8.s64 = ctx.r9.s64 + -8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221560c
	if (cr6.eq) goto loc_8221560C;
loc_822155E8:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215600
	if (cr6.eq) goto loc_82215600;
loc_822155F4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822155f4
	if (!cr6.eq) goto loc_822155F4;
loc_82215600:
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822155e8
	if (!cr6.eq) goto loc_822155E8;
loc_8221560C:
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215624
	if (cr6.eq) goto loc_82215624;
loc_82215618:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215618
	if (!cr6.eq) goto loc_82215618;
loc_82215624:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822155d8
	if (!cr6.eq) goto loc_822155D8;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822155d0
	if (!cr6.eq) goto loc_822155D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82215648"))) PPC_WEAK_FUNC(sub_82215648);
PPC_FUNC_IMPL(__imp__sub_82215648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x82215650;
	__savegprlr_26(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r11,r11,4412
	ctx.r11.u64 = ctx.r11.u64 | 4412;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,37220
	ctx.r10.u64 = ctx.r10.u64 | 37220;
	// stwx r6,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r6.u32);
	// ori r8,r8,37224
	ctx.r8.u64 = ctx.r8.u64 | 37224;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r9,3372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3372, ctx.r9.u32);
	// stwx r9,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r26,r3,4408
	ctx.r26.s64 = ctx.r3.s64 + 4408;
	// stwx r9,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stw r7,3364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3364, ctx.r7.u32);
	// addi r27,r3,20
	ctx.r27.s64 = ctx.r3.s64 + 20;
	// stw r11,3368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3368, ctx.r11.u32);
	// li r30,8
	ctx.r30.s64 = 8;
	// stw r9,3376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3376, ctx.r9.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r9,3380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3380, ctx.r9.u32);
loc_822156B0:
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 ^ 1;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// stw r7,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r7.u32);
loc_822156E0:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// slw r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// slw r8,r30,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// blt cr6,0x822156e0
	if (cr6.lt) goto loc_822156E0;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// li r8,37
	ctx.r8.s64 = 37;
loc_82215724:
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// clrlwi r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne cr6,0x82215724
	if (!cr6.eq) goto loc_82215724;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_8221576C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82215794
	if (!cr6.lt) goto loc_82215794;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82215780:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82215780
	if (cr6.lt) goto loc_82215780;
loc_82215794:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r10,32769
	cr6.compare<uint32_t>(ctx.r10.u32, 32769, ctx.xer);
	// blt cr6,0x8221576c
	if (cr6.lt) goto loc_8221576C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r27,r27,840
	ctx.r27.s64 = ctx.r27.s64 + 840;
	// addi r31,r31,840
	ctx.r31.s64 = ctx.r31.s64 + 840;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x822156b0
	if (cr6.lt) goto loc_822156B0;
	// addi r11,r3,3384
	ctx.r11.s64 = ctx.r3.s64 + 3384;
	// li r10,256
	ctx.r10.s64 = 256;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_822157C8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822157c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822157C8;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// li r6,8192
	ctx.r6.s64 = 8192;
	// addi r11,r11,4448
	ctx.r11.s64 = ctx.r11.s64 + 4448;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_822157F0:
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82215810
	if (cr6.eq) goto loc_82215810;
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
loc_82215810:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bne cr6,0x822157f0
	if (!cr6.eq) goto loc_822157F0;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215834"))) PPC_WEAK_FUNC(sub_82215834);
PPC_FUNC_IMPL(__imp__sub_82215834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215838"))) PPC_WEAK_FUNC(sub_82215838);
PPC_FUNC_IMPL(__imp__sub_82215838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82215840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215860;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221587C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215888;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215894"))) PPC_WEAK_FUNC(sub_82215894);
PPC_FUNC_IMPL(__imp__sub_82215894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215898"))) PPC_WEAK_FUNC(sub_82215898);
PPC_FUNC_IMPL(__imp__sub_82215898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x822158A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x822158C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822158E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x822158F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822158FC"))) PPC_WEAK_FUNC(sub_822158FC);
PPC_FUNC_IMPL(__imp__sub_822158FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215900"))) PPC_WEAK_FUNC(sub_82215900);
PPC_FUNC_IMPL(__imp__sub_82215900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82215908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221594c
	if (cr6.eq) goto loc_8221594C;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac6394
	ctx.lr = 0x8221592C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x8221594C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8221594C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215954"))) PPC_WEAK_FUNC(sub_82215954);
PPC_FUNC_IMPL(__imp__sub_82215954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215958"))) PPC_WEAK_FUNC(sub_82215958);
PPC_FUNC_IMPL(__imp__sub_82215958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82215960;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215980;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221599C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x822159A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822159B4"))) PPC_WEAK_FUNC(sub_822159B4);
PPC_FUNC_IMPL(__imp__sub_822159B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822159B8"))) PPC_WEAK_FUNC(sub_822159B8);
PPC_FUNC_IMPL(__imp__sub_822159B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x822159C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82215a04
	if (cr6.eq) goto loc_82215A04;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac6394
	ctx.lr = 0x822159E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822159FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215A04;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82215A04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215A0C"))) PPC_WEAK_FUNC(sub_82215A0C);
PPC_FUNC_IMPL(__imp__sub_82215A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215A10"))) PPC_WEAK_FUNC(sub_82215A10);
PPC_FUNC_IMPL(__imp__sub_82215A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82215A18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215A38;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215A54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215A5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215A64"))) PPC_WEAK_FUNC(sub_82215A64);
PPC_FUNC_IMPL(__imp__sub_82215A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215A68"))) PPC_WEAK_FUNC(sub_82215A68);
PPC_FUNC_IMPL(__imp__sub_82215A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82215A70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215A90;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215AAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215AB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215ABC"))) PPC_WEAK_FUNC(sub_82215ABC);
PPC_FUNC_IMPL(__imp__sub_82215ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215AC0"))) PPC_WEAK_FUNC(sub_82215AC0);
PPC_FUNC_IMPL(__imp__sub_82215AC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215AE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215AFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215B04;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82215B1C"))) PPC_WEAK_FUNC(sub_82215B1C);
PPC_FUNC_IMPL(__imp__sub_82215B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215B20"))) PPC_WEAK_FUNC(sub_82215B20);
PPC_FUNC_IMPL(__imp__sub_82215B20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215B48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215B5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215B64;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82215B7C"))) PPC_WEAK_FUNC(sub_82215B7C);
PPC_FUNC_IMPL(__imp__sub_82215B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215B80"))) PPC_WEAK_FUNC(sub_82215B80);
PPC_FUNC_IMPL(__imp__sub_82215B80) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215BA8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215BC4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82215BDC"))) PPC_WEAK_FUNC(sub_82215BDC);
PPC_FUNC_IMPL(__imp__sub_82215BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215BE0"))) PPC_WEAK_FUNC(sub_82215BE0);
PPC_FUNC_IMPL(__imp__sub_82215BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82215BE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215C04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215C1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215C24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215C2C"))) PPC_WEAK_FUNC(sub_82215C2C);
PPC_FUNC_IMPL(__imp__sub_82215C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215C30"))) PPC_WEAK_FUNC(sub_82215C30);
PPC_FUNC_IMPL(__imp__sub_82215C30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215C58;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215C6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215C74;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82215C8C"))) PPC_WEAK_FUNC(sub_82215C8C);
PPC_FUNC_IMPL(__imp__sub_82215C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215C90"))) PPC_WEAK_FUNC(sub_82215C90);
PPC_FUNC_IMPL(__imp__sub_82215C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82215C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215CB8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215CD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215CDC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215CE4"))) PPC_WEAK_FUNC(sub_82215CE4);
PPC_FUNC_IMPL(__imp__sub_82215CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215CE8"))) PPC_WEAK_FUNC(sub_82215CE8);
PPC_FUNC_IMPL(__imp__sub_82215CE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac6394
	ctx.lr = 0x82215D10;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215D24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac63a4
	ctx.lr = 0x82215D2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

