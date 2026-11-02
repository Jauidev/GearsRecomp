#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827E0898"))) PPC_WEAK_FUNC(sub_827E0898);
PPC_FUNC_IMPL(__imp__sub_827E0898) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r31.u32);
	// bl 0x82ac63b4
	ctx.lr = 0x827E08C4;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_827E08DC"))) PPC_WEAK_FUNC(sub_827E08DC);
PPC_FUNC_IMPL(__imp__sub_827E08DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E08E0"))) PPC_WEAK_FUNC(sub_827E08E0);
PPC_FUNC_IMPL(__imp__sub_827E08E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E08EC"))) PPC_WEAK_FUNC(sub_827E08EC);
PPC_FUNC_IMPL(__imp__sub_827E08EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E08F0"))) PPC_WEAK_FUNC(sub_827E08F0);
PPC_FUNC_IMPL(__imp__sub_827E08F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_827E08F4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827e08f4
	if (!cr0.eq) goto loc_827E08F4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0918"))) PPC_WEAK_FUNC(sub_827E0918);
PPC_FUNC_IMPL(__imp__sub_827E0918) {
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
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x827e095c
	if (!cr6.eq) goto loc_827E095C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_827E095C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827e095c
	if (!cr0.eq) goto loc_827E095C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E098C"))) PPC_WEAK_FUNC(sub_827E098C);
PPC_FUNC_IMPL(__imp__sub_827E098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E0990"))) PPC_WEAK_FUNC(sub_827E0990);
PPC_FUNC_IMPL(__imp__sub_827E0990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82ac6394
	ctx.lr = 0x827E09A4;
	__imp__RtlEnterCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_827E09B8"))) PPC_WEAK_FUNC(sub_827E09B8);
PPC_FUNC_IMPL(__imp__sub_827E09B8) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82ac6e14
	ctx.lr = 0x827E09CC;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e09e8
	if (cr6.eq) goto loc_827E09E8;
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
loc_827E09E8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0A00"))) PPC_WEAK_FUNC(sub_827E0A00);
PPC_FUNC_IMPL(__imp__sub_827E0A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82ac63a4
	ctx.lr = 0x827E0A14;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_827E0A28"))) PPC_WEAK_FUNC(sub_827E0A28);
PPC_FUNC_IMPL(__imp__sub_827E0A28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e0a60
	if (cr6.eq) goto loc_827E0A60;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// blr 
	return;
loc_827E0A60:
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0A74"))) PPC_WEAK_FUNC(sub_827E0A74);
PPC_FUNC_IMPL(__imp__sub_827E0A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E0A78"))) PPC_WEAK_FUNC(sub_827E0A78);
PPC_FUNC_IMPL(__imp__sub_827E0A78) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e0ab8
	if (cr6.eq) goto loc_827E0AB8;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827e0aa0
	if (!cr6.eq) goto loc_827E0AA0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827e0a9c
	if (!cr6.eq) goto loc_827E0A9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827E0A9C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_827E0AA0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_827E0AB8:
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0AC8"))) PPC_WEAK_FUNC(sub_827E0AC8);
PPC_FUNC_IMPL(__imp__sub_827E0AC8) {
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
	// bl 0x826124f8
	ctx.lr = 0x827E0AD8;
	sub_826124F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x827e0ae8
	if (!cr6.gt) goto loc_827E0AE8;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_827E0AE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0AF8"))) PPC_WEAK_FUNC(sub_827E0AF8);
PPC_FUNC_IMPL(__imp__sub_827E0AF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0B0C"))) PPC_WEAK_FUNC(sub_827E0B0C);
PPC_FUNC_IMPL(__imp__sub_827E0B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E0B10"))) PPC_WEAK_FUNC(sub_827E0B10);
PPC_FUNC_IMPL(__imp__sub_827E0B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-24216
	ctx.r11.s64 = ctx.r11.s64 + -24216;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x827e08e0
	sub_827E08E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E0B20"))) PPC_WEAK_FUNC(sub_827E0B20);
PPC_FUNC_IMPL(__imp__sub_827E0B20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0B34"))) PPC_WEAK_FUNC(sub_827E0B34);
PPC_FUNC_IMPL(__imp__sub_827E0B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E0B38"))) PPC_WEAK_FUNC(sub_827E0B38);
PPC_FUNC_IMPL(__imp__sub_827E0B38) {
	PPC_FUNC_PROLOGUE();
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0B40"))) PPC_WEAK_FUNC(sub_827E0B40);
PPC_FUNC_IMPL(__imp__sub_827E0B40) {
	PPC_FUNC_PROLOGUE();
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0B48"))) PPC_WEAK_FUNC(sub_827E0B48);
PPC_FUNC_IMPL(__imp__sub_827E0B48) {
	PPC_FUNC_PROLOGUE();
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0B50"))) PPC_WEAK_FUNC(sub_827E0B50);
PPC_FUNC_IMPL(__imp__sub_827E0B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0B58"))) PPC_WEAK_FUNC(sub_827E0B58);
PPC_FUNC_IMPL(__imp__sub_827E0B58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0B60"))) PPC_WEAK_FUNC(sub_827E0B60);
PPC_FUNC_IMPL(__imp__sub_827E0B60) {
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
	// bl 0x827e0898
	ctx.lr = 0x827E0B78;
	sub_827E0898(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-24216
	ctx.r10.s64 = ctx.r11.s64 + -24216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827E0BAC"))) PPC_WEAK_FUNC(sub_827E0BAC);
PPC_FUNC_IMPL(__imp__sub_827E0BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E0BB0"))) PPC_WEAK_FUNC(sub_827E0BB0);
PPC_FUNC_IMPL(__imp__sub_827E0BB0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24216
	ctx.r11.s64 = ctx.r11.s64 + -24216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827e08e0
	ctx.lr = 0x827E0BDC;
	sub_827E08E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e0bfc
	if (cr6.eq) goto loc_827E0BFC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32771
	ctx.r4.u64 = ctx.r4.u64 | 32771;
	// bl 0x822193d8
	ctx.lr = 0x827E0BF8;
	sub_822193D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827E0BFC:
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

__attribute__((alias("__imp__sub_827E0C14"))) PPC_WEAK_FUNC(sub_827E0C14);
PPC_FUNC_IMPL(__imp__sub_827E0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E0C18"))) PPC_WEAK_FUNC(sub_827E0C18);
PPC_FUNC_IMPL(__imp__sub_827E0C18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827e43c8
	ctx.lr = 0x827E0C30;
	sub_827E43C8(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0C44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r10,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r10,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// std r11,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_827E0C74"))) PPC_WEAK_FUNC(sub_827E0C74);
PPC_FUNC_IMPL(__imp__sub_827E0C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E0C78"))) PPC_WEAK_FUNC(sub_827E0C78);
PPC_FUNC_IMPL(__imp__sub_827E0C78) {
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
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0C9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827e0cb8
	if (cr6.eq) goto loc_827E0CB8;
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
loc_827E0CB8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0CD0"))) PPC_WEAK_FUNC(sub_827E0CD0);
PPC_FUNC_IMPL(__imp__sub_827E0CD0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// addi r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 + 212;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0CFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827e0d18
	if (cr6.eq) goto loc_827E0D18;
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
loc_827E0D18:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0D30"))) PPC_WEAK_FUNC(sub_827E0D30);
PPC_FUNC_IMPL(__imp__sub_827E0D30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r4.u32);
	// stw r5,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0D44"))) PPC_WEAK_FUNC(sub_827E0D44);
PPC_FUNC_IMPL(__imp__sub_827E0D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E0D48"))) PPC_WEAK_FUNC(sub_827E0D48);
PPC_FUNC_IMPL(__imp__sub_827E0D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x827daa30
	ctx.lr = 0x827E0D5C;
	sub_827DAA30(ctx, base);
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

__attribute__((alias("__imp__sub_827E0D70"))) PPC_WEAK_FUNC(sub_827E0D70);
PPC_FUNC_IMPL(__imp__sub_827E0D70) {
	PPC_FUNC_PROLOGUE();
	// stw r4,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E0D78"))) PPC_WEAK_FUNC(sub_827E0D78);
PPC_FUNC_IMPL(__imp__sub_827E0D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x827E0D80;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x827eb8a0
	ctx.lr = 0x827E0DB8;
	sub_827EB8A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e0e6c
	if (cr6.lt) goto loc_827E0E6C;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,608(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0DE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e0e6c
	if (cr6.lt) goto loc_827E0E6C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x827eb890
	ctx.lr = 0x827E0E00;
	sub_827EB890(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e0e6c
	if (cr6.lt) goto loc_827E0E6C;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,608(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0E2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e0e6c
	if (cr6.lt) goto loc_827E0E6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r24,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r24.u32);
	// stw r23,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r23.u32);
	// stw r26,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r26.u32);
	// stw r9,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r9.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0E68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827E0E6C:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827e0ee0
	if (cr6.eq) goto loc_827E0EE0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x827e0ee0
	if (!cr6.lt) goto loc_827E0EE0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e0eb0
	if (cr6.eq) goto loc_827E0EB0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e0eb0
	if (cr6.eq) goto loc_827E0EB0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0EA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb708
	ctx.lr = 0x827E0EB0;
	sub_827EB708(ctx, base);
loc_827E0EB0:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e0ee0
	if (cr6.eq) goto loc_827E0EE0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e0ee0
	if (cr6.eq) goto loc_827E0EE0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0ED0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb708
	ctx.lr = 0x827E0EE0;
	sub_827EB708(ctx, base);
loc_827E0EE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E0EEC"))) PPC_WEAK_FUNC(sub_827E0EEC);
PPC_FUNC_IMPL(__imp__sub_827E0EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E0EF0"))) PPC_WEAK_FUNC(sub_827E0EF0);
PPC_FUNC_IMPL(__imp__sub_827E0EF0) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e0f48
	if (cr6.eq) goto loc_827E0F48;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e0f38
	if (cr6.eq) goto loc_827E0F38;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0F34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E0F38:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 608);
	// bl 0x827eb708
	ctx.lr = 0x827E0F44;
	sub_827EB708(ctx, base);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E0F48:
	// lwz r3,572(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 572);
	// bl 0x827ebc40
	ctx.lr = 0x827E0F50;
	sub_827EBC40(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,568(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// bl 0x827ebc40
	ctx.lr = 0x827E0F5C;
	sub_827EBC40(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e0f84
	if (cr6.eq) goto loc_827E0F84;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb708
	ctx.lr = 0x827E0F80;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E0F84:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e0fc8
	if (cr6.eq) goto loc_827E0FC8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e0fb4
	if (cr6.eq) goto loc_827E0FB4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E0FB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E0FB4:
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb708
	ctx.lr = 0x827E0FC4;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E0FC8:
	// addi r5,r11,576
	ctx.r5.s64 = ctx.r11.s64 + 576;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e0fe8
	if (cr6.eq) goto loc_827E0FE8;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb708
	ctx.lr = 0x827E0FE4;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E0FE8:
	// lwz r10,580(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e102c
	if (cr6.eq) goto loc_827E102C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e1018
	if (cr6.eq) goto loc_827E1018;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb708
	ctx.lr = 0x827E1014;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E1018:
	// addi r5,r11,580
	ctx.r5.s64 = ctx.r11.s64 + 580;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb708
	ctx.lr = 0x827E1028;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E102C:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e10e0
	if (cr6.eq) goto loc_827E10E0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e105c
	if (cr6.eq) goto loc_827E105C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb708
	ctx.lr = 0x827E1058;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E105C:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e1080
	if (cr6.eq) goto loc_827E1080;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb708
	ctx.lr = 0x827E107C;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E1080:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e10a4
	if (cr6.eq) goto loc_827E10A4;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb708
	ctx.lr = 0x827E10A0;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E10A4:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x827e10cc
	if (cr6.eq) goto loc_827E10CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb708
	ctx.lr = 0x827E10C8;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E10CC:
	// addi r5,r11,584
	ctx.r5.s64 = ctx.r11.s64 + 584;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb708
	ctx.lr = 0x827E10DC;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E10E0:
	// addi r5,r11,612
	ctx.r5.s64 = ctx.r11.s64 + 612;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e1104
	if (cr6.eq) goto loc_827E1104;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb708
	ctx.lr = 0x827E10FC;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_827E1104:
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e1124
	if (cr6.eq) goto loc_827E1124;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb708
	ctx.lr = 0x827E1120;
	sub_827EB708(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827E1124:
	// lwz r4,636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827e1140
	if (cr6.eq) goto loc_827E1140;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb2b0
	ctx.lr = 0x827E1138;
	sub_827EB2B0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_827E1140:
	// lwz r4,640(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827e115c
	if (cr6.eq) goto loc_827E115C;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb2b0
	ctx.lr = 0x827E1154;
	sub_827EB2B0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_827E115C:
	// lwz r4,644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827e1178
	if (cr6.eq) goto loc_827E1178;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb2b0
	ctx.lr = 0x827E1170;
	sub_827EB2B0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_827E1178:
	// lwz r4,648(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827e1194
	if (cr6.eq) goto loc_827E1194;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x827eb2b0
	ctx.lr = 0x827E118C;
	sub_827EB2B0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_827E1194:
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb708
	ctx.lr = 0x827E11A4;
	sub_827EB708(ctx, base);
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

__attribute__((alias("__imp__sub_827E11BC"))) PPC_WEAK_FUNC(sub_827E11BC);
PPC_FUNC_IMPL(__imp__sub_827E11BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E11C0"))) PPC_WEAK_FUNC(sub_827E11C0);
PPC_FUNC_IMPL(__imp__sub_827E11C0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827ebb20
	ctx.lr = 0x827E11F4;
	sub_827EBB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e123c
	if (cr6.lt) goto loc_827E123C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827ebb20
	ctx.lr = 0x827E120C;
	sub_827EBB20(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e1230
	if (cr6.eq) goto loc_827E1230;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e1230
	if (cr6.eq) goto loc_827E1230;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x827ebaa0
	ctx.lr = 0x827E1230;
	sub_827EBAA0(ctx, base);
loc_827E1230:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x827ebaa0
	ctx.lr = 0x827E123C;
	sub_827EBAA0(ctx, base);
loc_827E123C:
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

__attribute__((alias("__imp__sub_827E1254"))) PPC_WEAK_FUNC(sub_827E1254);
PPC_FUNC_IMPL(__imp__sub_827E1254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E1258"))) PPC_WEAK_FUNC(sub_827E1258);
PPC_FUNC_IMPL(__imp__sub_827E1258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x827E1260;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r23,1
	ctx.r23.s64 = 1;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r31,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r31.u32);
	// clrldi r26,r26,5
	ctx.r26.u64 = ctx.r26.u64 & 0x7FFFFFFFFFFFFFF;
	// lwz r11,532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// beq cr6,0x827e12c8
	if (cr6.eq) goto loc_827E12C8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x827e12d0
	if (!cr6.eq) goto loc_827E12D0;
loc_827E12C8:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,532(r28)
	PPC_STORE_U32(ctx.r28.u32 + 532, ctx.r11.u32);
loc_827E12D0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r31.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r17,20(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827E12EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827e134c
	if (!cr6.eq) goto loc_827E134C;
	// lwz r11,632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e1340
	if (cr6.eq) goto loc_827E1340;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_827E130C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x827ebb48
	ctx.lr = 0x827E1320;
	sub_827EBB48(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r18,r11,22
	ctx.r18.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r18
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x827e1360
	if (!cr6.eq) goto loc_827E1360;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,167
	ctx.r3.u64 = ctx.r3.u64 | 167;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E1340:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E134C:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bge cr6,0x827e130c
	if (!cr6.lt) goto loc_827E130C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E1360:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1774
	if (cr6.lt) goto loc_827E1774;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,588(r28)
	PPC_STORE_U32(ctx.r28.u32 + 588, ctx.r31.u32);
	// li r16,6
	ctx.r16.s64 = 6;
	// ori r19,r11,11
	ctx.r19.u64 = ctx.r11.u64 | 11;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r20,r11,11
	ctx.r20.u64 = ctx.r11.u64 | 11;
loc_827E1384:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1774
	if (cr6.lt) goto loc_827E1774;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827e164c
	if (cr6.eq) goto loc_827E164C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 572);
	// bl 0x827ebb20
	ctx.lr = 0x827E13AC;
	sub_827EBB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1774
	if (cr6.lt) goto loc_827E1774;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827ebff8
	ctx.lr = 0x827E13CC;
	sub_827EBFF8(ctx, base);
	// cmplw cr6,r3,r19
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x827e1418
	if (!cr6.eq) goto loc_827E1418;
	// cmpw cr6,r21,r20
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x827e140c
	if (!cr6.eq) goto loc_827E140C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827e140c
	if (!cr6.eq) goto loc_827E140C;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827ec878
	ctx.lr = 0x827E13F8;
	sub_827EC878(ctx, base);
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e1694
	if (!cr6.eq) goto loc_827E1694;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r23.u32);
loc_827E140C:
	// mr r14,r31
	ctx.r14.u64 = ctx.r31.u64;
	// stw r31,588(r28)
	PPC_STORE_U32(ctx.r28.u32 + 588, ctx.r31.u32);
	// b 0x827e164c
	goto loc_827E164C;
loc_827E1418:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1774
	if (cr6.lt) goto loc_827E1774;
	// lwz r11,532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bne cr6,0x827e144c
	if (!cr6.eq) goto loc_827E144C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpd cr6,r9,r10
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// ble cr6,0x827e144c
	if (!cr6.gt) goto loc_827E144C;
	// stw r16,532(r28)
	PPC_STORE_U32(ctx.r28.u32 + 532, ctx.r16.u32);
loc_827E144C:
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x827e147c
	if (cr6.eq) goto loc_827E147C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x827e1490
	if (!cr6.eq) goto loc_827E1490;
loc_827E147C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x827ebb20
	ctx.lr = 0x827E148C;
	sub_827EBB20(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827E1490:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x827e1578
	if (!cr6.eq) goto loc_827E1578;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827e14bc
	if (!cr6.eq) goto loc_827E14BC;
	// stw r30,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r30.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r23,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r23.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827E14BC:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827e152c
	if (cr6.lt) goto loc_827E152C;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x827e11c0
	ctx.lr = 0x827E1524;
	sub_827E11C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1774
	if (cr6.lt) goto loc_827E1774;
loc_827E152C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827E1540:
	// lwz r10,556(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827e1628
	if (!cr6.eq) goto loc_827E1628;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrldi r9,r17,32
	ctx.r9.u64 = ctx.r17.u64 & 0xFFFFFFFF;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpd cr6,r10,r26
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x827e164c
	if (cr6.gt) goto loc_827E164C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827e164c
	if (cr6.eq) goto loc_827E164C;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// b 0x827e1640
	goto loc_827E1640;
loc_827E1578:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x827e1540
	if (!cr6.eq) goto loc_827E1540;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827e1540
	if (cr6.eq) goto loc_827E1540;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827e1540
	if (cr6.lt) goto loc_827E1540;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827e15e0
	if (cr6.eq) goto loc_827E15E0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827e15e0
	if (!cr6.eq) goto loc_827E15E0;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
loc_827E15E0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x827e11c0
	ctx.lr = 0x827E1618;
	sub_827E11C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1774
	if (cr6.lt) goto loc_827E1774;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// b 0x827e164c
	goto loc_827E164C;
loc_827E1628:
	// cmpd cr6,r29,r26
	cr6.compare<int64_t>(ctx.r29.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x827e164c
	if (cr6.gt) goto loc_827E164C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827e164c
	if (cr6.eq) goto loc_827E164C;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_827E1640:
	// lwz r25,68(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_827E164C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x827ebbb8
	ctx.lr = 0x827E1660;
	sub_827EBBB8(ctx, base);
	// cmplw cr6,r3,r18
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x827e1384
	if (!cr6.eq) goto loc_827E1384;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x827ebc28
	ctx.lr = 0x827E1674;
	sub_827EBC28(ctx, base);
	// cmpw cr6,r21,r20
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x827e16b8
	if (!cr6.eq) goto loc_827E16B8;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x827e16d4
	if (!cr6.eq) goto loc_827E16D4;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E1694:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r27,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r27.u32);
	// bl 0x827ec6b8
	ctx.lr = 0x827E16A4;
	sub_827EC6B8(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x827ebc28
	ctx.lr = 0x827E16B0;
	sub_827EBC28(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E16B8:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827e1744
	if (cr6.eq) goto loc_827E1744;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x827e1744
	if (!cr6.eq) goto loc_827E1744;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x827e1760
	if (cr6.eq) goto loc_827E1760;
loc_827E16D4:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// lwz r3,608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x827eb3d8
	ctx.lr = 0x827E16F4;
	sub_827EB3D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1774
	if (cr6.lt) goto loc_827E1774;
	// lwz r30,332(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827ec6b8
	ctx.lr = 0x827E170C;
	sub_827EC6B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1774
	if (cr6.lt) goto loc_827E1774;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x827ebb20
	ctx.lr = 0x827E1724;
	sub_827EBB20(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r22.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e175c
	if (cr6.eq) goto loc_827E175C;
	// stw r24,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r24.u32);
	// b 0x827e1760
	goto loc_827E1760;
loc_827E1744:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x827e16d4
	if (!cr6.eq) goto loc_827E16D4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E175C:
	// stw r31,536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 536, ctx.r31.u32);
loc_827E1760:
	// lwz r11,532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x827e1774
	if (!cr6.eq) goto loc_827E1774;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
loc_827E1774:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E177C"))) PPC_WEAK_FUNC(sub_827E177C);
PPC_FUNC_IMPL(__imp__sub_827E177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E1780"))) PPC_WEAK_FUNC(sub_827E1780);
PPC_FUNC_IMPL(__imp__sub_827E1780) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827e17b4
	if (!cr6.eq) goto loc_827E17B4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// b 0x827e17d4
	goto loc_827E17D4;
loc_827E17B4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x827ec0a0
	ctx.lr = 0x827E17BC;
	sub_827EC0A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e17d4
	if (cr6.lt) goto loc_827E17D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e17d4
	if (!cr6.eq) goto loc_827E17D4;
	// stw r11,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r11.u32);
loc_827E17D4:
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

__attribute__((alias("__imp__sub_827E17EC"))) PPC_WEAK_FUNC(sub_827E17EC);
PPC_FUNC_IMPL(__imp__sub_827E17EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E17F0"))) PPC_WEAK_FUNC(sub_827E17F0);
PPC_FUNC_IMPL(__imp__sub_827E17F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827E17F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x827ebb48
	ctx.lr = 0x827E182C;
	sub_827EBB48(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r29,r11,22
	ctx.r29.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827e187c
	if (cr6.eq) goto loc_827E187C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1974
	if (cr6.lt) goto loc_827E1974;
loc_827E1844:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1974
	if (cr6.lt) goto loc_827E1974;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ec6c8
	ctx.lr = 0x827E1858;
	sub_827EC6C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1974
	if (cr6.lt) goto loc_827E1974;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827ebbb8
	ctx.lr = 0x827E1874;
	sub_827EBBB8(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x827e1844
	if (!cr6.eq) goto loc_827E1844;
loc_827E187C:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x827ebc28
	ctx.lr = 0x827E1888;
	sub_827EBC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x827ebb48
	ctx.lr = 0x827E189C;
	sub_827EBB48(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827e1930
	if (cr6.eq) goto loc_827E1930;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1974
	if (cr6.lt) goto loc_827E1974;
loc_827E18B0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1974
	if (cr6.lt) goto loc_827E1974;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x827e18d0
	if (!cr6.eq) goto loc_827E18D0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x827e18dc
	goto loc_827E18DC;
loc_827E18D0:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x827e18e0
	if (!cr6.eq) goto loc_827E18E0;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_827E18DC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827E18E0:
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x827ebbb8
	ctx.lr = 0x827E1928;
	sub_827EBBB8(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x827e18b0
	if (!cr6.eq) goto loc_827E18B0;
loc_827E1930:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x827ebc28
	ctx.lr = 0x827E193C;
	sub_827EBC28(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E1950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1974
	if (cr6.lt) goto loc_827E1974;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r31.u32);
	// stw r28,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r28.u32);
	// std r27,560(r30)
	PPC_STORE_U64(ctx.r30.u32 + 560, ctx.r27.u64);
	// stw r31,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r31.u32);
	// stw r31,632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 632, ctx.r31.u32);
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
loc_827E1974:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E197C"))) PPC_WEAK_FUNC(sub_827E197C);
PPC_FUNC_IMPL(__imp__sub_827E197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E1980"))) PPC_WEAK_FUNC(sub_827E1980);
PPC_FUNC_IMPL(__imp__sub_827E1980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x827E1988;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x827ebb48
	ctx.lr = 0x827E19C4;
	sub_827EBB48(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r29,r11,22
	ctx.r29.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827e1a14
	if (cr6.eq) goto loc_827E1A14;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1b24
	if (cr6.lt) goto loc_827E1B24;
loc_827E19DC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1b24
	if (cr6.lt) goto loc_827E1B24;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ec6c8
	ctx.lr = 0x827E19F0;
	sub_827EC6C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1b24
	if (cr6.lt) goto loc_827E1B24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827ebbb8
	ctx.lr = 0x827E1A0C;
	sub_827EBBB8(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x827e19dc
	if (!cr6.eq) goto loc_827E19DC;
loc_827E1A14:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x827ebc28
	ctx.lr = 0x827E1A20;
	sub_827EBC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x827ebb48
	ctx.lr = 0x827E1A34;
	sub_827EBB48(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827e1ad8
	if (cr6.eq) goto loc_827E1AD8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1b24
	if (cr6.lt) goto loc_827E1B24;
loc_827E1A48:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1b24
	if (cr6.lt) goto loc_827E1B24;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x827e1a68
	if (!cr6.eq) goto loc_827E1A68;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x827e1a74
	goto loc_827E1A74;
loc_827E1A68:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x827e1a78
	if (!cr6.eq) goto loc_827E1A78;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_827E1A74:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827E1A78:
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r30.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827e1abc
	if (!cr6.eq) goto loc_827E1ABC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
loc_827E1ABC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827ebbb8
	ctx.lr = 0x827E1AD0;
	sub_827EBBB8(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x827e1a48
	if (!cr6.eq) goto loc_827E1A48;
loc_827E1AD8:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x827ebc28
	ctx.lr = 0x827E1AE4;
	sub_827EBC28(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrldi r4,r26,32
	ctx.r4.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E1B00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e1b24
	if (cr6.lt) goto loc_827E1B24;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r26.u32);
	// stb r28,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r28.u8);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stw r27,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r27.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
loc_827E1B24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E1B2C"))) PPC_WEAK_FUNC(sub_827E1B2C);
PPC_FUNC_IMPL(__imp__sub_827E1B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E1B30"))) PPC_WEAK_FUNC(sub_827E1B30);
PPC_FUNC_IMPL(__imp__sub_827E1B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x827E1B38;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// clrldi r27,r27,5
	ctx.r27.u64 = ctx.r27.u64 & 0x7FFFFFFFFFFFFFF;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bne cr6,0x827e1ef4
	if (!cr6.eq) goto loc_827E1EF4;
	// lis r11,10
	ctx.r11.s64 = 655360;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// bgt cr6,0x827e1d68
	if (cr6.gt) goto loc_827E1D68;
	// beq cr6,0x827e1ef4
	if (cr6.eq) goto loc_827E1EF4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827e1c04
	if (cr6.gt) goto loc_827E1C04;
	// beq cr6,0x827e1ef4
	if (cr6.eq) goto loc_827E1EF4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827e1bcc
	if (cr6.eq) goto loc_827E1BCC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827e1ec8
	if (!cr6.eq) goto loc_827E1EC8;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E1BCC:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// stw r9,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r9.u32);
	// beq cr6,0x827e1bf8
	if (cr6.eq) goto loc_827E1BF8;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E1BF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E1C04:
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827e1ec8
	if (!cr6.eq) goto loc_827E1EC8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x827ebb48
	ctx.lr = 0x827E1C20;
	sub_827EBB48(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r26,r11,22
	ctx.r26.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x827e1c40
	if (!cr6.eq) goto loc_827E1C40;
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,167
	ctx.r31.u64 = ctx.r31.u64 | 167;
	// b 0x827e1ed8
	goto loc_827E1ED8;
loc_827E1C40:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e1ed8
	if (cr6.lt) goto loc_827E1ED8;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r25,r11,11
	ctx.r25.u64 = ctx.r11.u64 | 11;
loc_827E1C58:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e1ed8
	if (cr6.lt) goto loc_827E1ED8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827e1d08
	if (cr6.eq) goto loc_827E1D08;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x827ebb20
	ctx.lr = 0x827E1C80;
	sub_827EBB20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e1ed8
	if (cr6.lt) goto loc_827E1ED8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ebff8
	ctx.lr = 0x827E1CA0;
	sub_827EBFF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x827e1cb4
	if (!cr6.eq) goto loc_827E1CB4;
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// b 0x827e1d08
	goto loc_827E1D08;
loc_827E1CB4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e1ed8
	if (cr6.lt) goto loc_827E1ED8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpd cr6,r8,r7
	cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// ble cr6,0x827e1cdc
	if (!cr6.gt) goto loc_827E1CDC;
	// stw r24,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r24.u32);
loc_827E1CDC:
	// cmpd cr6,r11,r27
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r27.s64, ctx.xer);
	// bge cr6,0x827e1ce8
	if (!cr6.lt) goto loc_827E1CE8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_827E1CE8:
	// cmpd cr6,r10,r28
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r28.s64, ctx.xer);
	// ble cr6,0x827e1cf4
	if (!cr6.gt) goto loc_827E1CF4;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_827E1CF4:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r10,r27,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r27.s64;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x827e1d08
	if (!cr6.gt) goto loc_827E1D08;
	// stw r24,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r24.u32);
loc_827E1D08:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827ebbb8
	ctx.lr = 0x827E1D1C;
	sub_827EBBB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x827e1c58
	if (!cr6.eq) goto loc_827E1C58;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x827ebc28
	ctx.lr = 0x827E1D34;
	sub_827EBC28(ctx, base);
	// lwz r11,588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 588);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e1d58
	if (cr6.eq) goto loc_827E1D58;
	// lwz r11,632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827e1d50
	if (!cr6.eq) goto loc_827E1D50;
	// stw r24,632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 632, ctx.r24.u32);
loc_827E1D50:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// b 0x827e1ed8
	goto loc_827E1ED8;
loc_827E1D58:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E1D68:
	// addis r11,r4,-11
	ctx.r11.s64 = ctx.r4.s64 + -720896;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bgt cr6,0x827e1ec8
	if (cr6.gt) goto loc_827E1EC8;
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,7564
	ctx.r12.s64 = ctx.r12.s64 + 7564;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E1E50;
	case 1:
		goto loc_827E1EC8;
	case 2:
		goto loc_827E1EC8;
	case 3:
		goto loc_827E1EC8;
	case 4:
		goto loc_827E1EC8;
	case 5:
		goto loc_827E1EC8;
	case 6:
		goto loc_827E1EC8;
	case 7:
		goto loc_827E1EC8;
	case 8:
		goto loc_827E1EC8;
	case 9:
		goto loc_827E1EC8;
	case 10:
		goto loc_827E1EC8;
	case 11:
		goto loc_827E1EC8;
	case 12:
		goto loc_827E1EC8;
	case 13:
		goto loc_827E1EC8;
	case 14:
		goto loc_827E1EC8;
	case 15:
		goto loc_827E1EC8;
	case 16:
		goto loc_827E1E78;
	case 17:
		goto loc_827E1EC8;
	case 18:
		goto loc_827E1EC8;
	case 19:
		goto loc_827E1EC8;
	case 20:
		goto loc_827E1EC8;
	case 21:
		goto loc_827E1EC8;
	case 22:
		goto loc_827E1EC8;
	case 23:
		goto loc_827E1EC8;
	case 24:
		goto loc_827E1EC8;
	case 25:
		goto loc_827E1EC8;
	case 26:
		goto loc_827E1EC8;
	case 27:
		goto loc_827E1EC8;
	case 28:
		goto loc_827E1EC8;
	case 29:
		goto loc_827E1EC8;
	case 30:
		goto loc_827E1EC8;
	case 31:
		goto loc_827E1EC8;
	case 32:
		goto loc_827E1E90;
	case 33:
		goto loc_827E1EC8;
	case 34:
		goto loc_827E1EC8;
	case 35:
		goto loc_827E1EC8;
	case 36:
		goto loc_827E1EC8;
	case 37:
		goto loc_827E1EC8;
	case 38:
		goto loc_827E1EC8;
	case 39:
		goto loc_827E1EC8;
	case 40:
		goto loc_827E1EC8;
	case 41:
		goto loc_827E1EC8;
	case 42:
		goto loc_827E1EC8;
	case 43:
		goto loc_827E1EC8;
	case 44:
		goto loc_827E1EC8;
	case 45:
		goto loc_827E1EC8;
	case 46:
		goto loc_827E1EC8;
	case 47:
		goto loc_827E1EC8;
	case 48:
		goto loc_827E1EA8;
	default:
		__builtin_unreachable();
	}
	// lwz r19,7760(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7760);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7800(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7800);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7824(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7824);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7880(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7880);
	// lwz r19,7848(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7848);
loc_827E1E50:
	// lhz r11,626(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 626);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// lbz r11,629(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 629);
	// stb r11,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r11.u8);
	// lbz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 628);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E1E78:
	// lhz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 624);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E1E90:
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E1EA8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,616(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// lwz r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// bl 0x828d2930
	ctx.lr = 0x827E1EB8;
	sub_828D2930(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E1EC8:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ori r31,r31,178
	ctx.r31.u64 = ctx.r31.u64 | 178;
	// bne cr6,0x827e1ef4
	if (!cr6.eq) goto loc_827E1EF4;
loc_827E1ED8:
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e1ef4
	if (cr6.eq) goto loc_827E1EF4;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827e1ef4
	if (cr6.eq) goto loc_827E1EF4;
	// bl 0x827ebc28
	ctx.lr = 0x827E1EF4;
	sub_827EBC28(ctx, base);
loc_827E1EF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E1F00"))) PPC_WEAK_FUNC(sub_827E1F00);
PPC_FUNC_IMPL(__imp__sub_827E1F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// lwz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x827e2010
	if (cr6.gt) {
		sub_827E2010(ctx, base);
		return;
	}
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,7980
	ctx.r12.s64 = ctx.r12.s64 + 7980;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E1F9C;
	case 1:
		goto loc_827E1FAC;
	case 2:
		goto loc_827E1FBC;
	case 3:
		goto loc_827E1FCC;
	case 4:
		goto loc_827E1FD8;
	case 5:
		goto loc_827E1FE4;
	case 6:
		goto loc_827E1FF8;
	case 7:
		goto loc_827E2004;
	case 8:
		goto loc_827E1F5C;
	case 9:
		goto loc_827E1F84;
	case 10:
		goto loc_827E1FF0;
	case 11:
		goto loc_827E1F90;
	default:
		__builtin_unreachable();
	}
	// lwz r19,8092(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8092);
	// lwz r19,8108(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8108);
	// lwz r19,8124(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8124);
	// lwz r19,8140(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8140);
	// lwz r19,8152(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8152);
	// lwz r19,8164(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8164);
	// lwz r19,8184(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8184);
	// lwz r19,8196(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8196);
	// lwz r19,8028(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8028);
	// lwz r19,8068(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8068);
	// lwz r19,8176(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8176);
	// lwz r19,8080(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8080);
loc_827E1F5C:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r11,r11,22857
	ctx.r11.u64 = ctx.r11.u64 | 22857;
loc_827E1F64:
	// li r10,12
	ctx.r10.s64 = 12;
loc_827E1F68:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827e1f74
	if (cr6.eq) goto loc_827E1F74;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_827E1F74:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827e1f80
	if (cr6.eq) goto loc_827E1F80;
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
loc_827E1F80:
	// blr 
	return;
loc_827E1F84:
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r11,r11,13385
	ctx.r11.u64 = ctx.r11.u64 | 13385;
	// b 0x827e1f64
	goto loc_827E1F64;
loc_827E1F90:
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r11,r11,22105
	ctx.r11.u64 = ctx.r11.u64 | 22105;
	// b 0x827e1f64
	goto loc_827E1F64;
loc_827E1F9C:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// b 0x827e1f68
	goto loc_827E1F68;
loc_827E1FAC:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,22869
	ctx.r11.u64 = ctx.r11.u64 | 22869;
	// b 0x827e1f68
	goto loc_827E1F68;
loc_827E1FBC:
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,22105
	ctx.r11.u64 = ctx.r11.u64 | 22105;
	// b 0x827e1f68
	goto loc_827E1F68;
loc_827E1FCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x827e1f68
	goto loc_827E1F68;
loc_827E1FD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x827e1f68
	goto loc_827E1F68;
loc_827E1FE4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x827e1f68
	goto loc_827E1F68;
loc_827E1FF0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x827e1f64
	goto loc_827E1F64;
loc_827E1FF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x827e1f68
	goto loc_827E1F68;
loc_827E2004:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x827e1f68
	goto loc_827E1F68;
}

__attribute__((alias("__imp__sub_827E2010"))) PPC_WEAK_FUNC(sub_827E2010);
PPC_FUNC_IMPL(__imp__sub_827E2010) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E201C"))) PPC_WEAK_FUNC(sub_827E201C);
PPC_FUNC_IMPL(__imp__sub_827E201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E2020"))) PPC_WEAK_FUNC(sub_827E2020);
PPC_FUNC_IMPL(__imp__sub_827E2020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827e20ac
	if (cr6.eq) goto loc_827E20AC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827e20ac
	if (cr6.eq) goto loc_827E20AC;
	// lwz r11,528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e20ac
	if (cr6.eq) goto loc_827E20AC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_827E2050:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x827e2050
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827E2050;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stb r11,16(r4)
	PPC_STORE_U8(ctx.r4.u32 + 16, ctx.r11.u8);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_827E20AC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E20B4"))) PPC_WEAK_FUNC(sub_827E20B4);
PPC_FUNC_IMPL(__imp__sub_827E20B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E20B8"))) PPC_WEAK_FUNC(sub_827E20B8);
PPC_FUNC_IMPL(__imp__sub_827E20B8) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827e2138
	if (cr6.eq) goto loc_827E2138;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e2138
	if (cr6.eq) goto loc_827E2138;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x827eb5f8
	ctx.lr = 0x827E20F4;
	sub_827EB5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,608(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x827e0ef0
	ctx.lr = 0x827E2100;
	sub_827E0EF0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e2120
	if (cr6.eq) goto loc_827E2120;
	// bl 0x827ed610
	ctx.lr = 0x827E2110;
	sub_827ED610(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827eb708
	ctx.lr = 0x827E2120;
	sub_827EB708(ctx, base);
loc_827E2120:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x827eb750
	ctx.lr = 0x827E2130;
	sub_827EB750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827e213c
	goto loc_827E213C;
loc_827E2138:
	// li r3,4
	ctx.r3.s64 = 4;
loc_827E213C:
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

__attribute__((alias("__imp__sub_827E2154"))) PPC_WEAK_FUNC(sub_827E2154);
PPC_FUNC_IMPL(__imp__sub_827E2154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E2158"))) PPC_WEAK_FUNC(sub_827E2158);
PPC_FUNC_IMPL(__imp__sub_827E2158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// bgt cr6,0x827e2220
	if (cr6.gt) {
		sub_827E2220(ctx, base);
		return;
	}
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,8568
	ctx.r12.s64 = ctx.r12.s64 + 8568;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_827E21B0;
	case 1:
		goto loc_827E21B8;
	case 2:
		goto loc_827E21C0;
	case 3:
		goto loc_827E21C8;
	case 4:
		goto loc_827E21D0;
	case 5:
		goto loc_827E21D8;
	case 6:
		goto loc_827E21E0;
	case 7:
		goto loc_827E21E8;
	case 8:
		goto loc_827E21F0;
	case 9:
		goto loc_827E21F8;
	case 10:
		goto loc_827E2200;
	case 11:
		goto loc_827E2208;
	case 12:
		goto loc_827E2210;
	case 13:
		goto loc_827E2218;
	default:
		__builtin_unreachable();
	}
	// lwz r19,8624(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8624);
	// lwz r19,8632(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8632);
	// lwz r19,8640(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8640);
	// lwz r19,8648(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8648);
	// lwz r19,8656(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8656);
	// lwz r19,8664(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8664);
	// lwz r19,8672(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8672);
	// lwz r19,8680(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8680);
	// lwz r19,8688(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8688);
	// lwz r19,8696(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8696);
	// lwz r19,8704(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8704);
	// lwz r19,8712(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8712);
	// lwz r19,8720(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8720);
	// lwz r19,8728(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8728);
loc_827E21B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_827E21B8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_827E21C0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_827E21C8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_827E21D0:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_827E21D8:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_827E21E0:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_827E21E8:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_827E21F0:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_827E21F8:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_827E2200:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_827E2208:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_827E2210:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_827E2218:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E2220"))) PPC_WEAK_FUNC(sub_827E2220);
PPC_FUNC_IMPL(__imp__sub_827E2220) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E2228"))) PPC_WEAK_FUNC(sub_827E2228);
PPC_FUNC_IMPL(__imp__sub_827E2228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,186
	ctx.r11.u64 = ctx.r11.u64 | 186;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827e25e4
	if (cr6.gt) goto loc_827E25E4;
	// beq cr6,0x827e25dc
	if (cr6.eq) goto loc_827E25DC;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 12;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827e22e0
	if (cr6.gt) goto loc_827E22E0;
	// beq cr6,0x827e22d8
	if (cr6.eq) goto loc_827E22D8;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827e2298
	if (cr6.gt) goto loc_827E2298;
	// beq cr6,0x827e22c8
	if (cr6.eq) goto loc_827E22C8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827e22d0
	if (cr6.eq) goto loc_827E22D0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// subf. r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827e2290
	if (cr0.eq) goto loc_827E2290;
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// bne cr6,0x827e26b0
	if (!cr6.eq) goto loc_827E26B0;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_827E2290:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_827E2298:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827e26b0
	if (cr6.lt) goto loc_827E26B0;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827e22d0
	if (!cr6.gt) goto loc_827E22D0;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827e26b0
	if (!cr6.eq) goto loc_827E26B0;
loc_827E22C8:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_827E22D0:
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
loc_827E22D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_827E22E0:
	// addis r11,r3,32688
	ctx.r11.s64 = ctx.r3.s64 + 2142240768;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// cmplwi cr6,r11,170
	cr6.compare<uint32_t>(ctx.r11.u32, 170, ctx.xer);
	// bgt cr6,0x827e26b0
	if (cr6.gt) goto loc_827E26B0;
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,8968
	ctx.r12.s64 = ctx.r12.s64 + 8968;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E25BC;
	case 1:
		goto loc_827E25C4;
	case 2:
		goto loc_827E25C4;
	case 3:
		goto loc_827E25C4;
	case 4:
		goto loc_827E25C4;
	case 5:
		goto loc_827E25C4;
	case 6:
		goto loc_827E25C4;
	case 7:
		goto loc_827E25C4;
	case 8:
		goto loc_827E25C4;
	case 9:
		goto loc_827E26B0;
	case 10:
		goto loc_827E25CC;
	case 11:
		goto loc_827E25CC;
	case 12:
		goto loc_827E26B0;
	case 13:
		goto loc_827E26B0;
	case 14:
		goto loc_827E26B0;
	case 15:
		goto loc_827E26B0;
	case 16:
		goto loc_827E26B0;
	case 17:
		goto loc_827E26B0;
	case 18:
		goto loc_827E26B0;
	case 19:
		goto loc_827E26B0;
	case 20:
		goto loc_827E26B0;
	case 21:
		goto loc_827E26B0;
	case 22:
		goto loc_827E26B0;
	case 23:
		goto loc_827E26B0;
	case 24:
		goto loc_827E26B0;
	case 25:
		goto loc_827E26B0;
	case 26:
		goto loc_827E26B0;
	case 27:
		goto loc_827E26B0;
	case 28:
		goto loc_827E26B0;
	case 29:
		goto loc_827E26B0;
	case 30:
		goto loc_827E26B0;
	case 31:
		goto loc_827E26B0;
	case 32:
		goto loc_827E26B0;
	case 33:
		goto loc_827E26B0;
	case 34:
		goto loc_827E26B0;
	case 35:
		goto loc_827E26B0;
	case 36:
		goto loc_827E26B0;
	case 37:
		goto loc_827E26B0;
	case 38:
		goto loc_827E26B0;
	case 39:
		goto loc_827E26B0;
	case 40:
		goto loc_827E26B0;
	case 41:
		goto loc_827E26B0;
	case 42:
		goto loc_827E26B0;
	case 43:
		goto loc_827E26B0;
	case 44:
		goto loc_827E26B0;
	case 45:
		goto loc_827E26B0;
	case 46:
		goto loc_827E26B0;
	case 47:
		goto loc_827E26B0;
	case 48:
		goto loc_827E26B0;
	case 49:
		goto loc_827E26B0;
	case 50:
		goto loc_827E26B0;
	case 51:
		goto loc_827E26B0;
	case 52:
		goto loc_827E26B0;
	case 53:
		goto loc_827E26B0;
	case 54:
		goto loc_827E26B0;
	case 55:
		goto loc_827E26B0;
	case 56:
		goto loc_827E26B0;
	case 57:
		goto loc_827E26B0;
	case 58:
		goto loc_827E26B0;
	case 59:
		goto loc_827E26B0;
	case 60:
		goto loc_827E26B0;
	case 61:
		goto loc_827E26B0;
	case 62:
		goto loc_827E26B0;
	case 63:
		goto loc_827E26B0;
	case 64:
		goto loc_827E26B0;
	case 65:
		goto loc_827E26B0;
	case 66:
		goto loc_827E26B0;
	case 67:
		goto loc_827E26B0;
	case 68:
		goto loc_827E26B0;
	case 69:
		goto loc_827E26B0;
	case 70:
		goto loc_827E26B0;
	case 71:
		goto loc_827E26B0;
	case 72:
		goto loc_827E26B0;
	case 73:
		goto loc_827E26B0;
	case 74:
		goto loc_827E26B0;
	case 75:
		goto loc_827E26B0;
	case 76:
		goto loc_827E26B0;
	case 77:
		goto loc_827E26B0;
	case 78:
		goto loc_827E26B0;
	case 79:
		goto loc_827E26B0;
	case 80:
		goto loc_827E26B0;
	case 81:
		goto loc_827E26B0;
	case 82:
		goto loc_827E26B0;
	case 83:
		goto loc_827E26B0;
	case 84:
		goto loc_827E26B0;
	case 85:
		goto loc_827E26B0;
	case 86:
		goto loc_827E26B0;
	case 87:
		goto loc_827E26B0;
	case 88:
		goto loc_827E26B0;
	case 89:
		goto loc_827E26B0;
	case 90:
		goto loc_827E26B0;
	case 91:
		goto loc_827E26B0;
	case 92:
		goto loc_827E26B0;
	case 93:
		goto loc_827E26B0;
	case 94:
		goto loc_827E26B0;
	case 95:
		goto loc_827E26B0;
	case 96:
		goto loc_827E26B0;
	case 97:
		goto loc_827E26B0;
	case 98:
		goto loc_827E26B0;
	case 99:
		goto loc_827E26B0;
	case 100:
		goto loc_827E26B0;
	case 101:
		goto loc_827E26B0;
	case 102:
		goto loc_827E26B0;
	case 103:
		goto loc_827E26B0;
	case 104:
		goto loc_827E26B0;
	case 105:
		goto loc_827E26B0;
	case 106:
		goto loc_827E26B0;
	case 107:
		goto loc_827E26B0;
	case 108:
		goto loc_827E26B0;
	case 109:
		goto loc_827E26B0;
	case 110:
		goto loc_827E26B0;
	case 111:
		goto loc_827E26B0;
	case 112:
		goto loc_827E26B0;
	case 113:
		goto loc_827E26B0;
	case 114:
		goto loc_827E26B0;
	case 115:
		goto loc_827E26B0;
	case 116:
		goto loc_827E26B0;
	case 117:
		goto loc_827E26B0;
	case 118:
		goto loc_827E26B0;
	case 119:
		goto loc_827E26B0;
	case 120:
		goto loc_827E26B0;
	case 121:
		goto loc_827E26B0;
	case 122:
		goto loc_827E26B0;
	case 123:
		goto loc_827E26B0;
	case 124:
		goto loc_827E26B0;
	case 125:
		goto loc_827E26B0;
	case 126:
		goto loc_827E26B0;
	case 127:
		goto loc_827E26B0;
	case 128:
		goto loc_827E26B0;
	case 129:
		goto loc_827E26B0;
	case 130:
		goto loc_827E26B0;
	case 131:
		goto loc_827E26B0;
	case 132:
		goto loc_827E26B0;
	case 133:
		goto loc_827E26B0;
	case 134:
		goto loc_827E26B0;
	case 135:
		goto loc_827E26B0;
	case 136:
		goto loc_827E26B0;
	case 137:
		goto loc_827E26B0;
	case 138:
		goto loc_827E26B0;
	case 139:
		goto loc_827E26B0;
	case 140:
		goto loc_827E26B0;
	case 141:
		goto loc_827E26B0;
	case 142:
		goto loc_827E26B0;
	case 143:
		goto loc_827E26B0;
	case 144:
		goto loc_827E26B0;
	case 145:
		goto loc_827E26B0;
	case 146:
		goto loc_827E26B0;
	case 147:
		goto loc_827E26B0;
	case 148:
		goto loc_827E26B0;
	case 149:
		goto loc_827E26B0;
	case 150:
		goto loc_827E26B0;
	case 151:
		goto loc_827E26B0;
	case 152:
		goto loc_827E26B0;
	case 153:
		goto loc_827E26B0;
	case 154:
		goto loc_827E25D4;
	case 155:
		goto loc_827E25D4;
	case 156:
		goto loc_827E26B0;
	case 157:
		goto loc_827E26B0;
	case 158:
		goto loc_827E26B0;
	case 159:
		goto loc_827E26B0;
	case 160:
		goto loc_827E26B0;
	case 161:
		goto loc_827E26B0;
	case 162:
		goto loc_827E26B0;
	case 163:
		goto loc_827E26B0;
	case 164:
		goto loc_827E26B0;
	case 165:
		goto loc_827E26B0;
	case 166:
		goto loc_827E26B0;
	case 167:
		goto loc_827E26B0;
	case 168:
		goto loc_827E26B0;
	case 169:
		goto loc_827E26B0;
	case 170:
		goto loc_827E25B4;
	default:
		__builtin_unreachable();
	}
	// lwz r19,9660(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9660);
	// lwz r19,9668(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9668);
	// lwz r19,9668(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9668);
	// lwz r19,9668(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9668);
	// lwz r19,9668(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9668);
	// lwz r19,9668(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9668);
	// lwz r19,9668(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9668);
	// lwz r19,9668(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9668);
	// lwz r19,9668(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9668);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9676(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9676);
	// lwz r19,9676(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9676);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9684(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9684);
	// lwz r19,9684(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9684);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9652(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9652);
loc_827E25B4:
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
loc_827E25BC:
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
loc_827E25C4:
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
loc_827E25CC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_827E25D4:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_827E25DC:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_827E25E4:
	// lis r11,-32672
	ctx.r11.s64 = -2141192192;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827e2674
	if (cr6.gt) goto loc_827E2674;
	// beq cr6,0x827e266c
	if (cr6.eq) goto loc_827E266C;
	// addis r11,r3,32672
	ctx.r11.s64 = ctx.r3.s64 + 2141192192;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x827e26b0
	if (cr6.gt) goto loc_827E26B0;
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,9756
	ctx.r12.s64 = ctx.r12.s64 + 9756;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E263C;
	case 1:
		goto loc_827E26B0;
	case 2:
		goto loc_827E26B0;
	case 3:
		goto loc_827E2644;
	case 4:
		goto loc_827E264C;
	case 5:
		goto loc_827E2654;
	case 6:
		goto loc_827E265C;
	case 7:
		goto loc_827E2664;
	default:
		__builtin_unreachable();
	}
	// lwz r19,9788(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9788);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9796(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9796);
	// lwz r19,9804(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9804);
	// lwz r19,9812(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9812);
	// lwz r19,9820(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9820);
	// lwz r19,9828(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9828);
loc_827E263C:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_827E2644:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_827E264C:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_827E2654:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_827E265C:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
loc_827E2664:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
loc_827E266C:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
loc_827E2674:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827e26cc
	if (cr6.gt) {
		sub_827E26CC(ctx, base);
		return;
	}
	// beq cr6,0x827e26c4
	if (cr6.eq) {
		sub_827E26C4(ctx, base);
		return;
	}
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827e26bc
	if (cr6.eq) goto loc_827E26BC;
	// lis r11,79
	ctx.r11.s64 = 5177344;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827e26b0
	if (!cr6.gt) goto loc_827E26B0;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827e26bc
	if (!cr6.gt) goto loc_827E26BC;
loc_827E26B0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,29
	ctx.r3.s64 = 29;
	// blt cr6,0x827e26c0
	if (cr6.lt) goto loc_827E26C0;
loc_827E26BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827E26C0:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E25E4"))) PPC_WEAK_FUNC(sub_827E25E4);
PPC_FUNC_IMPL(__imp__sub_827E25E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// lis r11,-32672
	ctx.r11.s64 = -2141192192;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827e2674
	if (cr6.gt) goto loc_827E2674;
	// beq cr6,0x827e266c
	if (cr6.eq) goto loc_827E266C;
	// addis r11,r3,32672
	ctx.r11.s64 = ctx.r3.s64 + 2141192192;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x827e26b0
	if (cr6.gt) goto loc_827E26B0;
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,9756
	ctx.r12.s64 = ctx.r12.s64 + 9756;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E263C;
	case 1:
		goto loc_827E26B0;
	case 2:
		goto loc_827E26B0;
	case 3:
		goto loc_827E2644;
	case 4:
		goto loc_827E264C;
	case 5:
		goto loc_827E2654;
	case 6:
		goto loc_827E265C;
	case 7:
		goto loc_827E2664;
	default:
		__builtin_unreachable();
	}
	// lwz r19,9788(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9788);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9904(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9904);
	// lwz r19,9796(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9796);
	// lwz r19,9804(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9804);
	// lwz r19,9812(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9812);
	// lwz r19,9820(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9820);
	// lwz r19,9828(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9828);
loc_827E263C:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_827E2644:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_827E264C:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_827E2654:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_827E265C:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
loc_827E2664:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
loc_827E266C:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
loc_827E2674:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827e26cc
	if (cr6.gt) goto loc_827E26CC;
	// beq cr6,0x827e26c4
	if (cr6.eq) goto loc_827E26C4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827e26bc
	if (cr6.eq) goto loc_827E26BC;
	// lis r11,79
	ctx.r11.s64 = 5177344;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827e26b0
	if (!cr6.gt) goto loc_827E26B0;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827e26bc
	if (!cr6.gt) goto loc_827E26BC;
loc_827E26B0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,29
	ctx.r3.s64 = 29;
	// blt cr6,0x827e26c0
	if (cr6.lt) goto loc_827E26C0;
loc_827E26BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827E26C0:
	// blr 
	return;
loc_827E26C4:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_827E26CC:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827e26b0
	if (cr6.lt) goto loc_827E26B0;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827e26bc
	if (!cr6.gt) goto loc_827E26BC;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827e26b0
	if (!cr6.eq) goto loc_827E26B0;
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E26B0"))) PPC_WEAK_FUNC(sub_827E26B0);
PPC_FUNC_IMPL(__imp__sub_827E26B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
loc_827E26B0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,29
	ctx.r3.s64 = 29;
	// blt cr6,0x827e26c0
	if (cr6.lt) goto loc_827E26C0;
loc_827E26BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827E26C0:
	// blr 
	return;
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827e26b0
	if (cr6.lt) goto loc_827E26B0;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827e26bc
	if (!cr6.gt) goto loc_827E26BC;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827e26b0
	if (!cr6.eq) goto loc_827E26B0;
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E26BC"))) PPC_WEAK_FUNC(sub_827E26BC);
PPC_FUNC_IMPL(__imp__sub_827E26BC) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
loc_827E26BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827e26b0
	if (cr6.lt) {
		sub_827E26B0(ctx, base);
		return;
	}
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827e26bc
	if (!cr6.gt) goto loc_827E26BC;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827e26b0
	if (!cr6.eq) {
		sub_827E26B0(ctx, base);
		return;
	}
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E26C4"))) PPC_WEAK_FUNC(sub_827E26C4);
PPC_FUNC_IMPL(__imp__sub_827E26C4) {
	PPC_FUNC_PROLOGUE();
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E26CC"))) PPC_WEAK_FUNC(sub_827E26CC);
PPC_FUNC_IMPL(__imp__sub_827E26CC) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827e26b0
	if (cr6.lt) {
		sub_827E26B0(ctx, base);
		return;
	}
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827e26bc
	if (!cr6.gt) {
		sub_827E26BC(ctx, base);
		return;
	}
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827e26b0
	if (!cr6.eq) {
		sub_827E26B0(ctx, base);
		return;
	}
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E2700"))) PPC_WEAK_FUNC(sub_827E2700);
PPC_FUNC_IMPL(__imp__sub_827E2700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_827E2718:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x827e2718
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827E2718;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r4,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x827e2784
	if (cr6.eq) goto loc_827E2784;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x827e275c
	if (cr6.eq) goto loc_827E275C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,184
	ctx.r3.u64 = ctx.r3.u64 | 184;
	// blr 
	return;
loc_827E275C:
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// blr 
	return;
loc_827E2784:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stb r11,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E27A8"))) PPC_WEAK_FUNC(sub_827E27A8);
PPC_FUNC_IMPL(__imp__sub_827E27A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bnelr cr6
	if (!cr6.eq) return;
	// addis r10,r4,-9
	ctx.r10.s64 = ctx.r4.s64 + -589824;
	// cmplwi cr6,r10,176
	cr6.compare<uint32_t>(ctx.r10.u32, 176, ctx.xer);
	// bgt cr6,0x827e2b00
	if (cr6.gt) goto loc_827E2B00;
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,10212
	ctx.r12.s64 = ctx.r12.s64 + 10212;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_827E2B08;
	case 1:
		goto loc_827E2B00;
	case 2:
		goto loc_827E2B00;
	case 3:
		goto loc_827E2B00;
	case 4:
		goto loc_827E2B00;
	case 5:
		goto loc_827E2B00;
	case 6:
		goto loc_827E2B00;
	case 7:
		goto loc_827E2B00;
	case 8:
		goto loc_827E2B00;
	case 9:
		goto loc_827E2B00;
	case 10:
		goto loc_827E2B00;
	case 11:
		goto loc_827E2B00;
	case 12:
		goto loc_827E2B00;
	case 13:
		goto loc_827E2B00;
	case 14:
		goto loc_827E2B00;
	case 15:
		goto loc_827E2B00;
	case 16:
		goto loc_827E2AA8;
	case 17:
		goto loc_827E2B00;
	case 18:
		goto loc_827E2B00;
	case 19:
		goto loc_827E2B00;
	case 20:
		goto loc_827E2B00;
	case 21:
		goto loc_827E2B00;
	case 22:
		goto loc_827E2B00;
	case 23:
		goto loc_827E2B00;
	case 24:
		goto loc_827E2B00;
	case 25:
		goto loc_827E2B00;
	case 26:
		goto loc_827E2B00;
	case 27:
		goto loc_827E2B00;
	case 28:
		goto loc_827E2B00;
	case 29:
		goto loc_827E2B00;
	case 30:
		goto loc_827E2B00;
	case 31:
		goto loc_827E2B00;
	case 32:
		goto loc_827E2AB4;
	case 33:
		goto loc_827E2B00;
	case 34:
		goto loc_827E2B00;
	case 35:
		goto loc_827E2B00;
	case 36:
		goto loc_827E2B00;
	case 37:
		goto loc_827E2B00;
	case 38:
		goto loc_827E2B00;
	case 39:
		goto loc_827E2B00;
	case 40:
		goto loc_827E2B00;
	case 41:
		goto loc_827E2B00;
	case 42:
		goto loc_827E2B00;
	case 43:
		goto loc_827E2B00;
	case 44:
		goto loc_827E2B00;
	case 45:
		goto loc_827E2B00;
	case 46:
		goto loc_827E2B00;
	case 47:
		goto loc_827E2B00;
	case 48:
		goto loc_827E2ABC;
	case 49:
		goto loc_827E2B00;
	case 50:
		goto loc_827E2B00;
	case 51:
		goto loc_827E2B00;
	case 52:
		goto loc_827E2B00;
	case 53:
		goto loc_827E2B00;
	case 54:
		goto loc_827E2B00;
	case 55:
		goto loc_827E2B00;
	case 56:
		goto loc_827E2B00;
	case 57:
		goto loc_827E2B00;
	case 58:
		goto loc_827E2B00;
	case 59:
		goto loc_827E2B00;
	case 60:
		goto loc_827E2B00;
	case 61:
		goto loc_827E2B00;
	case 62:
		goto loc_827E2B00;
	case 63:
		goto loc_827E2B00;
	case 64:
		goto loc_827E2AC4;
	case 65:
		goto loc_827E2B00;
	case 66:
		goto loc_827E2B00;
	case 67:
		goto loc_827E2B00;
	case 68:
		goto loc_827E2B00;
	case 69:
		goto loc_827E2B00;
	case 70:
		goto loc_827E2B00;
	case 71:
		goto loc_827E2B00;
	case 72:
		goto loc_827E2B00;
	case 73:
		goto loc_827E2B00;
	case 74:
		goto loc_827E2B00;
	case 75:
		goto loc_827E2B00;
	case 76:
		goto loc_827E2B00;
	case 77:
		goto loc_827E2B00;
	case 78:
		goto loc_827E2B00;
	case 79:
		goto loc_827E2B00;
	case 80:
		goto loc_827E2B08;
	case 81:
		goto loc_827E2B00;
	case 82:
		goto loc_827E2B00;
	case 83:
		goto loc_827E2B00;
	case 84:
		goto loc_827E2B00;
	case 85:
		goto loc_827E2B00;
	case 86:
		goto loc_827E2B00;
	case 87:
		goto loc_827E2B00;
	case 88:
		goto loc_827E2B00;
	case 89:
		goto loc_827E2B00;
	case 90:
		goto loc_827E2B00;
	case 91:
		goto loc_827E2B00;
	case 92:
		goto loc_827E2B00;
	case 93:
		goto loc_827E2B00;
	case 94:
		goto loc_827E2B00;
	case 95:
		goto loc_827E2B00;
	case 96:
		goto loc_827E2B08;
	case 97:
		goto loc_827E2B00;
	case 98:
		goto loc_827E2B00;
	case 99:
		goto loc_827E2B00;
	case 100:
		goto loc_827E2B00;
	case 101:
		goto loc_827E2B00;
	case 102:
		goto loc_827E2B00;
	case 103:
		goto loc_827E2B00;
	case 104:
		goto loc_827E2B00;
	case 105:
		goto loc_827E2B00;
	case 106:
		goto loc_827E2B00;
	case 107:
		goto loc_827E2B00;
	case 108:
		goto loc_827E2B00;
	case 109:
		goto loc_827E2B00;
	case 110:
		goto loc_827E2B00;
	case 111:
		goto loc_827E2B00;
	case 112:
		goto loc_827E2ACC;
	case 113:
		goto loc_827E2B00;
	case 114:
		goto loc_827E2B00;
	case 115:
		goto loc_827E2B00;
	case 116:
		goto loc_827E2B00;
	case 117:
		goto loc_827E2B00;
	case 118:
		goto loc_827E2B00;
	case 119:
		goto loc_827E2B00;
	case 120:
		goto loc_827E2B00;
	case 121:
		goto loc_827E2B00;
	case 122:
		goto loc_827E2B00;
	case 123:
		goto loc_827E2B00;
	case 124:
		goto loc_827E2B00;
	case 125:
		goto loc_827E2B00;
	case 126:
		goto loc_827E2B00;
	case 127:
		goto loc_827E2B00;
	case 128:
		goto loc_827E2AE0;
	case 129:
		goto loc_827E2B00;
	case 130:
		goto loc_827E2B00;
	case 131:
		goto loc_827E2B00;
	case 132:
		goto loc_827E2B00;
	case 133:
		goto loc_827E2B00;
	case 134:
		goto loc_827E2B00;
	case 135:
		goto loc_827E2B00;
	case 136:
		goto loc_827E2B00;
	case 137:
		goto loc_827E2B00;
	case 138:
		goto loc_827E2B00;
	case 139:
		goto loc_827E2B00;
	case 140:
		goto loc_827E2B00;
	case 141:
		goto loc_827E2B00;
	case 142:
		goto loc_827E2B00;
	case 143:
		goto loc_827E2B00;
	case 144:
		goto loc_827E2B08;
	case 145:
		goto loc_827E2B00;
	case 146:
		goto loc_827E2B00;
	case 147:
		goto loc_827E2B00;
	case 148:
		goto loc_827E2B00;
	case 149:
		goto loc_827E2B00;
	case 150:
		goto loc_827E2B00;
	case 151:
		goto loc_827E2B00;
	case 152:
		goto loc_827E2B00;
	case 153:
		goto loc_827E2B00;
	case 154:
		goto loc_827E2B00;
	case 155:
		goto loc_827E2B00;
	case 156:
		goto loc_827E2B00;
	case 157:
		goto loc_827E2B00;
	case 158:
		goto loc_827E2B00;
	case 159:
		goto loc_827E2B00;
	case 160:
		goto loc_827E2B08;
	case 161:
		goto loc_827E2B00;
	case 162:
		goto loc_827E2B00;
	case 163:
		goto loc_827E2B00;
	case 164:
		goto loc_827E2B00;
	case 165:
		goto loc_827E2B00;
	case 166:
		goto loc_827E2B00;
	case 167:
		goto loc_827E2B00;
	case 168:
		goto loc_827E2B00;
	case 169:
		goto loc_827E2B00;
	case 170:
		goto loc_827E2B00;
	case 171:
		goto loc_827E2B00;
	case 172:
		goto loc_827E2B00;
	case 173:
		goto loc_827E2B00;
	case 174:
		goto loc_827E2B00;
	case 175:
		goto loc_827E2B00;
	case 176:
		goto loc_827E2B08;
	default:
		__builtin_unreachable();
	}
	// lwz r19,11016(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11016);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,10920(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10920);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,10932(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10932);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,10940(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10940);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,10948(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10948);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11016(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11016);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11016(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11016);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,10956(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10956);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,10976(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10976);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11016(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11016);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11016(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11016);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11008(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// lwz r19,11016(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11016);
loc_827E2AA8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_827E2AB4:
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// blr 
	return;
loc_827E2ABC:
	// sth r5,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r5.u16);
	// blr 
	return;
loc_827E2AC4:
	// sth r5,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r5.u16);
	// blr 
	return;
loc_827E2ACC:
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
loc_827E2AE0:
	// lwz r10,552(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 552);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x827e2af8
	if (cr6.eq) goto loc_827E2AF8;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
	// blr 
	return;
loc_827E2AF8:
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// blr 
	return;
loc_827E2B00:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
loc_827E2B08:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E2B0C"))) PPC_WEAK_FUNC(sub_827E2B0C);
PPC_FUNC_IMPL(__imp__sub_827E2B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E2B10"))) PPC_WEAK_FUNC(sub_827E2B10);
PPC_FUNC_IMPL(__imp__sub_827E2B10) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827e2b24
	if (!cr6.eq) goto loc_827E2B24;
loc_827E2B18:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_827E2B24:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827e2b18
	if (cr6.eq) goto loc_827E2B18;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827e2b18
	if (cr6.eq) goto loc_827E2B18;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x827ebd68
	sub_827EBD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E2B3C"))) PPC_WEAK_FUNC(sub_827E2B3C);
PPC_FUNC_IMPL(__imp__sub_827E2B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E2B40"))) PPC_WEAK_FUNC(sub_827E2B40);
PPC_FUNC_IMPL(__imp__sub_827E2B40) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e2b5c
	if (!cr6.eq) goto loc_827E2B5C;
loc_827E2B50:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_827E2B5C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827e2b50
	if (cr6.eq) goto loc_827E2B50;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827e2b50
	if (cr6.eq) goto loc_827E2B50;
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,60(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r3,608(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 608);
	// b 0x827eb2b0
	sub_827EB2B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E2B84"))) PPC_WEAK_FUNC(sub_827E2B84);
PPC_FUNC_IMPL(__imp__sub_827E2B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E2B88"))) PPC_WEAK_FUNC(sub_827E2B88);
PPC_FUNC_IMPL(__imp__sub_827E2B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827E2B90;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,656
	ctx.r5.s64 = 656;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x827eb6a0
	ctx.lr = 0x827E2BC4;
	sub_827EB6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e2cf8
	if (cr6.lt) goto loc_827E2CF8;
	// li r5,656
	ctx.r5.s64 = 656;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2890
	ctx.lr = 0x827E2BE0;
	sub_828D2890(ctx, base);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r27.u32);
	// stw r28,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r28.u32);
	// bl 0x827eb6a0
	ctx.lr = 0x827E2C00;
	sub_827EB6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e2cf8
	if (cr6.lt) goto loc_827E2CF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_827E2C18:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x827e2c18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827E2C18;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827eb6a0
	ctx.lr = 0x827E2C38;
	sub_827EB6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e2cf8
	if (cr6.lt) goto loc_827E2CF8;
	// li r5,644
	ctx.r5.s64 = 644;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2890
	ctx.lr = 0x827E2C54;
	sub_828D2890(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827eb6a0
	ctx.lr = 0x827E2C68;
	sub_827EB6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e2cf8
	if (cr6.lt) goto loc_827E2CF8;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2890
	ctx.lr = 0x827E2C84;
	sub_828D2890(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,11024
	ctx.r4.s64 = ctx.r11.s64 + 11024;
	// addi r7,r30,572
	ctx.r7.s64 = ctx.r30.s64 + 572;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r9.u32);
	// stw r29,608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 608, ctx.r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x827eb980
	ctx.lr = 0x827E2CC4;
	sub_827EB980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e2cf8
	if (cr6.lt) goto loc_827E2CF8;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// addi r7,r30,568
	ctx.r7.s64 = ctx.r30.s64 + 568;
	// li r6,84
	ctx.r6.s64 = 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,11072
	ctx.r4.s64 = ctx.r11.s64 + 11072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827eb980
	ctx.lr = 0x827E2CEC;
	sub_827EB980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x827e2d68
	if (!cr6.lt) goto loc_827E2D68;
loc_827E2CF8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e2d14
	if (cr6.eq) goto loc_827E2D14;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827eb708
	ctx.lr = 0x827E2D14;
	sub_827EB708(ctx, base);
loc_827E2D14:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e2d30
	if (cr6.eq) goto loc_827E2D30;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827eb708
	ctx.lr = 0x827E2D30;
	sub_827EB708(ctx, base);
loc_827E2D30:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e2d4c
	if (cr6.eq) goto loc_827E2D4C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827eb708
	ctx.lr = 0x827E2D4C;
	sub_827EB708(ctx, base);
loc_827E2D4C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e2d68
	if (cr6.eq) goto loc_827E2D68;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827eb708
	ctx.lr = 0x827E2D68;
	sub_827EB708(ctx, base);
loc_827E2D68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E2D74"))) PPC_WEAK_FUNC(sub_827E2D74);
PPC_FUNC_IMPL(__imp__sub_827E2D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E2D78"))) PPC_WEAK_FUNC(sub_827E2D78);
PPC_FUNC_IMPL(__imp__sub_827E2D78) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827E2D80;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x827ebb20
	ctx.lr = 0x827E2DB0;
	sub_827EBB20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827ebb20
	ctx.lr = 0x827E2DCC;
	sub_827EBB20(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,22
	ctx.r11.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827e2de8
	if (cr6.eq) goto loc_827E2DE8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
loc_827E2DE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e2e40
	if (cr6.eq) goto loc_827E2E40;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827ebb20
	ctx.lr = 0x827E2E04;
	sub_827EBB20(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e2e30
	if (cr6.eq) goto loc_827E2E30;
	// bl 0x827ebd68
	ctx.lr = 0x827E2E14;
	sub_827EBD68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x827ebaa0
	ctx.lr = 0x827E2E30;
	sub_827EBAA0(ctx, base);
loc_827E2E30:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// bl 0x827ebaa0
	ctx.lr = 0x827E2E3C;
	sub_827EBAA0(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_827E2E40:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827eba38
	ctx.lr = 0x827E2E50;
	sub_827EBA38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// bl 0x827ecc58
	ctx.lr = 0x827E2E80;
	sub_827ECC58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827e2efc
	if (cr6.eq) goto loc_827E2EFC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-23368
	ctx.r11.s64 = ctx.r11.s64 + -23368;
	// addi r10,r10,3544
	ctx.r10.s64 = ctx.r10.s64 + 3544;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827e2ecc
	if (!cr6.eq) goto loc_827E2ECC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-23376
	ctx.r11.s64 = ctx.r11.s64 + -23376;
	// b 0x827e2edc
	goto loc_827E2EDC;
loc_827E2ECC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827e2ee0
	if (!cr6.eq) goto loc_827E2EE0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-23384
	ctx.r11.s64 = ctx.r11.s64 + -23384;
loc_827E2EDC:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_827E2EE0:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x827eb528
	ctx.lr = 0x827E2EF0;
	sub_827EB528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
loc_827E2EFC:
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,608(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,544(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// lwz r6,120(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// bl 0x827ed130
	ctx.lr = 0x827E2F28;
	sub_827ED130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// addi r6,r5,60
	ctx.r6.s64 = ctx.r5.s64 + 60;
	// addi r4,r11,10152
	ctx.r4.s64 = ctx.r11.s64 + 10152;
	// bl 0x827eb210
	ctx.lr = 0x827E2F4C;
	sub_827EB210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r30,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r30.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r28.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x827e2700
	ctx.lr = 0x827E2F88;
	sub_827E2700(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x827eb3d8
	ctx.lr = 0x827E2FAC;
	sub_827EB3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827eba38
	ctx.lr = 0x827E2FC8;
	sub_827EBA38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e3010
	if (cr6.lt) goto loc_827E3010;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,80
	ctx.r5.u64 = ctx.r5.u64 | 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x827eb3d8
	ctx.lr = 0x827E3004;
	sub_827EB3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x827e3028
	if (!cr6.lt) goto loc_827E3028;
loc_827E3010:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e3028
	if (cr6.eq) goto loc_827E3028;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x827ebaa0
	ctx.lr = 0x827E3028;
	sub_827EBAA0(ctx, base);
loc_827E3028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E3034"))) PPC_WEAK_FUNC(sub_827E3034);
PPC_FUNC_IMPL(__imp__sub_827E3034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E3038"))) PPC_WEAK_FUNC(sub_827E3038);
PPC_FUNC_IMPL(__imp__sub_827E3038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827E3040;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x827e3090
	if (!cr6.eq) goto loc_827E3090;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E3074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3110
	if (cr6.lt) goto loc_827E3110;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e11c0
	ctx.lr = 0x827E3088;
	sub_827E11C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_827E3090:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x827ebb20
	ctx.lr = 0x827E309C;
	sub_827EBB20(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e30b4
	if (cr6.eq) goto loc_827E30B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827e3110
	if (cr6.eq) goto loc_827E3110;
loc_827E30B4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e2d78
	ctx.lr = 0x827E30C4;
	sub_827E2D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3110
	if (cr6.lt) goto loc_827E3110;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E30E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3110
	if (cr6.lt) goto loc_827E3110;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827ebb20
	ctx.lr = 0x827E30FC;
	sub_827EBB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3110
	if (cr6.lt) goto loc_827E3110;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_827E3110:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E3118"))) PPC_WEAK_FUNC(sub_827E3118);
PPC_FUNC_IMPL(__imp__sub_827E3118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827E3120;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827e3164
	if (!cr6.eq) goto loc_827E3164;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_827E3164:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E317C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e33d4
	if (cr6.lt) goto loc_827E33D4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x827ebb20
	ctx.lr = 0x827E3194;
	sub_827EBB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e33d4
	if (cr6.lt) goto loc_827E33D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827ebb20
	ctx.lr = 0x827E31AC;
	sub_827EBB20(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,22
	ctx.r11.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827e31c4
	if (cr6.eq) goto loc_827E31C4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e33d4
	if (cr6.lt) goto loc_827E33D4;
loc_827E31C4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e31e8
	if (!cr6.eq) goto loc_827E31E8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e2d78
	ctx.lr = 0x827E31E0;
	sub_827E2D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e33d4
	if (cr6.lt) goto loc_827E33D4;
loc_827E31E8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827ebb20
	ctx.lr = 0x827E31F8;
	sub_827EBB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e33d4
	if (cr6.lt) goto loc_827E33D4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827e3260
	if (cr6.eq) goto loc_827E3260;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e3260
	if (cr6.eq) goto loc_827E3260;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x827e3260
	if (cr6.eq) goto loc_827E3260;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x827e3260
	if (cr6.eq) goto loc_827E3260;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x827e33cc
	if (cr6.gt) goto loc_827E33CC;
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,12880
	ctx.r12.s64 = ctx.r12.s64 + 12880;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E3260;
	case 1:
		goto loc_827E3270;
	case 2:
		goto loc_827E3260;
	case 3:
		goto loc_827E3290;
	default:
		__builtin_unreachable();
	}
	// lwz r19,12896(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12896);
	// lwz r19,12912(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12912);
	// lwz r19,12896(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12896);
	// lwz r19,12944(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12944);
loc_827E3260:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,160
	ctx.r3.u64 = ctx.r3.u64 | 160;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_827E3270:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// b 0x827e3304
	goto loc_827E3304;
loc_827E3290:
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// lbz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// bl 0x827ebb20
	ctx.lr = 0x827E32A8;
	sub_827EBB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e33d4
	if (cr6.lt) goto loc_827E33D4;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// bl 0x827e11c0
	ctx.lr = 0x827E32F8;
	sub_827E11C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e33d4
	if (cr6.lt) goto loc_827E33D4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_827E3304:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x827e33cc
	if (cr6.gt) goto loc_827E33CC;
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,13100
	ctx.r12.s64 = ctx.r12.s64 + 13100;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E333C;
	case 1:
		goto loc_827E3260;
	case 2:
		goto loc_827E335C;
	case 3:
		goto loc_827E3260;
	default:
		__builtin_unreachable();
	}
	// lwz r19,13116(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13116);
	// lwz r19,12896(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12896);
	// lwz r19,13148(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13148);
	// lwz r19,12896(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12896);
loc_827E333C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_827E335C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e11c0
	ctx.lr = 0x827E3368;
	sub_827E11C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e33d4
	if (cr6.lt) goto loc_827E33D4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e2d78
	ctx.lr = 0x827E3384;
	sub_827E2D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e33d4
	if (cr6.lt) goto loc_827E33D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827ebb20
	ctx.lr = 0x827E339C;
	sub_827EBB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e33d4
	if (cr6.lt) goto loc_827E33D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_827E33CC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_827E33D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E33DC"))) PPC_WEAK_FUNC(sub_827E33DC);
PPC_FUNC_IMPL(__imp__sub_827E33DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E33E0"))) PPC_WEAK_FUNC(sub_827E33E0);
PPC_FUNC_IMPL(__imp__sub_827E33E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827eb160
	ctx.lr = 0x827E3408;
	sub_827EB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3428
	if (cr6.lt) goto loc_827E3428;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827e2b88
	ctx.lr = 0x827E3420;
	sub_827E2B88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x827e3448
	if (!cr6.lt) goto loc_827E3448;
loc_827E3428:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x827eb750
	ctx.lr = 0x827E3430;
	sub_827EB750(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_827E3448:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_827E3460"))) PPC_WEAK_FUNC(sub_827E3460);
PPC_FUNC_IMPL(__imp__sub_827E3460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x827E3468;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-23368
	ctx.r11.s64 = ctx.r11.s64 + -23368;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x827e369c
	if (cr6.eq) goto loc_827E369C;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x827e369c
	if (cr6.gt) goto loc_827E369C;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e369c
	if (cr6.eq) goto loc_827E369C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb6a0
	ctx.lr = 0x827E34C0;
	sub_827EB6A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3654
	if (cr6.lt) goto loc_827E3654;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_827E34DC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x827e34dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827E34DC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,608(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lwz r5,524(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x827ed780
	ctx.lr = 0x827E3500;
	sub_827ED780(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3654
	if (cr6.lt) goto loc_827E3654;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// addi r11,r11,-23352
	ctx.r11.s64 = ctx.r11.s64 + -23352;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x827e2158
	ctx.lr = 0x827E3544;
	sub_827E2158(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// bne cr6,0x827e355c
	if (!cr6.eq) goto loc_827E355C;
	// lis r30,-32688
	ctx.r30.s64 = -2142240768;
	// ori r30,r30,186
	ctx.r30.u64 = ctx.r30.u64 | 186;
	// b 0x827e3654
	goto loc_827E3654;
loc_827E355C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827eb528
	ctx.lr = 0x827E356C;
	sub_827EB528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3654
	if (cr6.lt) goto loc_827E3654;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,6960
	ctx.r5.s64 = ctx.r11.s64 + 6960;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827eb1d0
	ctx.lr = 0x827E3590;
	sub_827EB1D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3654
	if (cr6.lt) goto loc_827E3654;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r29,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r29.u32);
	// addi r5,r11,6960
	ctx.r5.s64 = ctx.r11.s64 + 6960;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x827eb1d0
	ctx.lr = 0x827E35B8;
	sub_827EB1D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3654
	if (cr6.lt) goto loc_827E3654;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,6960
	ctx.r5.s64 = ctx.r11.s64 + 6960;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r10.u32);
	// bl 0x827eb1d0
	ctx.lr = 0x827E35E4;
	sub_827EB1D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3654
	if (cr6.lt) goto loc_827E3654;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,6960
	ctx.r5.s64 = ctx.r11.s64 + 6960;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r10,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
	// bl 0x827eb1d0
	ctx.lr = 0x827E3610;
	sub_827EB1D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3654
	if (cr6.lt) goto loc_827E3654;
	// li r11,5
	ctx.r11.s64 = 5;
	// cntlzw r10,r25
	ctx.r10.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e0d78
	ctx.lr = 0x827E3648;
	sub_827E0D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x827e368c
	if (!cr6.lt) goto loc_827E368C;
loc_827E3654:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e368c
	if (cr6.eq) goto loc_827E368C;
	// bl 0x827ed610
	ctx.lr = 0x827E3664;
	sub_827ED610(ctx, base);
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827e367c
	if (!cr6.eq) goto loc_827E367C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
loc_827E367C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb708
	ctx.lr = 0x827E368C;
	sub_827EB708(ctx, base);
loc_827E368C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e2228
	ctx.lr = 0x827E3694;
	sub_827E2228(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
loc_827E369C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E36A8"))) PPC_WEAK_FUNC(sub_827E36A8);
PPC_FUNC_IMPL(__imp__sub_827E36A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827E36B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// beq cr6,0x827e3874
	if (cr6.eq) goto loc_827E3874;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e3874
	if (cr6.eq) goto loc_827E3874;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r11,126
	cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bgt cr6,0x827e3874
	if (cr6.gt) goto loc_827E3874;
	// lwz r11,528(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e3874
	if (cr6.eq) goto loc_827E3874;
	// li r5,796
	ctx.r5.s64 = 796;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d2890
	ctx.lr = 0x827E3704;
	sub_828D2890(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x827ebb20
	ctx.lr = 0x827E371C;
	sub_827EBB20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3864
	if (cr6.lt) goto loc_827E3864;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827e3874
	if (!cr6.eq) goto loc_827E3874;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x827ebb20
	ctx.lr = 0x827E374C;
	sub_827EBB20(ctx, base);
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,104(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e3798
	if (cr6.eq) goto loc_827E3798;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827e3798
	if (cr6.eq) goto loc_827E3798;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827E3774:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// cmplw cr6,r28,r6
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827e37e8
	if (cr6.eq) goto loc_827E37E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827e3774
	if (cr6.lt) goto loc_827E3774;
loc_827E3798:
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// ori r9,r10,52429
	ctx.r9.u64 = ctx.r10.u64 | 52429;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulhwu r11,r11,r9
	ctx.r11.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_827E37B4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e37f8
	if (cr6.eq) goto loc_827E37F8;
	// ld r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x827e37f8
	if (cr6.eq) goto loc_827E37F8;
	// bl 0x828d7830
	ctx.lr = 0x827E37D4;
	sub_828D7830(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,-23344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23344);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// b 0x827e3800
	goto loc_827E3800;
loc_827E37E8:
	// rlwinm r11,r10,3,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827e37b4
	goto loc_827E37B4;
loc_827E37F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f0.f64 = double(temp.f32);
loc_827E3800:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r5,r31,790
	ctx.r5.s64 = ctx.r31.s64 + 790;
	// addi r4,r31,792
	ctx.r4.s64 = ctx.r31.s64 + 792;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// sth r11,788(r31)
	PPC_STORE_U16(ctx.r31.u32 + 788, ctx.r11.u16);
	// bl 0x827e1f00
	ctx.lr = 0x827E3844;
	sub_827E1F00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3864
	if (cr6.lt) goto loc_827E3864;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,-24152
	ctx.r4.s64 = ctx.r11.s64 + -24152;
	// li r5,768
	ctx.r5.s64 = 768;
	// bl 0x828d2930
	ctx.lr = 0x827E3864;
	sub_828D2930(ctx, base);
loc_827E3864:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e2228
	ctx.lr = 0x827E386C;
	sub_827E2228(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_827E3874:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E3880"))) PPC_WEAK_FUNC(sub_827E3880);
PPC_FUNC_IMPL(__imp__sub_827E3880) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bne cr6,0x827e38bc
	if (!cr6.eq) goto loc_827E38BC;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x827e3964
	goto loc_827E3964;
loc_827E38BC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x827ebb48
	ctx.lr = 0x827E38D0;
	sub_827EBB48(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r30,r11,22
	ctx.r30.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827e3954
	if (cr6.eq) goto loc_827E3954;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3960
	if (cr6.lt) goto loc_827E3960;
loc_827E38E8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3960
	if (cr6.lt) goto loc_827E3960;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x827e3938
	if (!cr6.eq) goto loc_827E3938;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x827e3938
	if (!cr6.eq) goto loc_827E3938;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x827ebb20
	ctx.lr = 0x827E391C;
	sub_827EBB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3960
	if (cr6.lt) goto loc_827E3960;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ecd88
	ctx.lr = 0x827E3930;
	sub_827ECD88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3960
	if (cr6.lt) goto loc_827E3960;
loc_827E3938:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827ebbb8
	ctx.lr = 0x827E394C;
	sub_827EBBB8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x827e38e8
	if (!cr6.eq) goto loc_827E38E8;
loc_827E3954:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x827ebc28
	ctx.lr = 0x827E3960;
	sub_827EBC28(ctx, base);
loc_827E3960:
	// bl 0x827e2228
	ctx.lr = 0x827E3964;
	sub_827E2228(ctx, base);
loc_827E3964:
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

__attribute__((alias("__imp__sub_827E397C"))) PPC_WEAK_FUNC(sub_827E397C);
PPC_FUNC_IMPL(__imp__sub_827E397C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E3980"))) PPC_WEAK_FUNC(sub_827E3980);
PPC_FUNC_IMPL(__imp__sub_827E3980) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x827E3988;
	__savegprlr_23(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,508
	ctx.r5.s64 = 508;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x828d2890
	ctx.lr = 0x827E39B0;
	sub_828D2890(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x828d2890
	ctx.lr = 0x827E39C4;
	sub_828D2890(ctx, base);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e3d54
	if (cr6.eq) goto loc_827E3D54;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e3d54
	if (cr6.eq) goto loc_827E3D54;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827e3d54
	if (cr6.eq) goto loc_827E3D54;
	// lwz r11,528(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e3d54
	if (cr6.eq) goto loc_827E3D54;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// lhz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827e3a6c
	if (!cr6.gt) goto loc_827E3A6C;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_827E3A1C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x827e3a3c
	if (!cr6.eq) goto loc_827E3A3C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r23,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r23.u32);
	// b 0x827e3a58
	goto loc_827E3A58;
loc_827E3A3C:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bne cr6,0x827e3a54
	if (!cr6.eq) goto loc_827E3A54;
	// stwx r7,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// b 0x827e3a58
	goto loc_827E3A58;
loc_827E3A54:
	// stwx r24,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r24.u32);
loc_827E3A58:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x827e3a1c
	if (cr6.lt) goto loc_827E3A1C;
loc_827E3A6C:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_827E3A74:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x827e3abc
	if (cr6.eq) goto loc_827E3ABC;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x827e3aa4
	if (!cr6.eq) goto loc_827E3AA4;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x827e3d54
	if (cr6.eq) goto loc_827E3D54;
loc_827E3AA4:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x827e3ab4
	if (!cr6.eq) goto loc_827E3AB4;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x827e3d54
	if (cr6.eq) goto loc_827E3D54;
loc_827E3AB4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_827E3ABC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x827e3a74
	if (cr6.lt) goto loc_827E3A74;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_827E3AD8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x827e3d04
	if (!cr6.eq) goto loc_827E3D04;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x827ebb20
	ctx.lr = 0x827E3AFC;
	sub_827EBB20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3d44
	if (cr6.lt) goto loc_827E3D44;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,128
	cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// bge cr6,0x827e3c2c
	if (!cr6.lt) goto loc_827E3C2C;
loc_827E3B1C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827e3c18
	if (!cr6.eq) goto loc_827E3C18;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x827ebb20
	ctx.lr = 0x827E3B40;
	sub_827EBB20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3d44
	if (cr6.lt) goto loc_827E3D44;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827e3c18
	if (!cr6.eq) goto loc_827E3C18;
	// addi r11,r27,3
	ctx.r11.s64 = ctx.r27.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x827e3b80
	if (cr6.eq) goto loc_827E3B80;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x827e3bc4
	if (!cr6.eq) goto loc_827E3BC4;
loc_827E3B80:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827e3bc4
	if (!cr6.eq) goto loc_827E3BC4;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827e3bc4
	if (!cr6.eq) goto loc_827E3BC4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827e3c48
	if (cr6.eq) goto loc_827E3C48;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827e3c48
	if (cr6.eq) goto loc_827E3C48;
loc_827E3BC4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827e3c18
	if (!cr6.eq) goto loc_827E3C18;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827e3be8
	if (cr6.eq) goto loc_827E3BE8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827e3c18
	if (!cr6.eq) goto loc_827E3C18;
loc_827E3BE8:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827e3c04
	if (cr6.eq) goto loc_827E3C04;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827e3c18
	if (!cr6.eq) goto loc_827E3C18;
loc_827E3C04:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e3c90
	if (cr6.eq) goto loc_827E3C90;
loc_827E3C18:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,128
	cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// blt cr6,0x827e3b1c
	if (cr6.lt) goto loc_827E3B1C;
loc_827E3C2C:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827e3cd8
	if (!cr6.eq) goto loc_827E3CD8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x827e3ce8
	goto loc_827E3CE8;
loc_827E3C48:
	// clrlwi r31,r29,24
	ctx.r31.u64 = ctx.r29.u32 & 0xFF;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x827e3118
	ctx.lr = 0x827E3C78;
	sub_827E3118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3d44
	if (cr6.lt) goto loc_827E3D44;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stbx r24,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r24.u8);
	// b 0x827e3d04
	goto loc_827E3D04;
loc_827E3C90:
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x827e3118
	ctx.lr = 0x827E3CBC;
	sub_827E3118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3d44
	if (cr6.lt) goto loc_827E3D44;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r24,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r24.u8);
	// b 0x827e3d04
	goto loc_827E3D04;
loc_827E3CD8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_827E3CE8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827e3038
	ctx.lr = 0x827E3CF8;
	sub_827E3038(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e3d44
	if (cr6.lt) goto loc_827E3D44;
loc_827E3D04:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r27,128
	cr6.compare<uint32_t>(ctx.r27.u32, 128, ctx.xer);
	// blt cr6,0x827e3ad8
	if (cr6.lt) goto loc_827E3AD8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_827E3D1C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r9,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u32);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x827e3d1c
	if (cr6.lt) goto loc_827E3D1C;
loc_827E3D44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e2228
	ctx.lr = 0x827E3D4C;
	sub_827E2228(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
loc_827E3D54:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E3D60"))) PPC_WEAK_FUNC(sub_827E3D60);
PPC_FUNC_IMPL(__imp__sub_827E3D60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x827E3D68;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e3e60
	if (cr6.eq) goto loc_827E3E60;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e3e60
	if (cr6.eq) goto loc_827E3E60;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827e3e60
	if (cr6.eq) goto loc_827E3E60;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827e3e60
	if (cr6.eq) goto loc_827E3E60;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827e3e60
	if (cr6.eq) goto loc_827E3E60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e3e60
	if (cr6.eq) goto loc_827E3E60;
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827e3df4
	if (!cr6.eq) goto loc_827E3DF4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// bl 0x827e2228
	ctx.lr = 0x827E3DEC;
	sub_827E2228(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
loc_827E3DF4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827ec6b8
	ctx.lr = 0x827E3DFC;
	sub_827EC6B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3e54
	if (cr6.lt) goto loc_827E3E54;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x827ebb20
	ctx.lr = 0x827E3E18;
	sub_827EBB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e3e54
	if (cr6.lt) goto loc_827E3E54;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827e3e60
	if (!cr6.eq) goto loc_827E3E60;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e1780
	ctx.lr = 0x827E3E54;
	sub_827E1780(ctx, base);
loc_827E3E54:
	// bl 0x827e2228
	ctx.lr = 0x827E3E58;
	sub_827E2228(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
loc_827E3E60:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E3E6C"))) PPC_WEAK_FUNC(sub_827E3E6C);
PPC_FUNC_IMPL(__imp__sub_827E3E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E3E70"))) PPC_WEAK_FUNC(sub_827E3E70);
PPC_FUNC_IMPL(__imp__sub_827E3E70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827E3E78;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e3fac
	if (cr6.eq) goto loc_827E3FAC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827e3fac
	if (cr6.eq) goto loc_827E3FAC;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x827e3fac
	if (cr6.gt) goto loc_827E3FAC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827e3fac
	if (cr6.eq) goto loc_827E3FAC;
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827e3fac
	if (cr6.eq) goto loc_827E3FAC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827e1258
	ctx.lr = 0x827E3EDC;
	sub_827E1258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827e3f6c
	if (cr6.lt) goto loc_827E3F6C;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x827e3f50
	if (cr6.eq) goto loc_827E3F50;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827e3f50
	if (!cr6.gt) goto loc_827E3F50;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x827ebb20
	ctx.lr = 0x827E3F18;
	sub_827EBB20(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x827e3f50
	if (!cr6.eq) goto loc_827E3F50;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// twllei r11,0
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_827E3F50:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827e3f6c
	if (!cr6.eq) goto loc_827E3F6C;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_827E3F6C:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827e3f98
	if (cr6.eq) goto loc_827E3F98;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827e3f98
	if (cr6.eq) goto loc_827E3F98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827e2228
	ctx.lr = 0x827E3F90;
	sub_827E2228(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_827E3F98:
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_827E3FAC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E3FB8"))) PPC_WEAK_FUNC(sub_827E3FB8);
PPC_FUNC_IMPL(__imp__sub_827E3FB8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x827E3FC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// beq cr6,0x827e41f0
	if (cr6.eq) goto loc_827E41F0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827e41f0
	if (cr6.eq) goto loc_827E41F0;
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e41f0
	if (cr6.eq) goto loc_827E41F0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpld cr6,r27,r11
	cr6.compare<uint64_t>(ctx.r27.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x827e41f0
	if (cr6.gt) goto loc_827E41F0;
	// std r28,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r28.u64);
	// bl 0x827e17f0
	ctx.lr = 0x827E4028;
	sub_827E17F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e41c4
	if (cr6.lt) goto loc_827E41C4;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r25,r11,168
	ctx.r25.u64 = ctx.r11.u64 | 168;
loc_827E4040:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e3e70
	ctx.lr = 0x827E4054;
	sub_827E3E70(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e41b0
	if (cr6.eq) goto loc_827E41B0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x827ebb20
	ctx.lr = 0x827E407C;
	sub_827EBB20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e41c4
	if (cr6.lt) goto loc_827E41C4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827e40e4
	if (!cr6.eq) goto loc_827E40E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e1f00
	ctx.lr = 0x827E40A8;
	sub_827E1F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e41c4
	if (cr6.lt) goto loc_827E41C4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x827e40f0
	goto loc_827E40F0;
loc_827E40E4:
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,7,19,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1000;
loc_827E40F0:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb6a0
	ctx.lr = 0x827E4104;
	sub_827EB6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e41c4
	if (cr6.lt) goto loc_827E41C4;
loc_827E4110:
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827e4124
	if (!cr6.eq) goto loc_827E4124;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x827e415c
	goto loc_827E415C;
loc_827E4124:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x827ec0a0
	ctx.lr = 0x827E4144;
	sub_827EC0A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e415c
	if (cr6.lt) goto loc_827E415C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e415c
	if (!cr6.eq) goto loc_827E415C;
	// stw r28,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r28.u32);
loc_827E415C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e41c4
	if (cr6.lt) goto loc_827E41C4;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpd cr6,r11,r27
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r27.s64, ctx.xer);
	// blt cr6,0x827e4188
	if (cr6.lt) goto loc_827E4188;
	// lwz r10,556(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827e4184
	if (cr6.eq) goto loc_827E4184;
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
loc_827E4184:
	// stw r28,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r28.u32);
loc_827E4188:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e4110
	if (!cr6.eq) goto loc_827E4110;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb708
	ctx.lr = 0x827E41A4;
	sub_827EB708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e41c4
	if (cr6.lt) goto loc_827E41C4;
loc_827E41B0:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x827e41c4
	if (!cr6.eq) goto loc_827E41C4;
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827e4040
	if (!cr6.eq) goto loc_827E4040;
loc_827E41C4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e41e0
	if (cr6.eq) goto loc_827E41E0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x827eb708
	ctx.lr = 0x827E41E0;
	sub_827EB708(ctx, base);
loc_827E41E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e2228
	ctx.lr = 0x827E41E8;
	sub_827E2228(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
loc_827E41F0:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E41FC"))) PPC_WEAK_FUNC(sub_827E41FC);
PPC_FUNC_IMPL(__imp__sub_827E41FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E4200"))) PPC_WEAK_FUNC(sub_827E4200);
PPC_FUNC_IMPL(__imp__sub_827E4200) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e4254
	if (cr6.eq) goto loc_827E4254;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x827e4254
	if (cr6.lt) goto loc_827E4254;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x827e4254
	if (cr6.gt) goto loc_827E4254;
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e4254
	if (cr6.eq) goto loc_827E4254;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x827e1980
	ctx.lr = 0x827E4240;
	sub_827E1980(ctx, base);
	// bl 0x827e2228
	ctx.lr = 0x827E4244;
	sub_827E2228(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827E4254:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E4268"))) PPC_WEAK_FUNC(sub_827E4268);
PPC_FUNC_IMPL(__imp__sub_827E4268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-23336
	ctx.r11.s64 = ctx.r11.s64 + -23336;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x827ed910
	sub_827ED910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E4278"))) PPC_WEAK_FUNC(sub_827E4278);
PPC_FUNC_IMPL(__imp__sub_827E4278) {
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
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x828d2890
	ctx.lr = 0x827E429C;
	sub_828D2890(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x828d2890
	ctx.lr = 0x827E42AC;
	sub_828D2890(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// bl 0x827ed918
	ctx.lr = 0x827E42BC;
	sub_827ED918(ctx, base);
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

__attribute__((alias("__imp__sub_827E42D0"))) PPC_WEAK_FUNC(sub_827E42D0);
PPC_FUNC_IMPL(__imp__sub_827E42D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E42D8"))) PPC_WEAK_FUNC(sub_827E42D8);
PPC_FUNC_IMPL(__imp__sub_827E42D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E42E0"))) PPC_WEAK_FUNC(sub_827E42E0);
PPC_FUNC_IMPL(__imp__sub_827E42E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E42E8"))) PPC_WEAK_FUNC(sub_827E42E8);
PPC_FUNC_IMPL(__imp__sub_827E42E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E42F0"))) PPC_WEAK_FUNC(sub_827E42F0);
PPC_FUNC_IMPL(__imp__sub_827E42F0) {
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
	// bl 0x827ed9a8
	ctx.lr = 0x827E4308;
	sub_827ED9A8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r11,r11,-23336
	ctx.r11.s64 = ctx.r11.s64 + -23336;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828d2890
	ctx.lr = 0x827E4324;
	sub_828D2890(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x828d2890
	ctx.lr = 0x827E4334;
	sub_828D2890(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// bl 0x827ed918
	ctx.lr = 0x827E4344;
	sub_827ED918(ctx, base);
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

__attribute__((alias("__imp__sub_827E435C"))) PPC_WEAK_FUNC(sub_827E435C);
PPC_FUNC_IMPL(__imp__sub_827E435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E4360"))) PPC_WEAK_FUNC(sub_827E4360);
PPC_FUNC_IMPL(__imp__sub_827E4360) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23336
	ctx.r11.s64 = ctx.r11.s64 + -23336;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827ed910
	ctx.lr = 0x827E438C;
	sub_827ED910(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e43ac
	if (cr6.eq) goto loc_827E43AC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32824
	ctx.r4.u64 = ctx.r4.u64 | 32824;
	// bl 0x822193d8
	ctx.lr = 0x827E43A8;
	sub_822193D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827E43AC:
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

__attribute__((alias("__imp__sub_827E43C4"))) PPC_WEAK_FUNC(sub_827E43C4);
PPC_FUNC_IMPL(__imp__sub_827E43C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E43C8"))) PPC_WEAK_FUNC(sub_827E43C8);
PPC_FUNC_IMPL(__imp__sub_827E43C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E43E8"))) PPC_WEAK_FUNC(sub_827E43E8);
PPC_FUNC_IMPL(__imp__sub_827E43E8) {
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
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E440C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827e4428
	if (cr6.eq) goto loc_827E4428;
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
loc_827E4428:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E4440"))) PPC_WEAK_FUNC(sub_827E4440);
PPC_FUNC_IMPL(__imp__sub_827E4440) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827e43c8
	ctx.lr = 0x827E4458;
	sub_827E43C8(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E446C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827E4488"))) PPC_WEAK_FUNC(sub_827E4488);
PPC_FUNC_IMPL(__imp__sub_827E4488) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E44AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827e44c8
	if (cr6.eq) goto loc_827E44C8;
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
loc_827E44C8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E44E0"))) PPC_WEAK_FUNC(sub_827E44E0);
PPC_FUNC_IMPL(__imp__sub_827E44E0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E450C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827e4528
	if (cr6.eq) goto loc_827E4528;
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
loc_827E4528:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E4540"))) PPC_WEAK_FUNC(sub_827E4540);
PPC_FUNC_IMPL(__imp__sub_827E4540) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827E4548;
	__savegprlr_28(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r29,r5,31,17,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFF;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e462c
	if (cr6.eq) goto loc_827E462C;
loc_827E4564:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x827e4594
	if (!cr6.eq) goto loc_827E4594;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x827e4584
	if (cr6.lt) goto loc_827E4584;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x827e4594
	if (!cr6.gt) goto loc_827E4594;
loc_827E4584:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
loc_827E4594:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x827e45b4
	if (!cr6.eq) goto loc_827E45B4;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827e45b4
	if (cr6.eq) goto loc_827E45B4;
	// rlwinm r11,r7,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// stwx r28,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r28.u32);
loc_827E45B4:
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x827e45ec
	if (!cr6.eq) goto loc_827E45EC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827e45ec
	if (cr6.eq) goto loc_827E45EC;
	// rlwinm r10,r7,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwzx r11,r10,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
loc_827E45EC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x827e460c
	if (!cr6.eq) goto loc_827E460C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x827e460c
	if (cr6.eq) goto loc_827E460C;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827e4634
	if (!cr6.eq) goto loc_827E4634;
loc_827E460C:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x827e4564
	if (cr6.lt) goto loc_827E4564;
loc_827E462C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_827E4634:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E463C"))) PPC_WEAK_FUNC(sub_827E463C);
PPC_FUNC_IMPL(__imp__sub_827E463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E4640"))) PPC_WEAK_FUNC(sub_827E4640);
PPC_FUNC_IMPL(__imp__sub_827E4640) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x827E4648;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827e4678
	if (!cr6.eq) goto loc_827E4678;
loc_827E466C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
loc_827E4678:
	// clrlwi r25,r6,16
	ctx.r25.u64 = ctx.r6.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r25,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828d2890
	ctx.lr = 0x827E468C;
	sub_828D2890(ctx, base);
	// rlwinm r6,r29,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827e4788
	if (cr6.eq) goto loc_827E4788;
loc_827E469C:
	// lbz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r8,44
	cr6.compare<uint32_t>(ctx.r8.u32, 44, ctx.xer);
	// bne cr6,0x827e46e8
	if (!cr6.eq) goto loc_827E46E8;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x827e46c8
	if (!cr6.eq) goto loc_827E46C8;
	// rlwinm r11,r30,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_827E46C8:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827e466c
	if (!cr6.lt) goto loc_827E466C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x827e476c
	goto loc_827E476C;
loc_827E46E8:
	// cmplwi cr6,r8,45
	cr6.compare<uint32_t>(ctx.r8.u32, 45, ctx.xer);
	// bne cr6,0x827e4704
	if (!cr6.eq) goto loc_827E4704;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e466c
	if (!cr6.eq) goto loc_827E466C;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x827e476c
	goto loc_827E476C;
loc_827E4704:
	// cmplwi cr6,r8,48
	cr6.compare<uint32_t>(ctx.r8.u32, 48, ctx.xer);
	// blt cr6,0x827e4744
	if (cr6.lt) goto loc_827E4744;
	// cmplwi cr6,r8,57
	cr6.compare<uint32_t>(ctx.r8.u32, 57, ctx.xer);
	// bgt cr6,0x827e4744
	if (cr6.gt) goto loc_827E4744;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x827e476c
	goto loc_827E476C;
loc_827E4744:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827e466c
	if (!cr6.eq) goto loc_827E466C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x827e476c
	if (!cr6.eq) goto loc_827E476C;
	// rlwinm r11,r30,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_827E476C:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x827e469c
	if (cr6.lt) goto loc_827E469C;
loc_827E4788:
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E47A8"))) PPC_WEAK_FUNC(sub_827E47A8);
PPC_FUNC_IMPL(__imp__sub_827E47A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x827E47B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x827e4960
	if (cr6.gt) goto loc_827E4960;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r28,7
	ctx.r28.s64 = 7;
	// li r25,5
	ctx.r25.s64 = 5;
	// li r26,8
	ctx.r26.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_827E47E4:
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,18428
	ctx.r12.s64 = ctx.r12.s64 + 18428;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E4814;
	case 1:
		goto loc_827E4870;
	case 2:
		goto loc_827E48D4;
	case 3:
		goto loc_827E4960;
	case 4:
		goto loc_827E4928;
	case 5:
		goto loc_827E493C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,18452(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18452);
	// lwz r19,18544(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18544);
	// lwz r19,18644(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18644);
	// lwz r19,18784(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18784);
	// lwz r19,18728(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18728);
	// lwz r19,18748(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18748);
loc_827E4814:
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x827e496c
	if (cr6.gt) goto loc_827E496C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// bl 0x827f0bc0
	ctx.lr = 0x827E483C;
	sub_827F0BC0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x827e4978
	if (cr6.eq) goto loc_827E4978;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827e498c
	if (!cr6.eq) goto loc_827E498C;
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e4864
	if (cr6.eq) goto loc_827E4864;
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827e4950
	if (!cr6.eq) goto loc_827E4950;
loc_827E4864:
	// stw r27,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r27.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// b 0x827e4950
	goto loc_827E4950;
loc_827E4870:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827e4888
	if (cr6.lt) goto loc_827E4888;
	// stw r24,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r24.u32);
	// b 0x827e4950
	goto loc_827E4950;
loc_827E4888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f11e0
	ctx.lr = 0x827E4890;
	sub_827F11E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827e494c
	if (!cr6.eq) goto loc_827E494C;
	// lhz r9,498(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 498);
	// lhz r11,518(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 518);
	// lhz r10,496(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 496);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lbz r9,516(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 516);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// sth r11,544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 544, ctx.r11.u16);
	// beq cr6,0x827e48c8
	if (cr6.eq) goto loc_827E48C8;
	// stw r25,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r25.u32);
	// stb r30,525(r31)
	PPC_STORE_U8(ctx.r31.u32 + 525, ctx.r30.u8);
	// b 0x827e4950
	goto loc_827E4950;
loc_827E48C8:
	// stw r26,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r26.u32);
	// stb r29,525(r31)
	PPC_STORE_U8(ctx.r31.u32 + 525, ctx.r29.u8);
	// b 0x827e4950
	goto loc_827E4950;
loc_827E48D4:
	// lbz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 228);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827e494c
	if (!cr6.eq) goto loc_827E494C;
	// lhz r10,544(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 544);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r8,518(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 518);
	// lwz r7,548(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// std r10,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r10.u64);
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r10.u64);
loc_827E4914:
	// stw r29,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r29.u32);
	// beq cr6,0x827e4998
	if (cr6.eq) goto loc_827E4998;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E4928:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// stw r27,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// b 0x827e4950
	goto loc_827E4950;
loc_827E493C:
	// lbz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 228);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827e49ac
	if (cr6.eq) goto loc_827E49AC;
loc_827E494C:
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
loc_827E4950:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x827e47e4
	if (!cr6.gt) goto loc_827E47E4;
loc_827E4960:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E496C:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E4978:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E498C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E4998:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E49AC:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lhz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 544);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// sth r30,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r30.u16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r29,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r29.u8);
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// std r11,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r11.u64);
	// b 0x827e4914
	goto loc_827E4914;
}

__attribute__((alias("__imp__sub_827E49D8"))) PPC_WEAK_FUNC(sub_827E49D8);
PPC_FUNC_IMPL(__imp__sub_827E49D8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e49f8
	if (cr6.eq) goto loc_827E49F8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827e49f8
	if (cr6.eq) goto loc_827E49F8;
	// lhz r11,238(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 238);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_827E49F8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E4A00"))) PPC_WEAK_FUNC(sub_827E4A00);
PPC_FUNC_IMPL(__imp__sub_827E4A00) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e4a24
	if (cr6.eq) goto loc_827E4A24;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e4a24
	if (cr6.eq) goto loc_827E4A24;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r4,236(r11)
	PPC_STORE_U16(ctx.r11.u32 + 236, ctx.r4.u16);
	// blr 
	return;
loc_827E4A24:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E4A2C"))) PPC_WEAK_FUNC(sub_827E4A2C);
PPC_FUNC_IMPL(__imp__sub_827E4A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E4A30"))) PPC_WEAK_FUNC(sub_827E4A30);
PPC_FUNC_IMPL(__imp__sub_827E4A30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827E4A38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827e4cb8
	if (cr6.eq) goto loc_827E4CB8;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e4cb8
	if (cr6.eq) goto loc_827E4CB8;
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// bl 0x827f1b00
	ctx.lr = 0x827E4A5C;
	sub_827F1B00(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 32768;
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// beq cr6,0x827e4a84
	if (cr6.eq) goto loc_827E4A84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822193d8
	ctx.lr = 0x827E4A80;
	sub_822193D8(ctx, base);
	// stw r28,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
loc_827E4A84:
	// lwz r30,204(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827e4adc
	if (cr6.eq) goto loc_827E4ADC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822193d8
	ctx.lr = 0x827E4A9C;
	sub_822193D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x822193d8
	ctx.lr = 0x827E4AA8;
	sub_822193D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x822193d8
	ctx.lr = 0x827E4AB4;
	sub_822193D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x822193d8
	ctx.lr = 0x827E4AC0;
	sub_822193D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x822193d8
	ctx.lr = 0x827E4ACC;
	sub_822193D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822193d8
	ctx.lr = 0x827E4AD8;
	sub_822193D8(ctx, base);
	// stw r28,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r28.u32);
loc_827E4ADC:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e4b8c
	if (cr6.eq) goto loc_827E4B8C;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e4b7c
	if (cr6.eq) goto loc_827E4B7C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_827E4AFC:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822193d8
	ctx.lr = 0x827E4B14;
	sub_822193D8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822193d8
	ctx.lr = 0x827E4B2C;
	sub_822193D8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827e4afc
	if (cr6.lt) goto loc_827E4AFC;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822193d8
	ctx.lr = 0x827E4B74;
	sub_822193D8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_827E4B7C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x822193d8
	ctx.lr = 0x827E4B88;
	sub_822193D8(ctx, base);
	// stw r28,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r28.u32);
loc_827E4B8C:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e4c54
	if (cr6.eq) goto loc_827E4C54;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e4c44
	if (cr6.eq) goto loc_827E4C44;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_827E4BAC:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e4c14
	if (cr6.eq) goto loc_827E4C14;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e4bd4
	if (cr6.eq) goto loc_827E4BD4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822193d8
	ctx.lr = 0x827E4BD4;
	sub_822193D8(ctx, base);
loc_827E4BD4:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e4c04
	if (cr6.eq) goto loc_827E4C04;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822193d8
	ctx.lr = 0x827E4C04;
	sub_822193D8(ctx, base);
loc_827E4C04:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
loc_827E4C14:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827e4bac
	if (cr6.lt) goto loc_827E4BAC;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822193d8
	ctx.lr = 0x827E4C3C;
	sub_822193D8(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_827E4C44:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x822193d8
	ctx.lr = 0x827E4C50;
	sub_822193D8(ctx, base);
	// stw r28,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r28.u32);
loc_827E4C54:
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e4c68
	if (cr6.eq) goto loc_827E4C68;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822193d8
	ctx.lr = 0x827E4C68;
	sub_822193D8(ctx, base);
loc_827E4C68:
	// lwz r30,616(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// stw r28,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r28.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827e4c98
	if (cr6.eq) goto loc_827E4C98;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e4c8c
	if (cr6.eq) goto loc_827E4C8C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822193d8
	ctx.lr = 0x827E4C8C;
	sub_822193D8(ctx, base);
loc_827E4C8C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822193d8
	ctx.lr = 0x827E4C98;
	sub_822193D8(ctx, base);
loc_827E4C98:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r28,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822193d8
	ctx.lr = 0x827E4CA8;
	sub_822193D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_827E4CB8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E4CC4"))) PPC_WEAK_FUNC(sub_827E4CC4);
PPC_FUNC_IMPL(__imp__sub_827E4CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E4CC8"))) PPC_WEAK_FUNC(sub_827E4CC8);
PPC_FUNC_IMPL(__imp__sub_827E4CC8) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827e4cf0
	if (!cr6.eq) goto loc_827E4CF0;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x827e4d3c
	goto loc_827E4D3C;
loc_827E4CF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e4a30
	ctx.lr = 0x827E4CF8;
	sub_827E4A30(ctx, base);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// li r3,624
	ctx.r3.s64 = 624;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x822193b0
	ctx.lr = 0x827E4D08;
	sub_822193B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827e4d1c
	if (!cr6.eq) goto loc_827E4D1C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827e4d3c
	goto loc_827E4D3C;
loc_827E4D1C:
	// li r5,624
	ctx.r5.s64 = 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d2890
	ctx.lr = 0x827E4D2C;
	sub_828D2890(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_827E4D3C:
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

__attribute__((alias("__imp__sub_827E4D54"))) PPC_WEAK_FUNC(sub_827E4D54);
PPC_FUNC_IMPL(__imp__sub_827E4D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E4D58"))) PPC_WEAK_FUNC(sub_827E4D58);
PPC_FUNC_IMPL(__imp__sub_827E4D58) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x827e4d78
	if (cr6.eq) goto loc_827E4D78;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r4.u32);
	// stw r10,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// blr 
	return;
loc_827E4D78:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E4D84"))) PPC_WEAK_FUNC(sub_827E4D84);
PPC_FUNC_IMPL(__imp__sub_827E4D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E4D88"))) PPC_WEAK_FUNC(sub_827E4D88);
PPC_FUNC_IMPL(__imp__sub_827E4D88) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x827E4D90;
	__savegprlr_14(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r6,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r6.u32);
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// stw r21,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r21.u32);
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// stw r21,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r21.u32);
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// mr r14,r21
	ctx.r14.u64 = ctx.r21.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x827e56a0
	if (cr6.eq) goto loc_827E56A0;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e56a0
	if (cr6.eq) goto loc_827E56A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e56a0
	if (cr6.eq) goto loc_827E56A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r10,236(r31)
	PPC_STORE_U16(ctx.r31.u32 + 236, ctx.r10.u16);
	// bl 0x827f0790
	ctx.lr = 0x827E4DF0;
	sub_827F0790(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827e4e04
	if (cr6.eq) goto loc_827E4E04;
loc_827E4DF8:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E4E04:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e4df8
	if (cr6.eq) goto loc_827E4DF8;
	// lhz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e4df8
	if (cr6.eq) goto loc_827E4DF8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e4df8
	if (cr6.eq) goto loc_827E4DF8;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e4df8
	if (cr6.eq) goto loc_827E4DF8;
	// lwz r22,232(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x827e5240
	if (cr6.eq) goto loc_827E5240;
	// li r27,80
	ctx.r27.s64 = 80;
	// stb r21,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r21.u8);
	// li r3,107
	ctx.r3.s64 = 107;
	// stb r21,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r21.u8);
	// li r11,101
	ctx.r11.s64 = 101;
	// li r9,87
	ctx.r9.s64 = 87;
	// li r10,77
	ctx.r10.s64 = 77;
	// stb r27,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r27.u8);
	// li r6,82
	ctx.r6.s64 = 82;
	// stb r3,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r3.u8);
	// li r5,65
	ctx.r5.s64 = 65;
	// stb r27,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r27.u8);
	// li r8,97
	ctx.r8.s64 = 97;
	// stb r3,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r3.u8);
	// li r28,47
	ctx.r28.s64 = 47;
	// li r29,68
	ctx.r29.s64 = 68;
	// stb r9,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r9.u8);
	// li r4,67
	ctx.r4.s64 = 67;
	// stb r10,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r10.u8);
	// li r7,114
	ctx.r7.s64 = 114;
	// stb r9,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r9.u8);
	// li r23,102
	ctx.r23.s64 = 102;
	// stb r10,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r10.u8);
	// li r3,103
	ctx.r3.s64 = 103;
	// stb r28,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r28.u8);
	// li r30,110
	ctx.r30.s64 = 110;
	// stb r5,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r5.u8);
	// li r24,99
	ctx.r24.s64 = 99;
	// stb r29,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r29.u8);
	// li r27,84
	ctx.r27.s64 = 84;
	// stb r6,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r6.u8);
	// li r25,116
	ctx.r25.s64 = 116;
	// stb r4,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r4.u8);
	// li r26,118
	ctx.r26.s64 = 118;
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// stb r8,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r8.u8);
	// stb r6,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r6.u8);
	// stb r11,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r11.u8);
	// stb r23,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r23.u8);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// stb r7,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r7.u8);
	// stb r11,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r11.u8);
	// stb r30,163(r1)
	PPC_STORE_U8(ctx.r1.u32 + 163, ctx.r30.u8);
	// stb r24,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r24.u8);
	// stb r11,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r28,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r28.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r5,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r5.u8);
	// stb r29,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r29.u8);
	// stb r6,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r6.u8);
	// stb r4,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r4.u8);
	// stb r11,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r11.u8);
	// stb r8,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r8.u8);
	// stb r27,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r27.u8);
	// stb r8,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r8.u8);
	// stb r7,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r7.u8);
	// stb r3,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r3.u8);
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// stb r25,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r25.u8);
	// stb r9,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r9.u8);
	// stb r10,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r10.u8);
	// stb r28,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r28.u8);
	// stb r9,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r9.u8);
	// stb r10,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r10.u8);
	// stb r5,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r5.u8);
	// stb r29,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r29.u8);
	// stb r6,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r6.u8);
	// stb r4,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r4.u8);
	// stb r5,217(r1)
	PPC_STORE_U8(ctx.r1.u32 + 217, ctx.r5.u8);
	// stb r26,218(r1)
	PPC_STORE_U8(ctx.r1.u32 + 218, ctx.r26.u8);
	// stb r11,219(r1)
	PPC_STORE_U8(ctx.r1.u32 + 219, ctx.r11.u8);
	// stb r7,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r7.u8);
	// stb r8,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r8.u8);
	// stb r3,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r3.u8);
	// stb r11,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r11.u8);
	// stb r6,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r6.u8);
	// stb r11,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r11.u8);
	// stb r23,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, ctx.r23.u8);
	// stb r10,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r10.u8);
	// stb r10,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r10.u8);
	// li r10,70
	ctx.r10.s64 = 70;
	// stb r6,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r6.u8);
	// li r6,111
	ctx.r6.s64 = 111;
	// stb r11,227(r1)
	PPC_STORE_U8(ctx.r1.u32 + 227, ctx.r11.u8);
	// stb r7,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r7.u8);
	// stb r11,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r10,100
	ctx.r10.s64 = 100;
	// stb r11,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r11.u8);
	// stb r11,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, ctx.r11.u8);
	// stb r7,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r7.u8);
	// stb r11,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r11.u8);
	// stb r7,194(r1)
	PPC_STORE_U8(ctx.r1.u32 + 194, ctx.r7.u8);
	// li r7,108
	ctx.r7.s64 = 108;
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r6,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r6.u8);
	// li r6,104
	ctx.r6.s64 = 104;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// li r11,115
	ctx.r11.s64 = 115;
	// stb r9,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r9.u8);
	// stb r9,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r9.u8);
	// lhz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// stb r30,230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 230, ctx.r30.u8);
	// stb r24,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r24.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r21,233(r1)
	PPC_STORE_U8(ctx.r1.u32 + 233, ctx.r21.u8);
	// stb r28,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r28.u8);
	// stb r5,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r5.u8);
	// stb r29,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r29.u8);
	// stb r4,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r4.u8);
	// stb r5,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r5.u8);
	// stb r26,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r26.u8);
	// stb r8,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r8.u8);
	// stb r3,190(r1)
	PPC_STORE_U8(ctx.r1.u32 + 190, ctx.r3.u8);
	// stb r27,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r27.u8);
	// stb r8,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r8.u8);
	// stb r3,195(r1)
	PPC_STORE_U8(ctx.r1.u32 + 195, ctx.r3.u8);
	// stb r25,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r25.u8);
	// stb r21,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, ctx.r21.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r27,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r27.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r4,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// stb r6,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r6.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// stb r30,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r30.u8);
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// stb r7,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r7.u8);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stb r21,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r21.u8);
	// stw r21,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r21.u32);
	// stw r21,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r21.u32);
	// stw r21,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r21.u32);
	// beq cr6,0x827e5240
	if (cr6.eq) goto loc_827E5240;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5240
	if (cr6.eq) goto loc_827E5240;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827e5240
	if (cr6.eq) goto loc_827E5240;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// lwz r27,244(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r26,240(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lwz r25,236(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// ori r24,r11,32768
	ctx.r24.u64 = ctx.r11.u64 | 32768;
loc_827E50A4:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e50d4
	if (cr6.eq) goto loc_827E50D4;
	// lhz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 228);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827e5224
	if (!cr6.eq) goto loc_827E5224;
loc_827E50D4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x827e4540
	ctx.lr = 0x827E50F0;
	sub_827E4540(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne cr6,0x827e5110
	if (!cr6.eq) goto loc_827E5110;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x827e5224
	goto loc_827E5224;
loc_827E5110:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x827e4540
	ctx.lr = 0x827E5124;
	sub_827E4540(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne cr6,0x827e5144
	if (!cr6.eq) goto loc_827E5144;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x827e5224
	goto loc_827E5224;
loc_827E5144:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x827e4540
	ctx.lr = 0x827E5158;
	sub_827E4540(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne cr6,0x827e5178
	if (!cr6.eq) goto loc_827E5178;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x827e5224
	goto loc_827E5224;
loc_827E5178:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x827e4540
	ctx.lr = 0x827E518C;
	sub_827E4540(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne cr6,0x827e51ac
	if (!cr6.eq) goto loc_827E51AC;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r14,0(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x827e5224
	goto loc_827E5224;
loc_827E51AC:
	// addi r6,r1,312
	ctx.r6.s64 = ctx.r1.s64 + 312;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x827e4540
	ctx.lr = 0x827E51C0;
	sub_827E4540(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827e5224
	if (!cr6.eq) goto loc_827E5224;
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lhz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827e5220
	if (!cr6.eq) goto loc_827E5220;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mullw r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822193b0
	ctx.lr = 0x827E51F8;
	sub_822193B0(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x827e4640
	ctx.lr = 0x827E521C;
	sub_827E4640(ctx, base);
	// b 0x827e5224
	goto loc_827E5224;
loc_827E5220:
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
loc_827E5224:
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827e50a4
	if (cr6.lt) goto loc_827E50A4;
	// b 0x827e5254
	goto loc_827E5254;
loc_827E5240:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// lwz r27,244(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r26,240(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r25,236(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// ori r24,r11,32768
	ctx.r24.u64 = ctx.r11.u64 | 32768;
loc_827E5254:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x827f1be0
	ctx.lr = 0x827E5260;
	sub_827F1BE0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r3.u32);
	// bne cr6,0x827e5278
	if (!cr6.eq) goto loc_827E5278;
loc_827E526C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E5278:
	// lhz r8,62(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lhz r10,90(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// sth r8,288(r1)
	PPC_STORE_U16(ctx.r1.u32 + 288, ctx.r8.u16);
	// lhz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// sth r9,300(r1)
	PPC_STORE_U16(ctx.r1.u32 + 300, ctx.r9.u16);
	// lhz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// std r21,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r21.u64);
	// std r21,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r21.u64);
	// sth r8,290(r1)
	PPC_STORE_U16(ctx.r1.u32 + 290, ctx.r8.u16);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// std r21,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r21.u64);
	// stw r21,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r21.u32);
	// sth r9,302(r1)
	PPC_STORE_U16(ctx.r1.u32 + 302, ctx.r9.u16);
	// sth r21,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r21.u16);
	// stw r8,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r8.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r8,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r8.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r8,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r8.u32);
	// lhz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// sth r8,308(r1)
	PPC_STORE_U16(ctx.r1.u32 + 308, ctx.r8.u16);
	// lhz r8,86(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// stw r10,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r10.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// sth r8,310(r1)
	PPC_STORE_U16(ctx.r1.u32 + 310, ctx.r8.u16);
	// stw r10,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// lhz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// stw r11,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r11.u32);
	// bl 0x827f9600
	ctx.lr = 0x827E5300;
	sub_827F9600(ctx, base);
	// clrlwi r8,r19,16
	ctx.r8.u64 = ctx.r19.u32 & 0xFFFF;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5340
	if (cr6.eq) goto loc_827E5340;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// stw r18,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r18.u32);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r21,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r21.u32);
	// beq cr6,0x827e5340
	if (cr6.eq) goto loc_827E5340;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_827E5328:
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5328
	if (!cr6.eq) goto loc_827E5328;
	// stw r10,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r10.u32);
loc_827E5340:
	// rlwinm r11,r8,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// li r29,3
	ctx.r29.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5380
	if (cr6.eq) goto loc_827E5380;
	// lhz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 256);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// sth r10,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
	// ble cr6,0x827e536c
	if (!cr6.gt) goto loc_827E536C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_827E536C:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stw r11,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r11.u32);
	// bne cr6,0x827e5384
	if (!cr6.eq) goto loc_827E5384;
	// stw r29,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r29.u32);
	// b 0x827e5384
	goto loc_827E5384;
loc_827E5380:
	// lhz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 256);
loc_827E5384:
	// rlwinm r9,r8,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// li r7,4
	ctx.r7.s64 = 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827e53a8
	if (cr6.eq) goto loc_827E53A8;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r11.u32);
	// b 0x827e53cc
	goto loc_827E53CC;
loc_827E53A8:
	// rlwinm r11,r8,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e53bc
	if (cr6.eq) goto loc_827E53BC;
	// stw r29,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r29.u32);
	// b 0x827e53cc
	goto loc_827E53CC;
loc_827E53BC:
	// rlwinm r11,r8,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e53cc
	if (cr6.eq) goto loc_827E53CC;
	// stw r7,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r7.u32);
loc_827E53CC:
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// sth r21,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, ctx.r21.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e53ec
	if (cr6.eq) goto loc_827E53EC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r15,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, ctx.r15.u16);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// sth r10,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
loc_827E53EC:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5420
	if (cr6.eq) goto loc_827E5420;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,32000
	cr6.compare<uint32_t>(ctx.r11.u32, 32000, ctx.xer);
	// bne cr6,0x827e5414
	if (!cr6.eq) goto loc_827E5414;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x827e541c
	if (!cr6.eq) goto loc_827E541C;
	// li r16,22050
	ctx.r16.s64 = 22050;
	// b 0x827e541c
	goto loc_827E541C;
loc_827E5414:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x827e5420
	if (cr6.eq) goto loc_827E5420;
loc_827E541C:
	// stw r16,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r16.u32);
loc_827E5420:
	// rlwinm r11,r8,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5438
	if (cr6.eq) goto loc_827E5438;
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// sth r11,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r11.u16);
	// b 0x827e5470
	goto loc_827E5470;
loc_827E5438:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5458
	if (cr6.eq) goto loc_827E5458;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// sth r10,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
	// b 0x827e546c
	goto loc_827E546C;
loc_827E5458:
	// rlwinm r11,r8,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5470
	if (cr6.eq) goto loc_827E5470;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_827E546C:
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_827E5470:
	// rlwinm r11,r8,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e54d4
	if (cr6.eq) goto loc_827E54D4;
	// lis r11,-16841
	ctx.r11.s64 = -1103691776;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// ori r6,r11,50747
	ctx.r6.u64 = ctx.r11.u64 | 50747;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mulhwu r6,r10,r6
	ctx.r6.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// ori r11,r11,44100
	ctx.r11.u64 = ctx.r11.u64 | 44100;
	// rlwinm r6,r6,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf. r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827e54a8
	if (!cr0.eq) goto loc_827E54A8;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_827E54A8:
	// lis r11,1398
	ctx.r11.s64 = 91619328;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// ori r6,r11,6641
	ctx.r6.u64 = ctx.r11.u64 | 6641;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mulhwu r6,r10,r6
	ctx.r6.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// rlwinm r6,r6,22,10,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x3FFFFF;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf. r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827e54d4
	if (!cr0.eq) goto loc_827E54D4;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_827E54D4:
	// rlwinm r11,r8,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5514
	if (cr6.eq) goto loc_827E5514;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827e526c
	if (!cr6.eq) goto loc_827E526C;
	// rlwinm r11,r8,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e526c
	if (!cr6.eq) goto loc_827E526C;
	// rlwinm r11,r8,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e526c
	if (!cr6.eq) goto loc_827E526C;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r30,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r30.u32);
	// stw r7,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r7.u32);
	// stw r11,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r11.u32);
loc_827E5514:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r31,588
	ctx.r7.s64 = ctx.r31.s64 + 588;
	// stw r25,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r26,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r26.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stw r14,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r14.u32);
	// stw r17,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r17.u32);
	// bl 0x827f8c88
	ctx.lr = 0x827E5544;
	sub_827F8C88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e56a4
	if (cr6.lt) goto loc_827E56A4;
	// bne cr6,0x827e526c
	if (!cr6.eq) goto loc_827E526C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822193b0
	ctx.lr = 0x827E555C;
	sub_822193B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r3.u32);
	// beq cr6,0x827e5574
	if (cr6.eq) goto loc_827E5574;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x828d2930
	ctx.lr = 0x827E5574;
	sub_828D2930(ctx, base);
loc_827E5574:
	// lwz r9,552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// stw r21,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r21.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827e55cc
	if (!cr6.eq) goto loc_827E55CC;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827e55c4
	if (!cr6.gt) goto loc_827E55C4;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, ctx.xer);
	// bne cr6,0x827e55e4
	if (!cr6.eq) goto loc_827E55E4;
	// lbz r11,157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// bne cr6,0x827e55e4
	if (!cr6.eq) goto loc_827E55E4;
	// lbz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 158);
	// cmplwi cr6,r11,77
	cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bne cr6,0x827e55e4
	if (!cr6.eq) goto loc_827E55E4;
	// lbz r11,159(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e55e4
	if (!cr6.eq) goto loc_827E55E4;
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
loc_827E55C4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827e55f0
	if (cr6.eq) goto loc_827E55F0;
loc_827E55CC:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e55f0
	if (!cr6.eq) goto loc_827E55F0;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E55E4:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E55F0:
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r10,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// beq cr6,0x827e5630
	if (cr6.eq) goto loc_827E5630;
	// lwz r8,524(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827e5618
	if (cr6.eq) goto loc_827E5618;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_827E5618:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulld r11,r11,r8
	ctx.r11.s64 = ctx.r11.s64 * ctx.r8.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
loc_827E5630:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e564c
	if (cr6.eq) goto loc_827E564C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r11.s64;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
loc_827E564C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// beq cr6,0x827e5670
	if (cr6.eq) goto loc_827E5670;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x827e5674
	goto loc_827E5674;
loc_827E5670:
	// li r3,256
	ctx.r3.s64 = 256;
loc_827E5674:
	// bl 0x822193b0
	ctx.lr = 0x827E5678;
	sub_822193B0(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5694
	if (!cr6.eq) goto loc_827E5694;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E5694:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
loc_827E56A0:
	// li r3,2
	ctx.r3.s64 = 2;
loc_827E56A4:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E56AC"))) PPC_WEAK_FUNC(sub_827E56AC);
PPC_FUNC_IMPL(__imp__sub_827E56AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E56B0"))) PPC_WEAK_FUNC(sub_827E56B0);
PPC_FUNC_IMPL(__imp__sub_827E56B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e576c
	if (cr6.eq) goto loc_827E576C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827e576c
	if (cr6.eq) goto loc_827E576C;
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// addi r9,r11,108
	ctx.r9.s64 = ctx.r11.s64 + 108;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lhz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 76);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// ld r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r10,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r10.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r10.u64);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// stw r10,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r10.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r10.u32);
	// lhz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 88);
	// sth r10,52(r4)
	PPC_STORE_U16(ctx.r4.u32 + 52, ctx.r10.u16);
	// lhz r10,90(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 90);
	// sth r10,54(r4)
	PPC_STORE_U16(ctx.r4.u32 + 54, ctx.r10.u16);
	// lhz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 92);
	// sth r10,56(r4)
	PPC_STORE_U16(ctx.r4.u32 + 56, ctx.r10.u16);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r10.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r10,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r10.u32);
	// lhz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// sth r10,64(r4)
	PPC_STORE_U16(ctx.r4.u32 + 64, ctx.r10.u16);
	// lhz r11,106(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 106);
	// sth r11,66(r4)
	PPC_STORE_U16(ctx.r4.u32 + 66, ctx.r11.u16);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// blr 
	return;
loc_827E576C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E5774"))) PPC_WEAK_FUNC(sub_827E5774);
PPC_FUNC_IMPL(__imp__sub_827E5774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E5778"))) PPC_WEAK_FUNC(sub_827E5778);
PPC_FUNC_IMPL(__imp__sub_827E5778) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e5798
	if (cr6.eq) goto loc_827E5798;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827e5798
	if (cr6.eq) goto loc_827E5798;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_827E5798:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E57A0"))) PPC_WEAK_FUNC(sub_827E57A0);
PPC_FUNC_IMPL(__imp__sub_827E57A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e57c0
	if (cr6.eq) goto loc_827E57C0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827e57c0
	if (cr6.eq) goto loc_827E57C0;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_827E57C0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E57C8"))) PPC_WEAK_FUNC(sub_827E57C8);
PPC_FUNC_IMPL(__imp__sub_827E57C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e8
	ctx.lr = 0x827E57D0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r27,0(r18)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r29,0(r17)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e5adc
	if (cr6.eq) goto loc_827E5ADC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827e5adc
	if (cr6.eq) goto loc_827E5ADC;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5adc
	if (cr6.eq) goto loc_827E5ADC;
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// stw r22,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r22.u32);
	// beq cr6,0x827e5884
	if (cr6.eq) goto loc_827E5884;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5884
	if (cr6.eq) goto loc_827E5884;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827e5adc
	if (cr6.gt) goto loc_827E5ADC;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// divwu r24,r11,r10
	ctx.r24.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x827e5928
	if (cr6.eq) goto loc_827E5928;
	// divwu r29,r27,r24
	ctx.r29.u32 = ctx.r27.u32 / ctx.r24.u32;
	// twllei r24,0
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e5884
	if (cr6.eq) goto loc_827E5884;
loc_827E5874:
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5884
	if (!cr6.eq) goto loc_827E5884;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_827E5884:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827e5894
	if (cr6.lt) goto loc_827E5894;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
loc_827E5894:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x827f0bc0
	ctx.lr = 0x827E58B4;
	sub_827F0BC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827e5a58
	if (!cr6.eq) goto loc_827E5A58;
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e58d4
	if (cr6.eq) goto loc_827E58D4;
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827e5a58
	if (!cr6.eq) goto loc_827E5A58;
loc_827E58D4:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r22,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r22.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827e5944
	if (!cr6.gt) goto loc_827E5944;
loc_827E58E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f11e0
	ctx.lr = 0x827E58F0;
	sub_827F11E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827e5a58
	if (!cr6.eq) goto loc_827E5A58;
	// lbz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 228);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827e5930
	if (cr6.eq) goto loc_827E5930;
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827e58e8
	if (cr6.lt) goto loc_827E58E8;
	// b 0x827e5944
	goto loc_827E5944;
loc_827E5928:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x827e5874
	goto loc_827E5874;
loc_827E5930:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_827E5944:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5a14
	if (cr6.eq) goto loc_827E5A14;
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// beq cr6,0x827e5a64
	if (cr6.eq) goto loc_827E5A64;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x827e5978
	if (!cr6.eq) goto loc_827E5978;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x827e5978
	if (!cr6.eq) goto loc_827E5978;
	// li r20,1
	ctx.r20.s64 = 1;
loc_827E5978:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x827e5994
	if (!cr6.gt) goto loc_827E5994;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x827e59a0
	goto loc_827E59A0;
loc_827E5994:
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
loc_827E59A0:
	// cmpwi cr6,r16,1
	cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// bne cr6,0x827e59c8
	if (!cr6.eq) goto loc_827E59C8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5a80
	if (cr6.eq) goto loc_827E5A80;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x827e5a80
	if (cr6.eq) goto loc_827E5A80;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e5a80
	if (cr6.eq) goto loc_827E5A80;
	// b 0x827e5a00
	goto loc_827E5A00;
loc_827E59C8:
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 + ctx.r10.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827e59e0
	if (!cr6.lt) goto loc_827E59E0;
	// li r20,1
	ctx.r20.s64 = 1;
loc_827E59E0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e5a80
	if (cr6.eq) goto loc_827E5A80;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e5a00
	if (cr6.eq) goto loc_827E5A00;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5a80
	if (!cr6.eq) goto loc_827E5A80;
loc_827E5A00:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5a44
	if (!cr6.eq) goto loc_827E5A44;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x827e5a48
	goto loc_827E5A48;
loc_827E5A14:
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x827e5a20
	if (!cr6.eq) goto loc_827E5A20;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_827E5A20:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5a44
	if (!cr6.eq) goto loc_827E5A44;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e5a3c
	if (cr6.eq) goto loc_827E5A3C;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x827e5a48
	goto loc_827E5A48;
loc_827E5A3C:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
loc_827E5A44:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_827E5A48:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827e5894
	if (cr6.lt) goto loc_827E5894;
	// b 0x827e5a68
	goto loc_827E5A68;
loc_827E5A58:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d2838
	__restgprlr_16(ctx, base);
	return;
loc_827E5A64:
	// li r20,1
	ctx.r20.s64 = 1;
loc_827E5A68:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x827e5a80
	if (cr6.eq) goto loc_827E5A80;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_827E5A80:
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// bl 0x827f2340
	ctx.lr = 0x827E5A88;
	sub_827F2340(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// beq cr6,0x827e5aa4
	if (cr6.eq) goto loc_827E5AA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d2838
	__restgprlr_16(ctx, base);
	return;
loc_827E5AA4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// stw r9,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// stw r29,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r29.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d2838
	__restgprlr_16(ctx, base);
	return;
loc_827E5ADC:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d2838
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E5AE8"))) PPC_WEAK_FUNC(sub_827E5AE8);
PPC_FUNC_IMPL(__imp__sub_827E5AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f8
	ctx.lr = 0x827E5AF0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r22,128
	ctx.r22.s64 = 128;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r25,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r25.u32);
	// beq cr6,0x827e6108
	if (cr6.eq) goto loc_827E6108;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827e6114
	if (cr6.eq) goto loc_827E6114;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x827e6108
	if (cr6.eq) goto loc_827E6108;
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// li r21,7
	ctx.r21.s64 = 7;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// lbz r11,525(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 525);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827e5d74
	if (cr6.eq) goto loc_827E5D74;
loc_827E5B48:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5bc4
	if (!cr6.eq) goto loc_827E5BC4;
	// ld r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 408);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x827e5b98
	if (!cr6.eq) goto loc_827E5B98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,392(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// stw r21,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r21.u32);
	// bl 0x827e47a8
	ctx.lr = 0x827E5B70;
	sub_827E47A8(ctx, base);
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x827e60f8
	if (cr6.eq) goto loc_827E60F8;
	// lbz r11,525(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 525);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x827e5d68
	if (cr6.eq) goto loc_827E5D68;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x827e5db8
	if (cr6.eq) goto loc_827E5DB8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827e5fa8
	if (!cr6.eq) goto loc_827E5FA8;
loc_827E5B98:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5bc4
	if (!cr6.eq) goto loc_827E5BC4;
	// ld r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 408);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x827e5fa8
	if (cr6.eq) goto loc_827E5FA8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r23,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r23.u32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// std r10,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r10.u64);
loc_827E5BC4:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827e5bd4
	if (!cr6.gt) goto loc_827E5BD4;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_827E5BD4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ld r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ddf48
	ctx.lr = 0x827E5BE8;
	sub_827DDF48(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r22
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r22.u32, ctx.xer);
	// stw r5,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r5.u32);
	// bne cr6,0x827e5f80
	if (!cr6.eq) goto loc_827E5F80;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e5c5c
	if (cr6.eq) goto loc_827E5C5C;
	// lhz r9,518(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 518);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x827e5dcc
	if (cr6.gt) goto loc_827E5DCC;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// ld r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 408);
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpld cr6,r8,r6
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r6.u64, ctx.xer);
	// bgt cr6,0x827e5dcc
	if (cr6.gt) goto loc_827E5DCC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x828d2930
	ctx.lr = 0x827E5C58;
	sub_828D2930(ctx, base);
	// b 0x827e5c78
	goto loc_827E5C78;
loc_827E5C5C:
	// cmplwi cr6,r5,256
	cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bgt cr6,0x827e60e8
	if (cr6.gt) goto loc_827E60E8;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// bl 0x828d2930
	ctx.lr = 0x827E5C70;
	sub_828D2930(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_827E5C78:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// ld r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// lwz r9,420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r11,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r11.u64);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// bne cr6,0x827e5fa8
	if (!cr6.eq) goto loc_827E5FA8;
	// lwz r10,552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827e5cfc
	if (cr6.eq) goto loc_827E5CFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5cf4
	if (!cr6.eq) goto loc_827E5CF4;
	// ld r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 408);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bgt cr6,0x827e5cf4
	if (cr6.gt) goto loc_827E5CF4;
	// addi r6,r31,600
	ctx.r6.s64 = ctx.r31.s64 + 600;
	// lwz r4,612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// lhz r5,518(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 518);
	// bl 0x827f9640
	ctx.lr = 0x827E5CD8;
	sub_827F9640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e600c
	if (cr6.lt) goto loc_827E600C;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lhz r11,518(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 518);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x827e5cfc
	goto loc_827E5CFC;
loc_827E5CF4:
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
loc_827E5CFC:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e5d50
	if (cr6.eq) goto loc_827E5D50;
	// lhz r11,518(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 518);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ld r9,408(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 408);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r25,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r25.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r11
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x827e5d44
	if (!cr6.eq) goto loc_827E5D44;
	// stw r23,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r23.u32);
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulli r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 * 10000;
	// std r11,8(r20)
	PPC_STORE_U64(ctx.r20.u32 + 8, ctx.r11.u64);
loc_827E5D44:
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e5fa8
	if (cr6.eq) goto loc_827E5FA8;
loc_827E5D50:
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e60dc
	if (cr6.eq) goto loc_827E60DC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5fa8
	if (!cr6.eq) goto loc_827E5FA8;
loc_827E5D68:
	// lbz r11,525(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 525);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827e5b48
	if (!cr6.eq) goto loc_827E5B48;
loc_827E5D74:
	// lbz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 524);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x827e5fa8
	if (cr6.gt) goto loc_827E5FA8;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r27,3
	ctx.r27.s64 = 3;
	// li r28,4
	ctx.r28.s64 = 4;
loc_827E5D90:
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,23976
	ctx.r12.s64 = ctx.r12.s64 + 23976;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E5DDC;
	case 1:
		goto loc_827E5E7C;
	case 2:
		goto loc_827E5E9C;
	case 3:
		goto loc_827E5F34;
	default:
		__builtin_unreachable();
	}
	// lwz r19,24028(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// lwz r19,24188(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24188);
	// lwz r19,24220(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24220);
	// lwz r19,24372(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24372);
loc_827E5DB8:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827E5DCC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827E5DDC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ddf48
	ctx.lr = 0x827E5DF0;
	sub_827DDF48(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x827e5f80
	if (!cr6.eq) goto loc_827E5F80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e5f80
	if (cr6.eq) goto loc_827E5F80;
	// ld r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r23,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r23.u32);
	// sth r25,536(r31)
	PPC_STORE_U16(ctx.r31.u32 + 536, ctx.r25.u16);
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// std r11,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r11.u64);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,526(r31)
	PPC_STORE_U8(ctx.r31.u32 + 526, ctx.r11.u8);
	// sth r10,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r10.u16);
	// beq cr6,0x827e5e44
	if (cr6.eq) goto loc_827E5E44;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
loc_827E5E44:
	// lbz r9,526(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 526);
	// lhz r10,522(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 522);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827e5e68
	if (!cr6.gt) goto loc_827E5E68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r29,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r29.u8);
	// sth r11,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r11.u16);
	// b 0x827e5f64
	goto loc_827E5F64;
loc_827E5E68:
	// bne cr6,0x827e5e74
	if (!cr6.eq) goto loc_827E5E74;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// sth r11,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r11.u16);
loc_827E5E74:
	// stb r29,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r29.u8);
	// b 0x827e5f64
	goto loc_827E5F64;
loc_827E5E7C:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5f90
	if (!cr6.eq) goto loc_827E5F90;
	// lhz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5f90
	if (!cr6.eq) goto loc_827E5F90;
	// stb r27,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r27.u8);
	// b 0x827e5f64
	goto loc_827E5F64;
loc_827E5E9C:
	// lhz r11,522(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 522);
	// lhz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 520);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827e5f2c
	if (!cr6.gt) goto loc_827E5F2C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ddf48
	ctx.lr = 0x827E5EC0;
	sub_827DDF48(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x827e5f80
	if (!cr6.eq) goto loc_827E5F80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827e5f80
	if (cr6.eq) goto loc_827E5F80;
	// ld r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r23,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r23.u32);
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// std r11,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r11.u64);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,526(r31)
	PPC_STORE_U8(ctx.r31.u32 + 526, ctx.r11.u8);
	// sth r10,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r10.u16);
	// beq cr6,0x827e5f10
	if (cr6.eq) goto loc_827E5F10;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
loc_827E5F10:
	// lhz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 520);
	// lbz r11,526(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 526);
	// stb r29,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r29.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r11.u16);
	// b 0x827e5f64
	goto loc_827E5F64;
loc_827E5F2C:
	// stb r28,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r28.u8);
	// b 0x827e5f64
	goto loc_827E5F64;
loc_827E5F34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,392(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// stb r25,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r25.u8);
	// std r25,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r25.u64);
	// stb r25,525(r31)
	PPC_STORE_U8(ctx.r31.u32 + 525, ctx.r25.u8);
	// stw r21,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r21.u32);
	// bl 0x827e47a8
	ctx.lr = 0x827E5F50;
	sub_827E47A8(ctx, base);
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x827e60f8
	if (cr6.eq) goto loc_827E60F8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// bne cr6,0x827e5fa8
	if (!cr6.eq) goto loc_827E5FA8;
loc_827E5F64:
	// lbz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 524);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x827e5d90
	if (!cr6.gt) goto loc_827E5D90;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827E5F80:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827E5F90:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5fcc
	if (!cr6.eq) goto loc_827E5FCC;
	// lhz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827e5fb4
	if (!cr6.eq) goto loc_827E5FB4;
loc_827E5FA8:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827E5FB4:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r23,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r23.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
loc_827E5FCC:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827e5fdc
	if (!cr6.gt) goto loc_827E5FDC;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_827E5FDC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ld r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ddf48
	ctx.lr = 0x827E5FF0;
	sub_827DDF48(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r22
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r22.u32, ctx.xer);
	// stw r5,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r5.u32);
	// bne cr6,0x827e5f80
	if (!cr6.eq) goto loc_827E5F80;
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e6020
	if (cr6.eq) goto loc_827E6020;
loc_827E600C:
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827E6020:
	// cmplwi cr6,r5,256
	cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bgt cr6,0x827e60e8
	if (cr6.gt) goto loc_827E60E8;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827e60e8
	if (cr6.eq) goto loc_827E60E8;
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// bl 0x828d2930
	ctx.lr = 0x827E603C;
	sub_828D2930(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// ld r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// lwz r9,420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r11,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r11.u64);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// bne cr6,0x827e5fa8
	if (!cr6.eq) goto loc_827E5FA8;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e60dc
	if (cr6.eq) goto loc_827E60DC;
	// lbz r11,526(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 526);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lhz r9,528(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 528);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827e60cc
	if (!cr6.eq) goto loc_827E60CC;
	// stw r23,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r23.u32);
	// lhz r8,536(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 536);
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwz r10,512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulli r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 * 10000;
	// std r11,8(r20)
	PPC_STORE_U64(ctx.r20.u32 + 8, ctx.r11.u64);
	// lhz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,536(r31)
	PPC_STORE_U16(ctx.r31.u32 + 536, ctx.r11.u16);
loc_827E60CC:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827E60DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827E60E8:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827E60F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827E6108:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827e6114
	if (cr6.eq) goto loc_827E6114;
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
loc_827E6114:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x827e6120
	if (cr6.eq) goto loc_827E6120;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
loc_827E6120:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E6130"))) PPC_WEAK_FUNC(sub_827E6130);
PPC_FUNC_IMPL(__imp__sub_827E6130) {
	PPC_FUNC_PROLOGUE();
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827e57c8
	ctx.lr = 0x827E6160;
	sub_827E57C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6170"))) PPC_WEAK_FUNC(sub_827E6170);
PPC_FUNC_IMPL(__imp__sub_827E6170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827E6178;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e631c
	if (cr6.eq) goto loc_827E631C;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e631c
	if (cr6.eq) goto loc_827E631C;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e61a8
	if (cr6.eq) goto loc_827E61A8;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_827E61A8:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x827e61d0
	if (cr6.eq) goto loc_827E61D0;
loc_827E61B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e47a8
	ctx.lr = 0x827E61BC;
	sub_827E47A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827e6320
	if (!cr6.eq) goto loc_827E6320;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827e61b4
	if (!cr6.eq) goto loc_827E61B4;
loc_827E61D0:
	// addi r27,r31,588
	ctx.r27.s64 = ctx.r31.s64 + 588;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x827e62fc
	if (cr6.gt) goto loc_827E62FC;
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,25080
	ctx.r12.s64 = ctx.r12.s64 + 25080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E62FC;
	case 1:
		goto loc_827E6208;
	case 2:
		goto loc_827E62B8;
	case 3:
		goto loc_827E62FC;
	default:
		__builtin_unreachable();
	}
	// lwz r19,25340(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25340);
	// lwz r19,25096(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25096);
	// lwz r19,25272(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25272);
	// lwz r19,25340(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25340);
loc_827E6208:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x827e5ae8
	ctx.lr = 0x827E6238;
	sub_827E5AE8(ctx, base);
	// lis r11,-32764
	ctx.r11.s64 = -2147221504;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827e6250
	if (!cr6.eq) goto loc_827E6250;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x827e6274
	goto loc_827E6274;
loc_827E6250:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x827e6268
	if (!cr6.lt) goto loc_827E6268;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_827E6268:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x827e6274
	if (!cr6.eq) goto loc_827E6274;
	// li r29,1
	ctx.r29.s64 = 1;
loc_827E6274:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x827f24a0
	ctx.lr = 0x827E629C;
	sub_827F24A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x827e62e8
	if (!cr6.lt) goto loc_827E62E8;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_827E62B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827f8388
	ctx.lr = 0x827E62CC;
	sub_827F8388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x827e62e8
	if (!cr6.lt) goto loc_827E62E8;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_827E62E8:
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x827e62fc
	if (!cr6.eq) goto loc_827E62FC;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_827E62FC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
loc_827E631C:
	// li r3,2
	ctx.r3.s64 = 2;
loc_827E6320:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E6328"))) PPC_WEAK_FUNC(sub_827E6328);
PPC_FUNC_IMPL(__imp__sub_827E6328) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827E6330;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827e64ac
	if (cr6.eq) goto loc_827E64AC;
	// lwz r3,584(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 584);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e64ac
	if (cr6.eq) goto loc_827E64AC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827e64ac
	if (cr6.eq) goto loc_827E64AC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827e64ac
	if (cr6.eq) goto loc_827E64AC;
	// addi r26,r28,588
	ctx.r26.s64 = ctx.r28.s64 + 588;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827e64ac
	if (!cr6.eq) goto loc_827E64AC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e641c
	if (cr6.eq) goto loc_827E641C;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827e641c
	if (cr6.eq) goto loc_827E641C;
	// lhz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x827e641c
	if (!cr6.gt) goto loc_827E641C;
	// lwz r11,616(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 616);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r4,31,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x827f8c08
	ctx.lr = 0x827E63D0;
	sub_827F8C08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827e644c
	if (cr6.lt) goto loc_827E644C;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827e6444
	if (cr6.eq) goto loc_827E6444;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827E63E8:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// sth r8,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// blt cr6,0x827e63e8
	if (cr6.lt) goto loc_827E63E8;
	// b 0x827e6444
	goto loc_827E6444;
loc_827E641C:
	// lwz r11,616(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 616);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x827f8c08
	ctx.lr = 0x827E6440;
	sub_827F8C08(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_827E6444:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x827e647c
	if (!cr6.lt) goto loc_827E647C;
loc_827E644C:
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r3,584(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 584);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,556(r28)
	PPC_STORE_U32(ctx.r28.u32 + 556, ctx.r27.u32);
	// stw r11,392(r28)
	PPC_STORE_U32(ctx.r28.u32 + 392, ctx.r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// bl 0x827f2340
	ctx.lr = 0x827E646C;
	sub_827F2340(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_827E647C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827e649c
	if (!cr6.eq) goto loc_827E649C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,556(r28)
	PPC_STORE_U32(ctx.r28.u32 + 556, ctx.r27.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_827E649C:
	// stw r9,556(r28)
	PPC_STORE_U32(ctx.r28.u32 + 556, ctx.r9.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_827E64AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E64B8"))) PPC_WEAK_FUNC(sub_827E64B8);
PPC_FUNC_IMPL(__imp__sub_827E64B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-23256
	ctx.r11.s64 = ctx.r11.s64 + -23256;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x827ed910
	sub_827ED910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E64C8"))) PPC_WEAK_FUNC(sub_827E64C8);
PPC_FUNC_IMPL(__imp__sub_827E64C8) {
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
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x828d2890
	ctx.lr = 0x827E64EC;
	sub_828D2890(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x828d2890
	ctx.lr = 0x827E64FC;
	sub_828D2890(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x828d2890
	ctx.lr = 0x827E650C;
	sub_828D2890(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x828d2890
	ctx.lr = 0x827E651C;
	sub_828D2890(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// bl 0x827ed918
	ctx.lr = 0x827E6530;
	sub_827ED918(ctx, base);
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

__attribute__((alias("__imp__sub_827E6544"))) PPC_WEAK_FUNC(sub_827E6544);
PPC_FUNC_IMPL(__imp__sub_827E6544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6548"))) PPC_WEAK_FUNC(sub_827E6548);
PPC_FUNC_IMPL(__imp__sub_827E6548) {
	PPC_FUNC_PROLOGUE();
	// b 0x827e64c8
	sub_827E64C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E654C"))) PPC_WEAK_FUNC(sub_827E654C);
PPC_FUNC_IMPL(__imp__sub_827E654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6550"))) PPC_WEAK_FUNC(sub_827E6550);
PPC_FUNC_IMPL(__imp__sub_827E6550) {
	PPC_FUNC_PROLOGUE();
	// stw r4,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6558"))) PPC_WEAK_FUNC(sub_827E6558);
PPC_FUNC_IMPL(__imp__sub_827E6558) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,444(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6560"))) PPC_WEAK_FUNC(sub_827E6560);
PPC_FUNC_IMPL(__imp__sub_827E6560) {
	PPC_FUNC_PROLOGUE();
	// stw r4,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6568"))) PPC_WEAK_FUNC(sub_827E6568);
PPC_FUNC_IMPL(__imp__sub_827E6568) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,448(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6570"))) PPC_WEAK_FUNC(sub_827E6570);
PPC_FUNC_IMPL(__imp__sub_827E6570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,124
	ctx.r7.s64 = ctx.r3.s64 + 124;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E6588"))) PPC_WEAK_FUNC(sub_827E6588);
PPC_FUNC_IMPL(__imp__sub_827E6588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,364
	ctx.r7.s64 = ctx.r3.s64 + 364;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E65A0"))) PPC_WEAK_FUNC(sub_827E65A0);
PPC_FUNC_IMPL(__imp__sub_827E65A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,364
	ctx.r3.s64 = ctx.r3.s64 + 364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E65A8"))) PPC_WEAK_FUNC(sub_827E65A8);
PPC_FUNC_IMPL(__imp__sub_827E65A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,284
	ctx.r7.s64 = ctx.r3.s64 + 284;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E65C0"))) PPC_WEAK_FUNC(sub_827E65C0);
PPC_FUNC_IMPL(__imp__sub_827E65C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E65C8"))) PPC_WEAK_FUNC(sub_827E65C8);
PPC_FUNC_IMPL(__imp__sub_827E65C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,204
	ctx.r7.s64 = ctx.r3.s64 + 204;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E65E0"))) PPC_WEAK_FUNC(sub_827E65E0);
PPC_FUNC_IMPL(__imp__sub_827E65E0) {
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
	// bl 0x827ed9a8
	ctx.lr = 0x827E65F8;
	sub_827ED9A8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23256
	ctx.r11.s64 = ctx.r11.s64 + -23256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827e64c8
	ctx.lr = 0x827E660C;
	sub_827E64C8(ctx, base);
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

__attribute__((alias("__imp__sub_827E6624"))) PPC_WEAK_FUNC(sub_827E6624);
PPC_FUNC_IMPL(__imp__sub_827E6624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6628"))) PPC_WEAK_FUNC(sub_827E6628);
PPC_FUNC_IMPL(__imp__sub_827E6628) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23256
	ctx.r11.s64 = ctx.r11.s64 + -23256;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827ed910
	ctx.lr = 0x827E6654;
	sub_827ED910(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e6674
	if (cr6.eq) goto loc_827E6674;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32823
	ctx.r4.u64 = ctx.r4.u64 | 32823;
	// bl 0x822193d8
	ctx.lr = 0x827E6670;
	sub_822193D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827E6674:
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

__attribute__((alias("__imp__sub_827E668C"))) PPC_WEAK_FUNC(sub_827E668C);
PPC_FUNC_IMPL(__imp__sub_827E668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6690"))) PPC_WEAK_FUNC(sub_827E6690);
PPC_FUNC_IMPL(__imp__sub_827E6690) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6698"))) PPC_WEAK_FUNC(sub_827E6698);
PPC_FUNC_IMPL(__imp__sub_827E6698) {
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
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e66c4
	if (cr6.eq) goto loc_827E66C4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x822193d8
	ctx.lr = 0x827E66C4;
	sub_822193D8(ctx, base);
loc_827E66C4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e6700
	if (cr6.eq) goto loc_827E6700;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827e66fc
	if (cr6.eq) goto loc_827E66FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E66F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827e6700
	goto loc_827E6700;
loc_827E66FC:
	// bl 0x824a29c8
	ctx.lr = 0x827E6700;
	sub_824A29C8(ctx, base);
loc_827E6700:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827E6738"))) PPC_WEAK_FUNC(sub_827E6738);
PPC_FUNC_IMPL(__imp__sub_827E6738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E6758"))) PPC_WEAK_FUNC(sub_827E6758);
PPC_FUNC_IMPL(__imp__sub_827E6758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E6778"))) PPC_WEAK_FUNC(sub_827E6778);
PPC_FUNC_IMPL(__imp__sub_827E6778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E6798"))) PPC_WEAK_FUNC(sub_827E6798);
PPC_FUNC_IMPL(__imp__sub_827E6798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E67B8"))) PPC_WEAK_FUNC(sub_827E67B8);
PPC_FUNC_IMPL(__imp__sub_827E67B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E67D8"))) PPC_WEAK_FUNC(sub_827E67D8);
PPC_FUNC_IMPL(__imp__sub_827E67D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E67F8"))) PPC_WEAK_FUNC(sub_827E67F8);
PPC_FUNC_IMPL(__imp__sub_827E67F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E6818"))) PPC_WEAK_FUNC(sub_827E6818);
PPC_FUNC_IMPL(__imp__sub_827E6818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E6838"))) PPC_WEAK_FUNC(sub_827E6838);
PPC_FUNC_IMPL(__imp__sub_827E6838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E6858"))) PPC_WEAK_FUNC(sub_827E6858);
PPC_FUNC_IMPL(__imp__sub_827E6858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E6878"))) PPC_WEAK_FUNC(sub_827E6878);
PPC_FUNC_IMPL(__imp__sub_827E6878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E6898"))) PPC_WEAK_FUNC(sub_827E6898);
PPC_FUNC_IMPL(__imp__sub_827E6898) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E68A0"))) PPC_WEAK_FUNC(sub_827E68A0);
PPC_FUNC_IMPL(__imp__sub_827E68A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E68B0"))) PPC_WEAK_FUNC(sub_827E68B0);
PPC_FUNC_IMPL(__imp__sub_827E68B0) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E68E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_827E68FC"))) PPC_WEAK_FUNC(sub_827E68FC);
PPC_FUNC_IMPL(__imp__sub_827E68FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6900"))) PPC_WEAK_FUNC(sub_827E6900);
PPC_FUNC_IMPL(__imp__sub_827E6900) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E6934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_827E694C"))) PPC_WEAK_FUNC(sub_827E694C);
PPC_FUNC_IMPL(__imp__sub_827E694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6950"))) PPC_WEAK_FUNC(sub_827E6950);
PPC_FUNC_IMPL(__imp__sub_827E6950) {
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
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 * 60;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E6980;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_827E6998"))) PPC_WEAK_FUNC(sub_827E6998);
PPC_FUNC_IMPL(__imp__sub_827E6998) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827e69dc
	if (cr6.lt) goto loc_827E69DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
loc_827E69BC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827e69bc
	if (!cr0.eq) goto loc_827E69BC;
	// blr 
	return;
loc_827E69DC:
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
loc_827E69E0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827e69e0
	if (!cr0.eq) goto loc_827E69E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6A00"))) PPC_WEAK_FUNC(sub_827E6A00);
PPC_FUNC_IMPL(__imp__sub_827E6A00) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827e6a44
	if (cr6.lt) goto loc_827E6A44;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
loc_827E6A24:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827e6a24
	if (!cr0.eq) goto loc_827E6A24;
	// blr 
	return;
loc_827E6A44:
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
loc_827E6A48:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827e6a48
	if (!cr0.eq) goto loc_827E6A48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6A68"))) PPC_WEAK_FUNC(sub_827E6A68);
PPC_FUNC_IMPL(__imp__sub_827E6A68) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6A80"))) PPC_WEAK_FUNC(sub_827E6A80);
PPC_FUNC_IMPL(__imp__sub_827E6A80) {
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
	// bl 0x827e0898
	ctx.lr = 0x827E6A98;
	sub_827E0898(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-23152
	ctx.r10.s64 = ctx.r11.s64 + -23152;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827E6ADC"))) PPC_WEAK_FUNC(sub_827E6ADC);
PPC_FUNC_IMPL(__imp__sub_827E6ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6AE0"))) PPC_WEAK_FUNC(sub_827E6AE0);
PPC_FUNC_IMPL(__imp__sub_827E6AE0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23152
	ctx.r11.s64 = ctx.r11.s64 + -23152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827e6698
	ctx.lr = 0x827E6B04;
	sub_827E6698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e08e0
	ctx.lr = 0x827E6B0C;
	sub_827E08E0(ctx, base);
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

__attribute__((alias("__imp__sub_827E6B20"))) PPC_WEAK_FUNC(sub_827E6B20);
PPC_FUNC_IMPL(__imp__sub_827E6B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x827E6B28;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E6B4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x827e6c28
	if (cr6.lt) goto loc_827E6C28;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// andc r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// mullw r11,r25,r29
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x822193b0
	ctx.lr = 0x827E6B80;
	sub_822193B0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r3,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// bne cr6,0x827e6b98
	if (!cr6.eq) goto loc_827E6B98;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x824a29c0
	ctx.lr = 0x827E6B94;
	sub_824A29C0(ctx, base);
	// b 0x827e6bc4
	goto loc_827E6BC4;
loc_827E6B98:
	// lis r11,1092
	ctx.r11.s64 = 71565312;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827e6bbc
	if (cr6.gt) goto loc_827E6BBC;
	// mulli r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 * 60;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827e6bc0
	if (!cr6.gt) goto loc_827E6BC0;
loc_827E6BBC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827E6BC0:
	// bl 0x827df0f0
	ctx.lr = 0x827E6BC4;
	sub_827DF0F0(ctx, base);
loc_827E6BC4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e6c04
	if (cr6.eq) goto loc_827E6C04;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r31,r29,-1
	ctx.r31.s64 = ctx.r29.s64 + -1;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e6bfc
	if (cr6.lt) goto loc_827E6BFC;
loc_827E6BE4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827df368
	ctx.lr = 0x827E6BEC;
	sub_827DF368(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r27,r27,60
	ctx.r27.s64 = ctx.r27.s64 + 60;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x827e6be4
	if (!cr6.lt) goto loc_827E6BE4;
loc_827E6BFC:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x827e6c08
	goto loc_827E6C08;
loc_827E6C04:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827E6C08:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e6c20
	if (cr6.eq) goto loc_827E6C20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827e6c48
	if (!cr6.eq) goto loc_827E6C48;
loc_827E6C20:
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,14
	ctx.r24.u64 = ctx.r24.u64 | 14;
loc_827E6C28:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E6C3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E6C3C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_827E6C48:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r29.u32);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// andc r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e6c3c
	if (cr6.eq) goto loc_827E6C3C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_827E6C6C:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x827df110
	ctx.lr = 0x827E6C80;
	sub_827DF110(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827e6c6c
	if (cr6.lt) goto loc_827E6C6C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E6CA4"))) PPC_WEAK_FUNC(sub_827E6CA4);
PPC_FUNC_IMPL(__imp__sub_827E6CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6CA8"))) PPC_WEAK_FUNC(sub_827E6CA8);
PPC_FUNC_IMPL(__imp__sub_827E6CA8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827E6CB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e6d1c
	if (cr6.eq) goto loc_827E6D1C;
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 * 60;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827e6cfc
	if (cr6.lt) goto loc_827E6CFC;
loc_827E6CE4:
	// addi r30,r30,-60
	ctx.r30.s64 = ctx.r30.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827df3b8
	ctx.lr = 0x827E6CF0;
	sub_827DF3B8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x827e6ce4
	if (!cr6.lt) goto loc_827E6CE4;
loc_827E6CFC:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e6d10
	if (cr6.eq) goto loc_827E6D10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827df100
	ctx.lr = 0x827E6D10;
	sub_827DF100(ctx, base);
loc_827E6D10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
loc_827E6D1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827df3b8
	ctx.lr = 0x827E6D24;
	sub_827DF3B8(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e6d38
	if (cr6.eq) goto loc_827E6D38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827df100
	ctx.lr = 0x827E6D38;
	sub_827DF100(ctx, base);
loc_827E6D38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E6D44"))) PPC_WEAK_FUNC(sub_827E6D44);
PPC_FUNC_IMPL(__imp__sub_827E6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6D48"))) PPC_WEAK_FUNC(sub_827E6D48);
PPC_FUNC_IMPL(__imp__sub_827E6D48) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23152
	ctx.r11.s64 = ctx.r11.s64 + -23152;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827e6698
	ctx.lr = 0x827E6D74;
	sub_827E6698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e08e0
	ctx.lr = 0x827E6D7C;
	sub_827E08E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e6d9c
	if (cr6.eq) goto loc_827E6D9C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x822193d8
	ctx.lr = 0x827E6D98;
	sub_822193D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827E6D9C:
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

__attribute__((alias("__imp__sub_827E6DB4"))) PPC_WEAK_FUNC(sub_827E6DB4);
PPC_FUNC_IMPL(__imp__sub_827E6DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6DB8"))) PPC_WEAK_FUNC(sub_827E6DB8);
PPC_FUNC_IMPL(__imp__sub_827E6DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,10548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stw r10,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// stw r10,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
	// stw r10,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
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
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// std r11,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
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
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6EC0"))) PPC_WEAK_FUNC(sub_827E6EC0);
PPC_FUNC_IMPL(__imp__sub_827E6EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827E6EFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6F0C"))) PPC_WEAK_FUNC(sub_827E6F0C);
PPC_FUNC_IMPL(__imp__sub_827E6F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6F10"))) PPC_WEAK_FUNC(sub_827E6F10);
PPC_FUNC_IMPL(__imp__sub_827E6F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,36(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827E6F54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6F64"))) PPC_WEAK_FUNC(sub_827E6F64);
PPC_FUNC_IMPL(__imp__sub_827E6F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6F68"))) PPC_WEAK_FUNC(sub_827E6F68);
PPC_FUNC_IMPL(__imp__sub_827E6F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,36(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827E6FB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E6FC0"))) PPC_WEAK_FUNC(sub_827E6FC0);
PPC_FUNC_IMPL(__imp__sub_827E6FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E6FD4"))) PPC_WEAK_FUNC(sub_827E6FD4);
PPC_FUNC_IMPL(__imp__sub_827E6FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E6FD8"))) PPC_WEAK_FUNC(sub_827E6FD8);
PPC_FUNC_IMPL(__imp__sub_827E6FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827E6FE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x827e705c
	if (cr6.gt) goto loc_827E705C;
	// lis r12,-32130
	ctx.r12.s64 = -2105671680;
	// addi r12,r12,28712
	ctx.r12.s64 = ctx.r12.s64 + 28712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827E7044;
	case 1:
		goto loc_827E7050;
	case 2:
		goto loc_827E705C;
	case 3:
		goto loc_827E7038;
	default:
		__builtin_unreachable();
	}
	// lwz r19,28740(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28740);
	// lwz r19,28752(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28752);
	// lwz r19,28764(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28764);
	// lwz r19,28728(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28728);
loc_827E7038:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// b 0x827e7064
	goto loc_827E7064;
loc_827E7044:
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// b 0x827e7064
	goto loc_827E7064;
loc_827E7050:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// b 0x827e7064
	goto loc_827E7064;
loc_827E705C:
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_827E7064:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E7084"))) PPC_WEAK_FUNC(sub_827E7084);
PPC_FUNC_IMPL(__imp__sub_827E7084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E7088"))) PPC_WEAK_FUNC(sub_827E7088);
PPC_FUNC_IMPL(__imp__sub_827E7088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
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
	// beq cr6,0x827e70c0
	if (cr6.eq) goto loc_827E70C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E70C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E70C0:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e70e4
	if (cr6.eq) goto loc_827E70E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E70DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_827E70E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_827E7104"))) PPC_WEAK_FUNC(sub_827E7104);
PPC_FUNC_IMPL(__imp__sub_827E7104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E7108"))) PPC_WEAK_FUNC(sub_827E7108);
PPC_FUNC_IMPL(__imp__sub_827E7108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r6,8
	ctx.r5.s64 = ctx.r6.s64 + 8;
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E7124"))) PPC_WEAK_FUNC(sub_827E7124);
PPC_FUNC_IMPL(__imp__sub_827E7124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E7128"))) PPC_WEAK_FUNC(sub_827E7128);
PPC_FUNC_IMPL(__imp__sub_827E7128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E713C"))) PPC_WEAK_FUNC(sub_827E713C);
PPC_FUNC_IMPL(__imp__sub_827E713C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E7140"))) PPC_WEAK_FUNC(sub_827E7140);
PPC_FUNC_IMPL(__imp__sub_827E7140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E717C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x827e71d8
	if (!cr6.eq) goto loc_827E71D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7198;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x827e71d8
	if (!cr6.eq) goto loc_827E71D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E71B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E71D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x827e71e0
	goto loc_827E71E0;
loc_827E71D8:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_827E71E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E71F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_827E7210"))) PPC_WEAK_FUNC(sub_827E7210);
PPC_FUNC_IMPL(__imp__sub_827E7210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7238;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E724C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x827e730c
	if (!cr6.eq) goto loc_827E730C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7268;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x827e730c
	if (!cr6.eq) goto loc_827E730C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E72A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E72B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E72CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E72E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E72F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827e7314
	goto loc_827E7314;
loc_827E730C:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_827E7314:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7328;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_827E7344"))) PPC_WEAK_FUNC(sub_827E7344);
PPC_FUNC_IMPL(__imp__sub_827E7344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E7348"))) PPC_WEAK_FUNC(sub_827E7348);
PPC_FUNC_IMPL(__imp__sub_827E7348) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E736C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7384;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E739C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E73B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E73CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E73E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E73F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E741C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7430;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_827E7448"))) PPC_WEAK_FUNC(sub_827E7448);
PPC_FUNC_IMPL(__imp__sub_827E7448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-23056
	ctx.r4.s64 = ctx.r11.s64 + -23056;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-25032
	ctx.r3.s64 = ctx.r11.s64 + -25032;
	// bl 0x82ac64f4
	ctx.lr = 0x827E7468;
	__imp__DbgPrint(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E7480"))) PPC_WEAK_FUNC(sub_827E7480);
PPC_FUNC_IMPL(__imp__sub_827E7480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827E7488;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E74C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E74E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7548
	if (cr6.eq) goto loc_827E7548;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E7548:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e756c
	if (cr6.eq) goto loc_827E756C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7568;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827E756C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e758c
	if (cr6.eq) goto loc_827E758C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827E758C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e75b0
	if (cr6.eq) goto loc_827E75B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E75A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827E75B0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e75e0
	if (cr6.eq) goto loc_827E75E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E75D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827E75E0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x827e7660
	if (cr6.lt) goto loc_827E7660;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e7618
	if (cr6.eq) goto loc_827E7618;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827E7618:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x827e7660
	if (cr6.lt) goto loc_827E7660;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e764c
	if (cr6.eq) goto loc_827E764C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x827e6a68
	ctx.lr = 0x827E764C;
	sub_827E6A68(ctx, base);
loc_827E764C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x827e7660
	if (cr6.lt) goto loc_827E7660;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x827de758
	ctx.lr = 0x827E7660;
	sub_827DE758(ctx, base);
loc_827E7660:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7674;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7688;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e76a4
	if (cr6.eq) goto loc_827E76A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E76A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E76A4:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e76c0
	if (cr6.eq) goto loc_827E76C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E76C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E76C0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e76dc
	if (cr6.eq) goto loc_827E76DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E76DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E76DC:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e76f8
	if (cr6.eq) goto loc_827E76F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E76F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E76F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E770C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827e771c
	if (cr6.eq) goto loc_827E771C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_827E771C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e773c
	if (cr6.eq) goto loc_827E773C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7738;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_827E773C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e775c
	if (cr6.eq) goto loc_827E775C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7758;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_827E775C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e777c
	if (cr6.eq) goto loc_827E777C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7778;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_827E777C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e779c
	if (cr6.eq) goto loc_827E779C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_827E779C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e77bc
	if (cr6.eq) goto loc_827E77BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E77B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
loc_827E77BC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e77d8
	if (cr6.eq) goto loc_827E77D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E77D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E77D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E77E4"))) PPC_WEAK_FUNC(sub_827E77E4);
PPC_FUNC_IMPL(__imp__sub_827E77E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E77E8"))) PPC_WEAK_FUNC(sub_827E77E8);
PPC_FUNC_IMPL(__imp__sub_827E77E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827E77F0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bne cr6,0x827e7840
	if (!cr6.eq) goto loc_827E7840;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_827E7840:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7854;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7874;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7894;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E78B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e78d4
	if (cr6.eq) goto loc_827E78D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E78D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E78D4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e78f0
	if (cr6.eq) goto loc_827E78F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E78F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E78F0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7910
	if (cr6.eq) goto loc_827E7910;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E790C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827E7910:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e7934
	if (cr6.eq) goto loc_827E7934;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7930;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827E7934:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e7aa4
	if (cr6.lt) goto loc_827E7AA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f30,2548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x827e7954
	if (cr6.gt) goto loc_827E7954;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_827E7954:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E797C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e7aa0
	if (cr6.lt) goto loc_827E7AA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f0,10548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x827e79a8
	if (!cr6.eq) goto loc_827E79A8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827E79A8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// bne cr6,0x827e7aa0
	if (!cr6.eq) goto loc_827E7AA0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bge cr6,0x827e7a3c
	if (!cr6.lt) goto loc_827E7A3C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// ld r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E79E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e7a78
	if (cr6.lt) goto loc_827E7A78;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7A08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e7a78
	if (cr6.lt) goto loc_827E7A78;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7A2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x827e6a68
	ctx.lr = 0x827E7A38;
	sub_827E6A68(ctx, base);
	// b 0x827e7a60
	goto loc_827E7A60;
loc_827E7A3C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,128(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 128);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7A5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827E7A60:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827e7a78
	if (cr6.lt) goto loc_827E7A78;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x827de758
	ctx.lr = 0x827E7A74;
	sub_827DE758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827E7A78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7A8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7AA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E7AA0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827E7AA4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e7ac8
	if (cr6.eq) goto loc_827E7AC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7AC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827E7AC8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e7aec
	if (cr6.eq) goto loc_827E7AEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7AE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827E7AEC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7b04
	if (cr6.eq) goto loc_827E7B04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7B04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E7B04:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7b20
	if (cr6.eq) goto loc_827E7B20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E7B20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7B34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7b54
	if (cr6.eq) goto loc_827E7B54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7B50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
loc_827E7B54:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7b74
	if (cr6.eq) goto loc_827E7B74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7B70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_827E7B74:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7b94
	if (cr6.eq) goto loc_827E7B94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7B90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_827E7B94:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7bb4
	if (cr6.eq) goto loc_827E7BB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7BB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_827E7BB4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7bd4
	if (cr6.eq) goto loc_827E7BD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7BD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
loc_827E7BD4:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7bf0
	if (cr6.eq) goto loc_827E7BF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7BF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E7BF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E7C04"))) PPC_WEAK_FUNC(sub_827E7C04);
PPC_FUNC_IMPL(__imp__sub_827E7C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E7C08"))) PPC_WEAK_FUNC(sub_827E7C08);
PPC_FUNC_IMPL(__imp__sub_827E7C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827E7C10;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7C34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827e7c54
	if (cr6.eq) goto loc_827E7C54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7C50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_827E7C54:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827e7c74
	if (cr6.eq) goto loc_827E7C74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7C70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_827E7C74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7C88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827e7cb0
	if (cr6.eq) goto loc_827E7CB0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7CA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_827E7CB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E7CBC"))) PPC_WEAK_FUNC(sub_827E7CBC);
PPC_FUNC_IMPL(__imp__sub_827E7CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E7CC0"))) PPC_WEAK_FUNC(sub_827E7CC0);
PPC_FUNC_IMPL(__imp__sub_827E7CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
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
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e7cfc
	if (cr6.eq) goto loc_827E7CFC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7CFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E7CFC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_827E7D20"))) PPC_WEAK_FUNC(sub_827E7D20);
PPC_FUNC_IMPL(__imp__sub_827E7D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7D60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827e7db4
	if (cr6.eq) goto loc_827E7DB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827db230
	ctx.lr = 0x827E7D78;
	sub_827DB230(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827e7d98
	if (cr6.eq) goto loc_827E7D98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E7D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827E7D9C:
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
loc_827E7DB4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x827e7d9c
	goto loc_827E7D9C;
}

__attribute__((alias("__imp__sub_827E7DBC"))) PPC_WEAK_FUNC(sub_827E7DBC);
PPC_FUNC_IMPL(__imp__sub_827E7DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E7DC0"))) PPC_WEAK_FUNC(sub_827E7DC0);
PPC_FUNC_IMPL(__imp__sub_827E7DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x827E7DC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7DE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827e7e0c
	if (!cr6.eq) goto loc_827E7E0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7E04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x827e7eb8
	if (cr6.eq) goto loc_827E7EB8;
loc_827E7E0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7E34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7E48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7E5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7E70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7E84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7E98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7EB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827e7fb0
	if (cr6.lt) goto loc_827E7FB0;
loc_827E7EB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7ECC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7EFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7F2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7F60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7F74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7F88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7F9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7FB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E7FB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E7FBC"))) PPC_WEAK_FUNC(sub_827E7FBC);
PPC_FUNC_IMPL(__imp__sub_827E7FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E7FC0"))) PPC_WEAK_FUNC(sub_827E7FC0);
PPC_FUNC_IMPL(__imp__sub_827E7FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
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
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E7FEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827e8028
	if (!cr6.eq) goto loc_827E8028;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E8014;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x827e8028
	if (!cr6.gt) goto loc_827E8028;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// bl 0x826128b8
	ctx.lr = 0x827E8028;
	sub_826128B8(ctx, base);
loc_827E8028:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E803C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e8058
	if (cr6.eq) goto loc_827E8058;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x827a8748
	ctx.lr = 0x827E8050;
	sub_827A8748(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_827E8058:
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

__attribute__((alias("__imp__sub_827E8070"))) PPC_WEAK_FUNC(sub_827E8070);
PPC_FUNC_IMPL(__imp__sub_827E8070) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827e80a0
	if (cr6.eq) goto loc_827E80A0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E80A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827E80A0:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E80B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827e80d0
	if (cr6.eq) goto loc_827E80D0;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x827a8748
	ctx.lr = 0x827E80C8;
	sub_827A8748(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_827E80D0:
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

__attribute__((alias("__imp__sub_827E80E4"))) PPC_WEAK_FUNC(sub_827E80E4);
PPC_FUNC_IMPL(__imp__sub_827E80E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E80E8"))) PPC_WEAK_FUNC(sub_827E80E8);
PPC_FUNC_IMPL(__imp__sub_827E80E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E80F8"))) PPC_WEAK_FUNC(sub_827E80F8);
PPC_FUNC_IMPL(__imp__sub_827E80F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E8108"))) PPC_WEAK_FUNC(sub_827E8108);
PPC_FUNC_IMPL(__imp__sub_827E8108) {
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
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E8124;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_827E8138"))) PPC_WEAK_FUNC(sub_827E8138);
PPC_FUNC_IMPL(__imp__sub_827E8138) {
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
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E8154;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_827E8168"))) PPC_WEAK_FUNC(sub_827E8168);
PPC_FUNC_IMPL(__imp__sub_827E8168) {
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
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E8184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_827E8198"))) PPC_WEAK_FUNC(sub_827E8198);
PPC_FUNC_IMPL(__imp__sub_827E8198) {
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
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E81B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_827E81C8"))) PPC_WEAK_FUNC(sub_827E81C8);
PPC_FUNC_IMPL(__imp__sub_827E81C8) {
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
	// bl 0x827e0898
	ctx.lr = 0x827E81E0;
	sub_827E0898(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23008
	ctx.r11.s64 = ctx.r11.s64 + -23008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827e6db8
	ctx.lr = 0x827E81F4;
	sub_827E6DB8(ctx, base);
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

__attribute__((alias("__imp__sub_827E8208"))) PPC_WEAK_FUNC(sub_827E8208);
PPC_FUNC_IMPL(__imp__sub_827E8208) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x82ac6824
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8220"))) PPC_WEAK_FUNC(sub_827E8220);
PPC_FUNC_IMPL(__imp__sub_827E8220) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x82ac6824
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8238"))) PPC_WEAK_FUNC(sub_827E8238);
PPC_FUNC_IMPL(__imp__sub_827E8238) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x82ac6824
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8250"))) PPC_WEAK_FUNC(sub_827E8250);
PPC_FUNC_IMPL(__imp__sub_827E8250) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x82ac6824
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8268"))) PPC_WEAK_FUNC(sub_827E8268);
PPC_FUNC_IMPL(__imp__sub_827E8268) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82ac6824
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8280"))) PPC_WEAK_FUNC(sub_827E8280);
PPC_FUNC_IMPL(__imp__sub_827E8280) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82ac6824
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8298"))) PPC_WEAK_FUNC(sub_827E8298);
PPC_FUNC_IMPL(__imp__sub_827E8298) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x82ac6824
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E82B0"))) PPC_WEAK_FUNC(sub_827E82B0);
PPC_FUNC_IMPL(__imp__sub_827E82B0) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x82ac6824
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E82C8"))) PPC_WEAK_FUNC(sub_827E82C8);
PPC_FUNC_IMPL(__imp__sub_827E82C8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x82ac67e4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E82D8"))) PPC_WEAK_FUNC(sub_827E82D8);
PPC_FUNC_IMPL(__imp__sub_827E82D8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x82ac67e4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E82E8"))) PPC_WEAK_FUNC(sub_827E82E8);
PPC_FUNC_IMPL(__imp__sub_827E82E8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x82ac67e4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E82F8"))) PPC_WEAK_FUNC(sub_827E82F8);
PPC_FUNC_IMPL(__imp__sub_827E82F8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x82ac67e4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8308"))) PPC_WEAK_FUNC(sub_827E8308);
PPC_FUNC_IMPL(__imp__sub_827E8308) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82ac67e4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8318"))) PPC_WEAK_FUNC(sub_827E8318);
PPC_FUNC_IMPL(__imp__sub_827E8318) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82ac67e4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8328"))) PPC_WEAK_FUNC(sub_827E8328);
PPC_FUNC_IMPL(__imp__sub_827E8328) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x82ac67e4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8338"))) PPC_WEAK_FUNC(sub_827E8338);
PPC_FUNC_IMPL(__imp__sub_827E8338) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x82ac67e4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8348"))) PPC_WEAK_FUNC(sub_827E8348);
PPC_FUNC_IMPL(__imp__sub_827E8348) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82ac67d4
	__imp__KeResetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8350"))) PPC_WEAK_FUNC(sub_827E8350);
PPC_FUNC_IMPL(__imp__sub_827E8350) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82ac67d4
	__imp__KeResetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8358"))) PPC_WEAK_FUNC(sub_827E8358);
PPC_FUNC_IMPL(__imp__sub_827E8358) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x82ac67d4
	__imp__KeResetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8360"))) PPC_WEAK_FUNC(sub_827E8360);
PPC_FUNC_IMPL(__imp__sub_827E8360) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x82ac67d4
	__imp__KeResetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827E8368"))) PPC_WEAK_FUNC(sub_827E8368);
PPC_FUNC_IMPL(__imp__sub_827E8368) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E8370"))) PPC_WEAK_FUNC(sub_827E8370);
PPC_FUNC_IMPL(__imp__sub_827E8370) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E8378"))) PPC_WEAK_FUNC(sub_827E8378);
PPC_FUNC_IMPL(__imp__sub_827E8378) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E8380"))) PPC_WEAK_FUNC(sub_827E8380);
PPC_FUNC_IMPL(__imp__sub_827E8380) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E8388"))) PPC_WEAK_FUNC(sub_827E8388);
PPC_FUNC_IMPL(__imp__sub_827E8388) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E8390"))) PPC_WEAK_FUNC(sub_827E8390);
PPC_FUNC_IMPL(__imp__sub_827E8390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// stw r4,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E83B8"))) PPC_WEAK_FUNC(sub_827E83B8);
PPC_FUNC_IMPL(__imp__sub_827E83B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E83BC"))) PPC_WEAK_FUNC(sub_827E83BC);
PPC_FUNC_IMPL(__imp__sub_827E83BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E83C0"))) PPC_WEAK_FUNC(sub_827E83C0);
PPC_FUNC_IMPL(__imp__sub_827E83C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// stw r4,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827E83E8"))) PPC_WEAK_FUNC(sub_827E83E8);
PPC_FUNC_IMPL(__imp__sub_827E83E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827E83EC"))) PPC_WEAK_FUNC(sub_827E83EC);
PPC_FUNC_IMPL(__imp__sub_827E83EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827E83F0"))) PPC_WEAK_FUNC(sub_827E83F0);
PPC_FUNC_IMPL(__imp__sub_827E83F0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E841C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827E843C;
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

