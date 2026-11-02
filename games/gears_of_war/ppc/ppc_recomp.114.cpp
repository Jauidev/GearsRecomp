#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827691F4"))) PPC_WEAK_FUNC(sub_827691F4);
PPC_FUNC_IMPL(__imp__sub_827691F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827691F8"))) PPC_WEAK_FUNC(sub_827691F8);
PPC_FUNC_IMPL(__imp__sub_827691F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82769200;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x826ed228
	ctx.lr = 0x82769218;
	sub_826ED228(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827693b4
	if (cr0.eq) goto loc_827693B4;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8276922C:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827692b0
	if (cr6.eq) goto loc_827692B0;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
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
	// beq 0x827692a8
	if (cr0.eq) goto loc_827692A8;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
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
	// beq 0x827692a8
	if (cr0.eq) goto loc_827692A8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x827692a4
	if (cr0.eq) goto loc_827692A4;
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82769284:
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
	// slw r3,r5,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r3.u8 & 0x3F));
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// blt cr6,0x82769284
	if (cr6.lt) goto loc_82769284;
loc_827692A4:
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
loc_827692A8:
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x8276922c
	goto loc_8276922C;
loc_827692B0:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 + 36;
	// rlwinm r8,r9,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
loc_827692C0:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x827693b4
	if (!cr6.lt) goto loc_827693B4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x827692e8
	if (!cr6.eq) goto loc_827692E8;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x827692f4
	if (cr6.eq) goto loc_827692F4;
loc_827692E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x827692c0
	goto loc_827692C0;
loc_827692F4:
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827693c4
	if (!cr0.eq) goto loc_827693C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,584(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 584);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827181b0
	ctx.lr = 0x82769310;
	sub_827181B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827693b4
	if (cr0.eq) goto loc_827693B4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827693a0
	if (cr0.eq) goto loc_827693A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x826e1b70
	ctx.lr = 0x82769338;
	sub_826E1B70(ctx, base);
	// sth r3,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r3.u16);
	// lwz r3,592(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 592);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769354
	if (cr0.eq) goto loc_82769354;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82769360
	goto loc_82769360;
loc_82769354:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82769360:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276937c
	if (cr6.eq) goto loc_8276937C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82769388
	if (!cr6.gt) goto loc_82769388;
loc_8276937C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826d7920
	ctx.lr = 0x82769384;
	sub_826D7920(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82769388:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_827693A0:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,584(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 584);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82766da8
	ctx.lr = 0x827693B4;
	sub_82766DA8(ctx, base);
loc_827693B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,592(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 592);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270ca38
	ctx.lr = 0x827693C4;
	sub_8270CA38(ctx, base);
loc_827693C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827693CC"))) PPC_WEAK_FUNC(sub_827693CC);
PPC_FUNC_IMPL(__imp__sub_827693CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827693D0"))) PPC_WEAK_FUNC(sub_827693D0);
PPC_FUNC_IMPL(__imp__sub_827693D0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f8
	ctx.lr = 0x827693D8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r24,r21,4
	ctx.r24.s64 = ctx.r21.s64 + 4;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82769404:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8276966c
	if (cr0.eq) goto loc_8276966C;
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276964c
	if (cr0.eq) goto loc_8276964C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r10,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827695fc
	if (!cr0.eq) goto loc_827695FC;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r9,20(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8276964c
	if (!cr6.eq) goto loc_8276964C;
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276946c
	if (cr0.eq) goto loc_8276946C;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82769470
	if (cr6.eq) goto loc_82769470;
loc_8276946C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82769470:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276955c
	if (cr0.eq) goto loc_8276955C;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8276950c
	if (cr6.lt) goto loc_8276950C;
	// beq cr6,0x827694fc
	if (cr6.eq) goto loc_827694FC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x827694ec
	if (cr6.lt) goto loc_827694EC;
	// beq cr6,0x827694d4
	if (cr6.eq) goto loc_827694D4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x827694b0
	if (cr6.eq) goto loc_827694B0;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82769660
	if (!cr6.eq) goto loc_82769660;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826da908
	ctx.lr = 0x827694AC;
	sub_826DA908(ctx, base);
	// b 0x82769548
	goto loc_82769548;
loc_827694B0:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// blt cr6,0x827694cc
	if (cr6.lt) goto loc_827694CC;
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(ctx.r11.u32, 81, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82769544
	if (!cr6.gt) goto loc_82769544;
loc_827694CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82769544
	goto loc_82769544;
loc_827694D4:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13056
	ctx.r11.s64 = ctx.r11.s64 + -13056;
loc_827694E0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82769544
	goto loc_82769544;
loc_827694EC:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12928
	ctx.r11.s64 = ctx.r11.s64 + -12928;
	// b 0x827694e0
	goto loc_827694E0;
loc_827694FC:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12544
	ctx.r11.s64 = ctx.r11.s64 + -12544;
	// b 0x827694e0
	goto loc_827694E0;
loc_8276950C:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82769520
	if (!cr0.eq) goto loc_82769520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82769548
	goto loc_82769548;
loc_82769520:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82769540
	if (cr6.eq) goto loc_82769540;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// beq cr6,0x82769540
	if (cr6.eq) goto loc_82769540;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82769544
	if (!cr6.eq) goto loc_82769544;
loc_82769540:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82769544:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82769548:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276964c
	if (cr0.eq) goto loc_8276964C;
loc_82769550:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x827695d4
	goto loc_827695D4;
loc_8276955C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82769570
	if (!cr6.eq) goto loc_82769570;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82769574
	if (cr6.eq) goto loc_82769574;
loc_82769570:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82769574:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769550
	if (cr0.eq) goto loc_82769550;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82769598
	if (cr6.lt) goto loc_82769598;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8276959c
	if (!cr6.gt) goto loc_8276959C;
loc_82769598:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8276959C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82769550
	if (!cr0.eq) goto loc_82769550;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x827695bc
	if (!cr6.eq) goto loc_827695BC;
	// cmpwi cr6,r10,108
	cr6.compare<int32_t>(ctx.r10.s32, 108, ctx.xer);
	// beq cr6,0x82769550
	if (cr6.eq) goto loc_82769550;
loc_827695BC:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826edb48
	ctx.lr = 0x827695CC;
	sub_826EDB48(ctx, base);
	// b 0x8276964c
	goto loc_8276964C;
loc_827695D0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_827695D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827695d0
	if (!cr6.eq) goto loc_827695D0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// b 0x82769620
	goto loc_82769620;
loc_827695FC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827613c8
	ctx.lr = 0x82769618;
	sub_827613C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276964c
	if (cr0.eq) goto loc_8276964C;
loc_82769620:
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82769640
	if (cr6.eq) goto loc_82769640;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82717e60
	ctx.lr = 0x8276963C;
	sub_82717E60(ctx, base);
	// b 0x8276964c
	goto loc_8276964C;
loc_82769640:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8276964C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82769404
	if (!cr6.eq) goto loc_82769404;
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// b 0x82769404
	goto loc_82769404;
loc_82769660:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276966C;
	sub_826C4438(ctx, base);
loc_8276966C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x827696a0
	if (cr6.eq) goto loc_827696A0;
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827696a0
	if (cr0.eq) goto loc_827696A0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826d6be8
	ctx.lr = 0x82769684;
	sub_826D6BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827696ac
	if (cr0.eq) goto loc_827696AC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82766da8
	ctx.lr = 0x827696A0;
	sub_82766DA8(ctx, base);
loc_827696A0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_827696AC:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827696c0
	if (!cr0.eq) goto loc_827696C0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x827696e8
	goto loc_827696E8;
loc_827696C0:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x827696e0
	if (cr6.eq) goto loc_827696E0;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// beq cr6,0x827696e0
	if (cr6.eq) goto loc_827696E0;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x827696e4
	if (!cr6.eq) goto loc_827696E4;
loc_827696E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827696E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_827696E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827697b0
	if (cr0.eq) goto loc_827697B0;
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_827696F4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82769750
	if (cr6.eq) goto loc_82769750;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82769748
	if (cr0.eq) goto loc_82769748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82769730
	if (cr0.eq) goto loc_82769730;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82769734
	if (cr0.eq) goto loc_82769734;
loc_82769730:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82769734:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769748
	if (cr0.eq) goto loc_82769748;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82717f00
	ctx.lr = 0x82769748;
	sub_82717F00(ctx, base);
loc_82769748:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x827696f4
	goto loc_827696F4;
loc_82769750:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_82769754:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827697b0
	if (cr6.eq) goto loc_827697B0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827697a8
	if (cr0.eq) goto loc_827697A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82769790
	if (cr0.eq) goto loc_82769790;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82769794
	if (cr0.eq) goto loc_82769794;
loc_82769790:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82769794:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827697a8
	if (cr0.eq) goto loc_827697A8;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82717f00
	ctx.lr = 0x827697A8;
	sub_82717F00(ctx, base);
loc_827697A8:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82769754
	goto loc_82769754;
loc_827697B0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826da908
	ctx.lr = 0x827697B8;
	sub_826DA908(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769874
	if (cr0.eq) goto loc_82769874;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r28,20(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// b 0x8276985c
	goto loc_8276985C;
loc_827697CC:
	// addi r11,r29,40
	ctx.r11.s64 = ctx.r29.s64 + 40;
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x827697ec
	if (cr0.eq) goto loc_827697EC;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_827697EC:
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
	// beq 0x82769854
	if (cr0.eq) goto loc_82769854;
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// b 0x82769840
	goto loc_82769840;
loc_82769810:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13696
	ctx.r11.s64 = ctx.r11.s64 + -13696;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769838
	if (cr0.eq) goto loc_82769838;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82717e60
	ctx.lr = 0x82769838;
	sub_82717E60(ctx, base);
loc_82769838:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_82769840:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276984c
	if (cr0.eq) goto loc_8276984C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8276984C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82769810
	if (!cr6.eq) goto loc_82769810;
loc_82769854:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8276985C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82769868
	if (cr0.eq) goto loc_82769868;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82769868:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x827697cc
	if (!cr6.eq) goto loc_827697CC;
loc_82769874:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82717e60
	ctx.lr = 0x82769884;
	sub_82717E60(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826d6be8
	ctx.lr = 0x8276988C;
	sub_826D6BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827696a0
	if (cr0.eq) goto loc_827696A0;
	// addi r31,r21,36
	ctx.r31.s64 = ctx.r21.s64 + 36;
loc_82769898:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827696a0
	if (!cr6.lt) goto loc_827696A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82717e60
	ctx.lr = 0x827698BC;
	sub_82717E60(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82769898
	goto loc_82769898;
}

__attribute__((alias("__imp__sub_827698C8"))) PPC_WEAK_FUNC(sub_827698C8);
PPC_FUNC_IMPL(__imp__sub_827698C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827698D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82769944
	if (cr0.eq) goto loc_82769944;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r10,17
	cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bne cr6,0x82769924
	if (!cr6.eq) goto loc_82769924;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82769940
	if (cr0.eq) goto loc_82769940;
	// li r4,3557
	ctx.r4.s64 = 3557;
	// b 0x82769938
	goto loc_82769938;
loc_82769924:
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bne cr6,0x82769944
	if (!cr6.eq) goto loc_82769944;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82769940
	if (cr0.eq) goto loc_82769940;
	// li r4,3558
	ctx.r4.s64 = 3558;
loc_82769938:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826c4438
	ctx.lr = 0x82769940;
	sub_826C4438(ctx, base);
loc_82769940:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82769944:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82769988
	if (cr6.eq) goto loc_82769988;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276997c
	if (cr0.eq) goto loc_8276997C;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276997c
	if (!cr0.eq) goto loc_8276997C;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769978
	if (cr0.eq) goto loc_82769978;
	// li r4,3556
	ctx.r4.s64 = 3556;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826c4438
	ctx.lr = 0x82769978;
	sub_826C4438(ctx, base);
loc_82769978:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8276997C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82769988:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769b58
	if (cr0.eq) goto loc_82769B58;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq 0x827699a4
	if (cr0.eq) goto loc_827699A4;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x826c4438
	ctx.lr = 0x827699A4;
	sub_826C4438(ctx, base);
loc_827699A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,2548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82762bb0
	ctx.lr = 0x827699C8;
	sub_82762BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826e1fa8
	ctx.lr = 0x827699D4;
	sub_826E1FA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r10,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826e1a20
	ctx.lr = 0x827699F0;
	sub_826E1A20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826f8298
	ctx.lr = 0x82769A14;
	sub_826F8298(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82769A1C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82769a5c
	if (cr6.eq) goto loc_82769A5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82769a3c
	if (!cr0.eq) goto loc_82769A3C;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82769a40
	if (cr0.eq) goto loc_82769A40;
loc_82769A3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82769A40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769a54
	if (cr0.eq) goto loc_82769A54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826ed298
	ctx.lr = 0x82769A54;
	sub_826ED298(ctx, base);
loc_82769A54:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82769a1c
	goto loc_82769A1C;
loc_82769A5C:
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
loc_82769A60:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82769ad0
	if (cr0.eq) goto loc_82769AD0;
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
	// beq 0x82769abc
	if (cr0.eq) goto loc_82769ABC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82769a98
	goto loc_82769A98;
loc_82769A94:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_82769A98:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82769a94
	if (!cr6.eq) goto loc_82769A94;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
loc_82769ABC:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82769a60
	if (!cr6.eq) goto loc_82769A60;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82769a60
	goto loc_82769A60;
loc_82769AD0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769b00
	if (cr0.eq) goto loc_82769B00;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lhz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// sth r11,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r11.u16);
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwimi r10,r11,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_82769B00:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769b4c
	if (cr0.eq) goto loc_82769B4C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
loc_82769B24:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82769b34
	if (!cr6.eq) goto loc_82769B34;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82769B34:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82769b24
	if (!cr0.eq) goto loc_82769B24;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_82769B4C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82766f68
	ctx.lr = 0x82769B58;
	sub_82766F68(ctx, base);
loc_82769B58:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82769B64"))) PPC_WEAK_FUNC(sub_82769B64);
PPC_FUNC_IMPL(__imp__sub_82769B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82769B68"))) PPC_WEAK_FUNC(sub_82769B68);
PPC_FUNC_IMPL(__imp__sub_82769B68) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f0
	ctx.lr = 0x82769B70;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// stw r28,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r28.u32);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// bl 0x826d6af8
	ctx.lr = 0x82769BAC;
	sub_826D6AF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// ori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 | 1;
	// ori r10,r29,1
	ctx.r10.u64 = ctx.r29.u64 | 1;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82769BD0:
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82769d5c
	if (cr6.eq) goto loc_82769D5C;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82769BDC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82769d5c
	if (cr6.eq) goto loc_82769D5C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8275f778
	ctx.lr = 0x82769C08;
	sub_8275F778(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82769cb4
	if (!cr6.eq) goto loc_82769CB4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// addi r10,r10,-13696
	ctx.r10.s64 = ctx.r10.s64 + -13696;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82769cb4
	if (cr0.eq) goto loc_82769CB4;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82769cb4
	if (cr6.eq) goto loc_82769CB4;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82769d54
	if (!cr0.eq) goto loc_82769D54;
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769c64
	if (cr0.eq) goto loc_82769C64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82769c70
	goto loc_82769C70;
loc_82769C64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_82769C70:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82769c8c
	if (cr6.eq) goto loc_82769C8C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82769c98
	if (!cr6.gt) goto loc_82769C98;
loc_82769C8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d7920
	ctx.lr = 0x82769C98;
	sub_826D7920(ctx, base);
loc_82769C98:
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
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// b 0x82769d54
	goto loc_82769D54;
loc_82769CB4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82769d48
	if (cr6.eq) goto loc_82769D48;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82769cd8
	if (!cr6.eq) goto loc_82769CD8;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82769cd8
	if (!cr6.eq) goto loc_82769CD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x82769d54
	if (cr6.eq) goto loc_82769D54;
loc_82769CD8:
	// lwz r28,0(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82769CE8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82769e00
	if (cr6.eq) goto loc_82769E00;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8275f778
	ctx.lr = 0x82769D14;
	sub_8275F778(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82769dec
	if (cr6.eq) goto loc_82769DEC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82769d40
	if (!cr6.eq) goto loc_82769D40;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82769d40
	if (!cr6.eq) goto loc_82769D40;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82769df8
	if (cr6.eq) goto loc_82769DF8;
loc_82769D40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82769e20
	goto loc_82769E20;
loc_82769D48:
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82769D54:
	// lwz r27,4(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x82769bdc
	goto loc_82769BDC;
loc_82769D5C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82769d6c
	if (cr0.eq) goto loc_82769D6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82769D6C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82769e10
	if (!cr0.eq) goto loc_82769E10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82769d88
	if (cr6.eq) goto loc_82769D88;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82769d94
	goto loc_82769D94;
loc_82769D88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82769D94:
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
	// bne 0x82769bd0
	if (!cr0.eq) goto loc_82769BD0;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	ctx.lr = 0x82769DE8;
	sub_826D6E10(ctx, base);
	// b 0x82769bd0
	goto loc_82769BD0;
loc_82769DEC:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82769DF8:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82769ce8
	goto loc_82769CE8;
loc_82769E00:
	// stw r31,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r31.u32);
	// stw r30,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r30.u32);
	// stw r29,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r29.u32);
	// b 0x82769e1c
	goto loc_82769E1C;
loc_82769E10:
	// stw r26,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r26.u32);
	// stw r24,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r24.u32);
	// stw r25,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r25.u32);
loc_82769E1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82769E20:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d2840
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82769E28"))) PPC_WEAK_FUNC(sub_82769E28);
PPC_FUNC_IMPL(__imp__sub_82769E28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x82769E30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r27,107
	ctx.r27.s64 = 107;
	// b 0x82769ed8
	goto loc_82769ED8;
loc_82769E50:
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x82769e64
	if (cr6.eq) goto loc_82769E64;
	// cmplwi cr6,r11,119
	cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82769e68
	if (!cr6.eq) goto loc_82769E68;
loc_82769E64:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82769E68:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82769ef0
	if (!cr0.eq) goto loc_82769EF0;
	// addi r11,r11,-108
	ctx.r11.s64 = ctx.r11.s64 + -108;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82769ef0
	if (!cr0.eq) goto loc_82769EF0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13696
	ctx.r11.s64 = ctx.r11.s64 + -13696;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82769ef0
	if (!cr0.eq) goto loc_82769EF0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82769ef0
	if (!cr6.eq) goto loc_82769EF0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82763f80
	ctx.lr = 0x82769EB8;
	sub_82763F80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769efc
	if (cr0.eq) goto loc_82769EFC;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82769ED8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82769e50
	if (cr0.eq) goto loc_82769E50;
loc_82769EF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82769EF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_82769EFC:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82767708
	ctx.lr = 0x82769F14;
	sub_82767708(ctx, base);
	// b 0x82769ef4
	goto loc_82769EF4;
}

__attribute__((alias("__imp__sub_82769F18"))) PPC_WEAK_FUNC(sub_82769F18);
PPC_FUNC_IMPL(__imp__sub_82769F18) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82769F20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// b 0x82769f54
	goto loc_82769F54;
loc_82769F3C:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82769F54:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82763f80
	ctx.lr = 0x82769F64;
	sub_82763F80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82769f3c
	if (!cr0.eq) goto loc_82769F3C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82767a38
	ctx.lr = 0x82769F84;
	sub_82767A38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82769F8C"))) PPC_WEAK_FUNC(sub_82769F8C);
PPC_FUNC_IMPL(__imp__sub_82769F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82769F90"))) PPC_WEAK_FUNC(sub_82769F90);
PPC_FUNC_IMPL(__imp__sub_82769F90) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82769F98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82705e30
	ctx.lr = 0x82769FB4;
	sub_82705E30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82769fec
	if (cr0.eq) goto loc_82769FEC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82763f80
	ctx.lr = 0x82769FCC;
	sub_82763F80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82769fec
	if (!cr0.eq) goto loc_82769FEC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82769f18
	ctx.lr = 0x82769FEC;
	sub_82769F18(ctx, base);
loc_82769FEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82769FF4"))) PPC_WEAK_FUNC(sub_82769FF4);
PPC_FUNC_IMPL(__imp__sub_82769FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82769FF8"))) PPC_WEAK_FUNC(sub_82769FF8);
PPC_FUNC_IMPL(__imp__sub_82769FF8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f4
	ctx.lr = 0x8276A000;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// beq cr6,0x8276a2c4
	if (cr6.eq) goto loc_8276A2C4;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8276a1d8
	if (!cr6.gt) goto loc_8276A1D8;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// ble cr6,0x8276a1b4
	if (!cr6.gt) goto loc_8276A1B4;
	// cmpwi cr6,r11,107
	cr6.compare<int32_t>(ctx.r11.s32, 107, ctx.xer);
	// bne cr6,0x8276a1d8
	if (!cr6.eq) goto loc_8276A1D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// li r25,13696
	ctx.r25.s64 = 13696;
	// lfs f30,2548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f30.f64 = double(temp.f32);
loc_8276A070:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x8276a1d8
	if (cr0.eq) goto loc_8276A1D8;
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// subf r11,r20,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r20.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276a1a0
	if (cr0.eq) goto loc_8276A1A0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276a1a0
	if (cr0.eq) goto loc_8276A1A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f1,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8275ece0
	ctx.lr = 0x8276A0C0;
	sub_8275ECE0(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_8276A0C8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276a158
	if (cr6.eq) goto loc_8276A158;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276a1a0
	if (cr0.eq) goto loc_8276A1A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276a1a0
	if (cr0.eq) goto loc_8276A1A0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276a1a0
	if (!cr6.eq) goto loc_8276A1A0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// addi r10,r10,-15360
	ctx.r10.s64 = ctx.r10.s64 + -15360;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276a1a0
	if (cr0.eq) goto loc_8276A1A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8275ece0
	ctx.lr = 0x8276A13C;
	sub_8275ECE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8275ece0
	ctx.lr = 0x8276A148;
	sub_8275ECE0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bne cr6,0x8276a1a0
	if (!cr6.eq) goto loc_8276A1A0;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8276a0c8
	goto loc_8276A0C8;
loc_8276A158:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82760f90
	ctx.lr = 0x8276A164;
	sub_82760F90(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82762bb0
	ctx.lr = 0x8276A184;
	sub_82762BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826e20d0
	ctx.lr = 0x8276A194;
	sub_826E20D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276A1A0;
	sub_826ED298(ctx, base);
loc_8276A1A0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8276a070
	if (!cr6.eq) goto loc_8276A070;
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// b 0x8276a070
	goto loc_8276A070;
loc_8276A1B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f0,2548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8276a1d4
	if (cr6.eq) goto loc_8276A1D4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8276A1D4:
	// clrlwi r21,r11,24
	ctx.r21.u64 = ctx.r11.u32 & 0xFF;
loc_8276A1D8:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82762bb0
	ctx.lr = 0x8276A1E8;
	sub_82762BB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x827693d0
	ctx.lr = 0x8276A20C;
	sub_827693D0(ctx, base);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276a2a4
	if (cr0.eq) goto loc_8276A2A4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8276A220:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8276a2a0
	if (cr0.eq) goto loc_8276A2A0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r20,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r20.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276a28c
	if (cr0.eq) goto loc_8276A28C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276a260
	if (cr0.eq) goto loc_8276A260;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8276a264
	if (cr0.eq) goto loc_8276A264;
loc_8276A260:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8276A264:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276a28c
	if (cr0.eq) goto loc_8276A28C;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827671c8
	ctx.lr = 0x8276A27C;
	sub_827671C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// rlwimi r11,r30,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8276A28C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8276a220
	if (!cr6.eq) goto loc_8276A220;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// b 0x8276a220
	goto loc_8276A220;
loc_8276A2A0:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_8276A2A4:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_8276A2A8:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// std r11,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r11.u64);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x828d2844
	__restgprlr_19(ctx, base);
	return;
loc_8276A2C4:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_8276A2C8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8276a2a8
	if (cr6.eq) goto loc_8276A2A8;
	// lwz r29,16(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// subf r11,r20,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r20.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276a444
	if (cr0.eq) goto loc_8276A444;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14464
	ctx.r11.s64 = ctx.r11.s64 + -14464;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276a444
	if (cr0.eq) goto loc_8276A444;
	// lwz r26,36(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r31,12(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15232
	ctx.r11.s64 = ctx.r11.s64 + -15232;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276a444
	if (cr0.eq) goto loc_8276A444;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f31,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276A340;
	sub_826D6610(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276A35C;
	sub_826D6610(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,-8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r10,r10,17,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FFF;
	// clrlwi r4,r9,17
	ctx.r4.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82763e08
	ctx.lr = 0x8276A398;
	sub_82763E08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8276a444
	if (cr0.eq) goto loc_8276A444;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
loc_8276A3A4:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8276a444
	if (cr0.eq) goto loc_8276A444;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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
	// beq 0x8276a430
	if (cr0.eq) goto loc_8276A430;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276a3e4
	if (!cr0.eq) goto loc_8276A3E4;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// beq 0x8276a3e8
	if (cr0.eq) goto loc_8276A3E8;
loc_8276A3E4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8276A3E8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276a430
	if (cr0.eq) goto loc_8276A430;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// bl 0x827613c8
	ctx.lr = 0x8276A41C;
	sub_827613C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276a430
	if (!cr0.eq) goto loc_8276A430;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8276A430:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8276a3a4
	if (!cr6.eq) goto loc_8276A3A4;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// b 0x8276a3a4
	goto loc_8276A3A4;
loc_8276A444:
	// lwz r25,8(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// b 0x8276a2c8
	goto loc_8276A2C8;
}

__attribute__((alias("__imp__sub_8276A44C"))) PPC_WEAK_FUNC(sub_8276A44C);
PPC_FUNC_IMPL(__imp__sub_8276A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276A450"))) PPC_WEAK_FUNC(sub_8276A450);
PPC_FUNC_IMPL(__imp__sub_8276A450) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x8276A458;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r8,228
	ctx.r8.s64 = 228;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x8276a49c
	if (cr6.eq) goto loc_8276A49C;
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// beq cr6,0x8276a49c
	if (cr6.eq) goto loc_8276A49C;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8276a4a0
	if (!cr6.eq) goto loc_8276A4A0;
loc_8276A49C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8276A4A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276a4e8
	if (cr0.eq) goto loc_8276A4E8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276A4C0;
	sub_826D6610(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r9,r11,-20
	ctx.r9.s64 = ctx.r11.s64 + -20;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lbz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// b 0x8276a55c
	goto loc_8276A55C;
loc_8276A4E8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r10,r10,3871
	ctx.r10.u64 = ctx.r10.u64 | 253689856;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// ori r10,r10,61440
	ctx.r10.u64 = ctx.r10.u64 | 61440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,98
	cr6.compare<uint32_t>(ctx.r10.u32, 98, ctx.xer);
	// beq cr6,0x8276a550
	if (cr6.eq) goto loc_8276A550;
	// cmplwi cr6,r10,101
	cr6.compare<uint32_t>(ctx.r10.u32, 101, ctx.xer);
	// beq cr6,0x8276a544
	if (cr6.eq) goto loc_8276A544;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// beq cr6,0x8276a538
	if (cr6.eq) goto loc_8276A538;
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x826c4438
	ctx.lr = 0x8276A538;
	sub_826C4438(ctx, base);
loc_8276A538:
	// li r10,13
	ctx.r10.s64 = 13;
	// rlwimi r11,r10,1,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// b 0x8276a558
	goto loc_8276A558;
loc_8276A544:
	// li r10,25
	ctx.r10.s64 = 25;
	// rlwimi r11,r10,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// b 0x8276a558
	goto loc_8276A558;
loc_8276A550:
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,3,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
loc_8276A558:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8276A55C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276a57c
	if (!cr6.gt) goto loc_8276A57C;
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x8276a580
	goto loc_8276A580;
loc_8276A57C:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
loc_8276A580:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8276A584:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276a778
	if (cr6.eq) goto loc_8276A778;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r7,r7,0
	ctx.r7.s64 = ctx.r7.s64 + 0;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x8276a5c4
	if (cr0.eq) goto loc_8276A5C4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne 0x8276a5cc
	if (!cr0.eq) goto loc_8276A5CC;
loc_8276A5C4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8276a584
	goto loc_8276A584;
loc_8276A5CC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r6,r7,27,14,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 27) & 0x3F000) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// andi. r7,r11,9
	ctx.r7.u64 = ctx.r11.u64 & 9;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x8276a604
	if (cr0.eq) goto loc_8276A604;
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x826c4438
	ctx.lr = 0x8276A604;
	sub_826C4438(ctx, base);
loc_8276A604:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276a618
	if (cr0.eq) goto loc_8276A618;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8276A618:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8276a63c
	if (cr0.eq) goto loc_8276A63C;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r6,r6,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF8;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// b 0x8276a644
	goto loc_8276A644;
loc_8276A63C:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r7,r7,7
	ctx.r7.u64 = ctx.r7.u64 | 7;
loc_8276A644:
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq 0x8276a660
	if (cr0.eq) goto loc_8276A660;
	// rlwimi r7,r8,1,27,28
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0x18) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFE7);
	// rlwinm r7,r7,0,27,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x8276a664
	goto loc_8276A664;
loc_8276A660:
	// ori r7,r7,56
	ctx.r7.u64 = ctx.r7.u64 | 56;
loc_8276A664:
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// rlwinm. r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq 0x8276a680
	if (cr0.eq) goto loc_8276A680;
	// rlwimi r7,r8,2,24,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xC0) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r7,r7,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// b 0x8276a684
	goto loc_8276A684;
loc_8276A680:
	// ori r7,r7,448
	ctx.r7.u64 = ctx.r7.u64 | 448;
loc_8276A684:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// beq 0x8276a6a0
	if (cr0.eq) goto loc_8276A6A0;
	// rlwimi r11,r8,3,21,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0x600) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF9FF);
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// b 0x8276a6a4
	goto loc_8276A6A4;
loc_8276A6A0:
	// ori r11,r11,3584
	ctx.r11.u64 = ctx.r11.u64 | 3584;
loc_8276A6A4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8276a784
	if (cr6.eq) goto loc_8276A784;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276a70c
	if (cr0.eq) goto loc_8276A70C;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8276a700
	if (cr6.lt) goto loc_8276A700;
	// beq cr6,0x8276a6f4
	if (cr6.eq) goto loc_8276A6F4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8276a6e8
	if (cr6.lt) goto loc_8276A6E8;
	// bne cr6,0x8276a70c
	if (!cr6.eq) goto loc_8276A70C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r27,11,20,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 11) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x8276a708
	goto loc_8276A708;
loc_8276A6E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r27,8,23,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 8) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// b 0x8276a708
	goto loc_8276A708;
loc_8276A6F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r27,5,26,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 5) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// b 0x8276a708
	goto loc_8276A708;
loc_8276A700:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r27,2,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 2) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
loc_8276A708:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8276A70C:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm. r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276a784
	if (cr0.eq) goto loc_8276A784;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8276a768
	if (cr6.lt) goto loc_8276A768;
	// beq cr6,0x8276a758
	if (cr6.eq) goto loc_8276A758;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8276a748
	if (cr6.lt) goto loc_8276A748;
	// bne cr6,0x8276a784
	if (!cr6.eq) goto loc_8276A784;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwimi r11,r9,9,20,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 9) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x8276a780
	goto loc_8276A780;
loc_8276A748:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwimi r11,r9,6,23,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// b 0x8276a780
	goto loc_8276A780;
loc_8276A758:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwimi r11,r9,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// b 0x8276a780
	goto loc_8276A780;
loc_8276A768:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwimi r11,r9,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// b 0x8276a780
	goto loc_8276A780;
loc_8276A778:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r11,r11,4095
	ctx.r11.u64 = ctx.r11.u64 | 4095;
loc_8276A780:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8276A784:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8276a7e8
	if (cr6.eq) goto loc_8276A7E8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r9,r11,20,21,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x7E0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF81F);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm. r9,r11,0,28,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276a7c0
	if (cr0.eq) goto loc_8276A7C0;
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x826c4438
	ctx.lr = 0x8276A7C0;
	sub_826C4438(ctx, base);
loc_8276A7C0:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276a7d4
	if (cr0.eq) goto loc_8276A7D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8276A7D4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8276A7E8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8276a844
	if (cr6.eq) goto loc_8276A844;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r10,3,7,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8276a844
	if (cr0.eq) goto loc_8276A844;
	// rlwinm r11,r11,0,7,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00000;
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276a844
	if (cr6.lt) goto loc_8276A844;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276a844
	if (cr0.eq) goto loc_8276A844;
	// stw r27,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
loc_8276A844:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276a884
	if (cr0.eq) goto loc_8276A884;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r11,r11,4,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276a884
	if (!cr0.eq) goto loc_8276A884;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8276a8a4
	goto loc_8276A8A4;
loc_8276A884:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r11,13,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 13) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r10,r11,14,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8276A8A4:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827698c8
	ctx.lr = 0x8276A8B8;
	sub_827698C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276A8C0"))) PPC_WEAK_FUNC(sub_8276A8C0);
PPC_FUNC_IMPL(__imp__sub_8276A8C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8276A8C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276a97c
	if (!cr0.eq) goto loc_8276A97C;
	// rlwinm. r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276a97c
	if (!cr0.eq) goto loc_8276A97C;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// blt cr6,0x8276a918
	if (cr6.lt) goto loc_8276A918;
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bgt cr6,0x8276a918
	if (cr6.gt) goto loc_8276A918;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8276A918:
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276a97c
	if (!cr0.eq) goto loc_8276A97C;
	// addi r11,r11,-120
	ctx.r11.s64 = ctx.r11.s64 + -120;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276a97c
	if (!cr0.eq) goto loc_8276A97C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82763fd0
	ctx.lr = 0x8276A93C;
	sub_82763FD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276a980
	if (!cr6.eq) goto loc_8276A980;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82769ff8
	ctx.lr = 0x8276A974;
	sub_82769FF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8276a988
	goto loc_8276A988;
loc_8276A97C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8276A980:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_8276A988:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276A990"))) PPC_WEAK_FUNC(sub_8276A990);
PPC_FUNC_IMPL(__imp__sub_8276A990) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8276A998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d6b88
	ctx.lr = 0x8276A9AC;
	sub_826D6B88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82764e58
	ctx.lr = 0x8276A9C0;
	sub_82764E58(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8276a9d4
	if (!cr0.eq) goto loc_8276A9D4;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276A9D4;
	sub_826C4438(ctx, base);
loc_8276A9D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8276a9e4
	goto loc_8276A9E4;
loc_8276A9E0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_8276A9E4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8276a9e0
	if (!cr6.eq) goto loc_8276A9E0;
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
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,14,12
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r10.u64 & 0x40000);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276aa30
	if (cr0.eq) goto loc_8276AA30;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8276AA30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276AA38"))) PPC_WEAK_FUNC(sub_8276AA38);
PPC_FUNC_IMPL(__imp__sub_8276AA38) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x8276AA40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276aa5c
	if (cr0.eq) goto loc_8276AA5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276AA5C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276aad0
	if (cr6.eq) goto loc_8276AAD0;
loc_8276AA68:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r10,r10,-13568
	ctx.r10.s64 = ctx.r10.s64 + -13568;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276aab4
	if (cr0.eq) goto loc_8276AAB4;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276aab4
	if (cr0.eq) goto loc_8276AAB4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x826e1b70
	ctx.lr = 0x8276AA94;
	sub_826E1B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1be8
	ctx.lr = 0x8276AAA0;
	sub_826E1BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e2258
	ctx.lr = 0x8276AAAC;
	sub_826E2258(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8276aadc
	if (cr6.eq) goto loc_8276AADC;
loc_8276AAB4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276aac8
	if (cr0.eq) goto loc_8276AAC8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8276AAC8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8276aa68
	if (!cr6.eq) goto loc_8276AA68;
loc_8276AAD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8276AAD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
loc_8276AADC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8276aad4
	goto loc_8276AAD4;
}

__attribute__((alias("__imp__sub_8276AAE4"))) PPC_WEAK_FUNC(sub_8276AAE4);
PPC_FUNC_IMPL(__imp__sub_8276AAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276AAE8"))) PPC_WEAK_FUNC(sub_8276AAE8);
PPC_FUNC_IMPL(__imp__sub_8276AAE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x8276AAF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ab0c
	if (cr0.eq) goto loc_8276AB0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276AB0C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276acc8
	if (cr6.eq) goto loc_8276ACC8;
	// li r25,13696
	ctx.r25.s64 = 13696;
loc_8276AB1C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276aca8
	if (cr0.eq) goto loc_8276ACA8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,14(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// bl 0x826e1be8
	ctx.lr = 0x8276AB40;
	sub_826E1BE8(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ab58
	if (cr0.eq) goto loc_8276AB58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276AB58:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276aca8
	if (cr6.eq) goto loc_8276ACA8;
loc_8276AB64:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8276aca8
	if (cr6.eq) goto loc_8276ACA8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ac20
	if (cr0.eq) goto loc_8276AC20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// bl 0x826e1be8
	ctx.lr = 0x8276AB90;
	sub_826E1BE8(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8276ac20
	if (!cr6.eq) goto loc_8276AC20;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
loc_8276AB9C:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276ac0c
	if (cr0.eq) goto loc_8276AC0C;
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
	// beq 0x8276abf8
	if (cr0.eq) goto loc_8276ABF8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8276abd4
	goto loc_8276ABD4;
loc_8276ABD0:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_8276ABD4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276abd0
	if (!cr6.eq) goto loc_8276ABD0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
loc_8276ABF8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276ab9c
	if (!cr6.eq) goto loc_8276AB9C;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8276ab9c
	goto loc_8276AB9C;
loc_8276AC0C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82766da8
	ctx.lr = 0x8276AC20;
	sub_82766DA8(ctx, base);
loc_8276AC20:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8276ac58
	if (cr6.eq) goto loc_8276AC58;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8276ac40
	if (!cr0.eq) goto loc_8276AC40;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8276AC40:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276ac70
	if (cr6.eq) goto loc_8276AC70;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276ac9c
	if (!cr0.eq) goto loc_8276AC9C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x8276aca0
	goto loc_8276ACA0;
loc_8276AC58:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ac68
	if (cr0.eq) goto loc_8276AC68;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276AC68:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276ac90
	if (!cr6.eq) goto loc_8276AC90;
loc_8276AC70:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ac88
	if (cr0.eq) goto loc_8276AC88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276AC88:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8276aca0
	goto loc_8276ACA0;
loc_8276AC90:
	// lwz r31,20(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276aca0
	if (cr0.eq) goto loc_8276ACA0;
loc_8276AC9C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8276ACA0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8276ab64
	if (!cr6.eq) goto loc_8276AB64;
loc_8276ACA8:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276acbc
	if (cr0.eq) goto loc_8276ACBC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276ACBC:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276ab1c
	if (!cr6.eq) goto loc_8276AB1C;
loc_8276ACC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276ACD0"))) PPC_WEAK_FUNC(sub_8276ACD0);
PPC_FUNC_IMPL(__imp__sub_8276ACD0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276ace4
	if (!cr0.eq) goto loc_8276ACE4;
loc_8276ACDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8276ACE4:
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// b 0x8276ad0c
	goto loc_8276AD0C;
loc_8276ACEC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// addi r10,r10,-13696
	ctx.r10.s64 = ctx.r10.s64 + -13696;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276acdc
	if (cr0.eq) goto loc_8276ACDC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_8276AD0C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ad18
	if (cr0.eq) goto loc_8276AD18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276AD18:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276acec
	if (!cr6.eq) goto loc_8276ACEC;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// b 0x8276ad3c
	goto loc_8276AD3C;
loc_8276AD28:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276acdc
	if (!cr0.eq) goto loc_8276ACDC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_8276AD3C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ad48
	if (cr0.eq) goto loc_8276AD48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276AD48:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276ad28
	if (!cr6.eq) goto loc_8276AD28;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276AD58"))) PPC_WEAK_FUNC(sub_8276AD58);
PPC_FUNC_IMPL(__imp__sub_8276AD58) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276ad98
	if (cr0.eq) goto loc_8276AD98;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8276AD98:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276ADA8"))) PPC_WEAK_FUNC(sub_8276ADA8);
PPC_FUNC_IMPL(__imp__sub_8276ADA8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x8276ADB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276ADDC;
	sub_82761AA0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276ae14
	if (cr0.eq) goto loc_8276AE14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x826db258
	ctx.lr = 0x8276AE10;
	sub_826DB258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8276AE14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276AE1C;
	sub_826ED298(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276ae50
	if (cr0.eq) goto loc_8276AE50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x826db258
	ctx.lr = 0x8276AE4C;
	sub_826DB258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8276AE50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276AE58;
	sub_826ED298(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276ae8c
	if (cr0.eq) goto loc_8276AE8C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x826db258
	ctx.lr = 0x8276AE88;
	sub_826DB258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8276AE8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276AE94;
	sub_826ED298(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8276aeec
	if (cr6.eq) goto loc_8276AEEC;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,-28
	ctx.r10.s64 = ctx.r27.s64 + -28;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_8276AEEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276AEF8"))) PPC_WEAK_FUNC(sub_8276AEF8);
PPC_FUNC_IMPL(__imp__sub_8276AEF8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x8276AF00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276AF2C;
	sub_82761AA0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276af64
	if (cr0.eq) goto loc_8276AF64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x826db258
	ctx.lr = 0x8276AF60;
	sub_826DB258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8276AF64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276AF6C;
	sub_826ED298(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276afa0
	if (cr0.eq) goto loc_8276AFA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x826db258
	ctx.lr = 0x8276AF9C;
	sub_826DB258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8276AFA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276AFA8;
	sub_826ED298(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276afdc
	if (cr0.eq) goto loc_8276AFDC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x826db258
	ctx.lr = 0x8276AFD8;
	sub_826DB258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8276AFDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276AFE4;
	sub_826ED298(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8276b03c
	if (cr6.eq) goto loc_8276B03C;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,-28
	ctx.r10.s64 = ctx.r27.s64 + -28;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_8276B03C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276B048"))) PPC_WEAK_FUNC(sub_8276B048);
PPC_FUNC_IMPL(__imp__sub_8276B048) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x8276B050;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276B078;
	sub_82761AA0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276b0b0
	if (cr0.eq) goto loc_8276B0B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x826db258
	ctx.lr = 0x8276B0AC;
	sub_826DB258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8276B0B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276B0B8;
	sub_826ED298(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276b0ec
	if (cr0.eq) goto loc_8276B0EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x826db258
	ctx.lr = 0x8276B0E8;
	sub_826DB258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8276B0EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276B0F4;
	sub_826ED298(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// addi r11,r26,24
	ctx.r11.s64 = ctx.r26.s64 + 24;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-28
	ctx.r6.s64 = ctx.r10.s64 + -28;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// addi r7,r11,-28
	ctx.r7.s64 = ctx.r11.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276B140"))) PPC_WEAK_FUNC(sub_8276B140);
PPC_FUNC_IMPL(__imp__sub_8276B140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8276B148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276B170;
	sub_82761AA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826f2c20
	ctx.lr = 0x8276B188;
	sub_826F2C20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276B194"))) PPC_WEAK_FUNC(sub_8276B194);
PPC_FUNC_IMPL(__imp__sub_8276B194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276B198"))) PPC_WEAK_FUNC(sub_8276B198);
PPC_FUNC_IMPL(__imp__sub_8276B198) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8276B1A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,65
	ctx.r6.s64 = 65;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276B1C4;
	sub_82761AA0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
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
	// beq 0x8276b1f8
	if (cr0.eq) goto loc_8276B1F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x826db258
	ctx.lr = 0x8276B1F4;
	sub_826DB258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8276B1F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276B200;
	sub_826ED298(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-28
	ctx.r6.s64 = ctx.r10.s64 + -28;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// addi r7,r11,-28
	ctx.r7.s64 = ctx.r11.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276B24C"))) PPC_WEAK_FUNC(sub_8276B24C);
PPC_FUNC_IMPL(__imp__sub_8276B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276B250"))) PPC_WEAK_FUNC(sub_8276B250);
PPC_FUNC_IMPL(__imp__sub_8276B250) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x8276B258;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,84
	cr6.compare<int32_t>(ctx.r11.s32, 84, ctx.xer);
	// bne cr6,0x8276b288
	if (!cr6.eq) goto loc_8276B288;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8276b498
	goto loc_8276B498;
loc_8276B288:
	// cmpwi cr6,r11,85
	cr6.compare<int32_t>(ctx.r11.s32, 85, ctx.xer);
	// bne cr6,0x8276b298
	if (!cr6.eq) goto loc_8276B298;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8276b498
	goto loc_8276B498;
loc_8276B298:
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// beq cr6,0x8276b2a8
	if (cr6.eq) goto loc_8276B2A8;
loc_8276B2A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8276b498
	goto loc_8276B498;
loc_8276B2A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r27,r10,14,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276B2C0;
	sub_826D6610(ctx, base);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r31,-8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
loc_8276B2CC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276b2e8
	if (cr6.eq) goto loc_8276B2E8;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8276b2ec
	if (!cr6.eq) goto loc_8276B2EC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8276b2cc
	goto loc_8276B2CC;
loc_8276B2E8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8276B2EC:
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r26,r10,13
	ctx.r26.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// bne 0x8276b310
	if (!cr0.eq) goto loc_8276B310;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8276B310:
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276b334
	if (cr0.eq) goto loc_8276B334;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8276b48c
	goto loc_8276B48C;
loc_8276B334:
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// clrlwi r28,r10,13
	ctx.r28.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276b350
	if (cr0.eq) goto loc_8276B350;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276B350:
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
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
	// beq 0x8276b38c
	if (cr0.eq) goto loc_8276B38C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// li r3,5
	ctx.r3.s64 = 5;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// b 0x8276b498
	goto loc_8276B498;
loc_8276B38C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827068b0
	ctx.lr = 0x8276B398;
	sub_827068B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276b3b4
	if (!cr0.eq) goto loc_8276B3B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827068b0
	ctx.lr = 0x8276B3AC;
	sub_827068B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b2a0
	if (cr0.eq) goto loc_8276B2A0;
loc_8276B3B4:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8276B3B8:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8276b408
	if (cr6.eq) goto loc_8276B408;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8276b3dc
	if (cr0.eq) goto loc_8276B3DC;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
loc_8276B3DC:
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// rlwinm r7,r9,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276b400
	if (!cr0.eq) goto loc_8276B400;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x8276b3b8
	goto loc_8276B3B8;
loc_8276B400:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276b480
	if (!cr6.eq) goto loc_8276B480;
loc_8276B408:
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_8276B40C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8276b454
	if (cr6.eq) goto loc_8276B454;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8276b430
	if (cr0.eq) goto loc_8276B430;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
loc_8276B430:
	// addi r9,r26,1
	ctx.r9.s64 = ctx.r26.s64 + 1;
	// rlwinm r7,r9,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276b45c
	if (!cr0.eq) goto loc_8276B45C;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x8276b40c
	goto loc_8276B40C;
loc_8276B454:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276b480
	goto loc_8276B480;
loc_8276B45C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276b480
	if (cr6.eq) goto loc_8276B480;
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// clrlwi r27,r9,24
	ctx.r27.u64 = ctx.r9.u32 & 0xFF;
loc_8276B480:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
loc_8276B48C:
	// stb r27,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r27.u8);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
loc_8276B498:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276B4A0"))) PPC_WEAK_FUNC(sub_8276B4A0);
PPC_FUNC_IMPL(__imp__sub_8276B4A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8276B4A8;
	__savegprlr_28(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276b4c0
	if (cr0.eq) goto loc_8276B4C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276B4C0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276b634
	if (cr6.eq) goto loc_8276B634;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// clrlwi r30,r11,13
	ctx.r30.u64 = ctx.r11.u32 & 0x7FFFF;
loc_8276B4D4:
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// bne 0x8276b4f0
	if (!cr0.eq) goto loc_8276B4F0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8276B4F0:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b614
	if (cr0.eq) goto loc_8276B614;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8276b54c
	if (cr6.eq) goto loc_8276B54C;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276b530
	if (cr0.eq) goto loc_8276B530;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8276B530:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276b614
	if (!cr0.eq) goto loc_8276B614;
loc_8276B54C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276b610
	if (cr0.eq) goto loc_8276B610;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8276b610
	if (cr0.eq) goto loc_8276B610;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8276B568:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8276b614
	if (cr6.eq) goto loc_8276B614;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r8,40
	ctx.r10.s64 = ctx.r8.s64 + 40;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// bne 0x8276b590
	if (!cr0.eq) goto loc_8276B590;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8276B590:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r28,r11,29,3,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r9,r28,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b5ec
	if (cr0.eq) goto loc_8276B5EC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8276b608
	if (cr6.eq) goto loc_8276B608;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// not r28,r11
	ctx.r28.u64 = ~ctx.r11.u64;
	// clrlwi. r28,r28,31
	ctx.r28.u64 = ctx.r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8276b5d0
	if (cr0.eq) goto loc_8276B5D0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8276B5D0:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b608
	if (cr0.eq) goto loc_8276B608;
loc_8276B5EC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276b604
	if (cr6.eq) goto loc_8276B604;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8276b608
	if (cr6.eq) goto loc_8276B608;
loc_8276B5FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8276b660
	goto loc_8276B660;
loc_8276B604:
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_8276B608:
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8276b568
	goto loc_8276B568;
loc_8276B610:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8276B614:
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276b628
	if (cr0.eq) goto loc_8276B628;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276B628:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276b4d4
	if (!cr6.eq) goto loc_8276B4D4;
loc_8276B634:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b644
	if (cr0.eq) goto loc_8276B644;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8276b5fc
	if (!cr6.eq) goto loc_8276B5FC;
loc_8276B644:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276b654
	if (!cr6.eq) goto loc_8276B654;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276b5fc
	if (cr6.eq) goto loc_8276B5FC;
loc_8276B654:
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r29,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r29.u8);
loc_8276B660:
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276B664"))) PPC_WEAK_FUNC(sub_8276B664);
PPC_FUNC_IMPL(__imp__sub_8276B664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276B668"))) PPC_WEAK_FUNC(sub_8276B668);
PPC_FUNC_IMPL(__imp__sub_8276B668) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8276B670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b698
	if (cr0.eq) goto loc_8276B698;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8276b710
	goto loc_8276B710;
loc_8276B698:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r31.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8276b710
	if (cr0.eq) goto loc_8276B710;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8276b6e4
	if (cr6.eq) goto loc_8276B6E4;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8276b6e4
	if (cr6.eq) goto loc_8276B6E4;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8276b6e4
	if (cr6.eq) goto loc_8276B6E4;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8276b6e4
	if (cr6.eq) goto loc_8276B6E4;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8276b6e4
	if (cr6.eq) goto loc_8276B6E4;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8276b6e8
	if (!cr6.eq) goto loc_8276B6E8;
loc_8276B6E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276B6E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b710
	if (cr0.eq) goto loc_8276B710;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276B708;
	sub_826D6610(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
loc_8276B710:
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8276b750
	if (!cr6.eq) goto loc_8276B750;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272e1c0
	ctx.lr = 0x8276B720;
	sub_8272E1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b734
	if (cr0.eq) goto loc_8276B734;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// b 0x8276b758
	goto loc_8276B758;
loc_8276B734:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// beq cr6,0x8276b75c
	if (cr6.eq) goto loc_8276B75C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276B750;
	sub_826C4438(ctx, base);
loc_8276B750:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
loc_8276B758:
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_8276B75C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276B764"))) PPC_WEAK_FUNC(sub_8276B764);
PPC_FUNC_IMPL(__imp__sub_8276B764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276B768"))) PPC_WEAK_FUNC(sub_8276B768);
PPC_FUNC_IMPL(__imp__sub_8276B768) {
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
	// lwz r11,104(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276b7bc
	if (cr0.eq) goto loc_8276B7BC;
	// b 0x8276b7a0
	goto loc_8276B7A0;
loc_8276B794:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276b7ac
	if (cr0.eq) goto loc_8276B7AC;
loc_8276B7A0:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8276b794
	if (!cr0.eq) goto loc_8276B794;
loc_8276B7AC:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276b7a0
	if (!cr0.eq) goto loc_8276B7A0;
	// stw r11,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r11.u32);
loc_8276B7BC:
	// lwz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276b838
	if (!cr0.eq) goto loc_8276B838;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r3.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8276b838
	if (cr0.eq) goto loc_8276B838;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r9,r11,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276b838
	if (cr0.eq) goto loc_8276B838;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8276b820
	if (cr6.eq) goto loc_8276B820;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8276b820
	if (cr6.eq) goto loc_8276B820;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8276b820
	if (cr6.eq) goto loc_8276B820;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8276b820
	if (cr6.eq) goto loc_8276B820;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8276b820
	if (cr6.eq) goto loc_8276B820;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8276b824
	if (!cr6.eq) goto loc_8276B824;
loc_8276B820:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276B824:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b838
	if (cr0.eq) goto loc_8276B838;
	// bl 0x826d6b88
	ctx.lr = 0x8276B830;
	sub_826D6B88(ctx, base);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8276b83c
	goto loc_8276B83C;
loc_8276B838:
	// lwz r31,92(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
loc_8276B83C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276b870
	if (cr6.eq) goto loc_8276B870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d64b8
	ctx.lr = 0x8276B84C;
	sub_826D64B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b870
	if (cr0.eq) goto loc_8276B870;
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
loc_8276B870:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276B87C;
	sub_826C4438(ctx, base);
}

__attribute__((alias("__imp__sub_8276B87C"))) PPC_WEAK_FUNC(sub_8276B87C);
PPC_FUNC_IMPL(__imp__sub_8276B87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276B880"))) PPC_WEAK_FUNC(sub_8276B880);
PPC_FUNC_IMPL(__imp__sub_8276B880) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x8276B888;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b8d8
	if (cr0.eq) goto loc_8276B8D8;
	// bl 0x8276b768
	ctx.lr = 0x8276B8A4;
	sub_8276B768(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82761b48
	ctx.lr = 0x8276B8B4;
	sub_82761B48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826e20d0
	ctx.lr = 0x8276B8C8;
	sub_826E20D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276B8D4;
	sub_826ED298(ctx, base);
	// b 0x8276b8f8
	goto loc_8276B8F8;
loc_8276B8D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f4,2548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82763f48
	ctx.lr = 0x8276B8F4;
	sub_82763F48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8276B8F8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276b90c
	if (cr0.eq) goto loc_8276B90C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8276b918
	goto loc_8276B918;
loc_8276B90C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
loc_8276B918:
	// bl 0x826d6b88
	ctx.lr = 0x8276B91C;
	sub_826D6B88(ctx, base);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x8276b96c
	if (cr6.eq) goto loc_8276B96C;
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x8276b964
	if (cr6.eq) goto loc_8276B964;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// beq cr6,0x8276b95c
	if (cr6.eq) goto loc_8276B95C;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// beq cr6,0x8276b954
	if (cr6.eq) goto loc_8276B954;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276B954;
	sub_826C4438(ctx, base);
loc_8276B954:
	// li r6,24
	ctx.r6.s64 = 24;
	// b 0x8276b970
	goto loc_8276B970;
loc_8276B95C:
	// li r6,23
	ctx.r6.s64 = 23;
	// b 0x8276b970
	goto loc_8276B970;
loc_8276B964:
	// li r6,22
	ctx.r6.s64 = 22;
	// b 0x8276b970
	goto loc_8276B970;
loc_8276B96C:
	// li r6,21
	ctx.r6.s64 = 21;
loc_8276B970:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276B988;
	sub_82761AA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x826e20d0
	ctx.lr = 0x8276B9A8;
	sub_826E20D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276B9B4;
	sub_826ED298(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x826ed298
	ctx.lr = 0x8276B9C8;
	sub_826ED298(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-28
	ctx.r7.s64 = ctx.r10.s64 + -28;
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_8276BA08:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276ba78
	if (cr0.eq) goto loc_8276BA78;
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
	// beq 0x8276ba64
	if (cr0.eq) goto loc_8276BA64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8276ba40
	goto loc_8276BA40;
loc_8276BA3C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_8276BA40:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276ba3c
	if (!cr6.eq) goto loc_8276BA3C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_8276BA64:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276ba08
	if (!cr6.eq) goto loc_8276BA08;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8276ba08
	goto loc_8276BA08;
loc_8276BA78:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82766da8
	ctx.lr = 0x8276BA8C;
	sub_82766DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276BA98"))) PPC_WEAK_FUNC(sub_8276BA98);
PPC_FUNC_IMPL(__imp__sub_8276BA98) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x8276BAA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276baec
	if (!cr0.eq) goto loc_8276BAEC;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276badc
	if (cr0.eq) goto loc_8276BADC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8276bae0
	if (!cr6.eq) goto loc_8276BAE0;
loc_8276BADC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276BAE0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x8276baf0
	if (cr0.eq) goto loc_8276BAF0;
loc_8276BAEC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_8276BAF0:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8272c7f8
	ctx.lr = 0x8276BB04;
	sub_8272C7F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276BB24;
	sub_82761AA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x826e20d0
	ctx.lr = 0x8276BB44;
	sub_826E20D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276BB50;
	sub_826ED298(ctx, base);
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,-28
	ctx.r8.s64 = ctx.r10.s64 + -28;
	// beq cr6,0x8276bb74
	if (cr6.eq) goto loc_8276BB74;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
loc_8276BB74:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 | 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r5,92(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8276bbb4
	if (cr0.eq) goto loc_8276BBB4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270e2e0
	ctx.lr = 0x8276BBB4;
	sub_8270E2E0(ctx, base);
loc_8276BBB4:
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276BBCC"))) PPC_WEAK_FUNC(sub_8276BBCC);
PPC_FUNC_IMPL(__imp__sub_8276BBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276BBD0"))) PPC_WEAK_FUNC(sub_8276BBD0);
PPC_FUNC_IMPL(__imp__sub_8276BBD0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x8276BBD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r4,14(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x826e1be8
	ctx.lr = 0x8276BBF8;
	sub_826E1BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e2258
	ctx.lr = 0x8276BC04;
	sub_826E2258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8276aa38
	ctx.lr = 0x8276BC18;
	sub_8276AA38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276bc28
	if (cr0.eq) goto loc_8276BC28;
loc_8276BC20:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8276bc78
	goto loc_8276BC78;
loc_8276BC28:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276aa38
	ctx.lr = 0x8276BC38;
	sub_8276AA38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276bc20
	if (!cr0.eq) goto loc_8276BC20;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276aa38
	ctx.lr = 0x8276BC50;
	sub_8276AA38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276bc20
	if (!cr0.eq) goto loc_8276BC20;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276aa38
	ctx.lr = 0x8276BC68;
	sub_8276AA38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8276BC78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276BC80"))) PPC_WEAK_FUNC(sub_8276BC80);
PPC_FUNC_IMPL(__imp__sub_8276BC80) {
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
	// bl 0x827185a8
	ctx.lr = 0x8276BCA0;
	sub_827185A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276bcb0
	if (!cr0.eq) goto loc_8276BCB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8276bcc0
	goto loc_8276BCC0;
loc_8276BCB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276aae8
	ctx.lr = 0x8276BCBC;
	sub_8276AAE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8276BCC0:
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

__attribute__((alias("__imp__sub_8276BCD8"))) PPC_WEAK_FUNC(sub_8276BCD8);
PPC_FUNC_IMPL(__imp__sub_8276BCD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x8276BCE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276bd00
	if (cr0.eq) goto loc_8276BD00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276BD00:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276becc
	if (cr6.eq) goto loc_8276BECC;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// clrlwi r26,r11,13
	ctx.r26.u64 = ctx.r11.u32 & 0x7FFFF;
loc_8276BD14:
	// addi r10,r28,40
	ctx.r10.s64 = ctx.r28.s64 + 40;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// bne 0x8276bd30
	if (!cr0.eq) goto loc_8276BD30;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8276BD30:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276be90
	if (cr0.eq) goto loc_8276BE90;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8276bd8c
	if (cr6.eq) goto loc_8276BD8C;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276bd70
	if (cr0.eq) goto loc_8276BD70;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8276BD70:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276be90
	if (!cr0.eq) goto loc_8276BE90;
loc_8276BD8C:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276becc
	if (!cr0.eq) goto loc_8276BECC;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r10,r28,32
	ctx.r10.s64 = ctx.r28.s64 + 32;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276bdac
	if (!cr0.eq) goto loc_8276BDAC;
	// addi r10,r28,24
	ctx.r10.s64 = ctx.r28.s64 + 24;
loc_8276BDAC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276bdbc
	if (cr0.eq) goto loc_8276BDBC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276BDBC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276be90
	if (cr6.eq) goto loc_8276BE90;
loc_8276BDCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826da908
	ctx.lr = 0x8276BDD4;
	sub_826DA908(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276becc
	if (!cr0.eq) goto loc_8276BECC;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r30,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276becc
	if (!cr0.eq) goto loc_8276BECC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272e1c0
	ctx.lr = 0x8276BDF0;
	sub_8272E1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276becc
	if (cr0.eq) goto loc_8276BECC;
	// rlwinm r10,r30,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8276be10
	if (cr6.lt) goto loc_8276BE10;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8276be14
	if (!cr6.gt) goto loc_8276BE14;
loc_8276BE10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276BE14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276be44
	if (cr0.eq) goto loc_8276BE44;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x8276be34
	if (cr6.lt) goto loc_8276BE34;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8276be38
	if (!cr6.gt) goto loc_8276BE38;
loc_8276BE34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276BE38:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276be44
	if (cr0.eq) goto loc_8276BE44;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_8276BE44:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276be58
	if (cr0.eq) goto loc_8276BE58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276BE58:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276bdcc
	if (!cr6.eq) goto loc_8276BDCC;
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276be90
	if (cr6.eq) goto loc_8276BE90;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276be84
	if (cr0.eq) goto loc_8276BE84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276BE84:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276bdcc
	if (!cr6.eq) goto loc_8276BDCC;
loc_8276BE90:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276bea4
	if (cr0.eq) goto loc_8276BEA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276BEA4:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276bd14
	if (!cr6.eq) goto loc_8276BD14;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8276bec0
	if (!cr6.eq) goto loc_8276BEC0;
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// ble cr6,0x8276becc
	if (!cr6.gt) goto loc_8276BECC;
loc_8276BEC0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8276BEC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
loc_8276BECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8276bec4
	goto loc_8276BEC4;
}

__attribute__((alias("__imp__sub_8276BED4"))) PPC_WEAK_FUNC(sub_8276BED4);
PPC_FUNC_IMPL(__imp__sub_8276BED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276BED8"))) PPC_WEAK_FUNC(sub_8276BED8);
PPC_FUNC_IMPL(__imp__sub_8276BED8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x8276BEE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276bf10
	if (cr0.eq) goto loc_8276BF10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276BF10:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276c118
	if (cr6.eq) goto loc_8276C118;
loc_8276BF1C:
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// bne 0x8276bf40
	if (!cr0.eq) goto loc_8276BF40;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8276BF40:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c0dc
	if (cr0.eq) goto loc_8276C0DC;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8276bf9c
	if (cr6.eq) goto loc_8276BF9C;
	// lwz r10,48(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276bf80
	if (cr0.eq) goto loc_8276BF80;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276BF80:
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
	// bne 0x8276c0dc
	if (!cr0.eq) goto loc_8276C0DC;
loc_8276BF9C:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// rlwimi r8,r9,24,7,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0x1000000) | (ctx.r8.u64 & 0xFFFFFFFFFEFFFFFF);
	// rlwinm r10,r26,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// oris r9,r8,640
	ctx.r9.u64 = ctx.r8.u64 | 41943040;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276c0d0
	if (!cr0.eq) goto loc_8276C0D0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r30.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8276c0d0
	if (cr0.eq) goto loc_8276C0D0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8276c05c
	if (cr6.eq) goto loc_8276C05C;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8276c05c
	if (cr6.eq) goto loc_8276C05C;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8276c05c
	if (cr6.eq) goto loc_8276C05C;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8276c05c
	if (cr6.eq) goto loc_8276C05C;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8276c05c
	if (cr6.eq) goto loc_8276C05C;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8276c060
	if (!cr6.eq) goto loc_8276C060;
loc_8276C05C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276C060:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276c0d0
	if (cr0.eq) goto loc_8276C0D0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276C080;
	sub_826D6610(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276c0a8
	if (cr0.eq) goto loc_8276C0A8;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276C0A8:
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
	// bne 0x8276c0dc
	if (!cr0.eq) goto loc_8276C0DC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// b 0x8276c0d8
	goto loc_8276C0D8;
loc_8276C0D0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
loc_8276C0D8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8276C0DC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8276c120
	if (cr6.eq) goto loc_8276C120;
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8276c0fc
	if (!cr0.eq) goto loc_8276C0FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8276C0FC:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276c13c
	if (cr6.eq) goto loc_8276C13C;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276c164
	if (!cr0.eq) goto loc_8276C164;
loc_8276C10C:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8276C110:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8276bf1c
	if (!cr6.eq) goto loc_8276BF1C;
loc_8276C118:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
loc_8276C120:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276c134
	if (!cr0.eq) goto loc_8276C134;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8276C134:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276c15c
	if (!cr6.eq) goto loc_8276C15C;
loc_8276C13C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c154
	if (cr0.eq) goto loc_8276C154;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276C154:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8276c110
	goto loc_8276C110;
loc_8276C15C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8276c10c
	if (cr6.eq) goto loc_8276C10C;
loc_8276C164:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8276c110
	goto loc_8276C110;
}

__attribute__((alias("__imp__sub_8276C16C"))) PPC_WEAK_FUNC(sub_8276C16C);
PPC_FUNC_IMPL(__imp__sub_8276C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276C170"))) PPC_WEAK_FUNC(sub_8276C170);
PPC_FUNC_IMPL(__imp__sub_8276C170) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8276C17C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8276c1d4
	if (cr6.eq) goto loc_8276C1D4;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi r7,r11,13
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFF;
	// addi r11,r9,40
	ctx.r11.s64 = ctx.r9.s64 + 40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r5,r10
	ctx.r5.u64 = ~ctx.r10.u64;
	// clrlwi. r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8276c1a8
	if (cr0.eq) goto loc_8276C1A8;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276C1A8:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r10,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276c1cc
	if (cr0.eq) goto loc_8276C1CC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8276C1CC:
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x8276c17c
	goto loc_8276C17C;
loc_8276C1D4:
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276C1E4"))) PPC_WEAK_FUNC(sub_8276C1E4);
PPC_FUNC_IMPL(__imp__sub_8276C1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276C1E8"))) PPC_WEAK_FUNC(sub_8276C1E8);
PPC_FUNC_IMPL(__imp__sub_8276C1E8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276c210
	if (cr0.eq) goto loc_8276C210;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8276C210:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8276c26c
	if (cr6.eq) goto loc_8276C26C;
loc_8276C218:
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c22c
	if (cr0.eq) goto loc_8276C22C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8276C22C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x826d6e10
	ctx.lr = 0x8276C260;
	sub_826D6E10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8276c218
	if (!cr6.eq) goto loc_8276C218;
loc_8276C26C:
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

__attribute__((alias("__imp__sub_8276C284"))) PPC_WEAK_FUNC(sub_8276C284);
PPC_FUNC_IMPL(__imp__sub_8276C284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276C288"))) PPC_WEAK_FUNC(sub_8276C288);
PPC_FUNC_IMPL(__imp__sub_8276C288) {
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
	// bgt cr6,0x8276c2b0
	if (cr6.gt) goto loc_8276C2B0;
	// li r30,10
	ctx.r30.s64 = 10;
loc_8276C2B0:
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d70f8
	ctx.lr = 0x8276C2C0;
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

__attribute__((alias("__imp__sub_8276C30C"))) PPC_WEAK_FUNC(sub_8276C30C);
PPC_FUNC_IMPL(__imp__sub_8276C30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276C310"))) PPC_WEAK_FUNC(sub_8276C310);
PPC_FUNC_IMPL(__imp__sub_8276C310) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f0
	ctx.lr = 0x8276C318;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c35c
	if (cr0.eq) goto loc_8276C35C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276C35C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276c658
	if (cr6.eq) goto loc_8276C658;
loc_8276C368:
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// bne 0x8276c38c
	if (!cr0.eq) goto loc_8276C38C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8276C38C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c5e4
	if (cr0.eq) goto loc_8276C5E4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8276c3e8
	if (cr6.eq) goto loc_8276C3E8;
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276c3cc
	if (cr0.eq) goto loc_8276C3CC;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276C3CC:
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
	// bne 0x8276c5e4
	if (!cr0.eq) goto loc_8276C5E4;
loc_8276C3E8:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8276c530
	if (cr0.eq) goto loc_8276C530;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276c530
	if (cr0.eq) goto loc_8276C530;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276c468
	if (!cr0.eq) goto loc_8276C468;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r11.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276c468
	if (cr0.eq) goto loc_8276C468;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8276c458
	if (cr6.eq) goto loc_8276C458;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8276c458
	if (cr6.eq) goto loc_8276C458;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8276c458
	if (cr6.eq) goto loc_8276C458;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8276c458
	if (cr6.eq) goto loc_8276C458;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8276c458
	if (cr6.eq) goto loc_8276C458;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8276c45c
	if (!cr6.eq) goto loc_8276C45C;
loc_8276C458:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276C45C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276c468
	if (cr0.eq) goto loc_8276C468;
	// li r20,1
	ctx.r20.s64 = 1;
loc_8276C468:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8276C46C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276c534
	if (cr6.eq) goto loc_8276C534;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// addi r11,r7,40
	ctx.r11.s64 = ctx.r7.s64 + 40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// bne 0x8276c49c
	if (!cr0.eq) goto loc_8276C49C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8276C49C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c4f8
	if (cr0.eq) goto loc_8276C4F8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8276c528
	if (cr6.eq) goto loc_8276C528;
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276c4dc
	if (cr0.eq) goto loc_8276C4DC;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276C4DC:
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
	// beq 0x8276c528
	if (cr0.eq) goto loc_8276C528;
loc_8276C4F8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8276c514
	if (cr6.eq) goto loc_8276C514;
	// cmplw cr6,r7,r26
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8276c518
	if (cr6.eq) goto loc_8276C518;
	// li r4,3534
	ctx.r4.s64 = 3534;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276C514;
	sub_826C4438(ctx, base);
loc_8276C514:
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
loc_8276C518:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8276b668
	ctx.lr = 0x8276C528;
	sub_8276B668(ctx, base);
loc_8276C528:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8276c46c
	goto loc_8276C46C;
loc_8276C530:
	// li r23,1
	ctx.r23.s64 = 1;
loc_8276C534:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r28,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c594
	if (cr0.eq) goto loc_8276C594;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276C594:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276c5cc
	if (cr6.eq) goto loc_8276C5CC;
loc_8276C5A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272e1c0
	ctx.lr = 0x8276C5A8;
	sub_8272E1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276c67c
	if (cr0.eq) goto loc_8276C67C;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276c5c4
	if (cr0.eq) goto loc_8276C5C4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8276C5C4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8276c5a0
	if (!cr6.eq) goto loc_8276C5A0;
loc_8276C5CC:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// stw r22,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r22.u32);
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// oris r11,r10,128
	ctx.r11.u64 = ctx.r10.u64 | 8388608;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_8276C5E4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8276c624
	if (cr6.eq) goto loc_8276C624;
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x8276c604
	if (!cr0.eq) goto loc_8276C604;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8276C604:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8276c618
	if (!cr6.eq) goto loc_8276C618;
loc_8276C60C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8276C618:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c64c
	if (cr0.eq) goto loc_8276C64C;
	// b 0x8276c648
	goto loc_8276C648;
loc_8276C624:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276c638
	if (!cr0.eq) goto loc_8276C638;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8276C638:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276c60c
	if (cr6.eq) goto loc_8276C60C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8276c64c
	if (cr6.eq) goto loc_8276C64C;
loc_8276C648:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276C64C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8276c368
	if (!cr6.eq) goto loc_8276C368;
loc_8276C658:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276c688
	if (cr0.eq) goto loc_8276C688;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8276c688
	if (cr6.eq) goto loc_8276C688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,25016
	ctx.r5.s64 = ctx.r11.s64 + 25016;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276C67C;
	sub_826C4438(ctx, base);
loc_8276C67C:
	// li r4,3540
	ctx.r4.s64 = 3540;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276C688;
	sub_826C4438(ctx, base);
loc_8276C688:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276c6a4
	if (!cr6.eq) goto loc_8276C6A4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8276c6a4
	if (!cr6.eq) goto loc_8276C6A4;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276C6A4;
	sub_826C4438(ctx, base);
loc_8276C6A4:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r28,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r28.u32);
	// stw r26,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r26.u32);
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828d2840
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276C6C0"))) PPC_WEAK_FUNC(sub_8276C6C0);
PPC_FUNC_IMPL(__imp__sub_8276C6C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e8
	ctx.lr = 0x8276C6C8;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,48(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 48);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276cab4
	if (!cr0.eq) goto loc_8276CAB4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276cab4
	if (!cr0.eq) goto loc_8276CAB4;
	// lwz r10,72(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 72);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276cab4
	if (cr0.eq) goto loc_8276CAB4;
	// rlwinm. r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276cab4
	if (!cr0.eq) goto loc_8276CAB4;
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r18,1
	ctx.r18.s64 = 1;
	// bl 0x826d6af8
	ctx.lr = 0x8276C724;
	sub_826D6AF8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r19,r22,4
	ctx.r19.s64 = ctx.r22.s64 + 4;
	// ori r11,r22,1
	ctx.r11.u64 = ctx.r22.u64 | 1;
	// ori r10,r19,1
	ctx.r10.u64 = ctx.r19.u64 | 1;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c74c
	if (cr0.eq) goto loc_8276C74C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276C74C:
	// li r20,13696
	ctx.r20.s64 = 13696;
	// b 0x8276c780
	goto loc_8276C780;
loc_8276C754:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// subf r10,r20,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r20.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ca90
	if (cr0.eq) goto loc_8276CA90;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c780
	if (cr0.eq) goto loc_8276C780;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276C780:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276c754
	if (!cr6.eq) goto loc_8276C754;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276c798
	if (cr0.eq) goto loc_8276C798;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276C798:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276ca94
	if (cr6.eq) goto loc_8276CA94;
	// li r21,13568
	ctx.r21.s64 = 13568;
loc_8276C7A8:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ca6c
	if (cr0.eq) goto loc_8276CA6C;
	// addi r23,r24,36
	ctx.r23.s64 = ctx.r24.s64 + 36;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8276C7D4:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276c840
	if (!cr6.lt) goto loc_8276C840;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r20,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r20.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276c834
	if (cr0.eq) goto loc_8276C834;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8275f778
	ctx.lr = 0x8276C824;
	sub_8275F778(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8276C834:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x8276c7d4
	goto loc_8276C7D4;
loc_8276C840:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// subf r28,r25,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r25.s64;
	// beq cr6,0x8276c924
	if (cr6.eq) goto loc_8276C924;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
loc_8276C85C:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276c88c
	if (cr6.eq) goto loc_8276C88C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_8276C870:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8276c88c
	if (cr6.eq) goto loc_8276C88C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8276c870
	if (cr6.lt) goto loc_8276C870;
loc_8276C88C:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8276c914
	if (!cr6.eq) goto loc_8276C914;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x826dc500
	ctx.lr = 0x8276C8AC;
	sub_826DC500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276ca90
	if (!cr0.eq) goto loc_8276CA90;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276c8c8
	if (cr0.eq) goto loc_8276C8C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8276c8d4
	goto loc_8276C8D4;
loc_8276C8C8:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_8276C8D4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276c8f0
	if (cr6.eq) goto loc_8276C8F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276c8fc
	if (!cr6.gt) goto loc_8276C8FC;
loc_8276C8F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x826d7920
	ctx.lr = 0x8276C8FC;
	sub_826D7920(ctx, base);
loc_8276C8FC:
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
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_8276C914:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8276c85c
	if (cr6.lt) goto loc_8276C85C;
loc_8276C924:
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// bgt cr6,0x8276ca90
	if (cr6.gt) goto loc_8276CA90;
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// b 0x8276ca54
	goto loc_8276CA54;
loc_8276C934:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ca4c
	if (cr0.eq) goto loc_8276CA4C;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r28,36
	ctx.r27.s64 = ctx.r28.s64 + 36;
loc_8276C954:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276ca4c
	if (!cr6.lt) goto loc_8276CA4C;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8275f778
	ctx.lr = 0x8276C98C;
	sub_8275F778(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8276c9bc
	if (cr6.eq) goto loc_8276C9BC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_8276C99C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8276ca90
	if (cr6.eq) goto loc_8276CA90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8276c99c
	if (cr6.lt) goto loc_8276C99C;
loc_8276C9BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// subf r10,r20,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r20.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ca40
	if (cr0.eq) goto loc_8276CA40;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lhz r4,14(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// bl 0x826e1be8
	ctx.lr = 0x8276C9E4;
	sub_826E1BE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8276C9F0:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276ca40
	if (!cr6.lt) goto loc_8276CA40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// subf r10,r20,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r20.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ca34
	if (cr0.eq) goto loc_8276CA34;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lhz r4,14(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// bl 0x826e1be8
	ctx.lr = 0x8276CA2C;
	sub_826E1BE8(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8276ca90
	if (cr6.eq) goto loc_8276CA90;
loc_8276CA34:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x8276c9f0
	goto loc_8276C9F0;
loc_8276CA40:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x8276c954
	goto loc_8276C954;
loc_8276CA4C:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_8276CA54:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ca60
	if (cr0.eq) goto loc_8276CA60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276CA60:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x8276c934
	if (!cr6.eq) goto loc_8276C934;
loc_8276CA6C:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ca80
	if (cr0.eq) goto loc_8276CA80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276CA80:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276c7a8
	if (!cr6.eq) goto loc_8276C7A8;
	// b 0x8276ca94
	goto loc_8276CA94;
loc_8276CA90:
	// li r18,0
	ctx.r18.s64 = 0;
loc_8276CA94:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x826dc460
	ctx.lr = 0x8276CA9C;
	sub_826DC460(ctx, base);
	// addi r11,r17,872
	ctx.r11.s64 = ctx.r17.s64 + 872;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
	// b 0x8276cab8
	goto loc_8276CAB8;
loc_8276CAB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8276CAB8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828d2838
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276CAC0"))) PPC_WEAK_FUNC(sub_8276CAC0);
PPC_FUNC_IMPL(__imp__sub_8276CAC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x8276CAC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// b 0x8276cd6c
	goto loc_8276CD6C;
loc_8276CAE0:
	// addi r11,r27,40
	ctx.r11.s64 = ctx.r27.s64 + 40;
	// lwz r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// bne 0x8276cb04
	if (!cr0.eq) goto loc_8276CB04;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8276CB04:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276cd64
	if (cr0.eq) goto loc_8276CD64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8276cb60
	if (cr6.eq) goto loc_8276CB60;
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276cb44
	if (cr0.eq) goto loc_8276CB44;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276CB44:
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
	// bne 0x8276cd64
	if (!cr0.eq) goto loc_8276CD64;
loc_8276CB60:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276cb88
	if (cr0.eq) goto loc_8276CB88;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276cb80
	if (cr0.eq) goto loc_8276CB80;
	// addi r10,r27,32
	ctx.r10.s64 = ctx.r27.s64 + 32;
	// b 0x8276cb8c
	goto loc_8276CB8C;
loc_8276CB80:
	// addi r10,r27,24
	ctx.r10.s64 = ctx.r27.s64 + 24;
	// b 0x8276cb8c
	goto loc_8276CB8C;
loc_8276CB88:
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
loc_8276CB8C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276cb9c
	if (cr0.eq) goto loc_8276CB9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276CB9C:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// b 0x8276cd58
	goto loc_8276CD58;
loc_8276CBA4:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8276CBA8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8276ccfc
	if (cr6.eq) goto loc_8276CCFC;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r11,r31,0
	ctx.r11.s64 = ctx.r31.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276ccf4
	if (cr0.eq) goto loc_8276CCF4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
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
	// beq 0x8276ccf4
	if (cr0.eq) goto loc_8276CCF4;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r7,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13696
	ctx.r11.s64 = ctx.r11.s64 + -13696;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ccf4
	if (cr0.eq) goto loc_8276CCF4;
	// rlwinm. r11,r7,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276ccf4
	if (!cr0.eq) goto loc_8276CCF4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// bne 0x8276cc30
	if (!cr0.eq) goto loc_8276CC30;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8276CC30:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276cc8c
	if (cr0.eq) goto loc_8276CC8C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8276ccf4
	if (cr6.eq) goto loc_8276CCF4;
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276cc70
	if (cr0.eq) goto loc_8276CC70;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276CC70:
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
	// beq 0x8276ccf4
	if (cr0.eq) goto loc_8276CCF4;
loc_8276CC8C:
	// oris r11,r7,2048
	ctx.r11.u64 = ctx.r7.u64 | 134217728;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276cca8
	if (cr0.eq) goto loc_8276CCA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8276ccb4
	goto loc_8276CCB4;
loc_8276CCA8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_8276CCB4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276ccd0
	if (cr6.eq) goto loc_8276CCD0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276ccdc
	if (!cr6.gt) goto loc_8276CCDC;
loc_8276CCD0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826d7920
	ctx.lr = 0x8276CCDC;
	sub_826D7920(ctx, base);
loc_8276CCDC:
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
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_8276CCF4:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x8276cba8
	goto loc_8276CBA8;
loc_8276CCFC:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276cd10
	if (cr0.eq) goto loc_8276CD10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276CD10:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276cba4
	if (!cr6.eq) goto loc_8276CBA4;
	// addi r10,r27,32
	ctx.r10.s64 = ctx.r27.s64 + 32;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276cd64
	if (cr6.eq) goto loc_8276CD64;
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276cd44
	if (cr6.eq) goto loc_8276CD44;
	// lwz r9,28(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276cd48
	if (cr0.eq) goto loc_8276CD48;
loc_8276CD44:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8276CD48:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276cd58
	if (cr0.eq) goto loc_8276CD58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276CD58:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8276cba4
	if (!cr6.eq) goto loc_8276CBA4;
loc_8276CD64:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8276CD6C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276cd78
	if (cr0.eq) goto loc_8276CD78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276CD78:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bne cr6,0x8276cae0
	if (!cr6.eq) goto loc_8276CAE0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276CD8C"))) PPC_WEAK_FUNC(sub_8276CD8C);
PPC_FUNC_IMPL(__imp__sub_8276CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276CD90"))) PPC_WEAK_FUNC(sub_8276CD90);
PPC_FUNC_IMPL(__imp__sub_8276CD90) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f0
	ctx.lr = 0x8276CD98;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// li r18,0
	ctx.r18.s64 = 0;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8276cdd0
	if (cr6.lt) goto loc_8276CDD0;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8276cdd4
	if (!cr6.gt) goto loc_8276CDD4;
loc_8276CDD0:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_8276CDD4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r10,r20
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ce04
	if (cr0.eq) goto loc_8276CE04;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8276CE04:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
loc_8276CE0C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276ce2c
	if (cr6.eq) goto loc_8276CE2C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bne cr6,0x8276ce30
	if (!cr6.eq) goto loc_8276CE30;
loc_8276CE2C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276CE30:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276d1e0
	if (!cr0.eq) goto loc_8276D1E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8276ad58
	ctx.lr = 0x8276CE40;
	sub_8276AD58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,12(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826db258
	ctx.lr = 0x8276CE54;
	sub_826DB258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r10,9,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// rlwinm r10,r11,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r27,r11,16,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7;
	// bl 0x826e1fa8
	ctx.lr = 0x8276CEA8;
	sub_826E1FA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826e1a20
	ctx.lr = 0x8276CEC0;
	sub_826E1A20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// rlwimi r11,r30,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r26,10(r28)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10);
	// clrlwi r25,r11,29
	ctx.r25.u64 = ctx.r11.u32 & 0x7;
	// bl 0x826e1fa8
	ctx.lr = 0x8276CEE8;
	sub_826E1FA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r25,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x826e1a20
	ctx.lr = 0x8276CF00;
	sub_826E1A20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// rlwimi r11,r26,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// clrlwi. r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276cf20
	if (!cr0.eq) goto loc_8276CF20;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_8276CF20:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276cf38
	if (!cr0.eq) goto loc_8276CF38;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8276CF38:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// bgt cr6,0x8276cf78
	if (cr6.gt) goto loc_8276CF78;
	// beq cr6,0x8276cf6c
	if (cr6.eq) goto loc_8276CF6C;
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x8276cf6c
	if (cr6.eq) goto loc_8276CF6C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x8276cfd0
	if (cr6.eq) goto loc_8276CFD0;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x8276cfb0
	if (cr6.eq) goto loc_8276CFB0;
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// b 0x8276cf8c
	goto loc_8276CF8C;
loc_8276CF6C:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// b 0x8276cfd4
	goto loc_8276CFD4;
loc_8276CF78:
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x8276cfd0
	if (cr6.eq) goto loc_8276CFD0;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// beq cr6,0x8276cfb0
	if (cr6.eq) goto loc_8276CFB0;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
loc_8276CF8C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x8276d1d8
	if (!cr6.eq) goto loc_8276D1D8;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8276ada8
	ctx.lr = 0x8276CFAC;
	sub_8276ADA8(ctx, base);
	// b 0x8276cfe8
	goto loc_8276CFE8;
loc_8276CFB0:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8276aef8
	ctx.lr = 0x8276CFCC;
	sub_8276AEF8(ctx, base);
	// b 0x8276cfe8
	goto loc_8276CFE8;
loc_8276CFD0:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_8276CFD4:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82706690
	ctx.lr = 0x8276CFE8;
	sub_82706690(ctx, base);
loc_8276CFE8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r23,24
	ctx.r11.s64 = ctx.r23.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// ori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,-28
	ctx.r8.s64 = ctx.r10.s64 + -28;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d054
	if (cr0.eq) goto loc_8276D054;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x826ece80
	ctx.lr = 0x8276D038;
	sub_826ECE80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826da368
	ctx.lr = 0x8276D048;
	sub_826DA368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276D054;
	sub_826ED298(ctx, base);
loc_8276D054:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8276d0d4
	if (cr6.eq) goto loc_8276D0D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d088
	if (cr0.eq) goto loc_8276D088;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// b 0x8276d094
	goto loc_8276D094;
loc_8276D088:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_8276D094:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276d0b0
	if (cr6.eq) goto loc_8276D0B0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276d0bc
	if (!cr6.gt) goto loc_8276D0BC;
loc_8276D0B0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x826d7920
	ctx.lr = 0x8276D0BC;
	sub_826D7920(ctx, base);
loc_8276D0BC:
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
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_8276D0D4:
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ce0c
	if (cr0.eq) goto loc_8276CE0C;
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
loc_8276D0E8:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
loc_8276D0F0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276d1ac
	if (cr0.eq) goto loc_8276D1AC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r10,r18,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r18.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8276d198
	if (cr0.eq) goto loc_8276D198;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// b 0x8276d128
	goto loc_8276D128;
loc_8276D124:
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_8276D128:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276d124
	if (!cr6.eq) goto loc_8276D124;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r30,228
	ctx.r10.u64 = ctx.r30.u64 | 228;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// rlwinm r9,r8,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r8,0,27,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r6,r9,27,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x6;
	// rlwinm r5,r9,29,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x6;
	// rlwinm r3,r9,31,29,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x6;
	// rlwinm r9,r9,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// srw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r5,r10,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// srw r3,r10,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r3.u8 & 0x3F));
	// rlwimi r5,r6,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r9,r5,28
	ctx.r9.u64 = ctx.r5.u32 & 0xF;
	// rlwimi r3,r9,2,0,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r3.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r3,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8276D198:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276d0f0
	if (!cr6.eq) goto loc_8276D0F0;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// b 0x8276d0f0
	goto loc_8276D0F0;
loc_8276D1AC:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82766da8
	ctx.lr = 0x8276D1BC;
	sub_82766DA8(ctx, base);
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276d0e8
	if (cr6.lt) goto loc_8276D0E8;
	// b 0x8276ce0c
	goto loc_8276CE0C;
loc_8276D1D8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x826c4438
	ctx.lr = 0x8276D1E0;
	sub_826C4438(ctx, base);
loc_8276D1E0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d2840
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276D1E8"))) PPC_WEAK_FUNC(sub_8276D1E8);
PPC_FUNC_IMPL(__imp__sub_8276D1E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f8
	ctx.lr = 0x8276D1F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x826d6af8
	ctx.lr = 0x8276D218;
	sub_826D6AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r26,r29,4
	ctx.r26.s64 = ctx.r29.s64 + 4;
	// ori r11,r29,1
	ctx.r11.u64 = ctx.r29.u64 | 1;
	// ori r10,r26,1
	ctx.r10.u64 = ctx.r26.u64 | 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276d240
	if (cr0.eq) goto loc_8276D240;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276D240:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276d3e4
	if (cr6.eq) goto loc_8276D3E4;
loc_8276D24C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13696
	ctx.r11.s64 = ctx.r11.s64 + -13696;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d3bc
	if (cr0.eq) goto loc_8276D3BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276d280
	if (cr0.eq) goto loc_8276D280;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8276d284
	if (!cr6.eq) goto loc_8276D284;
loc_8276D280:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276D284:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d3bc
	if (cr0.eq) goto loc_8276D3BC;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8272be48
	ctx.lr = 0x8276D2A4;
	sub_8272BE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8272be48
	ctx.lr = 0x8276D2C0;
	sub_8272BE48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8276d3bc
	if (cr6.eq) goto loc_8276D3BC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d2e0
	if (cr0.eq) goto loc_8276D2E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276d2ec
	goto loc_8276D2EC;
loc_8276D2E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8276D2EC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276d308
	if (cr6.eq) goto loc_8276D308;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276d318
	if (!cr6.gt) goto loc_8276D318;
loc_8276D308:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8276c288
	ctx.lr = 0x8276D314;
	sub_8276C288(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8276D318:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r20,9
	ctx.r20.s64 = 9;
	// mulli r31,r5,28
	ctx.r31.s64 = ctx.r5.s64 * 28;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// rlwimi r11,r20,16,12,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 16) & 0xF0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8275f778
	ctx.lr = 0x8276D368;
	sub_8275F778(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,228
	ctx.r11.u64 = ctx.r11.u64 | 228;
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276d3dc
	if (!cr6.eq) goto loc_8276D3DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8275f778
	ctx.lr = 0x8276D3A4;
	sub_8275F778(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,228
	ctx.r11.u64 = ctx.r11.u64 | 228;
	// stb r11,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r11.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276d3dc
	if (!cr6.eq) goto loc_8276D3DC;
loc_8276D3BC:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d3d0
	if (cr0.eq) goto loc_8276D3D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8276D3D0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8276d24c
	if (!cr6.eq) goto loc_8276D24C;
	// b 0x8276d3e4
	goto loc_8276D3E4;
loc_8276D3DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8276c1e8
	ctx.lr = 0x8276D3E4;
	sub_8276C1E8(ctx, base);
loc_8276D3E4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276d3f4
	if (cr0.eq) goto loc_8276D3F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276D3F4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d408
	if (cr0.eq) goto loc_8276D408;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8276d440
	goto loc_8276D440;
loc_8276D408:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8276cd90
	ctx.lr = 0x8276D424;
	sub_8276CD90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8276c1e8
	ctx.lr = 0x8276D42C;
	sub_8276C1E8(ctx, base);
	// addi r11,r27,872
	ctx.r11.s64 = ctx.r27.s64 + 872;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_8276D440:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276D448"))) PPC_WEAK_FUNC(sub_8276D448);
PPC_FUNC_IMPL(__imp__sub_8276D448) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x8276D450;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x826d6af8
	ctx.lr = 0x8276D464;
	sub_826D6AF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
	// ori r11,r28,1
	ctx.r11.u64 = ctx.r28.u64 | 1;
	// ori r10,r27,1
	ctx.r10.u64 = ctx.r27.u64 | 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276d490
	if (cr0.eq) goto loc_8276D490;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8276D490:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8276d5dc
	goto loc_8276D5DC;
loc_8276D498:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r10,r10,-13824
	ctx.r10.s64 = ctx.r10.s64 + -13824;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276d5d4
	if (cr0.eq) goto loc_8276D5D4;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8276D4BC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276d5d4
	if (cr6.eq) goto loc_8276D5D4;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r11,r23,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r23.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276d5cc
	if (cr0.eq) goto loc_8276D5CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276d4f8
	if (!cr0.eq) goto loc_8276D4F8;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq 0x8276d4fc
	if (cr0.eq) goto loc_8276D4FC;
loc_8276D4F8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276D4FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d5cc
	if (cr0.eq) goto loc_8276D5CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276d5cc
	if (!cr0.eq) goto loc_8276D5CC;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8276d548
	if (cr6.eq) goto loc_8276D548;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8276d548
	if (cr6.eq) goto loc_8276D548;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8276d548
	if (cr6.eq) goto loc_8276D548;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8276d548
	if (cr6.eq) goto loc_8276D548;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8276d548
	if (cr6.eq) goto loc_8276D548;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x8276d54c
	if (!cr6.eq) goto loc_8276D54C;
loc_8276D548:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276D54C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d560
	if (cr0.eq) goto loc_8276D560;
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,36(r24)
	PPC_STORE_U32(ctx.r24.u32 + 36, ctx.r11.u32);
loc_8276D560:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d580
	if (cr0.eq) goto loc_8276D580;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x8276d58c
	goto loc_8276D58C;
loc_8276D580:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_8276D58C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276d5a8
	if (cr6.eq) goto loc_8276D5A8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276d5b4
	if (!cr6.gt) goto loc_8276D5B4;
loc_8276D5A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d7920
	ctx.lr = 0x8276D5B4;
	sub_826D7920(ctx, base);
loc_8276D5B4:
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
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_8276D5CC:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8276d4bc
	goto loc_8276D4BC;
loc_8276D5D4:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_8276D5DC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276d5e8
	if (cr0.eq) goto loc_8276D5E8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8276D5E8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x8276d498
	if (!cr6.eq) goto loc_8276D498;
loc_8276D5F4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276d604
	if (cr0.eq) goto loc_8276D604;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8276D604:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276d8d8
	if (!cr0.eq) goto loc_8276D8D8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8276d620
	if (cr6.eq) goto loc_8276D620;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x8276d62c
	goto loc_8276D62C;
loc_8276D620:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8276D62C:
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
	// lwzx r30,r11,r4
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bne 0x8276d680
	if (!cr0.eq) goto loc_8276D680;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
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
	ctx.lr = 0x8276D680;
	sub_826D6E10(ctx, base);
loc_8276D680:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276d69c
	if (cr0.eq) goto loc_8276D69C;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276D69C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276d5f4
	if (!cr0.eq) goto loc_8276D5F4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8276d6e4
	if (cr6.eq) goto loc_8276D6E4;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8276d6e4
	if (cr6.eq) goto loc_8276D6E4;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8276d6e4
	if (cr6.eq) goto loc_8276D6E4;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8276d6e4
	if (cr6.eq) goto loc_8276D6E4;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8276d6e4
	if (cr6.eq) goto loc_8276D6E4;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x8276d6e8
	if (!cr6.eq) goto loc_8276D6E8;
loc_8276D6E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276D6E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d7b4
	if (cr0.eq) goto loc_8276D7B4;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8276b250
	ctx.lr = 0x8276D70C;
	sub_8276B250(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8276d764
	if (cr6.eq) goto loc_8276D764;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8276d7b4
	if (cr6.eq) goto loc_8276D7B4;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8276d758
	if (cr6.eq) goto loc_8276D758;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8276d744
	if (cr6.eq) goto loc_8276D744;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x8276d8d0
	if (!cr6.eq) goto loc_8276D8D0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8276d7ac
	goto loc_8276D7AC;
loc_8276D744:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8276cac0
	ctx.lr = 0x8276D758;
	sub_8276CAC0(ctx, base);
loc_8276D758:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8276d7a8
	goto loc_8276D7A8;
loc_8276D764:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276D77C;
	sub_826D6610(ctx, base);
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,-8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
loc_8276D788:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276d7a4
	if (cr6.eq) goto loc_8276D7A4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8276d7a8
	if (!cr6.eq) goto loc_8276D7A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8276d788
	goto loc_8276D788;
loc_8276D7A4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8276D7A8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8276D7AC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8276cac0
	ctx.lr = 0x8276D7B4;
	sub_8276CAC0(ctx, base);
loc_8276D7B4:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8276D7B8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276d5f4
	if (cr6.eq) goto loc_8276D5F4;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r11,r23,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r23.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276d8c8
	if (cr0.eq) goto loc_8276D8C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276d7f4
	if (!cr0.eq) goto loc_8276D7F4;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq 0x8276d7f8
	if (cr0.eq) goto loc_8276D7F8;
loc_8276D7F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276D7F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d8c8
	if (cr0.eq) goto loc_8276D8C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276d8c8
	if (!cr0.eq) goto loc_8276D8C8;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8276d844
	if (cr6.eq) goto loc_8276D844;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8276d844
	if (cr6.eq) goto loc_8276D844;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8276d844
	if (cr6.eq) goto loc_8276D844;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8276d844
	if (cr6.eq) goto loc_8276D844;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8276d844
	if (cr6.eq) goto loc_8276D844;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x8276d848
	if (!cr6.eq) goto loc_8276D848;
loc_8276D844:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276D848:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d85c
	if (cr0.eq) goto loc_8276D85C;
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,36(r24)
	PPC_STORE_U32(ctx.r24.u32 + 36, ctx.r11.u32);
loc_8276D85C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d87c
	if (cr0.eq) goto loc_8276D87C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x8276d888
	goto loc_8276D888;
loc_8276D87C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_8276D888:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276d8a4
	if (cr6.eq) goto loc_8276D8A4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276d8b0
	if (!cr6.gt) goto loc_8276D8B0;
loc_8276D8A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d7920
	ctx.lr = 0x8276D8B0;
	sub_826D7920(ctx, base);
loc_8276D8B0:
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
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_8276D8C8:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8276d7b8
	goto loc_8276D7B8;
loc_8276D8D0:
	// li r4,3534
	ctx.r4.s64 = 3534;
	// bl 0x826c4438
	ctx.lr = 0x8276D8D8;
	sub_826C4438(ctx, base);
loc_8276D8D8:
	// addi r11,r24,872
	ctx.r11.s64 = ctx.r24.s64 + 872;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_8276D8E8:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276d8fc
	if (cr0.eq) goto loc_8276D8FC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8276D8FC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8276dbcc
	goto loc_8276DBCC;
loc_8276D904:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d92c
	if (cr0.eq) goto loc_8276D92C;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d924
	if (cr0.eq) goto loc_8276D924;
	// addi r10,r26,16
	ctx.r10.s64 = ctx.r26.s64 + 16;
	// b 0x8276d930
	goto loc_8276D930;
loc_8276D924:
	// addi r10,r26,24
	ctx.r10.s64 = ctx.r26.s64 + 24;
	// b 0x8276d930
	goto loc_8276D930;
loc_8276D92C:
	// addi r10,r26,32
	ctx.r10.s64 = ctx.r26.s64 + 32;
loc_8276D930:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276d944
	if (cr0.eq) goto loc_8276D944;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8276d950
	goto loc_8276D950;
loc_8276D944:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_8276D950:
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// b 0x8276dbbc
	goto loc_8276DBBC;
loc_8276D958:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12416
	ctx.r11.s64 = ctx.r11.s64 + -12416;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276da0c
	if (cr0.eq) goto loc_8276DA0C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276D988;
	sub_826D6610(ctx, base);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276da0c
	if (cr0.eq) goto loc_8276DA0C;
	// lwz r11,-12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276da0c
	if (!cr0.eq) goto loc_8276DA0C;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8276D9A8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8276da0c
	if (cr6.eq) goto loc_8276DA0C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
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
	// beq 0x8276da04
	if (cr0.eq) goto loc_8276DA04;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r8,r10,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8276da04
	if (!cr0.eq) goto loc_8276DA04;
	// oris r8,r10,4096
	ctx.r8.u64 = ctx.r10.u64 | 268435456;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276d9f8
	if (cr0.eq) goto loc_8276D9F8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8276D9F8:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276da04
	if (cr6.eq) goto loc_8276DA04;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8276DA04:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8276d9a8
	goto loc_8276D9A8;
loc_8276DA0C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276db44
	if (cr0.eq) goto loc_8276DB44;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8276DA1C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8276da64
	if (cr6.eq) goto loc_8276DA64;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r8,r10,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8276da5c
	if (!cr0.eq) goto loc_8276DA5C;
	// oris r8,r10,4096
	ctx.r8.u64 = ctx.r10.u64 | 268435456;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276da50
	if (cr0.eq) goto loc_8276DA50;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8276DA50:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276da5c
	if (cr6.eq) goto loc_8276DA5C;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8276DA5C:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8276da1c
	goto loc_8276DA1C;
loc_8276DA64:
	// lwz r29,52(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// b 0x8276db3c
	goto loc_8276DB3C;
loc_8276DA6C:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276db38
	if (!cr0.eq) goto loc_8276DB38;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r30.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8276db38
	if (cr0.eq) goto loc_8276DB38;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r31,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276db38
	if (!cr0.eq) goto loc_8276DB38;
	// rlwinm r4,r31,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r4,86
	cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// beq cr6,0x8276dacc
	if (cr6.eq) goto loc_8276DACC;
	// cmplwi cr6,r4,87
	cr6.compare<uint32_t>(ctx.r4.u32, 87, ctx.xer);
	// beq cr6,0x8276dacc
	if (cr6.eq) goto loc_8276DACC;
	// cmplwi cr6,r4,89
	cr6.compare<uint32_t>(ctx.r4.u32, 89, ctx.xer);
	// beq cr6,0x8276dacc
	if (cr6.eq) goto loc_8276DACC;
	// cmplwi cr6,r4,90
	cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// beq cr6,0x8276dacc
	if (cr6.eq) goto loc_8276DACC;
	// cmplwi cr6,r4,84
	cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// beq cr6,0x8276dacc
	if (cr6.eq) goto loc_8276DACC;
	// cmplwi cr6,r4,85
	cr6.compare<uint32_t>(ctx.r4.u32, 85, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x8276dad0
	if (!cr6.eq) goto loc_8276DAD0;
loc_8276DACC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276DAD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276db38
	if (cr0.eq) goto loc_8276DB38;
	// rlwinm r6,r31,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0x7;
	// rlwinm r5,r31,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0x7;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826d6610
	ctx.lr = 0x8276DAE8;
	sub_826D6610(ctx, base);
	// addi r11,r26,40
	ctx.r11.s64 = ctx.r26.s64 + 40;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,-8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// clrlwi r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276db10
	if (cr0.eq) goto loc_8276DB10;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276DB10:
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
	// bne 0x8276db38
	if (!cr0.eq) goto loc_8276DB38;
	// oris r11,r31,4096
	ctx.r11.u64 = ctx.r31.u64 | 268435456;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8276DB38:
	// lwz r29,52(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
loc_8276DB3C:
	// cmplwi r29,0
	cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8276da6c
	if (!cr0.eq) goto loc_8276DA6C;
loc_8276DB44:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276db5c
	if (cr0.eq) goto loc_8276DB5C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8276db64
	goto loc_8276DB64;
loc_8276DB5C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_8276DB64:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276d958
	if (!cr6.eq) goto loc_8276D958;
	// addi r10,r26,16
	ctx.r10.s64 = ctx.r26.s64 + 16;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276dbc8
	if (cr6.eq) goto loc_8276DBC8;
	// addi r11,r26,24
	ctx.r11.s64 = ctx.r26.s64 + 24;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276db98
	if (cr6.eq) goto loc_8276DB98;
	// lwz r9,28(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276db9c
	if (cr0.eq) goto loc_8276DB9C;
loc_8276DB98:
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_8276DB9C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276dbb0
	if (cr0.eq) goto loc_8276DBB0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8276dbbc
	goto loc_8276DBBC;
loc_8276DBB0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_8276DBBC:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8276d958
	if (!cr6.eq) goto loc_8276D958;
loc_8276DBC8:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
loc_8276DBCC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276dbdc
	if (cr0.eq) goto loc_8276DBDC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8276DBDC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// bne cr6,0x8276d904
	if (!cr6.eq) goto loc_8276D904;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276dbfc
	if (cr0.eq) goto loc_8276DBFC;
	// lwz r10,36(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r10,36(r24)
	PPC_STORE_U32(ctx.r24.u32 + 36, ctx.r10.u32);
loc_8276DBFC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276d8e8
	if (!cr6.eq) goto loc_8276D8E8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276DC0C"))) PPC_WEAK_FUNC(sub_8276DC0C);
PPC_FUNC_IMPL(__imp__sub_8276DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276DC10"))) PPC_WEAK_FUNC(sub_8276DC10);
PPC_FUNC_IMPL(__imp__sub_8276DC10) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,0,8,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF00;
	// rlwinm. r11,r11,0,23,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF8001FF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8276dccc
	goto loc_8276DCCC;
loc_8276DC28:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276dc50
	if (cr0.eq) goto loc_8276DC50;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276dc48
	if (cr0.eq) goto loc_8276DC48;
	// addi r10,r8,32
	ctx.r10.s64 = ctx.r8.s64 + 32;
	// b 0x8276dcac
	goto loc_8276DCAC;
loc_8276DC48:
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
	// b 0x8276dcac
	goto loc_8276DCAC;
loc_8276DC50:
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// b 0x8276dcac
	goto loc_8276DCAC;
loc_8276DC58:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r7,r7,0,5,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276dc78
	if (cr0.eq) goto loc_8276DC78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276DC78:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276dc58
	if (!cr6.eq) goto loc_8276DC58;
	// addi r9,r8,32
	ctx.r9.s64 = ctx.r8.s64 + 32;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8276dcc4
	if (cr6.eq) goto loc_8276DCC4;
	// addi r11,r8,24
	ctx.r11.s64 = ctx.r8.s64 + 24;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276dca8
	if (cr6.eq) goto loc_8276DCA8;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq 0x8276dcac
	if (cr0.eq) goto loc_8276DCAC;
loc_8276DCA8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8276DCAC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276dcbc
	if (cr0.eq) goto loc_8276DCBC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276DCBC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276dc58
	if (!cr6.eq) goto loc_8276DC58;
loc_8276DCC4:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8276DCCC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276dcd8
	if (cr0.eq) goto loc_8276DCD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276DCD8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// bne cr6,0x8276dc28
	if (!cr6.eq) goto loc_8276DC28;
	// b 0x8276d448
	sub_8276D448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276DCE8"))) PPC_WEAK_FUNC(sub_8276DCE8);
PPC_FUNC_IMPL(__imp__sub_8276DCE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276DCEC"))) PPC_WEAK_FUNC(sub_8276DCEC);
PPC_FUNC_IMPL(__imp__sub_8276DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276DCF0"))) PPC_WEAK_FUNC(sub_8276DCF0);
PPC_FUNC_IMPL(__imp__sub_8276DCF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e4
	ctx.lr = 0x8276DCF8;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// andi. r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 & 260;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276ed5c
	if (cr0.eq) goto loc_8276ED5C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276dd2c
	if (cr0.eq) goto loc_8276DD2C;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8276DD2C:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276ed4c
	if (cr6.eq) goto loc_8276ED4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r18,1
	ctx.r18.s64 = 1;
	// lis r15,-1
	ctx.r15.s64 = -65536;
	// lfs f31,2548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f31.f64 = double(temp.f32);
loc_8276DD48:
	// lwz r11,36(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276ed2c
	if (!cr0.eq) goto loc_8276ED2C;
	// lwz r11,32(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r28.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8276ed2c
	if (cr0.eq) goto loc_8276ED2C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8276dda0
	if (cr6.eq) goto loc_8276DDA0;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8276dda0
	if (cr6.eq) goto loc_8276DDA0;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8276dda0
	if (cr6.eq) goto loc_8276DDA0;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8276dda0
	if (cr6.eq) goto loc_8276DDA0;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8276dda0
	if (cr6.eq) goto loc_8276DDA0;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// bne cr6,0x8276dda4
	if (!cr6.eq) goto loc_8276DDA4;
loc_8276DDA0:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8276DDA4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ed2c
	if (cr0.eq) goto loc_8276ED2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8270d520
	ctx.lr = 0x8276DDB8;
	sub_8270D520(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276b250
	ctx.lr = 0x8276DDD8;
	sub_8276B250(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8276e7c4
	if (cr6.eq) goto loc_8276E7C4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8276ed2c
	if (cr6.eq) goto loc_8276ED2C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8276e550
	if (cr6.eq) goto loc_8276E550;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8276de1c
	if (cr6.eq) goto loc_8276DE1C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276de10
	if (!cr0.eq) goto loc_8276DE10;
	// lwz r11,48(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ed2c
	if (cr0.eq) goto loc_8276ED2C;
loc_8276DE10:
	// li r4,3534
	ctx.r4.s64 = 3534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276DE1C;
	sub_826C4438(ctx, base);
loc_8276DE1C:
	// lwz r22,116(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// lwz r20,120(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bne cr6,0x8276e030
	if (!cr6.eq) goto loc_8276E030;
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// addi r6,r1,97
	ctx.r6.s64 = ctx.r1.s64 + 97;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276b4a0
	ctx.lr = 0x8276DE48;
	sub_8276B4A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276dfe4
	if (cr0.eq) goto loc_8276DFE4;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,98
	ctx.r6.s64 = ctx.r1.s64 + 98;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276b4a0
	ctx.lr = 0x8276DE64;
	sub_8276B4A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276dfe4
	if (cr0.eq) goto loc_8276DFE4;
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8276ed68
	if (!cr6.eq) goto loc_8276ED68;
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8276ed7c
	if (!cr6.eq) goto loc_8276ED7C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276dfe4
	if (!cr6.eq) goto loc_8276DFE4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276c170
	ctx.lr = 0x8276DEA4;
	sub_8276C170(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276c170
	ctx.lr = 0x8276DEB8;
	sub_8276C170(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8276dee4
	if (!cr6.eq) goto loc_8276DEE4;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272c7f8
	ctx.lr = 0x8276DEE0;
	sub_8272C7F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8276DEE4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8276df0c
	if (!cr6.eq) goto loc_8276DF0C;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272c7f8
	ctx.lr = 0x8276DF08;
	sub_8272C7F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8276DF0C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d6b88
	ctx.lr = 0x8276DF14;
	sub_826D6B88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276d1e8
	ctx.lr = 0x8276DF38;
	sub_8276D1E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276dfe4
	if (cr0.eq) goto loc_8276DFE4;
	// addi r10,r19,12
	ctx.r10.s64 = ctx.r19.s64 + 12;
	// b 0x8276df4c
	goto loc_8276DF4C;
loc_8276DF48:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_8276DF4C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r20
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8276df48
	if (!cr6.eq) goto loc_8276DF48;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r20,8
	ctx.r10.s64 = ctx.r20.s64 + 8;
	// b 0x8276df74
	goto loc_8276DF74;
loc_8276DF6C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8276DF74:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8276df6c
	if (!cr6.eq) goto loc_8276DF6C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r27,12
	ctx.r9.s64 = ctx.r27.s64 + 12;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8276df94
	goto loc_8276DF94;
loc_8276DF90:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_8276DF94:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8276df90
	if (!cr6.eq) goto loc_8276DF90;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// b 0x8276dfbc
	goto loc_8276DFBC;
loc_8276DFB4:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8276DFBC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8276dfb4
	if (!cr6.eq) goto loc_8276DFB4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8270d7c8
	ctx.lr = 0x8276DFE0;
	sub_8270D7C8(ctx, base);
	// b 0x8276e658
	goto loc_8276E658;
loc_8276DFE4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276DFFC;
	sub_826D6610(ctx, base);
	// add r11,r28,r3
	ctx.r11.u64 = ctx.r28.u64 + ctx.r3.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276e014
	if (cr0.eq) goto loc_8276E014;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8276e01c
	goto loc_8276E01C;
loc_8276E014:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
loc_8276E01C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e030
	if (cr0.eq) goto loc_8276E030;
	// li r4,3587
	ctx.r4.s64 = 3587;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c44d0
	ctx.lr = 0x8276E030;
	sub_826C44D0(ctx, base);
loc_8276E030:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276e058
	if (!cr0.eq) goto loc_8276E058;
	// lwz r11,48(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276e058
	if (!cr0.eq) goto loc_8276E058;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x8276e058
	if (cr6.eq) goto loc_8276E058;
	// cmpwi cr6,r24,4
	cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bne cr6,0x8276ed2c
	if (!cr6.eq) goto loc_8276ED2C;
loc_8276E058:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e070
	if (cr0.eq) goto loc_8276E070;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276a990
	ctx.lr = 0x8276E06C;
	sub_8276A990(ctx, base);
	// stb r16,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r16.u8);
loc_8276E070:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276c310
	ctx.lr = 0x8276E09C;
	sub_8276C310(ctx, base);
	// addi r11,r1,99
	ctx.r11.s64 = ctx.r1.s64 + 99;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x8276c310
	ctx.lr = 0x8276E0D0;
	sub_8276C310(ctx, base);
	// lbz r11,99(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// or r23,r8,r10
	ctx.r23.u64 = ctx.r8.u64 | ctx.r10.u64;
	// bne cr6,0x8276ed88
	if (!cr6.eq) goto loc_8276ED88;
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8276ed9c
	if (!cr6.eq) goto loc_8276ED9C;
	// lwz r21,104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276e484
	if (cr6.eq) goto loc_8276E484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d7300
	ctx.lr = 0x8276E110;
	sub_826D7300(ctx, base);
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r29,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,82
	ctx.r6.s64 = 82;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r29,32
	ctx.r5.s64 = ctx.r29.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82761aa0
	ctx.lr = 0x8276E15C;
	sub_82761AA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// b 0x8276e440
	goto loc_8276E440;
loc_8276E170:
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8276e438
	if (cr6.eq) goto loc_8276E438;
	// addi r11,r28,40
	ctx.r11.s64 = ctx.r28.s64 + 40;
	// lwz r10,48(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// bne 0x8276e19c
	if (!cr0.eq) goto loc_8276E19C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8276E19C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276e1f0
	if (!cr0.eq) goto loc_8276E1F0;
	// lwz r10,48(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276e1d4
	if (cr0.eq) goto loc_8276E1D4;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276E1D4:
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
	// beq 0x8276e438
	if (cr0.eq) goto loc_8276E438;
loc_8276E1F0:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276e2d4
	if (cr0.eq) goto loc_8276E2D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276e2d4
	if (cr0.eq) goto loc_8276E2D4;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e438
	if (cr0.eq) goto loc_8276E438;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276e220
	if (cr0.eq) goto loc_8276E220;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8276E220:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276e438
	if (cr6.eq) goto loc_8276E438;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r15,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r15.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
loc_8276E244:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8276e274
	if (cr6.eq) goto loc_8276E274;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,96
	cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x8276e268
	if (cr6.lt) goto loc_8276E268;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// ble cr6,0x8276e26c
	if (!cr6.gt) goto loc_8276E26C;
loc_8276E268:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8276E26C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276e2cc
	if (!cr0.eq) goto loc_8276E2CC;
loc_8276E274:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e2a8
	if (cr0.eq) goto loc_8276E2A8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x8276e29c
	if (cr6.lt) goto loc_8276E29C;
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// ble cr6,0x8276e2a0
	if (!cr6.gt) goto loc_8276E2A0;
loc_8276E29C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8276E2A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276e2cc
	if (!cr0.eq) goto loc_8276E2CC;
loc_8276E2A8:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276e2bc
	if (cr0.eq) goto loc_8276E2BC;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8276E2BC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276e244
	if (!cr6.eq) goto loc_8276E244;
	// b 0x8276e438
	goto loc_8276E438;
loc_8276E2CC:
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// b 0x8276e438
	goto loc_8276E438;
loc_8276E2D4:
	// addi r5,r28,32
	ctx.r5.s64 = ctx.r28.s64 + 32;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e2ec
	if (cr0.eq) goto loc_8276E2EC;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// b 0x8276e2f8
	goto loc_8276E2F8;
loc_8276E2EC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-32
	ctx.r30.s64 = ctx.r11.s64 + -32;
loc_8276E2F8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r15,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r15.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276e38c
	if (cr0.eq) goto loc_8276E38C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8276E31C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8276e38c
	if (cr6.eq) goto loc_8276E38C;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276e384
	if (cr0.eq) goto loc_8276E384;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8276E338:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276e364
	if (cr6.eq) goto loc_8276E364;
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
	// bne 0x8276e364
	if (!cr0.eq) goto loc_8276E364;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8276e338
	goto loc_8276E338;
loc_8276E364:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,124
	ctx.r9.s64 = 8126464;
	// rlwinm r11,r11,0,7,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FE0000;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8276e380
	if (!cr6.eq) goto loc_8276E380;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// b 0x8276e384
	goto loc_8276E384;
loc_8276E380:
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
loc_8276E384:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8276e31c
	goto loc_8276E31C;
loc_8276E38C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276E3A4;
	sub_82761AA0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8276E3B4:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276e408
	if (cr0.eq) goto loc_8276E408;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8276e3cc
	goto loc_8276E3CC;
loc_8276E3C8:
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_8276E3CC:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276e3c8
	if (!cr6.eq) goto loc_8276E3C8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276e3b4
	if (!cr6.eq) goto loc_8276E3B4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x8276e3b4
	goto loc_8276E3B4;
loc_8276E408:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82766da8
	ctx.lr = 0x8276E41C;
	sub_82766DA8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8270d7c8
	ctx.lr = 0x8276E42C;
	sub_8270D7C8(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8276E438:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8276E440:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276e44c
	if (cr0.eq) goto loc_8276E44C;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8276E44C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x8276e170
	if (!cr6.eq) goto loc_8276E170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272dcd0
	ctx.lr = 0x8276E460;
	sub_8272DCD0(ctx, base);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e47c
	if (cr0.eq) goto loc_8276E47C;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e47c
	if (cr0.eq) goto loc_8276E47C;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
loc_8276E47C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276eda8
	if (cr0.eq) goto loc_8276EDA8;
loc_8276E484:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,48(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// oris r11,r11,3072
	ctx.r11.u64 = ctx.r11.u64 | 201326592;
	// stw r11,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r11.u32);
	// bne 0x8276e4a0
	if (!cr0.eq) goto loc_8276E4A0;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ed2c
	if (cr0.eq) goto loc_8276ED2C;
loc_8276E4A0:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276b880
	ctx.lr = 0x8276E4AC;
	sub_8276B880(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,62
	ctx.r7.s64 = 62;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x8276ba98
	ctx.lr = 0x8276E4CC;
	sub_8276BA98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8276e524
	goto loc_8276E524;
loc_8276E4D4:
	// addi r11,r9,40
	ctx.r11.s64 = ctx.r9.s64 + 40;
	// lwz r10,48(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8276e4f4
	if (cr0.eq) goto loc_8276E4F4;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276E4F4:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e51c
	if (cr0.eq) goto loc_8276E51C;
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
loc_8276E51C:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8276E524:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276e530
	if (cr0.eq) goto loc_8276E530;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8276E530:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x8276e4d4
	if (!cr6.eq) goto loc_8276E4D4;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x8276e7b4
	goto loc_8276E7B4;
loc_8276E550:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d6b88
	ctx.lr = 0x8276E558;
	sub_826D6B88(ctx, base);
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x8276ed2c
	if (cr6.eq) goto loc_8276ED2C;
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bne cr6,0x8276e6c8
	if (!cr6.eq) goto loc_8276E6C8;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// addi r6,r1,101
	ctx.r6.s64 = ctx.r1.s64 + 101;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276b4a0
	ctx.lr = 0x8276E598;
	sub_8276B4A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e67c
	if (cr0.eq) goto loc_8276E67C;
	// lbz r11,101(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8276edbc
	if (!cr0.eq) goto loc_8276EDBC;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8276edcc
	if (!cr6.eq) goto loc_8276EDCC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8276c170
	ctx.lr = 0x8276E5C8;
	sub_8276C170(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8276e5e8
	if (!cr0.eq) goto loc_8276E5E8;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272c7f8
	ctx.lr = 0x8276E5E8;
	sub_8272C7F8(ctx, base);
loc_8276E5E8:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276d1e8
	ctx.lr = 0x8276E608;
	sub_8276D1E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e67c
	if (cr0.eq) goto loc_8276E67C;
	// addi r10,r19,12
	ctx.r10.s64 = ctx.r19.s64 + 12;
	// b 0x8276e61c
	goto loc_8276E61C;
loc_8276E618:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_8276E61C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8276e618
	if (!cr6.eq) goto loc_8276E618;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// b 0x8276e644
	goto loc_8276E644;
loc_8276E63C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8276E644:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8276e63c
	if (!cr6.eq) goto loc_8276E63C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8276E658:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82766da8
	ctx.lr = 0x8276E66C;
	sub_82766DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272dcd0
	ctx.lr = 0x8276E674;
	sub_8272DCD0(ctx, base);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// b 0x8276ed2c
	goto loc_8276ED2C;
loc_8276E67C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276E694;
	sub_826D6610(ctx, base);
	// add r11,r28,r3
	ctx.r11.u64 = ctx.r28.u64 + ctx.r3.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276e6ac
	if (cr0.eq) goto loc_8276E6AC;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8276e6b4
	goto loc_8276E6B4;
loc_8276E6AC:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
loc_8276E6B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e6c8
	if (cr0.eq) goto loc_8276E6C8;
	// li r4,3587
	ctx.r4.s64 = 3587;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c44d0
	ctx.lr = 0x8276E6C8;
	sub_826C44D0(ctx, base);
loc_8276E6C8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276e6f0
	if (!cr0.eq) goto loc_8276E6F0;
	// lwz r11,48(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276e6f0
	if (!cr0.eq) goto loc_8276E6F0;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x8276e6f0
	if (cr6.eq) goto loc_8276E6F0;
	// cmpwi cr6,r24,4
	cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bne cr6,0x8276ed2c
	if (!cr6.eq) goto loc_8276ED2C;
loc_8276E6F0:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e708
	if (cr0.eq) goto loc_8276E708;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276a990
	ctx.lr = 0x8276E704;
	sub_8276A990(ctx, base);
	// stb r16,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r16.u8);
loc_8276E708:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8276E720;
	sub_826D6610(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,102
	ctx.r5.s64 = ctx.r1.s64 + 102;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bl 0x8276c310
	ctx.lr = 0x8276E764;
	sub_8276C310(ctx, base);
	// lbz r11,102(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8276edd4
	if (!cr0.eq) goto loc_8276EDD4;
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8276ede8
	if (!cr6.eq) goto loc_8276EDE8;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,48(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// oris r11,r11,3072
	ctx.r11.u64 = ctx.r11.u64 | 201326592;
	// stw r11,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r11.u32);
	// bne 0x8276e798
	if (!cr0.eq) goto loc_8276E798;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ed2c
	if (cr0.eq) goto loc_8276ED2C;
loc_8276E798:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276b880
	ctx.lr = 0x8276E7A4;
	sub_8276B880(ctx, base);
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8276E7B4:
	// li r7,63
	ctx.r7.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276ba98
	ctx.lr = 0x8276E7C0;
	sub_8276BA98(ctx, base);
	// b 0x8276ed2c
	goto loc_8276ED2C;
loc_8276E7C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d6610
	ctx.lr = 0x8276E7D8;
	sub_826D6610(ctx, base);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// lwz r11,-12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// rlwinm r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8276e818
	goto loc_8276E818;
loc_8276E7F4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x8276e808
	goto loc_8276E808;
loc_8276E7FC:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276e814
	if (cr0.eq) goto loc_8276E814;
loc_8276E808:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8276e7fc
	if (!cr0.eq) goto loc_8276E7FC;
loc_8276E814:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_8276E818:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276e7f4
	if (!cr0.eq) goto loc_8276E7F4;
	// b 0x8276e850
	goto loc_8276E850;
loc_8276E82C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8276e840
	goto loc_8276E840;
loc_8276E834:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276e84c
	if (cr0.eq) goto loc_8276E84C;
loc_8276E840:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8276e834
	if (!cr0.eq) goto loc_8276E834;
loc_8276E84C:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8276E850:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276e82c
	if (!cr0.eq) goto loc_8276E82C;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e878
	if (cr0.eq) goto loc_8276E878;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// b 0x8276e884
	goto loc_8276E884;
loc_8276E878:
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r29,r11,-32
	ctx.r29.s64 = ctx.r11.s64 + -32;
loc_8276E884:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,10880
	cr6.compare<uint32_t>(ctx.r10.u32, 10880, ctx.xer);
	// bne cr6,0x8276edf4
	if (!cr6.eq) goto loc_8276EDF4;
	// lwz r10,48(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ebcc
	if (cr0.eq) goto loc_8276EBCC;
	// rlwinm. r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276eaf0
	if (cr0.eq) goto loc_8276EAF0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276e8c0
	if (!cr6.eq) goto loc_8276E8C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82715548
	ctx.lr = 0x8276E8C0;
	sub_82715548(ctx, base);
loc_8276E8C0:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276b768
	ctx.lr = 0x8276E8CC;
	sub_8276B768(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,65
	ctx.r7.s64 = 65;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x8276ba98
	ctx.lr = 0x8276E8EC;
	sub_8276BA98(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82761b48
	ctx.lr = 0x8276E8F8;
	sub_82761B48(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e20d0
	ctx.lr = 0x8276E90C;
	sub_826E20D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276E918;
	sub_826ED298(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e1fa8
	ctx.lr = 0x8276E924;
	sub_826E1FA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276b198
	ctx.lr = 0x8276E934;
	sub_8276B198(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r5,92(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 92);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8276e95c
	if (cr0.eq) goto loc_8276E95C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8270e2e0
	ctx.lr = 0x8276E95C;
	sub_8270E2E0(ctx, base);
loc_8276E95C:
	// stw r27,92(r19)
	PPC_STORE_U32(ctx.r19.u32 + 92, ctx.r27.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276e97c
	if (cr0.eq) goto loc_8276E97C;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8276E97C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276e9d8
	if (cr6.eq) goto loc_8276E9D8;
loc_8276E988:
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// li r9,56
	ctx.r9.s64 = 56;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e9bc
	if (cr0.eq) goto loc_8276E9BC;
	// stw r19,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r19.u32);
loc_8276E9BC:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276e9d0
	if (cr0.eq) goto loc_8276E9D0;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_8276E9D0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276e988
	if (!cr6.eq) goto loc_8276E988;
loc_8276E9D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82761b48
	ctx.lr = 0x8276E9E4;
	sub_82761B48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e20d0
	ctx.lr = 0x8276E9F8;
	sub_826E20D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276EA04;
	sub_826ED298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276b140
	ctx.lr = 0x8276EA14;
	sub_8276B140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e1fa8
	ctx.lr = 0x8276EA24;
	sub_826E1FA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276EA30;
	sub_826ED298(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwimi r11,r18,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r18.u32, 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x826d6b88
	ctx.lr = 0x8276EA44;
	sub_826D6B88(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// b 0x8276ea58
	goto loc_8276EA58;
loc_8276EA54:
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8276EA58:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8276ea54
	if (!cr6.eq) goto loc_8276EA54;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r9,r30,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r6,r11,-28
	ctx.r6.s64 = ctx.r11.s64 + -28;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r9,-28
	ctx.r8.s64 = ctx.r9.s64 + -28;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r29,r29,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bl 0x826da368
	ctx.lr = 0x8276EAE0;
	sub_826DA368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276EAEC;
	sub_826ED298(ctx, base);
	// b 0x8276ed2c
	goto loc_8276ED2C;
loc_8276EAF0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,115
	ctx.r6.s64 = 115;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276EB08;
	sub_82761AA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r11,-28
	ctx.r8.s64 = ctx.r11.s64 + -28;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// ori r7,r7,64
	ctx.r7.u64 = ctx.r7.u64 | 64;
	// addi r6,r10,-28
	ctx.r6.s64 = ctx.r10.s64 + -28;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x826da368
	ctx.lr = 0x8276EB60;
	sub_826DA368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276EB6C;
	sub_826ED298(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lbz r11,48(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 48);
	// rlwimi r10,r11,18,13,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0x40000) | (ctx.r10.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// bl 0x826e20d0
	ctx.lr = 0x8276EB98;
	sub_826E20D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276EBA8;
	sub_826ED298(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// rlwimi r11,r10,30,7,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x1FFE000) | (ctx.r11.u64 & 0xFFFFFFFFFE001FFF);
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r11,r18,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r18.u32, 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8276ed2c
	goto loc_8276ED2C;
loc_8276EBCC:
	// rlwinm. r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ed2c
	if (cr0.eq) goto loc_8276ED2C;
	// rlwinm. r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ee20
	if (cr0.eq) goto loc_8276EE20;
	// rlwinm. r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ee20
	if (cr0.eq) goto loc_8276EE20;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_8276EBE8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276ec08
	if (cr6.eq) goto loc_8276EC08;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8276ec0c
	if (!cr6.eq) goto loc_8276EC0C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8276ebe8
	goto loc_8276EBE8;
loc_8276EC08:
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_8276EC0C:
	// addi r11,r1,103
	ctx.r11.s64 = ctx.r1.s64 + 103;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276c310
	ctx.lr = 0x8276EC38;
	sub_8276C310(ctx, base);
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8276ee00
	if (!cr0.eq) goto loc_8276EE00;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276ee14
	if (cr6.eq) goto loc_8276EE14;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8276ee14
	if (!cr6.eq) goto loc_8276EE14;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82763f48
	ctx.lr = 0x8276EC74;
	sub_82763F48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,115
	ctx.r6.s64 = 115;
	// addi r5,r19,16
	ctx.r5.s64 = ctx.r19.s64 + 16;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276EC94;
	sub_82761AA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826ed1c8
	ctx.lr = 0x8276ECAC;
	sub_826ED1C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e20d0
	ctx.lr = 0x8276ECC0;
	sub_826E20D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276b048
	ctx.lr = 0x8276ECD4;
	sub_8276B048(ctx, base);
	// lwz r5,92(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8276ecf0
	if (cr0.eq) goto loc_8276ECF0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8270e2e0
	ctx.lr = 0x8276ECF0;
	sub_8270E2E0(ctx, base);
loc_8276ECF0:
	// stw r30,92(r19)
	PPC_STORE_U32(ctx.r19.u32 + 92, ctx.r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,19,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwimi r11,r18,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r18.u32, 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8276ED2C:
	// rlwinm r11,r19,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ed40
	if (cr0.eq) goto loc_8276ED40;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8276ED40:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276dd48
	if (!cr6.eq) goto loc_8276DD48;
loc_8276ED4C:
	// clrlwi. r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ed5c
	if (cr0.eq) goto loc_8276ED5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82722f38
	ctx.lr = 0x8276ED5C;
	sub_82722F38(ctx, base);
loc_8276ED5C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x828d2834
	__restgprlr_15(ctx, base);
	return;
loc_8276ED68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,25016
	ctx.r5.s64 = ctx.r11.s64 + 25016;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276ED7C;
	sub_826C4438(ctx, base);
loc_8276ED7C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276ED88;
	sub_826C4438(ctx, base);
loc_8276ED88:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,25016
	ctx.r5.s64 = ctx.r11.s64 + 25016;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276ED9C;
	sub_826C4438(ctx, base);
loc_8276ED9C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276EDA8;
	sub_826C4438(ctx, base);
loc_8276EDA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,25088
	ctx.r5.s64 = ctx.r11.s64 + 25088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276EDBC;
	sub_826C4438(ctx, base);
loc_8276EDBC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,25016
	ctx.r5.s64 = ctx.r11.s64 + 25016;
	// bl 0x826c4438
	ctx.lr = 0x8276EDCC;
	sub_826C4438(ctx, base);
loc_8276EDCC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x826c4438
	ctx.lr = 0x8276EDD4;
	sub_826C4438(ctx, base);
loc_8276EDD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,25016
	ctx.r5.s64 = ctx.r11.s64 + 25016;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276EDE8;
	sub_826C4438(ctx, base);
loc_8276EDE8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276EDF4;
	sub_826C4438(ctx, base);
loc_8276EDF4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276EE00;
	sub_826C4438(ctx, base);
loc_8276EE00:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,25056
	ctx.r5.s64 = ctx.r11.s64 + 25056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276EE14;
	sub_826C4438(ctx, base);
loc_8276EE14:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276EE20;
	sub_826C4438(ctx, base);
loc_8276EE20:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276EE2C;
	sub_826C4438(ctx, base);
}

__attribute__((alias("__imp__sub_8276EE2C"))) PPC_WEAK_FUNC(sub_8276EE2C);
PPC_FUNC_IMPL(__imp__sub_8276EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8276EE30"))) PPC_WEAK_FUNC(sub_8276EE30);
PPC_FUNC_IMPL(__imp__sub_8276EE30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27e0
	ctx.lr = 0x8276EE38;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stw r25,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r25.u32);
	// stw r28,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r28.u32);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// stb r24,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r24.u8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82770a40
	if (!cr0.eq) goto loc_82770A40;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r26.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// beq 0x82770a40
	if (cr0.eq) goto loc_82770A40;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8276eeb8
	if (cr6.eq) goto loc_8276EEB8;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8276eeb8
	if (cr6.eq) goto loc_8276EEB8;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8276eeb8
	if (cr6.eq) goto loc_8276EEB8;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8276eeb8
	if (cr6.eq) goto loc_8276EEB8;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8276eeb8
	if (cr6.eq) goto loc_8276EEB8;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne cr6,0x8276eebc
	if (!cr6.eq) goto loc_8276EEBC;
loc_8276EEB8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276EEBC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770a40
	if (cr0.eq) goto loc_82770A40;
	// rlwinm. r11,r10,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770a40
	if (cr0.eq) goto loc_82770A40;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8270d520
	ctx.lr = 0x8276EED8;
	sub_8270D520(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82770a40
	if (cr6.eq) goto loc_82770A40;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8276eef0
	if (!cr6.gt) goto loc_8276EEF0;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x82770a40
	if (!cr6.gt) goto loc_82770A40;
loc_8276EEF0:
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// bl 0x826d6b88
	ctx.lr = 0x8276EF00;
	sub_826D6B88(ctx, base);
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8276ef24
	if (cr6.lt) goto loc_8276EF24;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8276ef28
	if (!cr6.gt) goto loc_8276EF28;
loc_8276EF24:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276EF28:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276f274
	if (cr0.eq) goto loc_8276F274;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8276EF3C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8276efd4
	if (cr6.eq) goto loc_8276EFD4;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// subf r9,r24,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r24.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8276efcc
	if (cr0.eq) goto loc_8276EFCC;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
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
	// beq 0x8276efcc
	if (cr0.eq) goto loc_8276EFCC;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8276EF80:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8276efcc
	if (cr6.eq) goto loc_8276EFCC;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// subf r7,r24,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r24.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x8276efc4
	if (cr0.eq) goto loc_8276EFC4;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// beq cr6,0x8276efbc
	if (cr6.eq) goto loc_8276EFBC;
	// cmpwi cr6,r10,62
	cr6.compare<int32_t>(ctx.r10.s32, 62, ctx.xer);
	// bne cr6,0x82770a40
	if (!cr6.eq) goto loc_82770A40;
loc_8276EFBC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
loc_8276EFC4:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8276ef80
	goto loc_8276EF80;
loc_8276EFCC:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x8276ef3c
	goto loc_8276EF3C;
loc_8276EFD4:
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276f274
	if (!cr0.eq) goto loc_8276F274;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x8276f274
	if (!cr6.eq) goto loc_8276F274;
loc_8276EFE8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f030
	if (cr6.eq) goto loc_8276F030;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r24.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8276f028
	if (cr0.eq) goto loc_8276F028;
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
	// bne 0x8276f030
	if (!cr0.eq) goto loc_8276F030;
loc_8276F028:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8276efe8
	goto loc_8276EFE8;
loc_8276F030:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8276F038:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f064
	if (cr6.eq) goto loc_8276F064;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r24.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8276f064
	if (!cr0.eq) goto loc_8276F064;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8276f038
	goto loc_8276F038;
loc_8276F064:
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270e370
	ctx.lr = 0x8276F080;
	sub_8270E370(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82766f68
	ctx.lr = 0x8276F08C;
	sub_82766F68(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x8276f0d8
	if (cr6.eq) goto loc_8276F0D8;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x8276f0d0
	if (cr6.eq) goto loc_8276F0D0;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x8276f0c8
	if (cr6.eq) goto loc_8276F0C8;
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x8276f0c0
	if (cr6.eq) goto loc_8276F0C0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826c4438
	ctx.lr = 0x8276F0C0;
	sub_826C4438(ctx, base);
loc_8276F0C0:
	// li r6,61
	ctx.r6.s64 = 61;
	// b 0x8276f0dc
	goto loc_8276F0DC;
loc_8276F0C8:
	// li r6,60
	ctx.r6.s64 = 60;
	// b 0x8276f0dc
	goto loc_8276F0DC;
loc_8276F0D0:
	// li r6,59
	ctx.r6.s64 = 59;
	// b 0x8276f0dc
	goto loc_8276F0DC;
loc_8276F0D8:
	// li r6,58
	ctx.r6.s64 = 58;
loc_8276F0DC:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r25,24
	ctx.r5.s64 = ctx.r25.s64 + 24;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82761aa0
	ctx.lr = 0x8276F0F4;
	sub_82761AA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// bl 0x826ed298
	ctx.lr = 0x8276F10C;
	sub_826ED298(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_8276F114:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276f184
	if (cr0.eq) goto loc_8276F184;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r24.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8276f170
	if (cr0.eq) goto loc_8276F170;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8276f14c
	goto loc_8276F14C;
loc_8276F148:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_8276F14C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276f148
	if (!cr6.eq) goto loc_8276F148;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_8276F170:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8276f114
	if (!cr6.eq) goto loc_8276F114;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8276f114
	goto loc_8276F114;
loc_8276F184:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_8276F188:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276f1c0
	if (cr6.eq) goto loc_8276F1C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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
	// bne 0x8276f1b8
	if (!cr0.eq) goto loc_8276F1B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276F1B8;
	sub_826ED298(ctx, base);
loc_8276F1B8:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8276f188
	goto loc_8276F188;
loc_8276F1C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e2128
	ctx.lr = 0x8276F1C8;
	sub_826E2128(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82766da8
	ctx.lr = 0x8276F1E8;
	sub_82766DA8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276f208
	if (cr0.eq) goto loc_8276F208;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x8276f20c
	if (!cr6.eq) goto loc_8276F20C;
loc_8276F208:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8276F20C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8276f274
	if (!cr0.eq) goto loc_8276F274;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f274
	if (cr6.eq) goto loc_8276F274;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8276f274
	if (cr0.eq) goto loc_8276F274;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276f244
	if (cr0.eq) goto loc_8276F244;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8276f248
	if (!cr6.eq) goto loc_8276F248;
loc_8276F244:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F248:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276f274
	if (!cr0.eq) goto loc_8276F274;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276bc80
	ctx.lr = 0x8276F25C;
	sub_8276BC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276f274
	if (cr0.eq) goto loc_8276F274;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
loc_8276F274:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276f288
	if (cr0.eq) goto loc_8276F288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8272dcd0
	ctx.lr = 0x8276F284;
	sub_8272DCD0(ctx, base);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
loc_8276F288:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276b250
	ctx.lr = 0x8276F2B4;
	sub_8276B250(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// beq cr6,0x8276f2f0
	if (cr6.eq) goto loc_8276F2F0;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x82770a24
	if (!cr6.eq) goto loc_82770A24;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_8276F2D4:
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8276f2f8
	if (!cr0.eq) goto loc_8276F2F8;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// b 0x8276f300
	goto loc_8276F300;
loc_8276F2F0:
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
	// b 0x8276f2d4
	goto loc_8276F2D4;
loc_8276F2F8:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8276F300:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f320
	if (cr6.eq) goto loc_8276F320;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8276f324
	if (!cr6.eq) goto loc_8276F324;
loc_8276F320:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F324:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82770a24
	if (!cr0.eq) goto loc_82770A24;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x8276f39c
	if (!cr6.eq) goto loc_8276F39C;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8276f348
	if (!cr0.eq) goto loc_8276F348;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8276f350
	goto loc_8276F350;
loc_8276F348:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8276F350:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82770a24
	if (!cr6.eq) goto loc_82770A24;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8276f374
	if (cr6.eq) goto loc_8276F374;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8276f378
	if (!cr6.eq) goto loc_8276F378;
loc_8276F374:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F378:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82770a24
	if (!cr0.eq) goto loc_82770A24;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276f394
	if (cr0.eq) goto loc_8276F394;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F394:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82770a24
	if (!cr6.eq) goto loc_82770A24;
loc_8276F39C:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8276f3c8
	if (!cr6.eq) goto loc_8276F3C8;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82770a24
	if (!cr6.eq) goto loc_82770A24;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276f3c0
	if (cr0.eq) goto loc_8276F3C0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F3C0:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82770a24
	if (!cr6.eq) goto loc_82770A24;
loc_8276F3C8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276acd0
	ctx.lr = 0x8276F3D4;
	sub_8276ACD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770214
	if (cr0.eq) goto loc_82770214;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x8276f40c
	if (!cr6.eq) goto loc_8276F40C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276acd0
	ctx.lr = 0x8276F3F0;
	sub_8276ACD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827702c0
	if (cr0.eq) goto loc_827702C0;
	// lwz r25,412(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8276F40C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276c6c0
	ctx.lr = 0x8276F41C;
	sub_8276C6C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770214
	if (cr0.eq) goto loc_82770214;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276c6c0
	ctx.lr = 0x8276F434;
	sub_8276C6C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770214
	if (cr0.eq) goto loc_82770214;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276c6c0
	ctx.lr = 0x8276F44C;
	sub_8276C6C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770214
	if (cr0.eq) goto loc_82770214;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x8276f4b4
	if (!cr6.eq) goto loc_8276F4B4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276c6c0
	ctx.lr = 0x8276F46C;
	sub_8276C6C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827702c0
	if (cr0.eq) goto loc_827702C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8276c6c0
	ctx.lr = 0x8276F484;
	sub_8276C6C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827702c0
	if (cr0.eq) goto loc_827702C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8276c6c0
	ctx.lr = 0x8276F49C;
	sub_8276C6C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827702c0
	if (cr0.eq) goto loc_827702C0;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8276F4B4:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bne cr6,0x8276f508
	if (!cr6.eq) goto loc_8276F508;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276f4dc
	if (cr0.eq) goto loc_8276F4DC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F4DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f508
	if (cr6.eq) goto loc_8276F508;
loc_8276F4E4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276f4fc
	if (cr0.eq) goto loc_8276F4FC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F4FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276f4e4
	if (!cr6.eq) goto loc_8276F4E4;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_8276F508:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276f518
	if (cr0.eq) goto loc_8276F518;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F518:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f544
	if (cr6.eq) goto loc_8276F544;
loc_8276F520:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276f538
	if (cr0.eq) goto loc_8276F538;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F538:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276f520
	if (!cr6.eq) goto loc_8276F520;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
loc_8276F544:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// b 0x8276f560
	goto loc_8276F560;
loc_8276F54C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r9,r9,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
loc_8276F560:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276f56c
	if (cr0.eq) goto loc_8276F56C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F56C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276f54c
	if (!cr6.eq) goto loc_8276F54C;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d6af8
	ctx.lr = 0x8276F584;
	sub_826D6AF8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276f5b0
	if (cr0.eq) goto loc_8276F5B0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F5B0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// bne cr6,0x8276f6a0
	if (!cr6.eq) goto loc_8276F6A0;
loc_8276F5C0:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276f5d8
	if (cr0.eq) goto loc_8276F5D8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8276F5D8:
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
loc_8276F5E4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f604
	if (cr6.eq) goto loc_8276F604;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bne cr6,0x8276f608
	if (!cr6.eq) goto loc_8276F608;
loc_8276F604:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8276F608:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82770144
	if (!cr0.eq) goto loc_82770144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8276ad58
	ctx.lr = 0x8276F618;
	sub_8276AD58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826ed228
	ctx.lr = 0x8276F628;
	sub_826ED228(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8276f5e4
	if (cr0.eq) goto loc_8276F5E4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r7,r3,36
	ctx.r7.s64 = ctx.r3.s64 + 36;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
loc_8276F640:
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8276f5e4
	if (!cr6.lt) goto loc_8276F5E4;
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi. r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276f680
	if (cr0.eq) goto loc_8276F680;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8276F664:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8276f680
	if (cr6.eq) goto loc_8276F680;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8276f664
	if (cr6.lt) goto loc_8276F664;
loc_8276F680:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82770214
	if (cr6.eq) goto loc_82770214;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// li r21,0
	ctx.r21.s64 = 0;
	// b 0x8276f640
	goto loc_8276F640;
loc_8276F698:
	// lwz r16,124(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r28,404(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
loc_8276F6A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r10,r10,-13696
	ctx.r10.s64 = ctx.r10.s64 + -13696;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82770104
	if (cr0.eq) goto loc_82770104;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82770104
	if (!cr0.eq) goto loc_82770104;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8272be48
	ctx.lr = 0x8276F6DC;
	sub_8272BE48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82770104
	if (cr0.eq) goto loc_82770104;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8272be48
	ctx.lr = 0x8276F6FC;
	sub_8272BE48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82770104
	if (cr0.eq) goto loc_82770104;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8276f718
	if (cr6.eq) goto loc_8276F718;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8276F718:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8276f72c
	if (cr6.eq) goto loc_8276F72C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276F72C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276f73c
	if (!cr6.eq) goto loc_8276F73C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82770104
	if (cr6.eq) goto loc_82770104;
loc_8276F73C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r22,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r22.u8);
	// beq cr6,0x8276f778
	if (cr6.eq) goto loc_8276F778;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8276f790
	if (cr6.eq) goto loc_8276F790;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// rlwinm r9,r9,0,15,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276f790
	if (!cr6.gt) goto loc_8276F790;
loc_8276F778:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
loc_8276F790:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r22,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r22.u8);
	// mr r15,r22
	ctx.r15.u64 = ctx.r22.u64;
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// bl 0x826ed228
	ctx.lr = 0x8276F7A4;
	sub_826ED228(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r20,r31,4
	ctx.r20.s64 = ctx.r31.s64 + 4;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_8276F7B0:
	// lwz r19,0(r20)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi r19,0
	cr0.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq 0x8276fba0
	if (cr0.eq) goto loc_8276FBA0;
	// lwz r26,16(r19)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276fb8c
	if (cr0.eq) goto loc_8276FB8C;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276f7f8
	if (cr6.eq) goto loc_8276F7F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// b 0x8276fb8c
	goto loc_8276FB8C;
loc_8276F7F8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8276fb8c
	if (!cr0.eq) goto loc_8276FB8C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276f820
	if (cr0.eq) goto loc_8276F820;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8276f824
	if (!cr6.eq) goto loc_8276F824;
loc_8276F820:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8276F824:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276fb8c
	if (cr0.eq) goto loc_8276FB8C;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8276f870
	if (cr6.eq) goto loc_8276F870;
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
loc_8276F838:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,14(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// bl 0x826e1be8
	ctx.lr = 0x8276F848;
	sub_826E1BE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r4,14(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 14);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826e1be8
	ctx.lr = 0x8276F858;
	sub_826E1BE8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82770214
	if (cr6.eq) goto loc_82770214;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r15
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8276f838
	if (cr6.lt) goto loc_8276F838;
loc_8276F870:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8272be48
	ctx.lr = 0x8276F888;
	sub_8272BE48(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8272be48
	ctx.lr = 0x8276F8A4;
	sub_8272BE48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8276fb8c
	if (cr0.eq) goto loc_8276FB8C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826ed228
	ctx.lr = 0x8276F8B4;
	sub_826ED228(ctx, base);
	// cmplw cr6,r3,r17
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x8276fb8c
	if (!cr6.eq) goto loc_8276FB8C;
	// cmplwi cr6,r22,8
	cr6.compare<uint32_t>(ctx.r22.u32, 8, ctx.xer);
	// beq cr6,0x82770138
	if (cr6.eq) goto loc_82770138;
	// lwz r24,12(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,20(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplw cr6,r29,r16
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8276fb48
	if (cr6.eq) goto loc_8276FB48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwinm r25,r11,27,30,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x82706f20
	ctx.lr = 0x8276F8F8;
	sub_82706F20(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8276f920
	if (cr0.eq) goto loc_8276F920;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8276F920:
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
	// beq 0x8276f9f8
	if (cr0.eq) goto loc_8276F9F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826e20d0
	ctx.lr = 0x8276F94C;
	sub_826E20D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276F958;
	sub_826ED298(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276f994
	if (!cr6.eq) goto loc_8276F994;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d6af8
	ctx.lr = 0x8276F978;
	sub_826D6AF8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8276F994:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276f9a8
	if (cr0.eq) goto loc_8276F9A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8276f9b4
	goto loc_8276F9B4;
loc_8276F9A8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_8276F9B4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f9d0
	if (cr6.eq) goto loc_8276F9D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276f9dc
	if (!cr6.gt) goto loc_8276F9DC;
loc_8276F9D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x826d7920
	ctx.lr = 0x8276F9DC;
	sub_826D7920(ctx, base);
loc_8276F9DC:
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
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// b 0x8276fab8
	goto loc_8276FAB8;
loc_8276F9F8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8276FA00:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8276fa70
	if (cr6.eq) goto loc_8276FA70;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8276fa34
	if (cr6.eq) goto loc_8276FA34;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8272be48
	ctx.lr = 0x8276FA2C;
	sub_8272BE48(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8276fa3c
	if (cr6.eq) goto loc_8276FA3C;
loc_8276FA34:
	// lwz r28,12(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x8276fa00
	goto loc_8276FA00;
loc_8276FA3C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276fa70
	if (cr6.eq) goto loc_8276FA70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// rlwinm r6,r11,0,27,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// bl 0x826ed1c8
	ctx.lr = 0x8276FA5C;
	sub_826ED1C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276FA68;
	sub_826ED298(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8276fab8
	goto loc_8276FAB8;
loc_8276FA70:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8276fa80
	goto loc_8276FA80;
loc_8276FA7C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_8276FA80:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8276fa7c
	if (!cr6.eq) goto loc_8276FA7C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwimi r11,r10,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8276FAB8:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// rlwinm. r10,r11,0,13,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276fad0
	if (cr0.eq) goto loc_8276FAD0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// sth r11,14(r27)
	PPC_STORE_U16(ctx.r27.u32 + 14, ctx.r11.u16);
	// b 0x8276fadc
	goto loc_8276FADC;
loc_8276FAD0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826e1b70
	ctx.lr = 0x8276FAD8;
	sub_826E1B70(ctx, base);
	// sth r3,14(r27)
	PPC_STORE_U16(ctx.r27.u32 + 14, ctx.r3.u16);
loc_8276FADC:
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r3,592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276faf8
	if (cr0.eq) goto loc_8276FAF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276fb04
	goto loc_8276FB04;
loc_8276FAF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8276FB04:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276fb20
	if (cr6.eq) goto loc_8276FB20;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276fb2c
	if (!cr6.gt) goto loc_8276FB2C;
loc_8276FB20:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826d7920
	ctx.lr = 0x8276FB28;
	sub_826D7920(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8276FB2C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,404(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
loc_8276FB48:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// stwx r31,r21,r9
	PPC_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r31.u32);
	// stwx r26,r21,r8
	PPC_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r26.u32);
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// slw r11,r11,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r22.u8 & 0x3F));
	// slw r10,r10,r22
	ctx.r10.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r22.u8 & 0x3F));
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// andc r10,r14,r10
	ctx.r10.u64 = ctx.r14.u64 & ~ctx.r10.u64;
	// or r14,r10,r11
	ctx.r14.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8276FB8C:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x8276f7b0
	if (!cr6.eq) goto loc_8276F7B0;
	// addi r20,r19,8
	ctx.r20.s64 = ctx.r19.s64 + 8;
	// b 0x8276f7b0
	goto loc_8276F7B0;
loc_8276FBA0:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8276fe74
	if (cr6.eq) goto loc_8276FE74;
	// addi r26,r1,160
	ctx.r26.s64 = ctx.r1.s64 + 160;
loc_8276FBB0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13696
	ctx.r11.s64 = ctx.r11.s64 + -13696;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276fe64
	if (cr0.eq) goto loc_8276FE64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826ed228
	ctx.lr = 0x8276FBD8;
	sub_826ED228(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8276fe08
	if (!cr0.eq) goto loc_8276FE08;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,412(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// bl 0x8276bbd0
	ctx.lr = 0x8276FBFC;
	sub_8276BBD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82770214
	if (!cr0.eq) goto loc_82770214;
	// lwz r24,404(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826e22b8
	ctx.lr = 0x8276FC14;
	sub_826E22B8(ctx, base);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276fc2c
	if (cr0.eq) goto loc_8276FC2C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276FC2C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276fcb8
	if (cr6.eq) goto loc_8276FCB8;
loc_8276FC38:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13696
	ctx.r11.s64 = ctx.r11.s64 + -13696;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770214
	if (cr0.eq) goto loc_82770214;
	// lwz r29,404(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826e22b8
	ctx.lr = 0x8276FC60;
	sub_826E22B8(ctx, base);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8276fc90
	if (!cr6.eq) goto loc_8276FC90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,412(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// bl 0x8276bbd0
	ctx.lr = 0x8276FC84;
	sub_8276BBD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82770214
	if (!cr0.eq) goto loc_82770214;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8276FC90:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276fca4
	if (cr0.eq) goto loc_8276FCA4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8276FCA4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8276fc38
	if (!cr6.eq) goto loc_8276FC38;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bgt cr6,0x82770214
	if (cr6.gt) goto loc_82770214;
	// lwz r24,404(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
loc_8276FCB8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82761c08
	ctx.lr = 0x8276FCCC;
	sub_82761C08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r16,24
	ctx.r11.s64 = ctx.r16.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// ori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-28
	ctx.r6.s64 = ctx.r10.s64 + -28;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r9.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276fd18
	if (cr0.eq) goto loc_8276FD18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276FD18:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276fd7c
	if (cr6.eq) goto loc_8276FD7C;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
loc_8276FD28:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826e22b8
	ctx.lr = 0x8276FD34;
	sub_826E22B8(ctx, base);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8276fd60
	if (!cr6.eq) goto loc_8276FD60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826e20d0
	ctx.lr = 0x8276FD4C;
	sub_826E20D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ed298
	ctx.lr = 0x8276FD58;
	sub_826ED298(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8276FD60:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276fd74
	if (cr0.eq) goto loc_8276FD74;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8276FD74:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8276fd28
	if (!cr6.eq) goto loc_8276FD28;
loc_8276FD7C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x826e1b70
	ctx.lr = 0x8276FD90;
	sub_826E1B70(ctx, base);
	// sth r3,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r3.u16);
	// lwz r3,592(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 592);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276fdac
	if (cr0.eq) goto loc_8276FDAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276fdb8
	goto loc_8276FDB8;
loc_8276FDAC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8276FDB8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276fdd4
	if (cr6.eq) goto loc_8276FDD4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276fde0
	if (!cr6.gt) goto loc_8276FDE0;
loc_8276FDD4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826d7920
	ctx.lr = 0x8276FDDC;
	sub_826D7920(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8276FDE0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r28,404(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_8276FE08:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// rlwinm r9,r10,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
loc_8276FE18:
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8276fe4c
	if (!cr6.lt) goto loc_8276FE4C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8276fe3c
	if (cr6.eq) goto loc_8276FE3C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8276fe18
	goto loc_8276FE18;
loc_8276FE3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826e20d0
	ctx.lr = 0x8276FE48;
	sub_826E20D0(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_8276FE4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82705c60
	ctx.lr = 0x8276FE58;
	sub_82705C60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8276FE64:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r15
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8276fbb0
	if (cr6.lt) goto loc_8276FBB0;
loc_8276FE74:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x827700b4
	if (cr6.eq) goto loc_827700B4;
	// lwz r24,104(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
	// li r25,3
	ctx.r25.s64 = 3;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8276FE94:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r30,12(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// beq cr6,0x8276fecc
	if (cr6.eq) goto loc_8276FECC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
loc_8276FEAC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8276fecc
	if (cr6.eq) goto loc_8276FECC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8276feac
	if (cr6.lt) goto loc_8276FEAC;
loc_8276FECC:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x827700a4
	if (!cr6.eq) goto loc_827700A4;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r10,r11,19,12,12
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 19) & 0x80000) | (ctx.r10.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// rlwinm r10,r10,0,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF80000;
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
loc_8276FF04:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8276ffa4
	if (!cr6.eq) goto loc_8276FFA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,17,28,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xE;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// rlwinm r9,r11,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// srw r11,r14,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r14.u32 >> (ctx.r6.u8 & 0x3F));
	// slw r23,r26,r9
	ctx.r23.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// or r31,r23,r31
	ctx.r31.u64 = ctx.r23.u64 | ctx.r31.u64;
	// slw r23,r26,r11
	ctx.r23.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// slw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// or r29,r23,r29
	ctx.r29.u64 = ctx.r23.u64 | ctx.r29.u64;
	// slw r23,r25,r8
	ctx.r23.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r8.u8 & 0x3F));
	// andc r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r23.u64;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwimi r11,r10,0,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r10,r11,17,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xE;
	// slw r8,r25,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// not r9,r8
	ctx.r9.u64 = ~ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r10,r11,0,24,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFF00FF) | (ctx.r10.u64 & 0xFF00);
	// rlwinm r11,r10,18,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1C;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stwx r3,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwimi r10,r11,0,16,12
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFF8FFFF) | (ctx.r10.u64 & 0x70000);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
loc_8276FFA4:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8276ff04
	if (!cr0.eq) goto loc_8276FF04;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ffcc
	if (cr0.eq) goto loc_8276FFCC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276ffd8
	goto loc_8276FFD8;
loc_8276FFCC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8276FFD8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276fff4
	if (cr6.eq) goto loc_8276FFF4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82770004
	if (!cr6.gt) goto loc_82770004;
loc_8276FFF4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8276c288
	ctx.lr = 0x82770000;
	sub_8276C288(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82770004:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,28
	ctx.r5.s64 = 28;
	// mulli r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 * 28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x828d2930
	ctx.lr = 0x82770028;
	sub_828D2930(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827700a4
	if (!cr6.eq) goto loc_827700A4;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x827700a4
	if (!cr6.eq) goto loc_827700A4;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x826d6598
	ctx.lr = 0x82770050;
	sub_826D6598(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827700a4
	if (cr0.eq) goto loc_827700A4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8277005C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82770098
	if (cr6.eq) goto loc_82770098;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r9,r11,0
	ctx.r9.s64 = ctx.r11.s64 + 0;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82770090
	if (cr0.eq) goto loc_82770090;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827700a4
	if (!cr6.eq) goto loc_827700A4;
loc_82770090:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8277005c
	goto loc_8277005C;
loc_82770098:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_827700A4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r15
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8276fe94
	if (cr6.lt) goto loc_8276FE94;
loc_827700B4:
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82770104
	if (!cr0.eq) goto loc_82770104;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82770104
	if (!cr6.eq) goto loc_82770104;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x82770104
	if (!cr6.eq) goto loc_82770104;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x826d6598
	ctx.lr = 0x827700F0;
	sub_826D6598(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770104
	if (cr0.eq) goto loc_82770104;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82770104:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8277011c
	if (cr0.eq) goto loc_8277011C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8277011C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// bne cr6,0x8276f698
	if (!cr6.eq) goto loc_8276F698;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8276f5c0
	goto loc_8276F5C0;
loc_82770138:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826c4438
	ctx.lr = 0x82770144;
	sub_826C4438(ctx, base);
loc_82770144:
	// lwz r23,404(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8270d520
	ctx.lr = 0x82770154;
	sub_8270D520(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x827701d4
	if (cr6.eq) goto loc_827701D4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82770180
	goto loc_82770180;
loc_82770170:
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82770180:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8277018c
	if (cr0.eq) goto loc_8277018C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8277018C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82770170
	if (!cr6.eq) goto loc_82770170;
	// lwz r11,412(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bne 0x827701c4
	if (!cr0.eq) goto loc_827701C4;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827701C4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82770214
	if (cr6.gt) goto loc_82770214;
	// lwz r23,404(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// li r21,0
	ctx.r21.s64 = 0;
loc_827701D4:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r22,412(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8272c7f8
	ctx.lr = 0x827701F8;
	sub_8272C7F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82770344
	if (cr6.eq) goto loc_82770344;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82770214
	if (!cr6.eq) goto loc_82770214;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82770214:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,404(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827702bc
	if (!cr6.eq) goto loc_827702BC;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8276bcd8
	ctx.lr = 0x8277023C;
	sub_8276BCD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277072c
	if (cr0.eq) goto loc_8277072C;
	// lbz r31,81(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr. r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770264
	if (cr0.eq) goto loc_82770264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276a990
	ctx.lr = 0x82770260;
	sub_8276A990(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82770264:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x826d6610
	ctx.lr = 0x8277027C;
	sub_826D6610(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lwz r31,412(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r11,r10,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x8276bed8
	ctx.lr = 0x827702B4;
	sub_8276BED8(ctx, base);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82770334
	goto loc_82770334;
loc_827702BC:
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_827702C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276bcd8
	ctx.lr = 0x827702D0;
	sub_8276BCD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770730
	if (cr0.eq) goto loc_82770730;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276bcd8
	ctx.lr = 0x827702E8;
	sub_8276BCD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770730
	if (cr0.eq) goto loc_82770730;
	// lbz r31,81(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r29,412(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8276bed8
	ctx.lr = 0x82770310;
	sub_8276BED8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276bed8
	ctx.lr = 0x82770330;
	sub_8276BED8(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82770334:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// oris r11,r11,3072
	ctx.r11.u64 = ctx.r11.u64 | 201326592;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x82770730
	goto loc_82770730;
loc_82770344:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82770358
	if (cr6.eq) goto loc_82770358;
	// bl 0x826dc460
	ctx.lr = 0x82770358;
	sub_826DC460(ctx, base);
loc_82770358:
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,592(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 592);
	// bl 0x8276cd90
	ctx.lr = 0x82770378;
	sub_8276CD90(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82766da8
	ctx.lr = 0x8277038C;
	sub_82766DA8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x827703a8
	if (cr6.lt) goto loc_827703A8;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x827703ac
	if (!cr6.gt) goto loc_827703AC;
loc_827703A8:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_827703AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770488
	if (cr0.eq) goto loc_82770488;
loc_827703B4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_827703B8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82770494
	if (cr6.eq) goto loc_82770494;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r9,r21,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r21.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8277042c
	if (cr0.eq) goto loc_8277042C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
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
	// beq 0x8277042c
	if (cr0.eq) goto loc_8277042C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_827703FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277042c
	if (cr0.eq) goto loc_8277042C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r9,r21,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r21.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82770434
	if (!cr0.eq) goto loc_82770434;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x827703fc
	goto loc_827703FC;
loc_8277042C:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x827703b8
	goto loc_827703B8;
loc_82770434:
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// beq cr6,0x82770450
	if (cr6.eq) goto loc_82770450;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// bne cr6,0x82770474
	if (!cr6.eq) goto loc_82770474;
loc_82770450:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8270e370
	ctx.lr = 0x82770464;
	sub_8270E370(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82766f68
	ctx.lr = 0x82770470;
	sub_82766F68(ctx, base);
	// b 0x827703b4
	goto loc_827703B4;
loc_82770474:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,25128
	ctx.r5.s64 = ctx.r11.s64 + 25128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826c4438
	ctx.lr = 0x82770488;
	sub_826C4438(ctx, base);
loc_82770488:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82766f68
	ctx.lr = 0x82770494;
	sub_82766F68(ctx, base);
loc_82770494:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r31,r22,12
	ctx.r31.s64 = ctx.r22.s64 + 12;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,48(r22)
	PPC_STORE_U32(ctx.r22.u32 + 48, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x82770590
	if (!cr6.eq) goto loc_82770590;
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x827704d0
	goto loc_827704D0;
loc_827704C4:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827704D0:
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x827704c4
	if (!cr6.eq) goto loc_827704C4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// b 0x827704f0
	goto loc_827704F0;
loc_827704E8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_827704F0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827704e8
	if (!cr6.eq) goto loc_827704E8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82770514
	goto loc_82770514;
loc_82770510:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_82770514:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82770510
	if (!cr6.eq) goto loc_82770510;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// b 0x8277053c
	goto loc_8277053C;
loc_82770534:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8277053C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82770534
	if (!cr6.eq) goto loc_82770534;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8270d7c8
	ctx.lr = 0x82770560;
	sub_8270D7C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8276bc80
	ctx.lr = 0x82770570;
	sub_8276BC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827705c8
	if (!cr0.eq) goto loc_827705C8;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826c4438
	ctx.lr = 0x82770584;
	sub_826C4438(ctx, base);
loc_82770584:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82770590:
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82770584
	if (!cr6.eq) goto loc_82770584;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// b 0x827705b0
	goto loc_827705B0;
loc_827705A8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_827705B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827705a8
	if (!cr6.eq) goto loc_827705A8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_827705C8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8276bc80
	ctx.lr = 0x827705D8;
	sub_8276BC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bne 0x827705ec
	if (!cr0.eq) goto loc_827705EC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x826c4438
	ctx.lr = 0x827705EC;
	sub_826C4438(ctx, base);
loc_827705EC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8276bc80
	ctx.lr = 0x827705F8;
	sub_8276BC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277060c
	if (!cr0.eq) goto loc_8277060C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826c4438
	ctx.lr = 0x8277060C;
	sub_826C4438(ctx, base);
loc_8277060C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82770628
	if (cr0.eq) goto loc_82770628;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8277062c
	if (!cr6.eq) goto loc_8277062C;
loc_82770628:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8277062C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277067c
	if (!cr0.eq) goto loc_8277067C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8277067c
	if (cr6.eq) goto loc_8277067C;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8277067c
	if (cr0.eq) goto loc_8277067C;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82770664
	if (cr0.eq) goto loc_82770664;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82770668
	if (!cr6.eq) goto loc_82770668;
loc_82770664:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82770668:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277067c
	if (!cr0.eq) goto loc_8277067C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8276bc80
	ctx.lr = 0x8277067C;
	sub_8276BC80(ctx, base);
loc_8277067C:
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// li r20,1
	ctx.r20.s64 = 1;
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770698
	if (cr0.eq) goto loc_82770698;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x827706a4
	goto loc_827706A4;
loc_82770698:
	// lwz r11,24(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_827706A4:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82770704
	if (cr6.eq) goto loc_82770704;
	// li r24,13568
	ctx.r24.s64 = 13568;
loc_827706B4:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827706cc
	if (cr0.eq) goto loc_827706CC;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// b 0x827706d4
	goto loc_827706D4;
loc_827706CC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r25,r11,-32
	ctx.r25.s64 = ctx.r11.s64 + -32;
loc_827706D4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r10,r11,8,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82770758
	if (!cr0.eq) goto loc_82770758;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_827706E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,592(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 592);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8270ca38
	ctx.lr = 0x827706F8;
	sub_8270CA38(ctx, base);
loc_827706F8:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x827706b4
	if (!cr6.eq) goto loc_827706B4;
loc_82770704:
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82770910
	if (!cr0.eq) goto loc_82770910;
	// lwz r11,24(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
loc_82770714:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-32
	ctx.r31.s64 = ctx.r11.s64 + -32;
loc_8277071C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827708f4
	if (!cr6.eq) goto loc_827708F4;
	// lwz r28,404(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// stb r20,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r20.u8);
loc_8277072C:
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82770730:
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82770930
	if (cr6.eq) goto loc_82770930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276c1e8
	ctx.lr = 0x82770744;
	sub_8276C1E8(ctx, base);
	// addi r11,r28,872
	ctx.r11.s64 = ctx.r28.s64 + 872;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// b 0x82770930
	goto loc_82770930;
loc_82770758:
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827706f8
	if (cr0.eq) goto loc_827706F8;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// addi r27,r28,36
	ctx.r27.s64 = ctx.r28.s64 + 36;
loc_82770774:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827706e8
	if (!cr6.lt) goto loc_827706E8;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r5,592(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 592);
	// bl 0x8270ca38
	ctx.lr = 0x827707A8;
	sub_8270CA38(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_827707AC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827707f8
	if (cr6.eq) goto loc_827707F8;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r9,r21,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r21.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x827707f0
	if (cr0.eq) goto loc_827707F0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// subf r9,r24,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r24.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827707f0
	if (cr0.eq) goto loc_827707F0;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82770808
	if (!cr6.eq) goto loc_82770808;
loc_827707F0:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x827707ac
	goto loc_827707AC;
loc_827707F8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// ble cr6,0x827708e8
	if (!cr6.gt) goto loc_827708E8;
loc_82770808:
	// rlwinm r9,r28,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// rlwinm r29,r10,27,24,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82765d48
	ctx.lr = 0x82770830;
	sub_82765D48(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e2128
	ctx.lr = 0x8277083C;
	sub_826E2128(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827708e8
	if (cr0.eq) goto loc_827708E8;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r10,r11,0,13,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82770878
	if (cr0.eq) goto loc_82770878;
	// clrlwi r10,r29,30
	ctx.r10.u64 = ctx.r29.u32 & 0x3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// b 0x82770884
	goto loc_82770884;
loc_82770878:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b70
	ctx.lr = 0x82770880;
	sub_826E1B70(ctx, base);
	// sth r3,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r3.u16);
loc_82770884:
	// lwz r3,592(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 592);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277089c
	if (cr0.eq) goto loc_8277089C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x827708a8
	goto loc_827708A8;
loc_8277089C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_827708A8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827708c4
	if (cr6.eq) goto loc_827708C4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x827708d0
	if (!cr6.gt) goto loc_827708D0;
loc_827708C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826d7920
	ctx.lr = 0x827708CC;
	sub_826D7920(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_827708D0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_827708E8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x82770774
	goto loc_82770774;
loc_827708F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826fa788
	ctx.lr = 0x82770900;
	sub_826FA788(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82770714
	if (cr0.eq) goto loc_82770714;
loc_82770910:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// b 0x8277071c
	goto loc_8277071C;
loc_82770918:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82766da8
	ctx.lr = 0x82770930;
	sub_82766DA8(ctx, base);
loc_82770930:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82770918
	if (!cr6.eq) goto loc_82770918;
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82770a24
	if (cr6.eq) goto loc_82770A24;
loc_82770944:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82770954
	if (cr0.eq) goto loc_82770954;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82770954:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82770a0c
	if (!cr0.eq) goto loc_82770A0C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82770970
	if (cr6.eq) goto loc_82770970;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8277097c
	goto loc_8277097C;
loc_82770970:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8277097C:
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
	// bne 0x827709d0
	if (!cr0.eq) goto loc_827709D0;
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
	ctx.lr = 0x827709D0;
	sub_826D6E10(ctx, base);
loc_827709D0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x826edb48
	ctx.lr = 0x827709E4;
	sub_826EDB48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d6be8
	ctx.lr = 0x827709EC;
	sub_826D6BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82770944
	if (cr0.eq) goto loc_82770944;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82766da8
	ctx.lr = 0x82770A08;
	sub_82766DA8(ctx, base);
	// b 0x82770944
	goto loc_82770944;
loc_82770A0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826dc460
	ctx.lr = 0x82770A14;
	sub_826DC460(ctx, base);
	// addi r11,r28,872
	ctx.r11.s64 = ctx.r28.s64 + 872;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_82770A24:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82770a38
	if (cr0.eq) goto loc_82770A38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8272dcd0
	ctx.lr = 0x82770A38;
	sub_8272DCD0(ctx, base);
loc_82770A38:
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// b 0x82770a44
	goto loc_82770A44;
loc_82770A40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82770A44:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x828d2830
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770A4C"))) PPC_WEAK_FUNC(sub_82770A4C);
PPC_FUNC_IMPL(__imp__sub_82770A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82770A50"))) PPC_WEAK_FUNC(sub_82770A50);
PPC_FUNC_IMPL(__imp__sub_82770A50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828d2890
	sub_828D2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770A54"))) PPC_WEAK_FUNC(sub_82770A54);
PPC_FUNC_IMPL(__imp__sub_82770A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82770A58"))) PPC_WEAK_FUNC(sub_82770A58);
PPC_FUNC_IMPL(__imp__sub_82770A58) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x82770A60;
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
	// blt cr6,0x82770a88
	if (cr6.lt) goto loc_82770A88;
	// li r27,43
	ctx.r27.s64 = 43;
	// b 0x82770a90
	goto loc_82770A90;
loc_82770A88:
	// li r27,45
	ctx.r27.s64 = 45;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_82770A90:
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
loc_82770ADC:
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
	ctx.lr = 0x82770B1C;
	sub_828D1B68(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x82770adc
	if (cr6.lt) goto loc_82770ADC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,29664
	ctx.r4.s64 = ctx.r11.s64 + 29664;
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
	ctx.lr = 0x82770B4C;
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

__attribute__((alias("__imp__sub_82770B5C"))) PPC_WEAK_FUNC(sub_82770B5C);
PPC_FUNC_IMPL(__imp__sub_82770B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82770B60"))) PPC_WEAK_FUNC(sub_82770B60);
PPC_FUNC_IMPL(__imp__sub_82770B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82770B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82770ba4
	if (!cr6.eq) goto loc_82770BA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,733
	ctx.r7.s64 = 733;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82770BA4;
	sub_826CA560(ctx, base);
loc_82770BA4:
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82770BB0;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82770c14
	if (!cr6.eq) goto loc_82770C14;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82770bd4
	if (cr6.eq) goto loc_82770BD4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82770BD4;
	sub_826D0328(ctx, base);
loc_82770BD4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82770c0c
	if (cr6.eq) goto loc_82770C0C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82770c0c
	if (cr6.eq) goto loc_82770C0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82770C0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82770C0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82770c6c
	goto loc_82770C6C;
loc_82770C14:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82770c30
	if (cr6.eq) goto loc_82770C30;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82770C30;
	sub_826D0328(ctx, base);
loc_82770C30:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82770c68
	if (cr6.eq) goto loc_82770C68;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82770c68
	if (cr6.eq) goto loc_82770C68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82770C68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82770C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82770C6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770C74"))) PPC_WEAK_FUNC(sub_82770C74);
PPC_FUNC_IMPL(__imp__sub_82770C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82770C78"))) PPC_WEAK_FUNC(sub_82770C78);
PPC_FUNC_IMPL(__imp__sub_82770C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82770C80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82770cbc
	if (!cr6.eq) goto loc_82770CBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,817
	ctx.r7.s64 = 817;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82770CBC;
	sub_826CA560(ctx, base);
loc_82770CBC:
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82770CC8;
	sub_826CFD18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82770CD8;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82770d44
	if (cr6.eq) goto loc_82770D44;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82770d44
	if (!cr6.eq) goto loc_82770D44;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82770d04
	if (cr6.eq) goto loc_82770D04;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82770D04;
	sub_826D0328(ctx, base);
loc_82770D04:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82770d3c
	if (cr6.eq) goto loc_82770D3C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82770d3c
	if (cr6.eq) goto loc_82770D3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82770D3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82770D3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82770d9c
	goto loc_82770D9C;
loc_82770D44:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82770d60
	if (cr6.eq) goto loc_82770D60;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82770D60;
	sub_826D0328(ctx, base);
loc_82770D60:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82770d98
	if (cr6.eq) goto loc_82770D98;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82770d98
	if (cr6.eq) goto loc_82770D98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82770D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82770D98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82770D9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770DA4"))) PPC_WEAK_FUNC(sub_82770DA4);
PPC_FUNC_IMPL(__imp__sub_82770DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82770DA8"))) PPC_WEAK_FUNC(sub_82770DA8);
PPC_FUNC_IMPL(__imp__sub_82770DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82770de0
	if (cr6.eq) goto loc_82770DE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x826d0328
	ctx.lr = 0x82770DE0;
	sub_826D0328(ctx, base);
loc_82770DE0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82770e18
	if (cr6.eq) goto loc_82770E18;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82770e18
	if (cr6.eq) goto loc_82770E18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82770E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82770E18:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82770E34"))) PPC_WEAK_FUNC(sub_82770E34);
PPC_FUNC_IMPL(__imp__sub_82770E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82770E38"))) PPC_WEAK_FUNC(sub_82770E38);
PPC_FUNC_IMPL(__imp__sub_82770E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82770E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82770e6c
	if (cr6.eq) goto loc_82770E6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x826d0328
	ctx.lr = 0x82770E6C;
	sub_826D0328(ctx, base);
loc_82770E6C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82770ea8
	if (cr6.eq) goto loc_82770EA8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82770ea8
	if (cr6.eq) goto loc_82770EA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82770EA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82770EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770EB4"))) PPC_WEAK_FUNC(sub_82770EB4);
PPC_FUNC_IMPL(__imp__sub_82770EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82770EB8"))) PPC_WEAK_FUNC(sub_82770EB8);
PPC_FUNC_IMPL(__imp__sub_82770EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82770EC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82770efc
	if (!cr6.eq) goto loc_82770EFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,988
	ctx.r7.s64 = 988;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82770EFC;
	sub_826CA560(ctx, base);
loc_82770EFC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82770f18
	if (cr6.eq) goto loc_82770F18;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82770F18;
	sub_826D0328(ctx, base);
loc_82770F18:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82770f54
	if (cr6.eq) goto loc_82770F54;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82770f54
	if (cr6.eq) goto loc_82770F54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,63
	ctx.r6.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,252(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82770F54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82770F54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770F60"))) PPC_WEAK_FUNC(sub_82770F60);
PPC_FUNC_IMPL(__imp__sub_82770F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82770F68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x826d0020
	ctx.lr = 0x82770F88;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82770ff0
	if (!cr6.eq) goto loc_82770FF0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82770fac
	if (cr6.eq) goto loc_82770FAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82770FAC;
	sub_826D0328(ctx, base);
loc_82770FAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82770fe8
	if (cr6.eq) goto loc_82770FE8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82770fe8
	if (cr6.eq) goto loc_82770FE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82770FE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82770FE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277104c
	goto loc_8277104C;
loc_82770FF0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277100c
	if (cr6.eq) goto loc_8277100C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x8277100C;
	sub_826D0328(ctx, base);
loc_8277100C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771048
	if (cr6.eq) goto loc_82771048;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82771048
	if (cr6.eq) goto loc_82771048;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82771048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277104C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771054"))) PPC_WEAK_FUNC(sub_82771054);
PPC_FUNC_IMPL(__imp__sub_82771054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82771058"))) PPC_WEAK_FUNC(sub_82771058);
PPC_FUNC_IMPL(__imp__sub_82771058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82771060;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8277109c
	if (!cr6.eq) goto loc_8277109C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1097
	ctx.r7.s64 = 1097;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8277109C;
	sub_826CA560(ctx, base);
loc_8277109C:
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cfd18
	ctx.lr = 0x827710A8;
	sub_826CFD18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cfd18
	ctx.lr = 0x827710B8;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771124
	if (cr6.eq) goto loc_82771124;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82771124
	if (cr6.eq) goto loc_82771124;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827710e4
	if (cr6.eq) goto loc_827710E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x827710E4;
	sub_826D0328(ctx, base);
loc_827710E4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8277111c
	if (cr6.eq) goto loc_8277111C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277111c
	if (cr6.eq) goto loc_8277111C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8277111C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277111C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277117c
	goto loc_8277117C;
loc_82771124:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82771140
	if (cr6.eq) goto loc_82771140;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771140;
	sub_826D0328(ctx, base);
loc_82771140:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82771178
	if (cr6.eq) goto loc_82771178;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82771178
	if (cr6.eq) goto loc_82771178;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82771178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771178:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277117C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771184"))) PPC_WEAK_FUNC(sub_82771184);
PPC_FUNC_IMPL(__imp__sub_82771184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82771188"))) PPC_WEAK_FUNC(sub_82771188);
PPC_FUNC_IMPL(__imp__sub_82771188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82771190;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x827711cc
	if (!cr6.eq) goto loc_827711CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1154
	ctx.r7.s64 = 1154;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827711CC;
	sub_826CA560(ctx, base);
loc_827711CC:
	// li r4,934
	ctx.r4.s64 = 934;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x827711D8;
	sub_826CFD18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x8277123c
	if (cr0.eq) goto loc_8277123C;
	// beq cr6,0x827711fc
	if (cr6.eq) goto loc_827711FC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x827711FC;
	sub_826D0328(ctx, base);
loc_827711FC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82771234
	if (cr6.eq) goto loc_82771234;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771234
	if (cr6.eq) goto loc_82771234;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82771234;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771234:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82771290
	goto loc_82771290;
loc_8277123C:
	// beq cr6,0x82771254
	if (cr6.eq) goto loc_82771254;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771254;
	sub_826D0328(ctx, base);
loc_82771254:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277128c
	if (cr6.eq) goto loc_8277128C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8277128c
	if (cr6.eq) goto loc_8277128C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8277128C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277128C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82771290:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771298"))) PPC_WEAK_FUNC(sub_82771298);
PPC_FUNC_IMPL(__imp__sub_82771298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827712A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x827712dc
	if (!cr6.eq) goto loc_827712DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1208
	ctx.r7.s64 = 1208;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827712DC;
	sub_826CA560(ctx, base);
loc_827712DC:
	// li r4,935
	ctx.r4.s64 = 935;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x827712E8;
	sub_826CFD18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x8277134c
	if (cr0.eq) goto loc_8277134C;
	// beq cr6,0x8277130c
	if (cr6.eq) goto loc_8277130C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x8277130C;
	sub_826D0328(ctx, base);
loc_8277130C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82771344
	if (cr6.eq) goto loc_82771344;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771344
	if (cr6.eq) goto loc_82771344;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82771344;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771344:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827713a0
	goto loc_827713A0;
loc_8277134C:
	// beq cr6,0x82771364
	if (cr6.eq) goto loc_82771364;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771364;
	sub_826D0328(ctx, base);
loc_82771364:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277139c
	if (cr6.eq) goto loc_8277139C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8277139c
	if (cr6.eq) goto loc_8277139C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8277139C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277139C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827713A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827713A8"))) PPC_WEAK_FUNC(sub_827713A8);
PPC_FUNC_IMPL(__imp__sub_827713A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827713B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x827713ec
	if (!cr6.eq) goto loc_827713EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1262
	ctx.r7.s64 = 1262;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827713EC;
	sub_826CA560(ctx, base);
loc_827713EC:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x827713F8;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8277145c
	if (!cr6.eq) goto loc_8277145C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277141c
	if (cr6.eq) goto loc_8277141C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x8277141C;
	sub_826D0328(ctx, base);
loc_8277141C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82771454
	if (cr6.eq) goto loc_82771454;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771454
	if (cr6.eq) goto loc_82771454;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82771454;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771454:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827714b4
	goto loc_827714B4;
loc_8277145C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82771478
	if (cr6.eq) goto loc_82771478;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771478;
	sub_826D0328(ctx, base);
loc_82771478:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827714b0
	if (cr6.eq) goto loc_827714B0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827714b0
	if (cr6.eq) goto loc_827714B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827714B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827714B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827714B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827714BC"))) PPC_WEAK_FUNC(sub_827714BC);
PPC_FUNC_IMPL(__imp__sub_827714BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827714C0"))) PPC_WEAK_FUNC(sub_827714C0);
PPC_FUNC_IMPL(__imp__sub_827714C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827714C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82771504
	if (!cr6.eq) goto loc_82771504;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1316
	ctx.r7.s64 = 1316;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82771504;
	sub_826CA560(ctx, base);
loc_82771504:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82771510;
	sub_826CFD18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x82771574
	if (!cr0.eq) goto loc_82771574;
	// beq cr6,0x82771534
	if (cr6.eq) goto loc_82771534;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771534;
	sub_826D0328(ctx, base);
loc_82771534:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277156c
	if (cr6.eq) goto loc_8277156C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8277156c
	if (cr6.eq) goto loc_8277156C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,19
	ctx.r6.s64 = 19;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8277156C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277156C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827715c8
	goto loc_827715C8;
loc_82771574:
	// beq cr6,0x8277158c
	if (cr6.eq) goto loc_8277158C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x8277158C;
	sub_826D0328(ctx, base);
loc_8277158C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827715c4
	if (cr6.eq) goto loc_827715C4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827715c4
	if (cr6.eq) goto loc_827715C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,19
	ctx.r6.s64 = 19;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827715C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827715C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827715C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827715D0"))) PPC_WEAK_FUNC(sub_827715D0);
PPC_FUNC_IMPL(__imp__sub_827715D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827715D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82771614
	if (!cr6.eq) goto loc_82771614;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1367
	ctx.r7.s64 = 1367;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82771614;
	sub_826CA560(ctx, base);
loc_82771614:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82771620;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82771684
	if (!cr6.eq) goto loc_82771684;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82771644
	if (cr6.eq) goto loc_82771644;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771644;
	sub_826D0328(ctx, base);
loc_82771644:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277167c
	if (cr6.eq) goto loc_8277167C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8277167c
	if (cr6.eq) goto loc_8277167C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8277167C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277167C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827716dc
	goto loc_827716DC;
loc_82771684:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827716a0
	if (cr6.eq) goto loc_827716A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x827716A0;
	sub_826D0328(ctx, base);
loc_827716A0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827716d8
	if (cr6.eq) goto loc_827716D8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827716d8
	if (cr6.eq) goto loc_827716D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827716D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827716D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827716DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827716E4"))) PPC_WEAK_FUNC(sub_827716E4);
PPC_FUNC_IMPL(__imp__sub_827716E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827716E8"))) PPC_WEAK_FUNC(sub_827716E8);
PPC_FUNC_IMPL(__imp__sub_827716E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827716F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8277172c
	if (!cr6.eq) goto loc_8277172C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8277172C;
	sub_826CA560(ctx, base);
loc_8277172C:
	// li r4,171
	ctx.r4.s64 = 171;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82771738;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8277179c
	if (!cr6.eq) goto loc_8277179C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277175c
	if (cr6.eq) goto loc_8277175C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x8277175C;
	sub_826D0328(ctx, base);
loc_8277175C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82771794
	if (cr6.eq) goto loc_82771794;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771794
	if (cr6.eq) goto loc_82771794;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,92
	ctx.r6.s64 = 92;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,368(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82771794;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771794:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827717f4
	goto loc_827717F4;
loc_8277179C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827717b8
	if (cr6.eq) goto loc_827717B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x827717B8;
	sub_826D0328(ctx, base);
loc_827717B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827717f0
	if (cr6.eq) goto loc_827717F0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827717f0
	if (cr6.eq) goto loc_827717F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,92
	ctx.r6.s64 = 92;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,368(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827717F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827717F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827717F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827717FC"))) PPC_WEAK_FUNC(sub_827717FC);
PPC_FUNC_IMPL(__imp__sub_827717FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82771800"))) PPC_WEAK_FUNC(sub_82771800);
PPC_FUNC_IMPL(__imp__sub_82771800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82771808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82771844
	if (!cr6.eq) goto loc_82771844;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1471
	ctx.r7.s64 = 1471;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82771844;
	sub_826CA560(ctx, base);
loc_82771844:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82771850;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x827718b4
	if (!cr6.eq) goto loc_827718B4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82771874
	if (cr6.eq) goto loc_82771874;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771874;
	sub_826D0328(ctx, base);
loc_82771874:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827718ac
	if (cr6.eq) goto loc_827718AC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827718ac
	if (cr6.eq) goto loc_827718AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,21
	ctx.r6.s64 = 21;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827718AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827718AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277190c
	goto loc_8277190C;
loc_827718B4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827718d0
	if (cr6.eq) goto loc_827718D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x827718D0;
	sub_826D0328(ctx, base);
loc_827718D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82771908
	if (cr6.eq) goto loc_82771908;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771908
	if (cr6.eq) goto loc_82771908;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,21
	ctx.r6.s64 = 21;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82771908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277190C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771914"))) PPC_WEAK_FUNC(sub_82771914);
PPC_FUNC_IMPL(__imp__sub_82771914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82771918"))) PPC_WEAK_FUNC(sub_82771918);
PPC_FUNC_IMPL(__imp__sub_82771918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82771920;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8277195c
	if (!cr6.eq) goto loc_8277195C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1521
	ctx.r7.s64 = 1521;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8277195C;
	sub_826CA560(ctx, base);
loc_8277195C:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82771968;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x827719cc
	if (!cr6.eq) goto loc_827719CC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277198c
	if (cr6.eq) goto loc_8277198C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x8277198C;
	sub_826D0328(ctx, base);
loc_8277198C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827719c4
	if (cr6.eq) goto loc_827719C4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827719c4
	if (cr6.eq) goto loc_827719C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827719C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827719C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82771a24
	goto loc_82771A24;
loc_827719CC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827719e8
	if (cr6.eq) goto loc_827719E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x827719E8;
	sub_826D0328(ctx, base);
loc_827719E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82771a20
	if (cr6.eq) goto loc_82771A20;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771a20
	if (cr6.eq) goto loc_82771A20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82771A20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771A20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82771A24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771A2C"))) PPC_WEAK_FUNC(sub_82771A2C);
PPC_FUNC_IMPL(__imp__sub_82771A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82771A30"))) PPC_WEAK_FUNC(sub_82771A30);
PPC_FUNC_IMPL(__imp__sub_82771A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82771A38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82771a74
	if (!cr6.eq) goto loc_82771A74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1571
	ctx.r7.s64 = 1571;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82771A74;
	sub_826CA560(ctx, base);
loc_82771A74:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82771A80;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82771ae4
	if (!cr6.eq) goto loc_82771AE4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82771aa4
	if (cr6.eq) goto loc_82771AA4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771AA4;
	sub_826D0328(ctx, base);
loc_82771AA4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82771adc
	if (cr6.eq) goto loc_82771ADC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771adc
	if (cr6.eq) goto loc_82771ADC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82771ADC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771ADC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82771b3c
	goto loc_82771B3C;
loc_82771AE4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82771b00
	if (cr6.eq) goto loc_82771B00;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771B00;
	sub_826D0328(ctx, base);
loc_82771B00:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82771b38
	if (cr6.eq) goto loc_82771B38;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771b38
	if (cr6.eq) goto loc_82771B38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82771B38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771B38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82771B3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771B44"))) PPC_WEAK_FUNC(sub_82771B44);
PPC_FUNC_IMPL(__imp__sub_82771B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82771B48"))) PPC_WEAK_FUNC(sub_82771B48);
PPC_FUNC_IMPL(__imp__sub_82771B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82771B50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82771b8c
	if (!cr6.eq) goto loc_82771B8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1622
	ctx.r7.s64 = 1622;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82771B8C;
	sub_826CA560(ctx, base);
loc_82771B8C:
	// li r4,615
	ctx.r4.s64 = 615;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82771B98;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82771bfc
	if (!cr6.eq) goto loc_82771BFC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82771bbc
	if (cr6.eq) goto loc_82771BBC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771BBC;
	sub_826D0328(ctx, base);
loc_82771BBC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82771bf4
	if (cr6.eq) goto loc_82771BF4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771bf4
	if (cr6.eq) goto loc_82771BF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82771BF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771BF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82771c54
	goto loc_82771C54;
loc_82771BFC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82771c18
	if (cr6.eq) goto loc_82771C18;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771C18;
	sub_826D0328(ctx, base);
loc_82771C18:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82771c50
	if (cr6.eq) goto loc_82771C50;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771c50
	if (cr6.eq) goto loc_82771C50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82771C50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771C50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82771C54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771C5C"))) PPC_WEAK_FUNC(sub_82771C5C);
PPC_FUNC_IMPL(__imp__sub_82771C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82771C60"))) PPC_WEAK_FUNC(sub_82771C60);
PPC_FUNC_IMPL(__imp__sub_82771C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82771C68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82771ca8
	if (!cr6.eq) goto loc_82771CA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1676
	ctx.r7.s64 = 1676;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82771CA8;
	sub_826CA560(ctx, base);
loc_82771CA8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82771CB8;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82771d20
	if (!cr6.eq) goto loc_82771D20;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82771cdc
	if (cr6.eq) goto loc_82771CDC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771CDC;
	sub_826D0328(ctx, base);
loc_82771CDC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771d18
	if (cr6.eq) goto loc_82771D18;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82771d18
	if (cr6.eq) goto loc_82771D18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82771D18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771D18:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82771d7c
	goto loc_82771D7C;
loc_82771D20:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82771d3c
	if (cr6.eq) goto loc_82771D3C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771D3C;
	sub_826D0328(ctx, base);
loc_82771D3C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771d78
	if (cr6.eq) goto loc_82771D78;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82771d78
	if (cr6.eq) goto loc_82771D78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82771D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771D78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82771D7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771D84"))) PPC_WEAK_FUNC(sub_82771D84);
PPC_FUNC_IMPL(__imp__sub_82771D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82771D88"))) PPC_WEAK_FUNC(sub_82771D88);
PPC_FUNC_IMPL(__imp__sub_82771D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82771D90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82771dd0
	if (!cr6.eq) goto loc_82771DD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1726
	ctx.r7.s64 = 1726;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82771DD0;
	sub_826CA560(ctx, base);
loc_82771DD0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82771DE0;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82771e48
	if (!cr6.eq) goto loc_82771E48;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82771e04
	if (cr6.eq) goto loc_82771E04;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771E04;
	sub_826D0328(ctx, base);
loc_82771E04:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771e40
	if (cr6.eq) goto loc_82771E40;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82771e40
	if (cr6.eq) goto loc_82771E40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82771E40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771E40:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82771ea4
	goto loc_82771EA4;
loc_82771E48:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82771e64
	if (cr6.eq) goto loc_82771E64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771E64;
	sub_826D0328(ctx, base);
loc_82771E64:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771ea0
	if (cr6.eq) goto loc_82771EA0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82771ea0
	if (cr6.eq) goto loc_82771EA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82771EA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771EA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82771EA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771EAC"))) PPC_WEAK_FUNC(sub_82771EAC);
PPC_FUNC_IMPL(__imp__sub_82771EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82771EB0"))) PPC_WEAK_FUNC(sub_82771EB0);
PPC_FUNC_IMPL(__imp__sub_82771EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82771EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82771ef8
	if (!cr6.eq) goto loc_82771EF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1777
	ctx.r7.s64 = 1777;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82771EF8;
	sub_826CA560(ctx, base);
loc_82771EF8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82771F08;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82771f70
	if (!cr6.eq) goto loc_82771F70;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82771f2c
	if (cr6.eq) goto loc_82771F2C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771F2C;
	sub_826D0328(ctx, base);
loc_82771F2C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771f68
	if (cr6.eq) goto loc_82771F68;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82771f68
	if (cr6.eq) goto loc_82771F68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82771F68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771F68:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82771fcc
	goto loc_82771FCC;
loc_82771F70:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82771f8c
	if (cr6.eq) goto loc_82771F8C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82771F8C;
	sub_826D0328(ctx, base);
loc_82771F8C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82771fc8
	if (cr6.eq) goto loc_82771FC8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82771fc8
	if (cr6.eq) goto loc_82771FC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82771FC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82771FC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82771FCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771FD4"))) PPC_WEAK_FUNC(sub_82771FD4);
PPC_FUNC_IMPL(__imp__sub_82771FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82771FD8"))) PPC_WEAK_FUNC(sub_82771FD8);
PPC_FUNC_IMPL(__imp__sub_82771FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82771FE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8277201c
	if (!cr6.eq) goto loc_8277201C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1828
	ctx.r7.s64 = 1828;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8277201C;
	sub_826CA560(ctx, base);
loc_8277201C:
	// li r4,582
	ctx.r4.s64 = 582;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82772028;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8277208c
	if (!cr6.eq) goto loc_8277208C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277204c
	if (cr6.eq) goto loc_8277204C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x8277204C;
	sub_826D0328(ctx, base);
loc_8277204C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82772084
	if (cr6.eq) goto loc_82772084;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772084
	if (cr6.eq) goto loc_82772084;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,38
	ctx.r6.s64 = 38;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82772084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772084:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827720e4
	goto loc_827720E4;
loc_8277208C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827720a8
	if (cr6.eq) goto loc_827720A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x827720A8;
	sub_826D0328(ctx, base);
loc_827720A8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827720e0
	if (cr6.eq) goto loc_827720E0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827720e0
	if (cr6.eq) goto loc_827720E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,38
	ctx.r6.s64 = 38;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827720E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827720E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827720E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827720EC"))) PPC_WEAK_FUNC(sub_827720EC);
PPC_FUNC_IMPL(__imp__sub_827720EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827720F0"))) PPC_WEAK_FUNC(sub_827720F0);
PPC_FUNC_IMPL(__imp__sub_827720F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827720F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82772134
	if (!cr6.eq) goto loc_82772134;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1877
	ctx.r7.s64 = 1877;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82772134;
	sub_826CA560(ctx, base);
loc_82772134:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82772150
	if (cr6.eq) goto loc_82772150;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772150;
	sub_826D0328(ctx, base);
loc_82772150:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8277218c
	if (cr6.eq) goto loc_8277218C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8277218c
	if (cr6.eq) goto loc_8277218C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,156(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8277218C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277218C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772198"))) PPC_WEAK_FUNC(sub_82772198);
PPC_FUNC_IMPL(__imp__sub_82772198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827721A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827721e0
	if (!cr6.eq) goto loc_827721E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827721E0;
	sub_826CA560(ctx, base);
loc_827721E0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x827721F0;
	sub_826D0020(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x82772204;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82772274
	if (!cr6.eq) goto loc_82772274;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82772274
	if (!cr6.eq) goto loc_82772274;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82772230
	if (cr6.eq) goto loc_82772230;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772230;
	sub_826D0328(ctx, base);
loc_82772230:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8277226c
	if (cr6.eq) goto loc_8277226C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277226c
	if (cr6.eq) goto loc_8277226C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8277226C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277226C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827722d0
	goto loc_827722D0;
loc_82772274:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82772290
	if (cr6.eq) goto loc_82772290;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772290;
	sub_826D0328(ctx, base);
loc_82772290:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827722cc
	if (cr6.eq) goto loc_827722CC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827722cc
	if (cr6.eq) goto loc_827722CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x827722CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827722CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827722D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827722D8"))) PPC_WEAK_FUNC(sub_827722D8);
PPC_FUNC_IMPL(__imp__sub_827722D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827722E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82772320
	if (!cr6.eq) goto loc_82772320;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1991
	ctx.r7.s64 = 1991;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82772320;
	sub_826CA560(ctx, base);
loc_82772320:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x82772330;
	sub_826D0020(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x82772344;
	sub_826D0020(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827723b4
	if (!cr0.eq) goto loc_827723B4;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x827723b4
	if (!cr6.eq) goto loc_827723B4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82772370
	if (cr6.eq) goto loc_82772370;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772370;
	sub_826D0328(ctx, base);
loc_82772370:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827723ac
	if (cr6.eq) goto loc_827723AC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827723ac
	if (cr6.eq) goto loc_827723AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x827723AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827723AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82772410
	goto loc_82772410;
loc_827723B4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827723d0
	if (cr6.eq) goto loc_827723D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826d0328
	ctx.lr = 0x827723D0;
	sub_826D0328(ctx, base);
loc_827723D0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8277240c
	if (cr6.eq) goto loc_8277240C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277240c
	if (cr6.eq) goto loc_8277240C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8277240C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277240C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82772410:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772418"))) PPC_WEAK_FUNC(sub_82772418);
PPC_FUNC_IMPL(__imp__sub_82772418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82772420;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82772460
	if (!cr6.eq) goto loc_82772460;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82772460;
	sub_826CA560(ctx, base);
loc_82772460:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82772470;
	sub_826D0020(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x827724d8
	if (!cr0.eq) goto loc_827724D8;
	// beq cr6,0x82772494
	if (cr6.eq) goto loc_82772494;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772494;
	sub_826D0328(ctx, base);
loc_82772494:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827724d0
	if (cr6.eq) goto loc_827724D0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827724d0
	if (cr6.eq) goto loc_827724D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x827724D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827724D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82772530
	goto loc_82772530;
loc_827724D8:
	// beq cr6,0x827724f0
	if (cr6.eq) goto loc_827724F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x827724F0;
	sub_826D0328(ctx, base);
loc_827724F0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8277252c
	if (cr6.eq) goto loc_8277252C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8277252c
	if (cr6.eq) goto loc_8277252C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8277252C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277252C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82772530:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772538"))) PPC_WEAK_FUNC(sub_82772538);
PPC_FUNC_IMPL(__imp__sub_82772538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82772540;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82772580
	if (!cr6.eq) goto loc_82772580;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2102
	ctx.r7.s64 = 2102;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82772580;
	sub_826CA560(ctx, base);
loc_82772580:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82772590;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x827725f8
	if (!cr6.eq) goto loc_827725F8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827725b4
	if (cr6.eq) goto loc_827725B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x827725B4;
	sub_826D0328(ctx, base);
loc_827725B4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827725f0
	if (cr6.eq) goto loc_827725F0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827725f0
	if (cr6.eq) goto loc_827725F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x827725F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827725F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82772654
	goto loc_82772654;
loc_827725F8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82772614
	if (cr6.eq) goto loc_82772614;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772614;
	sub_826D0328(ctx, base);
loc_82772614:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772650
	if (cr6.eq) goto loc_82772650;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772650
	if (cr6.eq) goto loc_82772650;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772650;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772650:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82772654:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277265C"))) PPC_WEAK_FUNC(sub_8277265C);
PPC_FUNC_IMPL(__imp__sub_8277265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82772660"))) PPC_WEAK_FUNC(sub_82772660);
PPC_FUNC_IMPL(__imp__sub_82772660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82772668;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x827726a8
	if (!cr6.eq) goto loc_827726A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2155
	ctx.r7.s64 = 2155;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827726A8;
	sub_826CA560(ctx, base);
loc_827726A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x827726B8;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82772720
	if (!cr6.eq) goto loc_82772720;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827726dc
	if (cr6.eq) goto loc_827726DC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x827726DC;
	sub_826D0328(ctx, base);
loc_827726DC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772718
	if (cr6.eq) goto loc_82772718;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772718
	if (cr6.eq) goto loc_82772718;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772718:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277277c
	goto loc_8277277C;
loc_82772720:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8277273c
	if (cr6.eq) goto loc_8277273C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x8277273C;
	sub_826D0328(ctx, base);
loc_8277273C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772778
	if (cr6.eq) goto loc_82772778;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772778
	if (cr6.eq) goto loc_82772778;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772778;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277277C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772784"))) PPC_WEAK_FUNC(sub_82772784);
PPC_FUNC_IMPL(__imp__sub_82772784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82772788"))) PPC_WEAK_FUNC(sub_82772788);
PPC_FUNC_IMPL(__imp__sub_82772788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82772790;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x827727d0
	if (!cr6.eq) goto loc_827727D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2208
	ctx.r7.s64 = 2208;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827727D0;
	sub_826CA560(ctx, base);
loc_827727D0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x827727E0;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82772848
	if (!cr6.eq) goto loc_82772848;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82772804
	if (cr6.eq) goto loc_82772804;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772804;
	sub_826D0328(ctx, base);
loc_82772804:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772840
	if (cr6.eq) goto loc_82772840;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772840
	if (cr6.eq) goto loc_82772840;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772840:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827728a4
	goto loc_827728A4;
loc_82772848:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82772864
	if (cr6.eq) goto loc_82772864;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772864;
	sub_826D0328(ctx, base);
loc_82772864:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827728a0
	if (cr6.eq) goto loc_827728A0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827728a0
	if (cr6.eq) goto loc_827728A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x827728A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827728A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827728A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827728AC"))) PPC_WEAK_FUNC(sub_827728AC);
PPC_FUNC_IMPL(__imp__sub_827728AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827728B0"))) PPC_WEAK_FUNC(sub_827728B0);
PPC_FUNC_IMPL(__imp__sub_827728B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827728B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x827728f8
	if (!cr6.eq) goto loc_827728F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2261
	ctx.r7.s64 = 2261;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827728F8;
	sub_826CA560(ctx, base);
loc_827728F8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82772908;
	sub_826D0020(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x82772970
	if (!cr0.eq) goto loc_82772970;
	// beq cr6,0x8277292c
	if (cr6.eq) goto loc_8277292C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x8277292C;
	sub_826D0328(ctx, base);
loc_8277292C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772968
	if (cr6.eq) goto loc_82772968;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772968
	if (cr6.eq) goto loc_82772968;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772968:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827729c8
	goto loc_827729C8;
loc_82772970:
	// beq cr6,0x82772988
	if (cr6.eq) goto loc_82772988;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772988;
	sub_826D0328(ctx, base);
loc_82772988:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827729c4
	if (cr6.eq) goto loc_827729C4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827729c4
	if (cr6.eq) goto loc_827729C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x827729C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827729C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827729C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827729D0"))) PPC_WEAK_FUNC(sub_827729D0);
PPC_FUNC_IMPL(__imp__sub_827729D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827729D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82772a18
	if (!cr6.eq) goto loc_82772A18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2316
	ctx.r7.s64 = 2316;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82772A18;
	sub_826CA560(ctx, base);
loc_82772A18:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82772A28;
	sub_826D0020(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x82772a90
	if (!cr0.eq) goto loc_82772A90;
	// beq cr6,0x82772a4c
	if (cr6.eq) goto loc_82772A4C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772A4C;
	sub_826D0328(ctx, base);
loc_82772A4C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772a88
	if (cr6.eq) goto loc_82772A88;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772a88
	if (cr6.eq) goto loc_82772A88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,57
	ctx.r6.s64 = 57;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,228(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772A88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772A88:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82772ae8
	goto loc_82772AE8;
loc_82772A90:
	// beq cr6,0x82772aa8
	if (cr6.eq) goto loc_82772AA8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772AA8;
	sub_826D0328(ctx, base);
loc_82772AA8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772ae4
	if (cr6.eq) goto loc_82772AE4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772ae4
	if (cr6.eq) goto loc_82772AE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,57
	ctx.r6.s64 = 57;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,228(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772AE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772AE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82772AE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772AF0"))) PPC_WEAK_FUNC(sub_82772AF0);
PPC_FUNC_IMPL(__imp__sub_82772AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82772AF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82772b38
	if (!cr6.eq) goto loc_82772B38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2371
	ctx.r7.s64 = 2371;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82772B38;
	sub_826CA560(ctx, base);
loc_82772B38:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82772B48;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82772bb0
	if (!cr6.eq) goto loc_82772BB0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82772b6c
	if (cr6.eq) goto loc_82772B6C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772B6C;
	sub_826D0328(ctx, base);
loc_82772B6C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772ba8
	if (cr6.eq) goto loc_82772BA8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772ba8
	if (cr6.eq) goto loc_82772BA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772BA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772BA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82772c0c
	goto loc_82772C0C;
loc_82772BB0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82772bcc
	if (cr6.eq) goto loc_82772BCC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772BCC;
	sub_826D0328(ctx, base);
loc_82772BCC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772c08
	if (cr6.eq) goto loc_82772C08;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772c08
	if (cr6.eq) goto loc_82772C08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772C08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772C08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82772C0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772C14"))) PPC_WEAK_FUNC(sub_82772C14);
PPC_FUNC_IMPL(__imp__sub_82772C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82772C18"))) PPC_WEAK_FUNC(sub_82772C18);
PPC_FUNC_IMPL(__imp__sub_82772C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82772C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82772c60
	if (!cr6.eq) goto loc_82772C60;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2426
	ctx.r7.s64 = 2426;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82772C60;
	sub_826CA560(ctx, base);
loc_82772C60:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82772C70;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82772cd8
	if (!cr6.eq) goto loc_82772CD8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82772c94
	if (cr6.eq) goto loc_82772C94;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772C94;
	sub_826D0328(ctx, base);
loc_82772C94:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772cd0
	if (cr6.eq) goto loc_82772CD0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772cd0
	if (cr6.eq) goto loc_82772CD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772CD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772CD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82772d34
	goto loc_82772D34;
loc_82772CD8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82772cf4
	if (cr6.eq) goto loc_82772CF4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772CF4;
	sub_826D0328(ctx, base);
loc_82772CF4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772d30
	if (cr6.eq) goto loc_82772D30;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772d30
	if (cr6.eq) goto loc_82772D30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82772D30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772D30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82772D34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772D3C"))) PPC_WEAK_FUNC(sub_82772D3C);
PPC_FUNC_IMPL(__imp__sub_82772D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82772D40"))) PPC_WEAK_FUNC(sub_82772D40);
PPC_FUNC_IMPL(__imp__sub_82772D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82772D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,971
	ctx.r4.s64 = 971;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82772D60;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82772dc4
	if (!cr6.eq) goto loc_82772DC4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772d84
	if (cr6.eq) goto loc_82772D84;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772D84;
	sub_826D0328(ctx, base);
loc_82772D84:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82772dbc
	if (cr6.eq) goto loc_82772DBC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772dbc
	if (cr6.eq) goto loc_82772DBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82772DBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772DBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82772e1c
	goto loc_82772E1C;
loc_82772DC4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82772de0
	if (cr6.eq) goto loc_82772DE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772DE0;
	sub_826D0328(ctx, base);
loc_82772DE0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82772e18
	if (cr6.eq) goto loc_82772E18;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772e18
	if (cr6.eq) goto loc_82772E18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82772E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772E18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82772E1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772E24"))) PPC_WEAK_FUNC(sub_82772E24);
PPC_FUNC_IMPL(__imp__sub_82772E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82772E28"))) PPC_WEAK_FUNC(sub_82772E28);
PPC_FUNC_IMPL(__imp__sub_82772E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82772E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82772e6c
	if (!cr6.eq) goto loc_82772E6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2527
	ctx.r7.s64 = 2527;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82772E6C;
	sub_826CA560(ctx, base);
loc_82772E6C:
	// li r4,926
	ctx.r4.s64 = 926;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82772E78;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82772edc
	if (!cr6.eq) goto loc_82772EDC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82772e9c
	if (cr6.eq) goto loc_82772E9C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772E9C;
	sub_826D0328(ctx, base);
loc_82772E9C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82772ed4
	if (cr6.eq) goto loc_82772ED4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772ed4
	if (cr6.eq) goto loc_82772ED4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82772ED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772ED4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82772f34
	goto loc_82772F34;
loc_82772EDC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82772ef8
	if (cr6.eq) goto loc_82772EF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772EF8;
	sub_826D0328(ctx, base);
loc_82772EF8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82772f30
	if (cr6.eq) goto loc_82772F30;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772f30
	if (cr6.eq) goto loc_82772F30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82772F30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772F30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82772F34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772F3C"))) PPC_WEAK_FUNC(sub_82772F3C);
PPC_FUNC_IMPL(__imp__sub_82772F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82772F40"))) PPC_WEAK_FUNC(sub_82772F40);
PPC_FUNC_IMPL(__imp__sub_82772F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82772F48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82772f84
	if (!cr6.eq) goto loc_82772F84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2576
	ctx.r7.s64 = 2576;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82772F84;
	sub_826CA560(ctx, base);
loc_82772F84:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82772fa0
	if (cr6.eq) goto loc_82772FA0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82772FA0;
	sub_826D0328(ctx, base);
loc_82772FA0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82772fdc
	if (cr6.eq) goto loc_82772FDC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82772fdc
	if (cr6.eq) goto loc_82772FDC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,52
	ctx.r6.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,208(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82772FDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82772FDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772FE8"))) PPC_WEAK_FUNC(sub_82772FE8);
PPC_FUNC_IMPL(__imp__sub_82772FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82772FF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82773030
	if (!cr6.eq) goto loc_82773030;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2631
	ctx.r7.s64 = 2631;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82773030;
	sub_826CA560(ctx, base);
loc_82773030:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773040;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x827730a8
	if (cr6.gt) goto loc_827730A8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82773064
	if (cr6.eq) goto loc_82773064;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82773064;
	sub_826D0328(ctx, base);
loc_82773064:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827730a0
	if (cr6.eq) goto loc_827730A0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827730a0
	if (cr6.eq) goto loc_827730A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x827730A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827730A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82773104
	goto loc_82773104;
loc_827730A8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827730c4
	if (cr6.eq) goto loc_827730C4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x827730C4;
	sub_826D0328(ctx, base);
loc_827730C4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82773100
	if (cr6.eq) goto loc_82773100;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82773100
	if (cr6.eq) goto loc_82773100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82773100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82773100:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82773104:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277310C"))) PPC_WEAK_FUNC(sub_8277310C);
PPC_FUNC_IMPL(__imp__sub_8277310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82773110"))) PPC_WEAK_FUNC(sub_82773110);
PPC_FUNC_IMPL(__imp__sub_82773110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82773118;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82773158
	if (!cr6.eq) goto loc_82773158;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2690
	ctx.r7.s64 = 2690;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82773158;
	sub_826CA560(ctx, base);
loc_82773158:
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82773164;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x827731cc
	if (!cr6.eq) goto loc_827731CC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82773188
	if (cr6.eq) goto loc_82773188;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82773188;
	sub_826D0328(ctx, base);
loc_82773188:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827731c4
	if (cr6.eq) goto loc_827731C4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827731c4
	if (cr6.eq) goto loc_827731C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,364(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827731C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827731C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82773228
	goto loc_82773228;
loc_827731CC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827731e8
	if (cr6.eq) goto loc_827731E8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x827731E8;
	sub_826D0328(ctx, base);
loc_827731E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82773224
	if (cr6.eq) goto loc_82773224;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82773224
	if (cr6.eq) goto loc_82773224;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,364(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82773224;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82773224:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82773228:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773230"))) PPC_WEAK_FUNC(sub_82773230);
PPC_FUNC_IMPL(__imp__sub_82773230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82773238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82773274
	if (!cr6.eq) goto loc_82773274;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2744
	ctx.r7.s64 = 2744;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82773274;
	sub_826CA560(ctx, base);
loc_82773274:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82773290
	if (cr6.eq) goto loc_82773290;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0328
	ctx.lr = 0x82773290;
	sub_826D0328(ctx, base);
loc_82773290:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827732cc
	if (cr6.eq) goto loc_827732CC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827732cc
	if (cr6.eq) goto loc_827732CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,101
	ctx.r6.s64 = 101;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,404(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827732CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827732CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827732D8"))) PPC_WEAK_FUNC(sub_827732D8);
PPC_FUNC_IMPL(__imp__sub_827732D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827732E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,567
	ctx.r4.s64 = 567;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x826cfd18
	ctx.lr = 0x827732FC;
	sub_826CFD18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,974
	ctx.r4.s64 = 974;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cfd18
	ctx.lr = 0x8277330C;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x82773358
	if (!cr6.eq) goto loc_82773358;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82773324
	if (!cr6.eq) goto loc_82773324;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82773350
	goto loc_82773350;
loc_82773324:
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82773334
	if (!cr6.eq) goto loc_82773334;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82773350
	goto loc_82773350;
loc_82773334:
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82773344
	if (!cr6.eq) goto loc_82773344;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82773350
	goto loc_82773350;
loc_82773344:
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82773358
	if (!cr6.eq) goto loc_82773358;
	// li r11,11
	ctx.r11.s64 = 11;
loc_82773350:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8277337c
	goto loc_8277337C;
loc_82773358:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2816
	ctx.r7.s64 = 2816;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,19116
	ctx.r5.s64 = ctx.r11.s64 + 19116;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8277337C;
	sub_826CA560(ctx, base);
loc_8277337C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827733b4
	if (cr6.eq) goto loc_827733B4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827733b4
	if (cr6.eq) goto loc_827733B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,61
	ctx.r6.s64 = 61;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// lwz r5,244(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x827733B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827733B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827733C0"))) PPC_WEAK_FUNC(sub_827733C0);
PPC_FUNC_IMPL(__imp__sub_827733C0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827733D4"))) PPC_WEAK_FUNC(sub_827733D4);
PPC_FUNC_IMPL(__imp__sub_827733D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827733D8"))) PPC_WEAK_FUNC(sub_827733D8);
PPC_FUNC_IMPL(__imp__sub_827733D8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827733EC"))) PPC_WEAK_FUNC(sub_827733EC);
PPC_FUNC_IMPL(__imp__sub_827733EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827733F0"))) PPC_WEAK_FUNC(sub_827733F0);
PPC_FUNC_IMPL(__imp__sub_827733F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82773400"))) PPC_WEAK_FUNC(sub_82773400);
PPC_FUNC_IMPL(__imp__sub_82773400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82773408;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82773448
	if (!cr6.eq) goto loc_82773448;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2877
	ctx.r7.s64 = 2877;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82773448;
	sub_826CA560(ctx, base);
loc_82773448:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bge cr6,0x82773470
	if (!cr6.lt) goto loc_82773470;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82773470
	if (cr6.eq) goto loc_82773470;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773468;
	sub_826D0020(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82773474
	goto loc_82773474;
loc_82773470:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82773474:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,7
	ctx.r10.s64 = 7;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// beq cr6,0x827734e4
	if (cr6.eq) goto loc_827734E4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827734e4
	if (cr6.eq) goto loc_827734E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,31
	ctx.r6.s64 = 31;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,124(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x827734E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827734E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827734F0"))) PPC_WEAK_FUNC(sub_827734F0);
PPC_FUNC_IMPL(__imp__sub_827734F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27ec
	ctx.lr = 0x827734F8;
	__savegprlr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r18,r11,-6172
	ctx.r18.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r17,r11,29688
	ctx.r17.s64 = ctx.r11.s64 + 29688;
	// bne cr6,0x82773548
	if (!cr6.eq) goto loc_82773548;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,2967
	ctx.r7.s64 = 2967;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82773548;
	sub_826CA560(ctx, base);
loc_82773548:
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82773588
	if (!cr6.eq) goto loc_82773588;
	// li r4,928
	ctx.r4.s64 = 928;
	// li r28,23
	ctx.r28.s64 = 23;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// bl 0x826cfd18
	ctx.lr = 0x8277356C;
	sub_826CFD18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,927
	ctx.r4.s64 = 927;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826cfd18
	ctx.lr = 0x8277357C;
	sub_826CFD18(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// b 0x827735fc
	goto loc_827735FC;
loc_82773588:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x826d0020
	ctx.lr = 0x82773594;
	sub_826D0020(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x827735A8;
	sub_826D0020(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x827735BC;
	sub_826D0020(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x827735D0;
	sub_826D0020(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x827735E4;
	sub_826D0020(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x827735F8;
	sub_826D0020(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_827735FC:
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// ble cr6,0x82773618
	if (!cr6.gt) goto loc_82773618;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x827477d8
	ctx.lr = 0x82773610;
	sub_827477D8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x8277361c
	goto loc_8277361C;
loc_82773618:
	// li r22,1
	ctx.r22.s64 = 1;
loc_8277361C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// beq cr6,0x82773634
	if (cr6.eq) goto loc_82773634;
	// addi r11,r11,29088
	ctx.r11.s64 = ctx.r11.s64 + 29088;
	// addi r10,r11,-576
	ctx.r10.s64 = ctx.r11.s64 + -576;
	// b 0x82773638
	goto loc_82773638;
loc_82773634:
	// addi r10,r11,29088
	ctx.r10.s64 = ctx.r11.s64 + 29088;
loc_82773638:
	// mulli r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 * 24;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82773668
	if (!cr6.eq) goto loc_82773668;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82773668:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82773684
	if (!cr6.eq) goto loc_82773684;
	// cntlzw r11,r23
	ctx.r11.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82773684:
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
	// stw r20,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x827736bc
	if (!cr6.eq) goto loc_827736BC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x827736AC;
	sub_826D0020(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_827736BC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827736e4
	if (!cr6.eq) goto loc_827736E4;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r7,3048
	ctx.r7.s64 = 3048;
	// addi r5,r11,19116
	ctx.r5.s64 = ctx.r11.s64 + 19116;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827736E4;
	sub_826CA560(ctx, base);
loc_827736E4:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r20,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r20.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// beq cr6,0x82773780
	if (cr6.eq) goto loc_82773780;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82773780
	if (cr6.eq) goto loc_82773780;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,29804
	ctx.r4.s64 = ctx.r11.s64 + 29804;
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r11,-2952
	ctx.r31.s64 = ctx.r11.s64 + -2952;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x82773760;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x82773780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82773780:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828d283c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277378C"))) PPC_WEAK_FUNC(sub_8277378C);
PPC_FUNC_IMPL(__imp__sub_8277378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82773790"))) PPC_WEAK_FUNC(sub_82773790);
PPC_FUNC_IMPL(__imp__sub_82773790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f8
	ctx.lr = 0x82773798;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,29688
	ctx.r26.s64 = ctx.r11.s64 + 29688;
	// bne cr6,0x827737ec
	if (!cr6.eq) goto loc_827737EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3110
	ctx.r7.s64 = 3110;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827737EC;
	sub_826CA560(ctx, base);
loc_827737EC:
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x82773800
	if (!cr6.eq) goto loc_82773800;
	// li r29,23
	ctx.r29.s64 = 23;
	// li r22,1
	ctx.r22.s64 = 1;
	// b 0x82773828
	goto loc_82773828;
loc_82773800:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773810;
	sub_826D0020(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773824;
	sub_826D0020(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82773828:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ble cr6,0x82773844
	if (!cr6.gt) goto loc_82773844;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827477d8
	ctx.lr = 0x8277383C;
	sub_827477D8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x82773848
	goto loc_82773848;
loc_82773844:
	// li r21,1
	ctx.r21.s64 = 1;
loc_82773848:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// beq cr6,0x82773860
	if (cr6.eq) goto loc_82773860;
	// addi r11,r11,29088
	ctx.r11.s64 = ctx.r11.s64 + 29088;
	// addi r30,r11,-576
	ctx.r30.s64 = ctx.r11.s64 + -576;
	// b 0x82773864
	goto loc_82773864;
loc_82773860:
	// addi r30,r11,29088
	ctx.r30.s64 = ctx.r11.s64 + 29088;
loc_82773864:
	// mulli r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 * 24;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bne 0x82773914
	if (!cr0.eq) goto loc_82773914;
	// addi r10,r29,-17
	ctx.r10.s64 = ctx.r29.s64 + -17;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-2528
	ctx.r11.s64 = ctx.r11.s64 + -2528;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x827738b0
	if (!cr0.eq) goto loc_827738B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3140
	ctx.r7.s64 = 3140;
	// addi r5,r11,29936
	ctx.r5.s64 = ctx.r11.s64 + 29936;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827738B0;
	sub_826CA560(ctx, base);
loc_827738B0:
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi r31,0
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x827738c8
	if (cr0.lt) goto loc_827738C8;
	// cmpwi cr6,r31,24
	cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x827738e4
	if (cr6.lt) goto loc_827738E4;
loc_827738C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3142
	ctx.r7.s64 = 3142;
	// addi r5,r11,29896
	ctx.r5.s64 = ctx.r11.s64 + 29896;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827738E4;
	sub_826CA560(ctx, base);
loc_827738E4:
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bne 0x82773914
	if (!cr0.eq) goto loc_82773914;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// addi r5,r11,29884
	ctx.r5.s64 = ctx.r11.s64 + 29884;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82773914;
	sub_826CA560(ctx, base);
loc_82773914:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82773984
	if (cr6.eq) goto loc_82773984;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82773984
	if (cr6.eq) goto loc_82773984;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r4,r11,29860
	ctx.r4.s64 = ctx.r11.s64 + 29860;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r31,r11,-2952
	ctx.r31.s64 = ctx.r11.s64 + -2952;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,29
	ctx.r6.s64 = 29;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82773964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82773984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82773984:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773990"))) PPC_WEAK_FUNC(sub_82773990);
PPC_FUNC_IMPL(__imp__sub_82773990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2800
	ctx.lr = 0x82773998;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,29688
	ctx.r27.s64 = ctx.r11.s64 + 29688;
	// bne cr6,0x827739e8
	if (!cr6.eq) goto loc_827739E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3188
	ctx.r7.s64 = 3188;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827739E8;
	sub_826CA560(ctx, base);
loc_827739E8:
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x827739fc
	if (!cr6.eq) goto loc_827739FC;
	// li r30,23
	ctx.r30.s64 = 23;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82773a24
	goto loc_82773A24;
loc_827739FC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773A0C;
	sub_826D0020(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773A20;
	sub_826D0020(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82773A24:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82773a3c
	if (cr6.eq) goto loc_82773A3C;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827477d8
	ctx.lr = 0x82773A38;
	sub_827477D8(ctx, base);
	// b 0x82773a40
	goto loc_82773A40;
loc_82773A3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82773A40:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// beq cr6,0x82773a58
	if (cr6.eq) goto loc_82773A58;
	// addi r11,r11,29088
	ctx.r11.s64 = ctx.r11.s64 + 29088;
	// addi r29,r11,-576
	ctx.r29.s64 = ctx.r11.s64 + -576;
	// b 0x82773a5c
	goto loc_82773A5C;
loc_82773A58:
	// addi r29,r11,29088
	ctx.r29.s64 = ctx.r11.s64 + 29088;
loc_82773A5C:
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82773b18
	if (!cr6.eq) goto loc_82773B18;
	// addi r10,r30,-17
	ctx.r10.s64 = ctx.r30.s64 + -17;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-2528
	ctx.r11.s64 = ctx.r11.s64 + -2528;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82773ab0
	if (!cr0.eq) goto loc_82773AB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3219
	ctx.r7.s64 = 3219;
	// addi r5,r11,29936
	ctx.r5.s64 = ctx.r11.s64 + 29936;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82773AB0;
	sub_826CA560(ctx, base);
loc_82773AB0:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi r31,0
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82773ac8
	if (cr0.lt) goto loc_82773AC8;
	// cmpwi cr6,r31,24
	cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x82773ae4
	if (cr6.lt) goto loc_82773AE4;
loc_82773AC8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3221
	ctx.r7.s64 = 3221;
	// addi r5,r11,29896
	ctx.r5.s64 = ctx.r11.s64 + 29896;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82773AE4;
	sub_826CA560(ctx, base);
loc_82773AE4:
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bne 0x82773b18
	if (!cr0.eq) goto loc_82773B18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3223
	ctx.r7.s64 = 3223;
	// addi r5,r11,29952
	ctx.r5.s64 = ctx.r11.s64 + 29952;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82773B18;
	sub_826CA560(ctx, base);
loc_82773B18:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82773b54
	if (cr6.eq) goto loc_82773B54;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82773b54
	if (cr6.eq) goto loc_82773B54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,400(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82773B54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82773B54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2850
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773B60"))) PPC_WEAK_FUNC(sub_82773B60);
PPC_FUNC_IMPL(__imp__sub_82773B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x82773B68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82773bac
	if (!cr6.eq) goto loc_82773BAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3264
	ctx.r7.s64 = 3264;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82773BAC;
	sub_826CA560(ctx, base);
loc_82773BAC:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82773bc0
	if (!cr6.eq) goto loc_82773BC0;
	// li r31,23
	ctx.r31.s64 = 23;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x82773be8
	goto loc_82773BE8;
loc_82773BC0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773BD0;
	sub_826D0020(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773BE4;
	sub_826D0020(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82773BE8:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x82773c04
	if (!cr6.gt) goto loc_82773C04;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827477d8
	ctx.lr = 0x82773BFC;
	sub_827477D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82773c08
	goto loc_82773C08;
loc_82773C04:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82773C08:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// addi r10,r10,29088
	ctx.r10.s64 = ctx.r10.s64 + 29088;
	// beq cr6,0x82773c2c
	if (cr6.eq) goto loc_82773C2C;
	// addi r9,r10,-576
	ctx.r9.s64 = ctx.r10.s64 + -576;
	// addi r10,r10,-576
	ctx.r10.s64 = ctx.r10.s64 + -576;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82773c30
	goto loc_82773C30;
loc_82773C2C:
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_82773C30:
	// lhzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82773c5c
	if (!cr6.eq) goto loc_82773C5C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82773c58
	if (cr6.eq) goto loc_82773C58;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82773c5c
	goto loc_82773C5C;
loc_82773C58:
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
loc_82773C5C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82773cb8
	if (cr6.eq) goto loc_82773CB8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82773cb8
	if (cr6.eq) goto loc_82773CB8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r31,r11,-2952
	ctx.r31.s64 = ctx.r11.s64 + -2952;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82773C98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82773CB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82773CB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773CC4"))) PPC_WEAK_FUNC(sub_82773CC4);
PPC_FUNC_IMPL(__imp__sub_82773CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82773CC8"))) PPC_WEAK_FUNC(sub_82773CC8);
PPC_FUNC_IMPL(__imp__sub_82773CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2804
	ctx.lr = 0x82773CD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773CFC;
	sub_826D0020(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773D10;
	sub_826D0020(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x82773D24;
	sub_826D0020(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r23,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82773d74
	if (cr6.eq) goto loc_82773D74;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82773d74
	if (cr6.eq) goto loc_82773D74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,29980
	ctx.r4.s64 = ctx.r11.s64 + 29980;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82773D74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82773D74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2854
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773D80"))) PPC_WEAK_FUNC(sub_82773D80);
PPC_FUNC_IMPL(__imp__sub_82773D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82773D88;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82773dc4
	if (!cr6.eq) goto loc_82773DC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3379
	ctx.r7.s64 = 3379;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82773DC4;
	sub_826CA560(ctx, base);
loc_82773DC4:
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274bff8
	ctx.lr = 0x82773DD0;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82773e14
	if (cr6.eq) goto loc_82773E14;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82773e14
	if (cr6.eq) goto loc_82773E14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x82773DEC;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,103
	ctx.r6.s64 = 103;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,412(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82773E14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82773E14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773E20"))) PPC_WEAK_FUNC(sub_82773E20);
PPC_FUNC_IMPL(__imp__sub_82773E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82773E28;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82773e64
	if (!cr6.eq) goto loc_82773E64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3411
	ctx.r7.s64 = 3411;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82773E64;
	sub_826CA560(ctx, base);
loc_82773E64:
	// li r4,129
	ctx.r4.s64 = 129;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274bff8
	ctx.lr = 0x82773E70;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82773eb4
	if (cr6.eq) goto loc_82773EB4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82773eb4
	if (cr6.eq) goto loc_82773EB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x82773E8C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,104
	ctx.r6.s64 = 104;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,416(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82773EB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82773EB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773EC0"))) PPC_WEAK_FUNC(sub_82773EC0);
PPC_FUNC_IMPL(__imp__sub_82773EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,30024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82773ED4"))) PPC_WEAK_FUNC(sub_82773ED4);
PPC_FUNC_IMPL(__imp__sub_82773ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82773ED8"))) PPC_WEAK_FUNC(sub_82773ED8);
PPC_FUNC_IMPL(__imp__sub_82773ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82773EE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82773f1c
	if (!cr6.eq) goto loc_82773F1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3457
	ctx.r7.s64 = 3457;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82773F1C;
	sub_826CA560(ctx, base);
loc_82773F1C:
	// li r4,580
	ctx.r4.s64 = 580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82773F28;
	sub_826CFD18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,581
	ctx.r4.s64 = 581;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82773F38;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82773f68
	if (!cr6.eq) goto loc_82773F68;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,30028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30028);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82773f70
	goto loc_82773F70;
loc_82773F68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,30024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30024);
	ctx.f0.f64 = double(temp.f32);
loc_82773F70:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82773fb8
	if (cr6.eq) goto loc_82773FB8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82773fb8
	if (cr6.eq) goto loc_82773FB8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82770a58
	ctx.lr = 0x82773F90;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,67
	ctx.r6.s64 = 67;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,268(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82773FB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82773FB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773FC4"))) PPC_WEAK_FUNC(sub_82773FC4);
PPC_FUNC_IMPL(__imp__sub_82773FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82773FC8"))) PPC_WEAK_FUNC(sub_82773FC8);
PPC_FUNC_IMPL(__imp__sub_82773FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,30032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82773FDC"))) PPC_WEAK_FUNC(sub_82773FDC);
PPC_FUNC_IMPL(__imp__sub_82773FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82773FE0"))) PPC_WEAK_FUNC(sub_82773FE0);
PPC_FUNC_IMPL(__imp__sub_82773FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82773FE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82774024
	if (!cr6.eq) goto loc_82774024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3516
	ctx.r7.s64 = 3516;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774024;
	sub_826CA560(ctx, base);
loc_82774024:
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274bff8
	ctx.lr = 0x82774030;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82774074
	if (cr6.eq) goto loc_82774074;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82774074
	if (cr6.eq) goto loc_82774074;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x8277404C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82774074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774074:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774080"))) PPC_WEAK_FUNC(sub_82774080);
PPC_FUNC_IMPL(__imp__sub_82774080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82774088;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827740c4
	if (!cr6.eq) goto loc_827740C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3546
	ctx.r7.s64 = 3546;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827740C4;
	sub_826CA560(ctx, base);
loc_827740C4:
	// li r4,1001
	ctx.r4.s64 = 1001;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274bff8
	ctx.lr = 0x827740D0;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82774114
	if (cr6.eq) goto loc_82774114;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82774114
	if (cr6.eq) goto loc_82774114;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x827740EC;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,69
	ctx.r6.s64 = 69;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82774114;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774114:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774120"))) PPC_WEAK_FUNC(sub_82774120);
PPC_FUNC_IMPL(__imp__sub_82774120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82774128;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82774164
	if (!cr6.eq) goto loc_82774164;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3577
	ctx.r7.s64 = 3577;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774164;
	sub_826CA560(ctx, base);
loc_82774164:
	// li r4,1002
	ctx.r4.s64 = 1002;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274bff8
	ctx.lr = 0x82774170;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827741b4
	if (cr6.eq) goto loc_827741B4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827741b4
	if (cr6.eq) goto loc_827741B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x8277418C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,70
	ctx.r6.s64 = 70;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,280(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x827741B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827741B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827741C0"))) PPC_WEAK_FUNC(sub_827741C0);
PPC_FUNC_IMPL(__imp__sub_827741C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,10548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827741D4"))) PPC_WEAK_FUNC(sub_827741D4);
PPC_FUNC_IMPL(__imp__sub_827741D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827741D8"))) PPC_WEAK_FUNC(sub_827741D8);
PPC_FUNC_IMPL(__imp__sub_827741D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827741E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82774220
	if (!cr6.eq) goto loc_82774220;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3620
	ctx.r7.s64 = 3620;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774220;
	sub_826CA560(ctx, base);
loc_82774220:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8274cfc8
	ctx.lr = 0x82774230;
	sub_8274CFC8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82774278
	if (cr6.eq) goto loc_82774278;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82774278
	if (cr6.eq) goto loc_82774278;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x8277424C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82774278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774278:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774284"))) PPC_WEAK_FUNC(sub_82774284);
PPC_FUNC_IMPL(__imp__sub_82774284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774288"))) PPC_WEAK_FUNC(sub_82774288);
PPC_FUNC_IMPL(__imp__sub_82774288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82774290;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x827742d0
	if (!cr6.eq) goto loc_827742D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3654
	ctx.r7.s64 = 3654;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827742D0;
	sub_826CA560(ctx, base);
loc_827742D0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8274cfc8
	ctx.lr = 0x827742E0;
	sub_8274CFC8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82774328
	if (cr6.eq) goto loc_82774328;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82774328
	if (cr6.eq) goto loc_82774328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x827742FC;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,72
	ctx.r6.s64 = 72;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,288(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82774328;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774328:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774334"))) PPC_WEAK_FUNC(sub_82774334);
PPC_FUNC_IMPL(__imp__sub_82774334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774338"))) PPC_WEAK_FUNC(sub_82774338);
PPC_FUNC_IMPL(__imp__sub_82774338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82774340;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82774380
	if (!cr6.eq) goto loc_82774380;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3688
	ctx.r7.s64 = 3688;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774380;
	sub_826CA560(ctx, base);
loc_82774380:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8274cfc8
	ctx.lr = 0x82774390;
	sub_8274CFC8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827743d8
	if (cr6.eq) goto loc_827743D8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827743d8
	if (cr6.eq) goto loc_827743D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x827743AC;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,73
	ctx.r6.s64 = 73;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,292(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x827743D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827743D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827743E4"))) PPC_WEAK_FUNC(sub_827743E4);
PPC_FUNC_IMPL(__imp__sub_827743E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827743E8"))) PPC_WEAK_FUNC(sub_827743E8);
PPC_FUNC_IMPL(__imp__sub_827743E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827743F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82774430
	if (!cr6.eq) goto loc_82774430;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3721
	ctx.r7.s64 = 3721;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774430;
	sub_826CA560(ctx, base);
loc_82774430:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8274cfc8
	ctx.lr = 0x82774440;
	sub_8274CFC8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82774488
	if (cr6.eq) goto loc_82774488;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82774488
	if (cr6.eq) goto loc_82774488;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x8277445C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,74
	ctx.r6.s64 = 74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82774488;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774488:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774494"))) PPC_WEAK_FUNC(sub_82774494);
PPC_FUNC_IMPL(__imp__sub_82774494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774498"))) PPC_WEAK_FUNC(sub_82774498);
PPC_FUNC_IMPL(__imp__sub_82774498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827744A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,29688
	ctx.r29.s64 = ctx.r11.s64 + 29688;
	// bne cr6,0x827744e8
	if (!cr6.eq) goto loc_827744E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3754
	ctx.r7.s64 = 3754;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827744E8;
	sub_826CA560(ctx, base);
loc_827744E8:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cfd18
	ctx.lr = 0x827744F4;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82774510
	if (!cr6.eq) goto loc_82774510;
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274bff8
	ctx.lr = 0x82774508;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// b 0x8277451c
	goto loc_8277451C;
loc_82774510:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_8277451C:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82774528;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8277454c
	if (cr6.eq) goto loc_8277454C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3767
	ctx.r7.s64 = 3767;
	// addi r5,r11,30056
	ctx.r5.s64 = ctx.r11.s64 + 30056;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8277454C;
	sub_826CA560(ctx, base);
loc_8277454C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82774590
	if (cr6.eq) goto loc_82774590;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82774590
	if (cr6.eq) goto loc_82774590;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82770a58
	ctx.lr = 0x82774568;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,26
	ctx.r6.s64 = 26;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82774590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774590:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277459C"))) PPC_WEAK_FUNC(sub_8277459C);
PPC_FUNC_IMPL(__imp__sub_8277459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827745A0"))) PPC_WEAK_FUNC(sub_827745A0);
PPC_FUNC_IMPL(__imp__sub_827745A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827745A8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,29688
	ctx.r28.s64 = ctx.r11.s64 + 29688;
	// bne cr6,0x827745f4
	if (!cr6.eq) goto loc_827745F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3800
	ctx.r7.s64 = 3800;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827745F4;
	sub_826CA560(ctx, base);
loc_827745F4:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82774600;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82774658
	if (!cr6.eq) goto loc_82774658;
	// li r4,166
	ctx.r4.s64 = 166;
	// bl 0x8274bff8
	ctx.lr = 0x82774614;
	sub_8274BFF8(ctx, base);
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8274bff8
	ctx.lr = 0x82774624;
	sub_8274BFF8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82774648
	if (!cr6.eq) goto loc_82774648;
	// lis r11,32639
	ctx.r11.s64 = 2139029504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8277467c
	goto loc_8277467C;
loc_82774648:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x82774678
	goto loc_82774678;
loc_82774658:
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x8274bff8
	ctx.lr = 0x82774660;
	sub_8274BFF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,17760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17760);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f0,10548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82774678:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8277467C:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82774688;
	sub_826CFD18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x827746ac
	if (cr6.eq) goto loc_827746AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3827
	ctx.r7.s64 = 3827;
	// addi r5,r11,30200
	ctx.r5.s64 = ctx.r11.s64 + 30200;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827746AC;
	sub_826CA560(ctx, base);
loc_827746AC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827746f0
	if (cr6.eq) goto loc_827746F0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827746f0
	if (cr6.eq) goto loc_827746F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82770a58
	ctx.lr = 0x827746C8;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,27
	ctx.r6.s64 = 27;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x827746F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827746F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774700"))) PPC_WEAK_FUNC(sub_82774700);
PPC_FUNC_IMPL(__imp__sub_82774700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82774708;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82774744
	if (!cr6.eq) goto loc_82774744;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3857
	ctx.r7.s64 = 3857;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774744;
	sub_826CA560(ctx, base);
loc_82774744:
	// li r4,998
	ctx.r4.s64 = 998;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274bff8
	ctx.lr = 0x82774750;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82774794
	if (cr6.eq) goto loc_82774794;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82774794
	if (cr6.eq) goto loc_82774794;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x8277476C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,93
	ctx.r6.s64 = 93;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82774794;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774794:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827747A0"))) PPC_WEAK_FUNC(sub_827747A0);
PPC_FUNC_IMPL(__imp__sub_827747A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x827747A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827747e4
	if (!cr6.eq) goto loc_827747E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3889
	ctx.r7.s64 = 3889;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827747E4;
	sub_826CA560(ctx, base);
loc_827747E4:
	// li r4,999
	ctx.r4.s64 = 999;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274bff8
	ctx.lr = 0x827747F0;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82774834
	if (cr6.eq) goto loc_82774834;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82774834
	if (cr6.eq) goto loc_82774834;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x8277480C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,94
	ctx.r6.s64 = 94;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,376(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82774834;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774834:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774840"))) PPC_WEAK_FUNC(sub_82774840);
PPC_FUNC_IMPL(__imp__sub_82774840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,19772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19772);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82774854"))) PPC_WEAK_FUNC(sub_82774854);
PPC_FUNC_IMPL(__imp__sub_82774854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774858"))) PPC_WEAK_FUNC(sub_82774858);
PPC_FUNC_IMPL(__imp__sub_82774858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,19768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277486C"))) PPC_WEAK_FUNC(sub_8277486C);
PPC_FUNC_IMPL(__imp__sub_8277486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774870"))) PPC_WEAK_FUNC(sub_82774870);
PPC_FUNC_IMPL(__imp__sub_82774870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,19764(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19764);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82774884"))) PPC_WEAK_FUNC(sub_82774884);
PPC_FUNC_IMPL(__imp__sub_82774884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774888"))) PPC_WEAK_FUNC(sub_82774888);
PPC_FUNC_IMPL(__imp__sub_82774888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,19760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277489C"))) PPC_WEAK_FUNC(sub_8277489C);
PPC_FUNC_IMPL(__imp__sub_8277489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827748A0"))) PPC_WEAK_FUNC(sub_827748A0);
PPC_FUNC_IMPL(__imp__sub_827748A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827748B4"))) PPC_WEAK_FUNC(sub_827748B4);
PPC_FUNC_IMPL(__imp__sub_827748B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827748B8"))) PPC_WEAK_FUNC(sub_827748B8);
PPC_FUNC_IMPL(__imp__sub_827748B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,19756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827748CC"))) PPC_WEAK_FUNC(sub_827748CC);
PPC_FUNC_IMPL(__imp__sub_827748CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827748D0"))) PPC_WEAK_FUNC(sub_827748D0);
PPC_FUNC_IMPL(__imp__sub_827748D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,19752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19752);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827748E4"))) PPC_WEAK_FUNC(sub_827748E4);
PPC_FUNC_IMPL(__imp__sub_827748E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827748E8"))) PPC_WEAK_FUNC(sub_827748E8);
PPC_FUNC_IMPL(__imp__sub_827748E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,19748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19748);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827748FC"))) PPC_WEAK_FUNC(sub_827748FC);
PPC_FUNC_IMPL(__imp__sub_827748FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774900"))) PPC_WEAK_FUNC(sub_82774900);
PPC_FUNC_IMPL(__imp__sub_82774900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,19744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82774914"))) PPC_WEAK_FUNC(sub_82774914);
PPC_FUNC_IMPL(__imp__sub_82774914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774918"))) PPC_WEAK_FUNC(sub_82774918);
PPC_FUNC_IMPL(__imp__sub_82774918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82774920;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82774960
	if (!cr6.eq) goto loc_82774960;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4098
	ctx.r7.s64 = 4098;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774960;
	sub_826CA560(ctx, base);
loc_82774960:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8274cfc8
	ctx.lr = 0x82774970;
	sub_8274CFC8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827749b8
	if (cr6.eq) goto loc_827749B8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827749b8
	if (cr6.eq) goto loc_827749B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x8277498C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,51
	ctx.r6.s64 = 51;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x827749B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827749B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827749C4"))) PPC_WEAK_FUNC(sub_827749C4);
PPC_FUNC_IMPL(__imp__sub_827749C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827749C8"))) PPC_WEAK_FUNC(sub_827749C8);
PPC_FUNC_IMPL(__imp__sub_827749C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827749D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82774a10
	if (!cr6.eq) goto loc_82774A10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4133
	ctx.r7.s64 = 4133;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774A10;
	sub_826CA560(ctx, base);
loc_82774A10:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d0020
	ctx.lr = 0x82774A20;
	sub_826D0020(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// beq cr6,0x82774a78
	if (cr6.eq) goto loc_82774A78;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82774a78
	if (cr6.eq) goto loc_82774A78;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82770a58
	ctx.lr = 0x82774A50;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,54
	ctx.r6.s64 = 54;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,216(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82774A78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774A78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774A84"))) PPC_WEAK_FUNC(sub_82774A84);
PPC_FUNC_IMPL(__imp__sub_82774A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774A88"))) PPC_WEAK_FUNC(sub_82774A88);
PPC_FUNC_IMPL(__imp__sub_82774A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82774A90;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82774acc
	if (!cr6.eq) goto loc_82774ACC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4163
	ctx.r7.s64 = 4163;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774ACC;
	sub_826CA560(ctx, base);
loc_82774ACC:
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274bff8
	ctx.lr = 0x82774AD8;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82774b1c
	if (cr6.eq) goto loc_82774B1C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82774b1c
	if (cr6.eq) goto loc_82774B1C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x82774AF4;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82774B1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774B1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774B28"))) PPC_WEAK_FUNC(sub_82774B28);
PPC_FUNC_IMPL(__imp__sub_82774B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82774B30;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82774b6c
	if (!cr6.eq) goto loc_82774B6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4195
	ctx.r7.s64 = 4195;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774B6C;
	sub_826CA560(ctx, base);
loc_82774B6C:
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274bff8
	ctx.lr = 0x82774B78;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82774bbc
	if (cr6.eq) goto loc_82774BBC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82774bbc
	if (cr6.eq) goto loc_82774BBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x82774B94;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,75
	ctx.r6.s64 = 75;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,300(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82774BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774BBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774BC8"))) PPC_WEAK_FUNC(sub_82774BC8);
PPC_FUNC_IMPL(__imp__sub_82774BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82774BD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82774c0c
	if (!cr6.eq) goto loc_82774C0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4225
	ctx.r7.s64 = 4225;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774C0C;
	sub_826CA560(ctx, base);
loc_82774C0C:
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274bff8
	ctx.lr = 0x82774C18;
	sub_8274BFF8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82774c5c
	if (cr6.eq) goto loc_82774C5C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82774c5c
	if (cr6.eq) goto loc_82774C5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x82774C34;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r6,25
	ctx.r6.s64 = 25;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82774C5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774C5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774C68"))) PPC_WEAK_FUNC(sub_82774C68);
PPC_FUNC_IMPL(__imp__sub_82774C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82774C70;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82774cac
	if (!cr6.eq) goto loc_82774CAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4257
	ctx.r7.s64 = 4257;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774CAC;
	sub_826CA560(ctx, base);
loc_82774CAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f1,2548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// beq cr6,0x82774cfc
	if (cr6.eq) goto loc_82774CFC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82774cfc
	if (cr6.eq) goto loc_82774CFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x82774CD0;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,256(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82774CFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774CFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774D08"))) PPC_WEAK_FUNC(sub_82774D08);
PPC_FUNC_IMPL(__imp__sub_82774D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82774D10;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82774d50
	if (!cr6.eq) goto loc_82774D50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4293
	ctx.r7.s64 = 4293;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774D50;
	sub_826CA560(ctx, base);
loc_82774D50:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8274cfc8
	ctx.lr = 0x82774D60;
	sub_8274CFC8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82774da8
	if (cr6.eq) goto loc_82774DA8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82774da8
	if (cr6.eq) goto loc_82774DA8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x82774D7C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,65
	ctx.r6.s64 = 65;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,260(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82774DA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774DA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774DB4"))) PPC_WEAK_FUNC(sub_82774DB4);
PPC_FUNC_IMPL(__imp__sub_82774DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774DB8"))) PPC_WEAK_FUNC(sub_82774DB8);
PPC_FUNC_IMPL(__imp__sub_82774DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82774DC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82774e00
	if (!cr6.eq) goto loc_82774E00;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4327
	ctx.r7.s64 = 4327;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774E00;
	sub_826CA560(ctx, base);
loc_82774E00:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8274cfc8
	ctx.lr = 0x82774E10;
	sub_8274CFC8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82774e58
	if (cr6.eq) goto loc_82774E58;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82774e58
	if (cr6.eq) goto loc_82774E58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82770a58
	ctx.lr = 0x82774E2C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,66
	ctx.r6.s64 = 66;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,264(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82774E58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774E58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774E64"))) PPC_WEAK_FUNC(sub_82774E64);
PPC_FUNC_IMPL(__imp__sub_82774E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774E68"))) PPC_WEAK_FUNC(sub_82774E68);
PPC_FUNC_IMPL(__imp__sub_82774E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82774E70;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82774eb0
	if (!cr6.eq) goto loc_82774EB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4363
	ctx.r7.s64 = 4363;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82774EB0;
	sub_826CA560(ctx, base);
loc_82774EB0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82774EC0;
	sub_826D0020(ctx, base);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwimi r11,r3,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82774f14
	if (cr6.eq) goto loc_82774F14;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82774f14
	if (cr6.eq) goto loc_82774F14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82770a58
	ctx.lr = 0x82774EE8;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,62
	ctx.r6.s64 = 62;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,248(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82774F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774F14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774F20"))) PPC_WEAK_FUNC(sub_82774F20);
PPC_FUNC_IMPL(__imp__sub_82774F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82774F28;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,19200
	ctx.r11.s64 = 1258291200;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82774f88
	if (cr6.eq) goto loc_82774F88;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82774f88
	if (cr6.eq) goto loc_82774F88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82770a58
	ctx.lr = 0x82774F5C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,88
	ctx.r6.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,352(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82774F88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82774F88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774F94"))) PPC_WEAK_FUNC(sub_82774F94);
PPC_FUNC_IMPL(__imp__sub_82774F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82774F98"))) PPC_WEAK_FUNC(sub_82774F98);
PPC_FUNC_IMPL(__imp__sub_82774F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x82774FA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,29688
	ctx.r27.s64 = ctx.r11.s64 + 29688;
	// bne cr6,0x82774fec
	if (!cr6.eq) goto loc_82774FEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4437
	ctx.r7.s64 = 4437;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82774FEC;
	sub_826CA560(ctx, base);
loc_82774FEC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d0020
	ctx.lr = 0x82774FFC;
	sub_826D0020(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d0020
	ctx.lr = 0x82775010;
	sub_826D0020(ctx, base);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r11,r11,-2504
	ctx.r11.s64 = ctx.r11.s64 + -2504;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// beq cr6,0x82775070
	if (cr6.eq) goto loc_82775070;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x82775070
	if (cr6.eq) goto loc_82775070;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x82775068
	if (cr6.eq) goto loc_82775068;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82775068
	if (cr6.eq) goto loc_82775068;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4450
	ctx.r7.s64 = 4450;
	// addi r5,r11,25160
	ctx.r5.s64 = ctx.r11.s64 + 25160;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775068;
	sub_826CA560(ctx, base);
loc_82775068:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82775074
	goto loc_82775074;
loc_82775070:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82775074:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// oris r11,r11,75
	ctx.r11.u64 = ctx.r11.u64 | 4915200;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// beq cr6,0x827750d0
	if (cr6.eq) goto loc_827750D0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x827750d0
	if (cr6.eq) goto loc_827750D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82770a58
	ctx.lr = 0x827750A4;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,89
	ctx.r6.s64 = 89;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,356(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x827750D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827750D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827750DC"))) PPC_WEAK_FUNC(sub_827750DC);
PPC_FUNC_IMPL(__imp__sub_827750DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827750E0"))) PPC_WEAK_FUNC(sub_827750E0);
PPC_FUNC_IMPL(__imp__sub_827750E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827750E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82775128
	if (!cr6.eq) goto loc_82775128;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,4490
	ctx.r7.s64 = 4490;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82775128;
	sub_826CA560(ctx, base);
loc_82775128:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x82775138;
	sub_826D0020(ctx, base);
	// oris r11,r3,19200
	ctx.r11.u64 = ctx.r3.u64 | 1258291200;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82775188
	if (cr6.eq) goto loc_82775188;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82775188
	if (cr6.eq) goto loc_82775188;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82770a58
	ctx.lr = 0x8277515C;
	sub_82770A58(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,90
	ctx.r6.s64 = 90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,360(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82775188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82775188:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775194"))) PPC_WEAK_FUNC(sub_82775194);
PPC_FUNC_IMPL(__imp__sub_82775194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82775198"))) PPC_WEAK_FUNC(sub_82775198);
PPC_FUNC_IMPL(__imp__sub_82775198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x827751A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x827751e0
	if (!cr6.eq) goto loc_827751E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,447
	ctx.r7.s64 = 447;
	// addi r6,r11,29688
	ctx.r6.s64 = ctx.r11.s64 + 29688;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827751E0;
	sub_826CA560(ctx, base);
loc_827751E0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x827751F0;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82775258
	if (!cr6.eq) goto loc_82775258;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82775214
	if (cr6.eq) goto loc_82775214;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82775214;
	sub_826D0328(ctx, base);
loc_82775214:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82775250
	if (cr6.eq) goto loc_82775250;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82775250
	if (cr6.eq) goto loc_82775250;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,420(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82775250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82775250:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827752b4
	goto loc_827752B4;
loc_82775258:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82775274
	if (cr6.eq) goto loc_82775274;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826d0328
	ctx.lr = 0x82775274;
	sub_826D0328(ctx, base);
loc_82775274:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827752b0
	if (cr6.eq) goto loc_827752B0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827752b0
	if (cr6.eq) goto loc_827752B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,420(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x827752B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827752B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827752B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827752BC"))) PPC_WEAK_FUNC(sub_827752BC);
PPC_FUNC_IMPL(__imp__sub_827752BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827752C0"))) PPC_WEAK_FUNC(sub_827752C0);
PPC_FUNC_IMPL(__imp__sub_827752C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x827752C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,29688
	ctx.r30.s64 = ctx.r11.s64 + 29688;
	// bne cr6,0x82775314
	if (!cr6.eq) goto loc_82775314;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,504
	ctx.r7.s64 = 504;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775314;
	sub_826CA560(ctx, base);
loc_82775314:
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x82775338
	if (cr6.lt) goto loc_82775338;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,505
	ctx.r7.s64 = 505;
	// addi r5,r11,30356
	ctx.r5.s64 = ctx.r11.s64 + 30356;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775338;
	sub_826CA560(ctx, base);
loc_82775338:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8277535c
	if (!cr6.lt) goto loc_8277535C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,506
	ctx.r7.s64 = 506;
	// addi r5,r11,30344
	ctx.r5.s64 = ctx.r11.s64 + 30344;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8277535C;
	sub_826CA560(ctx, base);
loc_8277535C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x8277536C;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x827753d0
	if (cr6.eq) goto loc_827753D0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82775390
	if (cr6.eq) goto loc_82775390;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826d0328
	ctx.lr = 0x82775390;
	sub_826D0328(ctx, base);
loc_82775390:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827753c8
	if (cr6.eq) goto loc_827753C8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827753c8
	if (cr6.eq) goto loc_827753C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,-2952(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2952);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x827753C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827753C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82775428
	goto loc_82775428;
loc_827753D0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827753ec
	if (cr6.eq) goto loc_827753EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826d0328
	ctx.lr = 0x827753EC;
	sub_826D0328(ctx, base);
loc_827753EC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82775424
	if (cr6.eq) goto loc_82775424;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82775424
	if (cr6.eq) goto loc_82775424;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,-2952(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2952);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82775424;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82775424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82775428:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775430"))) PPC_WEAK_FUNC(sub_82775430);
PPC_FUNC_IMPL(__imp__sub_82775430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x82775438;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,29688
	ctx.r30.s64 = ctx.r11.s64 + 29688;
	// bne cr6,0x82775484
	if (!cr6.eq) goto loc_82775484;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,561
	ctx.r7.s64 = 561;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775484;
	sub_826CA560(ctx, base);
loc_82775484:
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x827754a8
	if (cr6.lt) goto loc_827754A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,562
	ctx.r7.s64 = 562;
	// addi r5,r11,30356
	ctx.r5.s64 = ctx.r11.s64 + 30356;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827754A8;
	sub_826CA560(ctx, base);
loc_827754A8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x827754cc
	if (!cr6.lt) goto loc_827754CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,563
	ctx.r7.s64 = 563;
	// addi r5,r11,30344
	ctx.r5.s64 = ctx.r11.s64 + 30344;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827754CC;
	sub_826CA560(ctx, base);
loc_827754CC:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cfd18
	ctx.lr = 0x827754D8;
	sub_826CFD18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x827754EC;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8277555c
	if (!cr6.eq) goto loc_8277555C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8277555c
	if (!cr6.eq) goto loc_8277555C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82775518
	if (cr6.eq) goto loc_82775518;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826d0328
	ctx.lr = 0x82775518;
	sub_826D0328(ctx, base);
loc_82775518:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82775554
	if (cr6.eq) goto loc_82775554;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82775554
	if (cr6.eq) goto loc_82775554;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82775554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82775554:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827755b8
	goto loc_827755B8;
loc_8277555C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82775578
	if (cr6.eq) goto loc_82775578;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826d0328
	ctx.lr = 0x82775578;
	sub_826D0328(ctx, base);
loc_82775578:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827755b4
	if (cr6.eq) goto loc_827755B4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827755b4
	if (cr6.eq) goto loc_827755B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x827755B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827755B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827755B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827755C0"))) PPC_WEAK_FUNC(sub_827755C0);
PPC_FUNC_IMPL(__imp__sub_827755C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x827755C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,29688
	ctx.r30.s64 = ctx.r11.s64 + 29688;
	// bne cr6,0x82775614
	if (!cr6.eq) goto loc_82775614;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,619
	ctx.r7.s64 = 619;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775614;
	sub_826CA560(ctx, base);
loc_82775614:
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x82775638
	if (cr6.lt) goto loc_82775638;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,620
	ctx.r7.s64 = 620;
	// addi r5,r11,30356
	ctx.r5.s64 = ctx.r11.s64 + 30356;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775638;
	sub_826CA560(ctx, base);
loc_82775638:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8277565c
	if (!cr6.lt) goto loc_8277565C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,621
	ctx.r7.s64 = 621;
	// addi r5,r11,30344
	ctx.r5.s64 = ctx.r11.s64 + 30344;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8277565C;
	sub_826CA560(ctx, base);
loc_8277565C:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82775668;
	sub_826CFD18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x8277567C;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x827756ec
	if (!cr6.eq) goto loc_827756EC;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x827756ec
	if (!cr6.eq) goto loc_827756EC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827756a8
	if (cr6.eq) goto loc_827756A8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826d0328
	ctx.lr = 0x827756A8;
	sub_826D0328(ctx, base);
loc_827756A8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827756e4
	if (cr6.eq) goto loc_827756E4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827756e4
	if (cr6.eq) goto loc_827756E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x827756E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827756E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82775748
	goto loc_82775748;
loc_827756EC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82775708
	if (cr6.eq) goto loc_82775708;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826d0328
	ctx.lr = 0x82775708;
	sub_826D0328(ctx, base);
loc_82775708:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82775744
	if (cr6.eq) goto loc_82775744;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82775744
	if (cr6.eq) goto loc_82775744;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82775744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82775744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82775748:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775750"))) PPC_WEAK_FUNC(sub_82775750);
PPC_FUNC_IMPL(__imp__sub_82775750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x82775758;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,29688
	ctx.r30.s64 = ctx.r11.s64 + 29688;
	// bne cr6,0x827757a4
	if (!cr6.eq) goto loc_827757A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,677
	ctx.r7.s64 = 677;
	// addi r5,r11,-5848
	ctx.r5.s64 = ctx.r11.s64 + -5848;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827757A4;
	sub_826CA560(ctx, base);
loc_827757A4:
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x827757c8
	if (cr6.lt) goto loc_827757C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,678
	ctx.r7.s64 = 678;
	// addi r5,r11,30356
	ctx.r5.s64 = ctx.r11.s64 + 30356;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827757C8;
	sub_826CA560(ctx, base);
loc_827757C8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x827757ec
	if (!cr6.lt) goto loc_827757EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,679
	ctx.r7.s64 = 679;
	// addi r5,r11,30344
	ctx.r5.s64 = ctx.r11.s64 + 30344;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827757EC;
	sub_826CA560(ctx, base);
loc_827757EC:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826cfd18
	ctx.lr = 0x827757F8;
	sub_826CFD18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826d0020
	ctx.lr = 0x8277580C;
	sub_826D0020(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8277587c
	if (!cr6.eq) goto loc_8277587C;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x8277587c
	if (!cr6.eq) goto loc_8277587C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82775838
	if (cr6.eq) goto loc_82775838;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826d0328
	ctx.lr = 0x82775838;
	sub_826D0328(ctx, base);
loc_82775838:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82775874
	if (cr6.eq) goto loc_82775874;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82775874
	if (cr6.eq) goto loc_82775874;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82775874;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82775874:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827758d8
	goto loc_827758D8;
loc_8277587C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82775898
	if (cr6.eq) goto loc_82775898;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826d0328
	ctx.lr = 0x82775898;
	sub_826D0328(ctx, base);
loc_82775898:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827758d4
	if (cr6.eq) goto loc_827758D4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827758d4
	if (cr6.eq) goto loc_827758D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,-2952
	ctx.r11.s64 = ctx.r11.s64 + -2952;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x827758D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827758D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827758D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827758E0"))) PPC_WEAK_FUNC(sub_827758E0);
PPC_FUNC_IMPL(__imp__sub_827758E0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x827758E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8277592c
	if (!cr6.eq) goto loc_8277592C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,683
	ctx.r7.s64 = 683;
	// addi r6,r11,30376
	ctx.r6.s64 = ctx.r11.s64 + 30376;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,30368
	ctx.r5.s64 = ctx.r11.s64 + 30368;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x8277592C;
	sub_826CA560(ctx, base);
loc_8277592C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82775940
	if (!cr0.eq) goto loc_82775940;
loc_82775938:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8277597c
	goto loc_8277597C;
loc_82775940:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82775938
	if (cr6.eq) goto loc_82775938;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_8277594C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82775984
	if (!cr6.eq) goto loc_82775984;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82775994
	if (!cr6.eq) goto loc_82775994;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82775978:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8277597C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
loc_82775984:
	// bge cr6,0x82775990
	if (!cr6.lt) goto loc_82775990;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82775994
	goto loc_82775994;
loc_82775990:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82775994:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277594c
	if (!cr6.eq) goto loc_8277594C;
	// b 0x82775978
	goto loc_82775978;
}

__attribute__((alias("__imp__sub_827759A0"))) PPC_WEAK_FUNC(sub_827759A0);
PPC_FUNC_IMPL(__imp__sub_827759A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827759b0
	if (cr6.eq) goto loc_827759B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
loc_827759B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827759B8"))) PPC_WEAK_FUNC(sub_827759B8);
PPC_FUNC_IMPL(__imp__sub_827759B8) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82748fb8
	ctx.lr = 0x827759DC;
	sub_82748FB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82775A0C"))) PPC_WEAK_FUNC(sub_82775A0C);
PPC_FUNC_IMPL(__imp__sub_82775A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82775A10"))) PPC_WEAK_FUNC(sub_82775A10);
PPC_FUNC_IMPL(__imp__sub_82775A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x82775A18;
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
	// addi r28,r11,30376
	ctx.r28.s64 = ctx.r11.s64 + 30376;
	// bne cr6,0x82775a60
	if (!cr6.eq) goto loc_82775A60;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,66
	ctx.r7.s64 = 66;
	// addi r5,r11,6264
	ctx.r5.s64 = ctx.r11.s64 + 6264;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775A60;
	sub_826CA560(ctx, base);
loc_82775A60:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82775a84
	if (!cr6.eq) goto loc_82775A84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,67
	ctx.r7.s64 = 67;
	// addi r5,r11,6252
	ctx.r5.s64 = ctx.r11.s64 + 6252;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775A84;
	sub_826CA560(ctx, base);
loc_82775A84:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82775A94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82775ab8
	if (!cr0.eq) goto loc_82775AB8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,70
	ctx.r7.s64 = 70;
	// addi r5,r11,30480
	ctx.r5.s64 = ctx.r11.s64 + 30480;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775AB8;
	sub_826CA560(ctx, base);
loc_82775AB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82748e88
	ctx.lr = 0x82775AEC;
	sub_82748E88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x82775b14
	if (!cr0.eq) goto loc_82775B14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,88
	ctx.r7.s64 = 88;
	// addi r5,r11,30456
	ctx.r5.s64 = ctx.r11.s64 + 30456;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775B14;
	sub_826CA560(ctx, base);
loc_82775B14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775B20"))) PPC_WEAK_FUNC(sub_82775B20);
PPC_FUNC_IMPL(__imp__sub_82775B20) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x82775B28;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r24,20(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82775c8c
	if (cr6.eq) goto loc_82775C8C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82775b7c
	if (!cr0.eq) goto loc_82775B7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x827759b8
	ctx.lr = 0x82775B68;
	sub_827759B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82775B7C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82775c44
	if (cr6.eq) goto loc_82775C44;
loc_82775B84:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82775bd8
	if (!cr6.eq) goto loc_82775BD8;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82775c44
	if (cr6.eq) goto loc_82775C44;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82775bd0
	if (!cr6.eq) goto loc_82775BD0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827759b8
	ctx.lr = 0x82775BC0;
	sub_827759B8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82775BD0:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82775c38
	goto loc_82775C38;
loc_82775BD8:
	// bge cr6,0x82775c0c
	if (!cr6.lt) goto loc_82775C0C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82775c04
	if (!cr6.eq) goto loc_82775C04;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827759b8
	ctx.lr = 0x82775BF4;
	sub_827759B8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82775C04:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82775c38
	goto loc_82775C38;
loc_82775C0C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82775c34
	if (!cr6.eq) goto loc_82775C34;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827759b8
	ctx.lr = 0x82775C24;
	sub_827759B8(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82775C34:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82775C38:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82775b84
	if (cr6.lt) goto loc_82775B84;
loc_82775C44:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82775c8c
	if (!cr6.lt) goto loc_82775C8C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827759b8
	ctx.lr = 0x82775C60;
	sub_827759B8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// ble cr6,0x82775c84
	if (!cr6.gt) goto loc_82775C84;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82775C84:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82775c90
	goto loc_82775C90;
loc_82775C8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82775C90:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775C98"))) PPC_WEAK_FUNC(sub_82775C98);
PPC_FUNC_IMPL(__imp__sub_82775C98) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x82775CA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,-6172
	ctx.r27.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r26,r11,30376
	ctx.r26.s64 = ctx.r11.s64 + 30376;
	// bne cr6,0x82775cdc
	if (!cr6.eq) goto loc_82775CDC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,572
	ctx.r7.s64 = 572;
	// addi r5,r11,30368
	ctx.r5.s64 = ctx.r11.s64 + 30368;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775CDC;
	sub_826CA560(ctx, base);
loc_82775CDC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82775d9c
	if (cr6.lt) goto loc_82775D9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r11,30492
	ctx.r25.s64 = ctx.r11.s64 + 30492;
loc_82775CF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82775d1c
	if (!cr0.eq) goto loc_82775D1C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82775d1c
	if (!cr0.eq) goto loc_82775D1C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82775d24
	if (cr0.eq) goto loc_82775D24;
loc_82775D1C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82775cf8
	goto loc_82775CF8;
loc_82775D24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x827490b8
	ctx.lr = 0x82775D30;
	sub_827490B8(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// beq 0x82775d98
	if (cr0.eq) goto loc_82775D98;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r31,0
	cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82775d68
	if (!cr0.eq) goto loc_82775D68;
	// li r7,616
	ctx.r7.s64 = 616;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82775D68;
	sub_826CA560(ctx, base);
loc_82775D68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82775d7c
	if (!cr6.eq) goto loc_82775D7C;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// b 0x82775cf8
	goto loc_82775CF8;
loc_82775D7C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82775d90
	if (!cr6.eq) goto loc_82775D90;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// b 0x82775cf8
	goto loc_82775CF8;
loc_82775D90:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// b 0x82775cf8
	goto loc_82775CF8;
loc_82775D98:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82775D9C:
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775DAC"))) PPC_WEAK_FUNC(sub_82775DAC);
PPC_FUNC_IMPL(__imp__sub_82775DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82775DB0"))) PPC_WEAK_FUNC(sub_82775DB0);
PPC_FUNC_IMPL(__imp__sub_82775DB0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82775dec
	if (!cr6.eq) goto loc_82775DEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,109
	ctx.r7.s64 = 109;
	// addi r6,r11,30376
	ctx.r6.s64 = ctx.r11.s64 + 30376;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,30368
	ctx.r5.s64 = ctx.r11.s64 + 30368;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82775DEC;
	sub_826CA560(ctx, base);
loc_82775DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82775c98
	ctx.lr = 0x82775DF4;
	sub_82775C98(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82748f48
	ctx.lr = 0x82775DFC;
	sub_82748F48(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775E10;
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

__attribute__((alias("__imp__sub_82775E24"))) PPC_WEAK_FUNC(sub_82775E24);
PPC_FUNC_IMPL(__imp__sub_82775E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82775E28"))) PPC_WEAK_FUNC(sub_82775E28);
PPC_FUNC_IMPL(__imp__sub_82775E28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-25033
	ctx.r11.s64 = -1640562688;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// ori r10,r11,31161
	ctx.r10.u64 = ctx.r11.u64 | 31161;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82775f04
	if (cr6.lt) goto loc_82775F04;
	// li r8,3
	ctx.r8.s64 = 3;
	// divwu r8,r4,r8
	ctx.r8.u32 = ctx.r4.u32 / ctx.r8.u32;
loc_82775E4C:
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r6,r9,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r9.s64;
	// rlwinm r5,r9,19,13,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r6,r10,19,13,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r6,r9,20,12,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r6,r11,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r6,r10,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r6,r9,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm r6,r11,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r6,r10,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// bne 0x82775e4c
	if (!cr0.eq) goto loc_82775E4C;
loc_82775F04:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82775f24
	if (cr6.eq) goto loc_82775F24;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x82775f2c
	if (!cr6.eq) goto loc_82775F2C;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82775F24:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82775F2C:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r8,r9,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r8,r10,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r8,r9,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r8,r10,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82775FC0"))) PPC_WEAK_FUNC(sub_82775FC0);
PPC_FUNC_IMPL(__imp__sub_82775FC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x82775FC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-5520
	ctx.r11.s64 = ctx.r11.s64 + -5520;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,31600
	ctx.r29.s64 = ctx.r11.s64 + 31600;
	// bne cr6,0x82776018
	if (!cr6.eq) goto loc_82776018;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1690
	ctx.r7.s64 = 1690;
	// addi r5,r11,16872
	ctx.r5.s64 = ctx.r11.s64 + 16872;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776018;
	sub_826CA560(ctx, base);
loc_82776018:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275d8a0
	ctx.lr = 0x82776024;
	sub_8275D8A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82776044
	if (!cr0.eq) goto loc_82776044;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1691
	ctx.r7.s64 = 1691;
	// addi r5,r11,31692
	ctx.r5.s64 = ctx.r11.s64 + 31692;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826ca560
	ctx.lr = 0x82776044;
	sub_826CA560(ctx, base);
loc_82776044:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d8a0
	ctx.lr = 0x82776058;
	sub_8275D8A0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8275d8a0
	ctx.lr = 0x82776084;
	sub_8275D8A0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827760B4"))) PPC_WEAK_FUNC(sub_827760B4);
PPC_FUNC_IMPL(__imp__sub_827760B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827760B8"))) PPC_WEAK_FUNC(sub_827760B8);
PPC_FUNC_IMPL(__imp__sub_827760B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f4
	ctx.lr = 0x827760C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// bl 0x827935e8
	ctx.lr = 0x827760E4;
	sub_827935E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r11,-6172
	ctx.r25.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r24,r11,31600
	ctx.r24.s64 = ctx.r11.s64 + 31600;
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne 0x82776118
	if (!cr0.eq) goto loc_82776118;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1730
	ctx.r7.s64 = 1730;
	// addi r5,r11,31732
	ctx.r5.s64 = ctx.r11.s64 + 31732;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776118;
	sub_826CA560(ctx, base);
loc_82776118:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82776158
	if (!cr6.eq) goto loc_82776158;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82776158
	if (!cr6.eq) goto loc_82776158;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82776158
	if (!cr6.eq) goto loc_82776158;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82776158
	if (!cr6.eq) goto loc_82776158;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82776280
	goto loc_82776280;
loc_82776158:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82793848
	ctx.lr = 0x82776164;
	sub_82793848(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r23,r11,31712
	ctx.r23.s64 = ctx.r11.s64 + 31712;
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt 0x8277618c
	if (cr0.gt) goto loc_8277618C;
	// li r7,1750
	ctx.r7.s64 = 1750;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8277618C;
	sub_826CA560(ctx, base);
loc_8277618C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x827761c8
	if (!cr6.gt) goto loc_827761C8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r28,r30,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r27,r30,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_827761A4:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwzx r5,r28,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82793cd0
	ctx.lr = 0x827761B8;
	sub_82793CD0(ctx, base);
	// stwx r3,r27,r30
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r3.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x827761a4
	if (!cr0.eq) goto loc_827761A4;
loc_827761C8:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793b68
	ctx.lr = 0x827761D8;
	sub_82793B68(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793b30
	ctx.lr = 0x827761EC;
	sub_82793B30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x8277620c
	if (cr0.gt) goto loc_8277620C;
	// li r7,1763
	ctx.r7.s64 = 1763;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8277620C;
	sub_826CA560(ctx, base);
loc_8277620C:
	// cmplwi cr6,r19,1
	cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// beq cr6,0x82776260
	if (cr6.eq) goto loc_82776260;
	// cmplwi cr6,r19,2
	cr6.compare<uint32_t>(ctx.r19.u32, 2, ctx.xer);
	// beq cr6,0x82776244
	if (cr6.eq) goto loc_82776244;
	// cmplwi cr6,r19,4
	cr6.compare<uint32_t>(ctx.r19.u32, 4, ctx.xer);
	// beq cr6,0x8277623c
	if (cr6.eq) goto loc_8277623C;
	// cmplwi cr6,r19,8
	cr6.compare<uint32_t>(ctx.r19.u32, 8, ctx.xer);
	// bne cr6,0x82776290
	if (!cr6.eq) goto loc_82776290;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x8277628c
	goto loc_8277628C;
loc_8277623C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82776284
	goto loc_82776284;
loc_82776244:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82776280
	goto loc_82776280;
loc_82776260:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82776280:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82776284:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8277628C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82776290:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828d2844
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277629C"))) PPC_WEAK_FUNC(sub_8277629C);
PPC_FUNC_IMPL(__imp__sub_8277629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827762A0"))) PPC_WEAK_FUNC(sub_827762A0);
PPC_FUNC_IMPL(__imp__sub_827762A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x827762A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x827762fc
	if (cr6.eq) goto loc_827762FC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x826d0020
	ctx.lr = 0x827762CC;
	sub_826D0020(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d0020
	ctx.lr = 0x827762E0;
	sub_826D0020(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d0020
	ctx.lr = 0x827762F4;
	sub_826D0020(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82776320
	goto loc_82776320;
loc_827762FC:
	// li r4,960
	ctx.r4.s64 = 960;
	// bl 0x826cfd18
	ctx.lr = 0x82776304;
	sub_826CFD18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,961
	ctx.r4.s64 = 961;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cfd18
	ctx.lr = 0x82776314;
	sub_826CFD18(ctx, base);
	// lis r24,770
	ctx.r24.s64 = 50462720;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r24,r24,256
	ctx.r24.u64 = ctx.r24.u64 | 256;
loc_82776320:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-6172
	ctx.r29.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,31600
	ctx.r28.s64 = ctx.r11.s64 + 31600;
	// beq cr6,0x82776340
	if (cr6.eq) goto loc_82776340;
	// cmplwi cr6,r30,17
	cr6.compare<uint32_t>(ctx.r30.u32, 17, ctx.xer);
	// blt cr6,0x8277635c
	if (cr6.lt) goto loc_8277635C;
loc_82776340:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,321
	ctx.r7.s64 = 321;
	// addi r5,r11,-31880
	ctx.r5.s64 = ctx.r11.s64 + -31880;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8277635C;
	sub_826CA560(ctx, base);
loc_8277635C:
	// clrlwi r26,r27,24
	ctx.r26.u64 = ctx.r27.u32 & 0xFF;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mulli r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 * 12;
	// cmplwi cr6,r26,64
	cr6.compare<uint32_t>(ctx.r26.u32, 64, ctx.xer);
	// addi r30,r11,30504
	ctx.r30.s64 = ctx.r11.s64 + 30504;
	// bne cr6,0x827763b8
	if (!cr6.eq) goto loc_827763B8;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne cr6,0x827763a4
	if (!cr6.eq) goto loc_827763A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,331
	ctx.r7.s64 = 331;
	// addi r5,r11,-31908
	ctx.r5.s64 = ctx.r11.s64 + -31908;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827763A4;
	sub_826CA560(ctx, base);
loc_827763A4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827763d4
	if (!cr6.eq) goto loc_827763D4;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// b 0x827763d0
	goto loc_827763D0;
loc_827763B8:
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne cr6,0x827763d4
	if (!cr6.eq) goto loc_827763D4;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
loc_827763D0:
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
loc_827763D4:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x8277640c
	if (cr6.lt) goto loc_8277640C;
	// rlwinm r11,r27,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8277640c
	if (cr6.eq) goto loc_8277640C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,369
	ctx.r7.s64 = 369;
	// addi r5,r11,-32024
	ctx.r5.s64 = ctx.r11.s64 + -32024;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8277640C;
	sub_826CA560(ctx, base);
loc_8277640C:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x8277643c
	if (cr6.lt) goto loc_8277643C;
	// rlwinm r11,r27,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8277643c
	if (cr6.eq) goto loc_8277643C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,372
	ctx.r7.s64 = 372;
	// addi r5,r11,-32144
	ctx.r5.s64 = ctx.r11.s64 + -32144;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8277643C;
	sub_826CA560(ctx, base);
loc_8277643C:
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8277646c
	if (cr6.lt) goto loc_8277646C;
	// rlwinm r11,r27,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8277646c
	if (cr6.eq) goto loc_8277646C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,375
	ctx.r7.s64 = 375;
	// addi r5,r11,-32264
	ctx.r5.s64 = ctx.r11.s64 + -32264;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8277646C;
	sub_826CA560(ctx, base);
loc_8277646C:
	// cmplwi cr6,r26,34
	cr6.compare<uint32_t>(ctx.r26.u32, 34, ctx.xer);
	// bne cr6,0x82776490
	if (!cr6.eq) goto loc_82776490;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,383
	ctx.r7.s64 = 383;
	// addi r5,r11,-32344
	ctx.r5.s64 = ctx.r11.s64 + -32344;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776490;
	sub_826CA560(ctx, base);
loc_82776490:
	// cmplwi cr6,r26,35
	cr6.compare<uint32_t>(ctx.r26.u32, 35, ctx.xer);
	// bne cr6,0x827764b4
	if (!cr6.eq) goto loc_827764B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,385
	ctx.r7.s64 = 385;
	// addi r5,r11,-32424
	ctx.r5.s64 = ctx.r11.s64 + -32424;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827764B4;
	sub_826CA560(ctx, base);
loc_827764B4:
	// cmplwi cr6,r26,17
	cr6.compare<uint32_t>(ctx.r26.u32, 17, ctx.xer);
	// bne cr6,0x827764d8
	if (!cr6.eq) goto loc_827764D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,387
	ctx.r7.s64 = 387;
	// addi r5,r11,-32504
	ctx.r5.s64 = ctx.r11.s64 + -32504;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827764D8;
	sub_826CA560(ctx, base);
loc_827764D8:
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// bne cr6,0x827764fc
	if (!cr6.eq) goto loc_827764FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,389
	ctx.r7.s64 = 389;
	// addi r5,r11,-32592
	ctx.r5.s64 = ctx.r11.s64 + -32592;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827764FC;
	sub_826CA560(ctx, base);
loc_827764FC:
	// cmplwi cr6,r26,18
	cr6.compare<uint32_t>(ctx.r26.u32, 18, ctx.xer);
	// bne cr6,0x82776520
	if (!cr6.eq) goto loc_82776520;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,391
	ctx.r7.s64 = 391;
	// addi r5,r11,-32680
	ctx.r5.s64 = ctx.r11.s64 + -32680;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776520;
	sub_826CA560(ctx, base);
loc_82776520:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x82776578
	if (cr6.lt) goto loc_82776578;
	// beq cr6,0x82776570
	if (cr6.eq) goto loc_82776570;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// beq cr6,0x82776568
	if (cr6.eq) goto loc_82776568;
	// cmplwi cr6,r26,32
	cr6.compare<uint32_t>(ctx.r26.u32, 32, ctx.xer);
	// beq cr6,0x82776560
	if (cr6.eq) goto loc_82776560;
	// cmplwi cr6,r26,33
	cr6.compare<uint32_t>(ctx.r26.u32, 33, ctx.xer);
	// beq cr6,0x82776558
	if (cr6.eq) goto loc_82776558;
	// cmplwi cr6,r26,64
	cr6.compare<uint32_t>(ctx.r26.u32, 64, ctx.xer);
	// bne cr6,0x82776578
	if (!cr6.eq) goto loc_82776578;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8277657c
	goto loc_8277657C;
loc_82776558:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8277657c
	goto loc_8277657C;
loc_82776560:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8277657c
	goto loc_8277657C;
loc_82776568:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8277657c
	goto loc_8277657C;
loc_82776570:
	// stw r31,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r31.u32);
	// b 0x82776580
	goto loc_82776580;
loc_82776578:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8277657C:
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
loc_82776580:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82776634
	if (!cr0.eq) goto loc_82776634;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x827765c8
	if (cr6.lt) goto loc_827765C8;
	// rlwinm r11,r24,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x827765c8
	if (cr6.eq) goto loc_827765C8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x827765c8
	if (cr6.eq) goto loc_827765C8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x827765c8
	if (cr6.eq) goto loc_827765C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,450
	ctx.r7.s64 = 450;
	// addi r5,r11,32600
	ctx.r5.s64 = ctx.r11.s64 + 32600;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827765C8;
	sub_826CA560(ctx, base);
loc_827765C8:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82776608
	if (cr6.lt) goto loc_82776608;
	// rlwinm r11,r24,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82776608
	if (cr6.eq) goto loc_82776608;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82776608
	if (cr6.eq) goto loc_82776608;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82776608
	if (cr6.eq) goto loc_82776608;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,454
	ctx.r7.s64 = 454;
	// addi r5,r11,32344
	ctx.r5.s64 = ctx.r11.s64 + 32344;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776608;
	sub_826CA560(ctx, base);
loc_82776608:
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82776714
	if (cr6.lt) goto loc_82776714;
	// rlwinm r11,r24,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82776714
	if (cr6.eq) goto loc_82776714;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82776714
	if (cr6.eq) goto loc_82776714;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82776714
	if (cr6.eq) goto loc_82776714;
	// li r7,458
	ctx.r7.s64 = 458;
	// b 0x827766fc
	goto loc_827766FC;
loc_82776634:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82776658
	if (cr6.eq) goto loc_82776658;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,466
	ctx.r7.s64 = 466;
	// addi r5,r11,32264
	ctx.r5.s64 = ctx.r11.s64 + 32264;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776658;
	sub_826CA560(ctx, base);
loc_82776658:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82776698
	if (cr6.lt) goto loc_82776698;
	// rlwinm r11,r24,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82776698
	if (cr6.eq) goto loc_82776698;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82776698
	if (cr6.eq) goto loc_82776698;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82776698
	if (cr6.eq) goto loc_82776698;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,472
	ctx.r7.s64 = 472;
	// addi r5,r11,32600
	ctx.r5.s64 = ctx.r11.s64 + 32600;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776698;
	sub_826CA560(ctx, base);
loc_82776698:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x827766d4
	if (cr6.lt) goto loc_827766D4;
	// rlwinm. r11,r24,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827766d4
	if (cr0.eq) goto loc_827766D4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x827766d4
	if (cr6.eq) goto loc_827766D4;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x827766d4
	if (cr6.eq) goto loc_827766D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,476
	ctx.r7.s64 = 476;
	// addi r5,r11,32008
	ctx.r5.s64 = ctx.r11.s64 + 32008;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827766D4;
	sub_826CA560(ctx, base);
loc_827766D4:
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82776714
	if (cr6.lt) goto loc_82776714;
	// rlwinm r11,r24,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82776714
	if (cr6.eq) goto loc_82776714;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82776714
	if (cr6.eq) goto loc_82776714;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82776714
	if (cr6.eq) goto loc_82776714;
	// li r7,480
	ctx.r7.s64 = 480;
loc_827766FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,31752
	ctx.r5.s64 = ctx.r11.s64 + 31752;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776714;
	sub_826CA560(ctx, base);
loc_82776714:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82776720"))) PPC_WEAK_FUNC(sub_82776720);
PPC_FUNC_IMPL(__imp__sub_82776720) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82776728;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826d0020
	ctx.lr = 0x82776744;
	sub_826D0020(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d0020
	ctx.lr = 0x82776758;
	sub_826D0020(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d0020
	ctx.lr = 0x8277676C;
	sub_826D0020(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-6172
	ctx.r31.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,31600
	ctx.r30.s64 = ctx.r11.s64 + 31600;
	// beq cr6,0x8277678c
	if (cr6.eq) goto loc_8277678C;
	// cmplwi cr6,r29,17
	cr6.compare<uint32_t>(ctx.r29.u32, 17, ctx.xer);
	// blt cr6,0x827767a8
	if (cr6.lt) goto loc_827767A8;
loc_8277678C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,553
	ctx.r7.s64 = 553;
	// addi r5,r11,-31820
	ctx.r5.s64 = ctx.r11.s64 + -31820;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x827767A8;
	sub_826CA560(ctx, base);
loc_827767A8:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x827767e4
	if (!cr6.eq) goto loc_827767E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,30712
	ctx.r11.s64 = ctx.r11.s64 + 30712;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bne 0x8277684c
	if (!cr0.eq) goto loc_8277684C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,564
	ctx.r7.s64 = 564;
	// addi r5,r11,-31836
	ctx.r5.s64 = ctx.r11.s64 + -31836;
	// b 0x8277683c
	goto loc_8277683C;
loc_827767E4:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,30712
	ctx.r11.s64 = ctx.r11.s64 + 30712;
	// bne cr6,0x82776818
	if (!cr6.eq) goto loc_82776818;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bne 0x8277684c
	if (!cr0.eq) goto loc_8277684C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,572
	ctx.r7.s64 = 572;
	// addi r5,r11,-31836
	ctx.r5.s64 = ctx.r11.s64 + -31836;
	// b 0x8277683c
	goto loc_8277683C;
loc_82776818:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bne 0x8277684c
	if (!cr0.eq) goto loc_8277684C;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x8277684c
	if (cr6.eq) goto loc_8277684C;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r7,585
	ctx.r7.s64 = 585;
	// addi r5,r11,19116
	ctx.r5.s64 = ctx.r11.s64 + 19116;
loc_8277683C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x8277684C;
	sub_826CA560(ctx, base);
loc_8277684C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82776854"))) PPC_WEAK_FUNC(sub_82776854);
PPC_FUNC_IMPL(__imp__sub_82776854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82776858"))) PPC_WEAK_FUNC(sub_82776858);
PPC_FUNC_IMPL(__imp__sub_82776858) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82776860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827768a0
	if (!cr6.eq) goto loc_827768A0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,244
	ctx.r7.s64 = 244;
	// addi r6,r11,-31704
	ctx.r6.s64 = ctx.r11.s64 + -31704;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-31732
	ctx.r5.s64 = ctx.r11.s64 + -31732;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827768A0;
	sub_826CA560(ctx, base);
loc_827768A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82794240
	ctx.lr = 0x827768AC;
	sub_82794240(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827768B8"))) PPC_WEAK_FUNC(sub_827768B8);
PPC_FUNC_IMPL(__imp__sub_827768B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2144(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827768C0"))) PPC_WEAK_FUNC(sub_827768C0);
PPC_FUNC_IMPL(__imp__sub_827768C0) {
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
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82786400
	ctx.lr = 0x827768DC;
	sub_82786400(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,370(r11)
	PPC_STORE_U8(ctx.r11.u32 + 370, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_827768FC"))) PPC_WEAK_FUNC(sub_827768FC);
PPC_FUNC_IMPL(__imp__sub_827768FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82776900"))) PPC_WEAK_FUNC(sub_82776900);
PPC_FUNC_IMPL(__imp__sub_82776900) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82759ff0
	ctx.lr = 0x82776934;
	sub_82759FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82776954"))) PPC_WEAK_FUNC(sub_82776954);
PPC_FUNC_IMPL(__imp__sub_82776954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82776958"))) PPC_WEAK_FUNC(sub_82776958);
PPC_FUNC_IMPL(__imp__sub_82776958) {
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
	// addi r31,r3,184
	ctx.r31.s64 = ctx.r3.s64 + 184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82792820
	ctx.lr = 0x8277697C;
	sub_82792820(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827928a0
	ctx.lr = 0x82776988;
	sub_827928A0(ctx, base);
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

__attribute__((alias("__imp__sub_827769A0"))) PPC_WEAK_FUNC(sub_827769A0);
PPC_FUNC_IMPL(__imp__sub_827769A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2072(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827769A8"))) PPC_WEAK_FUNC(sub_827769A8);
PPC_FUNC_IMPL(__imp__sub_827769A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2076(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2076);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827769B0"))) PPC_WEAK_FUNC(sub_827769B0);
PPC_FUNC_IMPL(__imp__sub_827769B0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2073(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2073);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827769B8"))) PPC_WEAK_FUNC(sub_827769B8);
PPC_FUNC_IMPL(__imp__sub_827769B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827769fc
	if (!cr0.eq) goto loc_827769FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,1902
	ctx.r7.s64 = 1902;
	// addi r6,r11,-31536
	ctx.r6.s64 = ctx.r11.s64 + -31536;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-31560
	ctx.r5.s64 = ctx.r11.s64 + -31560;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x827769FC;
	sub_826CA560(ctx, base);
loc_827769FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82776A20"))) PPC_WEAK_FUNC(sub_82776A20);
PPC_FUNC_IMPL(__imp__sub_82776A20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82776a64
	if (!cr0.eq) goto loc_82776A64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,1909
	ctx.r7.s64 = 1909;
	// addi r6,r11,-31536
	ctx.r6.s64 = ctx.r11.s64 + -31536;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-31560
	ctx.r5.s64 = ctx.r11.s64 + -31560;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// bl 0x826ca560
	ctx.lr = 0x82776A64;
	sub_826CA560(ctx, base);
loc_82776A64:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82776AA4"))) PPC_WEAK_FUNC(sub_82776AA4);
PPC_FUNC_IMPL(__imp__sub_82776AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82776AA8"))) PPC_WEAK_FUNC(sub_82776AA8);
PPC_FUNC_IMPL(__imp__sub_82776AA8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82776af0
	if (!cr6.eq) goto loc_82776AF0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,1919
	ctx.r7.s64 = 1919;
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
	ctx.lr = 0x82776AF0;
	sub_826CA560(ctx, base);
loc_82776AF0:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq 0x82776b2c
	if (cr0.eq) goto loc_82776B2C;
	// addi r10,r11,57
	ctx.r10.s64 = ctx.r11.s64 + 57;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,57
	ctx.r11.s64 = ctx.r11.s64 + 57;
	// b 0x82776b30
	goto loc_82776B30;
loc_82776B2C:
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
loc_82776B30:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82776B50"))) PPC_WEAK_FUNC(sub_82776B50);
PPC_FUNC_IMPL(__imp__sub_82776B50) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2814
	ctx.lr = 0x82776B58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-6172
	ctx.r30.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-31536
	ctx.r29.s64 = ctx.r11.s64 + -31536;
	// ble cr6,0x82776ba0
	if (!cr6.gt) goto loc_82776BA0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,1945
	ctx.r7.s64 = 1945;
	// addi r5,r11,-31368
	ctx.r5.s64 = ctx.r11.s64 + -31368;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776BA0;
	sub_826CA560(ctx, base);
loc_82776BA0:
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// lbz r11,369(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 369);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82776be4
	if (cr0.eq) goto loc_82776BE4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82776be4
	if (!cr6.eq) goto loc_82776BE4;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82776be4
	if (cr0.eq) goto loc_82776BE4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,1948
	ctx.r7.s64 = 1948;
	// addi r5,r11,-31440
	ctx.r5.s64 = ctx.r11.s64 + -31440;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776BE4;
	sub_826CA560(ctx, base);
loc_82776BE4:
	// addi r11,r28,58
	ctx.r11.s64 = ctx.r28.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2864
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82776BF8"))) PPC_WEAK_FUNC(sub_82776BF8);
PPC_FUNC_IMPL(__imp__sub_82776BF8) {
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
	// lwz r3,2068(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2068);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x82776C18;
	sub_82794520(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82776C30"))) PPC_WEAK_FUNC(sub_82776C30);
PPC_FUNC_IMPL(__imp__sub_82776C30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2818
	ctx.lr = 0x82776C38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2068);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82776cac
	if (cr0.eq) goto loc_82776CAC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82776C5C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82776c74
	if (!cr6.lt) goto loc_82776C74;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82776c7c
	goto loc_82776C7C;
loc_82776C74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82794520
	ctx.lr = 0x82776C7C;
	sub_82794520(ctx, base);
loc_82776C7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82776c94
	if (!cr6.eq) goto loc_82776C94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2068);
	// bl 0x82794458
	ctx.lr = 0x82776C94;
	sub_82794458(ctx, base);
loc_82776C94:
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2068);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82776c5c
	if (cr6.lt) goto loc_82776C5C;
loc_82776CAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d2868
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82776CB4"))) PPC_WEAK_FUNC(sub_82776CB4);
PPC_FUNC_IMPL(__imp__sub_82776CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82776CB8"))) PPC_WEAK_FUNC(sub_82776CB8);
PPC_FUNC_IMPL(__imp__sub_82776CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2808
	ctx.lr = 0x82776CC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r28,136(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82776e58
	if (cr0.eq) goto loc_82776E58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r11,-6172
	ctx.r26.s64 = ctx.r11.s64 + -6172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r11,-31348
	ctx.r25.s64 = ctx.r11.s64 + -31348;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r24,r11,-31704
	ctx.r24.s64 = ctx.r11.s64 + -31704;
loc_82776CF0:
	// lwz r31,28(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// b 0x82776e3c
	goto loc_82776E3C;
loc_82776CF8:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82776e38
	if (cr0.eq) goto loc_82776E38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776D1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x82776db0
	if (cr6.lt) goto loc_82776DB0;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
loc_82776D28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x82776d74
	if (cr6.eq) goto loc_82776D74;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x82776d74
	if (cr6.eq) goto loc_82776D74;
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x82776d74
	if (cr6.eq) goto loc_82776D74;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// beq cr6,0x82776d74
	if (cr6.eq) goto loc_82776D74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776D68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82776d28
	if (!cr6.gt) goto loc_82776D28;
	// b 0x82776db0
	goto loc_82776DB0;
loc_82776D74:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,172(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 172);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x82785c48
	ctx.lr = 0x82776D84;
	sub_82785C48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82776da4
	if (!cr0.eq) goto loc_82776DA4;
	// li r7,306
	ctx.r7.s64 = 306;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826ca560
	ctx.lr = 0x82776DA4;
	sub_826CA560(ctx, base);
loc_82776DA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82797910
	ctx.lr = 0x82776DB0;
	sub_82797910(ctx, base);
loc_82776DB0:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82776df0
	if (cr0.eq) goto loc_82776DF0;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x827973f8
	ctx.lr = 0x82776DC8;
	sub_827973F8(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82776df0
	if (!cr6.eq) goto loc_82776DF0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,172(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 172);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x82785c48
	ctx.lr = 0x82776DE0;
	sub_82785C48(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82776df0
	if (cr0.eq) goto loc_82776DF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82797910
	ctx.lr = 0x82776DF0;
	sub_82797910(ctx, base);
loc_82776DF0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82776e38
	if (cr6.eq) goto loc_82776E38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827968f8
	ctx.lr = 0x82776E04;
	sub_827968F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82776e38
	if (cr0.eq) goto loc_82776E38;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x82776e38
	if (cr6.eq) goto loc_82776E38;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82797910
	ctx.lr = 0x82776E28;
	sub_82797910(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82794eb8
	ctx.lr = 0x82776E38;
	sub_82794EB8(ctx, base);
loc_82776E38:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82776E3C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82776cf8
	if (!cr0.eq) goto loc_82776CF8;
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82776cf0
	if (!cr0.eq) goto loc_82776CF0;
loc_82776E58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828d2858
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82776E60"))) PPC_WEAK_FUNC(sub_82776E60);
PPC_FUNC_IMPL(__imp__sub_82776E60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x82776E68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82776e90
	if (cr0.eq) goto loc_82776E90;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x8275a120
	ctx.lr = 0x82776E90;
	sub_8275A120(ctx, base);
loc_82776E90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x82759ff0
	ctx.lr = 0x82776EA4;
	sub_82759FF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
loc_82776EB0:
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82776eb0
	if (!cr0.eq) goto loc_82776EB0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82776ED0"))) PPC_WEAK_FUNC(sub_82776ED0);
PPC_FUNC_IMPL(__imp__sub_82776ED0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d280c
	ctx.lr = 0x82776ED8;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82776f54
	if (cr6.lt) goto loc_82776F54;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
loc_82776EFC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,432(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82759ff0
	ctx.lr = 0x82776F10;
	sub_82759FF0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x82776f30
	if (cr0.eq) goto loc_82776F30;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82776900
	ctx.lr = 0x82776F2C;
	sub_82776900(ctx, base);
	// b 0x82776f34
	goto loc_82776F34;
loc_82776F30:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82776F34:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82776efc
	if (!cr6.gt) goto loc_82776EFC;
loc_82776F54:
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// b 0x82776f7c
	goto loc_82776F7C;
loc_82776F5C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82794520
	ctx.lr = 0x82776F74;
	sub_82794520(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82776F7C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82776f5c
	if (!cr0.eq) goto loc_82776F5C;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x827942b8
	ctx.lr = 0x82776F90;
	sub_827942B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82759ff0
	ctx.lr = 0x82776FA8;
	sub_82759FF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82777024
	if (cr6.lt) goto loc_82777024;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
loc_82776FCC:
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82777008
	if (cr0.eq) goto loc_82777008;
	// rotlwi r28,r27,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82776FE4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82788238
	ctx.lr = 0x82776FEC;
	sub_82788238(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82776fe4
	if (!cr0.eq) goto loc_82776FE4;
loc_82777008:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82776fcc
	if (!cr6.gt) goto loc_82776FCC;
loc_82777024:
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x828d285c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82777030"))) PPC_WEAK_FUNC(sub_82777030);
PPC_FUNC_IMPL(__imp__sub_82777030) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x827864c0
	ctx.lr = 0x82777054;
	sub_827864C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2072, ctx.r11.u8);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r11.u32);
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

