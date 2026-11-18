#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822EC9F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC9F8) {
	__imp__sub_822EC9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECA00) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x826477e4
	__imp__HalReturnToFirmware(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECA00) {
	__imp__sub_822ECA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECA08) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x826477e4
	__imp__HalReturnToFirmware(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECA08) {
	__imp__sub_822ECA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2724
	ctx.r3.s64 = ctx.r11.s64 + 2724;
	// b 0x825a3568
	sub_825A3568(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECA10) {
	__imp__sub_822ECA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822ECA28;
	__savegprlr_28(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822eca6c
	if (ctx.cr6.eq) goto loc_822ECA6C;
	// bl 0x826386a0
	ctx.lr = 0x822ECA48;
	sub_826386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eca58
	if (ctx.cr6.lt) goto loc_822ECA58;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x822eca64
	if (ctx.cr6.lt) goto loc_822ECA64;
loc_822ECA58:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_822ECA64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822eca78
	if (!ctx.cr6.lt) goto loc_822ECA78;
loc_822ECA6C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826385a0
	ctx.lr = 0x822ECA78;
	sub_826385A0(ctx, base);
loc_822ECA78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECA20) {
	__imp__sub_822ECA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822ECA88;
	__savegprlr_28(ctx, base);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x822ecaf4
	if (ctx.cr6.eq) goto loc_822ECAF4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x826386a0
	ctx.lr = 0x822ECAD0;
	sub_826386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ecae0
	if (ctx.cr6.lt) goto loc_822ECAE0;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x822ecaec
	if (ctx.cr6.lt) goto loc_822ECAEC;
loc_822ECAE0:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_822ECAEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822ecb00
	if (!ctx.cr6.lt) goto loc_822ECB00;
loc_822ECAF4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826385a0
	ctx.lr = 0x822ECB00;
	sub_826385A0(ctx, base);
loc_822ECB00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECA80) {
	__imp__sub_822ECA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822ECB10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r27,r4,r6
	ctx.r27.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// ble cr6,0x822ecb3c
	if (!ctx.cr6.gt) goto loc_822ECB3C;
	// subf r31,r4,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_822ECB3C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x822ECB50;
	sub_82635430(ctx, base);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x822ecb68
	if (!ctx.cr6.gt) goto loc_822ECB68;
	// subf r5,r31,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bl 0x82635430
	ctx.lr = 0x822ECB68;
	sub_82635430(ctx, base);
loc_822ECB68:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// divwu r10,r27,r11
	ctx.r10.u32 = ctx.r27.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r3,r9,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r9.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECB08) {
	__imp__sub_822ECB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ECB84) {
	__imp__sub_822ECB84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822ECB90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ecbb8
	if (ctx.cr6.lt) goto loc_822ECBB8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x822ecbc4
	goto loc_822ECBC4;
loc_822ECBB8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822ECBC4:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822ecbd0
	if (!ctx.cr6.gt) goto loc_822ECBD0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_822ECBD0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822ecbe4
	if (!ctx.cr6.eq) goto loc_822ECBE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822ECBE4:
	// lwsync 
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822ecc04
	if (!ctx.cr6.gt) goto loc_822ECC04;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_822ECC04:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82635430
	ctx.lr = 0x822ECC18;
	sub_82635430(ctx, base);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x822ecc30
	if (!ctx.cr6.gt) goto loc_822ECC30;
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x822ECC30;
	sub_82635430(ctx, base);
loc_822ECC30:
	// lwsync 
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// divwu r10,r28,r11
	ctx.r10.u32 = ctx.r28.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r8,r9,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r9.s64;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECB88) {
	__imp__sub_822ECB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822ECC60;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,11012
	ctx.r11.s64 = 721682432;
	// lis r30,-32764
	ctx.r30.s64 = -2147221504;
	// lis r27,18432
	ctx.r27.s64 = 1207959552;
	// ori r26,r11,11008
	ctx.r26.u64 = ctx.r11.u64 | 11008;
	// lis r25,-32736
	ctx.r25.s64 = -2145386496;
loc_822ECC78:
	// clrlwi r11,r30,20
	ctx.r11.u64 = ctx.r30.u32 & 0xFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,99
	ctx.r29.s64 = 99;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ecca8
	if (!ctx.cr6.eq) goto loc_822ECCA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826478f4
	ctx.lr = 0x822ECC94;
	__imp__MmIsAddressValid(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ecca8
	if (!ctx.cr6.eq) goto loc_822ECCA8;
	// addi r30,r30,4092
	ctx.r30.s64 = ctx.r30.s64 + 4092;
	// b 0x822ecd74
	goto loc_822ECD74;
loc_822ECCA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x822ecd74
	if (!ctx.cr6.eq) goto loc_822ECD74;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
loc_822ECCBC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822eccdc
	if (ctx.cr6.eq) goto loc_822ECCDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x822eccbc
	if (ctx.cr6.lt) goto loc_822ECCBC;
loc_822ECCDC:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x822ecd74
	if (ctx.cr6.eq) goto loc_822ECD74;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822ecd74
	if (!ctx.cr6.eq) goto loc_822ECD74;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// rlwinm r10,r9,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826478f4
	ctx.lr = 0x822ECD14;
	__imp__MmIsAddressValid(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822ecd74
	if (ctx.cr6.eq) goto loc_822ECD74;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_822ECD28:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// rlwinm r8,r11,16,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1F;
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// bne cr6,0x822ecd54
	if (!ctx.cr6.eq) goto loc_822ECD54;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ecd64
	if (!ctx.cr6.eq) goto loc_822ECD64;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r29,r11,11,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1F;
	// rlwinm r28,r9,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// b 0x822ecd64
	goto loc_822ECD64;
loc_822ECD54:
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bne cr6,0x822ecd64
	if (!ctx.cr6.eq) goto loc_822ECD64;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822ecd8c
	if (ctx.cr6.eq) goto loc_822ECD8C;
loc_822ECD64:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// blt cr6,0x822ecd28
	if (ctx.cr6.lt) goto loc_822ECD28;
loc_822ECD74:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x822ecc78
	if (ctx.cr6.lt) goto loc_822ECC78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822ECD8C:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECC58) {
	__imp__sub_822ECC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ECDA4) {
	__imp__sub_822ECDA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822ECDB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822ecc58
	ctx.lr = 0x822ECDB8;
	sub_822ECC58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x822ecf84
	if (ctx.cr6.eq) goto loc_822ECF84;
	// bl 0x826478f4
	ctx.lr = 0x822ECDD8;
	__imp__MmIsAddressValid(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ecf84
	if (ctx.cr6.eq) goto loc_822ECF84;
	// addi r26,r31,1144
	ctx.r26.s64 = ctx.r31.s64 + 1144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826478f4
	ctx.lr = 0x822ECDF0;
	__imp__MmIsAddressValid(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ecf84
	if (ctx.cr6.eq) goto loc_822ECF84;
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x822ecf58
	if (ctx.cr6.lt) goto loc_822ECF58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x822ecf58
	if (ctx.cr6.gt) goto loc_822ECF58;
	// rlwinm r11,r28,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ecf58
	if (!ctx.cr6.eq) goto loc_822ECF58;
	// rlwinm r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ece58
	if (!ctx.cr6.eq) goto loc_822ECE58;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,3140
	ctx.r3.s64 = ctx.r11.s64 + 3140;
	// bl 0x822ebbc8
	ctx.lr = 0x822ECE44;
	sub_822EBBC8(ctx, base);
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-1704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1704, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822ECE58:
	// lis r3,3329
	ctx.r3.s64 = 218169344;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r3,r3,517
	ctx.r3.u64 = ctx.r3.u64 | 517;
	// bl 0x825c5ee8
	ctx.lr = 0x822ECE6C;
	sub_825C5EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ece80
	if (!ctx.cr6.eq) goto loc_822ECE80;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ece88
	if (!ctx.cr6.eq) goto loc_822ECE88;
loc_822ECE80:
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822ECE88:
	// rlwinm r27,r28,0,21,19
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r3,3329
	ctx.r3.s64 = 218169344;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r3,r3,517
	ctx.r3.u64 = ctx.r3.u64 | 517;
	// bl 0x825c5f00
	ctx.lr = 0x822ECEA4;
	sub_825C5F00(ctx, base);
loc_822ECEA4:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x825a32b8
	ctx.lr = 0x822ECEAC;
	sub_825A32B8(ctx, base);
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// blt cr6,0x822ecef0
	if (ctx.cr6.lt) goto loc_822ECEF0;
	// rlwinm r11,r29,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ecef0
	if (!ctx.cr6.eq) goto loc_822ECEF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825c5ed0
	ctx.lr = 0x822ECECC;
	sub_825C5ED0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ecef0
	if (ctx.cr6.eq) goto loc_822ECEF0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ecef0
	if (!ctx.cr6.eq) goto loc_822ECEF0;
	// bl 0x825c5ee0
	ctx.lr = 0x822ECEE4;
	sub_825C5EE0(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ecefc
	if (!ctx.cr6.eq) goto loc_822ECEFC;
loc_822ECEF0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,100
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 100, ctx.xer);
	// blt cr6,0x822ecea4
	if (ctx.cr6.lt) goto loc_822ECEA4;
loc_822ECEFC:
	// rlwinm r11,r29,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4000;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r7,1
	ctx.xer.ca = ctx.r7.u32 > 4294967294;
	ctx.r11.s64 = ctx.r7.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-1704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1704, ctx.r11.u32);
	// ble 0x822ecf28
	if (!ctx.cr0.gt) goto loc_822ECF28;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r7,r11,3120
	ctx.r7.s64 = ctx.r11.s64 + 3120;
	// b 0x822ecf30
	goto loc_822ECF30;
loc_822ECF28:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r7,r11,3104
	ctx.r7.s64 = ctx.r11.s64 + 3104;
loc_822ECF30:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mulli r8,r11,100
	ctx.r8.s64 = ctx.r11.s64 * 100;
	// addi r3,r10,3032
	ctx.r3.s64 = ctx.r10.s64 + 3032;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822ECF50;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822ECF58:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r11,2944
	ctx.r3.s64 = ctx.r11.s64 + 2944;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822ECF70;
	sub_822EBBC8(ctx, base);
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-1704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1704, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822ECF84:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,2884
	ctx.r3.s64 = ctx.r11.s64 + 2884;
	// bl 0x822ebbc8
	ctx.lr = 0x822ECF94;
	sub_822EBBC8(ctx, base);
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-1704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1704, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECDA8) {
	__imp__sub_822ECDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// lwz r3,-1704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1704);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ECFA8) {
	__imp__sub_822ECFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ECFB4) {
	__imp__sub_822ECFB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECFB8) {
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
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r31,r11,-1784
	ctx.r31.s64 = ctx.r11.s64 + -1784;
	// lwz r11,-1784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ed0a8
	if (!ctx.cr6.eq) goto loc_822ED0A8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,63
	ctx.r11.s64 = 63;
	// li r9,13
	ctx.r9.s64 = 13;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stb r30,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r30.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// bl 0x825c5e98
	ctx.lr = 0x822ED024;
	sub_825C5E98(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x825c5bc8
	ctx.lr = 0x822ED030;
	sub_825C5BC8(ctx, base);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// bl 0x82634da0
	ctx.lr = 0x822ED038;
	sub_82634DA0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ed04c
	if (!ctx.cr6.eq) goto loc_822ED04C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822ed0ac
	goto loc_822ED0AC;
loc_822ED04C:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_822ED060:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825c5ed0
	ctx.lr = 0x822ED068;
	sub_825C5ED0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ed07c
	if (ctx.cr6.eq) goto loc_822ED07C;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed090
	if (ctx.cr6.eq) goto loc_822ED090;
loc_822ED07C:
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x825a32b8
	ctx.lr = 0x822ED084;
	sub_825A32B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,100
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 100, ctx.xer);
	// blt cr6,0x822ed060
	if (ctx.cr6.lt) goto loc_822ED060;
loc_822ED090:
	// bl 0x825c5ee0
	ctx.lr = 0x822ED094;
	sub_825C5EE0(ctx, base);
	// rlwinm r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed0a4
	if (ctx.cr6.eq) goto loc_822ED0A4;
	// bl 0x822ecda8
	ctx.lr = 0x822ED0A4;
	sub_822ECDA8(ctx, base);
loc_822ED0A4:
	// bl 0x822f31f0
	ctx.lr = 0x822ED0A8;
	sub_822F31F0(ctx, base);
loc_822ED0A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822ED0AC:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ECFB8) {
	__imp__sub_822ECFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED0C4) {
	__imp__sub_822ED0C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// lwz r11,-1784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed104
	if (ctx.cr6.eq) goto loc_822ED104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c5ed0
	ctx.lr = 0x822ED0EC;
	sub_825C5ED0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ed104
	if (ctx.cr6.eq) goto loc_822ED104;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed108
	if (ctx.cr6.eq) goto loc_822ED108;
loc_822ED104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822ED108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED0C8) {
	__imp__sub_822ED0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c5ed0
	ctx.lr = 0x822ED12C;
	sub_825C5ED0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ed144
	if (ctx.cr6.eq) goto loc_822ED144;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed148
	if (ctx.cr6.eq) goto loc_822ED148;
loc_822ED144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822ED148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED118) {
	__imp__sub_822ED118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED158) {
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
	// bl 0x825c5ee0
	ctx.lr = 0x822ED168;
	sub_825C5EE0(ctx, base);
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED158) {
	__imp__sub_822ED158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED17C) {
	__imp__sub_822ED17C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED180) {
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
	// bl 0x825c5ee0
	ctx.lr = 0x822ED190;
	sub_825C5EE0(ctx, base);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED180) {
	__imp__sub_822ED180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED1A4) {
	__imp__sub_822ED1A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825c5ed0
	ctx.lr = 0x822ED1BC;
	sub_825C5ED0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ed1d0
	if (ctx.cr6.eq) goto loc_822ED1D0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed1e4
	if (ctx.cr6.eq) goto loc_822ED1E4;
loc_822ED1D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822ED1E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c5ed0
	ctx.lr = 0x822ED1EC;
	sub_825C5ED0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED1A8) {
	__imp__sub_822ED1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED200) {
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
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r31,r11,-1752
	ctx.r31.s64 = ctx.r11.s64 + -1752;
	// lwz r11,-1752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed24c
	if (ctx.cr6.eq) goto loc_822ED24C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ed24c
	if (!ctx.cr6.eq) goto loc_822ED24C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ED244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_822ED24C:
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// lwz r10,-1748(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1748);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ed280
	if (ctx.cr6.eq) goto loc_822ED280;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ed280
	if (!ctx.cr6.eq) goto loc_822ED280;
	// li r11,1
	ctx.r11.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x822ED278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_822ED280:
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

PPC_WEAK_FUNC(sub_822ED200) {
	__imp__sub_822ED200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED294) {
	__imp__sub_822ED294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// stw r3,-1752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1752, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED298) {
	__imp__sub_822ED298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED2A4) {
	__imp__sub_822ED2A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// stw r3,-1748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1748, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED2A8) {
	__imp__sub_822ED2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED2B4) {
	__imp__sub_822ED2B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// stw r3,-1744(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1744, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED2B8) {
	__imp__sub_822ED2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED2C4) {
	__imp__sub_822ED2C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822ED2D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-1784
	ctx.r31.s64 = ctx.r11.s64 + -1784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-1784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed34c
	if (ctx.cr6.eq) goto loc_822ED34C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ed34c
	if (ctx.cr6.eq) goto loc_822ED34C;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822ed34c
	if (ctx.cr6.gt) goto loc_822ED34C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ed320
	if (ctx.cr6.lt) goto loc_822ED320;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x822ed328
	goto loc_822ED328;
loc_822ED320:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822ED328:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822ed358
	if (!ctx.cr6.lt) goto loc_822ED358;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// lwz r11,-1732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1732);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,-1732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1732, ctx.r9.u32);
loc_822ED34C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822ED358:
	// rlwinm r11,r30,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// rlwinm r10,r30,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r30,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822ecb08
	ctx.lr = 0x822ED388;
	sub_822ECB08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822ecb08
	ctx.lr = 0x822ED39C;
	sub_822ECB08(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwsync 
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ED2C8) {
	__imp__sub_822ED2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED3B4) {
	__imp__sub_822ED3B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED3B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825a3208
	ctx.lr = 0x822ED3DC;
	sub_825A3208(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a31d0
	ctx.lr = 0x822ED3E4;
	sub_825A31D0(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r11,r11,-1768
	ctx.r11.s64 = ctx.r11.s64 + -1768;
	// lfd f0,23416(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23416);
	// fmul f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 * ctx.f0.f64;
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// fdiv f8,f9,f10
	ctx.f8.f64 = ctx.f9.f64 / ctx.f10.f64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bne cr6,0x822ed42c
	if (!ctx.cr6.eq) goto loc_822ED42C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// std r9,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
loc_822ED42C:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r6,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
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

PPC_WEAK_FUNC(sub_822ED3B8) {
	__imp__sub_822ED3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED46C) {
	__imp__sub_822ED46C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822ED478;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a3208
	ctx.lr = 0x822ED488;
	sub_825A3208(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a31d0
	ctx.lr = 0x822ED490;
	sub_825A31D0(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r27,-32012
	ctx.r27.s64 = -2097938432;
	// addi r31,r11,-1752
	ctx.r31.s64 = ctx.r11.s64 + -1752;
	// lfd f31,23416(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23416);
	// fmul f10,f13,f31
	ctx.f10.f64 = ctx.f13.f64 * ctx.f31.f64;
	// fdiv f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_822ED4CC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a3208
	ctx.lr = 0x822ED4D4;
	sub_825A3208(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a31d0
	ctx.lr = 0x822ED4DC;
	sub_825A31D0(ctx, base);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r30,0
	ctx.r30.s64 = 0;
	// fmul f10,f13,f31
	ctx.f10.f64 = ctx.f13.f64 * ctx.f31.f64;
	// lwz r29,-1744(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1744);
	// fdiv f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 / ctx.f11.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// ld r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// beq cr6,0x822ed53c
	if (ctx.cr6.eq) goto loc_822ED53C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ed53c
	if (!ctx.cr6.eq) goto loc_822ED53C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ED534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_822ED53C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822ed550
	if (ctx.cr6.eq) goto loc_822ED550;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x822ED54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822ED550:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825a3208
	ctx.lr = 0x822ED558;
	sub_825A3208(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a31d0
	ctx.lr = 0x822ED560;
	sub_825A31D0(ctx, base);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fmul f10,f13,f31
	ctx.f10.f64 = ctx.f13.f64 * ctx.f31.f64;
	// fdiv f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// bne cr6,0x822ed4cc
	if (!ctx.cr6.eq) goto loc_822ED4CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822f07f0
	ctx.lr = 0x822ED5A4;
	sub_822F07F0(ctx, base);
	// b 0x822ed4cc
	goto loc_822ED4CC;
}

PPC_WEAK_FUNC(sub_822ED470) {
	__imp__sub_822ED470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED5A8) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11152
	ctx.r5.s64 = ctx.r11.s64 + -11152;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a36c0
	ctx.lr = 0x822ED5E0;
	sub_825A36C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ed5f4
	if (!ctx.cr6.eq) goto loc_822ED5F4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822ed620
	goto loc_822ED620;
loc_822ED5F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822907f8
	ctx.lr = 0x822ED600;
	sub_822907F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822906a0
	ctx.lr = 0x822ED60C;
	sub_822906A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3680
	ctx.lr = 0x822ED614;
	sub_825A3680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3638
	ctx.lr = 0x822ED61C;
	sub_825A3638(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822ED620:
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

PPC_WEAK_FUNC(sub_822ED5A8) {
	__imp__sub_822ED5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED638) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r10,r11,-1784
	ctx.r10.s64 = ctx.r11.s64 + -1784;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED638) {
	__imp__sub_822ED638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED650) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-1784
	ctx.r3.s64 = ctx.r10.s64 + -1784;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822ecb88
	sub_822ECB88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ED650) {
	__imp__sub_822ED650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r11,r11,-1784
	ctx.r11.s64 = ctx.r11.s64 + -1784;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822ed688
	if (ctx.cr6.lt) goto loc_822ED688;
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blr 
	return;
loc_822ED688:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED668) {
	__imp__sub_822ED668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED698) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ED6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r7,-32012
	ctx.r7.s64 = -2097938432;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r7,-1652
	ctx.r11.s64 = ctx.r7.s64 + -1652;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822ED6D0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r6,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822ed6d0
	if (!ctx.cr0.eq) goto loc_822ED6D0;
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

PPC_WEAK_FUNC(sub_822ED698) {
	__imp__sub_822ED698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822ED708;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ed808
	if (ctx.cr6.lt) goto loc_822ED808;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bgt cr6,0x822ed808
	if (ctx.cr6.gt) goto loc_822ED808;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1700
	ctx.r11.s64 = ctx.r11.s64 + -1700;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_822ED73C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x822ed760
	if (!ctx.cr6.eq) goto loc_822ED760;
	// stwcx. r6,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822ed73c
	if (!ctx.cr0.eq) goto loc_822ED73C;
	// b 0x822ed768
	goto loc_822ED768;
loc_822ED760:
	// stwcx. r8,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822ED768:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822ed780
	if (ctx.cr6.eq) goto loc_822ED780;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822ED780:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r5,r4,-10600
	ctx.r5.s64 = ctx.r4.s64 + -10600;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a36c0
	ctx.lr = 0x822ED7B0;
	sub_825A36C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ed7e0
	if (!ctx.cr6.eq) goto loc_822ED7E0;
loc_822ED7BC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r28,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822ed7bc
	if (!ctx.cr0.eq) goto loc_822ED7BC;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822ED7E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822907f8
	ctx.lr = 0x822ED7EC;
	sub_822907F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3680
	ctx.lr = 0x822ED7F4;
	sub_825A3680(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3638
	ctx.lr = 0x822ED7FC;
	sub_825A3638(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822ED808:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ED700) {
	__imp__sub_822ED700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED814) {
	__imp__sub_822ED814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED818) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ed844
	if (ctx.cr6.lt) goto loc_822ED844;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bgt cr6,0x822ed844
	if (ctx.cr6.gt) goto loc_822ED844;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-1652
	ctx.r9.s64 = ctx.r11.s64 + -1652;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822ED844:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED818) {
	__imp__sub_822ED818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED84C) {
	__imp__sub_822ED84C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED850) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,3388
	ctx.r3.s64 = ctx.r11.s64 + 3388;
	// bl 0x825a36d0
	ctx.lr = 0x822ED868;
	sub_825A36D0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822ed888
	if (ctx.cr6.eq) goto loc_822ED888;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,3976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3976, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,3368
	ctx.r4.s64 = ctx.r11.s64 + 3368;
	// b 0x822ed8ac
	goto loc_822ED8AC;
loc_822ED888:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,3976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3976);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822ed8a4
	if (!ctx.cr6.eq) goto loc_822ED8A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,3368
	ctx.r4.s64 = ctx.r11.s64 + 3368;
	// b 0x822ed8ac
	goto loc_822ED8AC;
loc_822ED8A4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,3352
	ctx.r4.s64 = ctx.r11.s64 + 3352;
loc_822ED8AC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,3332
	ctx.r3.s64 = ctx.r11.s64 + 3332;
	// bl 0x822ebbc8
	ctx.lr = 0x822ED8B8;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED850) {
	__imp__sub_822ED850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED8C8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x822ed904
	if (ctx.cr6.eq) goto loc_822ED904;
	// lwz r10,612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x822ed904
	if (!ctx.cr6.gt) goto loc_822ED904;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823ec248
	ctx.lr = 0x822ED900;
	sub_823EC248(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822ED904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED8C8) {
	__imp__sub_822ED8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ED914) {
	__imp__sub_822ED914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822ED920;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,-1624
	ctx.r31.s64 = ctx.r11.s64 + -1624;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,4096(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4096);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822ed9a0
	if (!ctx.cr6.gt) goto loc_822ED9A0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_822ED948:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// bl 0x822f4f70
	ctx.lr = 0x822ED954;
	sub_822F4F70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ed98c
	if (!ctx.cr6.eq) goto loc_822ED98C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823de1a8
	ctx.lr = 0x822ED968;
	sub_823DE1A8(ctx, base);
	// lwz r11,4096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4096);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// stw r30,4096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4096, ctx.r30.u32);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822ED988;
	sub_82635430(ctx, base);
	// b 0x822ed998
	goto loc_822ED998;
loc_822ED98C:
	// lwz r30,4096(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4096);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
loc_822ED998:
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822ed948
	if (ctx.cr6.lt) goto loc_822ED948;
loc_822ED9A0:
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822eda04
	if (!ctx.cr6.eq) goto loc_822EDA04;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// bge cr6,0x822eda04
	if (!ctx.cr6.lt) goto loc_822EDA04;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x822f4f70
	ctx.lr = 0x822ED9BC;
	sub_822F4F70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822eda04
	if (ctx.cr6.eq) goto loc_822EDA04;
	// lwz r30,4096(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4096);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// li r5,248
	ctx.r5.s64 = 248;
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r26,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r26.u32);
	// bl 0x82635430
	ctx.lr = 0x822ED9E4;
	sub_82635430(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,4096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4096, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825a2c28
	ctx.lr = 0x822ED9FC;
	sub_825A2C28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822EDA04:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823de1a8
	ctx.lr = 0x822EDA10;
	sub_823DE1A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ED918) {
	__imp__sub_822ED918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDA18) {
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
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r31,r11,-1624
	ctx.r31.s64 = ctx.r11.s64 + -1624;
	// lwz r11,4096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822eda74
	if (!ctx.cr6.gt) goto loc_822EDA74;
loc_822EDA40:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823de1a8
	ctx.lr = 0x822EDA4C;
	sub_823DE1A8(ctx, base);
	// lwz r11,4096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4096);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// li r5,256
	ctx.r5.s64 = 256;
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// stw r30,4096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4096, ctx.r30.u32);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82635430
	ctx.lr = 0x822EDA6C;
	sub_82635430(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x822eda40
	if (ctx.cr6.gt) goto loc_822EDA40;
loc_822EDA74:
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

PPC_WEAK_FUNC(sub_822EDA18) {
	__imp__sub_822EDA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EDA8C) {
	__imp__sub_822EDA8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r9,r11,-9960
	ctx.r9.s64 = ctx.r11.s64 + -9960;
	// stw r9,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r9.u32);
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822edab8
	if (ctx.cr6.eq) goto loc_822EDAB8;
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r10.u32);
loc_822EDAB8:
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// lwz r11,2476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2476);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822edad4
	if (!ctx.cr6.eq) goto loc_822EDAD4;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 700, ctx.r11.u32);
	// blr 
	return;
loc_822EDAD4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,8
	ctx.r10.s64 = 8;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 700, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EDA90) {
	__imp__sub_822EDA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDAF0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823de5a8
	ctx.lr = 0x822EDB0C;
	sub_823DE5A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822edb68
	if (ctx.cr6.lt) goto loc_822EDB68;
	// lis r10,-32012
	ctx.r10.s64 = -2097938432;
	// lwz r11,2480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822edb68
	if (!ctx.cr6.eq) goto loc_822EDB68;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,612(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// lis r8,-32012
	ctx.r8.s64 = -2097938432;
	// stw r11,2480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2480, ctx.r11.u32);
	// lis r7,-32155
	ctx.r7.s64 = -2107310080;
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// lis r5,-32155
	ctx.r5.s64 = -2107310080;
	// lis r4,-32155
	ctx.r4.s64 = -2107310080;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lwz r8,2476(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2476);
	// lwz r7,704(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 704);
	// addi r3,r3,3416
	ctx.r3.s64 = ctx.r3.s64 + 3416;
	// lwz r6,4372(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4372);
	// lwz r5,4364(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4364);
	// lwz r4,4356(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4356);
	// bl 0x822ebbc8
	ctx.lr = 0x822EDB68;
	sub_822EBBC8(ctx, base);
loc_822EDB68:
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

PPC_WEAK_FUNC(sub_822EDAF0) {
	__imp__sub_822EDAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EDB84) {
	__imp__sub_822EDB84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDB88) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r11,r11,712
	ctx.r11.s64 = ctx.r11.s64 + 712;
	// bne cr6,0x822edbc0
	if (!ctx.cr6.eq) goto loc_822EDBC0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,3724
	ctx.r3.s64 = ctx.r11.s64 + 3724;
	// b 0x822ebbc8
	sub_822EBBC8(ctx, base);
	return;
loc_822EDBC0:
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822edc00
	if (!ctx.cr6.eq) goto loc_822EDC00;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x822edc00
	if (!ctx.cr6.eq) goto loc_822EDC00;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x822edc00
	if (!ctx.cr6.eq) goto loc_822EDC00;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822EDC00:
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stwx r5,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// bne cr6,0x822edc9c
	if (!ctx.cr6.eq) goto loc_822EDC9C;
	// cmpwi cr6,r4,66
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 66, ctx.xer);
	// bne cr6,0x822edc50
	if (!ctx.cr6.eq) goto loc_822EDC50;
	// rlwinm r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822edc44
	if (ctx.cr6.eq) goto loc_822EDC44;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,3700
	ctx.r11.s64 = ctx.r11.s64 + 3700;
	// b 0x822edc80
	goto loc_822EDC80;
loc_822EDC44:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,11792
	ctx.r11.s64 = ctx.r11.s64 + 11792;
	// b 0x822edc80
	goto loc_822EDC80;
loc_822EDC50:
	// cmpwi cr6,r4,77
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 77, ctx.xer);
	// bne cr6,0x822edc64
	if (!ctx.cr6.eq) goto loc_822EDC64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,11804
	ctx.r11.s64 = ctx.r11.s64 + 11804;
	// b 0x822edc80
	goto loc_822EDC80;
loc_822EDC64:
	// cmpwi cr6,r4,100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 100, ctx.xer);
	// bne cr6,0x822edc78
	if (!ctx.cr6.eq) goto loc_822EDC78;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,11784
	ctx.r11.s64 = ctx.r11.s64 + 11784;
	// b 0x822edc80
	goto loc_822EDC80;
loc_822EDC78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,10904
	ctx.r11.s64 = ctx.r11.s64 + 10904;
loc_822EDC80:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r3,r10,3632
	ctx.r3.s64 = ctx.r10.s64 + 3632;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x822ebbc8
	sub_822EBBC8(ctx, base);
	return;
loc_822EDC9C:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822edce8
	if (!ctx.cr6.eq) goto loc_822EDCE8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822edcb8
	if (ctx.cr6.eq) goto loc_822EDCB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,8840
	ctx.r5.s64 = ctx.r11.s64 + 8840;
	// b 0x822edcc0
	goto loc_822EDCC0;
loc_822EDCB8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,2908
	ctx.r5.s64 = ctx.r11.s64 + 2908;
loc_822EDCC0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822edcd4
	if (ctx.cr6.eq) goto loc_822EDCD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,12480
	ctx.r4.s64 = ctx.r11.s64 + 12480;
	// b 0x822edcdc
	goto loc_822EDCDC;
loc_822EDCD4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,12472
	ctx.r4.s64 = ctx.r11.s64 + 12472;
loc_822EDCDC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,3552
	ctx.r3.s64 = ctx.r11.s64 + 3552;
	// b 0x822ebbc8
	sub_822EBBC8(ctx, base);
	return;
loc_822EDCE8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,3512
	ctx.r3.s64 = ctx.r11.s64 + 3512;
	// b 0x822ebbc8
	sub_822EBBC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EDB88) {
	__imp__sub_822EDB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDCF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EDCF4) {
	__imp__sub_822EDCF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDCF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822edd10
	if (!ctx.cr6.eq) goto loc_822EDD10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,8828
	ctx.r11.s64 = ctx.r11.s64 + 8828;
loc_822EDD10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822eddd0
	if (ctx.cr6.eq) goto loc_822EDDD0;
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// addi r6,r3,-2
	ctx.r6.s64 = ctx.r3.s64 + -2;
loc_822EDD24:
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x822eddd0
	if (!ctx.cr6.lt) goto loc_822EDDD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 192, ctx.xer);
	// blt cr6,0x822edd60
	if (ctx.cr6.lt) goto loc_822EDD60;
	// cmplwi cr6,r10,224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 224, ctx.xer);
	// bge cr6,0x822edd68
	if (!ctx.cr6.lt) goto loc_822EDD68;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x822edd60
	if (!ctx.cr6.eq) goto loc_822EDD60;
	// rlwimi r9,r10,6,21,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x7C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF83F);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r9,21
	ctx.r10.u64 = ctx.r9.u32 & 0x7FF;
	// b 0x822eddb8
	goto loc_822EDDB8;
loc_822EDD60:
	// cmplwi cr6,r10,224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 224, ctx.xer);
	// blt cr6,0x822eddac
	if (ctx.cr6.lt) goto loc_822EDDAC;
loc_822EDD68:
	// cmplwi cr6,r10,240
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 240, ctx.xer);
	// bge cr6,0x822eddac
	if (!ctx.cr6.lt) goto loc_822EDDAC;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r4,r9,0,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// bne cr6,0x822eddac
	if (!ctx.cr6.eq) goto loc_822EDDAC;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r4,r9,0,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// bne cr6,0x822eddac
	if (!ctx.cr6.eq) goto loc_822EDDAC;
	// rlwimi r8,r10,6,22,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x3C0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC3F);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r10,r8,22
	ctx.r10.u64 = ctx.r8.u32 & 0x3FF;
	// rlwimi r9,r10,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x822eddb8
	goto loc_822EDDB8;
loc_822EDDAC:
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x822eddb8
	if (ctx.cr6.lt) goto loc_822EDDB8;
	// li r10,63
	ctx.r10.s64 = 63;
loc_822EDDB8:
	// sthu r10,2(r6)
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822edd24
	if (!ctx.cr6.eq) goto loc_822EDD24;
loc_822EDDD0:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EDCF8) {
	__imp__sub_822EDCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDDE0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822edec0
	if (ctx.cr6.eq) goto loc_822EDEC0;
	// lis r6,511
	ctx.r6.s64 = 33488896;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
loc_822EDE0C:
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x822ede2c
	if (!ctx.cr6.lt) goto loc_822EDE2C;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822edec0
	if (!ctx.cr6.lt) goto loc_822EDEC0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x822edeac
	goto loc_822EDEAC;
loc_822EDE2C:
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x822ede74
	if (!ctx.cr6.lt) goto loc_822EDE74;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822edec0
	if (!ctx.cr6.lt) goto loc_822EDEC0;
	// li r31,-64
	ctx.r31.s64 = -64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r31,r11,26,26,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0x3F) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFFC0);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwimi r30,r6,7,0,25
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r6.u32, 7) & 0xFFFFFFC0) | (ctx.r30.u64 & 0xFFFFFFFF0000003F);
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// stbx r31,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u8);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stbx r30,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u8);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x822edeb4
	goto loc_822EDEB4;
loc_822EDE74:
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822edec0
	if (!ctx.cr6.lt) goto loc_822EDEC0;
	// li r31,-32
	ctx.r31.s64 = -32;
	// li r30,-128
	ctx.r30.s64 = -128;
	// rlwimi r31,r11,20,27,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x1F) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwimi r30,r11,26,26,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0x3F) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFFC0);
	// stbx r31,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwimi r11,r6,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// stbx r30,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r30.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822EDEAC:
	// stbx r11,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822EDEB4:
	// lhzu r11,2(r5)
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ede0c
	if (!ctx.cr6.eq) goto loc_822EDE0C;
loc_822EDEC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EDDE0) {
	__imp__sub_822EDDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EDED4) {
	__imp__sub_822EDED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822EDEE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,2488
	ctx.r31.s64 = ctx.r11.s64 + 2488;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822edf10
	if (ctx.cr6.eq) goto loc_822EDF10;
loc_822EDF04:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822EDF10:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EDF24:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822edf24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EDF24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822EDF3C;
	sub_826344D0(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822edcf8
	ctx.lr = 0x822EDF4C;
	sub_822EDCF8(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x822edcf8
	ctx.lr = 0x822EDF5C;
	sub_822EDCF8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822edf70
	if (ctx.cr6.lt) goto loc_822EDF70;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x822edf74
	if (ctx.cr6.lt) goto loc_822EDF74;
loc_822EDF70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EDF74:
	// addi r10,r31,512
	ctx.r10.s64 = ctx.r31.s64 + 512;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r6,r31,544
	ctx.r6.s64 = ctx.r31.s64 + 544;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// li r9,100
	ctx.r9.s64 = 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a3738
	ctx.lr = 0x822EDF94;
	sub_825A3738(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x822edfa4
	if (ctx.cr6.eq) goto loc_822EDFA4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822edf04
	if (!ctx.cr6.eq) goto loc_822EDF04;
loc_822EDFA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EDED8) {
	__imp__sub_822EDED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822EDFC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,2488
	ctx.r31.s64 = ctx.r11.s64 + 2488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822edff4
	if (!ctx.cr6.eq) goto loc_822EDFF4;
loc_822EDFE8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822EDFF4:
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r3,r11,3000
	ctx.r3.s64 = ctx.r11.s64 + 3000;
	// lwz r11,3000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3000);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x822ee014
	if (!ctx.cr6.eq) goto loc_822EE014;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822EE014:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82290578
	ctx.lr = 0x822EE028;
	sub_82290578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822edfe8
	if (!ctx.cr6.eq) goto loc_822EDFE8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822edde0
	ctx.lr = 0x822EE040;
	sub_822EDDE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EDFB8) {
	__imp__sub_822EDFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EE04C) {
	__imp__sub_822EE04C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// lwz r3,3160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3160);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EE050) {
	__imp__sub_822EE050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EE05C) {
	__imp__sub_822EE05C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822EE068;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31995
	ctx.r28.s64 = -2096824320;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,3176
	ctx.r31.s64 = ctx.r11.s64 + 3176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-26072(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26072);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ee0d0
	if (!ctx.cr6.eq) goto loc_822EE0D0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,4044
	ctx.r3.s64 = ctx.r11.s64 + 4044;
	// bl 0x825a36d0
	ctx.lr = 0x822EE09C;
	sub_825A36D0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822ee150
	if (ctx.cr6.eq) goto loc_822EE150;
	// lis r3,384
	ctx.r3.s64 = 25165824;
	// bl 0x82634da0
	ctx.lr = 0x822EE0AC;
	sub_82634DA0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ee154
	if (ctx.cr6.eq) goto loc_822EE154;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,-26072(r28)
	PPC_STORE_U32(ctx.r28.u32 + -26072, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r10,3984
	ctx.r3.s64 = ctx.r10.s64 + 3984;
	// bl 0x822ebbc8
	ctx.lr = 0x822EE0D0;
	sub_822EBBC8(ctx, base);
loc_822EE0D0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_822EE0D4:
	// lwz r11,-26072(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26072);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822ee1f4
	if (!ctx.cr6.eq) goto loc_822EE1F4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r9,384
	ctx.r9.s64 = 25165824;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822ee19c
	if (!ctx.cr6.gt) goto loc_822EE19C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,2452
	ctx.r4.s64 = ctx.r11.s64 + 2452;
	// addi r3,r10,3964
	ctx.r3.s64 = ctx.r10.s64 + 3964;
	// bl 0x82637058
	ctx.lr = 0x822EE10C;
	sub_82637058(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ee15c
	if (ctx.cr6.eq) goto loc_822EE15C;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82637ef8
	ctx.lr = 0x822EE12C;
	sub_82637EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826377c8
	ctx.lr = 0x822EE138;
	sub_826377C8(ctx, base);
loc_822EE138:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ee164
	if (!ctx.cr6.eq) goto loc_822EE164;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r10,9896
	ctx.r6.s64 = ctx.r10.s64 + 9896;
	// b 0x822ee16c
	goto loc_822EE16C;
loc_822EE150:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_822EE154:
	// stw r27,-26072(r28)
	PPC_STORE_U32(ctx.r28.u32 + -26072, ctx.r27.u32);
	// b 0x822ee0d4
	goto loc_822EE0D4;
loc_822EE15C:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x822ee138
	goto loc_822EE138;
loc_822EE164:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r10,26324
	ctx.r6.s64 = ctx.r10.s64 + 26324;
loc_822EE16C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,22,10,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// addi r3,r10,3916
	ctx.r3.s64 = ctx.r10.s64 + 3916;
	// bl 0x822ebbc8
	ctx.lr = 0x822EE180;
	sub_822EBBC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82634d40
	ctx.lr = 0x822EE188;
	sub_82634D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,-26072(r28)
	PPC_STORE_U32(ctx.r28.u32 + -26072, ctx.r27.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822EE19C:
	// rlwinm r10,r30,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r30,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r30,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r30,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x825a2ec8
	ctx.lr = 0x822EE1DC;
	sub_825A2EC8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822EE1F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EE060) {
	__imp__sub_822EE060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EE1FC) {
	__imp__sub_822EE1FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822EE208;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r30,r11,3168
	ctx.r30.s64 = ctx.r11.s64 + 3168;
	// lwz r11,3168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ee2c0
	if (!ctx.cr6.eq) goto loc_822EE2C0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,2448
	ctx.r4.s64 = ctx.r11.s64 + 2448;
	// addi r3,r10,3964
	ctx.r3.s64 = ctx.r10.s64 + 3964;
	// bl 0x82637058
	ctx.lr = 0x822EE234;
	sub_82637058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ee24c
	if (!ctx.cr6.eq) goto loc_822EE24C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822EE24C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82638420
	ctx.lr = 0x822EE25C;
	sub_82638420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82638270
	ctx.lr = 0x822EE264;
	sub_82638270(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82638420
	ctx.lr = 0x822EE278;
	sub_82638420(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634da0
	ctx.lr = 0x822EE280;
	sub_82634DA0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ee2a0
	if (!ctx.cr6.eq) goto loc_822EE2A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826377c8
	ctx.lr = 0x822EE294;
	sub_826377C8(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822EE2A0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82637c70
	ctx.lr = 0x822EE2B0;
	sub_82637C70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// bl 0x826377c8
	ctx.lr = 0x822EE2C0;
	sub_826377C8(ctx, base);
loc_822EE2C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EE200) {
	__imp__sub_822EE200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EE2CC) {
	__imp__sub_822EE2CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822EE2D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,0
	ctx.r15.s64 = 0;
	// lis r7,-32484
	ctx.r7.s64 = -2128871424;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// ori r7,r7,40389
	ctx.r7.u64 = ctx.r7.u64 | 40389;
	// ori r6,r11,403
	ctx.r6.u64 = ctx.r11.u64 | 403;
loc_822EE304:
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
loc_822EE308:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822ee31c
	if (ctx.cr6.eq) goto loc_822EE31C;
	// srawi r11,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r18.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x822ee320
	goto loc_822EE320;
loc_822EE31C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822EE320:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ee384
	if (!ctx.cr6.lt) goto loc_822EE384;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_822EE32C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822ee340
	if (ctx.cr6.eq) goto loc_822EE340;
	// srawi r10,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r20.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// b 0x822ee344
	goto loc_822EE344;
loc_822EE340:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_822EE344:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822ee37c
	if (!ctx.cr6.lt) goto loc_822EE37C;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// lwzx r3,r4,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// mullw r9,r3,r5
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xor r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// b 0x822ee32c
	goto loc_822EE32C;
loc_822EE37C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x822ee308
	goto loc_822EE308;
loc_822EE384:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x822ee304
	if (ctx.cr6.lt) goto loc_822EE304;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x822ee82c
	if (ctx.cr6.lt) goto loc_822EE82C;
	// cmpwi cr6,r19,8192
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 8192, ctx.xer);
	// bge cr6,0x822ee82c
	if (!ctx.cr6.lt) goto loc_822EE82C;
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// lwz r11,-26068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26068);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822ee4b4
	if (!ctx.cr6.eq) goto loc_822EE4B4;
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r9,r11,6696
	ctx.r9.s64 = ctx.r11.s64 + 6696;
	// rlwinm r8,r19,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 776);
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// bne cr6,0x822ee82c
	if (!ctx.cr6.eq) goto loc_822EE82C;
	// lis r29,-31995
	ctx.r29.s64 = -2096824320;
	// lwz r3,-26064(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26064);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ee404
	if (!ctx.cr6.eq) goto loc_822EE404;
	// mullw r11,r20,r18
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r18.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r3,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x82634da0
	ctx.lr = 0x822EE3F8;
	sub_82634DA0(ctx, base);
	// stw r3,-26064(r29)
	PPC_STORE_U32(ctx.r29.u32 + -26064, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ee82c
	if (ctx.cr6.eq) goto loc_822EE82C;
loc_822EE404:
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_822EE408:
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_822EE40C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822ee420
	if (ctx.cr6.eq) goto loc_822EE420;
	// srawi r11,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r18.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x822ee424
	goto loc_822EE424;
loc_822EE420:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822EE424:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ee4a0
	if (!ctx.cr6.lt) goto loc_822EE4A0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822ee45c
	if (ctx.cr6.eq) goto loc_822EE45C;
	// srawi r11,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r20.s32 >> 1;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r11,r20,r18
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r18.s32);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x822ee468
	goto loc_822EE468;
loc_822EE45C:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_822EE468:
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lwzx r10,r9,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// lwzx r6,r7,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// mullw r9,r6,r31
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x825a2ec8
	ctx.lr = 0x822EE494;
	sub_825A2EC8(ctx, base);
	// lwz r3,-26064(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26064);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x822ee40c
	goto loc_822EE40C;
loc_822EE4A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x822ee408
	if (ctx.cr6.lt) goto loc_822EE408;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822EE4B4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ee82c
	if (!ctx.cr6.eq) goto loc_822EE82C;
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,6696
	ctx.r9.s64 = ctx.r11.s64 + 6696;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// addi r16,r11,3208
	ctx.r16.s64 = ctx.r11.s64 + 3208;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822ee4ec
	if (ctx.cr6.eq) goto loc_822EE4EC;
	// lwz r11,-36(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + -36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822ee4ec
	if (!ctx.cr6.lt) goto loc_822EE4EC;
	// stw r19,-36(r16)
	PPC_STORE_U32(ctx.r16.u32 + -36, ctx.r19.u32);
loc_822EE4EC:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822ee82c
	if (!ctx.cr6.eq) goto loc_822EE82C;
	// lis r30,-31995
	ctx.r30.s64 = -2096824320;
	// lwz r11,-26064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26064);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ee82c
	if (ctx.cr6.eq) goto loc_822EE82C;
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// li r5,3072
	ctx.r5.s64 = 3072;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// addi r17,r11,3608
	ctx.r17.s64 = ctx.r11.s64 + 3608;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// bl 0x825a2c28
	ctx.lr = 0x822EE544;
	sub_825A2C28(ctx, base);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// lwz r21,-26064(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26064);
loc_822EE54C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822ee560
	if (ctx.cr6.eq) goto loc_822EE560;
	// srawi r11,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r20.s32 >> 1;
	// addze r22,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r22.s64 = temp.s64;
	// b 0x822ee564
	goto loc_822EE564;
loc_822EE560:
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
loc_822EE564:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// beq cr6,0x822ee598
	if (ctx.cr6.eq) goto loc_822EE598;
	// mullw r11,r20,r18
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r18.s32);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822ee59c
	goto loc_822EE59C;
loc_822EE598:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_822EE59C:
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_822EE5A4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822ee5b8
	if (ctx.cr6.eq) goto loc_822EE5B8;
	// srawi r11,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r18.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x822ee5bc
	goto loc_822EE5BC;
loc_822EE5B8:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822EE5BC:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ee6a0
	if (!ctx.cr6.lt) goto loc_822EE6A0;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x822ee694
	if (!ctx.cr6.gt) goto loc_822EE694;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_822EE5E0:
	// lwzx r8,r30,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// lwzx r7,r6,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// mullw r5,r10,r8
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lbzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822ee68c
	if (ctx.cr6.eq) goto loc_822EE68C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x822ee61c
	if (!ctx.cr6.lt) goto loc_822EE61C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
loc_822EE61C:
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rlwinm r7,r31,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r8,r5,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw r4,r11,r9
	ctx.r4.s32 = ctx.r11.s32 / ctx.r9.s32;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r7,r4,r9
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r5,r7,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r3,r10,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r14,r5,-1
	ctx.r14.s64 = ctx.r5.s64 + -1;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r5,r8,r17
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r17.u32);
	// andc r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// stwx r4,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u32);
	// andc r14,r9,r14
	ctx.r14.u64 = ctx.r9.u64 & ~ctx.r14.u64;
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// twllei r9,0
	// twllei r9,0
	// stwx r7,r8,r17
	PPC_STORE_U32(ctx.r8.u32 + ctx.r17.u32, ctx.r7.u32);
	// twlgei r3,-1
	// twlgei r14,-1
loc_822EE68C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822ee5e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EE5E0;
loc_822EE694:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 + ctx.r22.u64;
	// b 0x822ee5a4
	goto loc_822EE5A4;
loc_822EE6A0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x822ee54c
	if (ctx.cr6.lt) goto loc_822EE54C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r11,4164
	ctx.r5.s64 = ctx.r11.s64 + 4164;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r4,400
	ctx.r4.s64 = 400;
	// bl 0x82637620
	ctx.lr = 0x822EE6D0;
	sub_82637620(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x822ee708
	if (ctx.cr6.lt) goto loc_822EE708;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// subfic r4,r3,400
	ctx.xer.ca = ctx.r3.u32 <= 400;
	ctx.r4.s64 = 400 - ctx.r3.s64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r5,r11,4096
	ctx.r5.s64 = ctx.r11.s64 + 4096;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r3,r3,r16
	ctx.r3.u64 = ctx.r3.u64 + ctx.r16.u64;
	// bl 0x82637620
	ctx.lr = 0x822EE704;
	sub_82637620(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_822EE708:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// addi r28,r11,4080
	ctx.r28.s64 = ctx.r11.s64 + 4080;
loc_822EE718:
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r15,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r15.u32);
loc_822EE72C:
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
loc_822EE730:
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_822EE738:
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822ee790
	if (!ctx.cr6.gt) goto loc_822EE790;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_822EE750:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822ee778
	if (!ctx.cr6.eq) goto loc_822EE778;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x822ee778
	if (!ctx.cr6.eq) goto loc_822EE778;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x822ee77c
	if (ctx.cr6.eq) goto loc_822EE77C;
loc_822EE778:
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_822EE77C:
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x822ee750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EE750;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822ee7b8
	if (!ctx.cr6.eq) goto loc_822EE7B8;
loc_822EE790:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822ee7b8
	if (!ctx.cr6.gt) goto loc_822EE7B8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stwx r4,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// stwx r6,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
loc_822EE7B8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x822ee738
	if (ctx.cr6.lt) goto loc_822EE738;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// blt cr6,0x822ee730
	if (ctx.cr6.lt) goto loc_822EE730;
	// addi r10,r17,3072
	ctx.r10.s64 = ctx.r17.s64 + 3072;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ee72c
	if (ctx.cr6.lt) goto loc_822EE72C;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ee81c
	if (ctx.cr6.eq) goto loc_822EE81C;
	// cmplwi cr6,r29,376
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 376, ctx.xer);
	// bge cr6,0x822ee81c
	if (!ctx.cr6.lt) goto loc_822EE81C;
	// lwz r8,-4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,-8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// subfic r4,r29,400
	ctx.xer.ca = ctx.r29.u32 <= 400;
	ctx.r4.s64 = 400 - ctx.r29.s64;
	// lwz r6,-12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// add r3,r29,r16
	ctx.r3.u64 = ctx.r29.u64 + ctx.r16.u64;
	// bl 0x82637620
	ctx.lr = 0x822EE818;
	sub_82637620(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_822EE81C:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,80
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 80, ctx.xer);
	// blt cr6,0x822ee718
	if (ctx.cr6.lt) goto loc_822EE718;
loc_822EE82C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EE2D0) {
	__imp__sub_822EE2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EE834) {
	__imp__sub_822EE834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822EE840;
	__savegprlr_26(ctx, base);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r9,r10,403
	ctx.r9.u64 = ctx.r10.u64 | 403;
	// addi r26,r11,6680
	ctx.r26.s64 = ctx.r11.s64 + 6680;
loc_822EE854:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x822ee870
	if (ctx.cr6.eq) goto loc_822EE870;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x822ee878
	goto loc_822EE878;
loc_822EE870:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_822EE878:
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r8,r29,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// ble cr6,0x822ee8d8
	if (!ctx.cr6.gt) goto loc_822EE8D8;
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// lwzx r7,r29,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwzx r28,r28,r4
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
loc_822EE8A4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822ee8cc
	if (!ctx.cr6.gt) goto loc_822EE8CC;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_822EE8B4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// xor r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bdnz 0x822ee8b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EE8B4;
loc_822EE8CC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// bne 0x822ee8a4
	if (!ctx.cr0.eq) goto loc_822EE8A4;
loc_822EE8D8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r8,r29,r26
	PPC_STORE_U32(ctx.r29.u32 + ctx.r26.u32, ctx.r8.u32);
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// blt cr6,0x822ee854
	if (ctx.cr6.lt) goto loc_822EE854;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EE838) {
	__imp__sub_822EE838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EE8EC) {
	__imp__sub_822EE8EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822EE8F8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82635a2c
	ctx.lr = 0x822EE900;
	__savefpr_25(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-32155
	ctx.r23.s64 = -2107310080;
	// lis r24,-32012
	ctx.r24.s64 = -2097938432;
	// lis r22,-32155
	ctx.r22.s64 = -2107310080;
	// lis r25,-32155
	ctx.r25.s64 = -2107310080;
	// lis r26,-31990
	ctx.r26.s64 = -2096496640;
	// lis r27,-32155
	ctx.r27.s64 = -2107310080;
	// lwz r11,704(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 704);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r10,2476(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2476);
	// lwz r9,3964(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3964);
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// lwz r8,3968(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3968);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r7,-19000(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19000);
	// ori r30,r4,40389
	ctx.r30.u64 = ctx.r4.u64 | 40389;
	// lwz r6,3976(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3976);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f25,23400(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23400);
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// fmr f27,f25
	ctx.f27.f64 = ctx.f25.f64;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// stw r8,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// bl 0x822ee200
	ctx.lr = 0x822EE988;
	sub_822EE200(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ee9b8
	if (ctx.cr6.eq) goto loc_822EE9B8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r5,r11,5596
	ctx.r5.s64 = ctx.r11.s64 + 5596;
	// bl 0x82637620
	ctx.lr = 0x822EE9A4;
	sub_82637620(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82635a78
	ctx.lr = 0x822EE9B4;
	__restfpr_25(ctx, base);
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822EE9B8:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r28,r11,3932
	ctx.r28.s64 = ctx.r11.s64 + 3932;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r28,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r28.u32);
	// bl 0x825a2ec8
	ctx.lr = 0x822EE9D4;
	sub_825A2EC8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822ee9e4
	if (ctx.cr6.gt) goto loc_822EE9E4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822EE9E4:
	// divw r8,r29,r11
	ctx.r8.s32 = ctx.r29.s32 / ctx.r11.s32;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// rotlwi r10,r29,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// twlgei r4,-1
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822eea28
	if (ctx.cr6.gt) goto loc_822EEA28;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822EEA28:
	// li r9,1
	ctx.r9.s64 = 1;
	// twllei r11,0
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r4,-1
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822eea6c
	if (ctx.cr6.gt) goto loc_822EEA6C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822EEA6C:
	// li r9,2
	ctx.r9.s64 = 2;
	// twllei r11,0
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r4,-1
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822eeab0
	if (ctx.cr6.gt) goto loc_822EEAB0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822EEAB0:
	// li r9,3
	ctx.r9.s64 = 3;
	// twllei r11,0
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r4,-1
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822eeaf4
	if (ctx.cr6.gt) goto loc_822EEAF4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822EEAF4:
	// li r9,4
	ctx.r9.s64 = 4;
	// twllei r11,0
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r4,-1
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822eeb38
	if (ctx.cr6.gt) goto loc_822EEB38;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822EEB38:
	// li r9,5
	ctx.r9.s64 = 5;
	// twllei r11,0
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r4,-1
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822eeb7c
	if (ctx.cr6.gt) goto loc_822EEB7C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822EEB7C:
	// li r9,6
	ctx.r9.s64 = 6;
	// twllei r11,0
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r4,-1
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822eebc0
	if (ctx.cr6.gt) goto loc_822EEBC0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822EEBC0:
	// li r9,7
	ctx.r9.s64 = 7;
	// twllei r11,0
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r4,-1
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822eec04
	if (ctx.cr6.gt) goto loc_822EEC04;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822EEC04:
	// stw r11,3964(r22)
	PPC_STORE_U32(ctx.r22.u32 + 3964, ctx.r11.u32);
	// lis r9,-31991
	ctx.r9.s64 = -2096562176;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r29,-9080(r9)
	PPC_STORE_U32(ctx.r9.u32 + -9080, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,3968(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3968, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,704(r23)
	PPC_STORE_U32(ctx.r23.u32 + 704, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,2476(r24)
	PPC_STORE_U32(ctx.r24.u32 + 2476, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,-19000(r26)
	PPC_STORE_U32(ctx.r26.u32 + -19000, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,3976(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3976, ctx.r11.u32);
	// bl 0x823deb18
	ctx.lr = 0x822EEC44;
	sub_823DEB18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x823dddc0
	ctx.lr = 0x822EEC4C;
	sub_823DDDC0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r7,968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 968, ctx.r7.u32);
	// stw r8,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r8.u32);
	// bl 0x822eda90
	ctx.lr = 0x822EEC64;
	sub_822EDA90(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823de5a8
	ctx.lr = 0x822EEC70;
	sub_823DE5A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822eec90
	if (!ctx.cr6.lt) goto loc_822EEC90;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r5,r11,5576
	ctx.r5.s64 = ctx.r11.s64 + 5576;
	// bl 0x82637620
	ctx.lr = 0x822EEC8C;
	sub_82637620(ctx, base);
	// b 0x822efbcc
	goto loc_822EFBCC;
loc_822EEC90:
	// bl 0x823de530
	ctx.lr = 0x822EEC94;
	sub_823DE530(ctx, base);
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x823dfd80
	ctx.lr = 0x822EECA0;
	sub_823DFD80(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x823e92c0
	ctx.lr = 0x822EECB4;
	sub_823E92C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x823e9308
	ctx.lr = 0x822EECC0;
	sub_823E9308(ctx, base);
	// bl 0x823f5170
	ctx.lr = 0x822EECC4;
	sub_823F5170(ctx, base);
	// lis r22,-31991
	ctx.r22.s64 = -2096562176;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// std r29,-8848(r22)
	PPC_STORE_U64(ctx.r22.u32 + -8848, ctx.r29.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EECE0:
	// stdu r29,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r29.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822eece0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EECE0;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r11,8864
	ctx.r11.s64 = ctx.r11.s64 + 8864;
	// addi r8,r10,8960
	ctx.r8.s64 = ctx.r10.s64 + 8960;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822EED08:
	// stdu r29,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r29.u64);
	ctx.r11.u32 = ea;
	// stwu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822eed08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EED08;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// lis r9,-32012
	ctx.r9.s64 = -2097938432;
	// addi r15,r10,6680
	ctx.r15.s64 = ctx.r10.s64 + 6680;
	// addi r8,r11,8352
	ctx.r8.s64 = ctx.r11.s64 + 8352;
	// addi r23,r9,3608
	ctx.r23.s64 = ctx.r9.s64 + 3608;
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// stw r8,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r30,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r29,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r29.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r30.u32);
	// stw r29,8324(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8324, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,8320(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8320, ctx.r29.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r30,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r30.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// stw r11,-436(r23)
	PPC_STORE_U32(ctx.r23.u32 + -436, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stb r29,-400(r23)
	PPC_STORE_U8(ctx.r23.u32 + -400, ctx.r29.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x822f79f0
	ctx.lr = 0x822EED84;
	sub_822F79F0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// addi r6,r1,344
	ctx.r6.s64 = ctx.r1.s64 + 344;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823f04e0
	ctx.lr = 0x822EEDA0;
	sub_823F04E0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x825a3208
	ctx.lr = 0x822EEDA8;
	sub_825A3208(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x825a31d0
	ctx.lr = 0x822EEDB0;
	sub_825A31D0(ctx, base);
	// lfd f0,352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfd f12,432(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// lwz r9,-408(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + -408);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r14,-31995
	ctx.r14.s64 = -2096824320;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// lfd f28,4072(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4072);
	// fmul f10,f13,f28
	ctx.f10.f64 = ctx.f13.f64 * ctx.f28.f64;
	// fdiv f29,f10,f11
	ctx.f29.f64 = ctx.f10.f64 / ctx.f11.f64;
	// blt cr6,0x822eefb8
	if (ctx.cr6.lt) goto loc_822EEFB8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r24,16
	ctx.r24.s64 = 1048576;
	// lis r27,-31921
	ctx.r27.s64 = -2091974656;
	// lis r26,-31921
	ctx.r26.s64 = -2091974656;
	// lis r25,-31921
	ctx.r25.s64 = -2091974656;
	// lfd f30,5568(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 5568);
	// lis r28,-32012
	ctx.r28.s64 = -2097938432;
loc_822EEDFC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822eee10
	if (ctx.cr6.eq) goto loc_822EEE10;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822eefb8
	if (!ctx.cr6.lt) goto loc_822EEFB8;
loc_822EEE10:
	// lwz r10,3168(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3168);
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbzx r7,r10,r29
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 | ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822eefb8
	if (ctx.cr6.eq) goto loc_822EEFB8;
	// add r29,r30,r8
	ctx.r29.u64 = ctx.r30.u64 + ctx.r8.u64;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x822eefb8
	if (ctx.cr6.gt) goto loc_822EEFB8;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x822eefb8
	if (ctx.cr6.gt) goto loc_822EEFB8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bl 0x825a2ec8
	ctx.lr = 0x822EEE74;
	sub_825A2EC8(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r23
	ctx.r3.u64 = ctx.r30.u64 + ctx.r23.u64;
	// bl 0x825a2c28
	ctx.lr = 0x822EEE84;
	sub_825A2C28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// stw r23,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r23.u32);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// bl 0x825a3208
	ctx.lr = 0x822EEE9C;
	sub_825A3208(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x825a31d0
	ctx.lr = 0x822EEEA4;
	sub_825A31D0(ctx, base);
	// lfd f0,440(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,448(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 448);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// fmul f10,f13,f28
	ctx.f10.f64 = ctx.f13.f64 * ctx.f28.f64;
	// fdiv f31,f10,f11
	ctx.f31.f64 = ctx.f10.f64 / ctx.f11.f64;
	// bl 0x823de988
	ctx.lr = 0x822EEED0;
	sub_823DE988(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822eeedc
	if (!ctx.cr6.lt) goto loc_822EEEDC;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
loc_822EEEDC:
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x825a3208
	ctx.lr = 0x822EEEE4;
	sub_825A3208(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x825a31d0
	ctx.lr = 0x822EEEEC;
	sub_825A31D0(ctx, base);
	// lfd f0,312(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,296(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f10,f13,f28
	ctx.f10.f64 = ctx.f13.f64 * ctx.f28.f64;
	// fdiv f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fsub f0,f9,f31
	ctx.f0.f64 = ctx.f9.f64 - ctx.f31.f64;
	// fadd f26,f0,f26
	ctx.f26.f64 = ctx.f0.f64 + ctx.f26.f64;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x822eef18
	if (!ctx.cr6.gt) goto loc_822EEF18;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
loc_822EEF18:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x822eef24
	if (!ctx.cr6.gt) goto loc_822EEF24;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_822EEF24:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r21,-1300(r25)
	PPC_STORE_U32(ctx.r25.u32 + -1300, ctx.r21.u32);
	// stfd f27,-1296(r26)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r26.u32 + -1296, ctx.f27.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822eef94
	if (ctx.cr6.eq) goto loc_822EEF94;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r30,-1304(r27)
	PPC_STORE_U32(ctx.r27.u32 + -1304, ctx.r30.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// beq cr6,0x822eef70
	if (ctx.cr6.eq) goto loc_822EEF70;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r6,44(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r5,40(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// bl 0x822ee838
	ctx.lr = 0x822EEF6C;
	sub_822EE838(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_822EEF70:
	// lwz r11,-26068(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -26068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822eef98
	if (ctx.cr6.eq) goto loc_822EEF98;
	// addi r6,r30,-1
	ctx.r6.s64 = ctx.r30.s64 + -1;
	// lwz r5,44(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r4,40(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// bl 0x822ee2d0
	ctx.lr = 0x822EEF90;
	sub_822EE2D0(ctx, base);
	// b 0x822eef98
	goto loc_822EEF98;
loc_822EEF94:
	// lwz r30,288(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
loc_822EEF98:
	// subf r11,r30,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r30.s64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x822eefa8
	if (!ctx.cr6.gt) goto loc_822EEFA8;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
loc_822EEFA8:
	// lwz r9,-408(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + -408);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822eedfc
	if (!ctx.cr6.gt) goto loc_822EEDFC;
loc_822EEFB8:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,304(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// stw r28,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r28.u32);
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// stw r28,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823de988
	ctx.lr = 0x822EEFE0;
	sub_823DE988(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r30,288(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ef068
	if (ctx.cr6.eq) goto loc_822EF068;
loc_822EEFF0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ef018
	if (ctx.cr6.eq) goto loc_822EF018;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,44(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r5,40(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// bl 0x822ee838
	ctx.lr = 0x822EF014;
	sub_822EE838(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_822EF018:
	// lwz r11,-26068(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -26068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ef038
	if (ctx.cr6.eq) goto loc_822EF038;
	// addi r6,r30,-1
	ctx.r6.s64 = ctx.r30.s64 + -1;
	// lwz r5,44(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,40(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// bl 0x822ee2d0
	ctx.lr = 0x822EF038;
	sub_822EE2D0(ctx, base);
loc_822EF038:
	// stw r28,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r28.u32);
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// stw r28,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r28.u32);
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823de988
	ctx.lr = 0x822EF058;
	sub_823DE988(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822eeff0
	if (!ctx.cr6.eq) goto loc_822EEFF0;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
loc_822EF068:
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x825a3208
	ctx.lr = 0x822EF070;
	sub_825A3208(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x825a31d0
	ctx.lr = 0x822EF078;
	sub_825A31D0(ctx, base);
	// lfd f0,296(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,312(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// fmul f10,f13,f28
	ctx.f10.f64 = ctx.f13.f64 * ctx.f28.f64;
	// fdiv f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fsub f29,f9,f29
	ctx.f29.f64 = ctx.f9.f64 - ctx.f29.f64;
	// bl 0x823e92c0
	ctx.lr = 0x822EF0A8;
	sub_823E92C0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// addi r6,r1,344
	ctx.r6.s64 = ctx.r1.s64 + 344;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823f04e0
	ctx.lr = 0x822EF0C4;
	sub_823F04E0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfd f30,5560(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 5560);
	// beq cr6,0x822ef128
	if (ctx.cr6.eq) goto loc_822EF128;
	// lfd f0,376(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r11,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r11.u64);
	// lfd f12,296(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// fmul f11,f13,f30
	ctx.f11.f64 = ctx.f13.f64 * ctx.f30.f64;
	// lfd f13,-8848(r22)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r22.u32 + -8848);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,424(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// fdiv f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 / ctx.f0.f64;
	// fmul f11,f12,f30
	ctx.f11.f64 = ctx.f12.f64 * ctx.f30.f64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,384(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fdiv f7,f11,f0
	ctx.f7.f64 = ctx.f11.f64 / ctx.f0.f64;
	// fmul f11,f12,f30
	ctx.f11.f64 = ctx.f12.f64 * ctx.f30.f64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f6,f11,f0
	ctx.f6.f64 = ctx.f11.f64 / ctx.f0.f64;
	// fmul f11,f12,f30
	ctx.f11.f64 = ctx.f12.f64 * ctx.f30.f64;
	// fdiv f5,f11,f0
	ctx.f5.f64 = ctx.f11.f64 / ctx.f0.f64;
	// b 0x822ef138
	goto loc_822EF138;
loc_822EF128:
	// fmr f8,f25
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f25.f64;
	// fmr f7,f25
	ctx.f7.f64 = ctx.f25.f64;
	// fmr f6,f25
	ctx.f6.f64 = ctx.f25.f64;
	// fmr f5,f25
	ctx.f5.f64 = ctx.f25.f64;
loc_822EF138:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x822ef158
	if (ctx.cr6.eq) goto loc_822EF158;
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// std r11,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r11.u64);
	// lfd f0,296(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fdiv f3,f26,f13
	ctx.f3.f64 = ctx.f26.f64 / ctx.f13.f64;
	// b 0x822ef15c
	goto loc_822EF15C;
loc_822EF158:
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f25.f64;
loc_822EF15C:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r22,r11,8828
	ctx.r22.s64 = ctx.r11.s64 + 8828;
	// and r4,r6,r20
	ctx.r4.u64 = ctx.r6.u64 & ctx.r20.u64;
	// ble cr6,0x822ef18c
	if (!ctx.cr6.gt) goto loc_822EF18C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,5552
	ctx.r5.s64 = ctx.r11.s64 + 5552;
	// b 0x822ef190
	goto loc_822EF190;
loc_822EF18C:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_822EF190:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lwz r10,44(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// lwz r7,40(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// std r11,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r11.u64);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// lis r25,-32155
	ctx.r25.s64 = -2107310080;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r11,4420(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4420);
	// divw r6,r29,r3
	ctx.r6.s32 = ctx.r29.s32 / ctx.r3.s32;
	// lwz r9,4372(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4372);
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r8,4364(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4364);
	// mullw r6,r6,r3
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stfd f8,280(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.f8.u64);
	// lwz r10,4384(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4384);
	// stfd f7,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.f7.u64);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// stfd f6,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.f6.u64);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// stfd f5,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.f5.u64);
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// stfd f27,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f27.u64);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stfd f3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f3.u64);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stfd f29,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f29.u64);
	// lwz r28,28(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// lwz r24,8(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// divw r11,r27,r3
	ctx.r11.s32 = ctx.r27.s32 / ctx.r3.s32;
	// lwz r21,4(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r6,r6,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r6.s64;
	// lwz r20,16(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r8,r11,r3
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// lfd f0,296(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// stw r16,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r16.u32);
	// fcfid f31,f0
	ctx.f31.f64 = double(ctx.f0.s64);
	// lwz r7,4356(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4356);
	// stw r18,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r18.u32);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// subf r11,r8,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r8.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// fdiv f13,f31,f29
	ctx.f13.f64 = ctx.f31.f64 / ctx.f29.f64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// divw r4,r7,r3
	ctx.r4.s32 = ctx.r7.s32 / ctx.r3.s32;
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r9,r29,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// mullw r5,r4,r3
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// fmul f2,f13,f28
	ctx.f2.f64 = ctx.f13.f64 * ctx.f28.f64;
	// stfd f2,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f2.u64);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// rotlwi r8,r27,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// subf r11,r5,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r5.s64;
	// lwzx r9,r6,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// twllei r3,0
	// twllei r3,0
	// twllei r3,0
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// rlwinm r28,r5,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// andc r27,r3,r8
	ctx.r27.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// andc r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 & ~ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r5,r11,5216
	ctx.r5.s64 = ctx.r11.s64 + 5216;
	// lwzx r8,r28,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// twlgei r29,-1
	// twlgei r27,-1
	// twlgei r30,-1
	// bl 0x82637620
	ctx.lr = 0x822EF30C;
	sub_82637620(ctx, base);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lwz r11,8672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ef4dc
	if (ctx.cr6.eq) goto loc_822EF4DC;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ef4dc
	if (ctx.cr6.eq) goto loc_822EF4DC;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// fdiv f29,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64 / ctx.f31.f64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822EF334:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef334
	if (!ctx.cr6.eq) goto loc_822EF334;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// lis r5,-31921
	ctx.r5.s64 = -2091974656;
	// lis r4,-31921
	ctx.r4.s64 = -2091974656;
	// lfd f0,8704(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8704);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lfd f13,8680(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8680);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f11,8688(r6)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8688);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f9,8552(r5)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8552);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lfd f7,8696(r4)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8696);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcfid f1,f7
	ctx.f1.f64 = double(ctx.f7.s64);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r5,r9,5136
	ctx.r5.s64 = ctx.r9.s64 + 5136;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// fdiv f5,f12,f31
	ctx.f5.f64 = ctx.f12.f64 / ctx.f31.f64;
	// stfd f5,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f5.u64);
	// fmul f4,f10,f29
	ctx.f4.f64 = ctx.f10.f64 * ctx.f29.f64;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// fdiv f3,f8,f31
	ctx.f3.f64 = ctx.f8.f64 / ctx.f31.f64;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// fmul f2,f6,f29
	ctx.f2.f64 = ctx.f6.f64 * ctx.f29.f64;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// fmul f1,f1,f29
	ctx.f1.f64 = ctx.f1.f64 * ctx.f29.f64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// bl 0x82637620
	ctx.lr = 0x822EF3E0;
	sub_82637620(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r25,r11,780
	ctx.r25.s64 = ctx.r11.s64 + 780;
	// addi r28,r10,5120
	ctx.r28.s64 = ctx.r10.s64 + 5120;
	// addi r27,r9,8576
	ctx.r27.s64 = ctx.r9.s64 + 8576;
	// addi r26,r8,8736
	ctx.r26.s64 = ctx.r8.s64 + 8736;
	// addi r24,r7,5096
	ctx.r24.s64 = ctx.r7.s64 + 5096;
loc_822EF40C:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822EF414:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef414
	if (!ctx.cr6.eq) goto loc_822EF414;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwzx r6,r29,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82637620
	ctx.lr = 0x822EF448;
	sub_82637620(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_822EF44C:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822EF454:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef454
	if (!ctx.cr6.eq) goto loc_822EF454;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ldx r9,r7,r26
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r26.u32);
	// ldx r8,r7,r27
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r27.u32);
	// std r9,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r9.u64);
	// lfd f12,312(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// std r8,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r8.u64);
	// lfd f0,296(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fdiv f2,f11,f31
	ctx.f2.f64 = ctx.f11.f64 / ctx.f31.f64;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// fmul f1,f13,f29
	ctx.f1.f64 = ctx.f13.f64 * ctx.f29.f64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x82637620
	ctx.lr = 0x822EF4C4;
	sub_82637620(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x822ef44c
	if (ctx.cr6.lt) goto loc_822EF44C;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// blt cr6,0x822ef40c
	if (ctx.cr6.lt) goto loc_822EF40C;
loc_822EF4DC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822EF4E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef4e4
	if (!ctx.cr6.eq) goto loc_822EF4E4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x823e9308
	ctx.lr = 0x822EF50C;
	sub_823E9308(ctx, base);
	// lwz r29,288(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822ef660
	if (ctx.cr6.eq) goto loc_822EF660;
	// lis r28,-31921
	ctx.r28.s64 = -2091974656;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r27,r28,8832
	ctx.r27.s64 = ctx.r28.s64 + 8832;
	// addi r5,r9,4984
	ctx.r5.s64 = ctx.r9.s64 + 4984;
	// subf r4,r30,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lfd f0,8832(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8832);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,16(r27)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f0,8(r27)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fmul f10,f13,f30
	ctx.f10.f64 = ctx.f13.f64 * ctx.f30.f64;
	// fmul f9,f12,f30
	ctx.f9.f64 = ctx.f12.f64 * ctx.f30.f64;
	// fmul f8,f11,f30
	ctx.f8.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fdiv f1,f10,f31
	ctx.f1.f64 = ctx.f10.f64 / ctx.f31.f64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// fdiv f3,f9,f31
	ctx.f3.f64 = ctx.f9.f64 / ctx.f31.f64;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// fdiv f2,f8,f31
	ctx.f2.f64 = ctx.f8.f64 / ctx.f31.f64;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x82637620
	ctx.lr = 0x822EF584;
	sub_82637620(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r10,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r10.u64);
	// std r10,8832(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8832, ctx.r10.u64);
	// std r11,16(r27)
	PPC_STORE_U64(ctx.r27.u32 + 16, ctx.r11.u64);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822EF5A0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef5a0
	if (!ctx.cr6.eq) goto loc_822EF5A0;
	// lfd f0,496(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 496);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lfd f13,504(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f10,512(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 512);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f7,520(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 520);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f4,536(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfd f9,528(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r5,r8,4864
	ctx.r5.s64 = ctx.r8.s64 + 4864;
	// fmul f2,f12,f30
	ctx.f2.f64 = ctx.f12.f64 * ctx.f30.f64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmul f1,f11,f30
	ctx.f1.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fmul f0,f8,f30
	ctx.f0.f64 = ctx.f8.f64 * ctx.f30.f64;
	// fmul f12,f5,f30
	ctx.f12.f64 = ctx.f5.f64 * ctx.f30.f64;
	// fmul f11,f3,f30
	ctx.f11.f64 = ctx.f3.f64 * ctx.f30.f64;
	// fmul f13,f6,f30
	ctx.f13.f64 = ctx.f6.f64 * ctx.f30.f64;
	// fdiv f3,f2,f31
	ctx.f3.f64 = ctx.f2.f64 / ctx.f31.f64;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// fdiv f2,f1,f31
	ctx.f2.f64 = ctx.f1.f64 / ctx.f31.f64;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// fdiv f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 / ctx.f31.f64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// fdiv f4,f12,f31
	ctx.f4.f64 = ctx.f12.f64 / ctx.f31.f64;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// fdiv f6,f11,f31
	ctx.f6.f64 = ctx.f11.f64 / ctx.f31.f64;
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// fdiv f5,f13,f31
	ctx.f5.f64 = ctx.f13.f64 / ctx.f31.f64;
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f5,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f5.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// bl 0x82637620
	ctx.lr = 0x822EF660;
	sub_82637620(ctx, base);
loc_822EF660:
	// lwz r11,-26068(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -26068);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ef6c8
	if (!ctx.cr6.eq) goto loc_822EF6C8;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822EF674:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ef674
	if (!ctx.cr6.eq) goto loc_822EF674;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lbz r10,-400(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + -400);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// beq cr6,0x822ef6a4
	if (ctx.cr6.eq) goto loc_822EF6A4;
	// addi r7,r23,-400
	ctx.r7.s64 = ctx.r23.s64 + -400;
	// b 0x822ef6ac
	goto loc_822EF6AC;
loc_822EF6A4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r10,28368
	ctx.r7.s64 = ctx.r10.s64 + 28368;
loc_822EF6AC:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,-436(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + -436);
	// addi r5,r8,4824
	ctx.r5.s64 = ctx.r8.s64 + 4824;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82637620
	ctx.lr = 0x822EF6C8;
	sub_82637620(ctx, base);
loc_822EF6C8:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822EF6D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ef6d0
	if (!ctx.cr6.eq) goto loc_822EF6D0;
	// lis r10,-31991
	ctx.r10.s64 = -2096562176;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,18792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18792);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ef708
	if (ctx.cr6.eq) goto loc_822EF708;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r11,4812
	ctx.r9.s64 = ctx.r11.s64 + 4812;
	// b 0x822ef70c
	goto loc_822EF70C;
loc_822EF708:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_822EF70C:
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// lwz r11,18788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ef728
	if (ctx.cr6.eq) goto loc_822EF728;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r8,r11,4800
	ctx.r8.s64 = ctx.r11.s64 + 4800;
	// b 0x822ef730
	goto loc_822EF730;
loc_822EF728:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r11,15368
	ctx.r8.s64 = ctx.r11.s64 + 15368;
loc_822EF730:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r5,r5,4748
	ctx.r5.s64 = ctx.r5.s64 + 4748;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r7,4380(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4380);
	// lwz r6,4392(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4392);
	// bl 0x82637620
	ctx.lr = 0x822EF758;
	sub_82637620(ctx, base);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822ef7ac
	if (ctx.cr6.eq) goto loc_822EF7AC;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822EF76C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef76c
	if (!ctx.cr6.eq) goto loc_822EF76C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lwz r8,8(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r7,4(r15)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// addi r5,r5,4720
	ctx.r5.s64 = ctx.r5.s64 + 4720;
	// lwz r6,0(r15)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82637620
	ctx.lr = 0x822EF7AC;
	sub_82637620(ctx, base);
loc_822EF7AC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822ef854
	if (!ctx.cr6.eq) goto loc_822EF854;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x823f10a0
	ctx.lr = 0x822EF7C8;
	sub_823F10A0(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822EF7D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef7d0
	if (!ctx.cr6.eq) goto loc_822EF7D0;
	// lfd f0,344(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,288(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lwz r6,352(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r5,r5,4656
	ctx.r5.s64 = ctx.r5.s64 + 4656;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// fmul f1,f13,f30
	ctx.f1.f64 = ctx.f13.f64 * ctx.f30.f64;
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x82637620
	ctx.lr = 0x822EF820;
	sub_82637620(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822EF828:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef828
	if (!ctx.cr6.eq) goto loc_822EF828;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822f79f0
	ctx.lr = 0x822EF854;
	sub_822F79F0(ctx, base);
loc_822EF854:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822ef8d0
	if (!ctx.cr6.eq) goto loc_822EF8D0;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822EF868:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef868
	if (!ctx.cr6.eq) goto loc_822EF868;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r5,r8,4652
	ctx.r5.s64 = ctx.r8.s64 + 4652;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// bl 0x82637620
	ctx.lr = 0x822EF89C;
	sub_82637620(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822EF8A4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef8a4
	if (!ctx.cr6.eq) goto loc_822EF8A4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822f79f0
	ctx.lr = 0x822EF8D0;
	sub_822F79F0(ctx, base);
loc_822EF8D0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822ef940
	if (!ctx.cr6.eq) goto loc_822EF940;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822EF8E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef8e4
	if (!ctx.cr6.eq) goto loc_822EF8E4;
	// lwz r8,360(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ef918
	if (!ctx.cr6.eq) goto loc_822EF918;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r9,29468
	ctx.r8.s64 = ctx.r9.s64 + 29468;
loc_822EF918:
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// subf r4,r11,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r11.s64;
	// addi r5,r6,4596
	ctx.r5.s64 = ctx.r6.s64 + 4596;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,8324(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// lwz r6,8320(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8320);
	// bl 0x82637620
	ctx.lr = 0x822EF940;
	sub_82637620(ctx, base);
loc_822EF940:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822efbb4
	if (!ctx.cr6.eq) goto loc_822EFBB4;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822EF954:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ef954
	if (!ctx.cr6.eq) goto loc_822EF954;
	// lfd f0,464(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f11,560(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfd f1,344(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fcfid f11,f1
	ctx.f11.f64 = double(ctx.f1.s64);
	// lfd f13,488(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 488);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lfd f9,544(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 544);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lfd f7,480(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 480);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f2,472(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// lfd f9,552(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 552);
	// fcfid f3,f7
	ctx.f3.f64 = double(ctx.f7.s64);
	// lfd f13,416(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// fcfid f29,f9
	ctx.f29.f64 = double(ctx.f9.s64);
	// fmul f1,f12,f30
	ctx.f1.f64 = ctx.f12.f64 * ctx.f30.f64;
	// stfd f1,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f1.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// fcfid f0,f2
	ctx.f0.f64 = double(ctx.f2.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r5,r8,4440
	ctx.r5.s64 = ctx.r8.s64 + 4440;
	// fmul f7,f8,f30
	ctx.f7.f64 = ctx.f8.f64 * ctx.f30.f64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmul f8,f11,f30
	ctx.f8.f64 = ctx.f11.f64 * ctx.f30.f64;
	// lwz r9,412(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r8,408(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// stfd f7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f7.u64);
	// fmul f5,f6,f30
	ctx.f5.f64 = ctx.f6.f64 * ctx.f30.f64;
	// lwz r7,404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// fmul f4,f10,f30
	ctx.f4.f64 = ctx.f10.f64 * ctx.f30.f64;
	// lwz r6,400(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// fmul f3,f3,f30
	ctx.f3.f64 = ctx.f3.f64 * ctx.f30.f64;
	// stfd f4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f4.u64);
	// fmul f6,f29,f30
	ctx.f6.f64 = ctx.f29.f64 * ctx.f30.f64;
	// stfd f5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f5.u64);
	// stfd f3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// fmul f2,f0,f30
	ctx.f2.f64 = ctx.f0.f64 * ctx.f30.f64;
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// fmul f9,f13,f30
	ctx.f9.f64 = ctx.f13.f64 * ctx.f30.f64;
	// stfd f8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f8.u64);
	// stfd f9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f9.u64);
	// stfd f6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f6.u64);
	// bl 0x82637620
	ctx.lr = 0x822EFA2C;
	sub_82637620(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822efa3c
	if (ctx.cr6.eq) goto loc_822EFA3C;
	// fdiv f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64 / ctx.f31.f64;
	// b 0x822efa40
	goto loc_822EFA40;
loc_822EFA3C:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_822EFA40:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822EFA48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822efa48
	if (!ctx.cr6.eq) goto loc_822EFA48;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r7,r9,8896
	ctx.r7.s64 = ctx.r9.s64 + 8896;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r5,r5,4296
	ctx.r5.s64 = ctx.r5.s64 + 4296;
	// lfd f13,40(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 40);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f12,32(r7)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + 32);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f9,24(r7)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f8,16(r7)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f6,8(r7)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// lfd f2,8896(r9)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8896);
	// fcfid f1,f6
	ctx.f1.f64 = double(ctx.f6.s64);
	// fcfid f13,f2
	ctx.f13.f64 = double(ctx.f2.s64);
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// fmul f6,f11,f0
	ctx.f6.f64 = ctx.f11.f64 * ctx.f0.f64;
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// fmul f5,f10,f0
	ctx.f5.f64 = ctx.f10.f64 * ctx.f0.f64;
	// stfd f5,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f5.u64);
	// fmul f4,f7,f0
	ctx.f4.f64 = ctx.f7.f64 * ctx.f0.f64;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// fmul f3,f3,f0
	ctx.f3.f64 = ctx.f3.f64 * ctx.f0.f64;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// fmul f2,f1,f0
	ctx.f2.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82637620
	ctx.lr = 0x822EFAF8;
	sub_82637620(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822EFB00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822efb00
	if (!ctx.cr6.eq) goto loc_822EFB00;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x822efb60
	if (ctx.cr6.eq) goto loc_822EFB60;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r9,r9,8960
	ctx.r9.s64 = ctx.r9.s64 + 8960;
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,16(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// fmul f12,f13,f30
	ctx.f12.f64 = ctx.f13.f64 * ctx.f30.f64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,8(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fdiv f3,f12,f31
	ctx.f3.f64 = ctx.f12.f64 / ctx.f31.f64;
	// fmul f12,f13,f30
	ctx.f12.f64 = ctx.f13.f64 * ctx.f30.f64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fdiv f2,f12,f31
	ctx.f2.f64 = ctx.f12.f64 / ctx.f31.f64;
	// fmul f12,f13,f30
	ctx.f12.f64 = ctx.f13.f64 * ctx.f30.f64;
	// fdiv f1,f12,f31
	ctx.f1.f64 = ctx.f12.f64 / ctx.f31.f64;
	// b 0x822efb6c
	goto loc_822EFB6C;
loc_822EFB60:
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f25.f64;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
loc_822EFB6C:
	// stfd f2,56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfd f3,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// addi r7,r9,8864
	ctx.r7.s64 = ctx.r9.s64 + 8864;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addi r5,r5,4200
	ctx.r5.s64 = ctx.r5.s64 + 4200;
	// lwz r30,8864(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8864);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82637620
	ctx.lr = 0x822EFBB4;
	sub_82637620(ctx, base);
loc_822EFBB4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823def88
	ctx.lr = 0x822EFBBC;
	sub_823DEF88(ctx, base);
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x8259cee8
	ctx.lr = 0x822EFBC4;
	sub_8259CEE8(ctx, base);
	// lwz r28,368(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// li r29,0
	ctx.r29.s64 = 0;
loc_822EFBCC:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8259cee8
	ctx.lr = 0x822EFBD4;
	sub_8259CEE8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
	// bl 0x825a2ec8
	ctx.lr = 0x822EFBF4;
	sub_825A2EC8(ctx, base);
	// lwz r10,328(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r9,320(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,364(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r6,324(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r10,3964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3964, ctx.r10.u32);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// stw r9,3968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3968, ctx.r9.u32);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// stw r8,704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 704, ctx.r8.u32);
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// stw r7,2476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2476, ctx.r7.u32);
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// stw r6,-19000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19000, ctx.r6.u32);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// stw r5,3976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3976, ctx.r5.u32);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82635a78
	ctx.lr = 0x822EFC4C;
	__restfpr_25(ctx, base);
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EE8F0) {
	__imp__sub_822EE8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822EFC58;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a2c28
	ctx.lr = 0x822EFC78;
	sub_825A2C28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r31,r11,3184
	ctx.r31.s64 = ctx.r11.s64 + 3184;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r4,r11,5712
	ctx.r4.s64 = ctx.r11.s64 + 5712;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826352a8
	ctx.lr = 0x822EFCCC;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x822efcf4
	if (!ctx.cr6.lt) goto loc_822EFCF4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,5640
	ctx.r5.s64 = ctx.r11.s64 + 5640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82637620
	ctx.lr = 0x822EFCE8;
	sub_82637620(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822EFCF4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822efd48
	if (ctx.cr6.eq) goto loc_822EFD48;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
loc_822EFD0C:
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822efd48
	if (!ctx.cr6.lt) goto loc_822EFD48;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 120, ctx.xer);
	// bne cr6,0x822efd30
	if (!ctx.cr6.eq) goto loc_822EFD30;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x822efd34
	goto loc_822EFD34;
loc_822EFD30:
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
loc_822EFD34:
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822efd0c
	if (!ctx.cr6.eq) goto loc_822EFD0C;
loc_822EFD48:
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,-5904
	ctx.r5.s64 = ctx.r11.s64 + -5904;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a36c0
	ctx.lr = 0x822EFD74;
	sub_825A36C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822efda0
	if (!ctx.cr6.eq) goto loc_822EFDA0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,5620
	ctx.r5.s64 = ctx.r11.s64 + 5620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82637620
	ctx.lr = 0x822EFD94;
	sub_82637620(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822EFDA0:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822efdb8
	if (!ctx.cr6.eq) goto loc_822EFDB8;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x822efdbc
	if (ctx.cr6.gt) goto loc_822EFDBC;
loc_822EFDB8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822EFDBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822907f8
	ctx.lr = 0x822EFDC4;
	sub_822907F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3680
	ctx.lr = 0x822EFDCC;
	sub_825A3680(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82290cb8
	ctx.lr = 0x822EFDD8;
	sub_82290CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3638
	ctx.lr = 0x822EFDE0;
	sub_825A3638(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,5608
	ctx.r3.s64 = ctx.r11.s64 + 5608;
	// bl 0x822ebbc8
	ctx.lr = 0x822EFDF0;
	sub_822EBBC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFC50) {
	__imp__sub_822EFC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EFDFC) {
	__imp__sub_822EFDFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822EFE08;
	__savegprlr_29(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// li r5,1
	ctx.r5.s64 = 1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r7,r11,-255
	ctx.r7.s64 = ctx.r11.s64 + -255;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// subfe r4,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lbz r7,5(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// addi r3,r10,-255
	ctx.r3.s64 = ctx.r10.s64 + -255;
	// subfe r31,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r30,r9,-255
	ctx.r30.s64 = ctx.r9.s64 + -255;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// and r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 & ctx.r6.u64;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r29,r11,-255
	ctx.r29.s64 = ctx.r11.s64 + -255;
	// subfe r4,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// and r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 & ctx.r5.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r31,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r31.s64 = ctx.r29.s64 + -1;
	// addi r30,r8,-255
	ctx.r30.s64 = ctx.r8.s64 + -255;
	// subfe r6,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// and r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 & ctx.r10.u64;
	// subfe r10,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
	// and r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 & ctx.r5.u64;
	// addic r8,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// addi r11,r7,-255
	ctx.r11.s64 = ctx.r7.s64 + -255;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// and r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 & ctx.r4.u64;
	// and r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 & ctx.r5.u64;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// bne cr6,0x822efee4
	if (!ctx.cr6.eq) goto loc_822EFEE4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x822efee8
	if (ctx.cr6.eq) goto loc_822EFEE8;
loc_822EFEE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EFEE8:
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFE00) {
	__imp__sub_822EFE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EFEEC) {
	__imp__sub_822EFEEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822EFEF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EFF14:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822eff14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EFF14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825c5ed0
	ctx.lr = 0x822EFF28;
	sub_825C5ED0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822eff54
	if (!ctx.cr6.eq) goto loc_822EFF54;
loc_822EFF30:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822f004c
	if (!ctx.cr6.lt) goto loc_822F004C;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x825a32b8
	ctx.lr = 0x822EFF40;
	sub_825A32B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,50
	ctx.r30.s64 = ctx.r30.s64 + 50;
	// bl 0x825c5ed0
	ctx.lr = 0x822EFF4C;
	sub_825C5ED0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822eff30
	if (ctx.cr6.eq) goto loc_822EFF30;
loc_822EFF54:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,89
	ctx.r11.s64 = ctx.r1.s64 + 89;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822EFF64:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822eff64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EFF64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r7,r11,-255
	ctx.r7.s64 = ctx.r11.s64 + -255;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addic r4,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// addi r4,r10,-255
	ctx.r4.s64 = ctx.r10.s64 + -255;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r9,-255
	ctx.r31.s64 = ctx.r9.s64 + -255;
	// subfe r30,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// and r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 & ctx.r6.u64;
	// subfe r29,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r4,r11,-255
	ctx.r4.s64 = ctx.r11.s64 + -255;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// subfe r5,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r31,r8,-255
	ctx.r31.s64 = ctx.r8.s64 + -255;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 & ctx.r6.u64;
	// subfe r6,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 & ctx.r3.u64;
	// subfe r8,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// addic r4,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// and r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 & ctx.r3.u64;
	// addi r9,r7,-255
	ctx.r9.s64 = ctx.r7.s64 + -255;
	// subfe r7,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 & ctx.r3.u64;
	// addic r5,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// and r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ctx.r3.u64;
	// and r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 & ctx.r11.u64;
	// subfe r8,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// bne cr6,0x822f004c
	if (!ctx.cr6.eq) goto loc_822F004C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x822f0050
	if (ctx.cr6.eq) goto loc_822F0050;
loc_822F004C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F0050:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFEF0) {
	__imp__sub_822EFEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822F0060;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,5868
	ctx.r26.s64 = ctx.r11.s64 + 5868;
loc_822F007C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x822f00d4
	if (!ctx.cr6.lt) goto loc_822F00D4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,74
	ctx.r5.s64 = 74;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822ebf30
	ctx.lr = 0x822F0094;
	sub_822EBF30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f00a8
	if (!ctx.cr6.lt) goto loc_822F00A8;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x825a32b8
	ctx.lr = 0x822F00A8;
	sub_825A32B8(ctx, base);
loc_822F00A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x822f007c
	if (ctx.cr6.lt) goto loc_822F007C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x822f00d4
	if (!ctx.cr6.lt) goto loc_822F00D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,74
	ctx.r5.s64 = 74;
	// addi r3,r11,5852
	ctx.r3.s64 = ctx.r11.s64 + 5852;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822ebf30
	ctx.lr = 0x822F00D0;
	sub_822EBF30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822F00D4:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F00E4:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822f00e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F00E4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmpwi cr6,r30,66
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 66, ctx.xer);
	// addi r29,r11,5812
	ctx.r29.s64 = ctx.r11.s64 + 5812;
	// bne cr6,0x822f0168
	if (!ctx.cr6.eq) goto loc_822F0168;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_822F0108:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f0128
	if (!ctx.cr0.eq) goto loc_822F0128;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822f0108
	if (!ctx.cr6.eq) goto loc_822F0108;
loc_822F0128:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f01c8
	if (!ctx.cr6.eq) goto loc_822F01C8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x822F0140;
	sub_82635430(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,155
	ctx.r11.s64 = ctx.r1.s64 + 155;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F0150:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822f0150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0150;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,6088
	ctx.r31.s64 = ctx.r11.s64 + 6088;
	// b 0x822f0254
	goto loc_822F0254;
loc_822F0168:
	// cmpwi cr6,r30,56
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 56, ctx.xer);
	// bne cr6,0x822f01c8
	if (!ctx.cr6.eq) goto loc_822F01C8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x822F0180;
	sub_82635430(ctx, base);
	// li r4,3000
	ctx.r4.s64 = 3000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822efef0
	ctx.lr = 0x822F018C;
	sub_822EFEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f01bc
	if (ctx.cr6.eq) goto loc_822F01BC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F01A4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822f01a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F01A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,6072
	ctx.r31.s64 = ctx.r11.s64 + 6072;
	// b 0x822f01fc
	goto loc_822F01FC;
loc_822F01BC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,6024
	ctx.r31.s64 = ctx.r11.s64 + 6024;
	// b 0x822f0254
	goto loc_822F0254;
loc_822F01C8:
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826478e4
	ctx.lr = 0x822F01D4;
	__imp__XeCryptRandom(ctx, base);
	// li r4,3000
	ctx.r4.s64 = 3000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822efef0
	ctx.lr = 0x822F01E0;
	sub_822EFEF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x822f01f4
	if (!ctx.cr6.lt) goto loc_822F01F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,6016
	ctx.r31.s64 = ctx.r11.s64 + 6016;
	// b 0x822f01fc
	goto loc_822F01FC;
loc_822F01F4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,5988
	ctx.r31.s64 = ctx.r11.s64 + 5988;
loc_822F01FC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82635430
	ctx.lr = 0x822F020C;
	sub_82635430(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,155
	ctx.r10.s64 = ctx.r1.s64 + 155;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F0224:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822f0224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0224;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,66
	ctx.r5.s64 = 66;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822ebfa8
	ctx.lr = 0x822F0240;
	sub_822EBFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f0254
	if (ctx.cr6.eq) goto loc_822F0254;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,5920
	ctx.r3.s64 = ctx.r11.s64 + 5920;
	// bl 0x822ebbc8
	ctx.lr = 0x822F0254;
	sub_822EBBC8(ctx, base);
loc_822F0254:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822efe00
	ctx.lr = 0x822F025C;
	sub_822EFE00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f0270
	if (ctx.cr6.eq) goto loc_822F0270;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,9896
	ctx.r5.s64 = ctx.r11.s64 + 9896;
	// b 0x822f0278
	goto loc_822F0278;
loc_822F0270:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,5912
	ctx.r5.s64 = ctx.r11.s64 + 5912;
loc_822F0278:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,5880
	ctx.r3.s64 = ctx.r11.s64 + 5880;
	// bl 0x822ebbc8
	ctx.lr = 0x822F0288;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0058) {
	__imp__sub_822F0058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-26060
	ctx.r11.s64 = ctx.r11.s64 + -26060;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_822F02A4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822f02c8
	if (!ctx.cr6.eq) goto loc_822F02C8;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822f02a4
	if (!ctx.cr0.eq) goto loc_822F02A4;
	// b 0x822f02d0
	goto loc_822F02D0;
loc_822F02C8:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822F02D0:
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822F02DC:
	// db16cyc 
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_822F02E4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822f0308
	if (!ctx.cr6.eq) goto loc_822F0308;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822f02e4
	if (!ctx.cr0.eq) goto loc_822F02E4;
	// b 0x822f0310
	goto loc_822F0310;
loc_822F0308:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822F0310:
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f02dc
	if (!ctx.cr6.eq) goto loc_822F02DC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0290) {
	__imp__sub_822F0290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0320) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-26060(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26060, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0320) {
	__imp__sub_822F0320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0334) {
	__imp__sub_822F0334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed818
	ctx.lr = 0x822F034C;
	sub_822ED818(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0338) {
	__imp__sub_822F0338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0364) {
	__imp__sub_822F0364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0368) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed818
	ctx.lr = 0x822F0384;
	sub_822ED818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f03a4
	if (ctx.cr6.eq) goto loc_822F03A4;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_822F03A4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed700
	ctx.lr = 0x822F03B4;
	sub_822ED700(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

PPC_WEAK_FUNC(sub_822F0368) {
	__imp__sub_822F0368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F03D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822F03D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,21
	ctx.r11.s64 = 21;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_822F0408:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822f0408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0408;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// beq cr6,0x822f0420
	if (ctx.cr6.eq) goto loc_822F0420;
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
loc_822F0420:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d6a38
	ctx.lr = 0x822F0428;
	sub_822D6A38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f049c
	if (!ctx.cr6.eq) goto loc_822F049C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// addi r4,r10,-3692
	ctx.r4.s64 = ctx.r10.s64 + -3692;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r3,r9,19556
	ctx.r3.s64 = ctx.r9.s64 + 19556;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822d79a8
	ctx.lr = 0x822F0478;
	sub_822D79A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f04a8
	if (ctx.cr6.eq) goto loc_822F04A8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,6096
	ctx.r3.s64 = ctx.r11.s64 + 6096;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822F0494;
	sub_822EBBC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7e48
	ctx.lr = 0x822F049C;
	sub_822D7E48(ctx, base);
loc_822F049C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822F04A8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822f04e0
	if (ctx.cr6.eq) goto loc_822F04E0;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822f04e0
	if (ctx.cr6.eq) goto loc_822F04E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82637620
	ctx.lr = 0x822F04D8;
	sub_82637620(ctx, base);
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// stb r30,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r30.u8);
loc_822F04E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d7e48
	ctx.lr = 0x822F04E8;
	sub_822D7E48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F03D0) {
	__imp__sub_822F03D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F04F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F04F4) {
	__imp__sub_822F04F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F04F8) {
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
	// bl 0x822ebdb0
	ctx.lr = 0x822F050C;
	sub_822EBDB0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x822f0560
	if (!ctx.cr6.lt) goto loc_822F0560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a3550
	ctx.lr = 0x822F051C;
	sub_825A3550(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// lis r10,694
	ctx.r10.s64 = 45481984;
	// ori r9,r11,38528
	ctx.r9.u64 = ctx.r11.u64 | 38528;
	// ori r8,r10,4241
	ctx.r8.u64 = ctx.r10.u64 | 4241;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// rldicr r7,r8,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// divdu r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 / ctx.r9.u64;
	// subf r31,r7,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r7.s64;
	// bl 0x822ebda0
	ctx.lr = 0x822F0550;
	sub_822EBDA0(ctx, base);
	// cmpd cr6,r31,r3
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r3.s64, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x822f0560
	if (!ctx.cr6.lt) goto loc_822F0560;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822F0560:
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

PPC_WEAK_FUNC(sub_822F04F8) {
	__imp__sub_822F04F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0574) {
	__imp__sub_822F0574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8796
	ctx.r3.s64 = ctx.r11.s64 + 8796;
	// b 0x822ebbc8
	sub_822EBBC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0578) {
	__imp__sub_822F0578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,5816
	ctx.r3.s64 = ctx.r11.s64 + 5816;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0588) {
	__imp__sub_822F0588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0594) {
	__imp__sub_822F0594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0598) {
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
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,-25992
	ctx.r31.s64 = ctx.r11.s64 + -25992;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_822F05BC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822f05e0
	if (!ctx.cr6.eq) goto loc_822F05E0;
	// stwcx. r7,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822f05bc
	if (!ctx.cr0.eq) goto loc_822F05BC;
	// b 0x822f05e8
	goto loc_822F05E8;
loc_822F05E0:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822F05E8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f0634
	if (!ctx.cr6.eq) goto loc_822F0634;
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-26056
	ctx.r11.s64 = ctx.r11.s64 + -26056;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F060C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822f060c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F060C;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_822F061C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822f061c
	if (!ctx.cr0.eq) goto loc_822F061C;
loc_822F0634:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822f0654
	if (ctx.cr6.eq) goto loc_822F0654;
loc_822F0640:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a32b8
	ctx.lr = 0x822F0648;
	sub_825A32B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822f0640
	if (!ctx.cr6.eq) goto loc_822F0640;
loc_822F0654:
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

PPC_WEAK_FUNC(sub_822F0598) {
	__imp__sub_822F0598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822F0670;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x822f0598
	ctx.lr = 0x822F0698;
	sub_822F0598(ctx, base);
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-26056
	ctx.r29.s64 = ctx.r11.s64 + -26056;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_822F06AC:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822f0708
	if (ctx.cr6.eq) goto loc_822F0708;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822f06f4
	if (ctx.cr6.eq) goto loc_822F06F4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822f06fc
	if (ctx.cr6.eq) goto loc_822F06FC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822f0704
	if (ctx.cr6.eq) goto loc_822F0704;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r29,68
	ctx.r10.s64 = ctx.r29.s64 + 68;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822f06ac
	if (ctx.cr6.lt) goto loc_822F06AC;
	// b 0x822f0708
	goto loc_822F0708;
loc_822F06F4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x822f0708
	goto loc_822F0708;
loc_822F06FC:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x822f0708
	goto loc_822F0708;
loc_822F0704:
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
loc_822F0708:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// beq cr6,0x822f07b4
	if (ctx.cr6.eq) goto loc_822F07B4;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x825c5bd8
	ctx.lr = 0x822F0720;
	sub_825C5BD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822f07b4
	if (ctx.cr6.eq) goto loc_822F07B4;
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x825c5c00
	ctx.lr = 0x822F073C;
	sub_825C5C00(ctx, base);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,22529
	ctx.r5.s64 = 22529;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822F075C;
	sub_825C5C18(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,4098
	ctx.r5.s64 = 4098;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822F0778;
	sub_825C5C18(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// sth r27,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r27.u16);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x825c5c70
	ctx.lr = 0x822F07A4;
	sub_825C5C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822f07c0
	if (ctx.cr6.eq) goto loc_822F07C0;
	// bl 0x825c5bf0
	ctx.lr = 0x822F07B4;
	sub_825C5BF0(ctx, base);
loc_822F07B4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822F07C0:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825c5c58
	ctx.lr = 0x822F07CC;
	sub_825C5C58(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822f07dc
	if (ctx.cr6.eq) goto loc_822F07DC;
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// sth r11,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r11.u16);
loc_822F07DC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r31,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0668) {
	__imp__sub_822F0668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F07F0) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822f0598
	ctx.lr = 0x822F0810;
	sub_822F0598(ctx, base);
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-26056
	ctx.r6.s64 = ctx.r11.s64 + -26056;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_822F0824:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x822f0888
	if (ctx.cr6.eq) goto loc_822F0888;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f085c
	if (ctx.cr6.eq) goto loc_822F085C;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
loc_822F0840:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822f085c
	if (ctx.cr6.eq) goto loc_822F085C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822f0840
	if (ctx.cr6.lt) goto loc_822F0840;
loc_822F085C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822f0884
	if (!ctx.cr6.eq) goto loc_822F0884;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// bge cr6,0x822f0884
	if (!ctx.cr6.lt) goto loc_822F0884;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_822F0884:
	// li r31,1
	ctx.r31.s64 = 1;
loc_822F0888:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r6,64
	ctx.r11.s64 = ctx.r6.s64 + 64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f0824
	if (ctx.cr6.lt) goto loc_822F0824;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822f08bc
	if (!ctx.cr6.eq) goto loc_822F08BC;
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// rlwinm r10,r30,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// addme r9,r10
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bl 0x825a32b8
	ctx.lr = 0x822F08B4;
	sub_825A32B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822f08f0
	goto loc_822F08F0;
loc_822F08BC:
	// mulli r11,r30,1000
	ctx.r11.s64 = ctx.r30.s64 * 1000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825c5cc8
	ctx.lr = 0x822F08E4;
	sub_825C5CC8(ctx, base);
	// neg r9,r3
	ctx.r9.s64 = -ctx.r3.s64;
	// andc r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// rlwinm r3,r8,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_822F08F0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F07F0) {
	__imp__sub_822F07F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0908) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0950
	if (ctx.cr6.lt) goto loc_822F0950;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x822f0950
	if (!ctx.cr6.lt) goto loc_822F0950;
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-26056
	ctx.r30.s64 = ctx.r11.s64 + -26056;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822f0950
	if (ctx.cr6.eq) goto loc_822F0950;
	// bl 0x825c5bf0
	ctx.lr = 0x822F0948;
	sub_825C5BF0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_822F0950:
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

PPC_WEAK_FUNC(sub_822F0908) {
	__imp__sub_822F0908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0968) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f09ec
	if (ctx.cr6.lt) goto loc_822F09EC;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x822f09ec
	if (!ctx.cr6.lt) goto loc_822F09EC;
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,-26056
	ctx.r7.s64 = ctx.r11.s64 + -26056;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822f09ec
	if (ctx.cr6.eq) goto loc_822F09EC;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x825c5d38
	ctx.lr = 0x822F09E4;
	sub_825C5D38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822f09f0
	if (!ctx.cr6.eq) goto loc_822F09F0;
loc_822F09EC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822F09F0:
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

PPC_WEAK_FUNC(sub_822F0968) {
	__imp__sub_822F0968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0A08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0aac
	if (ctx.cr6.lt) goto loc_822F0AAC;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x822f0aac
	if (!ctx.cr6.lt) goto loc_822F0AAC;
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-26056
	ctx.r9.s64 = ctx.r11.s64 + -26056;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822f0aac
	if (ctx.cr6.eq) goto loc_822F0AAC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825c5d00
	ctx.lr = 0x822F0A6C;
	sub_825C5D00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822f0a88
	if (!ctx.cr6.eq) goto loc_822F0A88;
	// bl 0x825c5db8
	ctx.lr = 0x822F0A78;
	sub_825C5DB8(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// bne cr6,0x822f0aac
	if (!ctx.cr6.eq) goto loc_822F0AAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822f0ab0
	goto loc_822F0AB0;
loc_822F0A88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822f0a98
	if (ctx.cr6.eq) goto loc_822F0A98;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822F0A98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822f0ab0
	if (ctx.cr6.eq) goto loc_822F0AB0;
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x822f0ab0
	goto loc_822F0AB0;
loc_822F0AAC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822F0AB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0A08) {
	__imp__sub_822F0A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0AC8) {
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
	// bl 0x825c5ed0
	ctx.lr = 0x822F0AE4;
	sub_825C5ED0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f0b18
	if (ctx.cr6.eq) goto loc_822F0B18;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f0b18
	if (!ctx.cr6.eq) goto loc_822F0B18;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_822F0B18:
	// li r3,-1
	ctx.r3.s64 = -1;
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

PPC_WEAK_FUNC(sub_822F0AC8) {
	__imp__sub_822F0AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B30) {
	PPC_FUNC_PROLOGUE();
	// li r5,5000
	ctx.r5.s64 = 5000;
	// b 0x822ec348
	sub_822EC348(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0B30) {
	__imp__sub_822F0B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B38) {
	PPC_FUNC_PROLOGUE();
	// b 0x822eabf0
	sub_822EABF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0B38) {
	__imp__sub_822F0B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0B3C) {
	__imp__sub_822F0B3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B40) {
	PPC_FUNC_PROLOGUE();
	// b 0x826478e4
	__imp__XeCryptRandom(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0B40) {
	__imp__sub_822F0B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0B44) {
	__imp__sub_822F0B44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// stw r3,-25988(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25988, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0B48) {
	__imp__sub_822F0B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0B54) {
	__imp__sub_822F0B54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// lwz r10,-25988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25988);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f0b74
	if (ctx.cr6.eq) goto loc_822F0B74;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_822F0B74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8796
	ctx.r3.s64 = ctx.r11.s64 + 8796;
	// b 0x822ebbc8
	sub_822EBBC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0B58) {
	__imp__sub_822F0B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0B84) {
	__imp__sub_822F0B84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-25984
	ctx.r11.s64 = ctx.r11.s64 + -25984;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_822F0B9C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822f0bc0
	if (!ctx.cr6.eq) goto loc_822F0BC0;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822f0b9c
	if (!ctx.cr0.eq) goto loc_822F0B9C;
	// b 0x822f0bc8
	goto loc_822F0BC8;
loc_822F0BC0:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822F0BC8:
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822F0BD4:
	// db16cyc 
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_822F0BDC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822f0c00
	if (!ctx.cr6.eq) goto loc_822F0C00;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822f0bdc
	if (!ctx.cr0.eq) goto loc_822F0BDC;
	// b 0x822f0c08
	goto loc_822F0C08;
loc_822F0C00:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822F0C08:
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f0bd4
	if (!ctx.cr6.eq) goto loc_822F0BD4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0B88) {
	__imp__sub_822F0B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0C18) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-25984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25984, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0C18) {
	__imp__sub_822F0C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0C2C) {
	__imp__sub_822F0C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0C30) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0C30) {
	__imp__sub_822F0C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed818
	ctx.lr = 0x822F0C4C;
	sub_822ED818(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0C38) {
	__imp__sub_822F0C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0C64) {
	__imp__sub_822F0C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0C68) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed818
	ctx.lr = 0x822F0C84;
	sub_822ED818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f0ca4
	if (ctx.cr6.eq) goto loc_822F0CA4;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_822F0CA4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ed700
	ctx.lr = 0x822F0CB4;
	sub_822ED700(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

PPC_WEAK_FUNC(sub_822F0C68) {
	__imp__sub_822F0C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0CD0) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82645d60
	ctx.lr = 0x822F0CE8;
	sub_82645D60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0CD0) {
	__imp__sub_822F0CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0CF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82645f30
	sub_82645F30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0CF8) {
	__imp__sub_822F0CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0CFC) {
	__imp__sub_822F0CFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0D00) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,6252
	ctx.r5.s64 = ctx.r11.s64 + 6252;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82637620
	ctx.lr = 0x822F0D2C;
	sub_82637620(ctx, base);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822f0d68
	if (ctx.cr6.eq) goto loc_822F0D68;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,92
	ctx.r9.s64 = 92;
loc_822F0D4C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,47
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 47, ctx.xer);
	// bne cr6,0x822f0d5c
	if (!ctx.cr6.eq) goto loc_822F0D5C;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_822F0D5C:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f0d4c
	if (!ctx.cr6.eq) goto loc_822F0D4C;
loc_822F0D68:
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

PPC_WEAK_FUNC(sub_822F0D00) {
	__imp__sub_822F0D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0D80) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2348
	ctx.r3.s64 = ctx.r11.s64 + 2348;
	// bl 0x825a3448
	ctx.lr = 0x822F0D9C;
	sub_825A3448(ctx, base);
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

PPC_WEAK_FUNC(sub_822F0D80) {
	__imp__sub_822F0D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822f0d00
	ctx.lr = 0x822F0DCC;
	sub_822F0D00(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a3740
	ctx.lr = 0x822F0DDC;
	sub_825A3740(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f0e10
	if (ctx.cr6.eq) goto loc_822F0E10;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f0e10
	if (!ctx.cr6.eq) goto loc_822F0E10;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822F0E10:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0DB0) {
	__imp__sub_822F0DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0E24) {
	__imp__sub_822F0E24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822F0E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822f0d00
	ctx.lr = 0x822F0E50;
	sub_822F0D00(ctx, base);
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bne cr6,0x822f0e64
	if (!ctx.cr6.eq) goto loc_822F0E64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,2452
	ctx.r4.s64 = ctx.r11.s64 + 2452;
	// b 0x822f0e6c
	goto loc_822F0E6C;
loc_822F0E64:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,6264
	ctx.r4.s64 = ctx.r11.s64 + 6264;
loc_822F0E6C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82637058
	ctx.lr = 0x822F0E74;
	sub_82637058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f0ea4
	if (ctx.cr6.eq) goto loc_822F0EA4;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// beq cr6,0x822f0eb0
	if (ctx.cr6.eq) goto loc_822F0EB0;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsw r4,r30
	ctx.r4.s64 = ctx.r30.s32;
	// bl 0x82638420
	ctx.lr = 0x822F0E94;
	sub_82638420(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f0eb0
	if (ctx.cr6.eq) goto loc_822F0EB0;
loc_822F0E9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826377c8
	ctx.lr = 0x822F0EA4;
	sub_826377C8(ctx, base);
loc_822F0EA4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822F0EB0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822f0ed4
	if (ctx.cr6.eq) goto loc_822F0ED4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82637ef8
	ctx.lr = 0x822F0ECC;
	sub_82637EF8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822f0e9c
	if (!ctx.cr6.eq) goto loc_822F0E9C;
loc_822F0ED4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826377c8
	ctx.lr = 0x822F0EDC;
	sub_826377C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0E28) {
	__imp__sub_822F0E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822F0EF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822f0d00
	ctx.lr = 0x822F0F10;
	sub_822F0D00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2448
	ctx.r4.s64 = ctx.r11.s64 + 2448;
	// bl 0x82637058
	ctx.lr = 0x822F0F20;
	sub_82637058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f0f48
	if (ctx.cr6.eq) goto loc_822F0F48;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsw r4,r30
	ctx.r4.s64 = ctx.r30.s32;
	// bl 0x82638420
	ctx.lr = 0x822F0F38;
	sub_82638420(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f0f54
	if (ctx.cr6.eq) goto loc_822F0F54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826377c8
	ctx.lr = 0x822F0F48;
	sub_826377C8(ctx, base);
loc_822F0F48:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822F0F54:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82637c70
	ctx.lr = 0x822F0F68;
	sub_82637C70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826377c8
	ctx.lr = 0x822F0F74;
	sub_826377C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0EE8) {
	__imp__sub_822F0EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822F0F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0d00
	ctx.lr = 0x822F0FA4;
	sub_822F0D00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2452
	ctx.r4.s64 = ctx.r11.s64 + 2452;
	// bl 0x82637058
	ctx.lr = 0x822F0FB4;
	sub_82637058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f0fec
	if (ctx.cr6.eq) goto loc_822F0FEC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822f0ff8
	if (ctx.cr6.eq) goto loc_822F0FF8;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82637ef8
	ctx.lr = 0x822F0FDC;
	sub_82637EF8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822f0ff8
	if (ctx.cr6.eq) goto loc_822F0FF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826377c8
	ctx.lr = 0x822F0FEC;
	sub_826377C8(ctx, base);
loc_822F0FEC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822F0FF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826377c8
	ctx.lr = 0x822F1000;
	sub_826377C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0F80) {
	__imp__sub_822F0F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F100C) {
	__imp__sub_822F100C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822f0d00
	ctx.lr = 0x822F1034;
	sub_822F0D00(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0d00
	ctx.lr = 0x822F1044;
	sub_822F0D00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a3390
	ctx.lr = 0x822F104C;
	sub_825A3390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825a32c0
	ctx.lr = 0x822F1058;
	sub_825A32C0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1010) {
	__imp__sub_822F1010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F1074) {
	__imp__sub_822F1074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0d00
	ctx.lr = 0x822F1094;
	sub_822F0D00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a3390
	ctx.lr = 0x822F109C;
	sub_825A3390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f10b4
	if (!ctx.cr6.eq) goto loc_822F10B4;
	// bl 0x82290cb0
	ctx.lr = 0x822F10A8;
	sub_82290CB0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x822f10b8
	if (!ctx.cr6.eq) goto loc_822F10B8;
loc_822F10B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F10B8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1078) {
	__imp__sub_822F1078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F10C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,6268
	ctx.r3.s64 = ctx.r11.s64 + 6268;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a37f0
	ctx.lr = 0x822F10EC;
	sub_825A37F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x822f10fc
	if (ctx.cr6.eq) goto loc_822F10FC;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_822F10FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F10C8) {
	__imp__sub_822F10C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F110C) {
	__imp__sub_822F110C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1110) {
	PPC_FUNC_PROLOGUE();
	// b 0x82638be8
	sub_82638BE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F1110) {
	__imp__sub_822F1110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F1114) {
	__imp__sub_822F1114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1118) {
	__imp__sub_822F1118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F112C) {
	__imp__sub_822F112C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1130) {
	PPC_FUNC_PROLOGUE();
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1130) {
	__imp__sub_822F1130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F113C) {
	__imp__sub_822F113C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a3550
	ctx.lr = 0x822F1154;
	sub_825A3550(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// lis r10,694
	ctx.r10.s64 = 45481984;
	// ori r11,r11,38528
	ctx.r11.u64 = ctx.r11.u64 | 38528;
	// ori r10,r10,4241
	ctx.r10.u64 = ctx.r10.u64 | 4241;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// divdu r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 / ctx.r11.u64;
	// addi r3,r9,6348
	ctx.r3.s64 = ctx.r9.s64 + 6348;
	// subf r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	// bl 0x822ebbc8
	ctx.lr = 0x822F1190;
	sub_822EBBC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1140) {
	__imp__sub_822F1140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F11A0) {
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
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// li r5,1400
	ctx.r5.s64 = 1400;
	// addi r3,r11,-6072
	ctx.r3.s64 = ctx.r11.s64 + -6072;
	// addi r4,r3,-1400
	ctx.r4.s64 = ctx.r3.s64 + -1400;
	// bl 0x822efc50
	ctx.lr = 0x822F11C0;
	sub_822EFC50(ctx, base);
	// lis r10,-31994
	ctx.r10.s64 = -2096758784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,16068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16068, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F11A0) {
	__imp__sub_822F11A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F11E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-1616(r1)
	ea = -1616 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,82
	ctx.r11.s64 = 82;
	// stw r3,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, ctx.r3.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r9,r1,1640
	ctx.r9.s64 = ctx.r1.s64 + 1640;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1498
	ctx.r4.s64 = 1498;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826386a0
	ctx.lr = 0x822F1234;
	sub_826386A0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,1595(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1595, ctx.r8.u8);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r4,r1,97
	ctx.r4.s64 = ctx.r1.s64 + 97;
	// addi r3,r7,5608
	ctx.r3.s64 = ctx.r7.s64 + 5608;
	// bl 0x822ebbc8
	ctx.lr = 0x822F124C;
	sub_822EBBC8(ctx, base);
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r7,r11,14128
	ctx.r7.s64 = ctx.r11.s64 + 14128;
	// lwz r11,1944(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f129c
	if (ctx.cr6.eq) goto loc_822F129C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822F1268:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f1268
	if (!ctx.cr6.eq) goto loc_822F1268;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r8,16
	ctx.r8.s64 = 16;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,792(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 792);
	// bl 0x825c5d38
	ctx.lr = 0x822F129C;
	sub_825C5D38(ctx, base);
loc_822F129C:
	// addi r1,r1,1616
	ctx.r1.s64 = ctx.r1.s64 + 1616;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F11E0) {
	__imp__sub_822F11E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F12AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F12AC) {
	__imp__sub_822F12AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F12B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31994
	ctx.r8.s64 = -2096758784;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r10,16076(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16076);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822f12f8
	if (!ctx.cr6.eq) goto loc_822F12F8;
loc_822F12CC:
	// li r10,10000
	ctx.r10.s64 = 10000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F12D8:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bdnz 0x822f12d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F12D8;
	// lwz r11,16076(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16076);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822f12cc
	if (ctx.cr6.eq) goto loc_822F12CC;
loc_822F12F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F12B0) {
	__imp__sub_822F12B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822F1308;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31994
	ctx.r31.s64 = -2096758784;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r11,r31,16080
	ctx.r11.s64 = ctx.r31.s64 + 16080;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_822F1320:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822f1320
	if (!ctx.cr0.eq) goto loc_822F1320;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x825a32b8
	ctx.lr = 0x822F1348;
	sub_825A32B8(ctx, base);
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// stw r24,16080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16080, ctx.r24.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,-25976
	ctx.r26.s64 = ctx.r11.s64 + -25976;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_822F1360:
	// and r11,r28,r24
	ctx.r11.u64 = ctx.r28.u64 & ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f13c8
	if (ctx.cr6.eq) goto loc_822F13C8;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,4784
	ctx.r5.s64 = ctx.r11.s64 + 4784;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a36c0
	ctx.lr = 0x822F1398;
	sub_825A36C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f13c8
	if (ctx.cr6.eq) goto loc_822F13C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822907f8
	ctx.lr = 0x822F13AC;
	sub_822907F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822906a0
	ctx.lr = 0x822F13B8;
	sub_822906A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3680
	ctx.lr = 0x822F13C0;
	sub_825A3680(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3638
	ctx.lr = 0x822F13C8;
	sub_825A3638(ctx, base);
loc_822F13C8:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r11,r26,72
	ctx.r11.s64 = ctx.r26.s64 + 72;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f1360
	if (ctx.cr6.lt) goto loc_822F1360;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F1300) {
	__imp__sub_822F1300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F13E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822F13F0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// addi r4,r11,7528
	ctx.r4.s64 = ctx.r11.s64 + 7528;
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826352a8
	ctx.lr = 0x822F141C;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822f1468
	if (!ctx.cr6.eq) goto loc_822F1468;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822f1468
	if (ctx.cr6.lt) goto loc_822F1468;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bgt cr6,0x822f1468
	if (ctx.cr6.gt) goto loc_822F1468;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r10,r11,792
	ctx.r10.s64 = ctx.r11.s64 + 792;
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// bl 0x822907f8
	ctx.lr = 0x822F144C;
	sub_822907F8(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r9,7520
	ctx.r3.s64 = ctx.r9.s64 + 7520;
	// bl 0x822f11e0
	ctx.lr = 0x822F145C;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F1468:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r11,7512
	ctx.r4.s64 = ctx.r11.s64 + 7512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826352a8
	ctx.lr = 0x822F147C;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822f14b8
	if (!ctx.cr6.eq) goto loc_822F14B8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r10,r11,792
	ctx.r10.s64 = ctx.r11.s64 + 792;
	// stw r4,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// bl 0x822906a0
	ctx.lr = 0x822F149C;
	sub_822906A0(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r9,7504
	ctx.r3.s64 = ctx.r9.s64 + 7504;
	// bl 0x822f11e0
	ctx.lr = 0x822F14AC;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F14B8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// addi r4,r11,7492
	ctx.r4.s64 = ctx.r11.s64 + 7492;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826352a8
	ctx.lr = 0x822F14D0;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822f1504
	if (!ctx.cr6.eq) goto loc_822F1504;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x822f1300
	ctx.lr = 0x822F14E4;
	sub_822F1300(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r11,7472
	ctx.r3.s64 = ctx.r11.s64 + 7472;
	// bl 0x822f11e0
	ctx.lr = 0x822F14F8;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F1504:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,7464
	ctx.r4.s64 = ctx.r11.s64 + 7464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822F1518;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f1638
	if (!ctx.cr6.eq) goto loc_822F1638;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r21,r11,6464
	ctx.r21.s64 = ctx.r11.s64 + 6464;
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r23,r21,4
	ctx.r23.s64 = ctx.r21.s64 + 4;
	// li r25,18432
	ctx.r25.s64 = 18432;
	// addi r29,r11,-4772
	ctx.r29.s64 = ctx.r11.s64 + -4772;
	// addi r24,r10,7440
	ctx.r24.s64 = ctx.r10.s64 + 7440;
	// addi r26,r9,-3108
	ctx.r26.s64 = ctx.r9.s64 + -3108;
loc_822F1548:
	// lwz r28,-4(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822f1610
	if (!ctx.cr6.lt) goto loc_822F1610;
loc_822F1558:
	// addi r3,r29,-21132
	ctx.r3.s64 = ctx.r29.s64 + -21132;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bl 0x826344d0
	ctx.lr = 0x822F1570;
	sub_826344D0(ctx, base);
	// addi r4,r29,-21132
	ctx.r4.s64 = ctx.r29.s64 + -21132;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825c5ee8
	ctx.lr = 0x822F1580;
	sub_825C5EE8(ctx, base);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f1598
	if (ctx.cr6.eq) goto loc_822F1598;
	// cmplwi cr6,r6,18432
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 18432, ctx.xer);
	// beq cr6,0x822f1600
	if (ctx.cr6.eq) goto loc_822F1600;
loc_822F1598:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822f15dc
	if (ctx.cr6.eq) goto loc_822F15DC;
loc_822F15A4:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// bge cr6,0x822f15dc
	if (!ctx.cr6.lt) goto loc_822F15DC;
	// addi r10,r29,-21132
	ctx.r10.s64 = ctx.r29.s64 + -21132;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// subfic r4,r31,100
	ctx.xer.ca = ctx.r31.u32 <= 100;
	ctx.r4.s64 = 100 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r6,r30,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82637620
	ctx.lr = 0x822F15C8;
	sub_82637620(ctx, base);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822f15a4
	if (ctx.cr6.lt) goto loc_822F15A4;
loc_822F15DC:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stbx r22,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
	// bl 0x822f11e0
	ctx.lr = 0x822F15F8;
	sub_822F11E0(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x825a32b8
	ctx.lr = 0x822F1600;
	sub_825A32B8(ctx, base);
loc_822F1600:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f1558
	if (ctx.cr6.lt) goto loc_822F1558;
loc_822F1610:
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r11,r21,84
	ctx.r11.s64 = ctx.r21.s64 + 84;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f1548
	if (ctx.cr6.lt) goto loc_822F1548;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,7428
	ctx.r3.s64 = ctx.r11.s64 + 7428;
	// bl 0x822f11e0
	ctx.lr = 0x822F162C;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F1638:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// addi r4,r11,7416
	ctx.r4.s64 = ctx.r11.s64 + 7416;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826352a8
	ctx.lr = 0x822F1650;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822f1718
	if (!ctx.cr6.eq) goto loc_822F1718;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r5,18432
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18432, ctx.xer);
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// ble cr6,0x822f1674
	if (!ctx.cr6.gt) goto loc_822F1674;
	// li r5,18432
	ctx.r5.s64 = 18432;
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
loc_822F1674:
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,-4772
	ctx.r29.s64 = ctx.r11.s64 + -4772;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x826344d0
	ctx.lr = 0x822F1688;
	sub_826344D0(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x825c5ee8
	ctx.lr = 0x822F1698;
	sub_825C5EE8(ctx, base);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822f16ec
	if (ctx.cr6.eq) goto loc_822F16EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,-3108
	ctx.r28.s64 = ctx.r11.s64 + -3108;
loc_822F16B4:
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// bge cr6,0x822f16ec
	if (!ctx.cr6.lt) goto loc_822F16EC;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subfic r4,r30,300
	ctx.xer.ca = ctx.r30.u32 <= 300;
	ctx.r4.s64 = 300 - ctx.r30.s64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82637620
	ctx.lr = 0x822F16D8;
	sub_82637620(ctx, base);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822f16b4
	if (ctx.cr6.lt) goto loc_822F16B4;
loc_822F16EC:
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r3,r10,7392
	ctx.r3.s64 = ctx.r10.s64 + 7392;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stbx r22,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r22.u8);
	// bl 0x822f11e0
	ctx.lr = 0x822F170C;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F1718:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// addi r4,r11,7376
	ctx.r4.s64 = ctx.r11.s64 + 7376;
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826352a8
	ctx.lr = 0x822F1734;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822f17a0
	if (!ctx.cr6.eq) goto loc_822F17A0;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r4,r1,179
	ctx.r4.s64 = ctx.r1.s64 + 179;
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// srawi r10,r11,24
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 24;
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// stb r10,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r10.u8);
	// stb r9,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r9.u8);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stb r8,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r8.u8);
	// stb r11,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r11.u8);
	// beq cr6,0x822f1770
	if (ctx.cr6.eq) goto loc_822F1770;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_822F1770:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x825c5f00
	ctx.lr = 0x822F1778;
	sub_825C5F00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r3,r11,7348
	ctx.r3.s64 = ctx.r11.s64 + 7348;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x822f11e0
	ctx.lr = 0x822F1794;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F17A0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,7340
	ctx.r4.s64 = ctx.r11.s64 + 7340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822F17B4;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f18f0
	if (!ctx.cr6.eq) goto loc_822F18F0;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r29,r11,16080
	ctx.r29.s64 = ctx.r11.s64 + 16080;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,-1936
	ctx.r3.s64 = ctx.r29.s64 + -1936;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bl 0x826344d0
	ctx.lr = 0x822F17E0;
	sub_826344D0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f1874
	if (ctx.cr6.eq) goto loc_822F1874;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r11,7336
	ctx.r27.s64 = ctx.r11.s64 + 7336;
loc_822F17F4:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f1858
	if (ctx.cr6.eq) goto loc_822F1858;
	// cmpwi cr6,r30,1024
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1024, ctx.xer);
	// bge cr6,0x822f1858
	if (!ctx.cr6.lt) goto loc_822F1858;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826352a8
	ctx.lr = 0x822F1818;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822f1858
	if (!ctx.cr6.eq) goto loc_822F1858;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r10,r29,-1936
	ctx.r10.s64 = ctx.r29.s64 + -1936;
	// stbx r11,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbzu r8,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x822f1850
	if (!ctx.cr6.eq) goto loc_822F1850;
loc_822F1840:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x822f1840
	if (ctx.cr6.eq) goto loc_822F1840;
loc_822F1850:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f17f4
	if (!ctx.cr6.eq) goto loc_822F17F4;
loc_822F1858:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x822f186c
	if (ctx.cr6.lt) goto loc_822F186C;
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// stb r30,-1934(r29)
	PPC_STORE_U8(ctx.r29.u32 + -1934, ctx.r30.u8);
	// stb r10,-1933(r29)
	PPC_STORE_U8(ctx.r29.u32 + -1933, ctx.r10.u8);
loc_822F186C:
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// bge cr6,0x822f187c
	if (!ctx.cr6.lt) goto loc_822F187C;
loc_822F1874:
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x822f1880
	goto loc_822F1880;
loc_822F187C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_822F1880:
	// addi r4,r29,-1936
	ctx.r4.s64 = ctx.r29.s64 + -1936;
	// li r3,11003
	ctx.r3.s64 = 11003;
	// bl 0x825c5f00
	ctx.lr = 0x822F188C;
	sub_825C5F00(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r30,r11,-3108
	ctx.r30.s64 = ctx.r11.s64 + -3108;
loc_822F189C:
	// addi r10,r29,-1936
	ctx.r10.s64 = ctx.r29.s64 + -1936;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subfic r4,r28,300
	ctx.xer.ca = ctx.r28.u32 <= 300;
	ctx.r4.s64 = 300 - ctx.r28.s64;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lbzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82637620
	ctx.lr = 0x822F18B8;
	sub_82637620(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// blt cr6,0x822f189c
	if (ctx.cr6.lt) goto loc_822F189C;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r3,r10,7316
	ctx.r3.s64 = ctx.r10.s64 + 7316;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stbx r22,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r22.u8);
	// bl 0x822f11e0
	ctx.lr = 0x822F18E4;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F18F0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r11,7308
	ctx.r4.s64 = ctx.r11.s64 + 7308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826352a8
	ctx.lr = 0x822F1904;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822f1960
	if (!ctx.cr6.eq) goto loc_822F1960;
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r11,7292
	ctx.r3.s64 = ctx.r11.s64 + 7292;
	// bl 0x82647914
	ctx.lr = 0x822F1924;
	__imp__XexGetModuleHandle(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82647904
	ctx.lr = 0x822F1938;
	__imp__XexGetProcedureAddress(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r10,7264
	ctx.r3.s64 = ctx.r10.s64 + 7264;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x822f11e0
	ctx.lr = 0x822F1954;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F1960:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,7256
	ctx.r4.s64 = ctx.r11.s64 + 7256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822F1974;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f1ab4
	if (!ctx.cr6.eq) goto loc_822F1AB4;
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,7248
	ctx.r4.s64 = ctx.r11.s64 + 7248;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 5;
	// bl 0x826352a8
	ctx.lr = 0x822F199C;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822f2550
	if (!ctx.cr6.eq) goto loc_822F2550;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bgt cr6,0x822f2550
	if (ctx.cr6.gt) goto loc_822F2550;
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// lwz r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,-4772
	ctx.r29.s64 = ctx.r11.s64 + -4772;
	// addi r5,r10,7240
	ctx.r5.s64 = ctx.r10.s64 + 7240;
	// addi r3,r29,-1100
	ctx.r3.s64 = ctx.r29.s64 + -1100;
	// li r4,1100
	ctx.r4.s64 = 1100;
	// bl 0x82637620
	ctx.lr = 0x822F19D0;
	sub_82637620(ctx, base);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f1a6c
	if (ctx.cr6.eq) goto loc_822F1A6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r11,-3108
	ctx.r27.s64 = ctx.r11.s64 + -3108;
loc_822F19EC:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// clrlwi r10,r30,20
	ctx.r10.u64 = ctx.r30.u32 & 0xFFF;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f1a0c
	if (ctx.cr6.eq) goto loc_822F1A0C;
	// clrlwi r11,r28,20
	ctx.r11.u64 = ctx.r28.u32 & 0xFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f1a20
	if (!ctx.cr6.eq) goto loc_822F1A20;
loc_822F1A0C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826478f4
	ctx.lr = 0x822F1A14;
	__imp__MmIsAddressValid(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f1a50
	if (ctx.cr6.eq) goto loc_822F1A50;
loc_822F1A20:
	// addi r11,r29,-1100
	ctx.r11.s64 = ctx.r29.s64 + -1100;
	// lbz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subfic r4,r31,1100
	ctx.xer.ca = ctx.r31.u32 <= 1100;
	ctx.r4.s64 = 1100 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82637620
	ctx.lr = 0x822F1A38;
	sub_82637620(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f19ec
	if (ctx.cr6.lt) goto loc_822F19EC;
	// b 0x822f1a6c
	goto loc_822F1A6C;
loc_822F1A50:
	// addi r11,r29,-1100
	ctx.r11.s64 = ctx.r29.s64 + -1100;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// subfic r4,r31,1100
	ctx.xer.ca = ctx.r31.u32 <= 1100;
	ctx.r4.s64 = 1100 - ctx.r31.s64;
	// addi r5,r10,7236
	ctx.r5.s64 = ctx.r10.s64 + 7236;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82637620
	ctx.lr = 0x822F1A68;
	sub_82637620(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_822F1A6C:
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r10,r29,-1100
	ctx.r10.s64 = ctx.r29.s64 + -1100;
	// addi r11,r11,16080
	ctx.r11.s64 = ctx.r11.s64 + 16080;
	// stbx r22,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u8);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822f2550
	if (ctx.cr6.eq) goto loc_822F2550;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r7,r11,-1952
	ctx.r7.s64 = ctx.r11.s64 + -1952;
	// addi r4,r29,-1100
	ctx.r4.s64 = ctx.r29.s64 + -1100;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,792(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 792);
	// bl 0x825c5d38
	ctx.lr = 0x822F1AA8;
	sub_825C5D38(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F1AB4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822F1AC8;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f1b54
	if (!ctx.cr6.eq) goto loc_822F1B54;
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,7220
	ctx.r4.s64 = ctx.r11.s64 + 7220;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 5;
	// bl 0x826352a8
	ctx.lr = 0x822F1AF0;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822f1b3c
	if (!ctx.cr6.eq) goto loc_822F1B3C;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x826478f4
	ctx.lr = 0x822F1B00;
	__imp__MmIsAddressValid(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f1b3c
	if (ctx.cr6.eq) goto loc_822F1B3C;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r3,r10,7196
	ctx.r3.s64 = ctx.r10.s64 + 7196;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x822f11e0
	ctx.lr = 0x822F1B30;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F1B3C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,7180
	ctx.r3.s64 = ctx.r11.s64 + 7180;
	// bl 0x822f11e0
	ctx.lr = 0x822F1B48;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F1B54:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,7168
	ctx.r4.s64 = ctx.r11.s64 + 7168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822F1B68;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f1bd0
	if (!ctx.cr6.eq) goto loc_822F1BD0;
	// li r11,170
	ctx.r11.s64 = 170;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// addi r4,r9,7160
	ctx.r4.s64 = ctx.r9.s64 + 7160;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 9;
	// bl 0x826352a8
	ctx.lr = 0x822F1B98;
	sub_826352A8(ctx, base);
	// lis r8,-31994
	ctx.r8.s64 = -2096758784;
	// li r6,400
	ctx.r6.s64 = 400;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r31,r8,16080
	ctx.r31.s64 = ctx.r8.s64 + 16080;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r5,r31,-2352
	ctx.r5.s64 = ctx.r31.s64 + -2352;
	// bl 0x822f4840
	ctx.lr = 0x822F1BB4;
	sub_822F4840(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r4,r31,-2352
	ctx.r4.s64 = ctx.r31.s64 + -2352;
	// addi r3,r7,8796
	ctx.r3.s64 = ctx.r7.s64 + 8796;
	// bl 0x822f11e0
	ctx.lr = 0x822F1BC4;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F1BD0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,7152
	ctx.r4.s64 = ctx.r11.s64 + 7152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822F1BE4;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f20c4
	if (!ctx.cr6.eq) goto loc_822F20C4;
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,7144
	ctx.r4.s64 = ctx.r11.s64 + 7144;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 5;
	// bl 0x826352a8
	ctx.lr = 0x822F1C08;
	sub_826352A8(ctx, base);
	// lis r31,-31994
	ctx.r31.s64 = -2096758784;
	// lis r30,-31990
	ctx.r30.s64 = -2096496640;
	// lis r29,-32012
	ctx.r29.s64 = -2097938432;
	// lis r28,-32155
	ctx.r28.s64 = -2107310080;
	// lis r27,-31990
	ctx.r27.s64 = -2096496640;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822f2098
	if (!ctx.cr6.eq) goto loc_822F2098;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7136
	ctx.r10.s64 = ctx.r10.s64 + 7136;
loc_822F1C30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1c54
	if (ctx.cr6.eq) goto loc_822F1C54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1c30
	if (ctx.cr6.eq) goto loc_822F1C30;
loc_822F1C54:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1c68
	if (!ctx.cr6.eq) goto loc_822F1C68;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,-19000(r27)
	PPC_STORE_U32(ctx.r27.u32 + -19000, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1C68:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7128
	ctx.r10.s64 = ctx.r10.s64 + 7128;
loc_822F1C74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1c98
	if (ctx.cr6.eq) goto loc_822F1C98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1c74
	if (ctx.cr6.eq) goto loc_822F1C74;
loc_822F1C98:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1cac
	if (!ctx.cr6.eq) goto loc_822F1CAC;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,704(r28)
	PPC_STORE_U32(ctx.r28.u32 + 704, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1CAC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,11744
	ctx.r10.s64 = ctx.r10.s64 + 11744;
loc_822F1CB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1cdc
	if (ctx.cr6.eq) goto loc_822F1CDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1cb8
	if (ctx.cr6.eq) goto loc_822F1CB8;
loc_822F1CDC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1cf0
	if (!ctx.cr6.eq) goto loc_822F1CF0;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,2476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2476, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1CF0:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7116
	ctx.r10.s64 = ctx.r10.s64 + 7116;
loc_822F1CFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1d20
	if (ctx.cr6.eq) goto loc_822F1D20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1cfc
	if (ctx.cr6.eq) goto loc_822F1CFC;
loc_822F1D20:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1d34
	if (!ctx.cr6.eq) goto loc_822F1D34;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,-19008(r30)
	PPC_STORE_U32(ctx.r30.u32 + -19008, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1D34:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7108
	ctx.r10.s64 = ctx.r10.s64 + 7108;
loc_822F1D40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1d64
	if (ctx.cr6.eq) goto loc_822F1D64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1d40
	if (ctx.cr6.eq) goto loc_822F1D40;
loc_822F1D64:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1d78
	if (!ctx.cr6.eq) goto loc_822F1D78;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,18188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18188, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1D78:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7100
	ctx.r10.s64 = ctx.r10.s64 + 7100;
loc_822F1D84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1da8
	if (ctx.cr6.eq) goto loc_822F1DA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1d84
	if (ctx.cr6.eq) goto loc_822F1D84;
loc_822F1DA8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1dc0
	if (!ctx.cr6.eq) goto loc_822F1DC0;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stw r11,3976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3976, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1DC0:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7092
	ctx.r10.s64 = ctx.r10.s64 + 7092;
loc_822F1DCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1df0
	if (ctx.cr6.eq) goto loc_822F1DF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1dcc
	if (ctx.cr6.eq) goto loc_822F1DCC;
loc_822F1DF0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1e08
	if (!ctx.cr6.eq) goto loc_822F1E08;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-32016
	ctx.r10.s64 = -2098200576;
	// stw r11,-3432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3432, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1E08:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7084
	ctx.r10.s64 = ctx.r10.s64 + 7084;
loc_822F1E14:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1e38
	if (ctx.cr6.eq) goto loc_822F1E38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1e14
	if (ctx.cr6.eq) goto loc_822F1E14;
loc_822F1E38:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1e4c
	if (!ctx.cr6.eq) goto loc_822F1E4C;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x823f0ab8
	ctx.lr = 0x822F1E48;
	sub_823F0AB8(ctx, base);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1E4C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7080
	ctx.r10.s64 = ctx.r10.s64 + 7080;
loc_822F1E58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1e7c
	if (ctx.cr6.eq) goto loc_822F1E7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1e58
	if (ctx.cr6.eq) goto loc_822F1E58;
loc_822F1E7C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1e94
	if (!ctx.cr6.eq) goto loc_822F1E94;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stw r11,828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 828, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1E94:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7072
	ctx.r10.s64 = ctx.r10.s64 + 7072;
loc_822F1EA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1ec4
	if (ctx.cr6.eq) goto loc_822F1EC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1ea0
	if (ctx.cr6.eq) goto loc_822F1EA0;
loc_822F1EC4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1edc
	if (!ctx.cr6.eq) goto loc_822F1EDC;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// stw r11,8672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8672, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1EDC:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7064
	ctx.r10.s64 = ctx.r10.s64 + 7064;
loc_822F1EE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1f0c
	if (ctx.cr6.eq) goto loc_822F1F0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1ee8
	if (ctx.cr6.eq) goto loc_822F1EE8;
loc_822F1F0C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1f24
	if (!ctx.cr6.eq) goto loc_822F1F24;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stw r11,4376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4376, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1F24:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7056
	ctx.r10.s64 = ctx.r10.s64 + 7056;
loc_822F1F30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1f54
	if (ctx.cr6.eq) goto loc_822F1F54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1f30
	if (ctx.cr6.eq) goto loc_822F1F30;
loc_822F1F54:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1f6c
	if (!ctx.cr6.eq) goto loc_822F1F6C;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-31991
	ctx.r10.s64 = -2096562176;
	// stw r11,-8992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8992, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1F6C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7052
	ctx.r10.s64 = ctx.r10.s64 + 7052;
loc_822F1F78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1f9c
	if (ctx.cr6.eq) goto loc_822F1F9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1f78
	if (ctx.cr6.eq) goto loc_822F1F78;
loc_822F1F9C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f1fb4
	if (!ctx.cr6.eq) goto loc_822F1FB4;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-31990
	ctx.r10.s64 = -2096496640;
	// stw r11,-28748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28748, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F1FB4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7044
	ctx.r10.s64 = ctx.r10.s64 + 7044;
loc_822F1FC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f1fe4
	if (ctx.cr6.eq) goto loc_822F1FE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f1fc0
	if (ctx.cr6.eq) goto loc_822F1FC0;
loc_822F1FE4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f200c
	if (!ctx.cr6.eq) goto loc_822F200C;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x822f2098
	if (ctx.cr6.lt) goto loc_822F2098;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x822f2098
	if (ctx.cr6.gt) goto loc_822F2098;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stw r11,4412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4412, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F200C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7040
	ctx.r10.s64 = ctx.r10.s64 + 7040;
loc_822F2018:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f203c
	if (ctx.cr6.eq) goto loc_822F203C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f2018
	if (ctx.cr6.eq) goto loc_822F2018;
loc_822F203C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f2054
	if (!ctx.cr6.eq) goto loc_822F2054;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// stw r11,-26068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26068, ctx.r11.u32);
	// b 0x822f2098
	goto loc_822F2098;
loc_822F2054:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,7032
	ctx.r10.s64 = ctx.r10.s64 + 7032;
loc_822F2060:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f2084
	if (ctx.cr6.eq) goto loc_822F2084;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f2060
	if (ctx.cr6.eq) goto loc_822F2060;
loc_822F2084:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f2098
	if (!ctx.cr6.eq) goto loc_822F2098;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stw r11,776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 776, ctx.r11.u32);
loc_822F2098:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r8,18188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18188);
	// lwz r7,-19008(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19008);
	// addi r3,r11,6968
	ctx.r3.s64 = ctx.r11.s64 + 6968;
	// lwz r6,2476(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2476);
	// lwz r5,704(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 704);
	// lwz r4,-19000(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19000);
	// bl 0x822f11e0
	ctx.lr = 0x822F20B8;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F20C4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,6956
	ctx.r4.s64 = ctx.r11.s64 + 6956;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822F20D8;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f2114
	if (!ctx.cr6.eq) goto loc_822F2114;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// li r5,900
	ctx.r5.s64 = 900;
	// addi r30,r11,16080
	ctx.r30.s64 = ctx.r11.s64 + 16080;
	// addi r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 9;
	// addi r4,r30,-912
	ctx.r4.s64 = ctx.r30.s64 + -912;
	// bl 0x822efc50
	ctx.lr = 0x822F20F8;
	sub_822EFC50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r30,-912
	ctx.r4.s64 = ctx.r30.s64 + -912;
	// addi r3,r10,8796
	ctx.r3.s64 = ctx.r10.s64 + 8796;
	// bl 0x822f11e0
	ctx.lr = 0x822F2108;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F2114:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r11,6948
	ctx.r4.s64 = ctx.r11.s64 + 6948;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826352a8
	ctx.lr = 0x822F2128;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822f21c0
	if (!ctx.cr6.eq) goto loc_822F21C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,15500
	ctx.r5.s64 = ctx.r11.s64 + 15500;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82637620
	ctx.lr = 0x822F2148;
	sub_82637620(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 500, ctx.xer);
	// blt cr6,0x822f219c
	if (ctx.cr6.lt) goto loc_822F219C;
	// cmpwi cr6,r11,15000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15000, ctx.xer);
	// bgt cr6,0x822f219c
	if (ctx.cr6.gt) goto loc_822F219C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r11,15488
	ctx.r3.s64 = ctx.r11.s64 + 15488;
	// bl 0x822ebfa8
	ctx.lr = 0x822F2170;
	sub_822EBFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f219c
	if (!ctx.cr6.eq) goto loc_822F219C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r5,r11,6904
	ctx.r5.s64 = ctx.r11.s64 + 6904;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,6892
	ctx.r3.s64 = ctx.r11.s64 + 6892;
	// bl 0x822f11e0
	ctx.lr = 0x822F2190;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F219C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r5,r11,6872
	ctx.r5.s64 = ctx.r11.s64 + 6872;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,6892
	ctx.r3.s64 = ctx.r11.s64 + 6892;
	// bl 0x822f11e0
	ctx.lr = 0x822F21B4;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F21C0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,6864
	ctx.r4.s64 = ctx.r11.s64 + 6864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635190
	ctx.lr = 0x822F21D4;
	sub_82635190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f22a4
	if (!ctx.cr6.eq) goto loc_822F22A4;
	// lis r29,-31994
	ctx.r29.s64 = -2096758784;
	// lwz r11,16068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f2204
	if (ctx.cr6.eq) goto loc_822F2204;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,6836
	ctx.r3.s64 = ctx.r11.s64 + 6836;
	// bl 0x822f11e0
	ctx.lr = 0x822F21F8;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F2204:
	// lis r28,-31995
	ctx.r28.s64 = -2096824320;
	// li r5,199
	ctx.r5.s64 = 199;
	// addi r30,r28,-4772
	ctx.r30.s64 = ctx.r28.s64 + -4772;
	// addi r4,r31,6
	ctx.r4.s64 = ctx.r31.s64 + 6;
	// addi r3,r30,-1300
	ctx.r3.s64 = ctx.r30.s64 + -1300;
	// bl 0x82636be0
	ctx.lr = 0x822F221C;
	sub_82636BE0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r22,-2700(r30)
	PPC_STORE_U8(ctx.r30.u32 + -2700, ctx.r22.u8);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r10,16068(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16068, ctx.r10.u32);
	// bl 0x825a31c0
	ctx.lr = 0x822F2230;
	sub_825A31C0(ctx, base);
	// stw r3,-4772(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4772, ctx.r3.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r9,4512
	ctx.r5.s64 = ctx.r9.s64 + 4512;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a36c0
	ctx.lr = 0x822F2254;
	sub_825A36C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f2280
	if (ctx.cr6.eq) goto loc_822F2280;
	// bl 0x825a3638
	ctx.lr = 0x822F2260;
	sub_825A3638(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,6824
	ctx.r4.s64 = ctx.r11.s64 + 6824;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,6812
	ctx.r3.s64 = ctx.r11.s64 + 6812;
	// bl 0x822f11e0
	ctx.lr = 0x822F2274;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F2280:
	// stw r22,16068(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16068, ctx.r22.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,9952
	ctx.r4.s64 = ctx.r11.s64 + 9952;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,6812
	ctx.r3.s64 = ctx.r11.s64 + 6812;
	// bl 0x822f11e0
	ctx.lr = 0x822F2298;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F22A4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,6804
	ctx.r10.s64 = ctx.r10.s64 + 6804;
loc_822F22B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822f22d4
	if (ctx.cr6.eq) goto loc_822F22D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f22b0
	if (ctx.cr6.eq) goto loc_822F22B0;
loc_822F22D4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f2398
	if (!ctx.cr6.eq) goto loc_822F2398;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// lwz r10,16068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822f2348
	if (ctx.cr6.eq) goto loc_822F2348;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// lfd f31,-1296(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1296);
	// lwz r31,-1304(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1304);
	// lwz r30,-1300(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1300);
	// bl 0x825a31c0
	ctx.lr = 0x822F2308;
	sub_825A31C0(ctx, base);
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f31.u64);
	// lis r8,-31995
	ctx.r8.s64 = -2096824320;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,-4772(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4772);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r10,6744
	ctx.r3.s64 = ctx.r10.s64 + 6744;
	// divwu r4,r9,r4
	ctx.r4.u32 = ctx.r9.u32 / ctx.r4.u32;
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x822f11e0
	ctx.lr = 0x822F233C;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F2348:
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// addi r11,r11,-4772
	ctx.r11.s64 = ctx.r11.s64 + -4772;
	// lbz r10,-2700(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2700);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f2378
	if (ctx.cr6.eq) goto loc_822F2378;
	// addi r4,r11,-2700
	ctx.r4.s64 = ctx.r11.s64 + -2700;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,6732
	ctx.r3.s64 = ctx.r11.s64 + 6732;
	// bl 0x822f11e0
	ctx.lr = 0x822F236C;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F2378:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,6724
	ctx.r4.s64 = ctx.r11.s64 + 6724;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,6732
	ctx.r3.s64 = ctx.r11.s64 + 6732;
	// bl 0x822f11e0
	ctx.lr = 0x822F238C;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F2398:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// addi r4,r11,6712
	ctx.r4.s64 = ctx.r11.s64 + 6712;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826352a8
	ctx.lr = 0x822F23B0;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822f2410
	if (!ctx.cr6.eq) goto loc_822F2410;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// lwz r3,792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 792);
	// bl 0x825c5c18
	ctx.lr = 0x822F23D8;
	sub_825C5C18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f23ec
	if (ctx.cr6.eq) goto loc_822F23EC;
	// bl 0x825c5db8
	ctx.lr = 0x822F23E4;
	sub_825C5DB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x822f23f0
	goto loc_822F23F0;
loc_822F23EC:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_822F23F0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r11,6688
	ctx.r3.s64 = ctx.r11.s64 + 6688;
	// bl 0x822f11e0
	ctx.lr = 0x822F2404;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F2410:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r11,6676
	ctx.r4.s64 = ctx.r11.s64 + 6676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826352a8
	ctx.lr = 0x822F2424;
	sub_826352A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// bne cr6,0x822f24a0
	if (!ctx.cr6.eq) goto loc_822F24A0;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r31,-32155
	ctx.r31.s64 = -2107310080;
	// rlwinm r9,r11,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r3,792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// li r5,4098
	ctx.r5.s64 = 4098;
	// bl 0x825c5c18
	ctx.lr = 0x822F2464;
	sub_825C5C18(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lwz r3,792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// li r5,4098
	ctx.r5.s64 = 4098;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x825c5c38
	ctx.lr = 0x822F2480;
	sub_825C5C38(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r3,r8,6648
	ctx.r3.s64 = ctx.r8.s64 + 6648;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822f11e0
	ctx.lr = 0x822F2494;
	sub_822F11E0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F24A0:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// stb r22,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r22.u8);
	// bl 0x825c5ee8
	ctx.lr = 0x822F24D4;
	sub_825C5EE8(ctx, base);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// li r5,4098
	ctx.r5.s64 = 4098;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// lwz r3,792(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 792);
	// addi r31,r8,792
	ctx.r31.s64 = ctx.r8.s64 + 792;
	// bl 0x825c5c38
	ctx.lr = 0x822F24F8;
	sub_825C5C38(ctx, base);
	// lbz r30,197(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 197);
	// lbz r29,196(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 196);
	// lbz r28,195(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 195);
	// lbz r26,194(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 194);
	// lbz r25,193(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 193);
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x825c5ee0
	ctx.lr = 0x822F2514;
	sub_825C5EE0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-31994
	ctx.r10.s64 = -2096758784;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,6544
	ctx.r9.s64 = ctx.r11.s64 + 6544;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r6,16080(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16080);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x822f11e0
	ctx.lr = 0x822F2550;
	sub_822F11E0(ctx, base);
loc_822F2550:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F13E8) {
	__imp__sub_822F13E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F255C) {
	__imp__sub_822F255C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822F2568;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32155
	ctx.r30.s64 = -2107310080;
	// lwz r3,812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 812);
	// bl 0x825a3638
	ctx.lr = 0x822F2578;
	sub_825A3638(ctx, base);
	// lis r10,-31994
	ctx.r10.s64 = -2096758784;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r31,r10,16092
	ctx.r31.s64 = ctx.r10.s64 + 16092;
	// stw r11,812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 812, ctx.r11.u32);
	// lwz r5,16092(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16092);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822f25ac
	if (ctx.cr6.eq) goto loc_822F25AC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,7732
	ctx.r3.s64 = ctx.r11.s64 + 7732;
	// bl 0x822f11e0
	ctx.lr = 0x822F25A4;
	sub_822F11E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822F25AC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,7708
	ctx.r29.s64 = ctx.r11.s64 + 7708;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a3390
	ctx.lr = 0x822F25BC;
	sub_825A3390(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r11,2724
	ctx.r30.s64 = ctx.r11.s64 + 2724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a32c0
	ctx.lr = 0x822F25D0;
	sub_825A32C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f25f0
	if (ctx.cr6.eq) goto loc_822F25F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,7684
	ctx.r3.s64 = ctx.r11.s64 + 7684;
	// bl 0x825a32c0
	ctx.lr = 0x822F25E8;
	sub_825A32C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f2618
	if (!ctx.cr6.eq) goto loc_822F2618;
loc_822F25F0:
	// bl 0x82290cb0
	ctx.lr = 0x822F25F4;
	sub_82290CB0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,7632
	ctx.r3.s64 = ctx.r11.s64 + 7632;
	// bl 0x822f11e0
	ctx.lr = 0x822F2604;
	sub_822F11E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a32c0
	ctx.lr = 0x822F2610;
	sub_825A32C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822F2618:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,7592
	ctx.r3.s64 = ctx.r11.s64 + 7592;
	// bl 0x822f11e0
	ctx.lr = 0x822F2628;
	sub_822F11E0(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r10,7536
	ctx.r3.s64 = ctx.r10.s64 + 7536;
	// bl 0x822ebbc8
	ctx.lr = 0x822F2638;
	sub_822EBBC8(ctx, base);
	// li r3,300
	ctx.r3.s64 = 300;
	// bl 0x825a32b8
	ctx.lr = 0x822F2640;
	sub_825A32B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a3568
	ctx.lr = 0x822F264C;
	sub_825A3568(ctx, base);
}

PPC_WEAK_FUNC(sub_822F2560) {
	__imp__sub_822F2560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F264C) {
	__imp__sub_822F264C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822F2658;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822f2800
	if (!ctx.cr6.gt) goto loc_822F2800;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// lis r27,-32155
	ctx.r27.s64 = -2107310080;
	// addi r31,r11,16096
	ctx.r31.s64 = ctx.r11.s64 + 16096;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r25,r10,7684
	ctx.r25.s64 = ctx.r10.s64 + 7684;
	// lwz r3,812(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 812);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r24,r11,7856
	ctx.r24.s64 = ctx.r11.s64 + 7856;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822F26A0:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x822f2800
	if (ctx.cr6.eq) goto loc_822F2800;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x822f2794
	if (!ctx.cr6.eq) goto loc_822F2794;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r9,r31,-2432
	ctx.r9.s64 = ctx.r31.s64 + -2432;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x822f2708
	if (!ctx.cr6.eq) goto loc_822F2708;
	// addi r11,r31,-2432
	ctx.r11.s64 = ctx.r31.s64 + -2432;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_822F26E0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f2700
	if (!ctx.cr0.eq) goto loc_822F2700;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x822f26e0
	if (!ctx.cr6.eq) goto loc_822F26E0;
loc_822F2700:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822f2820
	if (!ctx.cr6.eq) goto loc_822F2820;
loc_822F2708:
	// addi r11,r31,-2432
	ctx.r11.s64 = ctx.r31.s64 + -2432;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x822f2724
	if (ctx.cr6.eq) goto loc_822F2724;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// blt cr6,0x822f27f8
	if (ctx.cr6.lt) goto loc_822F27F8;
loc_822F2724:
	// addi r9,r31,-2432
	ctx.r9.s64 = ctx.r31.s64 + -2432;
	// addi r11,r31,-2432
	ctx.r11.s64 = ctx.r31.s64 + -2432;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stbx r26,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r26.u8);
	// bl 0x82635148
	ctx.lr = 0x822F2740;
	sub_82635148(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x825a3a28
	ctx.lr = 0x822F276C;
	sub_825A3A28(ctx, base);
	// stw r3,812(r27)
	PPC_STORE_U32(ctx.r27.u32 + 812, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822f280c
	if (ctx.cr6.eq) goto loc_822F280C;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f280c
	if (ctx.cr6.eq) goto loc_822F280C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r5.u32);
	// b 0x822f27f4
	goto loc_822F27F4;
loc_822F2794:
	// subf r11,r6,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822f27ac
	if (!ctx.cr6.gt) goto loc_822F27AC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822F27AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825a3900
	ctx.lr = 0x822F27C0;
	sub_825A3900(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bne cr6,0x822f2834
	if (!ctx.cr6.eq) goto loc_822F2834;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822f285c
	if (!ctx.cr6.lt) goto loc_822F285C;
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r3,812(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 812);
loc_822F27F4:
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
loc_822F27F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x822f26a0
	if (ctx.cr6.gt) goto loc_822F26A0;
loc_822F2800:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822F280C:
	// bl 0x82290cb0
	ctx.lr = 0x822F2810;
	sub_82290CB0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,7804
	ctx.r3.s64 = ctx.r11.s64 + 7804;
	// bl 0x822f11e0
	ctx.lr = 0x822F2820;
	sub_822F11E0(ctx, base);
loc_822F2820:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822F2834:
	// bl 0x82290cb0
	ctx.lr = 0x822F2838;
	sub_82290CB0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,7776
	ctx.r3.s64 = ctx.r11.s64 + 7776;
	// bl 0x822f11e0
	ctx.lr = 0x822F2848;
	sub_822F11E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
loc_822F285C:
	// bl 0x822f2560
	ctx.lr = 0x822F2860;
	sub_822F2560(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F2650) {
	__imp__sub_822F2650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F2874) {
	__imp__sub_822F2874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822F2880;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82635a34
	ctx.lr = 0x822F2888;
	__savefpr_27(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// bl 0x825a3208
	ctx.lr = 0x822F28A4;
	sub_825A3208(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825a31d0
	ctx.lr = 0x822F28AC;
	sub_825A31D0(ctx, base);
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f12,224(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// li r24,0
	ctx.r24.s64 = 0;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r24,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r24.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// std r24,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r24.u64);
	// lfd f27,23416(r10)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23416);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// fmul f10,f13,f27
	ctx.f10.f64 = ctx.f13.f64 * ctx.f27.f64;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// mr r14,r24
	ctx.r14.u64 = ctx.r24.u64;
	// fdiv f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f8.u64);
	// ld r27,200(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// bl 0x825c5bd8
	ctx.lr = 0x822F2914;
	sub_825C5BD8(ctx, base);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 792, ctx.r11.u32);
	// addi r30,r10,792
	ctx.r30.s64 = ctx.r10.s64 + 792;
	// bl 0x825c5bd8
	ctx.lr = 0x822F2934;
	sub_825C5BD8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r17,r9,65535
	ctx.r17.u64 = ctx.r9.u64 | 65535;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,22529
	ctx.r5.s64 = 22529;
	// bl 0x825c5c18
	ctx.lr = 0x822F2960;
	sub_825C5C18(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,22530
	ctx.r5.s64 = 22530;
	// bl 0x825c5c18
	ctx.lr = 0x822F2978;
	sub_825C5C18(ctx, base);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,22529
	ctx.r5.s64 = 22529;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822F2998;
	sub_825C5C18(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,22530
	ctx.r5.s64 = 22530;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822F29B0;
	sub_825C5C18(ctx, base);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x825c5c00
	ctx.lr = 0x822F29C4;
	sub_825C5C00(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x825c5c00
	ctx.lr = 0x822F29D8;
	sub_825C5C00(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,232
	ctx.r6.s64 = ctx.r1.s64 + 232;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4098
	ctx.r5.s64 = 4098;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822F29F0;
	sub_825C5C18(ctx, base);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// li r7,5202
	ctx.r7.s64 = 5202;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// std r24,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r24.u64);
	// std r24,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r24.u64);
	// sth r6,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r6.u16);
	// sth r7,258(r1)
	PPC_STORE_U16(ctx.r1.u32 + 258, ctx.r7.u16);
	// bl 0x825c5c70
	ctx.lr = 0x822F2A1C;
	sub_825C5C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f2a38
	if (ctx.cr6.eq) goto loc_822F2A38;
	// bl 0x825c5db8
	ctx.lr = 0x822F2A28;
	sub_825C5DB8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8160
	ctx.r3.s64 = ctx.r11.s64 + 8160;
	// bl 0x822ebbc8
	ctx.lr = 0x822F2A38;
	sub_822EBBC8(ctx, base);
loc_822F2A38:
	// li r11,5201
	ctx.r11.s64 = 5201;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r11,258(r1)
	PPC_STORE_U16(ctx.r1.u32 + 258, ctx.r11.u16);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// bl 0x825c5c70
	ctx.lr = 0x822F2A50;
	sub_825C5C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f2a6c
	if (!ctx.cr6.eq) goto loc_822F2A6C;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x825c5ca0
	ctx.lr = 0x822F2A64;
	sub_825C5CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f2a80
	if (ctx.cr6.eq) goto loc_822F2A80;
loc_822F2A6C:
	// bl 0x825c5db8
	ctx.lr = 0x822F2A70;
	sub_825C5DB8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8132
	ctx.r3.s64 = ctx.r11.s64 + 8132;
	// bl 0x822ebbc8
	ctx.lr = 0x822F2A80;
	sub_822EBBC8(ctx, base);
loc_822F2A80:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,5201
	ctx.r5.s64 = 5201;
	// addi r3,r11,8096
	ctx.r3.s64 = ctx.r11.s64 + 8096;
	// li r4,5202
	ctx.r4.s64 = 5202;
	// bl 0x822ebbc8
	ctx.lr = 0x822F2A98;
	sub_822EBBC8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// std r24,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r24.u64);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825c5ee8
	ctx.lr = 0x822F2AB4;
	sub_825C5EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f2ac4
	if (ctx.cr6.eq) goto loc_822F2AC4;
	// std r24,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r24.u64);
	// b 0x822f2acc
	goto loc_822F2ACC;
loc_822F2AC4:
	// ld r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
loc_822F2ACC:
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x825c5ee8
	ctx.lr = 0x822F2AE8;
	sub_825C5EE8(ctx, base);
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// clrldi r15,r7,32
	ctx.r15.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// bl 0x825c5ee8
	ctx.lr = 0x822F2B14;
	sub_825C5EE8(ctx, base);
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfd f29,23408(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + 23408);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfd f28,23488(r5)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23488);
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// lfd f31,7904(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 7904);
	// addi r3,r9,7912
	ctx.r3.s64 = ctx.r9.s64 + 7912;
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// stw r4,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r4.u32);
	// lis r8,-31994
	ctx.r8.s64 = -2096758784;
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// addi r10,r7,7884
	ctx.r10.s64 = ctx.r7.s64 + 7884;
	// addi r9,r6,7864
	ctx.r9.s64 = ctx.r6.s64 + 7864;
	// addi r25,r11,13664
	ctx.r25.s64 = ctx.r11.s64 + 13664;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// addi r29,r8,16080
	ctx.r29.s64 = ctx.r8.s64 + 16080;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
loc_822F2B84:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r8,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r8.u32);
	// addi r11,r1,340
	ctx.r11.s64 = ctx.r1.s64 + 340;
	// stw r9,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_822F2BA0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822f2bbc
	if (ctx.cr6.eq) goto loc_822F2BBC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x822f2ba0
	if (ctx.cr6.lt) goto loc_822F2BA0;
loc_822F2BBC:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822f2bd0
	if (!ctx.cr6.eq) goto loc_822F2BD0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r9.u32);
	// stw r8,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r8.u32);
loc_822F2BD0:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x822f2c30
	if (ctx.cr6.eq) goto loc_822F2C30;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822f2c08
	if (ctx.cr6.eq) goto loc_822F2C08;
	// addi r10,r1,340
	ctx.r10.s64 = ctx.r1.s64 + 340;
loc_822F2BEC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822f2c08
	if (ctx.cr6.eq) goto loc_822F2C08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822f2bec
	if (ctx.cr6.lt) goto loc_822F2BEC;
loc_822F2C08:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822f2c30
	if (!ctx.cr6.eq) goto loc_822F2C30;
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// bge cr6,0x822f2c30
	if (!ctx.cr6.lt) goto loc_822F2C30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,340
	ctx.r10.s64 = ctx.r1.s64 + 340;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r8.u32);
loc_822F2C30:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// ori r10,r11,34464
	ctx.r10.u64 = ctx.r11.u64 | 34464;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825c5cc8
	ctx.lr = 0x822F2C58;
	sub_825C5CC8(ctx, base);
	// li r26,16
	ctx.r26.s64 = 16;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// bl 0x825c5d00
	ctx.lr = 0x822F2C7C;
	sub_825C5D00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822f2e44
	if (!ctx.cr6.gt) goto loc_822F2E44;
loc_822F2C88:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// bne cr6,0x822f2cbc
	if (!ctx.cr6.eq) goto loc_822F2CBC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825c5d38
	ctx.lr = 0x822F2CB4;
	sub_825C5D38(ctx, base);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x822f2e14
	goto loc_822F2E14;
loc_822F2CBC:
	// cmpwi cr6,r11,68
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 68, ctx.xer);
	// bne cr6,0x822f2dbc
	if (!ctx.cr6.eq) goto loc_822F2DBC;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// blt cr6,0x822f2dbc
	if (ctx.cr6.lt) goto loc_822F2DBC;
	// lbz r9,2(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lbz r10,1(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// lbz r11,3(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 3);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r31,r11,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// bl 0x825a3208
	ctx.lr = 0x822F2CF4;
	sub_825A3208(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x825a31d0
	ctx.lr = 0x822F2CFC;
	sub_825A31D0(ctx, base);
	// lfd f0,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,296(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// fmul f10,f13,f27
	ctx.f10.f64 = ctx.f13.f64 * ctx.f27.f64;
	// fdiv f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.f8.u64);
	// ld r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// beq cr6,0x822f2d50
	if (ctx.cr6.eq) goto loc_822F2D50;
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822f2d40
	if (!ctx.cr6.gt) goto loc_822F2D40;
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
	// b 0x822f2d48
	goto loc_822F2D48;
loc_822F2D40:
	// bge cr6,0x822f2d50
	if (!ctx.cr6.lt) goto loc_822F2D50;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
loc_822F2D48:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822f2d58
	if (ctx.cr6.lt) goto loc_822F2D58;
loc_822F2D50:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_822F2D58:
	// cmpldi cr6,r14,0
	ctx.cr6.compare<uint64_t>(ctx.r14.u64, 0, ctx.xer);
	// beq cr6,0x822f2d7c
	if (ctx.cr6.eq) goto loc_822F2D7C;
	// subf r11,r14,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r14.s64;
	// clrldi r9,r19,32
	ctx.r9.u64 = ctx.r19.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x822f2d7c
	if (!ctx.cr6.gt) goto loc_822F2D7C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r9,r14,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// subf r19,r9,r11
	ctx.r19.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_822F2D7C:
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r29,-1952
	ctx.r8.s64 = ctx.r29.s64 + -1952;
	// mr r14,r10
	ctx.r14.u64 = ctx.r10.u64;
	// stw r11,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r11.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r22,r28,r22
	ctx.r22.u64 = ctx.r28.u64 + ctx.r22.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,-1952(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1952, ctx.r7.u32);
	// stw r6,-1948(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1948, ctx.r6.u32);
	// stw r5,-1944(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1944, ctx.r5.u32);
	// stw r4,-1940(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1940, ctx.r4.u32);
	// b 0x822f2e14
	goto loc_822F2E14;
loc_822F2DBC:
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// bne cr6,0x822f2e14
	if (!ctx.cr6.eq) goto loc_822F2E14;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f2dd8
	if (ctx.cr6.lt) goto loc_822F2DD8;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_822F2DD8:
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stbx r24,r10,r25
	PPC_STORE_U8(ctx.r10.u32 + ctx.r25.u32, ctx.r24.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r25,1
	ctx.r3.s64 = ctx.r25.s64 + 1;
	// stw r11,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r11.u32);
	// addi r8,r29,-1952
	ctx.r8.s64 = ctx.r29.s64 + -1952;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,-1952(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1952, ctx.r7.u32);
	// stw r6,-1948(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1948, ctx.r6.u32);
	// stw r5,-1944(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1944, ctx.r5.u32);
	// stw r4,-1940(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1940, ctx.r4.u32);
	// bl 0x822f13e8
	ctx.lr = 0x822F2E14;
	sub_822F13E8(ctx, base);
loc_822F2E14:
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// bl 0x825c5d00
	ctx.lr = 0x822F2E34;
	sub_825C5D00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822f2c88
	if (ctx.cr6.gt) goto loc_822F2C88;
	// std r14,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r14.u64);
loc_822F2E44:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822f2f00
	if (!ctx.cr6.eq) goto loc_822F2F00;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825c5cb0
	ctx.lr = 0x822F2E60;
	sub_825C5CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822f2ef4
	if (ctx.cr6.eq) goto loc_822F2EF4;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,64512
	ctx.r9.u64 = ctx.r11.u64 | 64512;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// li r5,22529
	ctx.r5.s64 = 22529;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822F2E94;
	sub_825C5C18(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// li r5,22530
	ctx.r5.s64 = 22530;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822F2EAC;
	sub_825C5C18(ctx, base);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c00
	ctx.lr = 0x822F2EC0;
	sub_825C5C00(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,4098
	ctx.r5.s64 = 4098;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c5c18
	ctx.lr = 0x822F2ED8;
	sub_825C5C18(ctx, base);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r24,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r24.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r24.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x822ebbc8
	ctx.lr = 0x822F2EF4;
	sub_822EBBC8(ctx, base);
loc_822F2EF4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822f2f7c
	if (ctx.cr6.eq) goto loc_822F2F7C;
loc_822F2F00:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// bl 0x825c5ce8
	ctx.lr = 0x822F2F10;
	sub_825C5CE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822f2f54
	if (!ctx.cr6.gt) goto loc_822F2F54;
loc_822F2F1C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r18,r4,r18
	ctx.r18.u64 = ctx.r4.u64 + ctx.r18.u64;
	// bl 0x822f2650
	ctx.lr = 0x822F2F28;
	sub_822F2650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f2f7c
	if (!ctx.cr6.eq) goto loc_822F2F7C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// bl 0x825c5ce8
	ctx.lr = 0x822F2F44;
	sub_825C5CE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822f2f1c
	if (ctx.cr6.gt) goto loc_822F2F1C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_822F2F54:
	// beq cr6,0x822f2f64
	if (ctx.cr6.eq) goto loc_822F2F64;
	// bl 0x825c5db8
	ctx.lr = 0x822F2F5C;
	sub_825C5DB8(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x822f2f7c
	if (ctx.cr6.eq) goto loc_822F2F7C;
loc_822F2F64:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825c5bf0
	ctx.lr = 0x822F2F6C;
	sub_825C5BF0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x822ebbc8
	ctx.lr = 0x822F2F7C;
	sub_822EBBC8(ctx, base);
loc_822F2F7C:
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x825a3208
	ctx.lr = 0x822F2F84;
	sub_825A3208(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825a31d0
	ctx.lr = 0x822F2F8C;
	sub_825A31D0(ctx, base);
	// lfd f0,312(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,304(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r10,r11,16960
	ctx.r10.u64 = ctx.r11.u64 | 16960;
	// fmul f10,f13,f27
	ctx.f10.f64 = ctx.f13.f64 * ctx.f27.f64;
	// fdiv f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f8.u64);
	// ld r26,176(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// subf r28,r27,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r27.s64;
	// cmpld cr6,r28,r10
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x822f2b84
	if (ctx.cr6.lt) goto loc_822F2B84;
	// li r11,8
	ctx.r11.s64 = 8;
	// std r24,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r24.u64);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825c5ee8
	ctx.lr = 0x822F2FE0;
	sub_825C5EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// bne cr6,0x822f2ff0
	if (!ctx.cr6.eq) goto loc_822F2FF0;
	// ld r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
loc_822F2FF0:
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x825c5ee8
	ctx.lr = 0x822F300C;
	sub_825C5EE8(ctx, base);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// clrldi r31,r7,32
	ctx.r31.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// bl 0x825c5ee8
	ctx.lr = 0x822F3038;
	sub_825C5EE8(ctx, base);
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// clrldi r28,r10,32
	ctx.r28.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// bl 0x82635aa0
	ctx.lr = 0x822F3054;
	sub_82635AA0(ctx, base);
	// fmul f30,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64 * ctx.f28.f64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822f3070
	if (!ctx.cr6.eq) goto loc_822F3070;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x822f3070
	if (!ctx.cr6.eq) goto loc_822F3070;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822f31bc
	if (ctx.cr6.eq) goto loc_822F31BC;
loc_822F3070:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// li r3,11008
	ctx.r3.s64 = 11008;
	// bl 0x825c5ee8
	ctx.lr = 0x822F308C;
	sub_825C5EE8(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ld r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fdiv f30,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64 / ctx.f30.f64;
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r3,r8,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r8.s64;
	// and r14,r6,r7
	ctx.r14.u64 = ctx.r6.u64 & ctx.r7.u64;
	// bl 0x82635aa0
	ctx.lr = 0x822F30AC;
	sub_82635AA0(ctx, base);
	// clrldi r5,r22,32
	ctx.r5.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// clrldi r4,r18,32
	ctx.r4.u64 = ctx.r18.u64 & 0xFFFFFFFF;
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64;
	// std r5,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r5.u64);
	// lfd f13,328(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// std r4,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r4.u64);
	// lfd f12,320(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// rotlwi r7,r15,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// ld r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rotlwi r4,r28,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// subf r6,r6,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r6.s64;
	// fmul f3,f0,f31
	ctx.f3.f64 = ctx.f0.f64 * ctx.f31.f64;
	// divwu r3,r14,r11
	ctx.r3.u32 = ctx.r14.u32 / ctx.r11.u32;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// divwu r10,r19,r11
	ctx.r10.u32 = ctx.r19.u32 / ctx.r11.u32;
	// fmul f1,f10,f31
	ctx.f1.f64 = ctx.f10.f64 * ctx.f31.f64;
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// fmul f8,f9,f30
	ctx.f8.f64 = ctx.f9.f64 * ctx.f30.f64;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r4,400
	ctx.r4.s64 = 400;
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stfd f3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f3.u64);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// fmul f2,f8,f31
	ctx.f2.f64 = ctx.f8.f64 * ctx.f31.f64;
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// bl 0x82637620
	ctx.lr = 0x822F3160;
	sub_82637620(ctx, base);
	// stb r24,1007(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1007, ctx.r24.u8);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x822ebbc8
	ctx.lr = 0x822F3170;
	sub_822EBBC8(ctx, base);
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f31b8
	if (ctx.cr6.eq) goto loc_822F31B8;
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822F3184:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f3184
	if (!ctx.cr6.eq) goto loc_822F3184;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r29,-1952
	ctx.r7.s64 = ctx.r29.s64 + -1952;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,16
	ctx.r8.s64 = 16;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// bl 0x825c5d38
	ctx.lr = 0x822F31B8;
	sub_825C5D38(ctx, base);
loc_822F31B8:
	// ld r14,208(r1)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
loc_822F31BC:
	// std r27,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r27.u64);
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// std r28,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r28.u64);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// b 0x822f2b84
	goto loc_822F2B84;
}

PPC_WEAK_FUNC(sub_822F2878) {
	__imp__sub_822F2878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F31EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F31EC) {
	__imp__sub_822F31EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F31F0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,8188
	ctx.r3.s64 = ctx.r11.s64 + 8188;
	// bl 0x825a36d0
	ctx.lr = 0x822F3210;
	sub_825A36D0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822f3270
	if (ctx.cr6.eq) goto loc_822F3270;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10360
	ctx.r5.s64 = ctx.r11.s64 + 10360;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a36c0
	ctx.lr = 0x822F3238;
	sub_825A36C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f3270
	if (ctx.cr6.eq) goto loc_822F3270;
	// lis r30,-32155
	ctx.r30.s64 = -2107310080;
	// addi r11,r30,808
	ctx.r11.s64 = ctx.r30.s64 + 808;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x822907f8
	ctx.lr = 0x822F3254;
	sub_822907F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,808(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	// bl 0x822906a0
	ctx.lr = 0x822F3260;
	sub_822906A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3680
	ctx.lr = 0x822F3268;
	sub_825A3680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3638
	ctx.lr = 0x822F3270;
	sub_825A3638(ctx, base);
loc_822F3270:
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

PPC_WEAK_FUNC(sub_822F31F0) {
	__imp__sub_822F31F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3288) {
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
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,18056
	ctx.r31.s64 = ctx.r11.s64 + 18056;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x826477c4
	ctx.lr = 0x822F32B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x822f32d4
	if (!ctx.cr6.eq) goto loc_822F32D4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f32d4
	if (ctx.cr6.eq) goto loc_822F32D4;
	// bl 0x825a57b8
	ctx.lr = 0x822F32D4;
	sub_825A57B8(ctx, base);
loc_822F32D4:
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

PPC_WEAK_FUNC(sub_822F3288) {
	__imp__sub_822F3288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F32F0) {
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
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r31,r11,18028
	ctx.r31.s64 = ctx.r11.s64 + 18028;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bne 0x822f3328
	if (!ctx.cr0.eq) goto loc_822F3328;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f3328
	if (ctx.cr6.eq) goto loc_822F3328;
	// bl 0x825a57f8
	ctx.lr = 0x822F3328;
	sub_825A57F8(ctx, base);
loc_822F3328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477b4
	ctx.lr = 0x822F3330;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_822F32F0) {
	__imp__sub_822F32F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F3344) {
	__imp__sub_822F3344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822F3350;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r30,r11,18084
	ctx.r30.s64 = ctx.r11.s64 + 18084;
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f34c4
	if (!ctx.cr6.eq) goto loc_822F34C4;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F337C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822f337c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F337C;
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r5,r8,390
	ctx.r5.u64 = ctx.r8.u64 | 390;
	// li r7,1280
	ctx.r7.s64 = 1280;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r6,720
	ctx.r6.s64 = 720;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// addi r8,r30,-28
	ctx.r8.s64 = ctx.r30.s64 + -28;
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a5b38
	ctx.lr = 0x822F33D4;
	sub_825A5B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f33e8
	if (!ctx.cr6.lt) goto loc_822F33E8;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822F33E8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,8272
	ctx.r29.s64 = ctx.r11.s64 + 8272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825abfa0
	ctx.lr = 0x822F33F8;
	sub_825ABFA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r29,240
	ctx.r3.s64 = ctx.r29.s64 + 240;
	// stw r11,-20(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20, ctx.r11.u32);
	// bl 0x825abdb8
	ctx.lr = 0x822F3408;
	sub_825ABDB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r29,464
	ctx.r3.s64 = ctx.r29.s64 + 464;
	// stw r11,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r11.u32);
	// bl 0x825abdb8
	ctx.lr = 0x822F3418;
	sub_825ABDB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r29,1168
	ctx.r3.s64 = ctx.r29.s64 + 1168;
	// stw r11,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r11.u32);
	// bl 0x825abdb8
	ctx.lr = 0x822F3428;
	sub_825ABDB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r29,1512
	ctx.r3.s64 = ctx.r29.s64 + 1512;
	// stw r11,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r11.u32);
	// bl 0x825abdb8
	ctx.lr = 0x822F3438;
	sub_825ABDB8(ctx, base);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// stw r3,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r3.u32);
	// ori r8,r10,9126
	ctx.r8.u64 = ctx.r10.u64 | 9126;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r7,16
	ctx.r7.s64 = 16;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// ori r6,r9,9125
	ctx.r6.u64 = ctx.r9.u64 | 9125;
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// sth r31,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r31.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r7,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// stb r5,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r5.u8);
	// stb r31,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r31.u8);
	// sth r4,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r4.u16);
	// sth r31,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r31.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stb r31,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r31.u8);
	// stb r31,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r31.u8);
	// bl 0x825abaf0
	ctx.lr = 0x822F34AC;
	sub_825ABAF0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r5,720
	ctx.r5.s64 = 720;
	// addi r3,r10,-23184
	ctx.r3.s64 = ctx.r10.s64 + -23184;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// bl 0x822ebbc8
	ctx.lr = 0x822F34C4;
	sub_822EBBC8(ctx, base);
loc_822F34C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F3348) {
	__imp__sub_822F3348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F34D0) {
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
	// lis r31,-31994
	ctx.r31.s64 = -2096758784;
	// addi r30,r31,18064
	ctx.r30.s64 = ctx.r31.s64 + 18064;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x825ab9e8
	ctx.lr = 0x822F34F8;
	sub_825AB9E8(ctx, base);
	// lwz r4,18064(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18064);
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x825ab7d0
	ctx.lr = 0x822F3504;
	sub_825AB7D0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r11,-23152
	ctx.r6.s64 = ctx.r11.s64 + -23152;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x825b04b0
	ctx.lr = 0x822F3520;
	sub_825B04B0(ctx, base);
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

PPC_WEAK_FUNC(sub_822F34D0) {
	__imp__sub_822F34D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3538) {
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
	// lis r30,-31994
	ctx.r30.s64 = -2096758784;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,18056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18056);
	// bl 0x825a7798
	ctx.lr = 0x822F3564;
	sub_825A7798(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,18056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18056);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825a7940
	ctx.lr = 0x822F3574;
	sub_825A7940(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rldicr r3,r7,63,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r10,r3,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r4.u8 & 0x7F));
	// lwz r11,18056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18056);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwzx r7,r5,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwimi r7,r9,11,19,21
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 11) & 0x1C00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r7,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// or r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 | ctx.r6.u64;
	// std r4,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r4.u64);
	// lwz r11,18056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18056);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwimi r8,r9,14,16,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 14) & 0xE000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r8,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u32);
	// ld r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// std r6,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r6.u64);
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

PPC_WEAK_FUNC(sub_822F3538) {
	__imp__sub_822F3538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F35F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F35F4) {
	__imp__sub_822F35F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F35F8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r31,r11,18060
	ctx.r31.s64 = ctx.r11.s64 + 18060;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x826477c4
	ctx.lr = 0x822F361C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x822f3640
	if (!ctx.cr6.eq) goto loc_822F3640;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f3640
	if (ctx.cr6.eq) goto loc_822F3640;
	// bl 0x825a57b8
	ctx.lr = 0x822F3640;
	sub_825A57B8(ctx, base);
loc_822F3640:
	// bl 0x822f3348
	ctx.lr = 0x822F3644;
	sub_822F3348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f367c
	if (ctx.cr6.eq) goto loc_822F367C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x822f366c
	if (!ctx.cr0.eq) goto loc_822F366C;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f366c
	if (ctx.cr6.eq) goto loc_822F366C;
	// bl 0x825a57f8
	ctx.lr = 0x822F366C;
	sub_825A57F8(ctx, base);
loc_822F366C:
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x826477b4
	ctx.lr = 0x822F3674;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822f3750
	goto loc_822F3750;
loc_822F367C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f36e0
	if (!ctx.cr6.eq) goto loc_822F36E0;
	// lis r3,56
	ctx.r3.s64 = 3670016;
	// ori r3,r3,16384
	ctx.r3.u64 = ctx.r3.u64 | 16384;
	// bl 0x82634da0
	ctx.lr = 0x822F3694;
	sub_82634DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f36b4
	if (!ctx.cr6.eq) goto loc_822F36B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f32f0
	ctx.lr = 0x822F36AC;
	sub_822F32F0(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x822f3750
	goto loc_822F3750;
loc_822F36B4:
	// lis r5,56
	ctx.r5.s64 = 3670016;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,16384
	ctx.r5.u64 = ctx.r5.u64 | 16384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826344d0
	ctx.lr = 0x822F36C8;
	sub_826344D0(ctx, base);
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// li r7,1280
	ctx.r7.s64 = 1280;
	// li r6,720
	ctx.r6.s64 = 720;
	// li r5,1280
	ctx.r5.s64 = 1280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ab730
	ctx.lr = 0x822F36E0;
	sub_822AB730(ctx, base);
loc_822F36E0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f3744
	if (!ctx.cr6.eq) goto loc_822F3744;
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,134
	ctx.r8.u64 = ctx.r8.u64 | 134;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,720
	ctx.r4.s64 = 720;
	// li r3,1280
	ctx.r3.s64 = 1280;
	// bl 0x825aa718
	ctx.lr = 0x822F3714;
	sub_825AA718(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// ori r8,r11,14
	ctx.r8.u64 = ctx.r11.u64 | 14;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x822f3744
	if (!ctx.cr6.lt) goto loc_822F3744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f32f0
	ctx.lr = 0x822F373C;
	sub_822F32F0(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x822f3750
	goto loc_822F3750;
loc_822F3744:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f32f0
	ctx.lr = 0x822F374C;
	sub_822F32F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F3750:
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

PPC_WEAK_FUNC(sub_822F35F8) {
	__imp__sub_822F35F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r10,r11,17712
	ctx.r10.s64 = ctx.r11.s64 + 17712;
	// lwz r11,376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F3768) {
	__imp__sub_822F3768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F3784) {
	__imp__sub_822F3784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263443c
	ctx.lr = 0x822F3790;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82635a38
	ctx.lr = 0x822F3798;
	__savefpr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r31,r11,18068
	ctx.r31.s64 = ctx.r11.s64 + 18068;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r27,816(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 816);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r28,r27,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f3824
	if (!ctx.cr6.eq) goto loc_822F3824;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// sth r25,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r25.u16);
	// li r10,255
	ctx.r10.s64 = 255;
	// sth r25,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r25.u16);
	// ori r9,r11,9126
	ctx.r9.u64 = ctx.r11.u64 | 9126;
	// stb r25,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r25.u8);
	// stb r25,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r25.u8);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stb r25,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r25.u8);
	// addi r3,r8,10008
	ctx.r3.s64 = ctx.r8.s64 + 10008;
	// sth r10,188(r1)
	PPC_STORE_U16(ctx.r1.u32 + 188, ctx.r10.u16);
	// sth r25,190(r1)
	PPC_STORE_U16(ctx.r1.u32 + 190, ctx.r25.u16);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r25,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r25.u8);
	// stb r25,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r25.u8);
	// stb r25,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, ctx.r25.u8);
	// bl 0x825abfa0
	ctx.lr = 0x822F3810;
	sub_825ABFA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x825abaf0
	ctx.lr = 0x822F3820;
	sub_825ABAF0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_822F3824:
	// cmplwi cr6,r28,4096
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4096, ctx.xer);
	// li r3,4096
	ctx.r3.s64 = 4096;
	// blt cr6,0x822f3834
	if (ctx.cr6.lt) goto loc_822F3834;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822F3834:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a3c20
	ctx.lr = 0x822F3844;
	sub_825A3C20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f3c68
	if (ctx.cr6.eq) goto loc_822F3C68;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f3c68
	if (ctx.cr6.eq) goto loc_822F3C68;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f3c68
	if (ctx.cr6.eq) goto loc_822F3C68;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822f38b0
	if (!ctx.cr6.gt) goto loc_822F38B0;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// lfs f0,264(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
loc_822F3884:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f0,16(r11)
	// bdnz 0x822f3884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F3884;
loc_822F38B0:
	// mftb r21
	ctx.r21.u64 = __rdtsc();
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822f38dc
	if (ctx.cr6.eq) goto loc_822F38DC;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F38D0:
	// dcbst r11,r29
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f38d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F38D0;
loc_822F38DC:
	// sync 
	// mftb r24
	ctx.r24.u64 = __rdtsc();
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825c56c0
	ctx.lr = 0x822F38FC;
	sub_825C56C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825c5a40
	ctx.lr = 0x822F3908;
	sub_825C5A40(ctx, base);
	// rlwinm r11,r29,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0xFFF;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r10,r29,0,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1FFFFFFC;
	// addi r8,r11,512
	ctx.r8.s64 = ctx.r11.s64 + 512;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r7,r9,0,16,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF8;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// rlwinm r11,r8,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r7,0,24,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// oris r9,r7,19207
	ctx.r9.u64 = ctx.r7.u64 | 1258749952;
	// clrlwi r6,r27,9
	ctx.r6.u64 = ctx.r27.u32 & 0x7FFFFF;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r11,19200
	ctx.r11.s64 = 1258291200;
	// ori r9,r9,9730
	ctx.r9.u64 = ctx.r9.u64 | 9730;
	// oris r8,r10,16384
	ctx.r8.u64 = ctx.r10.u64 | 1073741824;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// oris r7,r6,19200
	ctx.r7.u64 = ctx.r6.u64 | 1258291200;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// bl 0x825ab7d0
	ctx.lr = 0x822F3960;
	sub_825AB7D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x825ab5c8
	ctx.lr = 0x822F396C;
	sub_825AB5C8(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x825ab9e8
	ctx.lr = 0x822F3978;
	sub_825AB9E8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a82b8
	ctx.lr = 0x822F3994;
	sub_825A82B8(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r12,1
	ctx.r12.s64 = 1;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// rldicr r12,r12,63,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,1920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1920, temp.u32);
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 | ctx.r12.u64;
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// ble cr6,0x822f3a1c
	if (!ctx.cr6.gt) goto loc_822F3A1C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_822F39D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af478
	ctx.lr = 0x822F39EC;
	sub_825AF478(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825b04f8
	ctx.lr = 0x822F3A00;
	sub_825B04F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af570
	ctx.lr = 0x822F3A14;
	sub_825AF570(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822f39d8
	if (!ctx.cr0.eq) goto loc_822F39D8;
loc_822F3A1C:
	// mftb r23
	ctx.r23.u64 = __rdtsc();
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x825b2428
	ctx.lr = 0x822F3A28;
	sub_825B2428(ctx, base);
	// bl 0x825b1010
	ctx.lr = 0x822F3A2C;
	sub_825B1010(ctx, base);
	// mftb r22
	ctx.r22.u64 = __rdtsc();
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a82b8
	ctx.lr = 0x822F3A4C;
	sub_825A82B8(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822f3a74
	if (ctx.cr6.eq) goto loc_822F3A74;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F3A68:
	// dcbf r11,r29
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f3a68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F3A68;
loc_822F3A74:
	// sync 
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x822f3b48
	if (ctx.cr6.lt) goto loc_822F3B48;
	// addi r9,r26,1
	ctx.r9.s64 = ctx.r26.s64 + 1;
	// addi r8,r26,2
	ctx.r8.s64 = ctx.r26.s64 + 2;
	// addi r7,r26,3
	ctx.r7.s64 = ctx.r26.s64 + 3;
	// addi r6,r27,-3
	ctx.r6.s64 = ctx.r27.s64 + -3;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
loc_822F3A98:
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfs f0,-32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x822f3ac0
	if (ctx.cr6.eq) goto loc_822F3AC0;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_822F3AC0:
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f0,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x822f3ae8
	if (ctx.cr6.eq) goto loc_822F3AE8;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_822F3AE8:
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x822f3b10
	if (ctx.cr6.eq) goto loc_822F3B10;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_822F3B10:
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x822f3b38
	if (ctx.cr6.eq) goto loc_822F3B38;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_822F3B38:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822f3a98
	if (ctx.cr6.lt) goto loc_822F3A98;
loc_822F3B48:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x822f3b94
	if (!ctx.cr6.lt) goto loc_822F3B94;
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F3B60:
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x822f3b88
	if (ctx.cr6.eq) goto loc_822F3B88;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_822F3B88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x822f3b60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F3B60;
loc_822F3B94:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822f3ba8
	if (ctx.cr6.eq) goto loc_822F3BA8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r30,r11,-22856
	ctx.r30.s64 = ctx.r11.s64 + -22856;
	// b 0x822f3bb0
	goto loc_822F3BB0;
loc_822F3BA8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r30,r11,-22864
	ctx.r30.s64 = ctx.r11.s64 + -22864;
loc_822F3BB0:
	// subf r3,r24,r22
	ctx.r3.s64 = ctx.r22.s64 - ctx.r24.s64;
	// bl 0x82635aa0
	ctx.lr = 0x822F3BB8;
	sub_82635AA0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// extsw r9,r26
	ctx.r9.s64 = ctx.r26.s32;
	// subf r3,r24,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r24.s64;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f31,5560(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 5560);
	// fmul f30,f1,f31
	ctx.f30.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lfd f0,4072(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4072);
	// fmul f29,f30,f0
	ctx.f29.f64 = ctx.f30.f64 * ctx.f0.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F3BE0;
	sub_82635AA0(ctx, base);
	// subf r3,r21,r24
	ctx.r3.s64 = ctx.r24.s64 - ctx.r21.s64;
	// fmul f28,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64 * ctx.f31.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F3BEC;
	sub_82635AA0(ctx, base);
	// fmul f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f31.f64;
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f28,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f28.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f30,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f30.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// lfd f0,152(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r31,-1564
	ctx.r3.s64 = ctx.r31.s64 + -1564;
	// addi r5,r7,-23024
	ctx.r5.s64 = ctx.r7.s64 + -23024;
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stfd f5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f5.u64);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// li r4,400
	ctx.r4.s64 = 400;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// fdiv f4,f29,f13
	ctx.f4.f64 = ctx.f29.f64 / ctx.f13.f64;
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// bl 0x82637620
	ctx.lr = 0x822F3C50;
	sub_82637620(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a3d18
	ctx.lr = 0x822F3C58;
	sub_825A3D18(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82635a84
	ctx.lr = 0x822F3C64;
	__restfpr_28(ctx, base);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
loc_822F3C68:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r31,-1564
	ctx.r3.s64 = ctx.r31.s64 + -1564;
	// addi r5,r11,-23056
	ctx.r5.s64 = ctx.r11.s64 + -23056;
	// li r4,400
	ctx.r4.s64 = 400;
	// bl 0x82637620
	ctx.lr = 0x822F3C7C;
	sub_82637620(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82635a84
	ctx.lr = 0x822F3C88;
	__restfpr_28(ctx, base);
	// b 0x8263448c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F3788) {
	__imp__sub_822F3788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F3C8C) {
	__imp__sub_822F3C8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822F3C98;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r31,r11,18068
	ctx.r31.s64 = ctx.r11.s64 + 18068;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f3d18
	if (!ctx.cr6.eq) goto loc_822F3D18;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// sth r21,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r21.u16);
	// li r10,255
	ctx.r10.s64 = 255;
	// sth r21,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, ctx.r21.u16);
	// ori r9,r11,8838
	ctx.r9.u64 = ctx.r11.u64 | 8838;
	// stb r21,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r21.u8);
	// stb r21,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r21.u8);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stb r21,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r21.u8);
	// addi r3,r8,10432
	ctx.r3.s64 = ctx.r8.s64 + 10432;
	// sth r10,172(r1)
	PPC_STORE_U16(ctx.r1.u32 + 172, ctx.r10.u16);
	// sth r21,174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 174, ctx.r21.u16);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stb r21,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r21.u8);
	// stb r21,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r21.u8);
	// stb r21,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r21.u8);
	// bl 0x825abfa0
	ctx.lr = 0x822F3D04;
	sub_825ABFA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x825abaf0
	ctx.lr = 0x822F3D14;
	sub_825ABAF0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_822F3D18:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x825a3c20
	ctx.lr = 0x822F3D2C;
	sub_825A3C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f3fe8
	if (ctx.cr6.eq) goto loc_822F3FE8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f3fe8
	if (ctx.cr6.eq) goto loc_822F3FE8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f3fe8
	if (ctx.cr6.eq) goto loc_822F3FE8;
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r10,r3,0,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFFFFFC;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r5,19202
	ctx.r5.s64 = 1258422272;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// oris r22,r9,16384
	ctx.r22.u64 = ctx.r9.u64 | 1073741824;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r4,19200
	ctx.r4.s64 = 1258291200;
	// li r3,1
	ctx.r3.s64 = 1;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r8,r8,4652
	ctx.r8.s64 = ctx.r8.s64 + 4652;
	// addi r9,r9,-22764
	ctx.r9.s64 = ctx.r9.s64 + -22764;
	// addi r10,r10,-22756
	ctx.r10.s64 = ctx.r10.s64 + -22756;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// ori r26,r5,1536
	ctx.r26.u64 = ctx.r5.u64 | 1536;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r23,19200
	ctx.r23.s64 = 1258291200;
	// ori r27,r4,64
	ctx.r27.u64 = ctx.r4.u64 | 64;
	// rldicr r28,r3,63,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r20,r6,-22748
	ctx.r20.s64 = ctx.r6.s64 + -22748;
	// addi r18,r7,-22808
	ctx.r18.s64 = ctx.r7.s64 + -22808;
	// addi r24,r11,-22816
	ctx.r24.s64 = ctx.r11.s64 + -22816;
loc_822F3DCC:
	// li r10,256
	ctx.r10.s64 = 256;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F3DD8:
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822f3dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F3DD8;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F3E10:
	// dcbst r11,r30
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f3e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F3E10;
	// sync 
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x825c56c0
	ctx.lr = 0x822F3E38;
	sub_825C56C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825c5a40
	ctx.lr = 0x822F3E44;
	sub_825C5A40(ctx, base);
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// rlwimi r29,r10,0,29,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFFF8);
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r9,r9,0,24,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// or r29,r9,r26
	ctx.r29.u64 = ctx.r9.u64 | ctx.r26.u64;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// bl 0x825ab7d0
	ctx.lr = 0x822F3E78;
	sub_825AB7D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x825ab5c8
	ctx.lr = 0x822F3E84;
	sub_825AB5C8(ctx, base);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x825ab9e8
	ctx.lr = 0x822F3E90;
	sub_825AB9E8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a82b8
	ctx.lr = 0x822F3EAC;
	sub_825A82B8(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f11,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,1920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1920, temp.u32);
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 | ctx.r28.u64;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x825af478
	ctx.lr = 0x822F3EF0;
	sub_825AF478(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825b04f8
	ctx.lr = 0x822F3F04;
	sub_825B04F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af570
	ctx.lr = 0x822F3F18;
	sub_825AF570(ctx, base);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x825b2428
	ctx.lr = 0x822F3F20;
	sub_825B2428(ctx, base);
	// bl 0x825b1010
	ctx.lr = 0x822F3F24;
	sub_825B1010(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a82b8
	ctx.lr = 0x822F3F40;
	sub_825A82B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F3F4C:
	// dcbf r10,r30
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x822f3f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F3F4C;
	// sync 
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822f3f70
	if (ctx.cr6.eq) goto loc_822F3F70;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x822f3f78
	goto loc_822F3F78;
loc_822F3F70:
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
loc_822F3F78:
	// lbz r17,7(r30)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// addi r11,r31,-1564
	ctx.r11.s64 = ctx.r31.s64 + -1564;
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lbz r16,6(r30)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// subfic r4,r19,400
	ctx.xer.ca = ctx.r19.u32 <= 400;
	ctx.r4.s64 = 400 - ctx.r19.s64;
	// lbz r15,5(r30)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// add r3,r19,r11
	ctx.r3.u64 = ctx.r19.u64 + ctx.r11.u64;
	// lbz r14,4(r30)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r17,140(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// bl 0x82637620
	ctx.lr = 0x822F3FC8;
	sub_82637620(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// blt cr6,0x822f3dcc
	if (ctx.cr6.lt) goto loc_822F3DCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3d18
	ctx.lr = 0x822F3FE0;
	sub_825A3D18(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822F3FE8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r31,-1564
	ctx.r3.s64 = ctx.r31.s64 + -1564;
	// addi r5,r11,-22848
	ctx.r5.s64 = ctx.r11.s64 + -22848;
	// li r4,400
	ctx.r4.s64 = 400;
	// bl 0x82637620
	ctx.lr = 0x822F3FFC;
	sub_82637620(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F3C90) {
	__imp__sub_822F3C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F4004) {
	__imp__sub_822F4004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822F4010;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r11,18068
	ctx.r30.s64 = ctx.r11.s64 + 18068;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,255
	ctx.r27.s64 = 255;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f40b0
	if (!ctx.cr6.eq) goto loc_822F40B0;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// sth r26,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r26.u16);
	// lis r10,44
	ctx.r10.s64 = 2883584;
	// sth r26,194(r1)
	PPC_STORE_U16(ctx.r1.u32 + 194, ctx.r26.u16);
	// ori r9,r11,8838
	ctx.r9.u64 = ctx.r11.u64 | 8838;
	// stb r26,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r26.u8);
	// ori r8,r10,9049
	ctx.r8.u64 = ctx.r10.u64 | 9049;
	// stb r26,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r26.u8);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stb r26,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r26.u8);
	// sth r28,204(r1)
	PPC_STORE_U16(ctx.r1.u32 + 204, ctx.r28.u16);
	// addi r3,r7,10832
	ctx.r3.s64 = ctx.r7.s64 + 10832;
	// sth r26,206(r1)
	PPC_STORE_U16(ctx.r1.u32 + 206, ctx.r26.u16);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// stb r26,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r26.u8);
	// stb r26,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r26.u8);
	// stb r28,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r28.u8);
	// sth r27,216(r1)
	PPC_STORE_U16(ctx.r1.u32 + 216, ctx.r27.u16);
	// sth r26,218(r1)
	PPC_STORE_U16(ctx.r1.u32 + 218, ctx.r26.u16);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r26.u8);
	// stb r26,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r26.u8);
	// stb r26,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, ctx.r26.u8);
	// bl 0x825abfa0
	ctx.lr = 0x822F409C;
	sub_825ABFA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// bl 0x825abaf0
	ctx.lr = 0x822F40AC;
	sub_825ABAF0(ctx, base);
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
loc_822F40B0:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x825a3c20
	ctx.lr = 0x822F40C4;
	sub_825A3C20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x825a3c20
	ctx.lr = 0x822F40DC;
	sub_825A3C20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822f4408
	if (ctx.cr6.eq) goto loc_822F4408;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4408
	if (ctx.cr6.eq) goto loc_822F4408;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4408
	if (ctx.cr6.eq) goto loc_822F4408;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4408
	if (ctx.cr6.eq) goto loc_822F4408;
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r26,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r26.u8);
	// li r10,129
	ctx.r10.s64 = 129;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// li r8,130
	ctx.r8.s64 = 130;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// stb r9,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r9.u8);
	// li r7,3
	ctx.r7.s64 = 3;
	// stb r8,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r8.u8);
	// li r6,131
	ctx.r6.s64 = 131;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r28,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r28.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r28,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// li r8,7
	ctx.r8.s64 = 7;
	// stb r28,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r28.u8);
	// li r26,132
	ctx.r26.s64 = 132;
	// stb r27,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r27.u8);
	// li r25,133
	ctx.r25.s64 = 133;
	// stb r28,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r28.u8);
	// li r24,134
	ctx.r24.s64 = 134;
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// li r23,135
	ctx.r23.s64 = 135;
	// stb r7,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r7.u8);
	// li r5,128
	ctx.r5.s64 = 128;
	// stb r28,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r6,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r6.u8);
	// stb r27,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r27.u8);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// stb r28,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r28.u8);
	// stb r26,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r26.u8);
	// stb r27,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r27.u8);
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
	// stb r28,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r28.u8);
	// stb r25,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r25.u8);
	// stb r27,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r27.u8);
	// stb r9,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r9.u8);
	// stb r28,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r28.u8);
	// stb r24,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r24.u8);
	// stb r27,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r27.u8);
	// stb r8,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r8.u8);
	// stb r28,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r28.u8);
	// stb r23,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r23.u8);
	// bl 0x826344d0
	ctx.lr = 0x822F41CC;
	sub_826344D0(ctx, base);
	// dcbst r0,r31
	// dcbst r0,r29
	// sync 
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x825c56c0
	ctx.lr = 0x822F41F0;
	sub_825C56C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825c5a40
	ctx.lr = 0x822F41FC;
	sub_825C5A40(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x825c56c0
	ctx.lr = 0x822F4214;
	sub_825C56C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825c5a40
	ctx.lr = 0x822F4220;
	sub_825C5A40(ctx, base);
	// rlwinm r11,r29,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0xFFF;
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r29,0,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1FFFFFFC;
	// addi r6,r11,512
	ctx.r6.s64 = ctx.r11.s64 + 512;
	// rlwinm r5,r7,0,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFF8;
	// rlwinm r11,r6,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// rlwinm r5,r5,0,24,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r9,19200
	ctx.r9.s64 = 1258291200;
	// rlwinm r7,r8,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r6,19200
	ctx.r6.s64 = 1258291200;
	// oris r5,r5,19207
	ctx.r5.u64 = ctx.r5.u64 | 1258749952;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// oris r11,r7,16384
	ctx.r11.u64 = ctx.r7.u64 | 1073741824;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// ori r5,r5,9730
	ctx.r5.u64 = ctx.r5.u64 | 9730;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// ori r10,r6,8
	ctx.r10.u64 = ctx.r6.u64 | 8;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x825ab7d0
	ctx.lr = 0x822F4278;
	sub_825AB7D0(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x825ab5c8
	ctx.lr = 0x822F4284;
	sub_825AB5C8(ctx, base);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x825ab9e8
	ctx.lr = 0x822F4290;
	sub_825AB9E8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a82b8
	ctx.lr = 0x822F42AC;
	sub_825A82B8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825a82b8
	ctx.lr = 0x822F42C8;
	sub_825A82B8(ctx, base);
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r12,1
	ctx.r12.s64 = 1;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// rldicr r12,r12,63,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stfs f0,1920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1920, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 | ctx.r12.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x825af478
	ctx.lr = 0x822F4314;
	sub_825AF478(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825b04f8
	ctx.lr = 0x822F4328;
	sub_825B04F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af570
	ctx.lr = 0x822F433C;
	sub_825AF570(ctx, base);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x825b2428
	ctx.lr = 0x822F4344;
	sub_825B2428(ctx, base);
	// bl 0x825b1010
	ctx.lr = 0x822F4348;
	sub_825B1010(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a82b8
	ctx.lr = 0x822F4364;
	sub_825A82B8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825a82b8
	ctx.lr = 0x822F4380;
	sub_825A82B8(ctx, base);
	// dcbf r0,r29
	// sync 
	// lfs f5,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lfs f4,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r7,-22672
	ctx.r5.s64 = ctx.r7.s64 + -22672;
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r30,-1564
	ctx.r3.s64 = ctx.r30.s64 + -1564;
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// li r4,400
	ctx.r4.s64 = 400;
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f5,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f5.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f8,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// bl 0x82637620
	ctx.lr = 0x822F43F0;
	sub_82637620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3d18
	ctx.lr = 0x822F43F8;
	sub_825A3D18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a3d18
	ctx.lr = 0x822F4400;
	sub_825A3D18(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822F4408:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r30,-1564
	ctx.r3.s64 = ctx.r30.s64 + -1564;
	// addi r5,r11,-22708
	ctx.r5.s64 = ctx.r11.s64 + -22708;
	// li r4,400
	ctx.r4.s64 = 400;
	// bl 0x82637620
	ctx.lr = 0x822F441C;
	sub_82637620(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F4008) {
	__imp__sub_822F4008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F4424) {
	__imp__sub_822F4424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822F4430;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r30,r11,18068
	ctx.r30.s64 = ctx.r11.s64 + 18068;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f4460
	if (!ctx.cr6.eq) goto loc_822F4460;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,11248
	ctx.r3.s64 = ctx.r11.s64 + 11248;
	// bl 0x825abfa0
	ctx.lr = 0x822F445C;
	sub_825ABFA0(ctx, base);
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
loc_822F4460:
	// li r25,-1
	ctx.r25.s64 = -1;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// bl 0x825a3c20
	ctx.lr = 0x822F447C;
	sub_825A3C20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x825a3c20
	ctx.lr = 0x822F4494;
	sub_825A3C20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822f4818
	if (ctx.cr6.eq) goto loc_822F4818;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4818
	if (ctx.cr6.eq) goto loc_822F4818;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4818
	if (ctx.cr6.eq) goto loc_822F4818;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// addis r11,r29,427
	ctx.r11.s64 = ctx.r29.s64 + 27983872;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r11,16127
	ctx.r11.s64 = ctx.r11.s64 + 16127;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r26,255
	ctx.r26.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822F44D4:
	// addi r9,r10,144
	ctx.r9.s64 = ctx.r10.s64 + 144;
	// stb r26,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r26.u8);
	// stb r28,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r28.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// stbu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822f44d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F44D4;
	// addis r11,r29,427
	ctx.r11.s64 = ctx.r29.s64 + 27983872;
	// addi r11,r11,16128
	ctx.r11.s64 = ctx.r11.s64 + 16128;
	// dcbst r0,r11
	// li r10,64
	ctx.r10.s64 = 64;
	// dcbst r10,r11
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F4518:
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// stb r26,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r26.u8);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822f4518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F4518;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826344d0
	ctx.lr = 0x822F454C;
	sub_826344D0(ctx, base);
	// dcbst r0,r29
	// dcbst r0,r31
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbst r11,r31
	// sync 
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// bl 0x825c56c0
	ctx.lr = 0x822F4578;
	sub_825C56C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825c5a40
	ctx.lr = 0x822F4584;
	sub_825C5A40(ctx, base);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x825c56c0
	ctx.lr = 0x822F459C;
	sub_825C56C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825c5a40
	ctx.lr = 0x822F45A8;
	sub_825C5A40(ctx, base);
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rlwinm r10,r31,0,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1FFFFFFC;
	// addi r8,r11,512
	ctx.r8.s64 = ctx.r11.s64 + 512;
	// rlwinm r7,r9,0,16,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF8;
	// rlwinm r11,r8,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// lis r27,-31994
	ctx.r27.s64 = -2096758784;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r7,0,24,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// lis r5,19200
	ctx.r5.s64 = 1258291200;
	// rlwinm r3,r6,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// oris r10,r7,19207
	ctx.r10.u64 = ctx.r7.u64 | 1258749952;
	// lwz r4,18196(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18196);
	// lis r11,19200
	ctx.r11.s64 = 1258291200;
	// ori r10,r10,9730
	ctx.r10.u64 = ctx.r10.u64 | 9730;
	// oris r9,r3,16384
	ctx.r9.u64 = ctx.r3.u64 | 1073741824;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// ori r8,r5,16
	ctx.r8.u64 = ctx.r5.u64 | 16;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// bne cr6,0x822f4650
	if (!ctx.cr6.eq) goto loc_822F4650;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// sth r28,194(r1)
	PPC_STORE_U16(ctx.r1.u32 + 194, ctx.r28.u16);
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r28,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r28.u8);
	// ori r9,r11,8838
	ctx.r9.u64 = ctx.r11.u64 | 8838;
	// stb r28,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r28.u8);
	// sth r10,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r10.u16);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stb r28,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r28.u8);
	// sth r26,204(r1)
	PPC_STORE_U16(ctx.r1.u32 + 204, ctx.r26.u16);
	// sth r28,206(r1)
	PPC_STORE_U16(ctx.r1.u32 + 206, ctx.r28.u16);
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// stb r28,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r28.u8);
	// stb r28,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r28.u8);
	// stb r28,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r28.u8);
	// bl 0x825abaf0
	ctx.lr = 0x822F4648;
	sub_825ABAF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,18196(r27)
	PPC_STORE_U32(ctx.r27.u32 + 18196, ctx.r3.u32);
loc_822F4650:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x825ab9e8
	ctx.lr = 0x822F4658;
	sub_825AB9E8(ctx, base);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x825ab7d0
	ctx.lr = 0x822F4664;
	sub_825AB7D0(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x825ab5c8
	ctx.lr = 0x822F4670;
	sub_825AB5C8(ctx, base);
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r12,1
	ctx.r12.s64 = 1;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,63,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lfs f11,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,1920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1920, temp.u32);
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x825af478
	ctx.lr = 0x822F46BC;
	sub_825AF478(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x825a8690
	ctx.lr = 0x822F46D0;
	sub_825A8690(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x825a8690
	ctx.lr = 0x822F46E4;
	sub_825A8690(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,112
	ctx.r5.s64 = 112;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825abb70
	ctx.lr = 0x822F46F8;
	sub_825ABB70(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825b04f8
	ctx.lr = 0x822F470C;
	sub_825B04F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af570
	ctx.lr = 0x822F4720;
	sub_825AF570(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825abb70
	ctx.lr = 0x822F4734;
	sub_825ABB70(ctx, base);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x825b2428
	ctx.lr = 0x822F473C;
	sub_825B2428(ctx, base);
	// bl 0x825b1010
	ctx.lr = 0x822F4740;
	sub_825B1010(ctx, base);
	// dcbf r0,r31
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbf r8,r31
	// sync 
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lfs f5,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r30,-1564
	ctx.r3.s64 = ctx.r30.s64 + -1564;
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r7,-22520
	ctx.r5.s64 = ctx.r7.s64 + -22520;
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// li r4,400
	ctx.r4.s64 = 400;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfd f5,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f5.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfd f11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f11.u64);
	// stfd f10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfd f0,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// stfd f31,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f31.u64);
	// stfd f30,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f30.u64);
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// stfd f12,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f12.u64);
	// stfd f9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// bl 0x82637620
	ctx.lr = 0x822F47F8;
	sub_82637620(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a3d18
	ctx.lr = 0x822F4800;
	sub_825A3D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3d18
	ctx.lr = 0x822F4808;
	sub_825A3D18(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822F4818:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r30,-1564
	ctx.r3.s64 = ctx.r30.s64 + -1564;
	// addi r5,r11,-22552
	ctx.r5.s64 = ctx.r11.s64 + -22552;
	// li r4,400
	ctx.r4.s64 = 400;
	// bl 0x82637620
	ctx.lr = 0x822F482C;
	sub_82637620(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F4428) {
	__imp__sub_822F4428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F483C) {
	__imp__sub_822F483C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822F4848;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r11,18100
	ctx.r30.s64 = ctx.r11.s64 + 18100;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f4888
	if (!ctx.cr6.eq) goto loc_822F4888;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r5,r11,-22328
	ctx.r5.s64 = ctx.r11.s64 + -22328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82637620
	ctx.lr = 0x822F487C;
	sub_82637620(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822F4888:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x822f4894
	if (ctx.cr6.gt) goto loc_822F4894;
	// li r4,64
	ctx.r4.s64 = 64;
loc_822F4894:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r4,816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 816, ctx.r4.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bne cr6,0x822f48b0
	if (!ctx.cr6.eq) goto loc_822F48B0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822F48B0:
	// stw r3,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r3.u32);
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
loc_822F48B8:
	// lwz r11,18100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f48dc
	if (!ctx.cr6.eq) goto loc_822F48DC;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x825a32b8
	ctx.lr = 0x822F48CC;
	sub_825A32B8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// cmpwi cr6,r31,1000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1000, ctx.xer);
	// blt cr6,0x822f48b8
	if (ctx.cr6.lt) goto loc_822F48B8;
loc_822F48DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f48f0
	if (ctx.cr6.eq) goto loc_822F48F0;
	// addi r6,r30,-1596
	ctx.r6.s64 = ctx.r30.s64 + -1596;
	// b 0x822f48f8
	goto loc_822F48F8;
loc_822F48F0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r6,r11,-22380
	ctx.r6.s64 = ctx.r11.s64 + -22380;
loc_822F48F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,8796
	ctx.r5.s64 = ctx.r11.s64 + 8796;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82637620
	ctx.lr = 0x822F490C;
	sub_82637620(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F4840) {
	__imp__sub_822F4840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822F4928;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// addi r29,r11,18096
	ctx.r29.s64 = ctx.r11.s64 + 18096;
	// lwz r11,-40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4aa4
	if (ctx.cr6.eq) goto loc_822F4AA4;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4aa4
	if (ctx.cr6.eq) goto loc_822F4AA4;
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4aa4
	if (ctx.cr6.eq) goto loc_822F4AA4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f3288
	ctx.lr = 0x822F4968;
	sub_822F3288(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f49bc
	if (ctx.cr6.eq) goto loc_822F49BC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x822f4990
	if (!ctx.cr6.eq) goto loc_822F4990;
	// bl 0x822f4428
	ctx.lr = 0x822F498C;
	sub_822F4428(ctx, base);
	// b 0x822f49b4
	goto loc_822F49B4;
loc_822F4990:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822f49a0
	if (!ctx.cr6.eq) goto loc_822F49A0;
	// bl 0x822f4008
	ctx.lr = 0x822F499C;
	sub_822F4008(ctx, base);
	// b 0x822f49b4
	goto loc_822F49B4;
loc_822F49A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f49b0
	if (!ctx.cr6.lt) goto loc_822F49B0;
	// bl 0x822f3c90
	ctx.lr = 0x822F49AC;
	sub_822F3C90(ctx, base);
	// b 0x822f49b4
	goto loc_822F49B4;
loc_822F49B0:
	// bl 0x822f3788
	ctx.lr = 0x822F49B4;
	sub_822F3788(ctx, base);
loc_822F49B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_822F49BC:
	// lwz r26,184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822f4a64
	if (!ctx.cr6.gt) goto loc_822F4A64;
	// lwz r30,188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822f4a64
	if (!ctx.cr6.gt) goto loc_822F4A64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825aa6f8
	ctx.lr = 0x822F49EC;
	sub_825AA6F8(ctx, base);
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r27,r31,r30
	ctx.r27.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x822f4a58
	if (!ctx.cr6.lt) goto loc_822F4A58;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822F4A1C:
	// cmpwi cr6,r31,720
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 720, ctx.xer);
	// bge cr6,0x822f4a58
	if (!ctx.cr6.lt) goto loc_822F4A58;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82635430
	ctx.lr = 0x822F4A48;
	sub_82635430(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,5120
	ctx.r30.s64 = ctx.r30.s64 + 5120;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822f4a1c
	if (ctx.cr6.lt) goto loc_822F4A1C;
loc_822F4A58:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x825a9390
	ctx.lr = 0x822F4A64;
	sub_825A9390(ctx, base);
loc_822F4A64:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -40);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// bl 0x825aa970
	ctx.lr = 0x822F4A7C;
	sub_825AA970(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822f3538
	ctx.lr = 0x822F4A84;
	sub_822F3538(ctx, base);
	// lwz r4,-28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// lwz r3,-40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -40);
	// bl 0x825ab5c8
	ctx.lr = 0x822F4A90;
	sub_825AB5C8(ctx, base);
	// bl 0x822f34d0
	ctx.lr = 0x822F4A94;
	sub_822F34D0(ctx, base);
	// lwz r3,-40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -40);
	// bl 0x825ad7d8
	ctx.lr = 0x822F4A9C;
	sub_825AD7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f32f0
	ctx.lr = 0x822F4AA4;
	sub_822F32F0(ctx, base);
loc_822F4AA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F4920) {
	__imp__sub_822F4920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F4AAC) {
	__imp__sub_822F4AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,824
	ctx.r10.s64 = ctx.r11.s64 + 824;
	// stw r4,824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 824, ctx.r4.u32);
	// stw r3,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F4AB0) {
	__imp__sub_822F4AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F4AC4) {
	__imp__sub_822F4AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r31,r11,18064
	ctx.r31.s64 = ctx.r11.s64 + 18064;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f4ca4
	if (ctx.cr6.eq) goto loc_822F4CA4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f4ca4
	if (ctx.cr6.eq) goto loc_822F4CA4;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r9,824
	ctx.r7.s64 = ctx.r9.s64 + 824;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// lwz r11,824(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 824);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lwz r10,-4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfs f0,29352(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29352);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f12,-22304(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22304);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfs f11,-22308(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -22308);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// lfs f13,264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfd f5,104(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// fnmsubs f10,f1,f11,f0
	ctx.f10.f64 = double(float(-(ctx.f1.f64 * ctx.f11.f64 - ctx.f0.f64)));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmsubs f9,f13,f12,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fnmsubs f8,f2,f11,f10
	ctx.f8.f64 = double(float(-(ctx.f2.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f8,188(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmadds f7,f3,f12,f9
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,184(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x825aa970
	ctx.lr = 0x822F4C04;
	sub_825AA970(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x825a7798
	ctx.lr = 0x822F4C14;
	sub_825A7798(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x825a7940
	ctx.lr = 0x822F4C24;
	sub_825A7940(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f4c38
	if (ctx.cr6.eq) goto loc_822F4C38;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x822f4c3c
	goto loc_822F4C3C;
loc_822F4C38:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_822F4C3C:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x825ab5c8
	ctx.lr = 0x822F4C44;
	sub_825AB5C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x825a5f90
	ctx.lr = 0x822F4C50;
	sub_825A5F90(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x825a60b0
	ctx.lr = 0x822F4C5C;
	sub_825A60B0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x825a6140
	ctx.lr = 0x822F4C68;
	sub_825A6140(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x825ab9e8
	ctx.lr = 0x822F4C74;
	sub_825AB9E8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x825ab7d0
	ctx.lr = 0x822F4C80;
	sub_825AB7D0(ctx, base);
	// li r7,24
	ctx.r7.s64 = 24;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x825b04b0
	ctx.lr = 0x822F4C98;
	sub_825B04B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x825a5f90
	ctx.lr = 0x822F4CA4;
	sub_825A5F90(ctx, base);
loc_822F4CA4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F4AC8) {
	__imp__sub_822F4AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822F4CC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r29,r11,18060
	ctx.r29.s64 = ctx.r11.s64 + 18060;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// bl 0x826477c4
	ctx.lr = 0x822F4CDC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x822f4d00
	if (!ctx.cr6.eq) goto loc_822F4D00;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4d00
	if (ctx.cr6.eq) goto loc_822F4D00;
	// bl 0x825a57b8
	ctx.lr = 0x822F4D00;
	sub_825A57B8(ctx, base);
loc_822F4D00:
	// bl 0x822f3348
	ctx.lr = 0x822F4D04;
	sub_822F3348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f4d40
	if (ctx.cr6.eq) goto loc_822F4D40;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x822f4d2c
	if (!ctx.cr0.eq) goto loc_822F4D2C;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4d2c
	if (ctx.cr6.eq) goto loc_822F4D2C;
	// bl 0x825a57f8
	ctx.lr = 0x822F4D2C;
	sub_825A57F8(ctx, base);
loc_822F4D2C:
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// bl 0x826477b4
	ctx.lr = 0x822F4D34;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822F4D40:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x822f4d78
	if (!ctx.cr6.eq) goto loc_822F4D78;
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x822f4d78
	if (!ctx.cr6.eq) goto loc_822F4D78;
	// lwz r11,-688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4d78
	if (ctx.cr6.eq) goto loc_822F4D78;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f32f0
	ctx.lr = 0x822F4D6C;
	sub_822F32F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822F4D78:
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r25,r11,2
	ctx.r25.u64 = ctx.r11.u64 | 2;
	// ori r27,r10,14
	ctx.r27.u64 = ctx.r10.u64 | 14;
loc_822F4D8C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_822F4D90:
	// add r11,r26,r28
	ctx.r11.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r31,r29,-688
	ctx.r31.s64 = ctx.r29.s64 + -688;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4dac
	if (ctx.cr6.eq) goto loc_822F4DAC;
	// bl 0x825afa80
	ctx.lr = 0x822F4DAC;
	sub_825AFA80(ctx, base);
loc_822F4DAC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822f4dc8
	if (ctx.cr6.eq) goto loc_822F4DC8;
	// srawi r11,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 1;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 1;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// b 0x822f4dd0
	goto loc_822F4DD0;
loc_822F4DC8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_822F4DD0:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825aa718
	ctx.lr = 0x822F4DEC;
	sub_825AA718(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 & ctx.r27.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x822f4e70
	if (ctx.cr6.lt) goto loc_822F4E70;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// blt cr6,0x822f4d90
	if (ctx.cr6.lt) goto loc_822F4D90;
	// addi r26,r26,3
	ctx.r26.s64 = ctx.r26.s64 + 3;
	// cmpwi cr6,r26,9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 9, ctx.xer);
	// blt cr6,0x822f4d8c
	if (ctx.cr6.lt) goto loc_822F4D8C;
	// stw r24,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r24.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r23,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r23.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-22300
	ctx.r3.s64 = ctx.r11.s64 + -22300;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822F4E3C;
	sub_822EBBC8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x822f4e5c
	if (!ctx.cr0.eq) goto loc_822F4E5C;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4e5c
	if (ctx.cr6.eq) goto loc_822F4E5C;
	// bl 0x825a57f8
	ctx.lr = 0x822F4E5C;
	sub_825A57F8(ctx, base);
loc_822F4E5C:
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// bl 0x826477b4
	ctx.lr = 0x822F4E64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
loc_822F4E70:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x822f4e90
	if (!ctx.cr0.eq) goto loc_822F4E90;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4e90
	if (ctx.cr6.eq) goto loc_822F4E90;
	// bl 0x825a57f8
	ctx.lr = 0x822F4E90;
	sub_825A57F8(ctx, base);
loc_822F4E90:
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// bl 0x826477b4
	ctx.lr = 0x822F4E98;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F4CB8) {
	__imp__sub_822F4CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F4EA4) {
	__imp__sub_822F4EA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822F4EB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x825aa6f8
	ctx.lr = 0x822F4EDC;
	sub_825AA6F8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822f4f14
	if (!ctx.cr6.gt) goto loc_822F4F14;
loc_822F4EE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82635430
	ctx.lr = 0x822F4F04;
	sub_82635430(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822f4ee8
	if (ctx.cr6.lt) goto loc_822F4EE8;
loc_822F4F14:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825a9390
	ctx.lr = 0x822F4F20;
	sub_825A9390(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F4EA8) {
	__imp__sub_822F4EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,50
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 50, ctx.xer);
	// bge cr6,0x822f4f38
	if (!ctx.cr6.lt) goto loc_822F4F38;
	// li r3,50
	ctx.r3.s64 = 50;
	// b 0x822f4f44
	goto loc_822F4F44;
loc_822F4F38:
	// cmpwi cr6,r3,200
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 200, ctx.xer);
	// ble cr6,0x822f4f44
	if (!ctx.cr6.gt) goto loc_822F4F44;
	// li r3,200
	ctx.r3.s64 = 200;
loc_822F4F44:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,15240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15240);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,832(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 832, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F4F28) {
	__imp__sub_822F4F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822F4F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4fc0
	if (ctx.cr6.eq) goto loc_822F4FC0;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r30,r11,16440
	ctx.r30.s64 = ctx.r11.s64 + 16440;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
loc_822F4F94:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822f4fb0
	if (!ctx.cr6.eq) goto loc_822F4FB0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825b2460
	ctx.lr = 0x822F4FA8;
	sub_825B2460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f4fcc
	if (!ctx.cr6.eq) goto loc_822F4FCC;
loc_822F4FB0:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 + 68;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f4f94
	if (ctx.cr6.lt) goto loc_822F4F94;
loc_822F4FC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822F4FCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F4F70) {
	__imp__sub_822F4F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F4FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634444
	ctx.lr = 0x822F4FE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// rlwinm r24,r4,0,0,19
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// subf r23,r24,r4
	ctx.r23.s64 = ctx.r4.s64 - ctx.r24.s64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// divw r29,r23,r5
	ctx.r29.s32 = ctx.r23.s32 / ctx.r5.s32;
	// rotlwi r10,r23,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lis r7,10240
	ctx.r7.s64 = 671088640;
	// andc r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r10.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// twllei r5,0
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// twlgei r11,-1
	// bl 0x825c5960
	ctx.lr = 0x822F5064;
	sub_825C5960(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825c5a40
	ctx.lr = 0x822F5070;
	sub_825C5A40(ctx, base);
	// divw r7,r23,r27
	ctx.r7.s32 = ctx.r23.s32 / ctx.r27.s32;
	// extsw r6,r30
	ctx.r6.s64 = ctx.r30.s32;
	// mullw r5,r7,r27
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// subf r4,r5,r23
	ctx.r4.s64 = ctx.r23.s64 - ctx.r5.s64;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// extsw r3,r29
	ctx.r3.s64 = ctx.r29.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// extsw r9,r26
	ctx.r9.s64 = ctx.r26.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// extsw r8,r31
	ctx.r8.s64 = ctx.r31.s32;
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f11,144(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f10,128(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f9,144(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// rotlwi r11,r23,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// fcfid f3,f12
	ctx.f3.f64 = double(ctx.f12.s64);
	// twllei r27,0
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// andc r6,r27,r7
	ctx.r6.u64 = ctx.r27.u64 & ~ctx.r7.u64;
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// twlgei r6,-1
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// fdivs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f8,8(r25)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// fdivs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// stfs f10,0(r25)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// fdivs f9,f13,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// stfs f9,4(r25)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// fdivs f7,f11,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f2.f64));
	// stfs f7,12(r25)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82634494
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F4FD8) {
	__imp__sub_822F4FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F5130) {
	PPC_FUNC_PROLOGUE();
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lis r10,-31994
	ctx.r10.s64 = -2096758784;
	// addi r9,r10,16160
	ctx.r9.s64 = ctx.r10.s64 + 16160;
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// stw r3,16160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16160, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F5130) {
	__imp__sub_822F5130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F5148) {
	PPC_FUNC_PROLOGUE();
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r11,r11,16160
	ctx.r11.s64 = ctx.r11.s64 + 16160;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,76
	ctx.r8.s64 = 4980736;
	// ori r7,r8,6764
	ctx.r7.u64 = ctx.r8.u64 | 6764;
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r9,1544(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1544);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r7,1544(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1544, ctx.r7.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F5148) {
	__imp__sub_822F5148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F519C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F519C) {
	__imp__sub_822F519C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F51A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634424
	ctx.lr = 0x822F51A8;
	__savegprlr_15(ctx, base);
	// stfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f29.u64);
	// stfd f30,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r31,r11,18144
	ctx.r31.s64 = ctx.r11.s64 + 18144;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// lwz r11,-88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f55c0
	if (ctx.cr6.eq) goto loc_822F55C0;
	// lwz r11,-772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f55c0
	if (ctx.cr6.eq) goto loc_822F55C0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822f3288
	ctx.lr = 0x822F51F4;
	sub_822F3288(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822f5204
	if (!ctx.cr6.gt) goto loc_822F5204;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_822F5204:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822f5214
	if (!ctx.cr6.gt) goto loc_822F5214;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_822F5214:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lis r19,-32155
	ctx.r19.s64 = -2107310080;
	// li r17,49
	ctx.r17.s64 = 49;
	// divdu r16,r11,r17
	ctx.r16.u64 = ctx.r11.u64 / ctx.r17.u64;
	// lwz r6,828(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 828);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822f52a0
	if (ctx.cr6.eq) goto loc_822F52A0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r7,r31,-772
	ctx.r7.s64 = ctx.r31.s64 + -772;
	// addi r9,r31,-1240
	ctx.r9.s64 = ctx.r31.s64 + -1240;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r8,r11,156
	ctx.r8.s64 = ctx.r11.s64 * 156;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r18,1
	ctx.r18.s64 = 1;
	// add r22,r11,r7
	ctx.r22.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// add r23,r8,r9
	ctx.r23.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 + 264;
	// li r30,0
	ctx.r30.s64 = 0;
	// rldicr r27,r10,63,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822f55d8
	goto loc_822F55D8;
loc_822F52A0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r10,r31,-772
	ctx.r10.s64 = ctx.r31.s64 + -772;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822f4ea8
	ctx.lr = 0x822F52D4;
	sub_822F4EA8(ctx, base);
	// srawi r10,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 1;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// srawi r9,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r20.s32 >> 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addze r29,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r29.s64 = temp.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x822f4ea8
	ctx.lr = 0x822F52FC;
	sub_822F4EA8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,8(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x822f4ea8
	ctx.lr = 0x822F5314;
	sub_822F4EA8(ctx, base);
	// extsw r7,r20
	ctx.r7.s64 = ctx.r20.s32;
	// extsw r8,r21
	ctx.r8.s64 = ctx.r21.s32;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// lfd f13,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// lfd f0,224(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// addi r29,r11,-12
	ctx.r29.s64 = ctx.r11.s64 + -12;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// frsp f29,f12
	ctx.f29.f64 = double(float(ctx.f12.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 + 264;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// rldicr r27,r10,63,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
loc_822F5360:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lwzu r5,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r6,r27,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x825aa970
	ctx.lr = 0x822F537C;
	sub_825AA970(ctx, base);
	// lwz r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// stfs f31,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// lfd f13,216(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// lfd f0,224(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f7,f29,f9
	ctx.f7.f64 = double(float(ctx.f29.f64 / ctx.f9.f64));
	// stfs f7,12(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// fdivs f8,f30,f10
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// stfs f8,8(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfsu f31,16(r29)
	// blt cr6,0x822f5360
	if (ctx.cr6.lt) goto loc_822F5360;
loc_822F53D0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// ori r9,r10,21846
	ctx.r9.u64 = ctx.r10.u64 | 21846;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// li r30,0
	ctx.r30.s64 = 0;
	// divdu r29,r7,r17
	ctx.r29.u64 = ctx.r7.u64 / ctx.r17.u64;
loc_822F5408:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f3538
	ctx.lr = 0x822F5410;
	sub_822F3538(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x822f5408
	if (ctx.cr6.lt) goto loc_822F5408;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ab4b8
	ctx.lr = 0x822F5434;
	sub_825AB4B8(ctx, base);
	// lwz r11,-88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stfs f31,6068(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6068, temp.u32);
	// lfs f0,832(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6064(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6064, temp.u32);
	// stfs f31,6072(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6072, temp.u32);
	// stfs f31,6076(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6076, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// or r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 | ctx.r27.u64;
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,-72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// bl 0x825ab5c8
	ctx.lr = 0x822F546C;
	sub_825AB5C8(ctx, base);
	// lwz r11,-1980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1980);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r6,-1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1980, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r7,20784
	ctx.r5.s64 = ctx.r7.s64 + 20784;
	// bl 0x825b2648
	ctx.lr = 0x822F548C;
	sub_825B2648(ctx, base);
	// lwz r4,-60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// bl 0x825ab9e8
	ctx.lr = 0x822F5498;
	sub_825AB9E8(ctx, base);
	// lwz r4,-80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// bl 0x825ab7d0
	ctx.lr = 0x822F54A4;
	sub_825AB7D0(ctx, base);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r6,-23152
	ctx.r6.s64 = ctx.r6.s64 + -23152;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x825b04b0
	ctx.lr = 0x822F54C0;
	sub_825B04B0(ctx, base);
	// bl 0x822f4ac8
	ctx.lr = 0x822F54C4;
	sub_822F4AC8(ctx, base);
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// bl 0x825ad7d8
	ctx.lr = 0x822F54CC;
	sub_825AD7D8(ctx, base);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,-1980(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1980);
	// addi r5,r5,20808
	ctx.r5.s64 = ctx.r5.s64 + 20808;
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// bl 0x825b2648
	ctx.lr = 0x822F54E4;
	sub_825B2648(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x822f5534
	if (ctx.cr6.eq) goto loc_822F5534;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r31,-1704
	ctx.r10.s64 = ctx.r31.s64 + -1704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x825b2428
	ctx.lr = 0x822F5508;
	sub_825B2428(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r31,-1704
	ctx.r10.s64 = ctx.r31.s64 + -1704;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r5,r31,-1704
	ctx.r5.s64 = ctx.r31.s64 + -1704;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// stwx r3,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r3.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stwx r3,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r3.u32);
loc_822F5534:
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lis r5,-31994
	ctx.r5.s64 = -2096758784;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divdu r4,r10,r17
	ctx.r4.u64 = ctx.r10.u64 / ctx.r17.u64;
	// addi r3,r5,16104
	ctx.r3.s64 = ctx.r5.s64 + 16104;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r7,r29,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r29.s64;
	// ld r10,16104(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16104);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ld r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// subf r6,r16,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r16.s64;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// std r10,16104(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16104, ctx.r10.u64);
	// add r10,r6,r29
	ctx.r10.u64 = ctx.r6.u64 + ctx.r29.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// beq cr6,0x822f5598
	if (ctx.cr6.eq) goto loc_822F5598;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F5598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F5598:
	// lwz r11,-84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-84(r31)
	PPC_STORE_U32(ctx.r31.u32 + -84, ctx.r11.u32);
	// bne 0x822f55b8
	if (!ctx.cr0.eq) goto loc_822F55B8;
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f55b8
	if (ctx.cr6.eq) goto loc_822F55B8;
	// bl 0x825a57f8
	ctx.lr = 0x822F55B8;
	sub_825A57F8(ctx, base);
loc_822F55B8:
	// addi r3,r31,-116
	ctx.r3.s64 = ctx.r31.s64 + -116;
	// bl 0x826477b4
	ctx.lr = 0x822F55C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_822F55C0:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f30,-160(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82634474
	__restgprlr_15(ctx, base);
	return;
loc_822F55D4:
	// lwz r6,828(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 828);
loc_822F55D8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822f55f4
	if (ctx.cr6.eq) goto loc_822F55F4;
	// srawi r11,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r20.s32 >> 1;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r26.s64 = temp.s64;
	// srawi r11,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 1;
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	// b 0x822f55fc
	goto loc_822F55FC;
loc_822F55F4:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_822F55FC:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x822f5610
	if (!ctx.cr6.eq) goto loc_822F5610;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822f564c
	if (!ctx.cr6.eq) goto loc_822F564C;
	// b 0x822f5620
	goto loc_822F5620;
loc_822F5610:
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bne cr6,0x822f5620
	if (!ctx.cr6.eq) goto loc_822F5620;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822f564c
	if (ctx.cr6.eq) goto loc_822F564C;
loc_822F5620:
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// lwzx r11,r9,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// clrlwi r8,r10,20
	ctx.r8.u64 = ctx.r10.u32 & 0xFFF;
	// twllei r11,0
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// mullw r5,r7,r11
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r4,r8,r26
	ctx.r4.u64 = ctx.r8.u64 + ctx.r26.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822f572c
	if (!ctx.cr6.gt) goto loc_822F572C;
loc_822F564C:
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwzx r5,r29,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// lwzx r4,r29,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// lwzx r3,r29,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// bl 0x822f4ea8
	ctx.lr = 0x822F5668;
	sub_822F4EA8(ctx, base);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r5,r29,r22
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r6,r27,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x825aa970
	ctx.lr = 0x822F5684;
	sub_825AA970(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822f5698
	if (ctx.cr6.eq) goto loc_822F5698;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
loc_822F5698:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// lfd f13,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lfd f0,200(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// stfsx f8,r11,r8
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// beq cr6,0x822f56e4
	if (ctx.cr6.eq) goto loc_822F56E4;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
loc_822F56E4:
	// extsw r9,r28
	ctx.r9.s64 = ctx.r28.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// addi r7,r1,260
	ctx.r7.s64 = ctx.r1.s64 + 260;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// addi r6,r1,268
	ctx.r6.s64 = ctx.r1.s64 + 268;
	// addi r5,r1,264
	ctx.r5.s64 = ctx.r1.s64 + 264;
	// stfsx f31,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// stfsx f31,r11,r5
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// lfd f0,216(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lfd f13,224(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// stfsx f8,r11,r7
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// b 0x822f57e0
	goto loc_822F57E0;
loc_822F572C:
	// mullw r8,r11,r28
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bne cr6,0x822f576c
	if (!ctx.cr6.eq) goto loc_822F576C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f5794
	if (!ctx.cr6.lt) goto loc_822F5794;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F575C:
	// dcbf r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f575c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F575C;
	// b 0x822f5794
	goto loc_822F5794;
loc_822F576C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f5794
	if (!ctx.cr6.lt) goto loc_822F5794;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F5788:
	// dcbst r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f5788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F5788;
loc_822F5794:
	// sync 
	// mulli r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 * 52;
	// lwzx r5,r9,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// lwzx r4,r9,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x822f4fd8
	ctx.lr = 0x822F57C4;
	sub_822F4FD8(ctx, base);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r6,r27,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x825aa970
	ctx.lr = 0x822F57E0;
	sub_825AA970(ctx, base);
loc_822F57E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x822f55d4
	if (ctx.cr6.lt) goto loc_822F55D4;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// lwz r4,828(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 828);
	// lwz r10,18200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18200);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822f53d0
	if (ctx.cr6.eq) goto loc_822F53D0;
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// lfs f3,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lfs f1,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f1.f64 = double(temp.f32);
	// lwz r30,32(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// lfs f4,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f4.f64 = double(temp.f32);
	// lwz r29,28(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// stfd f3,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f3.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f2,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f4,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f4.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// lfs f7,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f7.f64 = double(temp.f32);
	// lwz r28,88(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// lfs f6,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f6.f64 = double(temp.f32);
	// lwz r26,84(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// stfd f7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f7.u64);
	// lwz r23,80(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	// stfd f6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f6.u64);
	// lwz r22,8(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r21,8(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lwz r20,4(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lfs f8,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// lwz r19,4(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r3,r6,-22240
	ctx.r3.s64 = ctx.r6.s64 + -22240;
	// lfs f5,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f5.f64 = double(temp.f32);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stfd f8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f8.u64);
	// stfd f5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f5.u64);
	// stw r4,18200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18200, ctx.r4.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x822ebbc8
	ctx.lr = 0x822F58B8;
	sub_822EBBC8(ctx, base);
	// b 0x822f53d0
	goto loc_822F53D0;
}

PPC_WEAK_FUNC(sub_822F51A0) {
	__imp__sub_822F51A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F58BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F58BC) {
	__imp__sub_822F58BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F58C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r31,r11,18060
	ctx.r31.s64 = ctx.r11.s64 + 18060;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x826477c4
	ctx.lr = 0x822F58E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x822f5908
	if (!ctx.cr6.eq) goto loc_822F5908;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5914
	if (ctx.cr6.eq) goto loc_822F5914;
	// bl 0x825a57b8
	ctx.lr = 0x822F5904;
	sub_825A57B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822F5908:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f5924
	if (!ctx.cr6.eq) goto loc_822F5924;
loc_822F5914:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x822f5974
	if (!ctx.cr0.eq) goto loc_822F5974;
	// b 0x822f5968
	goto loc_822F5968;
loc_822F5924:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,29352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29352);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825aeb68
	ctx.lr = 0x822F5948;
	sub_825AEB68(ctx, base);
	// bl 0x822f4ac8
	ctx.lr = 0x822F594C;
	sub_822F4AC8(ctx, base);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x825ad7d8
	ctx.lr = 0x822F5954;
	sub_825AD7D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x822f5974
	if (!ctx.cr0.eq) goto loc_822F5974;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
loc_822F5968:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5974
	if (ctx.cr6.eq) goto loc_822F5974;
	// bl 0x825a57f8
	ctx.lr = 0x822F5974;
	sub_825A57F8(ctx, base);
loc_822F5974:
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x826477b4
	ctx.lr = 0x822F597C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

PPC_WEAK_FUNC(sub_822F58C0) {
	__imp__sub_822F58C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F5990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// stw r3,18144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18144, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F5990) {
	__imp__sub_822F5990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F599C) {
	__imp__sub_822F599C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F59A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822F59A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r31,r11,18060
	ctx.r31.s64 = ctx.r11.s64 + 18060;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x826477c4
	ctx.lr = 0x822F59BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x822f59e4
	if (!ctx.cr6.eq) goto loc_822F59E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f59e4
	if (ctx.cr6.eq) goto loc_822F59E4;
	// bl 0x825a57b8
	ctx.lr = 0x822F59E0;
	sub_825A57B8(ctx, base);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
loc_822F59E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// rldicr r29,r11,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_822F59F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5a14
	if (ctx.cr6.eq) goto loc_822F5A14;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x825aa970
	ctx.lr = 0x822F5A10;
	sub_825AA970(ctx, base);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
loc_822F5A14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x822f59f0
	if (ctx.cr6.lt) goto loc_822F59F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x822f5a3c
	if (!ctx.cr0.eq) goto loc_822F5A3C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5a3c
	if (ctx.cr6.eq) goto loc_822F5A3C;
	// bl 0x825a57f8
	ctx.lr = 0x822F5A3C;
	sub_825A57F8(ctx, base);
loc_822F5A3C:
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x826477b4
	ctx.lr = 0x822F5A44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F59A0) {
	__imp__sub_822F59A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F5A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F5A4C) {
	__imp__sub_822F5A4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F5A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r11,16104
	ctx.r11.s64 = ctx.r11.s64 + 16104;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// ori r7,r10,49875
	ctx.r7.u64 = ctx.r10.u64 | 49875;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// ld r6,1600(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1600);
	// mulli r5,r6,1000
	ctx.r5.s64 = ctx.r6.s64 * 1000;
	// divdu r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 / ctx.r7.u64;
	// std r8,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r8.u64);
loc_822F5A80:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x822f5a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F5A80;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F5A50) {
	__imp__sub_822F5A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F5A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822F5A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,18160
	ctx.r31.s64 = ctx.r11.s64 + 18160;
	// beq cr6,0x822f5bb0
	if (ctx.cr6.eq) goto loc_822F5BB0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822f5bb0
	if (!ctx.cr6.gt) goto loc_822F5BB0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822f5bb0
	if (!ctx.cr6.gt) goto loc_822F5BB0;
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5bb0
	if (ctx.cr6.eq) goto loc_822F5BB0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f3288
	ctx.lr = 0x822F5ADC;
	sub_822F3288(ctx, base);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5b10
	if (ctx.cr6.eq) goto loc_822F5B10;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f5b0c
	if (!ctx.cr6.eq) goto loc_822F5B0C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822f5b0c
	if (!ctx.cr6.eq) goto loc_822F5B0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822f5b84
	if (ctx.cr6.eq) goto loc_822F5B84;
loc_822F5B0C:
	// bl 0x825afa80
	ctx.lr = 0x822F5B10;
	sub_825AFA80(ctx, base);
loc_822F5B10:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lis r8,10240
	ctx.r8.s64 = 671088640;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825aa718
	ctx.lr = 0x822F5B44;
	sub_825AA718(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r3.u32);
	// ori r8,r11,14
	ctx.r8.u64 = ctx.r11.u64 | 14;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x822f5b7c
	if (!ctx.cr6.lt) goto loc_822F5B7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// bl 0x822f32f0
	ctx.lr = 0x822F5B74;
	sub_822F32F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822F5B7C:
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_822F5B84:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822f4ea8
	ctx.lr = 0x822F5B98;
	sub_822F4EA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// bl 0x822f32f0
	ctx.lr = 0x822F5BA8;
	sub_822F32F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822F5BB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F5A90) {
	__imp__sub_822F5A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F5BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822F5BC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,18160
	ctx.r31.s64 = ctx.r11.s64 + 18160;
	// beq cr6,0x822f5ce4
	if (ctx.cr6.eq) goto loc_822F5CE4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822f5ce4
	if (!ctx.cr6.gt) goto loc_822F5CE4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822f5ce4
	if (!ctx.cr6.gt) goto loc_822F5CE4;
	// lwz r11,-104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5ce4
	if (ctx.cr6.eq) goto loc_822F5CE4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f3288
	ctx.lr = 0x822F5C0C;
	sub_822F3288(ctx, base);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5c40
	if (ctx.cr6.eq) goto loc_822F5C40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f5c3c
	if (ctx.cr6.eq) goto loc_822F5C3C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822f5c3c
	if (!ctx.cr6.eq) goto loc_822F5C3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822f5cb8
	if (ctx.cr6.eq) goto loc_822F5CB8;
loc_822F5C3C:
	// bl 0x825afa80
	ctx.lr = 0x822F5C40;
	sub_825AFA80(ctx, base);
loc_822F5C40:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,134
	ctx.r8.u64 = ctx.r8.u64 | 134;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825aa718
	ctx.lr = 0x822F5C78;
	sub_825AA718(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r3.u32);
	// ori r8,r11,14
	ctx.r8.u64 = ctx.r11.u64 | 14;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x822f5cb0
	if (!ctx.cr6.lt) goto loc_822F5CB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// bl 0x822f32f0
	ctx.lr = 0x822F5CA8;
	sub_822F32F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822F5CB0:
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_822F5CB8:
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822f4ea8
	ctx.lr = 0x822F5CCC;
	sub_822F4EA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// bl 0x822f32f0
	ctx.lr = 0x822F5CDC;
	sub_822F32F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
loc_822F5CE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F5BC0) {
	__imp__sub_822F5BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F5CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F5CF4) {
	__imp__sub_822F5CF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F5CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822F5D00;
	__savegprlr_26(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r30,r11,17448
	ctx.r30.s64 = ctx.r11.s64 + 17448;
	// lwz r11,732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f6008
	if (!ctx.cr6.eq) goto loc_822F6008;
	// li r5,6
	ctx.r5.s64 = 6;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r8,7
	ctx.r8.s64 = 7;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lis r3,44
	ctx.r3.s64 = 2883584;
	// sth r5,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r5.u16);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// stb r5,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r5.u8);
	// ori r29,r3,9049
	ctx.r29.u64 = ctx.r3.u64 | 9049;
	// sth r8,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r8.u16);
	// stb r8,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r8.u8);
	// ori r10,r10,8838
	ctx.r10.u64 = ctx.r10.u64 | 8838;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// li r31,255
	ctx.r31.s64 = 255;
	// sth r6,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r6.u16);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// li r29,2
	ctx.r29.s64 = 2;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r6,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r6.u8);
	// sth r7,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r7.u16);
	// sth r11,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r11.u16);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// sth r9,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r9.u16);
	// sth r11,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// stb r9,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r9.u8);
	// sth r11,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r11.u16);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stb r11,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r11.u8);
	// sth r11,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r11.u16);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// sth r4,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r4.u16);
	// sth r11,154(r1)
	PPC_STORE_U16(ctx.r1.u32 + 154, ctx.r11.u16);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// stb r9,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r9.u8);
	// stb r11,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r11.u8);
	// sth r31,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r31.u16);
	// sth r11,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r11.u16);
	// stw r5,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// stb r11,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r11.u8);
	// stb r11,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r11.u8);
	// stb r11,174(r1)
	PPC_STORE_U8(ctx.r1.u32 + 174, ctx.r11.u8);
	// sth r11,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
	// sth r11,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r11.u16);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stb r11,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// stb r11,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r11.u8);
	// stb r11,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
	// sth r11,188(r1)
	PPC_STORE_U16(ctx.r1.u32 + 188, ctx.r11.u16);
	// sth r7,190(r1)
	PPC_STORE_U16(ctx.r1.u32 + 190, ctx.r7.u16);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// stb r9,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r9.u8);
	// stb r11,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, ctx.r11.u8);
	// sth r11,200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 200, ctx.r11.u16);
	// sth r4,202(r1)
	PPC_STORE_U16(ctx.r1.u32 + 202, ctx.r4.u16);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stb r11,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r11.u8);
	// stb r9,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r9.u8);
	// stb r8,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r8.u8);
	// li r28,9
	ctx.r28.s64 = 9;
	// sth r3,214(r1)
	PPC_STORE_U16(ctx.r1.u32 + 214, ctx.r3.u16);
	// li r27,10
	ctx.r27.s64 = 10;
	// sth r3,262(r1)
	PPC_STORE_U16(ctx.r1.u32 + 262, ctx.r3.u16);
	// li r26,15
	ctx.r26.s64 = 15;
	// sth r11,212(r1)
	PPC_STORE_U16(ctx.r1.u32 + 212, ctx.r11.u16);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r11.u8);
	// stb r9,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r9.u8);
	// stb r29,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r29.u8);
	// sth r8,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r8.u16);
	// sth r11,226(r1)
	PPC_STORE_U16(ctx.r1.u32 + 226, ctx.r11.u16);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stb r11,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r11.u8);
	// stb r11,233(r1)
	PPC_STORE_U8(ctx.r1.u32 + 233, ctx.r11.u8);
	// stb r8,234(r1)
	PPC_STORE_U8(ctx.r1.u32 + 234, ctx.r8.u8);
	// sth r8,236(r1)
	PPC_STORE_U16(ctx.r1.u32 + 236, ctx.r8.u16);
	// sth r7,238(r1)
	PPC_STORE_U16(ctx.r1.u32 + 238, ctx.r7.u16);
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// stb r11,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r11.u8);
	// stb r9,245(r1)
	PPC_STORE_U8(ctx.r1.u32 + 245, ctx.r9.u8);
	// stb r4,246(r1)
	PPC_STORE_U8(ctx.r1.u32 + 246, ctx.r4.u8);
	// sth r8,248(r1)
	PPC_STORE_U16(ctx.r1.u32 + 248, ctx.r8.u16);
	// sth r4,250(r1)
	PPC_STORE_U16(ctx.r1.u32 + 250, ctx.r4.u16);
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stb r11,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r11.u8);
	// stb r9,257(r1)
	PPC_STORE_U8(ctx.r1.u32 + 257, ctx.r9.u8);
	// stb r28,258(r1)
	PPC_STORE_U8(ctx.r1.u32 + 258, ctx.r28.u8);
	// sth r8,260(r1)
	PPC_STORE_U16(ctx.r1.u32 + 260, ctx.r8.u16);
	// stw r10,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// stb r11,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r11.u8);
	// stb r9,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r9.u8);
	// stb r27,270(r1)
	PPC_STORE_U8(ctx.r1.u32 + 270, ctx.r27.u8);
	// sth r6,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r6.u16);
	// sth r11,274(r1)
	PPC_STORE_U16(ctx.r1.u32 + 274, ctx.r11.u16);
	// stw r10,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// stb r11,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r11.u8);
	// stb r11,281(r1)
	PPC_STORE_U8(ctx.r1.u32 + 281, ctx.r11.u8);
	// stb r6,282(r1)
	PPC_STORE_U8(ctx.r1.u32 + 282, ctx.r6.u8);
	// sth r6,284(r1)
	PPC_STORE_U16(ctx.r1.u32 + 284, ctx.r6.u16);
	// sth r7,286(r1)
	PPC_STORE_U16(ctx.r1.u32 + 286, ctx.r7.u16);
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// stb r11,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r11.u8);
	// stb r9,293(r1)
	PPC_STORE_U8(ctx.r1.u32 + 293, ctx.r9.u8);
	// stb r26,294(r1)
	PPC_STORE_U8(ctx.r1.u32 + 294, ctx.r26.u8);
	// sth r31,296(r1)
	PPC_STORE_U16(ctx.r1.u32 + 296, ctx.r31.u16);
	// sth r11,298(r1)
	PPC_STORE_U16(ctx.r1.u32 + 298, ctx.r11.u16);
	// stw r5,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r5.u32);
	// stb r11,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r11.u8);
	// stb r11,305(r1)
	PPC_STORE_U8(ctx.r1.u32 + 305, ctx.r11.u8);
	// stb r11,306(r1)
	PPC_STORE_U8(ctx.r1.u32 + 306, ctx.r11.u8);
	// bl 0x825abaf0
	ctx.lr = 0x822F5F30;
	sub_825ABAF0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,728(r30)
	PPC_STORE_U32(ctx.r30.u32 + 728, ctx.r3.u32);
	// ori r31,r11,14
	ctx.r31.u64 = ctx.r11.u64 | 14;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x822f5f5c
	if (!ctx.cr6.lt) goto loc_822F5F5C;
loc_822F5F50:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822F5F5C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825abaf0
	ctx.lr = 0x822F5F64;
	sub_825ABAF0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,732(r30)
	PPC_STORE_U32(ctx.r30.u32 + 732, ctx.r3.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x822f5f50
	if (ctx.cr6.lt) goto loc_822F5F50;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,11736
	ctx.r3.s64 = ctx.r11.s64 + 11736;
	// bl 0x825abfa0
	ctx.lr = 0x822F5F88;
	sub_825ABFA0(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 724, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x822f5fac
	if (!ctx.cr6.lt) goto loc_822F5FAC;
loc_822F5FA0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822F5FAC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r5,728(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-22108
	ctx.r6.s64 = ctx.r11.s64 + -22108;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b4d88
	ctx.lr = 0x822F5FC4;
	sub_825B4D88(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r11,r10,-24272
	ctx.r11.s64 = ctx.r10.s64 + -24272;
	// addi r28,r11,20
	ctx.r28.s64 = ctx.r11.s64 + 20;
loc_822F5FD4:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825abfa0
	ctx.lr = 0x822F5FDC;
	sub_825ABFA0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x822f5fa0
	if (ctx.cr6.lt) goto loc_822F5FA0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f5fd4
	if (ctx.cr6.lt) goto loc_822F5FD4;
loc_822F6008:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F5CF8) {
	__imp__sub_822F5CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F6014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F6014) {
	__imp__sub_822F6014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F6018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634420
	ctx.lr = 0x822F6020;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82635a1c
	ctx.lr = 0x822F6028;
	__savefpr_21(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4368(r1)
	ea = -4368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// stw r5,4404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4404, ctx.r5.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,4412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4412, ctx.r6.u32);
	// addi r31,r11,18028
	ctx.r31.s64 = ctx.r11.s64 + 18028;
	// stw r7,4420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4420, ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,4428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4428, ctx.r8.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r9,4436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4436, ctx.r9.u32);
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f6098
	if (ctx.cr6.eq) goto loc_822F6098;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822f6098
	if (ctx.cr6.lt) goto loc_822F6098;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x822f6098
	if (!ctx.cr6.lt) goto loc_822F6098;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f3288
	ctx.lr = 0x822F6084;
	sub_822F3288(ctx, base);
	// bl 0x822f5cf8
	ctx.lr = 0x822F6088;
	sub_822F5CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f60ac
	if (ctx.cr6.eq) goto loc_822F60AC;
loc_822F6090:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f32f0
	ctx.lr = 0x822F6098;
	sub_822F32F0(ctx, base);
loc_822F6098:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4368
	ctx.r1.s64 = ctx.r1.s64 + 4368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82635a68
	ctx.lr = 0x822F60A8;
	__restfpr_21(ctx, base);
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
loc_822F60AC:
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// lwz r16,24(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r31,-284
	ctx.r11.s64 = ctx.r31.s64 + -284;
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r6,r16,1
	ctx.r6.s64 = ctx.r16.s64 + 1;
	// lwz r25,12(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r20,16(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// std r9,576(r1)
	PPC_STORE_U64(ctx.r1.u32 + 576, ctx.r9.u64);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// lwz r4,16(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// stw r20,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r20.u32);
	// rlwinm r17,r5,6,0,25
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// li r23,-1
	ctx.r23.s64 = -1;
	// mullw r15,r8,r16
	ctx.r15.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r16.s32);
	// cmplw cr6,r17,r4
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x822f6184
	if (!ctx.cr6.gt) goto loc_822F6184;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f6114
	if (ctx.cr6.eq) goto loc_822F6114;
	// bl 0x825a3d18
	ctx.lr = 0x822F6114;
	sub_825A3D18(ctx, base);
loc_822F6114:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x825a3c20
	ctx.lr = 0x822F6128;
	sub_825A3C20(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r17
	ctx.r8.u64 = ctx.r9.u64 & ctx.r17.u64;
	// stw r8,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r8.u32);
	// beq cr6,0x822f6090
	if (ctx.cr6.eq) goto loc_822F6090;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826344d0
	ctx.lr = 0x822F6150;
	sub_826344D0(ctx, base);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f6184
	if (!ctx.cr6.lt) goto loc_822F6184;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F6178:
	// dcbst r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f6178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F6178;
loc_822F6184:
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x826344d0
	ctx.lr = 0x822F6194;
	sub_826344D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r24,r11,9396
	ctx.r24.s64 = ctx.r11.s64 + 9396;
loc_822F61A0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// bne cr6,0x822f61b0
	if (!ctx.cr6.eq) goto loc_822F61B0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_822F61B0:
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r8,r16,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x822f61d0
	if (!ctx.cr6.eq) goto loc_822F61D0;
	// rlwinm r8,r16,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 4) & 0xFFFFFFF0;
loc_822F61D0:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r6,r27,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,752
	ctx.r8.s64 = ctx.r1.s64 + 752;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// mullw r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stwx r7,r27,r3
	PPC_STORE_U32(ctx.r27.u32 + ctx.r3.u32, ctx.r7.u32);
	// stwx r6,r27,r9
	PPC_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r6.u32);
	// stfsx f12,r27,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, temp.u32);
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// subf r6,r4,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r4.s64;
	// addi r3,r24,1008
	ctx.r3.s64 = ctx.r24.s64 + 1008;
	// bne cr6,0x822f6238
	if (!ctx.cr6.eq) goto loc_822F6238;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_822F6238:
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,11
	ctx.r4.s64 = ctx.r11.s64 + 11;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x822f6384
	if (ctx.cr6.lt) goto loc_822F6384;
	// rlwinm r8,r28,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r4,-3
	ctx.r5.s64 = ctx.r4.s64 + -3;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_822F6264:
	// rlwinm r9,r30,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r26,r1,1120
	ctx.r26.s64 = ctx.r1.s64 + 1120;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stfsx f12,r9,r26
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, temp.u32);
	// bne cr6,0x822f62a0
	if (!ctx.cr6.eq) goto loc_822F62A0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x822f62a4
	if (ctx.cr6.lt) goto loc_822F62A4;
loc_822F62A0:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F62A4:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r30,r1,1120
	ctx.r30.s64 = ctx.r1.s64 + 1120;
	// rlwinm r26,r10,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r26,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r26.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r26,r14,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r26,r30
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r30.u32, temp.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822f62e4
	if (!ctx.cr6.eq) goto loc_822F62E4;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt cr6,0x822f62e8
	if (ctx.cr6.lt) goto loc_822F62E8;
loc_822F62E4:
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F62E8:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r1,1120
	ctx.r30.s64 = ctx.r1.s64 + 1120;
	// rlwinm r26,r10,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r26,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r26.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r26,r14,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r26,r30
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r30.u32, temp.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822f6328
	if (!ctx.cr6.eq) goto loc_822F6328;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt cr6,0x822f632c
	if (ctx.cr6.lt) goto loc_822F632C;
loc_822F6328:
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F632C:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r1,1120
	ctx.r30.s64 = ctx.r1.s64 + 1120;
	// rlwinm r26,r10,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r26,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r26.u64);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r26,r14,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r26,r30
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r30.u32, temp.u32);
	// bne cr6,0x822f636c
	if (!ctx.cr6.eq) goto loc_822F636C;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt cr6,0x822f6370
	if (ctx.cr6.lt) goto loc_822F6370;
loc_822F636C:
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F6370:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822f6264
	if (ctx.cr6.lt) goto loc_822F6264;
loc_822F6384:
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822f63ec
	if (!ctx.cr6.lt) goto loc_822F63EC;
	// subf r8,r7,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r7.s64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822F63A0:
	// rlwinm r8,r30,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r1,1120
	ctx.r7.s64 = ctx.r1.s64 + 1120;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stfsx f12,r4,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, temp.u32);
	// bne cr6,0x822f63dc
	if (!ctx.cr6.eq) goto loc_822F63DC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x822f63e0
	if (ctx.cr6.lt) goto loc_822F63E0;
loc_822F63DC:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F63E0:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822f63a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F63A0;
loc_822F63EC:
	// addi r11,r28,5
	ctx.r11.s64 = ctx.r28.s64 + 5;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r26,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r21.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822f6448
	if (!ctx.cr6.gt) goto loc_822F6448;
	// add r27,r27,r21
	ctx.r27.u64 = ctx.r27.u64 + ctx.r21.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f6414
	if (ctx.cr6.eq) goto loc_822F6414;
	// bl 0x825a3d18
	ctx.lr = 0x822F6414;
	sub_825A3D18(ctx, base);
loc_822F6414:
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3c20
	ctx.lr = 0x822F642C;
	sub_825A3C20(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// stwx r8,r26,r21
	PPC_STORE_U32(ctx.r26.u32 + ctx.r21.u32, ctx.r8.u32);
	// beq cr6,0x822f6090
	if (ctx.cr6.eq) goto loc_822F6090;
loc_822F6448:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// blt cr6,0x822f61a0
	if (ctx.cr6.lt) goto loc_822F61A0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r4,r22,-1
	ctx.r4.s64 = ctx.r22.s64 + -1;
	// bgt cr6,0x822f6464
	if (ctx.cr6.gt) goto loc_822F6464;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822F6464:
	// addic r11,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,16
	ctx.r11.s64 = 16;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r19,0
	ctx.xer.ca = ctx.r19.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r19.s64;
	// and r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 & ctx.r11.u64;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subf r7,r5,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r5.s64;
	// rlwinm r11,r18,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r8,r7,r25
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mullw r10,r5,r25
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f64dc
	if (!ctx.cr6.lt) goto loc_822F64DC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F64D0:
	// dcbst r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f64d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F64D0;
loc_822F64DC:
	// addic r11,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// li r22,8
	ctx.r22.s64 = 8;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r19,0
	ctx.xer.ca = ctx.r19.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r19.s64;
	// and r6,r9,r22
	ctx.r6.u64 = ctx.r9.u64 & ctx.r22.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// and r10,r5,r22
	ctx.r10.u64 = ctx.r5.u64 & ctx.r22.u64;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r6,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r6.s64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r8,r9,r20
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32);
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// mullw r7,r6,r20
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r20.s32);
	// li r6,2
	ctx.r6.s64 = 2;
loc_822F651C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f655c
	if (!ctx.cr6.lt) goto loc_822F655C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F6550:
	// dcbst r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f6550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F6550;
loc_822F655C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x822f651c
	if (!ctx.cr0.eq) goto loc_822F651C;
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mullw r11,r4,r9
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r9,r18
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r18.s32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f65b8
	if (!ctx.cr6.lt) goto loc_822F65B8;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F65AC:
	// dcbst r0,r9
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x822f65ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F65AC;
loc_822F65B8:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822f65fc
	if (!ctx.cr6.lt) goto loc_822F65FC;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F65F0:
	// dcbst r0,r10
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x822f65f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F65F0;
loc_822F65FC:
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f663c
	if (!ctx.cr6.lt) goto loc_822F663C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F6630:
	// dcbst r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f6630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F6630;
loc_822F663C:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f6674
	if (!ctx.cr6.lt) goto loc_822F6674;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F6668:
	// dcbst r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f6668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F6668;
loc_822F6674:
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// subf r8,r4,r18
	ctx.r8.s64 = ctx.r18.s64 - ctx.r4.s64;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mullw r7,r9,r4
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f66c4
	if (!ctx.cr6.lt) goto loc_822F66C4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F66B8:
	// dcbst r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f66b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F66B8;
loc_822F66C4:
	// sync 
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r26,r15,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r25,r15,8
	ctx.r25.s64 = ctx.r15.s64 + 8;
	// mullw r8,r10,r16
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r16.s32);
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// rlwinm r27,r9,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r24,r15,5,0,26
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r23,r8,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r1,1024
	ctx.r28.s64 = ctx.r1.s64 + 1024;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_822F66FC:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825c56c0
	ctx.lr = 0x822F6718;
	sub_825C56C0(ctx, base);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x825c5a40
	ctx.lr = 0x822F6728;
	sub_825C5A40(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// blt cr6,0x822f66fc
	if (ctx.cr6.lt) goto loc_822F66FC;
	// addi r7,r1,704
	ctx.r7.s64 = ctx.r1.s64 + 704;
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x825c56c0
	ctx.lr = 0x822F6758;
	sub_825C56C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x825c5a40
	ctx.lr = 0x822F6764;
	sub_825C5A40(ctx, base);
	// addi r7,r1,832
	ctx.r7.s64 = ctx.r1.s64 + 832;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r30,36(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x825c56c0
	ctx.lr = 0x822F6780;
	sub_825C56C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x825c5a40
	ctx.lr = 0x822F678C;
	sub_825C5A40(ctx, base);
	// addi r7,r1,768
	ctx.r7.s64 = ctx.r1.s64 + 768;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825c56c0
	ctx.lr = 0x822F67A4;
	sub_825C56C0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x825c5a40
	ctx.lr = 0x822F67B0;
	sub_825C5A40(ctx, base);
	// addi r7,r1,800
	ctx.r7.s64 = ctx.r1.s64 + 800;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r30,44(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x825c56c0
	ctx.lr = 0x822F67CC;
	sub_825C56C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x825c5a40
	ctx.lr = 0x822F67D8;
	sub_825C5A40(ctx, base);
	// addi r7,r1,896
	ctx.r7.s64 = ctx.r1.s64 + 896;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r30,52(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x825c56c0
	ctx.lr = 0x822F67F4;
	sub_825C56C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x825c5a40
	ctx.lr = 0x822F6800;
	sub_825C5A40(ctx, base);
	// addi r7,r1,864
	ctx.r7.s64 = ctx.r1.s64 + 864;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r30,48(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x825c56c0
	ctx.lr = 0x822F681C;
	sub_825C56C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x825c5a40
	ctx.lr = 0x822F6828;
	sub_825C5A40(ctx, base);
	// addi r28,r21,20
	ctx.r28.s64 = ctx.r21.s64 + 20;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r26,r1,928
	ctx.r26.s64 = ctx.r1.s64 + 928;
	// addi r25,r28,-4
	ctx.r25.s64 = ctx.r28.s64 + -4;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_822F683C:
	// lwz r23,-12(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwzu r11,4(r25)
	ea = 4 + ctx.r25.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825c56c0
	ctx.lr = 0x822F685C;
	sub_825C56C0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825c5a40
	ctx.lr = 0x822F6868;
	sub_825C5A40(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// bne 0x822f683c
	if (!ctx.cr0.eq) goto loc_822F683C;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lis r11,19200
	ctx.r11.s64 = 1258291200;
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r5,r8,12,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// rlwinm r4,r7,12,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFF;
	// lwz r19,296(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// lwz r26,272(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r25,284(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r5,r5,512
	ctx.r5.s64 = ctx.r5.s64 + 512;
	// lwz r24,288(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// rlwinm r6,r6,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// addi r4,r4,512
	ctx.r4.s64 = ctx.r4.s64 + 512;
	// lwz r23,300(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// rlwinm r9,r9,0,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFFFFC;
	// lwz r20,304(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r18,312(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// clrlwi r3,r3,12
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFFF;
	// clrlwi r19,r19,12
	ctx.r19.u64 = ctx.r19.u32 & 0xFFFFF;
	// lwz r16,112(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r15,116(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r26,r26,2
	ctx.r26.u64 = ctx.r26.u32 & 0x3FFFFFFF;
	// lwz r14,0(r21)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// clrlwi r25,r25,9
	ctx.r25.u64 = ctx.r25.u32 & 0x7FFFFF;
	// std r31,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r31.u64);
	// clrlwi r24,r24,2
	ctx.r24.u64 = ctx.r24.u32 & 0x3FFFFFFF;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// rlwinm r8,r8,0,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFFFFFC;
	// lwz r31,4(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r7,r7,0,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FFFFFFC;
	// lwz r29,328(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// rlwinm r5,r5,0,19,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
	// std r22,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r22.u64);
	// rlwinm r4,r4,0,19,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// oris r3,r3,19200
	ctx.r3.u64 = ctx.r3.u64 | 1258291200;
	// lwz r22,316(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// clrlwi r23,r23,9
	ctx.r23.u64 = ctx.r23.u32 & 0x7FFFFF;
	// lwz r27,8(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// clrlwi r20,r20,2
	ctx.r20.u64 = ctx.r20.u32 & 0x3FFFFFFF;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// oris r6,r19,19200
	ctx.r6.u64 = ctx.r19.u64 | 1258291200;
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// clrlwi r18,r18,12
	ctx.r18.u64 = ctx.r18.u32 & 0xFFFFF;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// oris r26,r26,16384
	ctx.r26.u64 = ctx.r26.u64 | 1073741824;
	// oris r25,r25,19200
	ctx.r25.u64 = ctx.r25.u64 | 1258291200;
	// oris r24,r24,16384
	ctx.r24.u64 = ctx.r24.u64 | 1073741824;
	// rlwinm r7,r6,0,13,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// rlwinm r3,r3,0,13,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// oris r8,r18,19200
	ctx.r8.u64 = ctx.r18.u64 | 1258291200;
	// oris r23,r23,19200
	ctx.r23.u64 = ctx.r23.u64 | 1258291200;
	// oris r20,r20,16384
	ctx.r20.u64 = ctx.r20.u64 | 1073741824;
	// rlwimi r26,r9,30,2,31
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0x3FFFFFFF) | (ctx.r26.u64 & 0xFFFFFFFFC0000000);
	// rlwimi r24,r5,30,2,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r5.u32, 30) & 0x3FFFFFFF) | (ctx.r24.u64 & 0xFFFFFFFFC0000000);
	// rlwimi r25,r16,30,9,31
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r16.u32, 30) & 0x7FFFFF) | (ctx.r25.u64 & 0xFFFFFFFFFF800000);
	// stw r26,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r26.u32);
	// rlwimi r20,r4,30,2,31
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x3FFFFFFF) | (ctx.r20.u64 & 0xFFFFFFFFC0000000);
	// stw r24,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r24.u32);
	// rlwinm r6,r8,0,13,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r25,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r25.u32);
	// rlwimi r23,r15,30,9,31
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r15.u32, 30) & 0x7FFFFF) | (ctx.r23.u64 & 0xFFFFFFFFFF800000);
	// lwz r4,344(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// rlwimi r3,r10,17,13,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x70000) | (ctx.r3.u64 & 0xFFFFFFFFFFF8FFFF);
	// lwz r26,360(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// rlwimi r7,r10,17,13,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x70000) | (ctx.r7.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r23,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r23.u32);
	// rlwinm r9,r14,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 12) & 0xFFF;
	// stw r20,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r20.u32);
	// rlwimi r6,r10,17,13,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x70000) | (ctx.r6.u64 & 0xFFFFFFFFFFF8FFFF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwimi r3,r30,9,18,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r30.u32, 9) & 0x3F00) | (ctx.r3.u64 & 0xFFFFFFFFFFFFC0FF);
	// rlwinm r8,r31,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// addi r25,r9,512
	ctx.r25.s64 = ctx.r9.s64 + 512;
	// clrlwi r24,r29,12
	ctx.r24.u64 = ctx.r29.u32 & 0xFFFFF;
	// rlwinm r7,r27,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 12) & 0xFFF;
	// lwz r23,320(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r20,r8,512
	ctx.r20.s64 = ctx.r8.s64 + 512;
	// lwz r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// lwz r19,332(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// rlwimi r6,r30,9,18,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r30.u32, 9) & 0x3F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFC0FF);
	// lwz r18,336(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// rlwinm r9,r14,0,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0x1FFFFFFC;
	// rlwimi r5,r30,9,18,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r30.u32, 9) & 0x3F00) | (ctx.r5.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// rlwinm r8,r25,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1000;
	// clrlwi r4,r4,12
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFFF;
	// lwz r15,12(r21)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r25,364(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r16,120(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// oris r5,r4,19200
	ctx.r5.u64 = ctx.r4.u64 | 1258291200;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r6,r20,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x1000;
	// lwz r29,348(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// rlwinm r5,r5,0,13,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// rlwimi r8,r10,1,29,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x7) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// rlwinm r7,r31,0,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1FFFFFFC;
	// lwz r25,24(r21)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r8,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r8.u32);
	// clrlwi r23,r23,2
	ctx.r23.u64 = ctx.r23.u32 & 0x3FFFFFFF;
	// lwz r21,28(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// oris r24,r24,19200
	ctx.r24.u64 = ctx.r24.u64 | 1258291200;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// clrlwi r26,r26,12
	ctx.r26.u64 = ctx.r26.u32 & 0xFFFFF;
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// rlwimi r3,r10,1,29,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x7) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF8);
	// clrlwi r14,r22,9
	ctx.r14.u64 = ctx.r22.u32 & 0x7FFFFF;
	// lwz r22,352(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// clrlwi r19,r19,9
	ctx.r19.u64 = ctx.r19.u32 & 0x7FFFFF;
	// clrlwi r18,r18,2
	ctx.r18.u64 = ctx.r18.u32 & 0x3FFFFFFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// oris r6,r9,16384
	ctx.r6.u64 = ctx.r9.u64 | 1073741824;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// rlwinm r5,r27,0,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1FFFFFFC;
	// lwz r20,160(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r4,r4,0,19,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// oris r23,r23,16384
	ctx.r23.u64 = ctx.r23.u64 | 1073741824;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// rlwimi r20,r10,1,29,31
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x7) | (ctx.r20.u64 & 0xFFFFFFFFFFFFFFF8);
	// rlwinm r24,r24,0,13,11
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r20,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r20.u32);
	// oris r26,r26,19200
	ctx.r26.u64 = ctx.r26.u64 | 1258291200;
	// lwz r20,152(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r9,r15,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 12) & 0xFFF;
	// oris r14,r14,19200
	ctx.r14.u64 = ctx.r14.u64 | 1258291200;
	// oris r3,r19,19200
	ctx.r3.u64 = ctx.r19.u64 | 1258291200;
	// add r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 + ctx.r5.u64;
	// oris r19,r18,16384
	ctx.r19.u64 = ctx.r18.u64 | 1073741824;
	// rlwimi r23,r8,30,2,31
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0x3FFFFFFF) | (ctx.r23.u64 & 0xFFFFFFFFC0000000);
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// rlwimi r14,r16,30,9,31
	ctx.r14.u64 = (__builtin_rotateleft32(ctx.r16.u32, 30) & 0x7FFFFF) | (ctx.r14.u64 & 0xFFFFFFFFFF800000);
	// rlwimi r24,r10,17,13,15
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x70000) | (ctx.r24.u64 & 0xFFFFFFFFFFF8FFFF);
	// rlwinm r26,r26,0,13,11
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r14,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r14.u32);
	// rlwinm r5,r20,0,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFF8;
	// rlwimi r19,r7,30,2,31
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r7.u32, 30) & 0x3FFFFFFF) | (ctx.r19.u64 & 0xFFFFFFFFC0000000);
	// rlwimi r26,r10,17,13,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x70000) | (ctx.r26.u64 & 0xFFFFFFFFFFF8FFFF);
	// rlwinm r5,r5,0,24,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// lwz r18,128(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r4,r17,30,9,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 30) & 0x7FFFFF;
	// rlwimi r3,r28,30,9,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r28.u32, 30) & 0x7FFFFF) | (ctx.r3.u64 & 0xFFFFFFFFFF800000);
	// rlwimi r18,r10,17,13,15
	ctx.r18.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x70000) | (ctx.r18.u64 & 0xFFFFFFFFFFF8FFFF);
	// rlwimi r24,r30,9,18,23
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r30.u32, 9) & 0x3F00) | (ctx.r24.u64 & 0xFFFFFFFFFFFFC0FF);
	// clrlwi r7,r29,9
	ctx.r7.u64 = ctx.r29.u32 & 0x7FFFFF;
	// rlwinm r9,r15,0,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x1FFFFFFC;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r6,r22,2
	ctx.r6.u64 = ctx.r22.u32 & 0x3FFFFFFF;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// rlwimi r18,r30,9,18,23
	ctx.r18.u64 = (__builtin_rotateleft32(ctx.r30.u32, 9) & 0x3F00) | (ctx.r18.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r28,r28,9
	ctx.r28.u64 = ctx.r28.u32 & 0x7FFFFF;
	// stw r3,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// oris r8,r6,16384
	ctx.r8.u64 = ctx.r6.u64 | 1073741824;
	// stw r23,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r23.u32);
	// oris r9,r7,19200
	ctx.r9.u64 = ctx.r7.u64 | 1258291200;
	// stw r19,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r19.u32);
	// oris r6,r5,19202
	ctx.r6.u64 = ctx.r5.u64 | 1258422272;
	// oris r5,r4,19200
	ctx.r5.u64 = ctx.r4.u64 | 1258291200;
	// rlwimi r26,r30,9,18,23
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r30.u32, 9) & 0x3F00) | (ctx.r26.u64 & 0xFFFFFFFFFFFFC0FF);
	// oris r7,r28,19200
	ctx.r7.u64 = ctx.r28.u64 | 1258291200;
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// rlwimi r24,r10,1,29,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x7) | (ctx.r24.u64 & 0xFFFFFFFFFFFFFFF8);
	// rlwimi r18,r10,1,29,31
	ctx.r18.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x7) | (ctx.r18.u64 & 0xFFFFFFFFFFFFFFF8);
	// rlwimi r26,r10,1,29,31
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x7) | (ctx.r26.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r24,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r24.u32);
	// rlwimi r9,r25,30,9,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r25.u32, 30) & 0x7FFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFF800000);
	// stw r18,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r18.u32);
	// rlwimi r8,r11,30,2,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x3FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFC0000000);
	// stw r26,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r26.u32);
	// rlwimi r7,r21,30,9,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r21.u32, 30) & 0x7FFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFF800000);
	// stw r9,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r9.u32);
	// ori r6,r6,1538
	ctx.r6.u64 = ctx.r6.u64 | 1538;
	// stw r8,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r8.u32);
	// li r5,2816
	ctx.r5.s64 = 2816;
	// stw r7,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x826344d0
	ctx.lr = 0x822F6B88;
	sub_826344D0(ctx, base);
	// ld r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r11,17
	ctx.r11.s64 = 17;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,4404(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4404);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// subf r9,r27,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r27.s64;
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// std r7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f6,f0
	ctx.f6.f64 = double(ctx.f0.s64);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fcfid f4,f11
	ctx.f4.f64 = double(ctx.f11.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// stfs f0,1360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1360, temp.u32);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// stfs f1,1400(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1400, temp.u32);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// stfs f13,1368(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1368, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfs f12,1372(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1372, temp.u32);
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// stfs f2,1364(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1364, temp.u32);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// stfs f11,1396(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1396, temp.u32);
	// ld r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// addi r9,r1,1424
	ctx.r9.s64 = ctx.r1.s64 + 1424;
	// ld r22,248(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r29,52
	ctx.r10.s64 = ctx.r29.s64 + 52;
loc_822F6C54:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,8(r10)
	// stfs f13,16(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfsu f0,32(r9)
	// bdnz 0x822f6c54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F6C54;
	// addi r9,r29,263
	ctx.r9.s64 = ctx.r29.s64 + 263;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r29,192
	ctx.r7.s64 = ctx.r29.s64 + 192;
	// addi r6,r29,256
	ctx.r6.s64 = ctx.r29.s64 + 256;
	// addi r5,r29,512
	ctx.r5.s64 = ctx.r29.s64 + 512;
	// addi r4,r29,576
	ctx.r4.s64 = ctx.r29.s64 + 576;
	// addi r3,r29,193
	ctx.r3.s64 = ctx.r29.s64 + 193;
	// addi r30,r29,257
	ctx.r30.s64 = ctx.r29.s64 + 257;
	// addi r28,r29,513
	ctx.r28.s64 = ctx.r29.s64 + 513;
	// addi r27,r29,577
	ctx.r27.s64 = ctx.r29.s64 + 577;
	// addi r26,r29,194
	ctx.r26.s64 = ctx.r29.s64 + 194;
	// addi r25,r29,258
	ctx.r25.s64 = ctx.r29.s64 + 258;
	// addi r24,r29,514
	ctx.r24.s64 = ctx.r29.s64 + 514;
	// addi r23,r29,578
	ctx.r23.s64 = ctx.r29.s64 + 578;
	// addi r11,r1,3096
	ctx.r11.s64 = ctx.r1.s64 + 3096;
	// addi r9,r29,319
	ctx.r9.s64 = ctx.r29.s64 + 319;
loc_822F6CB4:
	// lbz r22,4(r9)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// std r8,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r8.u64);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lbzx r15,r6,r10
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lbz r21,1(r9)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbzx r18,r4,r10
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r17,r3,r10
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbz r20,5(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbzx r16,r30,r10
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// std r15,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r15.u64);
	// lfd f7,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r21,504(r1)
	PPC_STORE_U64(ctx.r1.u32 + 504, ctx.r21.u64);
	// lfd f6,504(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// std r8,512(r1)
	PPC_STORE_U64(ctx.r1.u32 + 512, ctx.r8.u64);
	// lfd f4,512(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 512);
	// std r18,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r18.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r17,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r17.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r16,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r16.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r20,496(r1)
	PPC_STORE_U64(ctx.r1.u32 + 496, ctx.r20.u64);
	// lfd f5,496(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 496);
	// lbzx r14,r7,r10
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// addi r8,r29,195
	ctx.r8.s64 = ctx.r29.s64 + 195;
	// lbzx r19,r5,r10
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// lbzx r18,r25,r10
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// lbz r22,8(r9)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// lfd f0,248(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// lbzx r17,r23,r10
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// std r14,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r14.u64);
	// lfd f8,160(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f1,f8
	ctx.f1.f64 = double(ctx.f8.s64);
	// std r19,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r19.u64);
	// fcfid f8,f7
	ctx.f8.f64 = double(ctx.f7.s64);
	// lfd f13,208(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// lfd f9,152(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// mr r19,r14
	ctx.r19.u64 = ctx.r14.u64;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// std r18,528(r1)
	PPC_STORE_U64(ctx.r1.u32 + 528, ctx.r18.u64);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// lbz r21,9(r9)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// lbz r20,6(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// lbz r19,7(r9)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// fcfid f13,f10
	ctx.f13.f64 = double(ctx.f10.s64);
	// lbzx r16,r26,r10
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// fcfid f12,f9
	ctx.f12.f64 = double(ctx.f9.s64);
	// lbzx r15,r24,r10
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// fcfid f11,f5
	ctx.f11.f64 = double(ctx.f5.s64);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// stfs f10,-1008(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -1008, temp.u32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,-1016(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -1016, temp.u32);
	// frsp f5,f3
	ctx.f5.f64 = double(float(ctx.f3.f64));
	// stfs f5,-1004(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -1004, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfs f8,-1012(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -1012, temp.u32);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-1000(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -1000, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,-996(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -996, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,-992(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -992, temp.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stfs f11,-988(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -988, temp.u32);
	// std r22,544(r1)
	PPC_STORE_U64(ctx.r1.u32 + 544, ctx.r22.u64);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// lbzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// std r16,600(r1)
	PPC_STORE_U64(ctx.r1.u32 + 600, ctx.r16.u64);
	// lfd f10,528(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// std r22,744(r1)
	PPC_STORE_U64(ctx.r1.u32 + 744, ctx.r22.u64);
	// lfd f9,544(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 544);
	// lbzx r22,r28,r10
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// std r21,560(r1)
	PPC_STORE_U64(ctx.r1.u32 + 560, ctx.r21.u64);
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// std r8,664(r1)
	PPC_STORE_U64(ctx.r1.u32 + 664, ctx.r8.u64);
	// addi r8,r29,579
	ctx.r8.s64 = ctx.r29.s64 + 579;
	// std r17,688(r1)
	PPC_STORE_U64(ctx.r1.u32 + 688, ctx.r17.u64);
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// std r19,656(r1)
	PPC_STORE_U64(ctx.r1.u32 + 656, ctx.r19.u64);
	// std r22,672(r1)
	PPC_STORE_U64(ctx.r1.u32 + 672, ctx.r22.u64);
	// lbzx r22,r27,r10
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// std r22,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r22.u64);
	// std r15,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r15.u64);
	// lbzx r17,r8,r10
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r8,r29,260
	ctx.r8.s64 = ctx.r29.s64 + 260;
	// lbz r22,12(r9)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// std r22,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r22.u64);
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// lbz r21,14(r9)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// lbz r20,10(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// lbzx r22,r8,r10
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r8,r29,196
	ctx.r8.s64 = ctx.r29.s64 + 196;
	// std r17,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r17.u64);
	// lbz r19,13(r9)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// std r21,616(r1)
	PPC_STORE_U64(ctx.r1.u32 + 616, ctx.r21.u64);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// lfd f5,600(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 600);
	// lbz r18,11(r9)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11);
	// std r22,696(r1)
	PPC_STORE_U64(ctx.r1.u32 + 696, ctx.r22.u64);
	// lfd f6,744(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 744);
	// fcfid f0,f6
	ctx.f0.f64 = double(ctx.f6.s64);
	// lbz r20,15(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// lfd f8,560(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// fcfid f11,f5
	ctx.f11.f64 = double(ctx.f5.s64);
	// lfd f6,664(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// lfd f7,688(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 688);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// lfd f4,656(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 656);
	// fcfid f10,f7
	ctx.f10.f64 = double(ctx.f7.s64);
	// lfd f1,672(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 672);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// fcfid f12,f1
	ctx.f12.f64 = double(ctx.f1.s64);
	// lfd f3,392(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f1,f8
	ctx.f1.f64 = double(ctx.f8.s64);
	// lfd f13,408(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// fcfid f3,f9
	ctx.f3.f64 = double(ctx.f9.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f8,f0
	ctx.f8.f64 = double(float(ctx.f0.f64));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// stfs f0,-980(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -980, temp.u32);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,-968(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -968, temp.u32);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// lfd f4,424(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// stfs f9,32(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// stfs f2,-984(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + -984, temp.u32);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// lfd f3,616(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfd f2,440(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// lfd f1,696(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 696);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// stfs f12,-976(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -976, temp.u32);
	// stfs f11,-972(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -972, temp.u32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f8,44(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f7,48(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// std r19,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.r19.u64);
	// lfd f12,472(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// lbzx r22,r8,r10
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r8,r29,259
	ctx.r8.s64 = ctx.r29.s64 + 259;
	// std r21,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r21.u64);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// std r20,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r20.u64);
	// fcfid f6,f4
	ctx.f6.f64 = double(ctx.f4.s64);
	// lbz r20,18(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// fcfid f4,f2
	ctx.f4.f64 = double(ctx.f2.s64);
	// lbz r21,17(r9)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// fcfid f2,f1
	ctx.f2.f64 = double(ctx.f1.s64);
	// std r22,632(r1)
	PPC_STORE_U64(ctx.r1.u32 + 632, ctx.r22.u64);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// lbzx r22,r8,r10
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r8,r29,515
	ctx.r8.s64 = ctx.r29.s64 + 515;
	// std r18,488(r1)
	PPC_STORE_U64(ctx.r1.u32 + 488, ctx.r18.u64);
	// lfd f10,488(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 488);
	// std r20,736(r1)
	PPC_STORE_U64(ctx.r1.u32 + 736, ctx.r20.u64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lbzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lfd f0,456(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// std r22,680(r1)
	PPC_STORE_U64(ctx.r1.u32 + 680, ctx.r22.u64);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// lbz r22,16(r9)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// lfd f13,632(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// std r22,536(r1)
	PPC_STORE_U64(ctx.r1.u32 + 536, ctx.r22.u64);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// lfd f11,680(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 680);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// std r8,648(r1)
	PPC_STORE_U64(ctx.r1.u32 + 648, ctx.r8.u64);
	// addi r8,r29,197
	ctx.r8.s64 = ctx.r29.s64 + 197;
	// lfd f8,648(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lbzx r19,r8,r10
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r8,r29,198
	ctx.r8.s64 = ctx.r29.s64 + 198;
	// lfd f5,368(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// frsp f10,f7
	ctx.f10.f64 = double(float(ctx.f7.f64));
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// std r22,552(r1)
	PPC_STORE_U64(ctx.r1.u32 + 552, ctx.r22.u64);
	// fcfid f3,f12
	ctx.f3.f64 = double(ctx.f12.s64);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// lbzx r21,r8,r10
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r8,r29,261
	ctx.r8.s64 = ctx.r29.s64 + 261;
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// stfs f10,60(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// fcfid f6,f5
	ctx.f6.f64 = double(ctx.f5.s64);
	// std r19,592(r1)
	PPC_STORE_U64(ctx.r1.u32 + 592, ctx.r19.u64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// stfs f9,-956(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -956, temp.u32);
	// frsp f12,f2
	ctx.f12.f64 = double(float(ctx.f2.f64));
	// stfs f12,-948(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -948, temp.u32);
	// lbzx r22,r8,r10
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r8,r29,517
	ctx.r8.s64 = ctx.r29.s64 + 517;
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfd f1,736(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 736);
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// std r21,520(r1)
	PPC_STORE_U64(ctx.r1.u32 + 520, ctx.r21.u64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfd f12,592(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 592);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lbzx r21,r8,r10
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f10,-940(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -940, temp.u32);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// stfs f9,-964(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -964, temp.u32);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// std r22,608(r1)
	PPC_STORE_U64(ctx.r1.u32 + 608, ctx.r22.u64);
	// lfd f0,520(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 520);
	// lfd f11,536(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// lfd f9,608(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 608);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// stfs f5,-960(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -960, temp.u32);
	// addi r8,r29,581
	ctx.r8.s64 = ctx.r29.s64 + 581;
	// stfs f4,-952(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -952, temp.u32);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// stfs f3,-944(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -944, temp.u32);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// lbzx r21,r8,r10
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r8,r29,516
	ctx.r8.s64 = ctx.r29.s64 + 516;
	// std r22,624(r1)
	PPC_STORE_U64(ctx.r1.u32 + 624, ctx.r22.u64);
	// lbz r20,22(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lbz r19,21(r9)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// lfd f6,552(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 552);
	// lbz r18,19(r9)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// fcfid f12,f6
	ctx.f12.f64 = double(ctx.f6.s64);
	// std r21,568(r1)
	PPC_STORE_U64(ctx.r1.u32 + 568, ctx.r21.u64);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// lbzx r22,r8,r10
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r8,r29,262
	ctx.r8.s64 = ctx.r29.s64 + 262;
	// std r22,640(r1)
	PPC_STORE_U64(ctx.r1.u32 + 640, ctx.r22.u64);
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// lbz r21,20(r9)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stfs f2,72(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lbz r17,23(r9)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// std r21,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r21.u64);
	// stfs f4,-936(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -936, temp.u32);
	// lbzx r22,r8,r10
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r8,r29,580
	ctx.r8.s64 = ctx.r29.s64 + 580;
	// std r22,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r22.u64);
	// addi r22,r29,518
	ctx.r22.s64 = ctx.r29.s64 + 518;
	// std r20,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r20.u64);
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// std r17,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r17.u64);
	// stfs f1,-932(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -932, temp.u32);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// stfs f1,-928(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -928, temp.u32);
	// lbzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r16,r22,r10
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r10.u32);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// lwz r19,144(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r22,r29,199
	ctx.r22.s64 = ctx.r29.s64 + 199;
	// std r21,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r21.u64);
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// std r8,584(r1)
	PPC_STORE_U64(ctx.r1.u32 + 584, ctx.r8.u64);
	// lfd f5,624(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 624);
	// lbzu r8,24(r9)
	ea = 24 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lfd f6,584(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 584);
	// fcfid f9,f5
	ctx.f9.f64 = double(ctx.f5.s64);
	// lbzx r19,r19,r10
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r10.u32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// addi r8,r29,582
	ctx.r8.s64 = ctx.r29.s64 + 582;
	// lfd f3,568(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 568);
	// lfd f11,640(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 640);
	// fcfid f8,f3
	ctx.f8.f64 = double(ctx.f3.s64);
	// lfd f3,376(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f0,f3
	ctx.f0.f64 = double(ctx.f3.s64);
	// lbzx r22,r22,r10
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r10.u32);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,80(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lbzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// frsp f5,f12
	ctx.f5.f64 = double(float(ctx.f12.f64));
	// std r19,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r19.u64);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// lfd f11,384(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// std r22,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r22.u64);
	// lfd f7,400(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// lfd f6,416(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// std r8,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r8.u64);
	// addi r8,r29,519
	ctx.r8.s64 = ctx.r29.s64 + 519;
	// lfd f12,432(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// std r16,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r16.u64);
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// stfs f5,-924(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -924, temp.u32);
	// frsp f10,f8
	ctx.f10.f64 = double(float(ctx.f8.f64));
	// std r20,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r20.u64);
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// std r21,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r21.u64);
	// lbzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// frsp f8,f0
	ctx.f8.f64 = double(float(ctx.f0.f64));
	// std r8,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r8.u64);
	// lfd f2,464(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
	// stfs f4,88(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// fcfid f0,f2
	ctx.f0.f64 = double(ctx.f2.s64);
	// lfd f4,448(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 448);
	// addi r8,r29,583
	ctx.r8.s64 = ctx.r29.s64 + 583;
	// lfd f1,480(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 480);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lfd f2,256(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// stfs f3,76(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fcfid f4,f1
	ctx.f4.f64 = double(ctx.f1.s64);
	// stfs f10,96(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// lbzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// fcfid f1,f7
	ctx.f1.f64 = double(ctx.f7.s64);
	// lfd f7,216(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lfd f12,232(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f10,f6
	ctx.f10.f64 = double(ctx.f6.s64);
	// stfs f13,92(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// fcfid f13,f7
	ctx.f13.f64 = double(ctx.f7.s64);
	// stfs f8,-916(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -916, temp.u32);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// stfs f9,-920(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -920, temp.u32);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// stfs f7,104(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// frsp f7,f5
	ctx.f7.f64 = double(float(ctx.f5.f64));
	// stfs f7,-900(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -900, temp.u32);
	// frsp f12,f2
	ctx.f12.f64 = double(float(ctx.f2.f64));
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f11,f4
	ctx.f11.f64 = double(float(ctx.f4.f64));
	// stfs f12,112(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f11,-904(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -904, temp.u32);
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// lfd f6,168(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// frsp f5,f13
	ctx.f5.f64 = double(float(ctx.f13.f64));
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// stfs f5,-912(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -912, temp.u32);
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,-908(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -908, temp.u32);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// stfs f4,-896(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -896, temp.u32);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// stfs f0,-892(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -892, temp.u32);
	// frsp f13,f8
	ctx.f13.f64 = double(float(ctx.f8.f64));
	// stfs f13,120(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// stfs f12,124(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfsu f11,128(r11)
	// bdnz 0x822f6cb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F6CB4;
	// lis r7,-16
	ctx.r7.s64 = -1048576;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,173
	ctx.r6.s64 = 173;
	// addi r5,r1,1360
	ctx.r5.s64 = ctx.r1.s64 + 1360;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825ab3e0
	ctx.lr = 0x822F72BC;
	sub_825AB3E0(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825ab5c8
	ctx.lr = 0x822F72C8;
	sub_825AB5C8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825abb70
	ctx.lr = 0x822F72DC;
	sub_825ABB70(ctx, base);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825ab9e8
	ctx.lr = 0x822F72E8;
	sub_825AB9E8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a82b8
	ctx.lr = 0x822F7304;
	sub_825A82B8(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825a82b8
	ctx.lr = 0x822F7320;
	sub_825A82B8(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,832
	ctx.r5.s64 = ctx.r1.s64 + 832;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x825a82b8
	ctx.lr = 0x822F733C;
	sub_825A82B8(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x825a82b8
	ctx.lr = 0x822F7358;
	sub_825A82B8(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,800
	ctx.r5.s64 = ctx.r1.s64 + 800;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x825a82b8
	ctx.lr = 0x822F7374;
	sub_825A82B8(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,896
	ctx.r5.s64 = ctx.r1.s64 + 896;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x825a82b8
	ctx.lr = 0x822F7390;
	sub_825A82B8(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,864
	ctx.r5.s64 = ctx.r1.s64 + 864;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825a82b8
	ctx.lr = 0x822F73AC;
	sub_825A82B8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// rldicr r26,r10,63,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f11,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// stfs f0,1920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1920, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 | ctx.r26.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825af478
	ctx.lr = 0x822F73F8;
	sub_825AF478(ctx, base);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825ab7d0
	ctx.lr = 0x822F7404;
	sub_825AB7D0(ctx, base);
	// lis r16,-31994
	ctx.r16.s64 = -2096758784;
	// lwz r15,4404(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4404);
	// lwz r21,136(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,18188(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18188);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822f7440
	if (!ctx.cr6.eq) goto loc_822F7440;
	// lwz r11,4412(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4412);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r10,r15,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r15.s64;
	// mullw r9,r10,r21
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x825b04f8
	ctx.lr = 0x822F7440;
	sub_825B04F8(ctx, base);
loc_822F7440:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825af570
	ctx.lr = 0x822F7454;
	sub_825AF570(ctx, base);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825ab9e8
	ctx.lr = 0x822F7460;
	sub_825AB9E8(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825a82b8
	ctx.lr = 0x822F747C;
	sub_825A82B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x825a8690
	ctx.lr = 0x822F7490;
	sub_825A8690(ctx, base);
	// lwz r11,4436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4436);
	// lwz r10,4412(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4412);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r20,4420(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4420);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r19,4428(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4428);
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// subf r11,r15,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r15.s64;
	// lfs f22,-22068(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -22068);
	ctx.f22.f64 = double(temp.f32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// add r18,r11,r10
	ctx.r18.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lfs f23,-22072(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22072);
	ctx.f23.f64 = double(temp.f32);
	// li r14,1
	ctx.r14.s64 = 1;
	// rldicr r24,r6,62,63
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u64, 62) & 0xFFFFFFFFFFFFFFFF;
	// lfs f21,-28596(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28596);
	ctx.f21.f64 = double(temp.f32);
	// addi r17,r11,-24272
	ctx.r17.s64 = ctx.r11.s64 + -24272;
	// lwz r10,18188(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18188);
loc_822F74E0:
	// cmpwi cr6,r14,6
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 6, ctx.xer);
	// bgt cr6,0x822f7504
	if (ctx.cr6.gt) goto loc_822F7504;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x822f7508
	if (ctx.cr6.eq) goto loc_822F7508;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f7808
	if (!ctx.cr6.eq) goto loc_822F7808;
	// b 0x822f751c
	goto loc_822F751C;
loc_822F7504:
	// li r25,0
	ctx.r25.s64 = 0;
loc_822F7508:
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f7808
	if (!ctx.cr6.eq) goto loc_822F7808;
	// cmpw cr6,r19,r20
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x822f7808
	if (!ctx.cr6.gt) goto loc_822F7808;
loc_822F751C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822F7524:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r11,r1,928
	ctx.r11.s64 = ctx.r1.s64 + 928;
	// bne cr6,0x822f7534
	if (!ctx.cr6.eq) goto loc_822F7534;
	// addi r11,r1,1024
	ctx.r11.s64 = ctx.r1.s64 + 1024;
loc_822F7534:
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825af478
	ctx.lr = 0x822F7548;
	sub_825AF478(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,96
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 96, ctx.xer);
	// blt cr6,0x822f7524
	if (ctx.cr6.lt) goto loc_822F7524;
	// addi r22,r31,-580
	ctx.r22.s64 = ctx.r31.s64 + -580;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_822F7560:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x822f77b4
	if (!ctx.cr6.eq) goto loc_822F77B4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x825ab7d0
	ctx.lr = 0x822F7578;
	sub_825AB7D0(ctx, base);
	// lwz r30,0(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822f77b4
	if (ctx.cr6.gt) goto loc_822F77B4;
loc_822F7588:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822f7598
	if (ctx.cr6.eq) goto loc_822F7598;
	// fmr f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f22.f64;
	// b 0x822f759c
	goto loc_822F759C;
loc_822F7598:
	// fmr f31,f21
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f21.f64;
loc_822F759C:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f24,f13
	ctx.f24.f64 = double(float(ctx.f13.f64));
	// bne cr6,0x822f75c4
	if (!ctx.cr6.eq) goto loc_822F75C4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_822F75C4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f25,f13
	ctx.f25.f64 = double(float(ctx.f13.f64));
	// bne cr6,0x822f75e8
	if (!ctx.cr6.eq) goto loc_822F75E8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_822F75E8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r11,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r11.u64);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lfd f0,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f26,f13
	ctx.f26.f64 = double(float(ctx.f13.f64));
	// bne cr6,0x822f760c
	if (!ctx.cr6.eq) goto loc_822F760C;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
loc_822F760C:
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fmuls f30,f31,f23
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f23.f64));
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// std r9,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r9.u64);
	// lfd f0,256(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// lfd f12,232(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// frsp f28,f13
	ctx.f28.f64 = double(float(ctx.f13.f64));
	// addi r11,r1,1024
	ctx.r11.s64 = ctx.r1.s64 + 1024;
	// frsp f27,f11
	ctx.f27.f64 = double(float(ctx.f11.f64));
	// rlwinm r27,r30,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfsx f29,r4,r10
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f29.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a82b8
	ctx.lr = 0x822F7674;
	sub_825A82B8(ctx, base);
	// addi r11,r1,928
	ctx.r11.s64 = ctx.r1.s64 + 928;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r27,r27,r11
	ctx.r27.u64 = ctx.r27.u64 + ctx.r11.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825a82b8
	ctx.lr = 0x822F7698;
	sub_825A82B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x825a8690
	ctx.lr = 0x822F76AC;
	sub_825A8690(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x825a8690
	ctx.lr = 0x822F76C0;
	sub_825A8690(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// bne cr6,0x822f76d4
	if (!ctx.cr6.eq) goto loc_822F76D4;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
loc_822F76D4:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r8,r30,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r1,1120
	ctx.r9.s64 = ctx.r1.s64 + 1120;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stfs f0,1920(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1920, temp.u32);
	// li r4,176
	ctx.r4.s64 = 176;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1924(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1928(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stfs f11,1932(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// or r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 | ctx.r26.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stfs f24,1968(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1968, temp.u32);
	// stfs f25,1972(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1972, temp.u32);
	// stfs f26,1976(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1976, temp.u32);
	// stfs f31,1980(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1980, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r3,r8,r26
	ctx.r3.u64 = ctx.r8.u64 | ctx.r26.u64;
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stfs f28,1984(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1984, temp.u32);
	// stfs f29,1988(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1988, temp.u32);
	// stfs f27,1992(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1992, temp.u32);
	// stfs f30,1996(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1996, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r9,r10,r24
	ctx.r9.u64 = ctx.r10.u64 | ctx.r24.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825ab3e0
	ctx.lr = 0x822F776C;
	sub_825AB3E0(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822f7780
	if (ctx.cr6.eq) goto loc_822F7780;
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// mullw r11,r11,r18
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r18.s32);
	// b 0x822f7788
	goto loc_822F7788;
loc_822F7780:
	// subf r11,r20,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r20.s64;
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
loc_822F7788:
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x825b04f8
	ctx.lr = 0x822F77A0;
	sub_825B04F8(ctx, base);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x822f7588
	if (!ctx.cr6.gt) goto loc_822F7588;
loc_822F77B4:
	// addi r23,r23,24
	ctx.r23.s64 = ctx.r23.s64 + 24;
	// addi r11,r17,1080
	ctx.r11.s64 = ctx.r17.s64 + 1080;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f7560
	if (ctx.cr6.lt) goto loc_822F7560;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822F77D0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// bne cr6,0x822f77e0
	if (!ctx.cr6.eq) goto loc_822F77E0;
	// addi r11,r1,1088
	ctx.r11.s64 = ctx.r1.s64 + 1088;
loc_822F77E0:
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825af570
	ctx.lr = 0x822F77F4;
	sub_825AF570(ctx, base);
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r30,-64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -64, ctx.xer);
	// bge cr6,0x822f77d0
	if (!ctx.cr6.lt) goto loc_822F77D0;
	// lwz r10,18188(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18188);
loc_822F7808:
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmpwi cr6,r14,7
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 7, ctx.xer);
	// ble cr6,0x822f74e0
	if (!ctx.cr6.gt) goto loc_822F74E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825abb70
	ctx.lr = 0x822F7828;
	sub_825ABB70(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_822F782C:
	// subfic r11,r30,95
	ctx.xer.ca = ctx.r30.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r30.s64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r10,r11,21846
	ctx.r10.s64 = ctx.r11.s64 * 21846;
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r8,r26,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r26.u64 >> (ctx.r8.u8 & 0x7F));
	// bl 0x825a82b8
	ctx.lr = 0x822F785C;
	sub_825A82B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// ble cr6,0x822f782c
	if (!ctx.cr6.gt) goto loc_822F782C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825b2428
	ctx.lr = 0x822F7870;
	sub_825B2428(ctx, base);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// ld r10,576(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ld r11,-620(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -620);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ld r10,-604(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -604);
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// std r11,-620(r31)
	PPC_STORE_U64(ctx.r31.u32 + -620, ctx.r11.u64);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,-604(r31)
	PPC_STORE_U64(ctx.r31.u32 + -604, ctx.r11.u64);
	// bne cr6,0x822f78b8
	if (!ctx.cr6.eq) goto loc_822F78B8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822F78B8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bne 0x822f78d8
	if (!ctx.cr0.eq) goto loc_822F78D8;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f78d8
	if (ctx.cr6.eq) goto loc_822F78D8;
	// bl 0x825a57f8
	ctx.lr = 0x822F78D8;
	sub_825A57F8(ctx, base);
loc_822F78D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826477b4
	ctx.lr = 0x822F78E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,4368
	ctx.r1.s64 = ctx.r1.s64 + 4368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82635a68
	ctx.lr = 0x822F78F0;
	__restfpr_21(ctx, base);
	// b 0x82634470
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F6018) {
	__imp__sub_822F6018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F78F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F78F4) {
	__imp__sub_822F78F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F78F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825b2460
	sub_825B2460(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F78F8) {
	__imp__sub_822F78F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F78FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F78FC) {
	__imp__sub_822F78FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,18056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18056);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F7900) {
	__imp__sub_822F7900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F791C) {
	__imp__sub_822F791C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7920) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r7,r5,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f7978
	if (!ctx.cr6.lt) goto loc_822F7978;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F796C:
	// dcbf r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f796c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F796C;
loc_822F7978:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// li r6,2
	ctx.r6.s64 = 2;
loc_822F7998:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f79d8
	if (!ctx.cr6.lt) goto loc_822F79D8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F79CC:
	// dcbf r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x822f79cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F79CC;
loc_822F79D8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x822f7998
	if (!ctx.cr0.eq) goto loc_822F7998;
	// sync 
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F7920) {
	__imp__sub_822F7920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F79EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F79EC) {
	__imp__sub_822F79EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F79F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822F79F8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82635a28
	ctx.lr = 0x822F7A00;
	__savefpr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,16240
	ctx.r31.s64 = ctx.r11.s64 + 16240;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r30,1944(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x822f7a28
	if (!ctx.cr6.eq) goto loc_822F7A28;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822F7A28:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ld r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1200);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,23408(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23408);
	// fdiv f31,f0,f13
	ctx.f31.f64 = ctx.f0.f64 / ctx.f13.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7A4C;
	sub_82635AA0(ctx, base);
	// fmul f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ld r3,1192(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1192);
	// lfd f30,5560(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 5560);
	// fmul f29,f12,f30
	ctx.f29.f64 = ctx.f12.f64 * ctx.f30.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7A64;
	sub_82635AA0(ctx, base);
	// fmul f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64 * ctx.f31.f64;
	// ld r3,1184(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1184);
	// fmul f28,f11,f30
	ctx.f28.f64 = ctx.f11.f64 * ctx.f30.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7A74;
	sub_82635AA0(ctx, base);
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * ctx.f31.f64;
	// ld r3,1176(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1176);
	// fmul f27,f10,f30
	ctx.f27.f64 = ctx.f10.f64 * ctx.f30.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7A84;
	sub_82635AA0(ctx, base);
	// fmul f9,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64 * ctx.f31.f64;
	// ld r3,1168(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1168);
	// fmul f26,f9,f30
	ctx.f26.f64 = ctx.f9.f64 * ctx.f30.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7A94;
	sub_82635AA0(ctx, base);
	// fmul f8,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stfd f26,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f26.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f27,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f27.u64);
	// addi r5,r7,-21992
	ctx.r5.s64 = ctx.r7.s64 + -21992;
	// stfd f28,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f28.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfd f29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f29.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// fmul f1,f8,f30
	ctx.f1.f64 = ctx.f8.f64 * ctx.f30.f64;
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x82637620
	ctx.lr = 0x822F7AE8;
	sub_82637620(ctx, base);
	// ld r29,-56(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + -56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x822f7bcc
	if (ctx.cr6.eq) goto loc_822F7BCC;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x822f7bcc
	if (!ctx.cr6.lt) goto loc_822F7BCC;
	// ld r3,-64(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + -64);
	// bl 0x82635aa0
	ctx.lr = 0x822F7B08;
	sub_82635AA0(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64;
	// ld r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// fmul f29,f0,f30
	ctx.f29.f64 = ctx.f0.f64 * ctx.f30.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7B18;
	sub_82635AA0(ctx, base);
	// fmul f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 * ctx.f31.f64;
	// ld r3,-24(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + -24);
	// fmul f28,f13,f30
	ctx.f28.f64 = ctx.f13.f64 * ctx.f30.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7B28;
	sub_82635AA0(ctx, base);
	// fmul f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 * ctx.f31.f64;
	// ld r3,-32(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + -32);
	// fmul f27,f12,f30
	ctx.f27.f64 = ctx.f12.f64 * ctx.f30.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7B38;
	sub_82635AA0(ctx, base);
	// fmul f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64 * ctx.f31.f64;
	// ld r3,-40(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + -40);
	// fmul f26,f11,f30
	ctx.f26.f64 = ctx.f11.f64 * ctx.f30.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7B48;
	sub_82635AA0(ctx, base);
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * ctx.f31.f64;
	// ld r3,-48(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + -48);
	// fmul f25,f10,f30
	ctx.f25.f64 = ctx.f10.f64 * ctx.f30.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7B58;
	sub_82635AA0(ctx, base);
	// fmul f9,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64 * ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmul f24,f9,f30
	ctx.f24.f64 = ctx.f9.f64 * ctx.f30.f64;
	// bl 0x82635aa0
	ctx.lr = 0x822F7B68;
	sub_82635AA0(ctx, base);
	// fmul f8,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64 * ctx.f31.f64;
	// stfd f25,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f25.u64);
	// stfd f27,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f27.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f26,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f26.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f24,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f24.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// subf r4,r30,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r30.s64;
	// stfd f28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f28.u64);
	// addi r5,r11,-22056
	ctx.r5.s64 = ctx.r11.s64 + -22056;
	// stfd f29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f29.u64);
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmul f1,f8,f30
	ctx.f1.f64 = ctx.f8.f64 * ctx.f30.f64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// bl 0x82637620
	ctx.lr = 0x822F7BCC;
	sub_82637620(ctx, base);
loc_822F7BCC:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,-64
	ctx.r11.s64 = ctx.r31.s64 + -64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F7BE4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822f7be4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F7BE4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f7c38
	if (ctx.cr6.eq) goto loc_822F7C38;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822F7BFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f7bfc
	if (!ctx.cr6.eq) goto loc_822F7BFC;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r5,r10,-22064
	ctx.r5.s64 = ctx.r10.s64 + -22064;
	// subf r4,r11,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82637620
	ctx.lr = 0x822F7C30;
	sub_82637620(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_822F7C38:
	// std r30,1168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1168, ctx.r30.u64);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// std r30,1176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1176, ctx.r30.u64);
	// std r30,1184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1184, ctx.r30.u64);
	// std r30,1192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1192, ctx.r30.u64);
	// std r30,1200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1200, ctx.r30.u64);
	// stw r30,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r30.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82635a74
	ctx.lr = 0x822F7C60;
	__restfpr_24(ctx, base);
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F79F0) {
	__imp__sub_822F79F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F7C64) {
	__imp__sub_822F7C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263444c
	ctx.lr = 0x822F7C70;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// lwz r27,24(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r28,r11,18000
	ctx.r28.s64 = ctx.r11.s64 + 18000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477c4
	ctx.lr = 0x822F7C8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822f7d60
	if (!ctx.cr6.gt) goto loc_822F7D60;
loc_822F7CA0:
	// addi r26,r5,5
	ctx.r26.s64 = ctx.r5.s64 + 5;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// blt cr6,0x822f7cb4
	if (ctx.cr6.lt) goto loc_822F7CB4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_822F7CB4:
	// subf r11,r6,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r6.s64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r29,r5,-1
	ctx.r29.s64 = ctx.r5.s64 + -1;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x822f7cd0
	if (!ctx.cr6.eq) goto loc_822F7CD0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822F7CD0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bne cr6,0x822f7ce0
	if (!ctx.cr6.eq) goto loc_822F7CE0;
	// addi r31,r6,-1
	ctx.r31.s64 = ctx.r6.s64 + -1;
loc_822F7CE0:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822f6018
	ctx.lr = 0x822F7CF4;
	sub_822F6018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f7d98
	if (ctx.cr6.eq) goto loc_822F7D98;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x825b2460
	ctx.lr = 0x822F7D0C;
	sub_825B2460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f7d2c
	if (ctx.cr6.eq) goto loc_822F7D2C;
loc_822F7D14:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825a32b8
	ctx.lr = 0x822F7D1C;
	sub_825A32B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b2460
	ctx.lr = 0x822F7D24;
	sub_825B2460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f7d14
	if (!ctx.cr6.eq) goto loc_822F7D14;
loc_822F7D2C:
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// ld r11,-568(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + -568);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// std r11,-568(r28)
	PPC_STORE_U64(ctx.r28.u32 + -568, ctx.r11.u64);
	// bl 0x822f7920
	ctx.lr = 0x822F7D54;
	sub_822F7920(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822f7ca0
	if (ctx.cr6.lt) goto loc_822F7CA0;
loc_822F7D60:
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// ld r11,-584(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + -584);
	// lwz r10,184(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r11,184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 184, ctx.r11.u32);
	// std r10,-584(r28)
	PPC_STORE_U64(ctx.r28.u32 + -584, ctx.r10.u64);
	// bl 0x826477b4
	ctx.lr = 0x822F7D8C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
loc_822F7D98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826477b4
	ctx.lr = 0x822F7DA0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8263449c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F7C68) {
	__imp__sub_822F7C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F7DAC) {
	__imp__sub_822F7DAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634434
	ctx.lr = 0x822F7DB8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f7fa4
	if (ctx.cr6.eq) goto loc_822F7FA4;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// lis r10,-31994
	ctx.r10.s64 = -2096758784;
	// addi r30,r11,18208
	ctx.r30.s64 = ctx.r11.s64 + 18208;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lis r20,-31994
	ctx.r20.s64 = -2096758784;
	// li r28,100
	ctx.r28.s64 = 100;
	// lwz r11,13584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13584);
	// li r21,320
	ctx.r21.s64 = 320;
	// li r22,8000
	ctx.r22.s64 = 8000;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r19,-32155
	ctx.r19.s64 = -2107310080;
	// lis r23,-31994
	ctx.r23.s64 = -2096758784;
	// lis r25,-31994
	ctx.r25.s64 = -2096758784;
	// lis r29,-32155
	ctx.r29.s64 = -2107310080;
	// addi r27,r10,31796
	ctx.r27.s64 = ctx.r10.s64 + 31796;
loc_822F7E04:
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13584, ctx.r11.u32);
	// cmpwi cr6,r11,320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 320, ctx.xer);
	// sthx r10,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u16);
	// bne cr6,0x822f7f94
	if (!ctx.cr6.eq) goto loc_822F7F94;
	// li r11,160
	ctx.r11.s64 = 160;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F7E30:
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lwz r9,840(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 840);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// divw r11,r5,r28
	ctx.r11.s32 = ctx.r5.s32 / ctx.r28.s32;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x822f7e54
	if (!ctx.cr6.gt) goto loc_822F7E54;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x822f7e60
	goto loc_822F7E60;
loc_822F7E54:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x822f7e60
	if (!ctx.cr6.lt) goto loc_822F7E60;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_822F7E60:
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// lwz r5,840(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 840);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// sth r4,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// mullw r5,r3,r5
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// subf r9,r6,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r6.s64;
	// divw r11,r5,r28
	ctx.r11.s32 = ctx.r5.s32 / ctx.r28.s32;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x822f7e9c
	if (!ctx.cr6.gt) goto loc_822F7E9C;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x822f7ea8
	goto loc_822F7EA8;
loc_822F7E9C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x822f7ea8
	if (!ctx.cr6.lt) goto loc_822F7EA8;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_822F7EA8:
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// xor r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// sthu r6,4(r10)
	// subf r11,r9,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bdnz 0x822f7e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F7E30;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// divw r11,r11,r21
	ctx.r11.s32 = ctx.r11.s32 / ctx.r21.s32;
	// mulli r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 * 100;
	// divw r11,r10,r22
	ctx.r11.s32 = ctx.r10.s32 / ctx.r22.s32;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// ble cr6,0x822f7ee0
	if (!ctx.cr6.gt) goto loc_822F7EE0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822F7EE0:
	// lwz r10,31808(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 31808);
	// stw r11,31804(r25)
	PPC_STORE_U32(ctx.r25.u32 + 31804, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822f7efc
	if (ctx.cr6.eq) goto loc_822F7EFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,320
	ctx.r4.s64 = 320;
	// bl 0x822f8be8
	ctx.lr = 0x822F7EFC;
	sub_822F8BE8(ctx, base);
loc_822F7EFC:
	// lwz r11,31804(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31804);
	// lwz r10,844(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 844);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822f7f8c
	if (ctx.cr6.lt) goto loc_822F7F8C;
	// lwz r11,31800(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 31800);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bge cr6,0x822f7f8c
	if (!ctx.cr6.lt) goto loc_822F7F8C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r30,648
	ctx.r10.s64 = ctx.r30.s64 + 648;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,13580(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13580);
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// li r7,400
	ctx.r7.s64 = 400;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// li r5,320
	ctx.r5.s64 = 320;
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r31,r6,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mulli r11,r31,400
	ctx.r11.s64 = ctx.r31.s64 * 400;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823a7f20
	ctx.lr = 0x822F7F54;
	sub_823A7F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822f7f8c
	if (!ctx.cr6.gt) goto loc_822F7F8C;
	// addi r11,r30,13448
	ctx.r11.s64 = ctx.r30.s64 + 13448;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwsync 
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_822F7F70:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822f7f70
	if (!ctx.cr0.eq) goto loc_822F7F70;
loc_822F7F8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13584, ctx.r11.u32);
loc_822F7F94:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822f7e04
	if (!ctx.cr0.eq) goto loc_822F7E04;
loc_822F7FA4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82634484
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F7DB0) {
	__imp__sub_822F7DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F7FAC) {
	__imp__sub_822F7FAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r11,836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r11,r11,18852
	ctx.r11.s64 = ctx.r11.s64 + 18852;
	// lwz r10,12936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12936);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r4,r5,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x822f7db0
	sub_822F7DB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F7FB0) {
	__imp__sub_822F7FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7FF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F7FF0) {
	__imp__sub_822F7FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F7FF4) {
	__imp__sub_822F7FF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F7FF8) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-21896
	ctx.r3.s64 = ctx.r11.s64 + -21896;
	// bl 0x822ebbc8
	ctx.lr = 0x822F8014;
	sub_822EBBC8(ctx, base);
	// lis r10,-31994
	ctx.r10.s64 = -2096758784;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,18852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18852, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F7FF8) {
	__imp__sub_822F7FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,31788
	ctx.r11.s64 = ctx.r11.s64 + 31788;
	// lwz r10,-12936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12936);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x822f7db0
	sub_822F7DB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F8030) {
	__imp__sub_822F8030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F8070) {
	__imp__sub_822F8070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F8074) {
	__imp__sub_822F8074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8078) {
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
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,31792
	ctx.r31.s64 = ctx.r11.s64 + 31792;
	// lwz r11,-12940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f813c
	if (!ctx.cr6.eq) goto loc_822F813C;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r6,r31,-12944
	ctx.r6.s64 = ctx.r31.s64 + -12944;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,32760
	ctx.r4.s64 = ctx.r11.s64 + 32760;
	// bl 0x82621660
	ctx.lr = 0x822F80B8;
	sub_82621660(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f80e8
	if (!ctx.cr6.lt) goto loc_822F80E8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,-21804
	ctx.r3.s64 = ctx.r11.s64 + -21804;
	// bl 0x822ebbc8
	ctx.lr = 0x822F80D0;
	sub_822EBBC8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_822F80E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r10,-12940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12940, ctx.r10.u32);
	// addi r3,r31,-12944
	ctx.r3.s64 = ctx.r31.s64 + -12944;
	// addi r5,r11,-32720
	ctx.r5.s64 = ctx.r11.s64 + -32720;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82621008
	ctx.lr = 0x822F810C;
	sub_82621008(ctx, base);
	// bl 0x8261f7e0
	ctx.lr = 0x822F8110;
	sub_8261F7E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f8124
	if (ctx.cr6.eq) goto loc_822F8124;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// b 0x822f812c
	goto loc_822F812C;
loc_822F8124:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
loc_822F812C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,-21856
	ctx.r3.s64 = ctx.r11.s64 + -21856;
	// bl 0x822ebbc8
	ctx.lr = 0x822F8138;
	sub_822EBBC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F813C:
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

PPC_WEAK_FUNC(sub_822F8078) {
	__imp__sub_822F8078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822F8158;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,31796
	ctx.r31.s64 = ctx.r11.s64 + 31796;
	// lis r26,-32155
	ctx.r26.s64 = -2107310080;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8184
	if (ctx.cr6.eq) goto loc_822F8184;
	// lwz r11,836(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 836);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822f83dc
	if (ctx.cr6.eq) goto loc_822F83DC;
loc_822F8184:
	// bl 0x822f8bb0
	ctx.lr = 0x822F8188;
	sub_822F8BB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f81a0
	if (!ctx.cr6.eq) goto loc_822F81A0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822F81A0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f81fc
	if (!ctx.cr6.eq) goto loc_822F81FC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,16000
	ctx.r3.s64 = 16000;
	// bl 0x823a3d78
	ctx.lr = 0x822F81C8;
	sub_823A3D78(ctx, base);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f82a8
	if (ctx.cr6.eq) goto loc_822F82A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f82a8
	if (!ctx.cr6.eq) goto loc_822F82A8;
	// li r5,24000
	ctx.r5.s64 = 24000;
	// li r4,4002
	ctx.r4.s64 = 4002;
	// bl 0x823a6148
	ctx.lr = 0x822F81EC;
	sub_823A6148(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,4010
	ctx.r4.s64 = 4010;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x823a6148
	ctx.lr = 0x822F81FC;
	sub_823A6148(ctx, base);
loc_822F81FC:
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r29,-32222
	ctx.r29.s64 = -2111700992;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f82c0
	if (!ctx.cr6.eq) goto loc_822F82C0;
	// lwz r8,-13152(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + -13152);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F8224:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822f8224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F8224;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r6,r8,32688
	ctx.r6.s64 = ctx.r8.s64 + 32688;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r5,r31,-12
	ctx.r5.s64 = ctx.r31.s64 + -12;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// bl 0x82611008
	ctx.lr = 0x822F826C;
	sub_82611008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f82bc
	if (!ctx.cr6.lt) goto loc_822F82BC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,-21664
	ctx.r3.s64 = ctx.r11.s64 + -21664;
	// bl 0x822ebbc8
	ctx.lr = 0x822F8284;
	sub_822EBBC8(ctx, base);
	// stw r27,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bl 0x822f8078
	ctx.lr = 0x822F8290;
	sub_822F8078(ctx, base);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// li r8,-3
	ctx.r8.s64 = -3;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822F82A8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r27.u32);
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822F82BC:
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
loc_822F82C0:
	// lwz r4,836(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 836);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822f82f0
	if (ctx.cr6.lt) goto loc_822F82F0;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x822f837c
	if (ctx.cr6.eq) goto loc_822F837C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F82E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r4,836(r26)
	PPC_STORE_U32(ctx.r26.u32 + 836, ctx.r4.u32);
loc_822F82F0:
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x822f837c
	if (ctx.cr6.eq) goto loc_822F837C;
	// lwz r11,-13152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -13152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f8344
	if (ctx.cr6.lt) goto loc_822F8344;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F833C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f8374
	if (!ctx.cr6.lt) goto loc_822F8374;
loc_822F8344:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-21716
	ctx.r3.s64 = ctx.r11.s64 + -21716;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ebbc8
	ctx.lr = 0x822F8358;
	sub_822EBBC8(ctx, base);
	// bl 0x822f8078
	ctx.lr = 0x822F835C;
	sub_822F8078(ctx, base);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// li r8,-4
	ctx.r8.s64 = -4;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822F8374:
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r30,836(r26)
	PPC_STORE_U32(ctx.r26.u32 + 836, ctx.r30.u32);
loc_822F837C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F83A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// subfe. r31,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822f83b8
	if (ctx.cr0.eq) goto loc_822F83B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,8840
	ctx.r5.s64 = ctx.r11.s64 + 8840;
	// b 0x822f83c0
	goto loc_822F83C0;
loc_822F83B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,8832
	ctx.r5.s64 = ctx.r11.s64 + 8832;
loc_822F83C0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-21768
	ctx.r3.s64 = ctx.r11.s64 + -21768;
	// bl 0x822ebbc8
	ctx.lr = 0x822F83D0;
	sub_822EBBC8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822f83dc
	if (!ctx.cr6.eq) goto loc_822F83DC;
	// bl 0x822f8078
	ctx.lr = 0x822F83DC;
	sub_822F8078(ctx, base);
loc_822F83DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F8150) {
	__imp__sub_822F8150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F83E8) {
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
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// addi r31,r11,31804
	ctx.r31.s64 = ctx.r11.s64 + 31804;
	// lwz r11,-12952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f843c
	if (ctx.cr6.eq) goto loc_822F843C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,-12956
	ctx.r3.s64 = ctx.r31.s64 + -12956;
	// stw r11,-12952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12952, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82621008
	ctx.lr = 0x822F8428;
	sub_82621008(ctx, base);
	// addi r3,r31,-12956
	ctx.r3.s64 = ctx.r31.s64 + -12956;
	// bl 0x82620b20
	ctx.lr = 0x822F8430;
	sub_82620B20(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,-21596
	ctx.r3.s64 = ctx.r11.s64 + -21596;
	// bl 0x822ebbc8
	ctx.lr = 0x822F843C;
	sub_822EBBC8(ctx, base);
loc_822F843C:
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lis r30,-32155
	ctx.r30.s64 = -2107310080;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f84a0
	if (ctx.cr6.eq) goto loc_822F84A0;
	// lwz r4,836(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822f84a0
	if (ctx.cr6.lt) goto loc_822F84A0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,-13152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13152);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F847C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lwz r4,836(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822F8494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r3,r6,-21624
	ctx.r3.s64 = ctx.r6.s64 + -21624;
	// bl 0x822ebbc8
	ctx.lr = 0x822F84A0;
	sub_822EBBC8(ctx, base);
loc_822F84A0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,836(r30)
	PPC_STORE_U32(ctx.r30.u32 + 836, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822F83E8) {
	__imp__sub_822F83E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F84C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// lis r10,-31994
	ctx.r10.s64 = -2096758784;
	// addi r11,r11,31796
	ctx.r11.s64 = ctx.r11.s64 + 31796;
	// addi r30,r10,31800
	ctx.r30.s64 = ctx.r10.s64 + 31800;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,31800(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31800);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822f8504
	if (!ctx.cr6.eq) goto loc_822F8504;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822f8568
	goto loc_822F8568;
loc_822F8504:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,-140
	ctx.r9.s64 = ctx.r11.s64 + -140;
	// srawi r8,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 5;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r5,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x822f8530
	if (!ctx.cr6.gt) goto loc_822F8530;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_822F8530:
	// addi r9,r11,-12940
	ctx.r9.s64 = ctx.r11.s64 + -12940;
	// mulli r11,r10,400
	ctx.r11.s64 = ctx.r10.s64 * 400;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82635430
	ctx.lr = 0x822F8544;
	sub_82635430(ctx, base);
	// lwsync 
loc_822F8548:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822f8548
	if (!ctx.cr0.eq) goto loc_822F8548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822F8568:
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

PPC_WEAK_FUNC(sub_822F84C8) {
	__imp__sub_822F84C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31994
	ctx.r11.s64 = -2096758784;
	// lwz r3,31804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31804);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F8580) {
	__imp__sub_822F8580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F858C) {
	__imp__sub_822F858C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822F8598;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r31,r11,-20232
	ctx.r31.s64 = ctx.r11.s64 + -20232;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f86cc
	if (!ctx.cr6.eq) goto loc_822F86CC;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825c9510
	ctx.lr = 0x822F85C0;
	sub_825C9510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f85d4
	if (!ctx.cr6.lt) goto loc_822F85D4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822F85D4:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r30,r11,48000
	ctx.r30.u64 = ctx.r11.u64 | 48000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F8608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f861c
	if (!ctx.cr6.lt) goto loc_822F861C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822F861C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r29,r9,60928
	ctx.r29.u64 = ctx.r9.u64 | 60928;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// sth r11,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// sth r6,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r6.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r5,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r5.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lfs f1,-21560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21560);
	ctx.f1.f64 = double(temp.f32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F869C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f86b0
	if (!ctx.cr6.lt) goto loc_822F86B0;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
loc_822F86B0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F86CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F86CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F8590) {
	__imp__sub_822F8590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F86D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// lwz r3,-20228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f8704
	if (!ctx.cr6.eq) goto loc_822F8704;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822F8704:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F871C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r3,r9,11,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F86D8) {
	__imp__sub_822F86D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F8734) {
	__imp__sub_822F8734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8263445c
	ctx.lr = 0x822F8740;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-20224
	ctx.r31.s64 = ctx.r11.s64 + -20224;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8830
	if (ctx.cr6.eq) goto loc_822F8830;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822f8830
	if (!ctx.cr6.gt) goto loc_822F8830;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// bge cr6,0x822f8830
	if (!ctx.cr6.lt) goto loc_822F8830;
	// cmpwi cr6,r29,2048
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2048, ctx.xer);
	// ble cr6,0x822f8798
	if (!ctx.cr6.gt) goto loc_822F8798;
	// li r29,2048
	ctx.r29.s64 = 2048;
loc_822F8798:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31994
	ctx.r10.s64 = -2096758784;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r10,31816
	ctx.r10.s64 = ctx.r10.s64 + 31816;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635430
	ctx.lr = 0x822F87BC;
	sub_82635430(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822F87FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,10922
	ctx.r6.s64 = 715784192;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r5,r6,43691
	ctx.r5.u64 = ctx.r6.u64 | 43691;
	// mulhw r4,r11,r5
	ctx.r4.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32)) >> 32;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822F8830:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826344ac
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F8738) {
	__imp__sub_822F8738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634448
	ctx.lr = 0x822F8840;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82635a2c
	ctx.lr = 0x822F8848;
	__savefpr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// fmr f25,f2
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f2.f64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// twllei r5,0
	// lfs f0,-21548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// divw r27,r30,r5
	ctx.r27.s32 = ctx.r30.s32 / ctx.r5.s32;
	// andc r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 & ~ctx.r10.u64;
	// cmpwi cr6,r30,6000
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6000, ctx.xer);
	// twlgei r9,-1
	// ble cr6,0x822f8898
	if (!ctx.cr6.gt) goto loc_822F8898;
	// li r30,6000
	ctx.r30.s64 = 6000;
loc_822F8898:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822f89b0
	if (!ctx.cr6.gt) goto loc_822F89B0;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f27,29332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29332);
	ctx.f27.f64 = double(temp.f32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lfs f28,-21552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21552);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// frsp f26,f13
	ctx.f26.f64 = double(float(ctx.f13.f64));
	// mulli r26,r24,6000
	ctx.r26.s64 = ctx.r24.s64 * 6000;
	// lfs f29,29352(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29352);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-21556(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21556);
	ctx.f30.f64 = double(temp.f32);
	// addi r28,r11,9288
	ctx.r28.s64 = ctx.r11.s64 + 9288;
loc_822F88E4:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f26.f64));
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fsubs f31,f29,f11
	ctx.f31.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// bne cr6,0x822f8914
	if (!ctx.cr6.eq) goto loc_822F8914;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822F8914:
	// rotlwi r10,r31,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// divw r9,r31,r11
	ctx.r9.s32 = ctx.r31.s32 / ctx.r11.s32;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// twlgei r7,-1
	// bge cr6,0x822f8960
	if (!ctx.cr6.lt) goto loc_822F8960;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bne cr6,0x822f8944
	if (!ctx.cr6.eq) goto loc_822F8944;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822F8944:
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// divw r11,r31,r10
	ctx.r11.s32 = ctx.r31.s32 / ctx.r10.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	// b 0x822f8964
	goto loc_822F8964;
loc_822F8960:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
loc_822F8964:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f1,f12,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// bl 0x82638bf0
	ctx.lr = 0x822F8978;
	sub_82638BF0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// add r10,r26,r31
	ctx.r10.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f8,f9,f25
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// fmuls f7,f8,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sthx r8,r9,r28
	PPC_STORE_U16(ctx.r9.u32 + ctx.r28.u32, ctx.r8.u16);
	// blt cr6,0x822f88e4
	if (ctx.cr6.lt) goto loc_822F88E4;
loc_822F89B0:
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-20248
	ctx.r9.s64 = ctx.r11.s64 + -20248;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82635a78
	ctx.lr = 0x822F89CC;
	__restfpr_25(ctx, base);
	// b 0x82634498
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F8838) {
	__imp__sub_822F8838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F89D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634454
	ctx.lr = 0x822F89D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f8ba4
	if (ctx.cr6.lt) goto loc_822F8BA4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x822f8ba4
	if (ctx.cr6.gt) goto loc_822F8BA4;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-20248
	ctx.r30.s64 = ctx.r11.s64 + -20248;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f8b3c
	if (!ctx.cr6.eq) goto loc_822F8B3C;
	// bl 0x822f8590
	ctx.lr = 0x822F8A0C;
	sub_822F8590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f8ba4
	if (!ctx.cr6.eq) goto loc_822F8BA4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8ba4
	if (ctx.cr6.eq) goto loc_822F8BA4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r9,48000
	ctx.r7.u64 = ctx.r9.u64 | 48000;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// ori r28,r8,30464
	ctx.r28.u64 = ctx.r8.u64 | 30464;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// sth r31,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r31.u16);
	// lis r27,-32239
	ctx.r27.s64 = -2112815104;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// sth r6,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r6.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r5,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r5.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,-21560(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -21560);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822F8A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f8ab0
	if (!ctx.cr6.lt) goto loc_822F8AB0;
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
loc_822F8AB0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,-21512
	ctx.r4.s64 = ctx.r9.s64 + -21512;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f2,-21504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21504);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-21508(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21508);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f8838
	ctx.lr = 0x822F8AD4;
	sub_822F8838(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r6,-21528
	ctx.r4.s64 = ctx.r6.s64 + -21528;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f2,-21516(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -21516);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-21520(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21520);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f8838
	ctx.lr = 0x822F8AF8;
	sub_822F8838(ctx, base);
	// lis r3,-32239
	ctx.r3.s64 = -2112815104;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r10,-21544
	ctx.r4.s64 = ctx.r10.s64 + -21544;
	// lfs f2,-21532(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -21532);
	ctx.f2.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f1,-21536(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21536);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f8838
	ctx.lr = 0x822F8B1C;
	sub_822F8838(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F8B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
loc_822F8B3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lis r7,-31992
	ctx.r7.s64 = -2096627712;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r7,9288
	ctx.r11.s64 = ctx.r7.s64 + 9288;
	// mulli r10,r29,12000
	ctx.r10.s64 = ctx.r29.s64 * 12000;
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// std r31,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r31.u64);
	// std r31,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r31.u64);
	// std r31,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r31.u64);
	// stw r31,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r31.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r8,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F8BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F8BA4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826344a4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F89D0) {
	__imp__sub_822F89D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F8BAC) {
	__imp__sub_822F8BAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822f8590
	ctx.lr = 0x822F8BC0;
	sub_822F8590(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,-20236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20236);
	// and r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 & ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F8BB0) {
	__imp__sub_822F8BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F8BE4) {
	__imp__sub_822F8BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634450
	ctx.lr = 0x822F8BF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822f8d90
	if (!ctx.cr6.gt) goto loc_822F8D90;
	// cmpwi cr6,r4,320
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 320, ctx.xer);
	// bgt cr6,0x822f8d90
	if (ctx.cr6.gt) goto loc_822F8D90;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-20204
	ctx.r30.s64 = ctx.r11.s64 + -20204;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f8ce4
	if (!ctx.cr6.eq) goto loc_822F8CE4;
	// bl 0x822f8590
	ctx.lr = 0x822F8C28;
	sub_822F8590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f8d90
	if (!ctx.cr6.eq) goto loc_822F8D90;
	// lwz r3,-32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8d90
	if (ctx.cr6.eq) goto loc_822F8D90;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,16000
	ctx.r7.s64 = 16000;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// li r27,32000
	ctx.r27.s64 = 32000;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lis r26,-32239
	ctx.r26.s64 = -2112815104;
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// sth r31,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r31.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r6,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r6.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r5,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r5.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// lfs f1,-21560(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -21560);
	ctx.f1.f64 = double(temp.f32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822F8CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f8cc4
	if (!ctx.cr6.lt) goto loc_822F8CC4;
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
loc_822F8CC4:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
loc_822F8CE4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// bge cr6,0x822f8d90
	if (!ctx.cr6.lt) goto loc_822F8D90;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// rlwinm r27,r29,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-952
	ctx.r9.s64 = ctx.r9.s64 + -952;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82635430
	ctx.lr = 0x822F8D38;
	sub_82635430(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r31,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r31.u64);
	// std r31,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r31.u64);
	// std r31,24(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24, ctx.r31.u64);
	// stw r31,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r31.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F8D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_822F8D90:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F8BE8) {
	__imp__sub_822F8BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x822f8dec
	if (!ctx.cr6.eq) goto loc_822F8DEC;
	// li r4,8096
	ctx.r4.s64 = 8096;
	// b 0x822f8e14
	goto loc_822F8E14;
loc_822F8DEC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822F8DF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f8df0
	if (!ctx.cr6.eq) goto loc_822F8DF0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subfic r4,r11,8096
	ctx.xer.ca = ctx.r11.u32 <= 8096;
	ctx.r4.s64 = 8096 - ctx.r11.s64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_822F8E14:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca20
	ctx.lr = 0x822F8E1C;
	sub_822ECA20(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822F8E20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f8e20
	if (!ctx.cr6.eq) goto loc_822F8E20;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x822f8e80
	if (ctx.cr6.eq) goto loc_822F8E80;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,10856
	ctx.r10.s64 = ctx.r11.s64 + 10856;
loc_822F8E54:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f8e54
	if (!ctx.cr6.eq) goto loc_822F8E54;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
loc_822F8E68:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822f8e68
	if (!ctx.cr6.eq) goto loc_822F8E68;
loc_822F8E80:
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
}

PPC_WEAK_FUNC(sub_822F8D98) {
	__imp__sub_822F8D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8E98) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-21196
	ctx.r4.s64 = ctx.r11.s64 + -21196;
	// bl 0x822f8d98
	ctx.lr = 0x822F8EB8;
	sub_822F8D98(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-21216
	ctx.r4.s64 = ctx.r10.s64 + -21216;
	// bl 0x822f8d98
	ctx.lr = 0x822F8EC8;
	sub_822F8D98(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-21228
	ctx.r4.s64 = ctx.r9.s64 + -21228;
	// bl 0x822f8d98
	ctx.lr = 0x822F8ED8;
	sub_822F8D98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-21240
	ctx.r4.s64 = ctx.r8.s64 + -21240;
	// bl 0x822f8d98
	ctx.lr = 0x822F8EE8;
	sub_822F8D98(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-21256
	ctx.r4.s64 = ctx.r7.s64 + -21256;
	// bl 0x822f8d98
	ctx.lr = 0x822F8EF8;
	sub_822F8D98(ctx, base);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-21280
	ctx.r4.s64 = ctx.r6.s64 + -21280;
	// bl 0x822f8d98
	ctx.lr = 0x822F8F08;
	sub_822F8D98(ctx, base);
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-21392
	ctx.r4.s64 = ctx.r5.s64 + -21392;
	// bl 0x822f8d98
	ctx.lr = 0x822F8F18;
	sub_822F8D98(ctx, base);
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-21420
	ctx.r4.s64 = ctx.r4.s64 + -21420;
	// bl 0x822f8d98
	ctx.lr = 0x822F8F28;
	sub_822F8D98(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21444
	ctx.r4.s64 = ctx.r11.s64 + -21444;
	// bl 0x822f8d98
	ctx.lr = 0x822F8F38;
	sub_822F8D98(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-21464
	ctx.r4.s64 = ctx.r10.s64 + -21464;
	// bl 0x822f8d98
	ctx.lr = 0x822F8F48;
	sub_822F8D98(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-21488
	ctx.r4.s64 = ctx.r9.s64 + -21488;
	// bl 0x822f8d98
	ctx.lr = 0x822F8F58;
	sub_822F8D98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-21500
	ctx.r4.s64 = ctx.r8.s64 + -21500;
	// bl 0x822f8d98
	ctx.lr = 0x822F8F68;
	sub_822F8D98(ctx, base);
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

PPC_WEAK_FUNC(sub_822F8E98) {
	__imp__sub_822F8E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F8F7C) {
	__imp__sub_822F8F7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F8F80) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-21088
	ctx.r4.s64 = ctx.r11.s64 + -21088;
	// bl 0x822f8d98
	ctx.lr = 0x822F8FA0;
	sub_822F8D98(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-21216
	ctx.r4.s64 = ctx.r10.s64 + -21216;
	// bl 0x822f8d98
	ctx.lr = 0x822F8FB0;
	sub_822F8D98(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-21112
	ctx.r4.s64 = ctx.r9.s64 + -21112;
	// bl 0x822f8d98
	ctx.lr = 0x822F8FC0;
	sub_822F8D98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-21140
	ctx.r4.s64 = ctx.r8.s64 + -21140;
	// bl 0x822f8d98
	ctx.lr = 0x822F8FD0;
	sub_822F8D98(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-21152
	ctx.r4.s64 = ctx.r7.s64 + -21152;
	// bl 0x822f8d98
	ctx.lr = 0x822F8FE0;
	sub_822F8D98(ctx, base);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-21164
	ctx.r4.s64 = ctx.r6.s64 + -21164;
	// bl 0x822f8d98
	ctx.lr = 0x822F8FF0;
	sub_822F8D98(ctx, base);
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-21240
	ctx.r4.s64 = ctx.r5.s64 + -21240;
	// bl 0x822f8d98
	ctx.lr = 0x822F9000;
	sub_822F8D98(ctx, base);
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

PPC_WEAK_FUNC(sub_822F8F80) {
	__imp__sub_822F8F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F9014) {
	__imp__sub_822F9014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9018) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-21004
	ctx.r4.s64 = ctx.r11.s64 + -21004;
	// bl 0x822f8d98
	ctx.lr = 0x822F9038;
	sub_822F8D98(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-21216
	ctx.r4.s64 = ctx.r10.s64 + -21216;
	// bl 0x822f8d98
	ctx.lr = 0x822F9048;
	sub_822F8D98(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-21028
	ctx.r4.s64 = ctx.r9.s64 + -21028;
	// bl 0x822f8d98
	ctx.lr = 0x822F9058;
	sub_822F8D98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-21056
	ctx.r4.s64 = ctx.r8.s64 + -21056;
	// bl 0x822f8d98
	ctx.lr = 0x822F9068;
	sub_822F8D98(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-21152
	ctx.r4.s64 = ctx.r7.s64 + -21152;
	// bl 0x822f8d98
	ctx.lr = 0x822F9078;
	sub_822F8D98(ctx, base);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-21164
	ctx.r4.s64 = ctx.r6.s64 + -21164;
	// bl 0x822f8d98
	ctx.lr = 0x822F9088;
	sub_822F8D98(ctx, base);
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-21240
	ctx.r4.s64 = ctx.r5.s64 + -21240;
	// bl 0x822f8d98
	ctx.lr = 0x822F9098;
	sub_822F8D98(ctx, base);
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

PPC_WEAK_FUNC(sub_822F9018) {
	__imp__sub_822F9018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F90AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F90AC) {
	__imp__sub_822F90AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F90B0) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-20844
	ctx.r4.s64 = ctx.r11.s64 + -20844;
	// bl 0x822f8d98
	ctx.lr = 0x822F90D0;
	sub_822F8D98(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-21216
	ctx.r4.s64 = ctx.r10.s64 + -21216;
	// bl 0x822f8d98
	ctx.lr = 0x822F90E0;
	sub_822F8D98(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-21164
	ctx.r4.s64 = ctx.r9.s64 + -21164;
	// bl 0x822f8d98
	ctx.lr = 0x822F90F0;
	sub_822F8D98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-21240
	ctx.r4.s64 = ctx.r8.s64 + -21240;
	// bl 0x822f8d98
	ctx.lr = 0x822F9100;
	sub_822F8D98(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-21256
	ctx.r4.s64 = ctx.r7.s64 + -21256;
	// bl 0x822f8d98
	ctx.lr = 0x822F9110;
	sub_822F8D98(ctx, base);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-20872
	ctx.r4.s64 = ctx.r6.s64 + -20872;
	// bl 0x822f8d98
	ctx.lr = 0x822F9120;
	sub_822F8D98(ctx, base);
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-20920
	ctx.r4.s64 = ctx.r5.s64 + -20920;
	// bl 0x822f8d98
	ctx.lr = 0x822F9130;
	sub_822F8D98(ctx, base);
	// lis r4,-31991
	ctx.r4.s64 = -2096562176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-20200(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -20200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f9170
	if (ctx.cr6.eq) goto loc_822F9170;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,-21152
	ctx.r4.s64 = ctx.r11.s64 + -21152;
	// bl 0x822f8d98
	ctx.lr = 0x822F9150;
	sub_822F8D98(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-20948
	ctx.r4.s64 = ctx.r10.s64 + -20948;
	// bl 0x822f8d98
	ctx.lr = 0x822F9160;
	sub_822F8D98(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-20972
	ctx.r4.s64 = ctx.r9.s64 + -20972;
	// b 0x822f9178
	goto loc_822F9178;
loc_822F9170:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,-21500
	ctx.r4.s64 = ctx.r11.s64 + -21500;
loc_822F9178:
	// bl 0x822f8d98
	ctx.lr = 0x822F917C;
	sub_822F8D98(ctx, base);
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

PPC_WEAK_FUNC(sub_822F90B0) {
	__imp__sub_822F90B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9190) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-20744
	ctx.r4.s64 = ctx.r11.s64 + -20744;
	// bl 0x822f8d98
	ctx.lr = 0x822F91B0;
	sub_822F8D98(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-21216
	ctx.r4.s64 = ctx.r10.s64 + -21216;
	// bl 0x822f8d98
	ctx.lr = 0x822F91C0;
	sub_822F8D98(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-20764
	ctx.r4.s64 = ctx.r9.s64 + -20764;
	// bl 0x822f8d98
	ctx.lr = 0x822F91D0;
	sub_822F8D98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-20784
	ctx.r4.s64 = ctx.r8.s64 + -20784;
	// bl 0x822f8d98
	ctx.lr = 0x822F91E0;
	sub_822F8D98(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-20812
	ctx.r4.s64 = ctx.r7.s64 + -20812;
	// bl 0x822f8d98
	ctx.lr = 0x822F91F0;
	sub_822F8D98(ctx, base);
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

PPC_WEAK_FUNC(sub_822F9190) {
	__imp__sub_822F9190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F9204) {
	__imp__sub_822F9204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82634458
	ctx.lr = 0x822F9210;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-20548
	ctx.r4.s64 = ctx.r11.s64 + -20548;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822f8d98
	ctx.lr = 0x822F9230;
	sub_822F8D98(ctx, base);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-20604
	ctx.r4.s64 = ctx.r10.s64 + -20604;
	// bl 0x822f8d98
	ctx.lr = 0x822F9240;
	sub_822F8D98(ctx, base);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-20608
	ctx.r4.s64 = ctx.r9.s64 + -20608;
	// bl 0x822f8d98
	ctx.lr = 0x822F9250;
	sub_822F8D98(ctx, base);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-20616
	ctx.r4.s64 = ctx.r8.s64 + -20616;
	// bl 0x822f8d98
	ctx.lr = 0x822F9260;
	sub_822F8D98(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-20640
	ctx.r4.s64 = ctx.r7.s64 + -20640;
	// bl 0x822f8d98
	ctx.lr = 0x822F9270;
	sub_822F8D98(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F9280:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822f9280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F9280;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-20656
	ctx.r10.s64 = ctx.r10.s64 + -20656;
loc_822F9294:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f9294
	if (!ctx.cr6.eq) goto loc_822F9294;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822F92A8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822f92a8
	if (!ctx.cr6.eq) goto loc_822F92A8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822f9300
	if (ctx.cr6.eq) goto loc_822F9300;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-20664
	ctx.r10.s64 = ctx.r10.s64 + -20664;
loc_822F92D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f92d4
	if (!ctx.cr6.eq) goto loc_822F92D4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822F92E8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822f92e8
	if (!ctx.cr6.eq) goto loc_822F92E8;
loc_822F9300:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822f9340
	if (ctx.cr6.eq) goto loc_822F9340;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-20672
	ctx.r10.s64 = ctx.r10.s64 + -20672;
loc_822F9314:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f9314
	if (!ctx.cr6.eq) goto loc_822F9314;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822F9328:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822f9328
	if (!ctx.cr6.eq) goto loc_822F9328;
loc_822F9340:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822f9380
	if (ctx.cr6.eq) goto loc_822F9380;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-20688
	ctx.r10.s64 = ctx.r10.s64 + -20688;
loc_822F9354:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f9354
	if (!ctx.cr6.eq) goto loc_822F9354;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822F9368:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822f9368
	if (!ctx.cr6.eq) goto loc_822F9368;
loc_822F9380:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f8d98
	ctx.lr = 0x822F938C;
	sub_822F8D98(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826344a8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F9208) {
	__imp__sub_822F9208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F9394) {
	__imp__sub_822F9394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9398) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,26164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26164);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F9398) {
	__imp__sub_822F9398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F93A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x822f93d4
	if (!ctx.cr6.gt) goto loc_822F93D4;
	// addi r8,r3,26172
	ctx.r8.s64 = ctx.r3.s64 + 26172;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_822F93B4:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f93d4
	if (ctx.cr6.eq) goto loc_822F93D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// blt cr6,0x822f93b4
	if (ctx.cr6.lt) goto loc_822F93B4;
loc_822F93D4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822f93e4
	if (!ctx.cr6.gt) goto loc_822F93E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
loc_822F93E4:
	// lwz r3,26556(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26556);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F93A0) {
	__imp__sub_822F93A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F93EC) {
	__imp__sub_822F93EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F93F0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,26172
	ctx.r11.s64 = ctx.r3.s64 + 26172;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822F93F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f93f8
	if (!ctx.cr6.eq) goto loc_822F93F8;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822F9418:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f9418
	if (!ctx.cr6.eq) goto loc_822F9418;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 384, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822F9448:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f9448
	if (!ctx.cr6.eq) goto loc_822F9448;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,26172
	ctx.r3.s64 = ctx.r10.s64 + 26172;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x82635430
	sub_82635430(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F93F0) {
	__imp__sub_822F93F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9474) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F9474) {
	__imp__sub_822F9474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9478) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r31,7608
	ctx.r3.s64 = ctx.r31.s64 + 7608;
	// bl 0x822fd570
	ctx.lr = 0x822F94A8;
	sub_822FD570(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x822fbcc8
	ctx.lr = 0x822F94B8;
	sub_822FBCC8(ctx, base);
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

PPC_WEAK_FUNC(sub_822F9478) {
	__imp__sub_822F9478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F94D0) {
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
	// lwz r11,2872(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2872);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r31,23188(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23188);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822f952c
	if (!ctx.cr6.gt) goto loc_822F952C;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x822f952c
	if (ctx.cr6.gt) goto loc_822F952C;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r9,23188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23188, ctx.r9.u32);
	// addi r4,r11,21888
	ctx.r4.s64 = ctx.r11.s64 + 21888;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82635430
	ctx.lr = 0x822F9514;
	sub_82635430(ctx, base);
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
loc_822F952C:
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x822f954c
	if (ctx.cr6.eq) goto loc_822F954C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x822fc140
	ctx.lr = 0x822F9544;
	sub_822FC140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822f9550
	if (ctx.cr6.gt) goto loc_822F9550;
loc_822F954C:
	// li r3,-26880
	ctx.r3.s64 = -26880;
loc_822F9550:
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

PPC_WEAK_FUNC(sub_822F94D0) {
	__imp__sub_822F94D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F9564) {
	__imp__sub_822F9564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F9568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2872(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2872);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x822fbcc8
	sub_822FBCC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F9568) {
	__imp__sub_822F9568(ctx, base);
}

